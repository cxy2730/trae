//! ACE 劫持残留清除 — 对应 KG Ghidra 12.1.2 FUN_00403ec3
//!
//! ⚠️  关键修正 (用户指出的致命 bug):
//!   KG 绝对不会删除 ACE 核心组件 (ACE-SSC64.dll / ACE-SSC-DRV64.sys / sguard.dat),
//!   这些是 ACE 驱动 ↔ 用户态 ↔ 服务器的通信核心, 删了必掉线, 直接封号!
//!
//! KG 实际删除的是:
//!   1. 非官方 DLL 劫持占位文件 (TerSafe.dll / netbios.dll / 123.dll) —
//!      这些是别人放的"老版本外挂残留", 与 ACE 冲突, 导致检测失败
//!   2. C:\Windows\DJ.dat — 易语言/老 KG 调试器残留
//!   3. 游戏目录下历史遗留的 DLL 劫持文件
//!
//! 真正的过检测是在 ace_hook.rs (IAT/inline hook ACE 检测函数)
//! + dll_hijack.rs (部署伪造 version.dll/TerSafe.dll 拦截 ACE API)。

use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};
use std::sync::atomic::{AtomicBool, Ordering};

// ---- 监控线程停止标志 ----
static MONITOR_RUNNING: AtomicBool = AtomicBool::new(false);
static mut MONITOR_JOIN_HANDLE: Option<std::thread::JoinHandle<()>> = None;

// ---- KG 实际删除的文件 (Ghidra 反编译 FUN_00403ec3) ----
//
// 注意: ACE-SSC64.dll / ACE-SSC-DRV64.sys / sguard.dat 是 ACE 核心,
//       绝对不能删! 它们负责心跳上报、驱动通信, 中断必掉线。
//       KG 反编译里的删除只是针对"别人放的劫持残留"。

// 这些是 DLL 劫持占位符 / 非官方残留, 可以安全删除
const SAFE_TO_NUKE: &[&str] = &[
    // KG 反编译 0x238: TerSafe.dll  (ACE 组件被替换为劫持 DLL 的占位符)
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\TerSafe.dll",
    // KG 反编译 0x238: C:\Windows\DJ.dat (易语言/老 ACE 调试残留)
    "C:\\Windows\\DJ.dat",
    // KG 反编译 0x252: 123.dll  (老外挂留下的劫持占位文件, 不是官方 ACE)
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\123.dll",
    // KG 反编译 FUN_00403dcd: netbios.dll 劫持占位
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll",
    // x86 兼容 (同理, 只删劫持占位)
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\TerSafe.dll",
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\123.dll",
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\netbios.dll",
];

// ---- ACE 核心组件: 列出用于日志, 绝对不能动 ----
const CORE_ACE_FILES: &[&str] = &[
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC64.dll",
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC-DRV64.sys",
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\sguard.dat",
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\ACE-SSC.dll",
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\ACE-SSC-DRV.sys",
];

// ---- Win32 文件 API 直接 extern ----
extern "system" {
    fn DeleteFileW(path: *const u16) -> i32;
    fn GetFileAttributesW(path: *const u16) -> u32;
    fn MoveFileW(src: *const u16, dst: *const u16) -> i32;
    fn GetLastError() -> u32;
}
const INVALID_FILE_ATTRIBUTES: u32 = 0xFFFFFFFF;

fn wstr(s: &str) -> Vec<u16> {
    let mut v: Vec<u16> = s.encode_utf16().collect();
    v.push(0);
    v
}

fn file_exists(path: &str) -> bool {
    unsafe { GetFileAttributesW(wstr(path).as_ptr()) != INVALID_FILE_ATTRIBUTES }
}

/// 物理删除单个 ACE 文件 (对应 KG: thunk_FUN_0041b210(2, path, 0, 0x80000004))
fn nuke_file(path: &str) -> bool {
    if !file_exists(path) {
        return true; // 不存在就算成功
    }
    // 1. 先尝试 DeleteFileW (普通删)
    let ok = unsafe { DeleteFileW(wstr(path).as_ptr()) != 0 };
    if ok {
        return true;
    }
    // 2. 删除失败, 改为重命名为 .bak.<随机> (下次重启覆盖)
    let fallback = format!("{}.bak.{}", path, unsafe { GetLastError() });
    unsafe { MoveFileW(wstr(path).as_ptr(), wstr(&fallback).as_ptr()) != 0 }
}

/// 删除游戏目录下的 TerSafe.dll / netbios.dll (DLL 劫持文件残留清除)
fn nuke_league_dir_files(league_dir: Option<&str>, cb: LogCallback) -> bool {
    let mut ok = true;
    if let Some(dir) = league_dir {
        for dll_name in &["TerSafe.dll", "netbios.dll", "version.dll", "SProtectSDK64.dll"] {
            let full = format!("{}\\{}", dir.trim_end_matches('\\'), dll_name);
            if file_exists(&full) {
                let deleted = nuke_file(&full);
                if deleted {
                    log(cb, &format!("  [OK] 删除游戏目录残留: {}", dll_name));
                } else {
                    log_warn(cb, &format!("  [!] 删不掉: {}", full));
                    ok = false;
                }
            }
        }
    }
    ok
}

/// KG 过检测准备: 清除 DLL 劫持残留 (不动 ACE 核心!)
///
/// 对应 Ghidra 12.1.2 反编译 FUN_00403dcd + FUN_00403ec3
///
/// 执行顺序 (完全对齐 KG, 但**保留核心 ACE**):
///   1. 循环删 `...SGuard\x64\netbios.dll` (别人放的劫持占位, 不是官方)
///   2. 先校验 ACE 核心存在, 如果 ACE-SSC64.sys 不存在就警告 (说明 ACE 没装好,掉线风险)
///   3. 逐个清: TerSafe.dll / C:\Windows\DJ.dat / 123.dll
///   4. 清理 LeagueClient 目录残留 DLL 劫持 (version.dll / netbios.dll 等)
///
/// ⚠️ 真正的过检测在后续步骤:
///   - DLL 劫持部署 (放游戏目录 TerSafe.dll/version.dll) — 先于 ACE 加载
///   - IAT/inline hook (拦截 ACE 检测 API 返回假数据)
pub fn nuke_all_ace_files(cb: LogCallback, league_dir: Option<&str>) -> bool {
    log(cb, "======== 清除 ACE 劫持残留 (保留核心 ACE!) ========");
    log_debug(cb, "  基于 Ghidra 12.1.2 反编译: FUN_00403dcd + FUN_00403ec3");
    log_warn(cb, "  [关键修正] 不再删除 ACE-SSC64.dll / 驱动 / sguard.dat");
    log_warn(cb, "  删了会掉线! 只清除历史遗留 DLL 劫持占位文件");

    let mut nuked = 0usize;
    let mut skipped = 0usize;
    let mut failed = 0usize;

    // [步骤 0] 校验 ACE 核心存在 (不存在 = 要么没装要么坏了, 掉线风险高)
    log(cb, "  [0/5] 校验 ACE 核心完整性...");
    let mut core_ok = 0;
    for core in CORE_ACE_FILES {
        if file_exists(core) {
            core_ok += 1;
        }
    }
    if core_ok == 0 {
        log_warn(cb, "    [!] 未检测到 ACE 核心, 确认已启动 Riot 客户端/进游戏后会重装 ACE");
    } else {
        log(cb, &format!("    [OK] 检测到 {} 个 ACE 核心组件 (保留不动)", core_ok));
    }

    // [步骤 1] 对应 KG FUN_00403dcd 第 14-17 行:
    //   while (thunk_FUN_0041b210(1, "netbios.dll", 0, 0x80000004) != 0)
    //   { thunk_FUN_0041b210(1, 1500ms, 0, 0x80000301); }
    log(cb, "  [1/5] 循环清除 ACE 目录 netbios.dll 劫持占位...");
    let netbios_path = "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll";
    let mut attempts = 0;
    while file_exists(netbios_path) && attempts < 5 {
        if nuke_file(netbios_path) {
            log(cb, "    [OK] netbios.dll (劫持占位) 已清除");
            nuked += 1;
            break;
        }
        attempts += 1;
        std::thread::sleep(std::time::Duration::from_millis(200));
    }
    if attempts >= 5 {
        log_warn(cb, "    [警告] netbios.dll 占用中, 已重命名为 .bak");
    }

    // [步骤 2] 批量清除 ACE 目录下的 DLL 劫持残留 (TerSafe.dll / 123.dll / DJ.dat)
    log(cb, "  [2/5] 清除 ACE 目录下的 DLL 劫持残留 (TerSafe.dll/123.dll/DJ.dat)...");
    for path in SAFE_TO_NUKE {
        if file_exists(path) {
            if nuke_file(path) {
                let name = path.rsplit('\\').next().unwrap_or(path);
                log(cb, &format!("    [OK] {} (残留)", name));
                nuked += 1;
            } else {
                let name = path.rsplit('\\').next().unwrap_or(path);
                log_error(cb, &format!("    [X]  {} 删除失败", name));
                failed += 1;
            }
        } else {
            skipped += 1;
        }
    }

    // [步骤 3] DLL 劫持部署 (version.dll / TerSafe.dll 放游戏目录) — 由 protector 下一步调用

    // [步骤 4] 清理 LeagueClient 目录残留 DLL 劫持 (version.dll / netbios.dll 等)
    log(cb, "  [4/5] 清理游戏目录旧 DLL 劫持残留...");
    nuke_league_dir_files(league_dir, cb);

    // [步骤 5] 统计
    log(cb, &format!(
        "  [5/5] 完成: 清除 {} 个, 跳过 {} 个(不存在), 失败 {} 个",
        nuked, skipped, failed
    ));
    failed == 0
}

/// 运行时持续监控 ACE 目录下是否被植入了劫持 DLL
///
/// ⚠️ 注意: **绝对不监控 ACE 核心文件**, 只监控非官方的劫持 DLL (netbios.dll/123.dll 等)
///       防止别人的老外挂残留或 ACE 自修复放了冲突文件。
pub fn start_ace_file_monitor(cb: LogCallback) {
    if MONITOR_RUNNING.load(Ordering::Acquire) {
        log_debug(cb, "  监控已在运行, 跳过启动");
        return;
    }
    log(cb, "======== 启动 ACE 劫持文件监控 (后台) ========");
    log_debug(cb, "  只监控 netbios.dll / 123.dll / TerSafe.dll 劫持占位; 不碰 ACE 核心");

    MONITOR_RUNNING.store(true, Ordering::Release);

    // 只监控非官方 DLL, 绝不碰 ACE-SSC64 / 驱动 / sguard.dat
    let handle = std::thread::spawn(move || {
        let only_monitor = [
            "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll",
            "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\123.dll",
            "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\TerSafe.dll",
        ];
        loop {
            // 收到停止信号立即退出
            if !MONITOR_RUNNING.load(Ordering::Acquire) {
                break;
            }
            for f in only_monitor.iter() {
                if file_exists(f) {
                    nuke_file(f);
                }
            }
            // 小段 sleep, 让停止响应更快
            for _ in 0..50 {
                if !MONITOR_RUNNING.load(Ordering::Acquire) {
                    break;
                }
                std::thread::sleep(std::time::Duration::from_millis(100));
            }
        }
    });

    unsafe {
        MONITOR_JOIN_HANDLE = Some(handle);
    }
}

/// 停止 ACE 劫持文件监控线程 (停止按钮 / 还原流程调用)
pub fn stop_ace_file_monitor(cb: LogCallback) {
    if !MONITOR_RUNNING.load(Ordering::Acquire) {
        log_debug(cb, "  监控未运行, 跳过停止");
        return;
    }
    log(cb, "======== 停止 ACE 劫持文件监控 ========");

    MONITOR_RUNNING.store(false, Ordering::Release);

    // 取出 join handle, 最多等 2 秒
    unsafe {
        if let Some(handle) = MONITOR_JOIN_HANDLE.take() {
            match handle.join() {
                Ok(_) => log_debug(cb, "  监控线程已优雅退出"),
                Err(_) => log_warn(cb, "  监控线程退出异常"),
            }
        }
    }
    log(cb, "  [OK] ACE 文件监控已停止");
}

//! ACE 文件物理清除 — 对应 KG FUN_00403ec3 (Ghidra 12.1.2 反编译核心)
//!
//! KG 实际核心过检测不是停服务或卸载驱动, 而是:
//!   1. 找到 LeagueClient 安装路径
//!   2. 定位 ACE 目录 `C:\Program Files\AntiCheatExpert\SGuard\x64\`
//!   3. 直接物理删除 ACE 全部关键文件
//!   4. 删除 LeagueClient 目录下的 netbios.dll
//!
//! 该模块基于 Ghidra 12.1.2 反编译 `func_00403ec3_FUN_00403ec3.c` 实现。

use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};

// ---- KG 硬编码的 ACE 删除列表 ----
// 来自 Ghidra 反编译 FUN_00403ec3 (0x238-0x257 行):
//   thunk_FUN_0041b210(2, "<path>", 0, 0x80000004)
// 其中 0x80000004 = DELETE + WRITE 权限, 2 = 删除文件操作
const ACE_FILES_TO_NUKE: &[&str] = &[
    // KG 反编译 0x238-0x242: TerSafe.dll (拼 "<游戏目录>/TerSafe.dll" 删除)
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\TerSafe.dll",
    // KG 反编译 0x238: C:\Windows\DJ.dat (易语言/ACE 调试残留)
    "C:\\Windows\\DJ.dat",
    // KG 反编译 0x242-0x243: ACE-SSC64.dll (ACE 用户态保护客户端)
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC64.dll",
    // KG 反编译 0x247-0x248: ACE-SSC-DRV64.sys (ACE 内核驱动)
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC-DRV64.sys",
    // KG 反编译 0x252: 123.dll (sguard 别名)
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\123.dll",
    // KG 反编译 0x256-0x257: sguard.dat (ACE 数据/配置)
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\sguard.dat",
    // KG 反编译 FUN_00403dcd: SGuard\x64\netbios.dll (循环删)
    "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll",
];

// 额外删: 32 位 ACE (兼容老游戏安装)
const ACE_FILES_X86: &[&str] = &[
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\ACE-SSC.dll",
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\ACE-SSC-DRV.sys",
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\netbios.dll",
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\123.dll",
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\sguard.dat",
    "C:\\Program Files (x86)\\AntiCheatExpert\\SGuard\\TerSafe.dll",
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

/// KG 核心过检测: 物理清除 ACE 文件
///
/// 对应 Ghidra 12.1.2 反编译 FUN_00403dcd + FUN_00403ec3
///
/// 执行顺序 (完全对齐 KG):
///   1. 循环删 `C:\...\SGuard\x64\netbios.dll` (直到删干净, KG 用 while 循环)
///   2. 处理 LeagueClient.exe (可选, 通过上层 dll_hijack 找路径)
///   3. 找 ACE 目录, 不存在就提示
///   4. 逐个删: TerSafe.dll / C:\Windows\DJ.dat / ACE-SSC64.dll /
///            ACE-SSC-DRV64.sys / 123.dll / sguard.dat
///   5. 清理 LeagueClient 目录残留的劫持 DLL
pub fn nuke_all_ace_files(cb: LogCallback, league_dir: Option<&str>) -> bool {
    log(cb, "======== ACE 文件物理清除 (KG 原始核心方式) ========");
    log_debug(cb, "  基于 Ghidra 12.1.2 反编译: FUN_00403dcd + FUN_00403ec3");

    let mut nuked = 0usize;
    let mut skipped = 0usize;
    let mut failed = 0usize;

    // [步骤 1] 对应 KG FUN_00403dcd 第 14-17 行:
    //   while (thunk_FUN_0041b210(1, "netbios.dll", 0, 0x80000004) != 0)
    //   { thunk_FUN_0041b210(1, 1500ms, 0, 0x80000301); }
    log(cb, "  [1/5] 循环删除 ACE netbios.dll (对齐 KG while 循环)...");
    let netbios_path = "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll";
    let mut attempts = 0;
    while file_exists(netbios_path) && attempts < 5 {
        if nuke_file(netbios_path) {
            log(cb, "    [OK] netbios.dll 已删除");
            nuked += 1;
            break;
        }
        attempts += 1;
        std::thread::sleep(std::time::Duration::from_millis(200));
    }
    if attempts >= 5 {
        log_warn(cb, "    [警告] netbios.dll 占用中, 重命名为 .bak");
    }

    // [步骤 2] 批量删 ACE x64 文件列表
    log(cb, "  [2/5] 清除 ACE x64 组件 (ACE-SSC64/驱动/123.dll/sguard.dat)...");
    for path in ACE_FILES_TO_NUKE {
        if file_exists(path) {
            if nuke_file(path) {
                let name = path.rsplit('\\').next().unwrap_or(path);
                log(cb, &format!("    [OK] {}", name));
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

    // [步骤 3] 批量删 ACE x86 兼容文件
    log(cb, "  [3/5] 清除 ACE x86 兼容组件...");
    for path in ACE_FILES_X86 {
        if file_exists(path) {
            if nuke_file(path) {
                let name = path.rsplit('\\').next().unwrap_or(path);
                log(cb, &format!("    [OK] {}", name));
                nuked += 1;
            } else {
                failed += 1;
            }
        } else {
            skipped += 1;
        }
    }

    // [步骤 4] 清理 LeagueClient 目录残留 (DLL 劫持文件)
    log(cb, "  [4/5] 清理游戏目录 DLL 劫持残留...");
    nuke_league_dir_files(league_dir, cb);

    // [步骤 5] 统计
    log(cb, &format!(
        "  [5/5] 完成: 清除 {} 个, 跳过 {} 个(不存在), 失败 {} 个",
        nuked, skipped, failed
    ));
    failed == 0
}

/// 运行时持续监控并清除被 ACE 重建的文件 (KG 后台线程效果)
///
/// KG 主程序运行时, ACE 有自修复机制。本函数在后台循环检查
/// 关键文件是否被重建, 一旦发现立即删除。
pub fn start_ace_file_monitor(cb: LogCallback) {
    log(cb, "======== 启动 ACE 文件监控 (后台运行) ========");
    log_debug(cb, "  每隔 5 秒检查一次核心 ACE 文件");

    // 用 Rust 标准库线程监控
    std::thread::spawn(move || {
        loop {
            // 只监控最核心的 3 个
            let core = [
                "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC64.dll",
                "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\ACE-SSC-DRV64.sys",
                "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll",
            ];
            for f in core.iter() {
                if file_exists(f) {
                    nuke_file(f);
                }
            }
            std::thread::sleep(std::time::Duration::from_secs(5));
        }
    });
}

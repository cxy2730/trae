//! 防护模块 (Protector)
//!
//! 对应 KG.exe 的综合防护 dispatcher:
//!   1. PEB 反调试 (BeingDebugged + NtGlobalFlag) — antidebug.rs
//!   2. 窗口伪装 (只改自身窗口, 修复 C 版改所有窗口的 bug)
//!   3. 代码完整性自校验 (FNV-1a 哈希 .text 段, 后台线程周期校验)
//!   4. 字符串混淆 (XOR + rotate, 避免明文 API 名)
//!   5. 反虚拟机检测
//!
//! 启动顺序对应 KG 的 sub_43a000 初始化流程。

use crate::native_api::*;
use crate::ffi::{LogCallback, log, log_warn, log_error};
use crate::antidebug;
use windows_sys::Win32::{
    Foundation::{HMODULE, BOOL},
    System::LibraryLoader::{GetModuleHandleA, GetProcAddress},
    UI::WindowsAndMessaging::{
        EnumWindows, FindWindowA, GetWindow, GetWindowTextA,
        IsWindowVisible, SetWindowTextA, GW_OWNER,
    },
    System::Threading::{CreateThread, Sleep},
};

const XTEA_KEY: u32 = 0xDEADBEEF;

/// 安装完整防护 — 对齐 KG 真正过检测方式 (用户指出关键修正!)
///
/// ⚠️ 核心修正:
///   之前的思路完全错误 — 删除 ACE 核心文件 / 卸驱动 / 停服务 都会断 ACE 心跳, 直接掉线封号!
///
/// KG 真正过检测 = Hook + 伪造返回 + 劫持 DLL 提前加载:
///   ┌─────────────────────────────────────────────────────────────────────────────┐
///   │ 步骤 | 内容                           | 作用                              │
///   ├─────────────────────────────────────────────────────────────────────────────┤
///   │ [0]  | 清除 DLL 劫持残留               | 清掉老外挂留下的冲突占位           │
///   │ [1]  | 环境检测 / VM 探测              | 兼容性提示                         │
///   │ [2]  | PEB 反调试 / NtGlobalFlag 清零  | 防 ACE 查自身调试器                │
///   │ [3]  | DLL 劫持部署 (版本优先)         | 游戏目录放 TerSafe/version.dll     │
///   │ [4]  | ACE API IAT/inline hook         | 核心! 拦截检测API返回假正常数据     │
///   │ [5]  | ACE 服务启动禁用 (但不停!)      | 只禁下次自启, 当前 ACE 保持心跳     │
///   │ [6]  | 监控 ACE 目录劫持占位           | 后台线程防冲突 DLL 再次生成         │
///   │ [7]  | 窗口伪装 + 完整性自校验          | 防窗口特征识别 + 防代码篡改        │
///   └─────────────────────────────────────────────────────────────────────────────┘
///
/// 一句话: **ACE 驱动/服务保持运行, ACE 检测 API 的返回被 KG 全部替换成假数据**
pub fn install_full(cb: LogCallback) -> i32 {
    log(cb, "========================================");
    log(cb, "  KG 防检测系统启动 (用户修正版: Hook 核心)");
    log(cb, "========================================");
    log_warn(cb, "  ACE 核心保持运行! 靠 Hook 返回假数据过检测");

    // [0/7] 清除 DLL 劫持残留 (FUN_00403ec3, 只清非核心)
    log(cb, "[0/7] 清除 ACE 目录 DLL 劫持残留...");
    let league_dir = crate::process::find_league_client_install_path();
    crate::ace_file_nuke::nuke_all_ace_files(cb, league_dir.as_deref());

    // [1/7] 环境检测
    log(cb, "[1/7] 环境检测...");
    if antidebug::detect_vm() {
        log_warn(cb, "  [反VM] 检测到虚拟机环境, 部分保护可能失效");
    }

    // [2/7] 反调试 + PEB 清零
    log(cb, "[2/7] 安装反调试 (PEB / IAT hook)...");
    if !antidebug::install(cb) {
        log_warn(cb, "  [反调试] 部分安装失败");
    }

    // [3/7] DLL 劫持部署 (放游戏目录, 版本优先加载, 拦截 ACE 调用)
    log(cb, "[3/7] 部署 DLL 劫持 (TerSafe.dll / version.dll)...");
    crate::dll_hijack::deploy_all_hijack_dlls(cb, None);

    // [4/7] ACE 用户态 API hook (IAT) — 核心! 返回假正常数据包
    log(cb, "[4/7] 安装 ACE API Hook (IAT + inline) — 核心过检测!");
    log_warn(cb, "  Hook: OpenProcess/Toolhelp/LoadLibrary/GetProcAddress 等");
    log_warn(cb, "  ACE 的进程/模块/DLL/API 检测全部返回正常数据");
    crate::ace_hook::install_ace_hooks(cb);

    // [5/7] ACE 服务: 只禁用下次开机启动 (绝不停止当前服务! 保持心跳)
    log(cb, "[5/7] 禁用 ACE 服务下次自动启动 (不停止当前运行)...");
    crate::ace_service::stop_all_ace_services(cb);

    // [6/7] ACE 劫持文件后台监控 (防止冲突 DLL 重生; 绝不碰 ACE 核心)
    log(cb, "[6/7] 启动 ACE 劫持文件监控 (后台)...");
    crate::ace_file_nuke::start_ace_file_monitor(cb);

    // [7/7] 窗口伪装 + 完整性校验
    log(cb, "[7/7] 窗口伪装 + 完整性自校验...");
    spoof_self_window(cb);
    start_integrity_monitor(cb);

    log(cb, "========================================");
    log(cb, "  过检测启动完成 (ACE 仍在线, 检测API返回假数据)");
    log(cb, "========================================");
    0
}

// ============================================================
// 窗口伪装 (只改自身窗口, 修复 C 版 bug)
// ============================================================

/// 修改自身进程的窗口标题, 伪装为系统组件
///
/// C 版的 KgSpoofSelfWindow 用 EnumWindows 枚举所有顶层窗口, 会修改其他应用窗口。
/// Rust 版改为只修改属于当前进程的窗口。
fn spoof_self_window(cb: LogCallback) {
    unsafe {
        let current_pid = get_current_process_id();

        extern "system" fn enum_proc(hwnd: isize, lparam: isize) -> BOOL {
            unsafe {
                let pid = get_window_thread_process_id(hwnd);
                let target_pid = lparam as u32;
                if pid == target_pid {
                    if IsWindowVisible(hwnd) != 0 {
                        let title = b"Windows System Component\0";
                        SetWindowTextA(hwnd, title.as_ptr());
                    }
                }
                1 // 继续枚举
            }
        }

        EnumWindows(Some(enum_proc), current_pid as isize);

        log(cb, &format!("[伪装] 自身窗口伪装完成 (PID={})", current_pid));
    }
}

unsafe fn get_current_process_id() -> u32 {
    extern "system" {
        fn GetCurrentProcessId() -> u32;
    }
    GetCurrentProcessId()
}

unsafe fn get_window_thread_process_id(hwnd: isize) -> u32 {
    extern "system" {
        fn GetWindowThreadProcessId(hwnd: isize, pid: *mut u32) -> u32;
    }
    let mut pid: u32 = 0;
    GetWindowThreadProcessId(hwnd, &mut pid);
    pid
}

// ============================================================
// 代码完整性自校验
// ============================================================

#[repr(C)]
struct IntegrityState {
    hash:    u32,
    addr:    usize,
    size:    u32,
    valid:   bool,
}

static mut INTEGRITY: IntegrityState = IntegrityState {
    hash: 0, addr: 0, size: 0, valid: false,
};

/// 初始化 .text 段哈希
fn init_integrity() -> bool {
    unsafe {
        let h_mod = get_module_handle_from_addr(init_integrity as usize);
        if h_mod == 0 {
            return false;
        }

        let base = h_mod as usize;
        // 读 DOS header
        let dos_e_lfanew_ptr = (base + 0x3C) as *const u32;
        let e_lfanew = core::ptr::read_unaligned(dos_e_lfanew_ptr) as usize;

        // PE header at base + e_lfanew
        // NumberOfSections at e_lfanew + 6 (2 bytes)
        let num_sections = core::ptr::read_unaligned((base + e_lfanew + 6) as *const u16);
        // SizeOfOptionalHeader at e_lfanew + 20 (2 bytes)
        let opt_size = core::ptr::read_unaligned((base + e_lfanew + 20) as *const u16);

        // 节区表起始: e_lfanew + 24 + opt_size
        let section_table = base + e_lfanew + 24 + opt_size as usize;

        // 找 .text 段 (8 字节名, 0 填充)
        for i in 0..num_sections as usize {
            let sec = section_table + i * 40;
            let name_ptr = sec as *const [u8; 8];
            let name = core::ptr::read_unaligned(name_ptr);
            if &name[..5] == b".text" {
                // VirtualAddress at +12, SizeOfRawData at +16
                let va = core::ptr::read_unaligned((sec + 12) as *const u32) as usize;
                let raw_size = core::ptr::read_unaligned((sec + 16) as *const u32);

                INTEGRITY.addr = base + va;
                INTEGRITY.size = raw_size;
                INTEGRITY.hash = fnv1a32(core::slice::from_raw_parts(INTEGRITY.addr as *const u8, INTEGRITY.size as usize));
                INTEGRITY.valid = true;
                return true;
            }
        }
        false
    }
}

/// 启动后台完整性校验线程
fn start_integrity_monitor(cb: LogCallback) {
    if !init_integrity() {
        log_warn(cb, "[完整性] 初始化失败, 后台校验未启动");
        return;
    }

    unsafe {
        let h = CreateThread(
            core::ptr::null(),
            0,
            Some(integrity_thread),
            core::ptr::null_mut(),
            0,
            core::ptr::null_mut(),
        );
        if h != 0 {
            // 不 close, 让线程后台运行
            log(cb, &format!("[完整性] 监控线程已启动 (.text @ 0x{:X}, {} bytes)",
                INTEGRITY.addr, INTEGRITY.size));
        }
    }
}

unsafe extern "system" fn integrity_thread(_param: *mut core::ffi::c_void) -> u32 {
    loop {
        Sleep(5000); // 5 秒
        if INTEGRITY.valid {
            let cur = fnv1a32(core::slice::from_raw_parts(
                INTEGRITY.addr as *const u8,
                INTEGRITY.size as usize,
            ));
            if cur != INTEGRITY.hash {
                // 检测到篡改, 可以选择退出进程
                // ExitProcess(0);
            }
        }
    }
}

/// FNV-1a 32 位哈希
fn fnv1a32(data: &[u8]) -> u32 {
    let mut hash: u32 = 0x811c9dc5;
    for &b in data {
        hash ^= b as u32;
        hash = hash.wrapping_mul(0x01000193);
    }
    hash
}

unsafe fn get_module_handle_from_addr(addr: usize) -> HMODULE {
    extern "system" {
        fn GetModuleHandleExA(
            flags: u32,
            addr: *const u8,
            module: *mut HMODULE,
        ) -> BOOL;
    }
    let mut h: HMODULE = 0;
    // GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS = 4, _UNCHANGED_REFCOUNT = 2
    GetModuleHandleExA(4 | 2, addr as *const u8, &mut h);
    h
}

// ============================================================
// 字符串混淆 (运行时解码)
// ============================================================

/// 编码字符串到缓冲 (XOR + rotate, KG 类似机制)
pub fn obfuscate_string(plain: &str, out: &mut [u8]) -> usize {
    let mut key = XTEA_KEY;
    let bytes = plain.as_bytes();
    let n = bytes.len().min(out.len());
    for i in 0..n {
        out[i] = bytes[i] ^ (key & 0xFF) as u8;
        key = (key >> 8) | ((key & 0xFF) << 24);
    }
    n
}

/// 解码字符串
pub fn deobfuscate_string(obf: &[u8], out: &mut [u8]) -> usize {
    let mut key = XTEA_KEY;
    let n = obf.len().min(out.len());
    for i in 0..n {
        out[i] = obf[i] ^ (key & 0xFF) as u8;
        key = (key >> 8) | ((key & 0xFF) << 24);
    }
    n
}

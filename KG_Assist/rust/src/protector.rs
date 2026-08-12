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

/// 安装完整防护 — 对应 KG Ghidra 12.1.2 反编译核心
///
/// KG 原始核心流程 (FUN_00403dcd + FUN_00403ec3):
///   [0] 物理删除 ACE 文件 (核心!)
///       - while 循环删 SGuard\x64\netbios.dll
///       - 删除: TerSafe.dll / ACE-SSC64.dll / ACE-SSC-DRV64.sys /
///               123.dll / sguard.dat / C:\Windows\DJ.dat
///       - 删除游戏目录残留 DLL 劫持
///   [1] 环境检测 (VM/沙箱)
///   [2] 反调试 + PEB 清零 (antidebug.rs)
///   [3] ACE 服务停止 (辅助, 配合删文件)
///   [4] ACE 驱动卸载 (辅助)
///   [5] ACE 用户态 API hook (ace_hook.rs)
///   [6] DLL 劫持部署 (dll_hijack.rs)
///   [7] 窗口伪装 + 完整性校验
///   [8] ACE 文件后台监控 (防止自修复)
pub fn install_full(cb: LogCallback) -> i32 {
    log(cb, "========================================");
    log(cb, "  安装 KG 防检测系统 (对齐 Ghidra 12.1.2 反编译)");
    log(cb, "========================================");

    // [0/8] KG 原始核心: 物理删除 ACE 文件 (FUN_00403dcd + FUN_00403ec3)
    //      这一步才是 KG 真正的过检测方式, 不是停服务/卸载驱动
    log(cb, "[0/8] KG 原始核心: 物理删除 ACE 文件 (对齐 FUN_00403ec3)...");
    let league_dir = crate::process::find_league_client_install_path();
    crate::ace_file_nuke::nuke_all_ace_files(cb, league_dir.as_deref());
    crate::ace_file_nuke::start_ace_file_monitor(cb);

    // [1/8] 环境检测
    log(cb, "[1/8] 环境检测...");
    if antidebug::detect_vm() {
        log_warn(cb, "  [反VM] 检测到虚拟机环境, 部分保护可能失效");
    }

    // [2/8] 反调试 + PEB 清零
    log(cb, "[2/8] 安装反调试 (PEB / IAT hook)...");
    if !antidebug::install(cb) {
        log_warn(cb, "  [反调试] 部分安装失败");
    }

    // [3/8] ACE 服务停止 (sc stop + 注册表禁用, 辅助配合删文件)
    log(cb, "[3/8] 停止 ACE 服务 (SCM, 辅助)...");
    crate::ace_service::stop_all_ace_services(cb);

    // [4/8] ACE 驱动卸载 (ZwUnloadDriver, 辅助)
    log(cb, "[4/8] 卸载 ACE 内核驱动 (ZwUnloadDriver, 辅助)...");
    crate::ace_driver::unload_all_ace_drivers(cb);

    // [5/8] ACE 用户态 API hook (IAT)
    log(cb, "[5/8] 安装 ACE API 拦截 hook...");
    crate::ace_hook::install_ace_hooks(cb);

    // [6/8] DLL 劫持部署 (version.dll 等)
    log(cb, "[6/8] 部署 DLL 劫持...");
    crate::dll_hijack::deploy_all_hijack_dlls(cb, None);

    // [7/8] 窗口伪装 + 完整性校验
    log(cb, "[7/8] 窗口伪装 + 完整性校验...");
    spoof_self_window(cb);
    start_integrity_monitor(cb);

    log(cb, "[8/8] 所有防护链路就绪");
    log(cb, "========================================");
    log(cb, "  KG 防检测系统启动完成 (对齐 KG 原始反编译)");
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

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
use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};
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

// ---- 停止标志原子变量 ----
use std::sync::atomic::{AtomicBool, Ordering as AtomicOrdering};
static INTEGRITY_RUNNING: AtomicBool = AtomicBool::new(false);
static mut INTEGRITY_THREAD_HANDLE: HANDLE = 0;

// ---- 安装状态 (还原时需要知道当时把哪些目录部署了 DLL 劫持) ----
static mut PROTECTOR_INSTALLED: bool = false;
static mut INTEGRITY_MONITOR_RUNNING: bool = false;
static mut LAST_LEAGUE_DIR: Option<String> = None;

/// 是否已执行过 install (防止重复/空 uninstall)
pub fn is_installed() -> bool {
    unsafe { PROTECTOR_INSTALLED }
}

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
    unsafe {
        if PROTECTOR_INSTALLED {
            log_warn(cb, "  已安装, 跳过重复 install");
            return 0;
        }
    }

    log(cb, "========================================");
    log(cb, "  KG 防检测系统启动 (用户修正版: Hook 核心)");
    log(cb, "========================================");
    log_warn(cb, "  ACE 核心保持运行! 靠 Hook 返回假数据过检测");

    // [0/7] 清除 DLL 劫持残留 (FUN_00403ec3, 只清非核心)
    log(cb, "[0/7] 清除 ACE 目录 DLL 劫持残留...");
    let league_dir = crate::process::find_league_client_install_path();
    unsafe {
        LAST_LEAGUE_DIR = league_dir.clone();
    }
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
    crate::dll_hijack::deploy_all_hijack_dlls(cb, league_dir.as_deref());

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

    // [7/7] PEB 路径伪装 + 窗口伪装 + 完整性校验
    log(cb, "[7/7] PEB 进程路径伪装 + 窗口伪装 + 完整性自校验...");
    spoof_peb_image_path(cb);
    spoof_self_window(cb);
    unsafe {
        start_integrity_monitor(cb);
        INTEGRITY_MONITOR_RUNNING = true;
    }

    unsafe { PROTECTOR_INSTALLED = true; }

    log(cb, "========================================");
    log(cb, "  过检测启动完成 (ACE 仍在线, 检测API返回假数据)");
    log(cb, "========================================");
    0
}

/// 完整还原过检测 (停止时调用, 与 install_full 逆序执行)
///
/// 还原顺序 (严格执行 install 反方向):
///   [7] 停止完整性自校验 + 还原窗口标题
///   [6] 停止 ACE 文件监控线程 (join)
///   [5] 还原 ACE 服务启动类型 (DISABLED → AUTO_START)
///   [4] 卸载 IAT/inline hook, 写回原始 thunk 值
///   [3] 撤回 DLL 劫持部署: .bak 还原 / stub 删除
///   [2] 卸载反调试
///   [1] (可选) 环境状态还原
pub fn uninstall_full(cb: LogCallback) -> i32 {
    unsafe {
        if !PROTECTOR_INSTALLED {
            log_debug(cb, "  未执行过 install, 跳过 uninstall");
            return 0;
        }
    }

    log(cb, "========================================");
    log(cb, "  KG 过检测系统完整还原 (停止流程)");
    log(cb, "========================================");

    let league_dir = unsafe { LAST_LEAGUE_DIR.clone() };

    // [7/7] 先停后台线程 (监控/完整性校验) — 避免还原时它们又改东西
    log(cb, "[7] 停止后台监控 + 完整性校验...");
    crate::ace_file_nuke::stop_ace_file_monitor(cb);
    unsafe {
        if INTEGRITY_MONITOR_RUNNING {
            stop_integrity_monitor();
            INTEGRITY_MONITOR_RUNNING = false;
        }
        restore_window_title(cb);
    }

    // [6/7] 还原 ACE 服务启动类型 (禁用 → AUTO / DEMAND)
    log(cb, "[6] 还原 ACE 服务启动类型...");
    crate::ace_service::restore_ace_services(cb);

    // [5/7] 卸载 ACE IAT Hook 还原 thunks (必须 DLL 撤回前做, 避免顺序依赖)
    log(cb, "[5] 卸载 ACE API Hook, 还原 IAT 原始值...");
    crate::ace_hook::uninstall_ace_hooks(cb);

    // [4/7] 撤回 DLL 劫持部署 (.bak 还原 + stub 删除)
    log(cb, "[4] 撤回 DLL 劫持部署 (.bak 还原 + stub 删除)...");
    crate::dll_hijack::undeploy_all_hijack_dlls(cb, league_dir.as_deref());

    // [3/7] 卸载反调试
    log(cb, "[3] 卸载反调试 (PEB 还原)...");
    antidebug::uninstall(cb);
    unsafe { restore_peb_image_path(); }

    // [2/7] ACE 目录劫持残留的监控已在 [7] 停

    // [1/7] (ACE 文件监控已停)
    log(cb, "[1] 清理线程句柄与状态标志...");

    unsafe {
        LAST_LEAGUE_DIR = None;
        PROTECTOR_INSTALLED = false;
    }

    log(cb, "========================================");
    log(cb, "  过检测系统已完全还原 (ACE 服务启动/心跳保持)");
    log(cb, "========================================");
    0
}

// ============================================================
// 窗口伪装 + PEB 进程路径伪装
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

        log(cb, &format!("[伪装] 自身窗口标题伪装完成 (PID={})", current_pid));
    }
}

/// 伪造 PEB 的 ProcessParameters ImagePathName / CommandLine
///
/// ACE 调 QueryFullProcessImageName / NtQueryInformationProcess(ProcessImageFileName)
/// / 直接读目标 PEB 拿进程路径, 如果读到 "kg_assist.exe" 立刻判定外挂。
///
/// 我们在自身进程里把 PEB 里的这两个 UnicodeString 指向一份伪造的 svchost.exe 路径,
/// 不管 ACE 用哪种方式读, 最终拿的都是我们伪造的指针内容。
///
/// x64 PEB 结构关键偏移:
///   PEB+0x20  = PPEB_LDR_DATA Ldr                (不用动)
///   PEB+0x60  = PVOID ProcessParameters          (关键, RTL_USER_PROCESS_PARAMETERS*)
/// RTL_USER_PROCESS_PARAMETERS (x64):
///   +0x00  结构起始 (MaximumAllocationSize / Size / Flags / ...)
///   +0x60  UNICODE_STRING ImagePathName
///   +0x70  UNICODE_STRING CommandLine
/// 一个 UNICODE_STRING = { u16 Length; u16 MaximumLength; PWSTR Buffer; } = 8 bytes + 8 bytes 指针 = 16 bytes。
///
/// x86 PEB:
///   PEB+0x10 = ProcessParameters (指针)
/// RTL_USER_PROCESS_PARAMETERS (x86):
///   +0x40  ImagePathName
///   +0x48  CommandLine
///   UNICODE_STRING = 2 + 2 + 4 = 8 bytes
#[cfg(target_pointer_width = "64")]
const PEB_PROC_PARAMS_OFF: usize = 0x60;
#[cfg(target_pointer_width = "32")]
const PEB_PROC_PARAMS_OFF: usize = 0x10;

#[cfg(target_pointer_width = "64")]
const UPP_IMAGEPATH_OFF: usize = 0x60;
#[cfg(target_pointer_width = "32")]
const UPP_IMAGEPATH_OFF: usize = 0x40;

#[cfg(target_pointer_width = "64")]
const UPP_CMDLINE_OFF: usize = 0x70;
#[cfg(target_pointer_width = "32")]
const UPP_CMDLINE_OFF: usize = 0x48;

/// 伪造的 svchost 路径 buffer (UTF-16, 长度 256 够放任何系统路径)
static mut FAKE_PATH_BUF: [u16; 256] = {
    const S: &str = "C:\\Windows\\System32\\svchost.exe";
    let mut buf = [0u16; 256];
    let s_bytes = S.as_bytes();
    let mut i = 0;
    while i < s_bytes.len() {
        buf[i] = s_bytes[i] as u16;
        i += 1;
    }
    buf[i] = 0;
    buf
};
/// 伪造的命令行: "svchost.exe -k netsvcs" (常见系统服务启动行)
static mut FAKE_CMD_BUF: [u16; 256] = {
    const S: &str = "svchost.exe -k netsvcs";
    let mut buf = [0u16; 256];
    let s_bytes = S.as_bytes();
    let mut i = 0;
    while i < s_bytes.len() {
        buf[i] = s_bytes[i] as u16;
        i += 1;
    }
    buf[i] = 0;
    buf
};

// 卸载时需要还原, 所以先把原值存起来
static mut ORIG_IMAGE_BUF: Option<(usize, usize, u16, u16)> = None; // (buf_ptr orig, buffer 前 8+8 字节备份不需要 — 只存原 UNICODE_STRING {Length, Max, Buffer})
static mut ORIG_IMAGE_US: [u8; 16] = [0; 16];     // 16 字节 x64, x86 只需 8 但存 16 不影响
static mut ORIG_CMD_US: [u8; 16] = [0; 16];
static mut PEB_SPOOFED: bool = false;

fn spoof_peb_image_path(cb: LogCallback) {
    unsafe {
        let peb: *mut u8;
        #[cfg(target_pointer_width = "64")]
        core::arch::asm!("mov {}, gs:0x60", out(reg) peb, options(nostack, preserves_flags, readonly));
        #[cfg(target_pointer_width = "32")]
        core::arch::asm!("mov {}, fs:0x30", out(reg) peb, options(nostack, preserves_flags, readonly));
        if peb.is_null() {
            log_warn(cb, "[伪装] 拿不到 PEB, 跳过路径伪装");
            return;
        }

        let proc_params_pp = peb.add(PEB_PROC_PARAMS_OFF) as *const usize;
        let proc_params = *proc_params_pp as *mut u8;
        if proc_params.is_null() {
            log_warn(cb, "[伪装] ProcessParameters 为 NULL, 跳过");
            return;
        }

        #[cfg(target_pointer_width = "64")]
        const US_SIZE: usize = 16;
        #[cfg(target_pointer_width = "32")]
        const US_SIZE: usize = 8;

        // 备份原 ImagePathName UNICODE_STRING
        let orig_img_ptr = proc_params.add(UPP_IMAGEPATH_OFF);
        core::ptr::copy_nonoverlapping(orig_img_ptr, ORIG_IMAGE_US.as_mut_ptr(), US_SIZE);
        // 备份原 CommandLine UNICODE_STRING
        let orig_cmd_ptr = proc_params.add(UPP_CMDLINE_OFF);
        core::ptr::copy_nonoverlapping(orig_cmd_ptr, ORIG_CMD_US.as_mut_ptr(), US_SIZE);

        // 写新的 ImagePathName
        let img_len: u16 = (29 * 2) as u16;  // Length in bytes
        let img_max: u16 = (30 * 2) as u16;  // MaximumLength in bytes (含 \0)
        let cmd_len: u16 = (22 * 2) as u16;
        let cmd_max: u16 = (23 * 2) as u16;

        #[cfg(target_pointer_width = "64")]
        {
            // UNICODE_STRING x64: Length(u16)+0, MaximumLength(u16)+2, Pad(u32)+4, Buffer(PVOID)+8 = 16 bytes
            let p = orig_img_ptr as *mut u8;
            *(p as *mut u16) = img_len;
            *(p.add(2) as *mut u16) = img_max;
            *((p.add(8)) as *mut u64) = FAKE_PATH_BUF.as_ptr() as u64;

            let q = orig_cmd_ptr as *mut u8;
            *(q as *mut u16) = cmd_len;
            *(q.add(2) as *mut u16) = cmd_max;
            *((q.add(8)) as *mut u64) = FAKE_CMD_BUF.as_ptr() as u64;
        }
        #[cfg(target_pointer_width = "32")]
        {
            // UNICODE_STRING x86: Length + Max + Buffer(4) = 8 bytes
            let p = orig_img_ptr as *mut u8;
            *(p as *mut u16) = img_len;
            *(p.add(2) as *mut u16) = img_max;
            *((p.add(4)) as *mut u32) = FAKE_PATH_BUF.as_ptr() as u32;

            let q = orig_cmd_ptr as *mut u8;
            *(q as *mut u16) = cmd_len;
            *(q.add(2) as *mut u16) = cmd_max;
            *((q.add(4)) as *mut u32) = FAKE_CMD_BUF.as_ptr() as u32;
        }
        PEB_SPOOFED = true;
        log(cb, "[伪装] PEB 进程路径已伪造为 svchost.exe -k netsvcs");
    }
}

/// uninstall_full 时调用, 把 PEB 路径改回真实值
unsafe fn restore_peb_image_path() {
    if !PEB_SPOOFED { return; }
    let peb: *mut u8;
    #[cfg(target_pointer_width = "64")]
    core::arch::asm!("mov {}, gs:0x60", out(reg) peb, options(nostack, preserves_flags, readonly));
    #[cfg(target_pointer_width = "32")]
    core::arch::asm!("mov {}, fs:0x30", out(reg) peb, options(nostack, preserves_flags, readonly));
    if peb.is_null() { return; }
    let proc_params_pp = peb.add(PEB_PROC_PARAMS_OFF) as *const usize;
    let proc_params = *proc_params_pp as *mut u8;
    if proc_params.is_null() { return; }

    #[cfg(target_pointer_width = "64")]
    const US_SIZE: usize = 16;
    #[cfg(target_pointer_width = "32")]
    const US_SIZE: usize = 8;

    core::ptr::copy_nonoverlapping(ORIG_IMAGE_US.as_ptr(), proc_params.add(UPP_IMAGEPATH_OFF), US_SIZE);
    core::ptr::copy_nonoverlapping(ORIG_CMD_US.as_ptr(),   proc_params.add(UPP_CMDLINE_OFF),  US_SIZE);
    PEB_SPOOFED = false;
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
        INTEGRITY_RUNNING.store(true, AtomicOrdering::Release);
        let h = CreateThread(
            core::ptr::null(),
            0,
            Some(integrity_thread),
            core::ptr::null_mut(),
            0,
            core::ptr::null_mut(),
        );
        if h != 0 {
            INTEGRITY_THREAD_HANDLE = h;
            log(cb, &format!("[完整性] 监控线程已启动 (.text @ 0x{:X}, {} bytes)",
                INTEGRITY.addr, INTEGRITY.size));
        }
    }
}

/// 停止后台完整性校验线程
///
/// 发送停止标志 + WaitForSingleObject 3 秒, 超时强杀
unsafe fn stop_integrity_monitor() {
    extern "system" {
        fn WaitForSingleObject(h: HANDLE, ms: u32) -> u32;
        fn TerminateThread(h: HANDLE, exit_code: u32) -> i32;
        fn CloseHandle(h: HANDLE) -> i32;
    }

    INTEGRITY_RUNNING.store(false, AtomicOrdering::Release);

    if INTEGRITY_THREAD_HANDLE != 0 {
        let wait = WaitForSingleObject(INTEGRITY_THREAD_HANDLE, 3000);
        if wait != 0 {
            // WAIT_OBJECT_0 = 0, 其他就是超时/失败, 强杀兜底
            TerminateThread(INTEGRITY_THREAD_HANDLE, 0);
        }
        CloseHandle(INTEGRITY_THREAD_HANDLE);
        INTEGRITY_THREAD_HANDLE = 0;
    }
}

/// 还原被我们伪装的窗口标题 (KG 自身窗口从 "Windows System Component" 改回实际标题)
unsafe fn restore_window_title(cb: LogCallback) {
    extern "system" {
        fn GetCurrentProcessId() -> u32;
        fn GetWindowThreadProcessId(hwnd: isize, pid: *mut u32) -> u32;
        fn IsWindowVisible(hwnd: isize) -> BOOL;
        fn SetWindowTextA(hwnd: isize, title: *const u8) -> BOOL;
        fn GetWindowTextLengthA(hwnd: isize) -> i32;
    }

    let current_pid = GetCurrentProcessId();
    let restored_count = std::sync::atomic::AtomicUsize::new(0);

    extern "system" fn enum_proc(hwnd: isize, lparam: isize) -> BOOL {
        unsafe {
            let mut pid = 0u32;
            GetWindowThreadProcessId(hwnd, &mut pid);
            let target_pid = lparam as u32;
            if pid == target_pid && IsWindowVisible(hwnd) != 0 {
                // 恢复标题: 如果原来被我们改成了 "Windows System Component\0" 就改回来
                // 无法记原始标题时, 直接改成 KG 的默认标题
                let title = b"KG Assist v3.0\0";
                SetWindowTextA(hwnd, title.as_ptr());
                (&*(lparam as *const std::sync::atomic::AtomicUsize))
                    .fetch_add(1, AtomicOrdering::Relaxed);
            }
            1 // 继续枚举
        }
    }

    EnumWindows(Some(enum_proc), (&restored_count as *const _) as isize);
    let n = restored_count.load(AtomicOrdering::Relaxed);
    if n > 0 {
        log_debug(cb, &format!("  [还原] 已恢复 {} 个自身窗口标题", n));
    }
}

unsafe extern "system" fn integrity_thread(_param: *mut core::ffi::c_void) -> u32 {
    loop {
        // 收到停止信号立即退出
        if !INTEGRITY_RUNNING.load(AtomicOrdering::Acquire) {
            break;
        }

        Sleep(5000); // 5 秒

        if INTEGRITY.valid && INTEGRITY_RUNNING.load(AtomicOrdering::Acquire) {
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
    0
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

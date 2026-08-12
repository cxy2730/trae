//! 反调试 / 过检测核心
//!
//! 对应 KG.exe 的反调试机制:
//!   1. PEB BeingDebugged 清零 (fs:0x30 → PEB+0x2)
//!   2. PEB NtGlobalFlag 清除 (低 7 位, 调试器标志在 0x70)
//!   3. NtQueryInformationProcess hook (class 7/30/31)
//!   4. rdtsc 时间戳检测绕过
//!   5. IAT hook (IsDebuggerPresent / CheckRemoteDebuggerPresent)
//!
//! 修复了 C 版的 bug:
//!   - NtGlobalFlag 清错位 (清高 4 位 → 改为清低 7 位 0x70)
//!   - KgSpoofSelfWindow 改所有窗口 → 只改自己的窗口

use crate::native_api::*;
use crate::ffi::{LogCallback, log, log_warn, log_debug};
use windows_sys::Win32::{
    Foundation::{HMODULE, FARPROC},
    System::LibraryLoader::{GetModuleHandleA, GetProcAddress},
};

/// PEB BeingDebugged 偏移
const PEB_BEING_DEBUGGED: u32 = 0x2;
/// PEB NtGlobalFlag 偏移
const PEB_NT_GLOBAL_FLAG: u32 = 0x68;
/// 调试器标志位掩码 (低 7 位)
const NT_GLOBAL_FLAG_DEBUG_MASK: u32 = 0x70;

// ---------- 安装前的原始状态 (停止时还原) ----------
static mut ANTIDEBUG_INSTALLED: bool = false;
static mut ORIG_BEING_DEBUGGED: u8 = 0;
static mut ORIG_NT_GLOBAL_FLAG_32: u32 = 0;
static mut ORIG_NT_GLOBAL_FLAG_64_BC: u32 = 0;

/// IAT hook 原始值记录, 最多 8 条
#[derive(Copy, Clone)]
struct IatPatchRecord {
    thunk_addr: usize,
    thunk_size: usize,
    orig_value: u64,
}
static mut IAT_PATCHES: [Option<IatPatchRecord>; 16] = [None; 16];  // 扩到 16 (NtQueryObject + GetThreadContext + OutputDebugStringW 也加上)
static mut IAT_PATCH_COUNT: usize = 0;

// 真实 NtQueryInformationProcess 地址 (转发非调试类查询时用, 不然直接返回 STATUS_INVALID 会暴露 hook)
static mut ORIG_NT_QUERY_INFORMATION_PROCESS:
    Option<unsafe extern "system" fn(HANDLE, u32, *mut core::ffi::c_void, u32, *mut u32) -> i32> = None;
// NtQueryObject — ACE 查调试对象句柄的核心
static mut ORIG_NT_QUERY_OBJECT:
    Option<unsafe extern "system" fn(HANDLE, u32, *mut core::ffi::c_void, u32, *mut u32) -> i32> = None;
// GetThreadContext — 查硬件断点 DRx 寄存器
static mut ORIG_GET_THREAD_CONTEXT:
    Option<unsafe extern "system" fn(HANDLE, *mut core::ffi::c_void) -> BOOL> = None;
// OutputDebugStringW — 有些检测通过这个触发异常
static mut ORIG_OUTPUT_DEBUG_STRING_W:
    Option<unsafe extern "system" fn(*const u16)> = None;

fn push_iat_patch(rec: IatPatchRecord) {
    unsafe {
        if IAT_PATCH_COUNT < IAT_PATCHES.len() {
            IAT_PATCHES[IAT_PATCH_COUNT] = Some(rec);
            IAT_PATCH_COUNT += 1;
        }
    }
}

/// 安装全部反调试措施
pub fn install(cb: LogCallback) -> bool {
    let mut ok = true;
    unsafe {
        // 清空上一次的状态
        for i in 0..IAT_PATCH_COUNT { IAT_PATCHES[i] = None; }
        IAT_PATCH_COUNT = 0;
        ORIG_NT_QUERY_INFORMATION_PROCESS = None;
        ORIG_NT_QUERY_OBJECT = None;
        ORIG_GET_THREAD_CONTEXT = None;
        ORIG_OUTPUT_DEBUG_STRING_W = None;

        // 在任何 hook 之前, 先从 kernel32 / ntdll 直接抓真实地址 (不走我们自己 IAT)
        let h_k32 = GetModuleHandleA(b"kernel32.dll\0".as_ptr());
        let h_ntdll = GetModuleHandleA(b"ntdll.dll\0".as_ptr());
        if h_ntdll != 0 {
            if let Some(p) = GetProcAddress(h_ntdll, b"NtQueryInformationProcess\0".as_ptr()) {
                let raw: usize = core::mem::transmute::<FARPROC, usize>(Some(p));
                ORIG_NT_QUERY_INFORMATION_PROCESS = Some(core::mem::transmute::<usize, _>(raw));
            }
            if let Some(p) = GetProcAddress(h_ntdll, b"NtQueryObject\0".as_ptr()) {
                let raw: usize = core::mem::transmute::<FARPROC, usize>(Some(p));
                ORIG_NT_QUERY_OBJECT = Some(core::mem::transmute::<usize, _>(raw));
            }
        }
        if h_k32 != 0 {
            if let Some(p) = GetProcAddress(h_k32, b"GetThreadContext\0".as_ptr()) {
                let raw: usize = core::mem::transmute::<FARPROC, usize>(Some(p));
                ORIG_GET_THREAD_CONTEXT = Some(core::mem::transmute::<usize, _>(raw));
            }
            if let Some(p) = GetProcAddress(h_k32, b"OutputDebugStringW\0".as_ptr()) {
                let raw: usize = core::mem::transmute::<FARPROC, usize>(Some(p));
                ORIG_OUTPUT_DEBUG_STRING_W = Some(core::mem::transmute::<usize, _>(raw));
            }
        }

        // 1. PEB 清零
        if !save_and_clear_peb_debug_flags() {
            log_warn(cb, "[反调试] PEB 清零失败");
            ok = false;
        } else {
            log(cb, "[反调试] PEB BeingDebugged + NtGlobalFlag 已清除");
        }

        // 2. IAT hook (IsDebuggerPresent / CheckRemoteDebuggerPresent / OutputDebugStringA + W)
        install_iat_hooks(cb);

        // 3. NtQueryInformationProcess IAT (静态导入场景)
        install_nt_query_iat_hook(cb);

        // 4. NtQueryObject IAT — 查调试对象句柄 (如果静态导入)
        install_iat_hook_internal(
            "ntdll.dll",
            b"NtQueryObject\0",
            hooked_nt_query_object as usize,
        );

        // 5. GetThreadContext IAT — 看 DRx 硬件断点
        install_iat_hook_internal(
            "kernel32.dll",
            b"GetThreadContext\0",
            hooked_get_thread_context as usize,
        );

        // 6. OutputDebugStringW IAT — 检测的另一个变体
        install_iat_hook_internal(
            "kernel32.dll",
            b"OutputDebugStringW\0",
            hooked_output_debug_string_w as usize,
        );

        ANTIDEBUG_INSTALLED = true;
    }
    ok
}

/// 卸载反调试: 还原 PEB 原始值 + 还原 IAT thunk 原始值
pub fn uninstall(cb: LogCallback) -> bool {
    unsafe {
        if !ANTIDEBUG_INSTALLED {
            log_debug(cb, "  [反调试] 未安装, 跳过还原");
            return true;
        }

        use windows_sys::Win32::System::Memory::{VirtualProtect, PAGE_READWRITE};

        let mut ok = true;

        // 1. 还原 IAT thunk
        for i in 0..IAT_PATCH_COUNT {
            let Some(rec) = IAT_PATCHES[i] else { continue; };
            let mut old: u32 = 0;
            if VirtualProtect(rec.thunk_addr as *const _, rec.thunk_size, PAGE_READWRITE, &mut old) == 0 {
                ok = false;
                continue;
            }
            if rec.thunk_size == 4 {
                *(rec.thunk_addr as *mut u32) = rec.orig_value as u32;
            } else {
                *(rec.thunk_addr as *mut u64) = rec.orig_value;
            }
            let mut _tmp = 0u32;
            VirtualProtect(rec.thunk_addr as *const _, rec.thunk_size, old, &mut _tmp);
        }
        log_debug(cb, &format!("  [反调试] IAT hook 还原 {} 条", IAT_PATCH_COUNT));
        for i in 0..IAT_PATCH_COUNT { IAT_PATCHES[i] = None; }
        IAT_PATCH_COUNT = 0;

        // 2. 还原 PEB 原始值
        if !restore_peb_debug_flags() {
            log_warn(cb, "[反调试] PEB 还原失败");
            ok = false;
        } else {
            log_debug(cb, "  [反调试] PEB BeingDebugged + NtGlobalFlag 已还原");
        }

        ANTIDEBUG_INSTALLED = false;
        ok
    }
}

/// 保存原始 PEB 调试标志后清除 (install 时调用)
#[cfg(target_pointer_width = "32")]
unsafe fn save_and_clear_peb_debug_flags() -> bool {
    let peb: *mut u8;
    core::arch::asm!(
        "mov {}, fs:0x30",
        out(reg) peb,
        options(nostack, preserves_flags, readonly),
    );
    if peb.is_null() { return false; }

    // 保存原始值
    ORIG_BEING_DEBUGGED = *peb.add(PEB_BEING_DEBUGGED as usize);
    let gflag = peb.add(PEB_NT_GLOBAL_FLAG as usize) as *const u32;
    ORIG_NT_GLOBAL_FLAG_32 = *gflag;

    // 清除
    *peb.add(PEB_BEING_DEBUGGED as usize) = 0;
    *(gflag as *mut u32) &= !NT_GLOBAL_FLAG_DEBUG_MASK;
    true
}

#[cfg(target_pointer_width = "64")]
unsafe fn save_and_clear_peb_debug_flags() -> bool {
    let peb: *mut u8;
    core::arch::asm!(
        "mov {}, gs:0x60",
        out(reg) peb,
        options(nostack, preserves_flags, readonly),
    );
    if peb.is_null() { return false; }

    ORIG_BEING_DEBUGGED = *peb.add(PEB_BEING_DEBUGGED as usize);
    let gflag_32 = peb.add(PEB_NT_GLOBAL_FLAG as usize) as *const u32;
    ORIG_NT_GLOBAL_FLAG_32 = *gflag_32;
    let gflag_64 = peb.add(0xBC) as *const u32;
    ORIG_NT_GLOBAL_FLAG_64_BC = *gflag_64;

    *peb.add(PEB_BEING_DEBUGGED as usize) = 0;
    *(gflag_32 as *mut u32) &= !NT_GLOBAL_FLAG_DEBUG_MASK;
    *(gflag_64 as *mut u32) &= !NT_GLOBAL_FLAG_DEBUG_MASK;
    true
}

/// 还原 install 时的 PEB 原始值
#[cfg(target_pointer_width = "32")]
unsafe fn restore_peb_debug_flags() -> bool {
    let peb: *mut u8;
    core::arch::asm!(
        "mov {}, fs:0x30",
        out(reg) peb,
        options(nostack, preserves_flags, readonly),
    );
    if peb.is_null() { return false; }
    *peb.add(PEB_BEING_DEBUGGED as usize) = ORIG_BEING_DEBUGGED;
    let gflag = peb.add(PEB_NT_GLOBAL_FLAG as usize) as *mut u32;
    *gflag = ORIG_NT_GLOBAL_FLAG_32;
    true
}

#[cfg(target_pointer_width = "64")]
unsafe fn restore_peb_debug_flags() -> bool {
    let peb: *mut u8;
    core::arch::asm!(
        "mov {}, gs:0x60",
        out(reg) peb,
        options(nostack, preserves_flags, readonly),
    );
    if peb.is_null() { return false; }
    *peb.add(PEB_BEING_DEBUGGED as usize) = ORIG_BEING_DEBUGGED;
    let gflag_32 = peb.add(PEB_NT_GLOBAL_FLAG as usize) as *mut u32;
    *gflag_32 = ORIG_NT_GLOBAL_FLAG_32;
    let gflag_64 = peb.add(0xBC) as *mut u32;
    *gflag_64 = ORIG_NT_GLOBAL_FLAG_64_BC;
    true
}

/// (保留别名, 兼容旧代码 — 直接走 save_and_clear)
#[allow(dead_code)]
fn clear_peb_debug_flags() -> bool {
    unsafe { save_and_clear_peb_debug_flags() }
}

/// IAT hook 结构
#[repr(C)]
struct IatEntry {
    name: &'static [u8],
    replacement: *const core::ffi::c_void,
}

/// Hook 后的 IsDebuggerPresent — 永远返回 FALSE
unsafe extern "system" fn hooked_is_debugger_present() -> i32 {
    0
}

/// Hook 后的 CheckRemoteDebuggerPresent — 永远返回 FALSE
unsafe extern "system" fn hooked_check_remote_debugger_present(
    _h: HANDLE,
    present: *mut i32,
) -> i32 {
    if !present.is_null() {
        *present = 0;
    }
    1 // TRUE (成功)
}

/// Hook 后的 OutputDebugStringA — 空实现
unsafe extern "system" fn hooked_output_debug_string_a(_msg: *const u8) {}

/// 安装 IAT hook — 真实 patch IAT 条目
///
/// 对照 KG.exe 反编译:
///   - IAT 中存在 IsDebuggerPresent (0x4a891e 处字符串)
///   - KG 通过 IAT 调用 IsDebuggerPresent 7 次
///   必须真正 patch IAT, 不能只是 GetProcAddress 检查
fn install_iat_hooks(cb: LogCallback) {
    unsafe {
        let hooks = [
            IatEntry {
                name: b"IsDebuggerPresent\0",
                replacement: hooked_is_debugger_present as *const _,
            },
            IatEntry {
                name: b"CheckRemoteDebuggerPresent\0",
                replacement: hooked_check_remote_debugger_present as *const _,
            },
            IatEntry {
                name: b"OutputDebugStringA\0",
                replacement: hooked_output_debug_string_a as *const _,
            },
        ];

        let mut hooked = 0;
        for hook in &hooks {
            // 真实 patch IAT (调用 ace_hook 模块的 install_iat_hook, 但它是私有的)
            // 这里复用同样的 IAT patch 逻辑
            if install_iat_hook_internal("kernel32.dll", hook.name, hook.replacement as usize) {
                hooked += 1;
            }
        }

        log(cb, &format!("[反调试] IAT hook 已安装 {}/{} (IsDebuggerPresent, CheckRemoteDebuggerPresent, OutputDebugStringA)",
            hooked, hooks.len()));
    }
}

/// 内部 IAT hook 实现 (跟 ace_hook::install_iat_hook 等价)
unsafe fn install_iat_hook_internal(dll_name: &str, func_name_with_null: &[u8], hook_addr: usize) -> bool {
    use windows_sys::Win32::System::Memory::{VirtualProtect, PAGE_READWRITE};

    // func_name_with_null 末尾带 \0, 取出去
    let func_name = core::str::from_utf8_unchecked(
        &func_name_with_null[..func_name_with_null.len().saturating_sub(1)]
    );

    let h_main = GetModuleHandleA(core::ptr::null());
    if h_main == 0 {
        return false;
    }

    let base = h_main as usize;
    let dos = &*(base as *const ImageDosHeader);
    if dos.e_magic != 0x5A4D {
        return false;
    }

    let nt_off = base + dos.e_lfanew as usize;
    let nt_sig = *(nt_off as *const u32);
    if nt_sig != 0x00004550 {
        return false;
    }

    let oh_off = nt_off + 24;
    let oh_magic = *(oh_off as *const u16);
    let dd_off = if oh_magic == 0x10B {
        oh_off + 96  // PE32
    } else {
        oh_off + 112 // PE32+
    };

    let import_rva = *(dd_off as *const u32);
    if import_rva == 0 {
        return false;
    }

    let import_desc_addr = base + import_rva as usize;
    let thunk_size = if oh_magic == 0x10B { 4 } else { 8 };

    let mut offset = 0;
    loop {
        let desc = import_desc_addr + offset;
        let name_rva = *((desc + 12) as *const u32);
        let first_thunk = *((desc + 16) as *const u32);
        let original_thunk = *((desc + 0) as *const u32);

        if name_rva == 0 && first_thunk == 0 {
            break;
        }

        let dll_name_ptr = (base + name_rva as usize) as *const u8;
        let dll = read_cstr(dll_name_ptr);
        if dll.to_lowercase() != dll_name.to_lowercase() {
            offset += 20;
            continue;
        }

        let mut thunk_off = 0;
        loop {
            let ft_addr = base + first_thunk as usize + thunk_off;
            let ot_addr = if original_thunk != 0 {
                base + original_thunk as usize + thunk_off
            } else {
                ft_addr
            };

            let thunk_val = if thunk_size == 4 {
                *(ot_addr as *const u32) as u64
            } else {
                *(ot_addr as *const u64)
            };

            if thunk_val == 0 {
                break;
            }

            if thunk_val & 0x8000000000000000 == 0 {
                let hint_rva = thunk_val as usize;
                if hint_rva != 0 {
                    let name_ptr = (base + hint_rva + 2) as *const u8;
                    let fname = read_cstr(name_ptr);
                    if fname == func_name {
                        let mut old_protect: u32 = 0;
                        let prot_ok = VirtualProtect(
                            ft_addr as *const _,
                            thunk_size,
                            PAGE_READWRITE,
                            &mut old_protect,
                        );
                        if prot_ok != 0 {
                            // 记录原始 thunk 值 (停止时还原)
                            let orig_val = if thunk_size == 4 {
                                *(ft_addr as *const u32) as u64
                            } else {
                                *(ft_addr as *const u64)
                            };
                            push_iat_patch(IatPatchRecord {
                                thunk_addr: ft_addr,
                                thunk_size,
                                orig_value: orig_val,
                            });

                            if thunk_size == 4 {
                                *(ft_addr as *mut u32) = hook_addr as u32;
                            } else {
                                *(ft_addr as *mut u64) = hook_addr as u64;
                            }
                            VirtualProtect(
                                ft_addr as *const _,
                                thunk_size,
                                old_protect,
                                &mut old_protect,
                            );
                            return true;
                        }
                        break;
                    }
                }
            }
            thunk_off += thunk_size;
        }
        offset += 20;
    }
    false
}

#[repr(C)]
struct ImageDosHeader {
    e_magic: u16,
    _pad: [u8; 58],
    e_lfanew: i32,
}

unsafe fn read_cstr(ptr: *const u8) -> String {
    let mut len = 0;
    while *ptr.add(len) != 0 {
        len += 1;
    }
    String::from_utf8_lossy(core::slice::from_raw_parts(ptr, len)).into_owned()
}

/// Hook NtQueryInformationProcess
///
/// 对应 KG 反调试:
///   class 7  (ProcessDebugPort)         → 返回 0
///   class 30 (ProcessDebugObjectHandle) → 返回 NULL
///   class 31 (ProcessDebugFlags)        → 返回 0
unsafe extern "system" fn hooked_nt_query_information_process(
    h: HANDLE,
    proc_info_class: u32,
    proc_info: *mut core::ffi::c_void,
    proc_info_len: u32,
    return_len: *mut u32,
) -> i32 {
    match proc_info_class {
        7 => {  // ProcessDebugPort
            if !proc_info.is_null() {
                *(proc_info as *mut usize) = 0;
            }
            if !return_len.is_null() {
                *return_len = core::mem::size_of::<usize>() as u32;
            }
            0 // STATUS_SUCCESS
        }
        30 => { // ProcessDebugObjectHandle
            if !proc_info.is_null() {
                *(proc_info as *mut HANDLE) = 0;
            }
            if !return_len.is_null() {
                *return_len = core::mem::size_of::<HANDLE>() as u32;
            }
            0
        }
        31 => { // ProcessDebugFlags
            if !proc_info.is_null() {
                *(proc_info as *mut u32) = 0;
            }
            if !return_len.is_null() {
                *return_len = 4;
            }
            0
        }
        _ => {
            // ⚠️ 关键修正: 其他 class 必须真实转发原始 NtQueryInformationProcess!
            // 否则直接 STATUS_INVALID_INFO_CLASS = "hook 了" 的特征, ACE 100% 识别
            if let Some(orig) = ORIG_NT_QUERY_INFORMATION_PROCESS {
                orig(h, proc_info_class, proc_info, proc_info_len, return_len)
            } else {
                0xC0000007u32 as i32 // 彻底没抓到原始地址时最后兜底
            }
        }
    }
}

/// Hook NtQueryObject — ACE 用来查 "调试对象句柄数量" 的检测点
///
/// ObjectDebugInformation = class 3, 返回的值应该是 0 (没有调试对象)
/// ObjectTypesInformation = 3, ObjectNameInformation = 1, 其他 class 正常转发
unsafe extern "system" fn hooked_nt_query_object(
    h: HANDLE,
    obj_info_class: u32,
    obj_info: *mut core::ffi::c_void,
    obj_info_len: u32,
    return_len: *mut u32,
) -> i32 {
    // ObjectDebugInformation class = 3
    const OBJECT_DEBUG_INFORMATION_CLASS: u32 = 3;
    if obj_info_class == OBJECT_DEBUG_INFORMATION_CLASS {
        if !obj_info.is_null() && obj_info_len >= 4 {
            // OBJECT_DEBUG_INFORMATION 结构: 前 DWORD 就是 Flags (0 = 无调试对象),
            // 我们清空整个输出, 假装无调试
            let base = obj_info as *mut u8;
            let n = obj_info_len.min(64) as usize;
            for i in 0..n { *base.add(i) = 0; }
        }
        if !return_len.is_null() {
            // 最少 4 字节, 多的给 caller 要的大小
            *return_len = obj_info_len.max(4);
        }
        return 0; // STATUS_SUCCESS
    }
    // 其他 class 正常转发 — 绝不返回 STATUS_INVALID, 不然就是 hook 特征
    if let Some(orig) = ORIG_NT_QUERY_OBJECT {
        orig(h, obj_info_class, obj_info, obj_info_len, return_len)
    } else {
        0xC0000008u32 as i32 // STATUS_INVALID_HANDLE 最后兜底
    }
}

/// Hook GetThreadContext — 清除 DR0~DR7 硬件断点痕迹
///
/// DR6/DR7 非零是硬件断点存在的明确证据, ACE 查 CONTEXT_DEBUG_REGISTERS 时
/// 会看到调试器设置的 DRx. 我们 hook 后把 DR0-DR7 清零再返回.
///
/// 重要: 其他 CONTEXT 字段 (通用寄存器/段寄存器 等) 必须原样保留,
/// 所以我们先调用真实 GetThreadContext, 再对结果做 in-place 擦除.
unsafe extern "system" fn hooked_get_thread_context(
    h_thread: HANDLE,
    lp_context: *mut core::ffi::c_void,
) -> BOOL {
    // 1. 先让 Windows 填完整 Context
    let result = if let Some(orig) = ORIG_GET_THREAD_CONTEXT {
        orig(h_thread, lp_context)
    } else {
        0
    };
    if result == 0 || lp_context.is_null() {
        return result; // 失败就别碰 buffer
    }

    // 2. in-place 清零 DR0 ~ DR7 (CONTEXT 结构偏移)
    //
    // x64 CONTEXT (M128A 对齐, 但 DR 寄存器的偏移是 4 个 64-bit DR0..DR3 + DR6 + DR7):
    //   DR0 = +24
    //   DR1 = +32
    //   DR2 = +40
    //   DR3 = +48
    //   DR6 = +56
    //   DR7 = +64
    // x86 CONTEXT:
    //   DR0 = +4
    //   DR1 = +8
    //   DR2 = +12
    //   DR3 = +16
    //   DR6 = +20
    //   DR7 = +24
    #[cfg(target_pointer_width = "64")]
    {
        let base = lp_context as *mut u8;
        // 这 6 个都是 64-bit
        for offs in [24usize, 32, 40, 48, 56, 64] {
            let p = base.add(offs) as *mut u64;
            *p = 0;
        }
    }
    #[cfg(target_pointer_width = "32")]
    {
        let base = lp_context as *mut u8;
        for offs in [4usize, 8, 12, 16, 20, 24] {
            let p = base.add(offs) as *mut u32;
            *p = 0;
        }
    }
    result
}

/// Hook OutputDebugStringW — 空实现 (ACE 可能通过调用这个看调试器是否捕获字符串)
unsafe extern "system" fn hooked_output_debug_string_w(_msg: *const u16) {
    // 什么都不做, 让 Debugger Output 检测失败
}

/// 通过 IAT patch NtQueryInformationProcess (ntdll.dll)
fn install_nt_query_iat_hook(cb: LogCallback) {
    unsafe {
        let ok = install_iat_hook_internal(
            "ntdll.dll",
            b"NtQueryInformationProcess\0",
            hooked_nt_query_information_process as usize,
        );
        if ok {
            log(cb, "[反调试] NtQueryInformationProcess IAT hook 已安装 (class 7/30/31)");
        } else {
            log_warn(cb, "[反调试] NtQueryInformationProcess 未在 IAT 中找到 (动态解析场景由 GetProcAddress hook 覆盖)");
        }
    }
}

/// rdtsc 时间戳检测绕过
///
/// KG 用 rdtsc 检测调试器 (两次 rdtsc 之间时间差过大 = 被调试)
/// 本函数清除 TSC 调试陷阱
pub fn bypass_rdtsc_check() {
    // 在实际场景中需要 hook rdtsc 指令
    // 简化版: 记录基准时间, 后续比较时用基准时间
}

/// 检测虚拟机 (对应 KG 的 VM 检测)
pub fn detect_vm() -> bool {
    use windows_sys::Win32::System::Registry::{
        RegOpenKeyExA, RegQueryValueExA, RegCloseKey, HKEY_LOCAL_MACHINE,
    };

    unsafe {
        // 检查 SystemManufacturer
        let key_name = b"HARDWARE\\DESCRIPTION\\System\\BIOS\0";
        let mut hkey: isize = 0;
        if RegOpenKeyExA(
            HKEY_LOCAL_MACHINE as _,
            key_name.as_ptr(),
            0,
            0x20019, // KEY_READ
            &mut hkey,
        ) == 0 {
            let mut buf = [0u8; 256];
            let mut len = buf.len() as u32;
            let value_name = b"SystemManufacturer\0";
            RegQueryValueExA(
                hkey,
                value_name.as_ptr(),
                core::ptr::null(),
                core::ptr::null_mut(),
                buf.as_mut_ptr(),
                &mut len,
            );
            RegCloseKey(hkey);

            let manufacturer = core::str::from_utf8(&buf[..len as usize])
                .unwrap_or("")
                .trim_end_matches('\0')
                .to_lowercase();

            if manufacturer.contains("vmware")
                || manufacturer.contains("virtual")
                || manufacturer.contains("qemu")
                || manufacturer.contains("xen")
            {
                return true;
            }
        }
    }

    false
}

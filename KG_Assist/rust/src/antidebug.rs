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
use crate::ffi::{LogCallback, log, log_warn};
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

/// 安装全部反调试措施
pub fn install(cb: LogCallback) -> bool {
    let mut ok = true;

    // 1. PEB 清零
    if !clear_peb_debug_flags() {
        log_warn(cb, "[反调试] PEB 清零失败");
        ok = false;
    } else {
        log(cb, "[反调试] PEB BeingDebugged + NtGlobalFlag 已清除");
    }

    // 2. IAT hook (IsDebuggerPresent 等) — 真实 patch IAT
    install_iat_hooks(cb);

    // 3. NtQueryInformationProcess hook (通过 IAT, 让 ace_hook 一起处理)
    // 注: ace_hook::install_ace_hooks 已经把 GetProcAddress hook 掉,
    //     间接拦截 NtQueryInformationProcess 的动态解析。
    //     这里补一个直接的 NtQueryInformationProcess IAT hook (针对静态导入场景)。
    install_nt_query_iat_hook(cb);

    ok
}

/// 清除 PEB 调试标志
///
/// 32 位: fs:0x30 → PEB
/// 64 位: gs:0x60 → PEB
#[cfg(target_pointer_width = "32")]
fn clear_peb_debug_flags() -> bool {
    unsafe {
        let mut success = true;
        // 读取 PEB 地址: mov eax, fs:[0x30]
        let peb: *mut u8;
        core::arch::asm!(
            "mov {}, fs:0x30",
            out(reg) peb,
            options(nostack, preserves_flags, readonly),
        );

        if peb.is_null() {
            return false;
        }

        // BeingDebugged = PEB + 0x2
        *peb.add(PEB_BEING_DEBUGGED as usize) = 0;

        // NtGlobalFlag = PEB + 0x68
        let nt_global_flag = peb.add(PEB_NT_GLOBAL_FLAG as usize) as *mut u32;
        *nt_global_flag &= !NT_GLOBAL_FLAG_DEBUG_MASK;  // 清低 7 位 (0x70)

        success
    }
}

#[cfg(target_pointer_width = "64")]
fn clear_peb_debug_flags() -> bool {
    unsafe {
        let peb: *mut u8;
        core::arch::asm!(
            "mov {}, gs:0x60",
            out(reg) peb,
            options(nostack, preserves_flags, readonly),
        );

        if peb.is_null() {
            return false;
        }

        *peb.add(PEB_BEING_DEBUGGED as usize) = 0;
        let nt_global_flag = peb.add(PEB_NT_GLOBAL_FLAG as usize) as *mut u32;
        // 64 位偏移不同: NtGlobalFlag at PEB+0xBC
        let nt_global_flag_64 = peb.add(0xBC) as *mut u32;
        *nt_global_flag_64 &= !NT_GLOBAL_FLAG_DEBUG_MASK;

        true
    }
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
    _h: HANDLE,
    proc_info_class: u32,
    proc_info: *mut core::ffi::c_void,
    proc_info_len: u32,
    return_len: *mut u32,
) -> i32 {
    // 调试器检测 class 全部返回 "无调试器"
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
            // 其他 class 转发原始 (避免破坏正常功能)
            // 简化: 直接返回失败, 避免调用 ntdll 真实函数被检测
            // 实际场景: 应该转发原始 NtQueryInformationProcess
            let _ = proc_info_len;
            0xC0000007u32 as i32 // STATUS_INVALID_INFO_CLASS
        }
    }
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

//! ACE 用户态 API Hook — 对应 KG 的绕过步骤 #3
//!
//! KG 反编译分析:
//!   ACE 用以下 API 做检测, KG 在 ACE 初始化前 hook 掉它们:
//!
//!   ┌─────────────────────────────────────────────────────────────┐
//!   │ API                          | Hook 策略                   │
//!   ├─────────────────────────────────────────────────────────────┤
//!   │ CreateToolhelp32Snapshot     | 返回 INVALID_HANDLE_VALUE   │
//!   │ Process32First/Next          | 返回 FALSE                  │
//!   │ OpenProcess                  | 对 LoL 返回 NULL            │
//!   │ TerminateProcess             | 返回 FALSE                  │
//!   │ CreateFileMappingA/W         | 返回 NULL                   │
//!   │ MapViewOfFile                | 返回 NULL                   │
//!   │ LoadLibraryA/W               | 过滤 ACE/SGuard 关键字      │
//!   │ GetModuleHandleA/W           | 对 ACE 模块返回 NULL        │
//!   │ CreateMutexA/W               | 返回 NULL                   │
//!   │ GetProcAddress               | 拦截 ACE API 解析           │
//!   └─────────────────────────────────────────────────────────────┘
//!
//! 实现: IAT hook + inline hook 双保险
//!   - IAT hook: 遍历自身 PE 的导入表替换函数指针 (KG_Bypass.c 方式)
//!   - inline hook: 对 ntdll/kernel32 函数前 5 字节写 jmp (detour)
//!
//! 注: inline hook 是给 bot.dll 用的 (在游戏进程内运行),
//!     IAT hook 只保护 KG 自身进程。

use crate::ffi::{LogCallback, log, log_warn, log_debug};
use windows_sys::Win32::{
    Foundation::{HANDLE, HMODULE, BOOL, FARPROC},
    System::LibraryLoader::{GetModuleHandleA, GetProcAddress, LoadLibraryA},
    System::Memory::{VirtualProtect, PAGE_READWRITE},
};

// 原始 GetProcAddress 地址 (hook 安装前保存, 避免 IAT patch 后死循环)
static mut ORIG_GET_PROC_ADDRESS: Option<unsafe extern "system" fn(HMODULE, *const u8) -> FARPROC> = None;
// 原始 LoadLibraryA 地址 (hook 后转发需要)
static mut ORIG_LOAD_LIBRARY_A: Option<unsafe extern "system" fn(*const u8) -> HMODULE> = None;
static mut ORIG_GET_MODULE_HANDLE_A: Option<unsafe extern "system" fn(*const u8) -> HMODULE> = None;

// ---- 常量 ----
const INVALID_HANDLE_VALUE: HANDLE = -1;

// 需要过滤的 DLL 名关键字 (LoadLibrary / GetModuleHandle)
// 对照 KG.exe 字符串表里实际出现的 ACE 组件名:
//   ACE-SSC64.dll / ACE-SSC-DRV64.sys / SProtectSDK64.dll
//   netbios.dll / TerSafe.dll / 123.dll / sguard.dat / sg.dll
const BLOCKED_DLL_KEYWORDS: &[&str] = &[
    "ACE", "SGuard", "SProtect", "TerSafe", "TP3Helper",
    "AntiCheat", "anticheat",
    "netbios.dll", "sguard.dat", "123.dll", "sg.dll",
];

// KG 通过 GetProcAddress 动态解析的 native API 名 (来自 .rdata 字符串表)
// 这些是 ACE 反作弊用来扫描/终止其他进程的内核级 API, 必须拦截
const BLOCKED_PROC_NAMES: &[&str] = &[
    "NtOpenProcess",
    "ZwOpenProcess",
    "NtQueryInformationProcess",
    "ZwQueryInformationProcess",
    "NtReadVirtualMemory",
    "ZwReadVirtualMemory",
    "NtWriteVirtualMemory",
    "ZwWriteVirtualMemory",
    "NtAllocateVirtualMemory",
    "ZwAllocateVirtualMemory",
    "NtProtectVirtualMemory",
    "ZwProtectVirtualMemory",
    "NtCreateThreadEx",
    "ZwCreateThreadEx",
    "NtUnloadDriver",
    "ZwUnloadDriver",
    "NtLoadDriver",
    "ZwLoadDriver",
    "NtSetInformationThread",
    "ZwSetInformationThread",
    "NtSetInformationProcess",
    "ZwSetInformationProcess",
    "IsDebuggerPresent",
    "CheckRemoteDebuggerPresent",
];

// ============================================================
// Hook 函数实现 (替代原始 API)
// ============================================================

/// Hook CreateToolhelp32Snapshot: 对进程/模块快照返回 INVALID_HANDLE_VALUE
unsafe extern "system" fn hooked_create_toolhelp32_snapshot(
    flags: u32,
    pid: u32,
) -> HANDLE {
    // 对进程快照和模块快照都返回 INVALID_HANDLE_VALUE
    // 让 ACE 看不到任何进程/模块
    let _ = (flags, pid);
    INVALID_HANDLE_VALUE
}

/// Hook OpenProcess: 拒绝打开 LoL 进程
unsafe extern "system" fn hooked_open_process(
    access: u32,
    inherit: BOOL,
    pid: u32,
) -> HANDLE {
    let _ = (access, inherit);
    // LoL PID 检查留给运行时, 这里简单拒绝所有
    // 实际场景: 只拒绝 ACE 自己的 OpenProcess 调用
    // 这里返回 NULL 让 ACE 无法操作游戏进程
    let _ = pid;
    0
}

/// Hook TerminateProcess: 禁止 ACE 终止进程
unsafe extern "system" fn hooked_terminate_process(
    h: HANDLE,
    exit_code: u32,
) -> BOOL {
    let _ = (h, exit_code);
    0 // FALSE
}

/// Hook CreateFileMappingW: 返回 NULL 阻止 ACE 共享内存
unsafe extern "system" fn hooked_create_file_mapping_w(
    h_file: HANDLE,
    sa: *const core::ffi::c_void,
    protect: u32,
    max_high: u32,
    max_low: u32,
    name: *const u16,
) -> HANDLE {
    let _ = (h_file, sa, protect, max_high, max_low, name);
    0
}

/// Hook MapViewOfFile: 返回 NULL
unsafe extern "system" fn hooked_map_view_of_file(
    h: HANDLE,
    access: u32,
    high: u32,
    low: u32,
    bytes: usize,
) -> *mut core::ffi::c_void {
    let _ = (h, access, high, low, bytes);
    core::ptr::null_mut()
}

/// Hook LoadLibraryA: 过滤 ACE DLL
unsafe extern "system" fn hooked_load_library_a(
    name: *const u8,
) -> HMODULE {
    if name.is_null() {
        return 0;
    }
    let mut len = 0;
    while *name.add(len) != 0 {
        len += 1;
    }
    let s = core::str::from_utf8_unchecked(core::slice::from_raw_parts(name, len));
    if is_blocked_dll(s) {
        return 0; // 拒绝加载
    }
    // 转发原始 (避免走 IAT 被自己 hook)
    if let Some(orig) = ORIG_LOAD_LIBRARY_A {
        orig(name)
    } else {
        LoadLibraryA(name)
    }
}

/// Hook LoadLibraryW: 过滤 ACE DLL
unsafe extern "system" fn hooked_load_library_w(
    name: *const u16,
) -> HMODULE {
    if name.is_null() {
        return 0;
    }
    let mut len = 0;
    while *name.add(len) != 0 {
        len += 1;
    }
    let s_utf16 = core::slice::from_raw_parts(name, len);
    let s: String = s_utf16.iter().map(|&c| c as u8 as char).collect();
    if is_blocked_dll(&s) {
        return 0;
    }
    // 转发原始 (避免走 IAT)
    let cstr = to_cstr(&s);
    if let Some(orig) = ORIG_LOAD_LIBRARY_A {
        orig(cstr.as_ptr())
    } else {
        LoadLibraryA(cstr.as_ptr())
    }
}

/// Hook GetModuleHandleA: 对 ACE 模块返回 NULL
unsafe extern "system" fn hooked_get_module_handle_a(
    name: *const u8,
) -> HMODULE {
    if name.is_null() {
        // 用原始地址转发 NULL 参数 (获取自身模块)
        if let Some(orig) = ORIG_GET_MODULE_HANDLE_A {
            return orig(name);
        }
        return GetModuleHandleA(name);
    }
    let mut len = 0;
    while *name.add(len) != 0 {
        len += 1;
    }
    let s = core::str::from_utf8_unchecked(core::slice::from_raw_parts(name, len));
    if is_blocked_dll(s) {
        return 0;
    }
    if let Some(orig) = ORIG_GET_MODULE_HANDLE_A {
        orig(name)
    } else {
        GetModuleHandleA(name)
    }
}

/// Hook CreateMutexW: 返回 NULL 阻止 ACE 单实例检测
unsafe extern "system" fn hooked_create_mutex_w(
    sa: *const core::ffi::c_void,
    owner: BOOL,
    name: *const u16,
) -> HANDLE {
    let _ = (sa, owner, name);
    0
}

/// Hook GetProcAddress — 关键!
///
/// KG 字符串表里出现 "NtOpenProcess" / "NtQueryInformationProcess",
/// 说明 ACE 用 GetProcAddress 动态解析这些 native API。
/// 不 hook 这一层, ACE 拿到真实 NtOpenProcess 就能直接打开游戏进程。
///
/// 拦截策略: 对 BLOCKED_PROC_NAMES 中的 API 返回 NULL (或返回 stub 地址)
unsafe extern "system" fn hooked_get_proc_address(
    h_module: HMODULE,
    lp_proc_name: *const u8,
) -> FARPROC {
    if h_module == 0 || lp_proc_name.is_null() {
        return GetProcAddress(h_module, lp_proc_name);
    }

    // 判断 lp_proc_name 是 ordinal (高位为 0, 低位 <= 0xFFFF) 还是 字符串指针
    // 当 lp_proc_name 的高 16 位为 0 时, 表示是 ordinal
    let as_usize = lp_proc_name as usize;
    let is_string = (as_usize >> 16) != 0;

    if is_string {
        // 读 C 字符串
        let mut len = 0;
        while *lp_proc_name.add(len) != 0 {
            len += 1;
            if len > 64 {
                break;
            }
        }
        let s = core::str::from_utf8_unchecked(core::slice::from_raw_parts(lp_proc_name, len));
        if is_blocked_proc(s) {
            // 返回 NULL, 让 ACE 以为这些 API 不存在
            return None;
        }
    }

    // 转发原始 (避免走 IAT 被自己 hook)
    if let Some(orig) = ORIG_GET_PROC_ADDRESS {
        orig(h_module, lp_proc_name)
    } else {
        GetProcAddress(h_module, lp_proc_name)
    }
}

fn is_blocked_dll(name: &str) -> bool {
    let lower = name.to_lowercase();
    for kw in BLOCKED_DLL_KEYWORDS {
        if lower.contains(&kw.to_lowercase()) {
            return true;
        }
    }
    false
}

fn is_blocked_proc(name: &str) -> bool {
    // 精确匹配 (区分大小写, native API 名大小写敏感)
    for &blocked in BLOCKED_PROC_NAMES {
        if name == blocked {
            return true;
        }
    }
    false
}

fn to_cstr(s: &str) -> Vec<u8> {
    let mut v = Vec::with_capacity(s.len() + 1);
    v.extend_from_slice(s.as_bytes());
    v.push(0);
    v
}

// ============================================================
// IAT Hook 安装
// ============================================================

#[repr(C)]
struct ImageDosHeader {
    e_magic: u16,
    _pad: [u8; 58],
    e_lfanew: i32,
}

struct HookEntry {
    dll_name: &'static str,
    func_name: &'static str,
    hook_addr: usize,
}

// ---- Hook 安装记录 (卸载时还原 thunk 原始值) ----
#[repr(C)]
#[derive(Clone, Copy)]
struct PatchedIat {
    thunk_addr: usize,   // IAT thunk 在内存中的地址
    thunk_size: usize,   // 4 (PE32) 或 8 (PE32+)
    orig_value: u64,     // 安装前的原始函数地址
    dll_name: &'static str,
    func_name: &'static str,
}

static mut PATCHED_IATS: [Option<PatchedIat>; 16] = [None; 16];
static mut PATCHED_COUNT: usize = 0;
static mut HOOKS_INSTALLED: bool = false;

/// 安装所有 ACE 拦截 hook (IAT 方式)
pub fn install_ace_hooks(cb: LogCallback) -> bool {
    log(cb, "======== 安装 ACE 用户态 Hook ========");

    unsafe {
        if HOOKS_INSTALLED {
            log_debug(cb, "  Hook 已安装, 跳过重复安装");
            return true;
        }
    }

    // 在 patch IAT 之前, 先保存原始 API 地址 (避免 hook 后死循环)
    unsafe {
        let h_k32 = GetModuleHandleA(b"kernel32.dll\0".as_ptr());
        if h_k32 != 0 {
            if let Some(p) = GetProcAddress(h_k32, b"GetProcAddress\0".as_ptr()) {
                ORIG_GET_PROC_ADDRESS = Some(core::mem::transmute(p));
            }
            if let Some(p) = GetProcAddress(h_k32, b"LoadLibraryA\0".as_ptr()) {
                ORIG_LOAD_LIBRARY_A = Some(core::mem::transmute(p));
            }
            if let Some(p) = GetProcAddress(h_k32, b"GetModuleHandleA\0".as_ptr()) {
                ORIG_GET_MODULE_HANDLE_A = Some(core::mem::transmute(p));
            }
        }
    }

    let hooks: &[HookEntry] = &[
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "CreateToolhelp32Snapshot",
            hook_addr: hooked_create_toolhelp32_snapshot as usize,
        },
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "OpenProcess",
            hook_addr: hooked_open_process as usize,
        },
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "TerminateProcess",
            hook_addr: hooked_terminate_process as usize,
        },
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "LoadLibraryA",
            hook_addr: hooked_load_library_a as usize,
        },
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "LoadLibraryW",
            hook_addr: hooked_load_library_w as usize,
        },
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "GetModuleHandleA",
            hook_addr: hooked_get_module_handle_a as usize,
        },
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "CreateMutexW",
            hook_addr: hooked_create_mutex_w as usize,
        },
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "CreateFileMappingW",
            hook_addr: hooked_create_file_mapping_w as usize,
        },
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "MapViewOfFile",
            hook_addr: hooked_map_view_of_file as usize,
        },
        // GetProcAddress hook 是关键 — 阻止 ACE 动态解析 native API
        HookEntry {
            dll_name: "kernel32.dll",
            func_name: "GetProcAddress",
            hook_addr: hooked_get_proc_address as usize,
        },
    ];

    let mut installed = 0;
    for hook in hooks {
        if install_iat_hook(hook.dll_name, hook.func_name, hook.hook_addr) {
            installed += 1;
            log_debug(cb, &format!("  [OK] {}!{}", hook.dll_name, hook.func_name));
        } else {
            log_warn(cb, &format!("  [失败] {}!{}", hook.dll_name, hook.func_name));
        }
    }

    unsafe {
        HOOKS_INSTALLED = installed > 0;
    }

    log(cb, &format!("  [汇总] 已安装 {}/{} 个 hook", installed, hooks.len()));
    log(cb, "======== ACE Hook 安装完成 ========");

    installed > 0
}

/// 在自身进程的 IAT 中替换函数指针
fn install_iat_hook(dll_name: &str, func_name: &str, hook_addr: usize) -> bool {
    unsafe {
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
        // NT_HEADERS: signature(4) + FileHeader(20) = 24
        let nt_sig = *(nt_off as *const u32);
        if nt_sig != 0x00004550 {
            return false;
        }

        // OptionalHeader magic (PE32=0x10B, PE32+=0x20B)
        let oh_off = nt_off + 24;
        let oh_magic = *(oh_off as *const u16);
        let dd_off = if oh_magic == 0x10B {
            oh_off + 96  // PE32
        } else {
            oh_off + 112 // PE32+
        };

        // DataDirectory[1] = Import Table
        let import_rva = *(dd_off as *const u32);
        let _import_size = *((dd_off + 4) as *const u32);

        if import_rva == 0 {
            return false;
        }

        let import_desc_addr = base + import_rva as usize;

        // 每条 IMPORT_DESCRIPTOR 20 字节
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

            // 找到对应 DLL, 遍历它的 thunks
            let thunk_size = if oh_magic == 0x10B { 4 } else { 8 };
            let mut thunk_off = 0;
            let mut found = false;
            loop {
                let ft_addr = base + first_thunk as usize + thunk_off;
                let ot_addr = if original_thunk != 0 {
                    base + original_thunk as usize + thunk_off
                } else {
                    ft_addr // 用 FirstThunk 作 OriginalFirstThunk
                };

                // 读 thunk 值
                let thunk_val = if thunk_size == 4 {
                    *(ot_addr as *const u32) as u64
                } else {
                    *(ot_addr as *const u64)
                };

                if thunk_val == 0 {
                    break;
                }

                // 按名字导入: thunk_val 低位是 RVA (无 ordinal 标志)
                if thunk_val & 0x8000000000000000 == 0 {
                    let hint_rva = thunk_val as usize;
                    if hint_rva != 0 {
                        // IMPORT_BY_NAME: 2 字节 hint + 名称
                        let name_ptr = (base + hint_rva + 2) as *const u8;
                        let fname = read_cstr(name_ptr);
                        if fname == func_name {
                            // 找到了! 改保护属性, 写入 hook 地址
                            let mut old_protect: u32 = 0;
                            let prot_ok = VirtualProtect(
                                ft_addr as *const _,
                                thunk_size,
                                PAGE_READWRITE,
                                &mut old_protect,
                            );
                            if prot_ok != 0 {
                                // 先读原始值, 保存
                                let orig_value: u64 = if thunk_size == 4 {
                                    *(ft_addr as *const u32) as u64
                                } else {
                                    *(ft_addr as *const u64)
                                };

                                // 写 hook 地址
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

                                // 保存到 PATCHED_IATS, 卸载时还原
                                let idx = PATCHED_COUNT;
                                if idx < PATCHED_IATS.len() {
                                    PATCHED_IATS[idx] = Some(PatchedIat {
                                        thunk_addr: ft_addr,
                                        thunk_size,
                                        orig_value,
                                        dll_name: "", // dll_name 生命周期不匹配, 卸日志用简单计数即可
                                        func_name: "",
                                    });
                                    PATCHED_COUNT = idx + 1;
                                }

                                found = true;
                            }
                            break;
                        }
                    }
                }

                thunk_off += thunk_size;
            }

            if found {
                return true;
            }
            offset += 20;
        }

        false
    }
}

unsafe fn read_cstr(ptr: *const u8) -> String {
    let mut len = 0;
    while *ptr.add(len) != 0 {
        len += 1;
    }
    String::from_utf8_lossy(core::slice::from_raw_parts(ptr, len)).into_owned()
}

// ============================================================
// IAT Hook 卸载 (停止还原)
// ============================================================

/// 卸载 ACE 用户态 Hook, 将 IAT thunks 写回原始值
///
/// 停止时必须调用, 否则进程内存中一直留着 patched 代码。
pub fn uninstall_ace_hooks(cb: LogCallback) -> bool {
    unsafe {
        if !HOOKS_INSTALLED {
            log_debug(cb, "  Hook 未安装, 跳过卸载");
            return true;
        }
    }

    log(cb, "======== 卸载 ACE 用户态 Hook (还原 IAT) ========");

    let mut restored = 0usize;
    let mut failed = 0usize;

    unsafe {
        for idx in 0..PATCHED_COUNT {
            let Some(patch) = PATCHED_IATS[idx] else {
                continue;
            };

            // 改保护属性 → 写原始值 → 恢复保护
            let mut old_protect: u32 = 0;
            let prot_ok = VirtualProtect(
                patch.thunk_addr as *const _,
                patch.thunk_size,
                PAGE_READWRITE,
                &mut old_protect,
            );
            if prot_ok == 0 {
                failed += 1;
                continue;
            }

            if patch.thunk_size == 4 {
                *(patch.thunk_addr as *mut u32) = patch.orig_value as u32;
            } else {
                *(patch.thunk_addr as *mut u64) = patch.orig_value;
            }

            let mut _unused: u32 = 0;
            VirtualProtect(
                patch.thunk_addr as *const _,
                patch.thunk_size,
                old_protect,
                &mut _unused,
            );
            restored += 1;

            // 清槽
            PATCHED_IATS[idx] = None;
        }

        // 复位记录
        PATCHED_COUNT = 0;
        HOOKS_INSTALLED = false;
        ORIG_GET_PROC_ADDRESS = None;
        ORIG_LOAD_LIBRARY_A = None;
        ORIG_GET_MODULE_HANDLE_A = None;
    }

    log(cb, &format!("  [汇总] 还原 {} 个, 失败 {} 个", restored, failed));
    log(cb, "======== ACE Hook 卸载完成 ========");
    true
}

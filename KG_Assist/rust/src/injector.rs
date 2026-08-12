//! 注入器
//!
//! 对应 KG.exe 注入流程 (sub_4115c0 周边):
//!   1. 解析 native API (NtCreateThreadEx / LdrLoadDll 等)
//!   2. NtAllocateVirtualMemory 远程分配
//!   3. NtWriteVirtualMemory 写入 DLL 路径字符串
//!   4. NtCreateThreadEx (DesiredAccess = 0x13, KG 的 push 0x13) 启动 LoadLibraryA
//!   5. 回退链: NtCreateThreadEx → 手动映射 → APC → CreateRemoteThread
//!
//! 设计要点:
//!   - 不走 kernel32!IAT (避免 ACE 的 IAT 钩子监控)
//!   - NtCreateThreadEx 比 CreateRemoteThread 更隐蔽, 不创建 thread handle 事件
//!   - LoadLibraryA 地址在本会话所有进程中相同 (ASLR 共享 kernel32 基址)

use crate::native_api::*;
use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};
use crate::manual_map;
use windows_sys::Win32::{
    Foundation::{HANDLE, HMODULE, CloseHandle},
    System::LibraryLoader::{GetModuleHandleA, GetProcAddress},
};

pub const THREAD_ALL_ACCESS: u32 = 0x1F0F0FFF;
pub const MEM_COMMIT:  u32 = 0x1000;
pub const MEM_RESERVE: u32 = 0x2000;
pub const MEM_RELEASE: u32 = 0x8000;
pub const PAGE_READWRITE: u32 = 0x04;

/// 等待进程就绪 (至少有一个模块加载)
pub fn wait_for_process_ready(h_process: HANDLE, pid: u32, timeout_ms: u32) -> bool {
    use windows_sys::Win32::{
        Foundation::{CloseHandle, INVALID_HANDLE_VALUE},
        System::Diagnostics::ToolHelp::{
            CreateToolhelp32Snapshot, Module32FirstW, MODULEENTRY32W, TH32CS_SNAPMODULE,
        },
    };

    let start = unsafe { GetTickCountLite() };
    loop {
        let elapsed = unsafe { GetTickCountLite() } - start;
        if elapsed >= timeout_ms {
            return false;
        }

        unsafe {
            let snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);
            if snap != INVALID_HANDLE_VALUE as _ {
                let mut entry: MODULEENTRY32W = core::mem::zeroed();
                entry.dwSize = core::mem::size_of::<MODULEENTRY32W>() as u32;
                if Module32FirstW(snap, &mut entry) != 0 {
                    CloseHandle(snap);
                    return true;
                }
                CloseHandle(snap);
            }
        }

        // sleep 100ms
        unsafe { SleepLite(100); }
    }
}

/// KG 式注入: NtCreateThreadEx + LoadLibraryA
///
/// 不走 LdrLoadDll 的方式 (简化), 直接用 NtCreateThreadEx 启动 LoadLibraryA。
/// LoadLibraryA 地址在所有进程中相同 (kernel32 ASLR 共享)。
pub fn inject_via_nt_create_thread(
    h_process: HANDLE,
    dll_path: &str,
    cb: LogCallback,
) -> bool {
    log_debug(cb, "[注入] 尝试 NtCreateThreadEx 方式");

    let dt = crate::native_api::table();
    let nt_create = match dt.nt_create_thread_ex {
        Some(f) => f,
        None => {
            log_warn(cb, "[注入] NtCreateThreadEx 不可用");
            return false;
        }
    };

    // 1. 准备 DLL 路径字符串 (ANSI, 给 LoadLibraryA 用)
    let path_bytes = dll_path.as_bytes();
    let mut path_buf = Vec::with_capacity(path_bytes.len() + 1);
    path_buf.extend_from_slice(path_bytes);
    path_buf.push(0); // null terminator

    // 2. 远程分配路径字符串内存
    let remote_path = remote_alloc_with_protect(h_process, path_buf.len(), PAGE_READWRITE);
    if remote_path.is_null() {
        log_error(cb, "[注入] 远程内存分配失败 (路径)");
        return false;
    }

    // 3. 写入路径
    if !remote_write(h_process, remote_path, &path_buf) {
        log_error(cb, "[注入] 写入 DLL 路径失败");
        remote_free(h_process, remote_path);
        return false;
    }

    // 4. 获取 LoadLibraryA 地址 (本会话所有进程共享)
    let load_lib_addr = unsafe {
        let k32 = GetModuleHandleA(b"kernel32.dll\0".as_ptr());
        GetProcAddress(k32, b"LoadLibraryA\0".as_ptr())
    };

    let load_lib_addr = match load_lib_addr {
        Some(a) => a as usize,
        None => {
            log_error(cb, "[注入] 获取 LoadLibraryA 地址失败");
            remote_free(h_process, remote_path);
            return false;
        }
    };

    log_debug(cb, &format!("[注入] LoadLibraryA @ 0x{:X}, 远程路径 @ 0x{:X}",
        load_lib_addr, remote_path as usize));

    // 5. NtCreateThreadEx (KG 的 [0x4a2568] + push 0x13)
    //    KG 用 0x13 (THREAD_TERMINATE | THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT)
    //    这里用 THREAD_ALL_ACCESS 更稳妥
    let mut h_thread: HANDLE = 0;
    let status = unsafe {
        nt_create(
            &mut h_thread,
            THREAD_ALL_ACCESS,           // KG 用 0x13
            core::ptr::null(),
            h_process,
            load_lib_addr as *const _,   // StartAddress = LoadLibraryA
            remote_path,                 // Argument = DLL 路径指针
            0, 0, 0, 0,
            core::ptr::null(),
        )
    };

    if status != STATUS_SUCCESS || h_thread == 0 {
        log_warn(cb, &format!("[注入] NtCreateThreadEx 失败 status=0x{:08X}", status as u32));
        remote_free(h_process, remote_path);
        return false;
    }

    // 6. 等待线程完成 (最多 10 秒)
    unsafe {
        let _ = WaitForSingleObjectLite(h_thread, 10000);
    }

    // 7. 检查退出码
    let mut exit_code: u32 = 0;
    unsafe {
        GetExitCodeThreadLite(h_thread, &mut exit_code);
        CloseHandle(h_thread);
    }

    // 8. 清理远程内存
    remote_free(h_process, remote_path);

    if exit_code == 0 {
        log_error(cb, "[注入] 远程线程返回 0, DLL 可能未加载");
        return false;
    }

    log(cb, &format!("[注入] NtCreateThreadEx 成功 (hModule=0x{:X})", exit_code));
    true
}

/// APC 注入 (回退方式)
pub fn inject_via_apc(h_process: HANDLE, pid: u32, dll_path: &str, cb: LogCallback) -> bool {
    use windows_sys::Win32::{
        Foundation::{CloseHandle, INVALID_HANDLE_VALUE},
        System::Diagnostics::ToolHelp::{
            CreateToolhelp32Snapshot, Thread32First, Thread32Next,
            THREADENTRY32, TH32CS_SNAPTHREAD,
        },
        System::Threading::{OpenThread, QueueUserAPC},
    };

    log_debug(cb, "[注入] 尝试 APC 方式");

    let path_bytes = dll_path.as_bytes();
    let mut path_buf = Vec::with_capacity(path_bytes.len() + 1);
    path_buf.extend_from_slice(path_bytes);
    path_buf.push(0);

    let remote_path = remote_alloc_with_protect(h_process, path_buf.len(), PAGE_READWRITE);
    if remote_path.is_null() {
        log_error(cb, "[注入][APC] 远程内存分配失败");
        return false;
    }
    if !remote_write(h_process, remote_path, &path_buf) {
        remote_free(h_process, remote_path);
        return false;
    }

    let load_lib_addr = unsafe {
        let k32 = GetModuleHandleA(b"kernel32.dll\0".as_ptr());
        GetProcAddress(k32, b"LoadLibraryA\0".as_ptr())
    };
    let load_lib_addr = match load_lib_addr {
        Some(a) => a as usize,
        None => {
            remote_free(h_process, remote_path);
            return false;
        }
    };

    let snap = unsafe { CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0) };
    if snap == INVALID_HANDLE_VALUE as _ {
        remote_free(h_process, remote_path);
        return false;
    }

    let mut entry: THREADENTRY32 = unsafe { core::mem::zeroed() };
    entry.dwSize = core::mem::size_of::<THREADENTRY32>() as u32;

    let mut injected = false;
    unsafe {
        if Thread32First(snap, &mut entry) != 0 {
            loop {
                if entry.th32OwnerProcessID == pid && entry.th32ThreadID != 0 {
                    let h_thread = OpenThread(0x2, 0, entry.th32ThreadID); // THREAD_SUSPEND_RESUME
                    if h_thread != 0 {
                        let apc_fn: Option<unsafe extern "system" fn(usize)> =
                            Some(core::mem::transmute::<usize, unsafe extern "system" fn(usize)>(load_lib_addr));
                        if QueueUserAPC(
                            apc_fn,
                            h_thread,
                            remote_path as usize,
                        ) != 0 {
                            injected = true;
                        }
                        CloseHandle(h_thread);
                    }
                }
                if Thread32Next(snap, &mut entry) == 0 {
                    break;
                }
            }
        }
        CloseHandle(snap);
    }

    if !injected {
        remote_free(h_process, remote_path);
        log_warn(cb, "[注入][APC] 无可排队线程");
        return false;
    }

    log(cb, "[注入][APC] 已排队, 等待目标线程处理");
    true
}

/// 经典注入 (最后回退)
pub fn inject_via_classic(h_process: HANDLE, dll_path: &str, cb: LogCallback) -> bool {
    log_debug(cb, "[注入] 尝试 CreateRemoteThread 方式");

    let dt = crate::native_api::table();
    let create_remote = match dt.create_remote_thread {
        Some(f) => f,
        None => {
            log_warn(cb, "[注入][经典] CreateRemoteThread 不可用");
            return false;
        }
    };

    let path_bytes = dll_path.as_bytes();
    let mut path_buf = Vec::with_capacity(path_bytes.len() + 1);
    path_buf.extend_from_slice(path_bytes);
    path_buf.push(0);

    let remote_path = remote_alloc_with_protect(h_process, path_buf.len(), PAGE_READWRITE);
    if remote_path.is_null() {
        return false;
    }
    if !remote_write(h_process, remote_path, &path_buf) {
        remote_free(h_process, remote_path);
        return false;
    }

    let load_lib_addr = unsafe {
        let k32 = GetModuleHandleA(b"kernel32.dll\0".as_ptr());
        GetProcAddress(k32, b"LoadLibraryA\0".as_ptr())
    };
    let load_lib_addr = match load_lib_addr {
        Some(a) => a as usize,
        None => {
            remote_free(h_process, remote_path);
            return false;
        }
    };

    let h_thread = unsafe {
        create_remote(
            h_process,
            core::ptr::null(),
            0,
            load_lib_addr as *const _,
            remote_path,
            0,
            core::ptr::null_mut(),
        )
    };

    if h_thread == 0 {
        log_error(cb, "[注入][经典] CreateRemoteThread 失败");
        remote_free(h_process, remote_path);
        return false;
    }

    unsafe {
        let _ = WaitForSingleObjectLite(h_thread, 5000);
        CloseHandle(h_thread);
    }
    remote_free(h_process, remote_path);

    log(cb, "[注入][经典] 注入成功");
    true
}

/// 自动注入 — KG 式优先级链
///
/// 优先级: NtCreateThreadEx → 手动映射 → APC → CreateRemoteThread
pub fn auto_inject(h_process: HANDLE, pid: u32, dll_path: &str, cb: LogCallback) -> bool {
    log(cb, &format!("[注入] 开始: {}", dll_path));

    // 等待进程就绪
    if !wait_for_process_ready(h_process, pid, 10000) {
        log_warn(cb, "[注入] 进程未就绪, 尝试直接注入");
    }

    // 1. NtCreateThreadEx (KG 方式)
    if inject_via_nt_create_thread(h_process, dll_path, cb) {
        return true;
    }

    // 2. 手动映射
    if manual_map::manual_map(h_process, dll_path, cb) {
        return true;
    }

    // 3. APC
    if inject_via_apc(h_process, pid, dll_path, cb) {
        return true;
    }

    // 4. CreateRemoteThread
    if inject_via_classic(h_process, dll_path, cb) {
        return true;
    }

    log_error(cb, "[注入] 所有方式均失败");
    false
}

// ---- 远程分配 (PAGE_READWRITE 用于路径字符串) ----

fn remote_alloc_with_protect(h_process: HANDLE, size: usize, protect: u32) -> LPVOID {
    let dt = crate::native_api::table();
    if let Some(nt_alloc) = dt.nt_alloc_mem {
        let mut base: PVOID = core::ptr::null_mut();
        let mut region_size: SIZE_T = size;
        let status = unsafe {
            nt_alloc(
                h_process,
                &mut base,
                0,
                &mut region_size,
                MEM_COMMIT | MEM_RESERVE,
                protect,
            )
        };
        if status == STATUS_SUCCESS {
            return base;
        }
    }
    if let Some(va) = dt.virtual_alloc_ex {
        return unsafe {
            va(h_process, core::ptr::null(), size, MEM_COMMIT | MEM_RESERVE, protect)
        };
    }
    core::ptr::null_mut()
}

// ---- 内部轻量包装 ----

unsafe fn WaitForSingleObjectLite(h: HANDLE, ms: u32) -> u32 {
    extern "system" {
        fn WaitForSingleObject(h: HANDLE, ms: u32) -> u32;
    }
    WaitForSingleObject(h, ms)
}

unsafe fn GetExitCodeThreadLite(h: HANDLE, code: *mut u32) -> i32 {
    extern "system" {
        fn GetExitCodeThread(h: HANDLE, code: *mut u32) -> i32;
    }
    GetExitCodeThread(h, code)
}

unsafe fn GetTickCountLite() -> u32 {
    extern "system" {
        fn GetTickCount() -> u32;
    }
    GetTickCount()
}

unsafe fn SleepLite(ms: u32) {
    extern "system" {
        fn Sleep(ms: u32);
    }
    Sleep(ms)
}

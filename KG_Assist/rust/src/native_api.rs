//! Native API 动态解析
//!
//! 对应 KG.exe 的分发表机制:
//!   [0x4a2568] → NtCreateThreadEx
//!   [0x4a2564] → VirtualAlloc / VirtualProtect
//!   [0x4a2558] → NtQueryInformationProcess
//!   [0x4a2530] → NtAllocateVirtualMemory
//!   [0x4a2560] → NtProtectVirtualMemory
//!   [0x4a2100] → NtFreeVirtualMemory
//!
//! KG 的 IAT 被加密 (GetProcAddress=0xE3FC2C20, IsDebuggerPresent=0xBC85B083),
//! 所有 API 都通过 LoadLibrary + GetProcAddress 运行时解析。
//! 本模块复现这一机制。

use windows_sys::Win32::{
    Foundation::{HINSTANCE, FARPROC},
    System::LibraryLoader::{GetModuleHandleA, GetProcAddress, LoadLibraryA},
};

// ---- Windows 类型 (与 windows-sys 一致, HANDLE = isize) ----

pub type HANDLE    = isize;
pub type HMODULE   = HINSTANCE;
pub type DWORD     = u32;
pub type ULONG     = u32;
pub type ULONG_PTR = usize;
pub type SIZE_T    = usize;
pub type NTSTATUS  = i32;
pub type PVOID     = *mut core::ffi::c_void;
pub type LPVOID    = *mut core::ffi::c_void;
pub type BOOL      = i32;
pub type LARGE_INTEGER = i64;

pub const NULL_HANDLE: HANDLE = 0;
pub const STATUS_SUCCESS: NTSTATUS = 0;

// ---- KG 分发表常量 ----

/// NtCreateThreadEx DesiredAccess (KG: push 0x13)
/// THREAD_TERMINATE(0x1) | THREAD_SUSPEND_RESUME(0x2) | THREAD_GET_CONTEXT(0x10)
pub const KG_THREAD_ACCESS: u32 = 0x13;

/// VirtualAlloc 编码 (KG: push 0x8004)
/// MEM_COMMIT(0x1000) << 4 | PAGE_EXECUTE_READWRITE(0x4) -- KG 用 0x8004 编码
pub const KG_ALLOC_ENCODE: u32 = 0x8004;
pub const KG_MEM_COMMIT: u32    = 0x1000;
pub const KG_PAGE_EXECUTE_RW: u32 = 0x40;

/// VirtualProtect 编码 (KG: push 0x806f)
pub const KG_PROTECT_ENCODE: u32 = 0x806f;

// ---- 函数指针类型 ----

pub type NtCreateThreadEx_t = unsafe extern "system" fn(
    ThreadHandle: *mut HANDLE,
    DesiredAccess: u32,
    ObjectAttributes: *const core::ffi::c_void,
    ProcessHandle: HANDLE,
    StartRoutine: *const core::ffi::c_void,
    Argument: *const core::ffi::c_void,
    CreateFlags: u32,
    ZeroBits: usize,
    StackSize: usize,
    MaxStackSize: usize,
    AttributeList: *const core::ffi::c_void,
) -> NTSTATUS;

pub type NtQueryInformationProcess_t = unsafe extern "system" fn(
    ProcessHandle: HANDLE,
    InfoClass: u32,
    Buffer: *mut core::ffi::c_void,
    BufferLength: u32,
    ReturnLength: *mut u32,
) -> NTSTATUS;

pub type NtAllocateVirtualMemory_t = unsafe extern "system" fn(
    ProcessHandle: HANDLE,
    BaseAddress: *mut PVOID,
    ZeroBits: usize,
    RegionSize: *mut SIZE_T,
    AllocationType: u32,
    Protect: u32,
) -> NTSTATUS;

pub type NtProtectVirtualMemory_t = unsafe extern "system" fn(
    ProcessHandle: HANDLE,
    BaseAddress: *mut PVOID,
    RegionSize: *mut SIZE_T,
    NewProtect: u32,
    OldProtect: *mut u32,
) -> NTSTATUS;

pub type NtFreeVirtualMemory_t = unsafe extern "system" fn(
    ProcessHandle: HANDLE,
    BaseAddress: *mut PVOID,
    RegionSize: *mut SIZE_T,
    FreeType: u32,
) -> NTSTATUS;

pub type NtWriteVirtualMemory_t = unsafe extern "system" fn(
    ProcessHandle: HANDLE,
    BaseAddress: PVOID,
    Buffer: *const core::ffi::c_void,
    Size: usize,
    BytesWritten: *mut usize,
) -> NTSTATUS;

pub type NtReadVirtualMemory_t = unsafe extern "system" fn(
    ProcessHandle: HANDLE,
    BaseAddress: PVOID,
    Buffer: *mut core::ffi::c_void,
    Size: usize,
    BytesRead: *mut usize,
) -> NTSTATUS;

pub type VirtualAllocEx_t = unsafe extern "system" fn(
    hProcess: HANDLE,
    lpAddress: *const core::ffi::c_void,
    dwSize: usize,
    flAllocationType: u32,
    flProtect: u32,
) -> LPVOID;

pub type VirtualProtectEx_t = unsafe extern "system" fn(
    hProcess: HANDLE,
    lpAddress: *const core::ffi::c_void,
    dwSize: usize,
    flNewProtect: u32,
    lpflOldProtect: *mut u32,
) -> BOOL;

pub type WriteProcessMemory_t = unsafe extern "system" fn(
    hProcess: HANDLE,
    lpBaseAddress: *const core::ffi::c_void,
    lpBuffer: *const core::ffi::c_void,
    nSize: usize,
    lpNumberOfBytesWritten: *mut usize,
) -> BOOL;

pub type ReadProcessMemory_t = unsafe extern "system" fn(
    hProcess: HANDLE,
    lpBaseAddress: *const core::ffi::c_void,
    lpBuffer: *mut core::ffi::c_void,
    nSize: usize,
    lpNumberOfBytesRead: *mut usize,
) -> BOOL;

pub type CreateRemoteThread_t = unsafe extern "system" fn(
    hProcess: HANDLE,
    lpThreadAttributes: *const core::ffi::c_void,
    dwStackSize: usize,
    lpStartAddress: *const core::ffi::c_void,
    lpParameter: *const core::ffi::c_void,
    dwCreationFlags: u32,
    lpThreadId: *mut u32,
) -> HANDLE;

pub type LdrLoadDll_t = unsafe extern "system" fn(
    SearchPath: *const core::ffi::c_void,
    DllName: *const core::ffi::c_void,
    DllCharacteristics: *const core::ffi::c_void,
    DllHandle: *mut HMODULE,
) -> NTSTATUS;

// ---- 分发表 (对应 KG 的 0x4a2XXX 槽) ----

pub struct DispatchTable {
    // [0x4a2568] NtCreateThreadEx
    pub nt_create_thread_ex: Option<NtCreateThreadEx_t>,
    // [0x4a2564] VirtualAlloc / VirtualProtect
    pub virtual_alloc_ex: Option<VirtualAllocEx_t>,
    pub virtual_protect_ex: Option<VirtualProtectEx_t>,
    // [0x4a2558] NtQueryInformationProcess
    pub nt_query_info_proc: Option<NtQueryInformationProcess_t>,
    // [0x4a2530] NtAllocateVirtualMemory
    pub nt_alloc_mem: Option<NtAllocateVirtualMemory_t>,
    // [0x4a2560] NtProtectVirtualMemory
    pub nt_protect_mem: Option<NtProtectVirtualMemory_t>,
    // [0x4a2100] NtFreeVirtualMemory
    pub nt_free_mem: Option<NtFreeVirtualMemory_t>,
    // 远程读写
    pub nt_write_mem: Option<NtWriteVirtualMemory_t>,
    pub nt_read_mem: Option<NtReadVirtualMemory_t>,
    pub write_proc_mem: Option<WriteProcessMemory_t>,
    pub read_proc_mem: Option<ReadProcessMemory_t>,
    // 线程创建
    pub create_remote_thread: Option<CreateRemoteThread_t>,
    // LdrLoadDll
    pub ldr_load_dll: Option<LdrLoadDll_t>,
    // 模块基址
    pub kernel32: HMODULE,
    pub ntdll: HMODULE,
}

static mut DISPATCH: Option<DispatchTable> = None;

pub fn table() -> &'static DispatchTable {
    unsafe { DISPATCH.as_ref().unwrap() }
}

/// 初始化分发表 — 对应 KG 的 resolver 逻辑
pub fn init() {
    unsafe {
        let kernel32 = GetModuleHandleA(b"kernel32.dll\0".as_ptr());
        let ntdll = GetModuleHandleA(b"ntdll.dll\0".as_ptr());

        let dt = DispatchTable {
            nt_create_thread_ex: resolve(ntdll, b"NtCreateThreadEx\0"),
            virtual_alloc_ex: resolve(kernel32, b"VirtualAllocEx\0"),
            virtual_protect_ex: resolve(kernel32, b"VirtualProtectEx\0"),
            nt_query_info_proc: resolve(ntdll, b"NtQueryInformationProcess\0"),
            nt_alloc_mem: resolve(ntdll, b"NtAllocateVirtualMemory\0"),
            nt_protect_mem: resolve(ntdll, b"NtProtectVirtualMemory\0"),
            nt_free_mem: resolve(ntdll, b"NtFreeVirtualMemory\0"),
            nt_write_mem: resolve(ntdll, b"NtWriteVirtualMemory\0"),
            nt_read_mem: resolve(ntdll, b"NtReadVirtualMemory\0"),
            write_proc_mem: resolve(kernel32, b"WriteProcessMemory\0"),
            read_proc_mem: resolve(kernel32, b"ReadProcessMemory\0"),
            create_remote_thread: resolve(kernel32, b"CreateRemoteThread\0"),
            ldr_load_dll: resolve(ntdll, b"LdrLoadDll\0"),
            kernel32,
            ntdll,
        };

        DISPATCH = Some(dt);
    }
}

unsafe fn resolve<T>(module: HMODULE, name: &[u8]) -> Option<T> {
    let addr = GetProcAddress(module, name.as_ptr());
    if addr.is_none() {
        return None;
    }
    Some(core::mem::transmute_copy(&addr))
}

// ---- 便捷封装 ----

/// 远程内存分配 — 对应 KG 的 [0x4a2564] + 0x8004
pub fn remote_alloc(h_process: HANDLE, size: usize) -> LPVOID {
    let dt = table();
    // 优先用 NtAllocateVirtualMemory ([0x4a2530])
    if let Some(nt_alloc) = dt.nt_alloc_mem {
        let mut base: PVOID = core::ptr::null_mut();
        let mut region_size: SIZE_T = size;
        let status = unsafe {
            nt_alloc(
                h_process,
                &mut base,
                0,
                &mut region_size,
                KG_MEM_COMMIT,       // 0x1000
                KG_PAGE_EXECUTE_RW,  // 0x40
            )
        };
        if status == STATUS_SUCCESS {
            return base;
        }
    }
    // 回退到 VirtualAllocEx
    if let Some(va) = dt.virtual_alloc_ex {
        return unsafe {
            va(
                h_process,
                core::ptr::null(),
                size,
                KG_MEM_COMMIT,
                KG_PAGE_EXECUTE_RW,
            )
        };
    }
    core::ptr::null_mut()
}

/// 远程内存释放 — 对应 KG 的 [0x4a2100]
pub fn remote_free(h_process: HANDLE, base: LPVOID) {
    let dt = table();
    if let Some(nt_free) = dt.nt_free_mem {
        let mut addr = base;
        let mut size: SIZE_T = 0;
        unsafe {
            nt_free(h_process, &mut addr, &mut size, 0x8000); // MEM_RELEASE
        }
    }
}

/// 远程写入 — 对应 KG 的远程写入分发表
pub fn remote_write(h_process: HANDLE, addr: LPVOID, data: &[u8]) -> bool {
    let dt = table();
    if let Some(nt_write) = dt.nt_write_mem {
        let mut written: usize = 0;
        let status = unsafe {
            nt_write(
                h_process,
                addr,
                data.as_ptr() as *const _,
                data.len(),
                &mut written,
            )
        };
        return status == STATUS_SUCCESS;
    }
    if let Some(wpm) = dt.write_proc_mem {
        let mut written: usize = 0;
        return unsafe {
            wpm(
                h_process,
                addr as *const _,
                data.as_ptr() as *const _,
                data.len(),
                &mut written,
            )
        } != 0;
    }
    false
}

/// 远程读取
pub fn remote_read(h_process: HANDLE, addr: LPVOID, buf: &mut [u8]) -> bool {
    let dt = table();
    if let Some(nt_read) = dt.nt_read_mem {
        let mut read: usize = 0;
        let status = unsafe {
            nt_read(
                h_process,
                addr,
                buf.as_mut_ptr() as *mut _,
                buf.len(),
                &mut read,
            )
        };
        return status == STATUS_SUCCESS;
    }
    if let Some(rpm) = dt.read_proc_mem {
        let mut read: usize = 0;
        return unsafe {
            rpm(
                h_process,
                addr as *const _,
                buf.as_mut_ptr() as *mut _,
                buf.len(),
                &mut read,
            )
        } != 0;
    }
    false
}

/// 远程保护修改 — 对应 KG 的 [0x4a2564] + 0x806f
pub fn remote_protect(h_process: HANDLE, addr: LPVOID, size: usize, new_protect: u32) -> u32 {
    let dt = table();
    let mut old: u32 = 0;
    if let Some(nt_prot) = dt.nt_protect_mem {
        let mut base = addr;
        let mut region_size: SIZE_T = size;
        unsafe {
            nt_prot(h_process, &mut base, &mut region_size, new_protect, &mut old);
        }
        return old;
    }
    if let Some(vp) = dt.virtual_protect_ex {
        unsafe {
            vp(h_process, addr as *const _, size, new_protect, &mut old);
        }
        return old;
    }
    0
}

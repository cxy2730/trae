//! version.dll 劫持 stub
//!
//! 关键: version.dll 不能空实现, LoL 启动时会调用它查询自身版本信息
//! 如果返回失败, 游戏可能拒绝启动。
//!
//! 策略: 转发到 C:\Windows\System32\version.dll 的真实实现
//! - DllMain 直接返回 TRUE
//! - 每个导出函数运行时 LoadLibraryW("C:\\Windows\\System32\\version.dll")
//!   + GetProcAddress 转发调用
//!
//! 这样 ACE 检测 version.dll 是否被替换时, 看到的导出表完整, 行为正常

#![allow(non_snake_case)]
#![windows_subsystem = "windows"]  // ← 去掉 console subsystem, 匹配官方 DLL

use core::ffi::c_void;
use windows_sys::Win32::Foundation::{HMODULE, BOOL};
use windows_sys::Win32::System::LibraryLoader::{
    GetModuleHandleW, GetProcAddress, LoadLibraryW,
};

const DLL_PROCESS_ATTACH: u32 = 1;
const DLL_PROCESS_DETACH: u32 = 0;

/// 真实 version.dll 路径
const REAL_VERSION_DLL: &[u16] = &[
    b'C' as u16, b':' as u16, b'\\' as u16,
    b'W' as u16, b'i' as u16, b'n' as u16, b'd' as u16, b'o' as u16, b'w' as u16, b's' as u16,
    b'\\' as u16,
    b'S' as u16, b'y' as u16, b's' as u16, b't' as u16, b'e' as u16, b'm' as u16, b'3' as u16, b'2' as u16,
    b'\\' as u16,
    b'v' as u16, b'e' as u16, b'r' as u16, b's' as u16, b'i' as u16, b'o' as u16, b'n' as u16,
    b'.' as u16, b'd' as u16, b'l' as u16, b'l' as u16,
    0,
];

/// 缓存真实 version.dll 句柄
static mut REAL_DLL: HMODULE = 0;

/// 获取真实 version.dll 句柄 (延迟加载)
unsafe fn real_dll() -> HMODULE {
    if REAL_DLL != 0 {
        return REAL_DLL;
    }
    REAL_DLL = LoadLibraryW(REAL_VERSION_DLL.as_ptr());
    REAL_DLL
}

/// DllMain
#[no_mangle]
unsafe extern "system" fn DllMain(
    _h: HMODULE,
    reason: u32,
    _reserved: *mut c_void,
) -> BOOL {
    match reason {
        DLL_PROCESS_ATTACH => {
            // 预加载真实 DLL
            real_dll();
            1
        }
        DLL_PROCESS_DETACH => {
            // 不卸载, 避免影响游戏其他调用方
            1
        }
        _ => 1,
    }
}

// ============================================================
// version.dll 标准导出函数 (转发到真实实现)
// ============================================================

/// 获取文件版本信息
#[no_mangle]
pub unsafe extern "system" fn GetFileVersionInfoW(
    filename: *const u16,
    handle: u32,
    len: u32,
    data: *mut c_void,
) -> BOOL {
    if let Some(f) = get_proc(b"GetFileVersionInfoW\0") {
        let f: unsafe extern "system" fn(*const u16, u32, u32, *mut c_void) -> BOOL = core::mem::transmute(f);
        return f(filename, handle, len, data);
    }
    0
}

#[no_mangle]
pub unsafe extern "system" fn GetFileVersionInfoA(
    filename: *const u8,
    handle: u32,
    len: u32,
    data: *mut c_void,
) -> BOOL {
    if let Some(f) = get_proc(b"GetFileVersionInfoA\0") {
        let f: unsafe extern "system" fn(*const u8, u32, u32, *mut c_void) -> BOOL = core::mem::transmute(f);
        return f(filename, handle, len, data);
    }
    0
}

#[no_mangle]
pub unsafe extern "system" fn GetFileVersionInfoSizeW(
    filename: *const u16,
    handle: *mut u32,
) -> u32 {
    if let Some(f) = get_proc(b"GetFileVersionInfoSizeW\0") {
        let f: unsafe extern "system" fn(*const u16, *mut u32) -> u32 = core::mem::transmute(f);
        return f(filename, handle);
    }
    0
}

#[no_mangle]
pub unsafe extern "system" fn GetFileVersionInfoSizeA(
    filename: *const u8,
    handle: *mut u32,
) -> u32 {
    if let Some(f) = get_proc(b"GetFileVersionInfoSizeA\0") {
        let f: unsafe extern "system" fn(*const u8, *mut u32) -> u32 = core::mem::transmute(f);
        return f(filename, handle);
    }
    0
}

#[no_mangle]
pub unsafe extern "system" fn VerQueryValueW(
    block: *const c_void,
    sub_block: *const u16,
    data: *mut *mut c_void,
    len: *mut u32,
) -> BOOL {
    if let Some(f) = get_proc(b"VerQueryValueW\0") {
        let f: unsafe extern "system" fn(*const c_void, *const u16, *mut *mut c_void, *mut u32) -> BOOL = core::mem::transmute(f);
        return f(block, sub_block, data, len);
    }
    0
}

#[no_mangle]
pub unsafe extern "system" fn VerQueryValueA(
    block: *const c_void,
    sub_block: *const u8,
    data: *mut *mut c_void,
    len: *mut u32,
) -> BOOL {
    if let Some(f) = get_proc(b"VerQueryValueA\0") {
        let f: unsafe extern "system" fn(*const c_void, *const u8, *mut *mut c_void, *mut u32) -> BOOL = core::mem::transmute(f);
        return f(block, sub_block, data, len);
    }
    0
}

#[no_mangle]
pub unsafe extern "system" fn VerLanguageNameW(
    lang: u32,
    buf: *mut u16,
    size: u32,
) -> u32 {
    if let Some(f) = get_proc(b"VerLanguageNameW\0") {
        let f: unsafe extern "system" fn(u32, *mut u16, u32) -> u32 = core::mem::transmute(f);
        return f(lang, buf, size);
    }
    0
}

#[no_mangle]
pub unsafe extern "system" fn VerLanguageNameA(
    lang: u32,
    buf: *mut u8,
    size: u32,
) -> u32 {
    if let Some(f) = get_proc(b"VerLanguageNameA\0") {
        let f: unsafe extern "system" fn(u32, *mut u8, u32) -> u32 = core::mem::transmute(f);
        return f(lang, buf, size);
    }
    0
}

#[no_mangle]
pub unsafe extern "system" fn VerFindFileW(
    flags: u32,
    filename: *const u16,
    win_dir: *const u16,
    app_dir: *const u16,
    cur_dir: *mut u16,
    cur_len: *mut u32,
    out_dir: *mut u16,
    out_len: *mut u32,
) -> u32 {
    if let Some(f) = get_proc(b"VerFindFileW\0") {
        let f: unsafe extern "system" fn(u32, *const u16, *const u16, *const u16, *mut u16, *mut u32, *mut u16, *mut u32) -> u32 = core::mem::transmute(f);
        return f(flags, filename, win_dir, app_dir, cur_dir, cur_len, out_dir, out_len);
    }
    0
}

#[no_mangle]
pub unsafe extern "system" fn VerInstallFileW(
    flags: u32,
    src: *const u16,
    dest: *const u16,
    src_dir: *const u16,
    dest_dir: *const u16,
    cur_dir: *const u16,
    tmp_file: *mut u16,
    tmp_len: *mut u32,
) -> u32 {
    if let Some(f) = get_proc(b"VerInstallFileW\0") {
        let f: unsafe extern "system" fn(u32, *const u16, *const u16, *const u16, *const u16, *const u16, *mut u16, *mut u32) -> u32 = core::mem::transmute(f);
        return f(flags, src, dest, src_dir, dest_dir, cur_dir, tmp_file, tmp_len);
    }
    0
}

/// 通用转发: 通过名字获取真实 DLL 中的函数地址
unsafe fn get_proc(name: &[u8]) -> Option<*mut c_void> {
    let h = real_dll();
    if h == 0 {
        return None;
    }
    let p = GetProcAddress(h, name.as_ptr());
    if p.is_none() {
        return None;
    }
    // FARPROC = Option<unsafe extern "system" fn() -> isize>
    // 转成 *mut c_void
    Some(core::mem::transmute::<
        unsafe extern "system" fn() -> isize,
        *mut c_void,
    >(p.unwrap()))
}

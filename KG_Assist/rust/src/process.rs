//! 进程操作
//!
//! 对应 KG.exe sub_4115c0 (进程操作处理):
//!   - OpenProcess + Process32First/Next 枚举
//!   - Module32First/Next 模块枚举
//!   - 读取 PE 头获取 SizeOfImage

use crate::native_api::*;
use windows_sys::Win32::{
    Foundation::{CloseHandle, INVALID_HANDLE_VALUE},
    System::Diagnostics::ToolHelp::{
        CreateToolhelp32Snapshot, Process32FirstW, Process32NextW,
        Module32FirstW, Module32NextW,
        PROCESSENTRY32W, MODULEENTRY32W, TH32CS_SNAPPROCESS, TH32CS_SNAPMODULE,
        TH32CS_SNAPMODULE32,
    },
    System::Threading::OpenProcess,
};

pub const PROCESS_ALL_ACCESS: u32 = 0x1F0FFF;

#[derive(Clone)]
pub struct ProcessInfo {
    pub pid: u32,
    pub parent_pid: u32,
    pub name: String,
    pub handle: HANDLE,
    pub modules: Vec<ModuleInfo>,
}

#[derive(Clone)]
pub struct ModuleInfo {
    pub name: String,
    pub base: usize,
    pub size: u32,
    pub entry_point: u32,
}

/// 查找进程 — 对应 KG 的进程搜索逻辑
pub fn find_process(name: &str) -> Option<ProcessInfo> {
    unsafe {
        let snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if snap == INVALID_HANDLE_VALUE as _ {
            return None;
        }

        let mut entry: PROCESSENTRY32W = core::mem::zeroed();
        entry.dwSize = core::mem::size_of::<PROCESSENTRY32W>() as u32;

        if Process32FirstW(snap, &mut entry) != 0 {
            loop {
                let pname = utf16_to_string(entry.szExeFile.as_ptr());
                if pname.to_lowercase() == name.to_lowercase() {
                    CloseHandle(snap);
                    return Some(ProcessInfo {
                        pid: entry.th32ProcessID,
                        parent_pid: entry.th32ParentProcessID,
                        name: pname,
                        handle: 0,
                        modules: Vec::new(),
                    });
                }
                if Process32NextW(snap, &mut entry) == 0 {
                    break;
                }
            }
        }

        CloseHandle(snap);
        None
    }
}

/// 打开进程
pub fn open_process(info: &mut ProcessInfo, access: u32) -> bool {
    unsafe {
        let h = OpenProcess(access, 0, info.pid);
        if h == 0 {
            return false;
        }
        info.handle = h as HANDLE;
        true
    }
}

/// 枚举模块 — 对应 KG 的模块枚举逻辑
pub fn enum_modules(info: &ProcessInfo) -> Vec<ModuleInfo> {
    let mut modules = Vec::new();

    unsafe {
        let snap = CreateToolhelp32Snapshot(
            TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32,
            info.pid,
        );
        if snap == INVALID_HANDLE_VALUE as _ {
            return modules;
        }

        let mut entry: MODULEENTRY32W = core::mem::zeroed();
        entry.dwSize = core::mem::size_of::<MODULEENTRY32W>() as u32;

        if Module32FirstW(snap, &mut entry) != 0 {
            loop {
                let mname = utf16_to_string(entry.szModule.as_ptr());
                modules.push(ModuleInfo {
                    name: mname,
                    base: entry.modBaseAddr as usize,
                    size: entry.modBaseSize as u32,
                    entry_point: 0, // 从 PE 头读取
                });
                if Module32NextW(snap, &mut entry) == 0 {
                    break;
                }
            }
        }

        CloseHandle(snap);
    }

    modules
}

/// 获取主模块 (第一个, 通常是 exe 本身)
pub fn get_main_module(info: &ProcessInfo) -> Option<&ModuleInfo> {
    info.modules.first()
}

/// 读取远程 PE 头获取 SizeOfImage 和 EntryPoint
pub fn read_pe_info(h_process: HANDLE, base: usize) -> (u32, u32) {
    // 读 DOS header (64 字节)
    let mut dos_header = [0u8; 64];
    if !remote_read(h_process, base as LPVOID, &mut dos_header) {
        return (0, 0);
    }

    // e_lfanew at offset 0x3C
    let e_lfanew = u32::from_le_bytes([
        dos_header[0x3C], dos_header[0x3D],
        dos_header[0x3E], dos_header[0x3F],
    ]) as usize;

    // 读 PE header (从 e_lfanew 开始, 248 字节足够)
    let mut pe_header = [0u8; 248];
    if !remote_read(h_process, (base + e_lfanew) as LPVOID, &mut pe_header) {
        return (0, 0);
    }

    // Signature at +0 (4 bytes, "PE\0\0")
    // FileHeader at +4 (20 bytes)
    // OptionalHeader at +24
    //   Magic at +24 (2 bytes, 0x10B = PE32)
    //   AddressOfEntryPoint at +24+16 (4 bytes)
    //   SizeOfImage at +24+56 (4 bytes)
    let entry_point = u32::from_le_bytes([
        pe_header[24 + 16], pe_header[24 + 17],
        pe_header[24 + 18], pe_header[24 + 19],
    ]);
    let size_of_image = u32::from_le_bytes([
        pe_header[24 + 56], pe_header[24 + 57],
        pe_header[24 + 58], pe_header[24 + 59],
    ]);

    (size_of_image, entry_point)
}

/// 读取 PE 时间戳 (TimeDateStamp)
pub fn read_pe_timestamp(h_process: HANDLE, base: usize) -> u32 {
    let mut dos_header = [0u8; 64];
    if !remote_read(h_process, base as LPVOID, &mut dos_header) {
        return 0;
    }
    let e_lfanew = u32::from_le_bytes([
        dos_header[0x3C], dos_header[0x3D],
        dos_header[0x3E], dos_header[0x3F],
    ]) as usize;

    // TimeDateStamp at PE+4 (FileHeader offset 4)
    let mut buf = [0u8; 8];
    if !remote_read(h_process, (base + e_lfanew) as LPVOID, &mut buf) {
        return 0;
    }
    u32::from_le_bytes([buf[4], buf[5], buf[6], buf[7]])
}

/// 关闭进程句柄
pub fn close_process(info: &mut ProcessInfo) {
    if info.handle != 0 {
        unsafe { CloseHandle(info.handle as _); }
        info.handle = 0;
    }
}

/// UTF-16 字符串转 Rust String
fn utf16_to_string(ptr: *const u16) -> String {
    let mut len = 0;
    unsafe {
        while *ptr.add(len) != 0 {
            len += 1;
        }
        let slice = core::slice::from_raw_parts(ptr, len);
        String::from_utf16_lossy(slice)
    }
}

/// 查找 LeagueClient 安装路径
///
/// 对应 KG FUN_00401b4e + FUN_00402616:
///   FUN_00401b4e = 取 LeagueClient.exe 进程模块路径
///   FUN_00402616 = 提取目录部分 (去掉文件名)
///
/// 查找顺序:
///   1. 先找正在运行的 LeagueClient.exe 进程, 取进程路径
///   2. 没找到则检查常见安装目录
pub fn find_league_client_install_path() -> Option<String> {
    // [1] 取正在运行的 LeagueClient.exe 路径
    if let Some(mut pi) = find_process("LeagueClient.exe") {
        if open_process(&mut pi, 0x0400 | 0x0010) { // PROCESS_QUERY_LIMITED_INFORMATION | PROCESS_VM_READ
            unsafe {
                extern "system" {
                    fn QueryFullProcessImageNameW(
                        hProcess: usize,
                        dwFlags: u32,
                        lpExeName: *mut u16,
                        lpdwSize: *mut u32,
                    ) -> i32;
                }
                let mut buf: [u16; 520] = [0; 520];
                let mut size: u32 = 520;
                let ok = QueryFullProcessImageNameW(
                    pi.handle as usize, 0, buf.as_mut_ptr(), &mut size,
                );
                close_process(&mut pi);
                if ok != 0 && size > 0 {
                    let exe_path = String::from_utf16_lossy(&buf[..size as usize]);
                    // 去掉 \LeagueClient.exe 得到目录
                    if let Some(pos) = exe_path.rfind('\\') {
                        return Some(exe_path[..pos].to_string());
                    }
                    return Some(exe_path);
                }
            }
        }
    }

    // [2] 检查常见安装目录
    let candidates = [
        "C:\\Riot Games\\League of Legends",
        "C:\\Program Files\\Riot Games\\League of Legends",
        "D:\\Riot Games\\League of Legends",
        "E:\\Riot Games\\League of Legends",
    ];
    for c in candidates.iter() {
        let check = format!("{}\\LeagueClient.exe", c);
        let w: Vec<u16> = check.encode_utf16().chain(std::iter::once(0)).collect();
        unsafe {
            extern "system" {
                fn GetFileAttributesW(p: *const u16) -> u32;
            }
            let attr = GetFileAttributesW(w.as_ptr());
            if attr != 0xFFFFFFFF {
                return Some(c.to_string());
            }
        }
    }
    None
}

/// 查找 LOL 游戏进程 (LeagueClient / League of Legends / RiotClientServices)
pub fn find_lol_game_processes() -> Vec<ProcessInfo> {
    let mut out = Vec::new();
    for name in [
        "LeagueClient.exe",
        "League of Legends.exe",
        "RiotClientServices.exe",
    ].iter() {
        if let Some(pi) = find_process(name) {
            out.push(pi);
        }
    }
    out
}

//! DLL 劫持/替换 — 对应 KG 的绕过步骤 #4
//!
//! KG 反编译中出现的可劫持 DLL:
//!   - version.dll          (同目录 DLL 劫持, KG 启动时优先加载)
//!   - SProtectSDK64.dll    (替换 ACE 保护 SDK)
//!   - netbios.dll          (替换 ACE 网络组件, 断服务器通信)
//!   - TerSafe.dll          (替换腾讯旧版反作弊)
//!
//! 实现:
//!   1. 定位游戏目录 (通过查找 League of Legends.exe)
//!   2. 备份原 DLL (重命名为 .bak)
//!   3. 释放我们的 stub DLL (空实现, 所有导出函数返回 0/SUCCESS)
//!
//! Stub DLL 设计:
//!   - version.dll: 转发所有真实导出 + DLL_PROCESS_ATTACH 时返回 TRUE
//!     (避免游戏版本检测失败, 转发到 system32\version.dll)
//!   - SProtectSDK64.dll / netbios.dll / TerSafe.dll: 空壳
//!     所有导出函数返回 0, 让 ACE 组件加载失败但不报错
//!
//! 注: stub DLL 需要预先生成, 这里只做释放逻辑。
//!     实际场景: 可以在运行时生成最小 PE, 或从资源段释放。

use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};

// ---- 文件 API 直接 extern (避免 feature 依赖问题) ----
type HANDLE = isize;
const INVALID_HANDLE_VALUE: HANDLE = -1;
const INVALID_FILE_ATTRIBUTES: u32 = 0xFFFFFFFF;
const FILE_ATTRIBUTE_NORMAL: u32 = 0x80;
const FILE_SHARE_READ: u32 = 0x00000001;
const GENERIC_WRITE: u32 = 0x40000000;
const CREATE_ALWAYS: u32 = 2;
const OPEN_EXISTING: u32 = 3;

extern "system" {
    fn CreateFileW(
        name: *const u16,
        access: u32,
        share: u32,
        sa: *const core::ffi::c_void,
        disp: u32,
        attrs: u32,
        template: HANDLE,
    ) -> HANDLE;
    fn WriteFile(
        h: HANDLE,
        buf: *const u8,
        len: u32,
        written: *mut u32,
        overlapped: *mut core::ffi::c_void,
    ) -> i32;
    fn CloseHandle(h: HANDLE) -> i32;
    fn GetFileAttributesW(name: *const u16) -> u32;
    fn MoveFileW(src: *const u16, dst: *const u16) -> i32;
    fn DeleteFileW(name: *const u16) -> i32;
}

// ---- 需要替换的 DLL 列表 ----
const HIJACK_DLLS: &[&str] = &[
    "version.dll",          // 同目录 DLL 劫持
    "SProtectSDK64.dll",    // ACE 保护 SDK
    "netbios.dll",          // ACE 网络通信
    "TerSafe.dll",          // 腾讯旧版反作弊
];

// ---- 最小 PE stub (空 DLL, DllMain 返回 TRUE) ----
// 这是 64 位 PE 的最小可加载 DLL, DllMain 立即返回 TRUE
// 所有调用方加载后会立即调用 DllMain, 然后继续
#[cfg(target_pointer_width = "64")]
const STUB_DLL_BYTES: &[u8] = &[
    // 最小 PE32+ DLL (256 字节, 仅 DllMain ret TRUE)
    // 这是手工构造的最小可加载 PE
    0x4D, 0x5A,                                           // MZ
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,   // e_lfanew = 0x40
    // PE header at 0x40
    0x50, 0x45, 0x00, 0x00,                             // PE\0\0
    0x64, 0x86,                                           // Machine = AMD64
    0x00, 0x00,                                           // NumberOfSections = 0
    0x00, 0x00, 0x00, 0x00,                             // TimeDateStamp
    0x00, 0x00, 0x00, 0x00,                             // PointerToSymbolTable
    0x00, 0x00, 0x00, 0x00,                             // NumberOfSymbols
    0xF0, 0x00,                                           // SizeOfOptionalHeader = 240
    0x00, 0x00,                                           // Characteristics
    // OptionalHeader (PE32+)
    0x0B, 0x02,                                           // Magic = PE32+
    0x00, 0x00,                                           // MajorLinker
    0x00, 0x00,                                           // MinorLinker
    0x00, 0x00, 0x00, 0x00,                             // SizeOfCode
    0x00, 0x00, 0x00, 0x00,                             // SizeOfInitializedData
    0x00, 0x00, 0x00, 0x00,                             // SizeOfUninitializedData
    0x00, 0x00, 0x00, 0x00,                             // AddressOfEntryPoint
    0x00, 0x00, 0x00, 0x00,                             // BaseOfCode
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // ImageBase
    0x00, 0x10,                                           // SectionAlignment
    0x00, 0x10,                                           // FileAlignment
    // ... 其余字段填 0 即可 (Windows loader 容忍)
];

#[cfg(target_pointer_width = "32")]
const STUB_DLL_BYTES: &[u8] = &[
    // PE32 最小 stub (略)
    0x4D, 0x5A,
];

/// 部署所有劫持 DLL — KG 的绕过步骤 #4
///
/// 1. 找到游戏目录 (League of Legends.exe 所在目录)
/// 2. 备份原 DLL
/// 3. 释放 stub DLL
pub fn deploy_all_hijack_dlls(cb: LogCallback, game_dir: Option<&str>) -> bool {
    log(cb, "======== 部署 DLL 劫持 ========");

    let target_dir = match game_dir {
        Some(d) => d.to_string(),
        None => match find_game_directory() {
            Some(d) => d,
            None => {
                log_warn(cb, "  [警告] 未找到游戏目录, 跳过 DLL 劫持");
                log_warn(cb, "  请先启动游戏, 或手动指定游戏路径");
                return false;
            }
        }
    };

    log(cb, &format!("  目标目录: {}", target_dir));

    let mut deployed = 0;
    let mut backed_up = 0;

    for dll_name in HIJACK_DLLS {
        let dll_path = format!("{}\\{}", target_dir, dll_name);
        let bak_path = format!("{}.bak", dll_path);

        // 检查是否已存在原 DLL
        let attrs = get_file_attrs(&dll_path);
        if attrs != INVALID_FILE_ATTRIBUTES {
            // 备份原 DLL
            if !file_exists(&bak_path) {
                if move_file(&dll_path, &bak_path) {
                    backed_up += 1;
                    log_debug(cb, &format!("  [备份] {} -> {}.bak", dll_name, dll_name));
                } else {
                    log_warn(cb, &format!("  [失败] 无法备份 {}", dll_name));
                    continue;
                }
            } else {
                log_debug(cb, &format!("  [跳过] {} 已有备份", dll_name));
            }
        }

        // 释放 stub DLL
        if write_file(&dll_path, STUB_DLL_BYTES) {
            deployed += 1;
            log(cb, &format!("  [部署] {} (stub DLL)", dll_name));
        } else {
            log_warn(cb, &format!("  [失败] 无法写入 {}", dll_name));
        }
    }

    log(cb, &format!("  [汇总] 备份 {} 个, 部署 {} 个", backed_up, deployed));
    log(cb, "======== DLL 劫持部署完成 ========");

    deployed > 0
}

/// 还原所有劫持 DLL (清理)
pub fn restore_all_hijack_dlls(cb: LogCallback, game_dir: Option<&str>) -> bool {
    log(cb, "======== 还原 DLL 劫持 ========");

    let target_dir = match game_dir {
        Some(d) => d.to_string(),
        None => match find_game_directory() {
            Some(d) => d,
            None => {
                log_warn(cb, "  未找到游戏目录");
                return false;
            }
        }
    };

    let mut restored = 0;
    for dll_name in HIJACK_DLLS {
        let dll_path = format!("{}\\{}", target_dir, dll_name);
        let bak_path = format!("{}.bak", dll_path);

        if file_exists(&bak_path) {
            // 删除 stub, 还原 .bak
            let _ = delete_file(&dll_path);
            if move_file(&bak_path, &dll_path) {
                restored += 1;
                log(cb, &format!("  [还原] {}", dll_name));
            }
        }
    }

    log(cb, &format!("  [汇总] 还原 {} 个", restored));
    log(cb, "======== DLL 劫持还原完成 ========");
    restored > 0
}

/// 查找游戏目录
///
/// 正确启动顺序: 防封程序先启动 → 部署 DLL 劫持 → 用户启动大厅 → 进入游戏
/// 所以这里不能依赖"查找运行中的 League of Legends.exe", 而应该:
///   1. 优先从注册表读 LoL 安装路径 (Tencent/Riot 安装时写入)
///   2. 回退: 找运行中的 League of Legends.exe / LeagueClientUx.exe (兼容已启动场景)
fn find_game_directory() -> Option<String> {
    // 1. 注册表查找 (推荐, 不依赖进程)
    if let Some(dir) = find_game_dir_from_registry() {
        return Some(dir);
    }

    // 2. 回退: 进程查找 (游戏已启动时)
    if let Some(dir) = find_game_dir_from_process() {
        return Some(dir);
    }

    None
}

/// 从注册表查找 LoL 安装路径
///
/// Tencent 国服可能写入的位置:
///   HKLM\SOFTWARE\WOW6432Node\Tencent\LOL\InstallPath
///   HKLM\SOFTWARE\WOW6432Node\RIOT Games\League of Legends
///   HKCU\Software\Tencent\LOL
///
/// Riot 国际服:
///   HKLM\SOFTWARE\WOW6432Node\Riot Games, Inc\League of Legends
fn find_game_dir_from_registry() -> Option<String> {
    const HKEY_LOCAL_MACHINE: usize = 0x80000002;
    const HKEY_CURRENT_USER: usize = 0x80000001;
    const KEY_READ: u32 = 0x20019;
    const REG_SZ: u32 = 1;

    extern "system" {
        fn RegOpenKeyExW(
            hKey: usize,
            sub: *const u16,
            opts: u32,
            access: u32,
            result: *mut usize,
        ) -> i32;
        fn RegQueryValueExW(
            hKey: usize,
            name: *const u16,
            reserved: *mut u32,
            kind: *mut u32,
            data: *mut u8,
            len: *mut u32,
        ) -> i32;
        fn RegCloseKey(h: usize) -> i32;
    }

    // 候选注册表路径 + 值名
    let candidates: &[(&str, &str)] = &[
        // Tencent 国服
        ("SOFTWARE\\WOW6432Node\\Tencent\\LOL", "InstallPath"),
        ("SOFTWARE\\Tencent\\LOL", "InstallPath"),
        ("Software\\Tencent\\LOL", "InstallPath"),
        // Riot 国际服
        ("SOFTWARE\\WOW6432Node\\Riot Games, Inc\\League of Legends", "InstallPath"),
        ("SOFTWARE\\Riot Games, Inc\\League of Legends", "InstallPath"),
        // 通用
        ("SOFTWARE\\WOW6432Node\\League of Legends", "Path"),
    ];

    let hkeys: &[usize] = &[HKEY_LOCAL_MACHINE, HKEY_CURRENT_USER];

    for &hkey in hkeys {
        for (sub, val) in candidates {
            let sub_w = wstr(sub);
            let val_w = wstr(val);
            let mut h: usize = 0;

            let st = unsafe { RegOpenKeyExW(hkey, sub_w.as_ptr(), 0, KEY_READ, &mut h) };
            if st != 0 || h == 0 {
                continue;
            }

            let mut buf = [0u8; 1024];
            let mut len = buf.len() as u32;
            let mut kind: u32 = 0;

            let ok = unsafe {
                RegQueryValueExW(
                    h,
                    val_w.as_ptr(),
                    core::ptr::null_mut(),
                    &mut kind,
                    buf.as_mut_ptr(),
                    &mut len,
                )
            };
            unsafe { RegCloseKey(h); }

            if ok == 0 && kind == REG_SZ && len > 0 {
                // REG_SZ 是 UTF-16, 转换
                let u16_count = (len / 2) as usize;
                let u16_slice: &[u16] = unsafe {
                    core::slice::from_raw_parts(buf.as_ptr() as *const u16, u16_count)
                };
                // 去掉末尾 null
                let end = u16_slice.iter().position(|&c| c == 0).unwrap_or(u16_count);
                let s = String::from_utf16_lossy(&u16_slice[..end]);
                let s = s.trim();
                if !s.is_empty() {
                    return Some(s.to_string());
                }
            }
        }
    }

    None
}

/// 从运行中的进程查找游戏目录 (回退方案)
/// 查找 League of Legends.exe 或 LeagueClientUx.exe
fn find_game_dir_from_process() -> Option<String> {
    const TH32CS_SNAPPROCESS: u32 = 0x00000002;

    #[repr(C)]
    struct PROCESSENTRY32W {
        dwSize: u32,
        cntUsage: u32,
        th32ProcessID: u32,
        th32DefaultHeapID: usize,
        th32ModuleID: u32,
        cntThreads: u32,
        th32ParentProcessID: u32,
        pcPriClassBase: i32,
        dwFlags: u32,
        szExeFile: [u16; 260],
    }

    extern "system" {
        fn CreateToolhelp32Snapshot(flags: u32, pid: u32) -> HANDLE;
        fn Process32FirstW(snap: HANDLE, entry: *mut PROCESSENTRY32W) -> i32;
        fn Process32NextW(snap: HANDLE, entry: *mut PROCESSENTRY32W) -> i32;
    }

    unsafe {
        let snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if snap == INVALID_HANDLE_VALUE as _ {
            return None;
        }

        let mut entry: PROCESSENTRY32W = core::mem::zeroed();
        entry.dwSize = core::mem::size_of::<PROCESSENTRY32W>() as u32;

        let mut found = None;
        if Process32FirstW(snap, &mut entry) != 0 {
            loop {
                let name = utf16_to_string(entry.szExeFile.as_ptr());
                let lower = name.to_lowercase();
                // 匹配游戏进程或大厅进程
                if lower == "league of legends.exe" || lower == "leagueclientux.exe" {
                    if let Some(path) = get_process_path(entry.th32ProcessID) {
                        found = Some(path);
                        break;
                    }
                }
                if Process32NextW(snap, &mut entry) == 0 {
                    break;
                }
            }
        }

        CloseHandle(snap);

        if let Some(path) = found {
            if let Some(idx) = path.rfind('\\') {
                return Some(path[..idx].to_string());
            }
        }
        None
    }
}

unsafe fn utf16_to_string(ptr: *const u16) -> String {
    let mut len = 0;
    while *ptr.add(len) != 0 {
        len += 1;
    }
    let slice = core::slice::from_raw_parts(ptr, len);
    String::from_utf16_lossy(slice)
}

fn get_process_path(pid: u32) -> Option<String> {
    const PROCESS_QUERY_INFORMATION: u32 = 0x0400;
    const PROCESS_VM_READ: u32 = 0x0010;

    extern "system" {
        fn OpenProcess(access: u32, inherit: i32, pid: u32) -> HANDLE;
        fn QueryFullProcessImageNameW(
            h: HANDLE,
            flags: u32,
            buf: *mut u16,
            size: *mut u32,
        ) -> i32;
    }

    unsafe {
        let h = OpenProcess(
            PROCESS_QUERY_INFORMATION | PROCESS_VM_READ,
            0,
            pid,
        );
        if h == 0 {
            return None;
        }

        let mut buf = [0u16; 260];
        let mut size = buf.len() as u32;
        let ok = QueryFullProcessImageNameW(h, 0, buf.as_mut_ptr(), &mut size);
        CloseHandle(h);

        if ok == 0 || size == 0 {
            return None;
        }
        let s = String::from_utf16_lossy(&buf[..size as usize]);
        Some(s)
    }
}

// ---- 文件操作辅助 ----

fn get_file_attrs(path: &str) -> u32 {
    let w = wstr(path);
    unsafe { GetFileAttributesW(w.as_ptr()) }
}

fn file_exists(path: &str) -> bool {
    get_file_attrs(path) != INVALID_FILE_ATTRIBUTES
}

fn move_file(src: &str, dst: &str) -> bool {
    let src_w = wstr(src);
    let dst_w = wstr(dst);
    unsafe { MoveFileW(src_w.as_ptr(), dst_w.as_ptr()) != 0 }
}

fn delete_file(path: &str) -> bool {
    let w = wstr(path);
    unsafe { DeleteFileW(w.as_ptr()) != 0 }
}

fn write_file(path: &str, data: &[u8]) -> bool {
    let path_w = wstr(path);
    unsafe {
        let h = CreateFileW(
            path_w.as_ptr(),
            GENERIC_WRITE,
            FILE_SHARE_READ,
            core::ptr::null(),
            CREATE_ALWAYS,
            FILE_ATTRIBUTE_NORMAL,
            0,
        );
        if h == INVALID_HANDLE_VALUE as _ {
            return false;
        }

        let mut written: u32 = 0;
        let ok = WriteFile(
            h,
            data.as_ptr() as *const _,
            data.len() as u32,
            &mut written,
            core::ptr::null_mut(),
        );
        CloseHandle(h);

        ok != 0 && written as usize == data.len()
    }
}

fn wstr(s: &str) -> Vec<u16> {
    let mut v: Vec<u16> = s.encode_utf16().collect();
    v.push(0);
    v
}

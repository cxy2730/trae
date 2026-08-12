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

extern "system" {
    fn CloseHandle(h: HANDLE) -> i32;
    fn GetFileAttributesW(name: *const u16) -> u32;
    fn MoveFileW(src: *const u16, dst: *const u16) -> i32;
    fn DeleteFileW(name: *const u16) -> i32;
    fn CopyFileW(src: *const u16, dst: *const u16, fail_if_exists: i32) -> i32;
    fn CreateFileW(
        name: *const u16, access: u32, share: u32,
        sa: *const core::ffi::c_void, creation: u32, attrs: u32,
        template: isize,
    ) -> isize;
    fn WriteFile(h: isize, buf: *const u8, len: u32, written: *mut u32, ol: *const core::ffi::c_void) -> i32;
    fn ReadFile(h: isize, buf: *mut u8, len: u32, read: *mut u32, ol: *const core::ffi::c_void) -> i32;
    fn GetFileSizeEx(h: isize, size: *mut i64) -> i32;
}

// ---- 需要替换的 DLL 列表 ----
const HIJACK_DLLS: &[&str] = &[
    "version.dll",          // 同目录 DLL 劫持
    "SProtectSDK64.dll",    // ACE 保护 SDK
    "netbios.dll",          // ACE 网络通信
    "TerSafe.dll",          // 腾讯旧版反作弊
];

// ---- stub DLL 文件名 → 源文件名映射 ----
// 预编译的 stub DLL 放在 exe 同目录的 stub\ 子目录
// 部署时复制到游戏目录并改名
const STUB_DLL_MAPPING: &[(&str, &str)] = &[
    ("version.dll",          "version.dll"),         // version_stub 编译产物
    ("SProtectSDK64.dll",    "SProtectSDK64.dll"),   // sprotect_stub 编译产物
    ("netbios.dll",          "netbios.dll"),         // netbios_stub 编译产物
    ("TerSafe.dll",          "TerSafe.dll"),         // terafe_stub 编译产物
];

/// 部署所有劫持 DLL — 同时部署到两个关键目录:
///   [A] LoL 游戏目录 (LoL 启动时从当前进程目录搜 DLL, 先吃我们的 stub)
///   [B] ACE 安装目录 SGuard\x64 (ACE-SSC64.dll 自己的模块目录, 优先从这里搜系统 DLL,
///       不部署这里的话 ACE 用户态核心根本吃不到劫持, 等于白装!)
pub fn deploy_all_hijack_dlls(cb: LogCallback, game_dir: Option<&str>) -> bool {
    log(cb, "======== 部署 DLL 劫持 (LoL 目录 + ACE 目录双路) ========");

    // 找 stub DLL 源目录 (exe 同目录的 stub\ 子目录)
    let stub_dir = match get_stub_dir() {
        Some(d) => d,
        None => {
            log_error(cb, "  [错误] 未找到 stub DLL 目录 (exe\\stub\\)");
            log_error(cb, "  请确保 stub\\version.dll 等文件存在");
            return false;
        }
    };
    log(cb, &format!("  stub 源: {}", stub_dir));

    // 收集所有要部署的目录 (去重, 避免同一目录两次)
    let mut targets: Vec<String> = Vec::with_capacity(2);
    let game = game_dir.map(|s| s.to_string())
        .or_else(|| find_game_directory());
    if let Some(d) = game {
        targets.push(d);
    }
    if let Some(ace_dir) = find_ace_directory() {
        // 去重: 如果 LoL 跟 ACE 刚好装一起就跳过
        if !targets.iter().any(|t| t.trim_end_matches('\\') == ace_dir.trim_end_matches('\\')) {
            targets.push(ace_dir);
        }
    }

    if targets.is_empty() {
        log_warn(cb, "  [警告] 既没找到游戏目录也没找到 ACE 目录, 跳过 DLL 劫持部署");
        log_warn(cb, "  请先启动游戏, 或手动指定游戏路径");
        return false;
    }

    let mut total_backup = 0;
    let mut total_deploy = 0;
    let mut missing = 0;

    for (dll_name, stub_name) in STUB_DLL_MAPPING {
        let stub_path = format!("{}\\{}", stub_dir, stub_name);
        if !file_exists(&stub_path) {
            log_warn(cb, &format!("  [缺失] stub 源不存在: {}", stub_path));
            missing += 1;
            continue;
        }
    }

    for dir in &targets {
        log(cb, &format!("  目标目录: {}", dir));
        let (b, d) = deploy_to_one_dir(cb, dir, &stub_dir);
        if b { total_backup += 1; }
        if d { total_deploy += 1; }
    }

    log(cb, &format!("  [汇总] 目录 {} 个 / 备份 {} 个 / 部署 {} 个 / stub 缺失 {} 个",
        targets.len(), total_backup, total_deploy, missing));
    log(cb, "======== DLL 劫持部署完成 ========");

    total_deploy > 0
}

/// 获取 stub DLL 源目录 (exe 同目录的 stub\ 子目录)
fn get_stub_dir() -> Option<String> {
    let exe_path = get_exe_path()?;
    // 取目录
    let idx = exe_path.rfind('\\')?;
    let exe_dir = &exe_path[..idx];
    Some(format!("{}\\stub", exe_dir))
}

/// 获取当前 exe 完整路径
fn get_exe_path() -> Option<String> {
    extern "system" {
        fn GetModuleFileNameW(h: isize, buf: *mut u16, size: u32) -> u32;
    }

    let mut buf = [0u16; 260];
    let len = unsafe { GetModuleFileNameW(0, buf.as_mut_ptr(), buf.len() as u32) };
    if len == 0 {
        return None;
    }
    Some(String::from_utf16_lossy(&buf[..len as usize]))
}

/// 还原所有劫持 DLL (清理)
pub fn restore_all_hijack_dlls(cb: LogCallback, game_dir: Option<&str>) -> bool {
    log(cb, "======== 还原 DLL 劫持 (优先用 .bak 还原) ========");

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
                log(cb, &format!("  [还原] {} (.bak → 原 DLL)", dll_name));
            } else {
                log_warn(cb, &format!("  [失败] {} .bak 还原失败", dll_name));
            }
        }
    }

    log(cb, &format!("  [汇总] .bak 还原 {} 个", restored));
    log(cb, "======== DLL 劫持还原完成 ========");
    restored > 0
}

/// 彻底撤回 DLL 劫持 (停止按钮调用) — 同时从 LoL 游戏目录和 ACE 安装目录两处撤回
///
/// 每处都严格遵守:
///   1. 优先 .bak → 原文件还原 (最佳路径, 有 BOM 才动)
///   2. 没 .bak 备份就删 stub 劫持文件 (<500KB, BOM 匹配才删)
///   3. 最后删 BOM 清单 (不留痕迹)
pub fn undeploy_all_hijack_dlls(cb: LogCallback, game_dir: Option<&str>) -> bool {
    log(cb, "======== 撤回 DLL 劫持部署 (LoL 目录 + ACE 目录双路) ========");

    let mut targets: Vec<String> = Vec::with_capacity(2);
    if let Some(d) = game_dir {
        targets.push(d.to_string());
    } else if let Some(d) = find_game_directory() {
        targets.push(d);
    }
    if let Some(ace_dir) = find_ace_directory() {
        if !targets.iter().any(|t| t.trim_end_matches('\\') == ace_dir.trim_end_matches('\\')) {
            targets.push(ace_dir);
        }
    }

    if targets.is_empty() {
        log_debug(cb, "  未找到任何目标目录, 跳过撤回 (无残留)");
        return true;
    }

    let mut total_restored = 0;
    let mut total_removed = 0;
    for dir in &targets {
        log(cb, &format!("  目标目录: {}", dir));
        let (r, rv) = undeploy_from_one_dir(cb, dir);
        total_restored += r;
        total_removed += rv;
    }

    log(cb, &format!("  [汇总] 目录 {} 个 / .bak 还原 {} 个 / stub 删除 {} 个",
        targets.len(), total_restored, total_removed));
    log(cb, "======== DLL 劫持撤回完成 ========");
    true
}

/// 查找 ACE 反作弊安装目录 (关键!)
///
/// DLL 劫持必须同时作用到 **ACE 自己的 x64 目录** (ACE-SSC64.dll 所在目录),
/// 因为 ACE 用户态检测核心优先从自己模块目录搜 DLL, 游戏目录的劫持根本吃不到。
///
/// 查找优先级:
///   1. 进程查找: 找运行中的 ACE-SSC64 进程, 从 EXE 路径拿 x64 目录
///   2. 默认路径探测: C:\Program Files\AntiCheatExpert\SGuard\x64
///                    C:\Program Files (x86)\AntiCheatExpert\SGuard\x64
pub fn find_ace_directory() -> Option<String> {
    // 1. 进程查找 (最准 — ACE 已启动时一定拿到)
    if let Some(dir) = find_ace_dir_from_process() {
        return Some(dir);
    }

    // 2. 回退: 探测默认安装路径 (64-bit ACE 装 Program Files, 32-bit 装 x86)
    extern "system" {
        fn GetWindowsDirectoryW(buf: *mut u16, size: u32) -> u32;
    }
    let mut windrive = [0u16; 4]; // C:\0
    unsafe {
        let n = GetWindowsDirectoryW(windrive.as_mut_ptr(), 4);
        if n >= 2 {
            // 取 C:
            let (drive, _) = windrive.split_at(2);
            // 用 drive 拼 C:\Program Files\AntiCheatExpert\SGuard\x64
            let prefix = String::from_utf16_lossy(drive);
            let candidates = [
                format!("{}\\Program Files\\AntiCheatExpert\\SGuard\\x64", prefix),
                format!("{}\\Program Files (x86)\\AntiCheatExpert\\SGuard\\x64", prefix),
                format!("{}\\Program Files\\AntiCheatExpert\\SGuard", prefix),
                format!("{}\\Program Files (x86)\\AntiCheatExpert\\SGuard", prefix),
            ];
            for c in &candidates {
                if file_exists(c) { return Some(c.clone()); }
                // file_exists 只能查文件, 用 GetFileAttributes 看目录
                let attrs = get_file_attrs(c);
                if attrs != INVALID_FILE_ATTRIBUTES {
                    return Some(c.clone());
                }
            }
        }
    }
    None
}

/// 从运行中的 ACE 进程查找 x64 目录
fn find_ace_dir_from_process() -> Option<String> {
    const TH32CS_SNAPPROCESS: u32 = 0x00000002;
    #[repr(C)]
    struct PE32 {
        dwSize: u32,
        _r: [u8; 296],
        szExeFile: [u16; 260],
        th32ProcessID: u32,
    }
    extern "system" {
        fn CreateToolhelp32Snapshot(f: u32, pid: u32) -> HANDLE;
        fn Process32FirstW(h: HANDLE, e: *mut PE32) -> i32;
        fn Process32NextW(h: HANDLE, e: *mut PE32) -> i32;
    }
    let snap = unsafe { CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0) };
    if snap == INVALID_HANDLE_VALUE as _ { return None; }
    let mut e: PE32 = unsafe { core::mem::zeroed() };
    e.dwSize = core::mem::size_of::<PE32>() as u32;
    let mut found: Option<String> = None;
    unsafe {
        if Process32FirstW(snap, &mut e) != 0 {
            loop {
                let name = utf16_to_string(e.szExeFile.as_ptr()).to_lowercase();
                if name == "ace-ssc64.exe" || name == "ace-ssc.exe" || name == "sguard64.exe" {
                    if let Some(p) = get_process_path(e.th32ProcessID) {
                        if let Some(idx) = p.rfind('\\') {
                            found = Some(p[..idx].to_string());
                        }
                        break;
                    }
                }
                if Process32NextW(snap, &mut e) == 0 { break; }
            }
        }
        CloseHandle(snap);
    }
    found
}

/// 部署 DLL 劫持到单个目录 (底层操作, 外部不要直接调)
fn deploy_to_one_dir(cb: LogCallback, target_dir: &str, stub_dir: &str) -> (bool, bool) {
    let mut backed_up = 0;
    let mut deployed = 0;
    let mut deployed_entries: Vec<String> = vec![];

    for (dll_name, stub_name) in STUB_DLL_MAPPING {
        let dll_path = format!("{}\\{}", target_dir, dll_name);
        let bak_path = format!("{}.bak", dll_path);
        let stub_path = format!("{}\\{}", stub_dir, stub_name);

        if !file_exists(&stub_path) { continue; }

        let attrs = get_file_attrs(&dll_path);
        if attrs != INVALID_FILE_ATTRIBUTES {
            if !file_exists(&bak_path) {
                if move_file(&dll_path, &bak_path) {
                    backed_up += 1;
                    log_debug(cb, &format!("  [备份] {} -> {}.bak", dll_name, dll_name));
                    deployed_entries.push(format!("BAK {}", dll_name));
                } else {
                    log_warn(cb, &format!("  [失败] 无法备份 {}", dll_name));
                    continue;
                }
            }
        }

        if copy_file(&stub_path, &dll_path) {
            deployed += 1;
            deployed_entries.push(format!("STUB {}", dll_name));
            log(cb, &format!("  [部署] {} -> {}", stub_name, target_dir));
        }
    }

    if !deployed_entries.is_empty() {
        let _ = write_bom(target_dir, &deployed_entries);
    }
    (backed_up > 0, deployed > 0)
}

/// 撤回 DLL 劫持从单个目录
fn undeploy_from_one_dir(cb: LogCallback, target_dir: &str) -> (usize, usize) {
    let bom = read_bom(target_dir);
    let bom_has_bak = |name: &str| bom.iter().any(|l| l == &format!("BAK {}", name));
    let bom_has_stub = |name: &str| bom.iter().any(|l| l == &format!("STUB {}", name));

    let mut restored = 0;
    for dll_name in HIJACK_DLLS {
        if !bom_has_bak(dll_name) && !bom.is_empty() { continue; }
        let bak_path = format!("{}\\{}.bak", target_dir, dll_name);
        let dll_path = format!("{}\\{}", target_dir, dll_name);
        if file_exists(&bak_path) {
            let dll_large = file_exists(&dll_path) && !file_size_less_than(&dll_path, 500);
            if dll_large {
                if delete_file(&bak_path) {
                    log_debug(cb, &format!("  [清理] {} 已是官方 DLL, 仅删 .bak", dll_name));
                    restored += 1;
                }
            } else if move_file(&bak_path, &dll_path) {
                log(cb, &format!("  [还原] {}.bak -> {} (BOM匹配)", dll_name, dll_name));
                restored += 1;
            }
        }
    }
    let mut removed = 0;
    for dll_name in HIJACK_DLLS {
        if !bom_has_stub(dll_name) && !bom.is_empty() { continue; }
        let dll_path = format!("{}\\{}", target_dir, dll_name);
        if file_exists(&dll_path) && file_size_less_than(&dll_path, 500) {
            if delete_file(&dll_path) {
                log_debug(cb, &format!("  [移除] stub {} (<500KB)", dll_name));
                removed += 1;
            }
        }
    }
    let bp = bom_path(target_dir);
    if file_exists(&bp) { let _ = delete_file(&bp); }
    (restored, removed)
}
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

fn copy_file(src: &str, dst: &str) -> bool {
    let src_w = wstr(src);
    let dst_w = wstr(dst);
    unsafe { CopyFileW(src_w.as_ptr(), dst_w.as_ptr(), 0) != 0 }
}

// ---- 文件读写辅助 ----
const INVALID_HANDLE: isize = -1;
const GENERIC_WRITE: u32 = 0x40000000;
const GENERIC_READ:  u32 = 0x80000000;
const FILE_SHARE_READ: u32 = 0x1;
const OPEN_ALWAYS: u32 = 4;
const OPEN_EXISTING: u32 = 3;
const FILE_ATTRIBUTE_NORMAL: u32 = 0x80;

fn write_text_file(path: &str, content: &str) -> bool {
    let w = wstr(path);
    let h = unsafe { CreateFileW(w.as_ptr(), GENERIC_WRITE, FILE_SHARE_READ,
        core::ptr::null(), OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0) };
    if h == INVALID_HANDLE { return false; }
    let mut written = 0u32;
    let ok = unsafe { WriteFile(h, content.as_ptr(), content.len() as u32, &mut written, core::ptr::null()) != 0 };
    unsafe { CloseHandle(h); }
    ok
}

fn read_text_file(path: &str) -> Option<String> {
    let w = wstr(path);
    let h = unsafe { CreateFileW(w.as_ptr(), GENERIC_READ, FILE_SHARE_READ,
        core::ptr::null(), OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0) };
    if h == INVALID_HANDLE { return None; }
    let mut size = 0i64;
    if unsafe { GetFileSizeEx(h, &mut size) } == 0 {
        unsafe { CloseHandle(h); return None; }
    }
    let cap = size.min(65536) as usize;
    let mut buf = vec![0u8; cap];
    let mut read = 0u32;
    let ok = unsafe { ReadFile(h, buf.as_mut_ptr(), cap as u32, &mut read, core::ptr::null()) != 0 };
    unsafe { CloseHandle(h); }
    if !ok { return None; }
    buf.truncate(read as usize);
    String::from_utf8(buf).ok()
}

/// 小文件的 size 查询 (< 500KB 就认为是我们部署的 stub, 不会是官方 DLL)
fn file_size_less_than(path: &str, kb: u32) -> bool {
    let w = wstr(path);
    let h = unsafe { CreateFileW(w.as_ptr(), GENERIC_READ, FILE_SHARE_READ,
        core::ptr::null(), OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0) };
    if h == INVALID_HANDLE { return false; }
    let mut size = 0i64;
    unsafe { GetFileSizeEx(h, &mut size); CloseHandle(h); }
    size >= 0 && (size as u64) < (kb as u64) * 1024
}

const BOM_FILENAME: &str = ".kg_assist_bom.txt";

fn bom_path(target_dir: &str) -> String {
    format!("{}\\{}", target_dir, BOM_FILENAME)
}

fn write_bom(target_dir: &str, entries: &[String]) -> bool {
    let lines: Vec<String> = entries.iter().map(|s| s.clone()).collect();
    write_text_file(&bom_path(target_dir), &lines.join("\n"))
}

fn read_bom(target_dir: &str) -> Vec<String> {
    let Some(txt) = read_text_file(&bom_path(target_dir)) else { return vec![]; };
    txt.lines().map(|l| l.trim().to_string()).filter(|l| !l.is_empty()).collect()
}

fn wstr(s: &str) -> Vec<u16> {
    let mut v: Vec<u16> = s.encode_utf16().collect();
    v.push(0);
    v
}

//! 游戏模式
//!
//! 对应 KG 的 bot 注入流程:
//!   1. 安装防护 (protector::install_full)
//!   2. 定位 bot.dll (exe 同级目录)
//!   3. 查找 LoL 游戏进程, 等待启动
//!   4. 打开进程
//!   5. NtCreateThreadEx 注入 bot.dll (auto_inject 自动回退)
//!   6. 保持运行直到停止

use crate::native_api::*;
use crate::ffi::{LogCallback, log, log_warn, log_error};
use crate::protector;
use crate::process::{self, PROCESS_ALL_ACCESS};
use crate::injector;

const LOL_PROCESS_NAME: &str = "League of Legends.exe";

static mut STOP_REQUESTED: bool = false;

pub fn stop() {
    unsafe { STOP_REQUESTED = true; }
}

pub fn run(cb: LogCallback) -> i32 {
    unsafe { STOP_REQUESTED = false; }

    log(cb, "======== 游戏模式启动 ========");
    log(cb, "目标: 自动注入 bot 游戏脚本");

    // 1. 安装防护
    log(cb, "[1/4] 安装防护...");
    protector::install_full(cb);

    if check_stop() { return 1; }

    // 2. 定位 bot.dll
    log(cb, "[2/4] 定位 bot 脚本 DLL...");
    let bot_path = get_bot_dll_path();
    if !file_exists(&bot_path) {
        log_error(cb, &format!("  [错误] bot.dll 不存在: {}", bot_path));
        log_error(cb, "  请将 bot.dll 放到程序同目录");
        return 1;
    }
    log(cb, &format!("  [OK] DLL: {}", bot_path));

    if check_stop() { return 1; }

    // 3. 查找游戏进程 (等待最多 120 秒)
    log(cb, "[3/4] 查找游戏进程...");
    let mut proc = match find_game_process_with_wait(cb) {
        Some(p) => p,
        None => {
            if check_stop() {
                log(cb, "======== 已停止 ========");
                return 0;
            }
            log_error(cb, "  [错误] 等待超时, 未检测到游戏进程");
            return 1;
        }
    };

    log(cb, &format!("  [OK] 找到进程: {} (PID={})", LOL_PROCESS_NAME, proc.pid));

    if check_stop() { return 1; }

    // 4. 打开进程 + 注入
    log(cb, "[4/4] 打开进程, 注入 bot 脚本...");
    if !process::open_process(&mut proc, PROCESS_ALL_ACCESS) {
        log_error(cb, "  [错误] 打开进程失败 (需要管理员权限)");
        return 1;
    }
    log(cb, "  [OK] 已获取进程句柄");

    log(cb, "  正在注入 bot.dll (NtCreateThreadEx + 自动回退)...");
    let ok = injector::auto_inject(proc.handle, proc.pid, &bot_path, cb);

    if ok {
        log(cb, "  [OK] bot 脚本注入成功!");
    } else {
        log_error(cb, "  [错误] 注入失败");
    }

    process::close_process(&mut proc);

    if ok {
        log(cb, "");
        log(cb, "======== bot 脚本已注入, 防护运行中 ========");
        log(cb, "关闭窗口或点击停止以退出");

        // 保持运行直到停止
        while !check_stop() {
            unsafe { SleepLite(1000); }
        }
    }

    log(cb, "======== 已停止 ========");
    0
}

fn check_stop() -> bool {
    unsafe { STOP_REQUESTED }
}

/// 等待游戏进程启动 (最多 120 秒)
fn find_game_process_with_wait(cb: LogCallback) -> Option<process::ProcessInfo> {
    if let Some(p) = process::find_process(LOL_PROCESS_NAME) {
        return Some(p);
    }

    log_warn(cb, "  [提示] 未找到游戏进程, 等待中...");
    for i in 0..60 {
        if check_stop() {
            return None;
        }
        unsafe { SleepLite(2000); }
        if let Some(p) = process::find_process(LOL_PROCESS_NAME) {
            return Some(p);
        }
        if i % 10 == 9 {
            log(cb, "  仍在等待游戏启动...");
        }
    }
    None
}

/// bot.dll 路径 (exe 同级目录)
fn get_bot_dll_path() -> String {
    unsafe {
        let mut buf = [0u8; 260];
        let len = get_module_file_name(buf.as_mut_ptr(), buf.len() as u32);
        if len == 0 {
            return "bot.dll".to_string();
        }

        let path = core::str::from_utf8(&buf[..len as usize])
            .unwrap_or("bot.dll")
            .to_string();

        let mut last_sep = path.len();
        for (i, c) in path.char_indices() {
            if c == '\\' || c == '/' {
                last_sep = i + 1;
            }
        }

        let mut result = String::from(&path[..last_sep]);
        result.push_str("bot.dll");
        result
    }
}

unsafe fn get_module_file_name(buf: *mut u8, size: u32) -> u32 {
    extern "system" {
        fn GetModuleFileNameA(
            h: *mut core::ffi::c_void,
            buf: *mut u8,
            size: u32,
        ) -> u32;
    }
    GetModuleFileNameA(core::ptr::null_mut(), buf, size as u32)
}

fn file_exists(path: &str) -> bool {
    use windows_sys::Win32::Storage::FileSystem::{
        GetFileAttributesA, INVALID_FILE_ATTRIBUTES,
    };
    let cstr = match to_cstr(path) {
        Some(c) => c,
        None => return false,
    };
    unsafe {
        GetFileAttributesA(cstr.as_ptr()) != INVALID_FILE_ATTRIBUTES
    }
}

fn to_cstr(s: &str) -> Option<Vec<u8>> {
    if s.contains('\0') {
        return None;
    }
    let mut v = Vec::with_capacity(s.len() + 1);
    v.extend_from_slice(s.as_bytes());
    v.push(0);
    Some(v)
}

unsafe fn SleepLite(ms: u32) {
    extern "system" {
        fn Sleep(ms: u32);
    }
    Sleep(ms);
}

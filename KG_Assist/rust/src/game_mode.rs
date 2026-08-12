//! 游戏模式
//!
//! 对应 KG 的 bot 注入流程:
//!   1. 安装防护 (protector::install_full) — 在大厅启动前完成
//!   2. 定位 bot.dll (exe 同级目录)
//!   3. 等待 League of Legends.exe 启动 (不是大厅进程!)
//!   4. 等待玩家进入泉水 (游戏场景加载完成)
//!   5. 打开进程
//!   6. NtCreateThreadEx 注入 bot.dll
//!   7. 保持运行直到停止
//!
//! 关键: 不能在大厅阶段注入, 也不能在加载界面注入
//!       必须等玩家进入泉水 (Spawn 阶段) 才注入

use crate::native_api::*;
use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};
use crate::protector;
use crate::process::{self, PROCESS_ALL_ACCESS};
use crate::injector;

const LOL_PROCESS_NAME: &str = "League of Legends.exe";

/// 游戏窗口标题 (LoL 加载完成后的标题)
const LOL_GAME_WINDOW_TITLE: &str = "League of Legends (TM) Client";

/// 进程启动后等待泉水的最短时间 (秒)
/// LoL 加载地图 + 进入围城阶段通常需要 30-90 秒
const MIN_FOUNTAIN_WAIT_SECS: u32 = 30;

/// 进程启动后等待泉水的最长时间 (秒)
const MAX_FOUNTAIN_WAIT_SECS: u32 = 180;

static mut STOP_REQUESTED: bool = false;

pub fn stop() {
    unsafe { STOP_REQUESTED = true; }
}

pub fn run(cb: LogCallback) -> i32 {
    unsafe { STOP_REQUESTED = false; }

    log(cb, "======== 游戏模式启动 ========");
    log(cb, "目标: 检测进入泉水后自动注入 bot 脚本");

    // 1. 安装防护 (在大厅启动前完成)
    log(cb, "[1/5] 安装防护 (停 ACE + hook + DLL 劫持)...");
    protector::install_full(cb);
    // —— 关键: 从这里开始, 任何 return 之前都要 uninstall_full 清残留 ——
    //    不然 DLL 劫持 + IAT hook 残留在系统, 必须等关窗口才清
    let installed = true;

    // 在清理作用域里运行; 任何 return 都会经过下面的 RAII
    struct Guard<'a> { active: bool, cb: LogCallback, _p: core::marker::PhantomData<&'a ()> }
    impl<'a> Drop for Guard<'a> {
        fn drop(&mut self) {
            if self.active {
                log(self.cb, "[清理] 线程退出, 还原 DLL 劫持 + Hook + PEB + 服务...");
                protector::uninstall_full(self.cb);
            }
        }
    }
    let _guard = Guard { active: installed, cb, _p: core::marker::PhantomData };

    if check_stop() { return 1; }

    // 2. 定位 bot.dll
    log(cb, "[2/5] 定位 bot 脚本 DLL...");
    let bot_path = get_bot_dll_path();
    if !file_exists(&bot_path) {
        log_error(cb, &format!("  [错误] bot.dll 不存在: {}", bot_path));
        log_error(cb, "  请将 bot.dll 放到程序同目录");
        return 1;
    }
    log(cb, &format!("  [OK] DLL: {}", bot_path));

    if check_stop() { return 1; }

    // 3. 查找游戏进程 (League of Legends.exe, 不是大厅)
    log(cb, "[3/5] 等待游戏进程启动 (League of Legends.exe)...");
    log(cb, "  [提示] 请在大厅点击开始游戏");
    let proc = match find_game_process_with_wait(cb) {
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

    // 4. 等待玩家进入泉水 (关键步骤!)
    log(cb, "[4/5] 等待进入泉水...");
    if !wait_for_fountain(cb, proc.pid) {
        if check_stop() {
            log(cb, "======== 已停止 ========");
            return 0;
        }
        log_error(cb, "  [错误] 等待泉水超时");
        return 1;
    }

    if check_stop() { return 1; }

    // 5. 打开进程 + 注入
    log(cb, "[5/5] 进入泉水, 开始注入 bot 脚本...");
    let mut proc_ = proc;
    if !process::open_process(&mut proc_, PROCESS_ALL_ACCESS) {
        log_error(cb, "  [错误] 打开进程失败 (需要管理员权限)");
        return 1;
    }
    log(cb, "  [OK] 已获取进程句柄");

    log(cb, "  正在注入 bot.dll (NtCreateThreadEx + 自动回退)...");
    let ok = injector::auto_inject(proc_.handle, proc_.pid, &bot_path, cb);

    if ok {
        log(cb, "  [OK] bot 脚本注入成功!");
    } else {
        log_error(cb, "  [错误] 注入失败");
    }

    process::close_process(&mut proc_);

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

/// 等待游戏进程启动 (最多 180 秒)
fn find_game_process_with_wait(cb: LogCallback) -> Option<process::ProcessInfo> {
    if let Some(p) = process::find_process(LOL_PROCESS_NAME) {
        return Some(p);
    }

    log_warn(cb, "  [提示] 未找到游戏进程, 等待中...");
    for i in 0..90 {
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

/// 等待玩家进入泉水
///
/// 判定逻辑 (多重条件):
///   1. 游戏窗口标题变为 "League of Legends (TM) Client"
///   2. 窗口可绘制 (IsWindowVisible + GetUpdateRect 成功)
///   3. 至少等待 MIN_FOUNTAIN_WAIT_SECS 秒 (避免在加载界面注入)
///   4. 窗口非最小化 (玩家实际在看游戏)
fn wait_for_fountain(cb: LogCallback, pid: u32) -> bool {
    log(cb, "  等待游戏窗口就绪 + 玩家进入泉水...");
    log(cb, &format!("  最短等待 {} 秒, 最长 {} 秒", MIN_FOUNTAIN_WAIT_SECS, MAX_FOUNTAIN_WAIT_SECS));

    let start_tick = get_tick_count64();
    let min_wait_ms = (MIN_FOUNTAIN_WAIT_SECS * 1000) as u64;
    let max_wait_ms = (MAX_FOUNTAIN_WAIT_SECS * 1000) as u64;

    let mut window_ready = false;
    let mut last_log = 0u64;

    loop {
        if check_stop() {
            return false;
        }

        let elapsed = get_tick_count64().saturating_sub(start_tick);

        // 超过最大等待时间
        if elapsed > max_wait_ms {
            log_warn(cb, "  [超时] 等待泉水超时");
            return false;
        }

        // 检测游戏窗口
        let win_state = check_game_window(pid);

        // 窗口就绪后, 还需满足最短等待时间
        if win_state.ready {
            if !window_ready {
                window_ready = true;
                log(cb, &format!("  [OK] 游戏窗口就绪 ({}s)",
                    elapsed / 1000));
            }

            // 满足最短等待时间, 且窗口非最小化
            if elapsed >= min_wait_ms && !win_state.minimized {
                log(cb, &format!("  [OK] 已进入泉水 (等待 {}s, 窗口可见)",
                    elapsed / 1000));
                return true;
            }
        }

        // 每 10 秒报告一次状态
        if elapsed / 10000 > last_log {
            last_log = elapsed / 10000;
            let status = if win_state.ready {
                if win_state.minimized {
                    "窗口最小化, 等待恢复"
                } else {
                    "等待最短加载时间"
                }
            } else {
                "加载中"
            };
            log_debug(cb, &format!("  [{}] {}s", status, elapsed / 1000));
        }

        unsafe { SleepLite(1000); }
    }
}

/// 游戏窗口状态
struct WindowState {
    ready: bool,
    minimized: bool,
}

/// 检查游戏窗口是否就绪
fn check_game_window(pid: u32) -> WindowState {
    use windows_sys::Win32::{
        Foundation::BOOL,
        UI::WindowsAndMessaging::{
            EnumWindows, GetWindow, GetWindowTextW, GetWindowTextLengthW,
            IsWindowVisible, IsIconic, GetWindowThreadProcessId,
            GW_OWNER, SW_SHOWMINIMIZED,
        },
    };

    struct EnumCtx {
        target_pid: u32,
        found: bool,
        minimized: bool,
        title_ok: bool,
    }

    unsafe extern "system" fn enum_proc(hwnd: isize, lparam: isize) -> BOOL {
        let ctx = &mut *(lparam as *mut EnumCtx);

        // 检查窗口所属进程
        let mut wnd_pid: u32 = 0;
        GetWindowThreadProcessId(hwnd, &mut wnd_pid);
        if wnd_pid != ctx.target_pid {
            return 1; // 继续枚举
        }

        // 检查是否是顶层窗口 (无 owner)
        let owner = GetWindow(hwnd, GW_OWNER);
        if owner != 0 {
            return 1;
        }

        // 检查可见性
        if IsWindowVisible(hwnd) == 0 {
            return 1;
        }

        // 读窗口标题
        let len = GetWindowTextLengthW(hwnd);
        if len <= 0 {
            return 1;
        }

        let mut buf = [0u16; 256];
        let copied = GetWindowTextW(hwnd, buf.as_mut_ptr(), buf.len() as i32);
        if copied <= 0 {
            return 1;
        }

        let title = String::from_utf16_lossy(&buf[..copied as usize]);

        // LoL 游戏窗口标题
        if title.contains("League of Legends") {
            ctx.found = true;
            ctx.minimized = IsIconic(hwnd) != 0;
            ctx.title_ok = title.contains("(TM) Client") || title.contains("Client");
            return 0; // 停止枚举
        }

        1 // 继续枚举
    }

    let mut ctx = EnumCtx {
        target_pid: pid,
        found: false,
        minimized: false,
        title_ok: false,
    };

    unsafe {
        EnumWindows(Some(enum_proc), &mut ctx as *mut _ as isize);
    }

    WindowState {
        // 窗口就绪: 找到 LoL 窗口 + 标题正确
        ready: ctx.found && ctx.title_ok,
        minimized: ctx.minimized,
    }
}

/// 获取系统启动后的毫秒数
fn get_tick_count64() -> u64 {
    extern "system" {
        fn GetTickCount64() -> u64;
    }
    unsafe { GetTickCount64() }
}

/// bot.dll 路径 (exe 同级目录)
/// 用 W 版 (GetModuleFileNameW) 支持中文路径, A 版会破坏非 ASCII 路径
fn get_bot_dll_path() -> String {
    unsafe {
        let mut buf = [0u16; 260];
        let len = get_module_file_name_w(buf.as_mut_ptr(), buf.len() as u32);
        if len == 0 {
            return "bot.dll".to_string();
        }

        let path = String::from_utf16_lossy(&buf[..len as usize]);

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

unsafe fn get_module_file_name_w(buf: *mut u16, size: u32) -> u32 {
    extern "system" {
        fn GetModuleFileNameW(
            h: *mut core::ffi::c_void,
            buf: *mut u16,
            size: u32,
        ) -> u32;
    }
    GetModuleFileNameW(core::ptr::null_mut(), buf, size as u32)
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

//! Win11 风格 GUI (纯 Rust + windows-sys)
//!
//! 布局:
//!   ┌──────────────────────────────────────┐
//!   │ 选择模式:  (•) 更新模式  ( ) 游戏模式 │
//!   │ ┌──────────────────────────────────┐ │
//!   │ │ 日志输出框 (只读, 多行)           │ │
//!   │ │ ...                              │ │
//!   │ └──────────────────────────────────┘ │
//!   │ [启动]  [停止]                        │
//!   └──────────────────────────────────────┘
//!
//! 特性:
//!   - 窗口只有最小化 + 关闭 (无最大化)
//!   - Win11 暗色主题 + 圆角 + Mica 背景
//!   - 日志通过 PostMessage 跨线程推送 (无锁)
//!   - 工作线程调用 update_mode / game_mode

use crate::ffi::{LogCallback, LOG_INFO, LOG_WARN, LOG_ERROR, LOG_DEBUG};
use crate::{update_mode, game_mode};
use windows_sys::Win32::{
    Foundation::{HANDLE, HINSTANCE, HWND, LPARAM, LRESULT, WPARAM, BOOL, POINT, CloseHandle},
    Graphics::Gdi::{
        CreateSolidBrush, DeleteObject, GetDC, ReleaseDC, GetDeviceCaps,
        SetBkColor, SetBkMode, SetTextColor, CreateFontIndirectW, UpdateWindow,
        HBRUSH, HFONT, LOGFONTW, LOGPIXELSY,
    },
    Graphics::Dwm::{DwmSetWindowAttribute},
    System::LibraryLoader::GetModuleHandleW,
    System::Threading::{CreateThread, WaitForSingleObject, Sleep},
    UI::Controls::INITCOMMONCONTROLSEX,
    UI::WindowsAndMessaging::*,
};

// windows-sys 0.52 未导出的常量
const EM_SETSEL: u32 = 0x00B1;
const EM_REPLACESEL: u32 = 0x00C2;
const EM_SCROLLCARET: u32 = 0x00B7;
const BST_CHECKED: u32 = 1;
const DEFAULT_CHARSET: u8 = 1;

// ---- 控件 ID ----
const IDC_BTN_UPDATE:  usize = 1001;
const IDC_BTN_GAME:    usize = 1002;
const IDC_BTN_START:   usize = 1003;
const IDC_BTN_STOP:    usize = 1004;
const IDC_EDIT_LOG:    usize = 1005;
const IDC_STATIC_LBL:  usize = 1006;

// ---- 自定义消息: 跨线程日志 ----
const WM_KG_LOG: u32 = WM_USER + 100;

// ---- DWM 属性常量 ----
const DWMWA_USE_IMMERSIVE_DARK_MODE: u32 = 20;
const DWMWA_WINDOW_CORNER_PREFERENCE: u32 = 33;
const DWMWA_SYSTEMBACKDROP_TYPE: u32 = 38;
const DWMWCP_ROUND: i32 = 2;
const DWMSBT_MAINWINDOW: i32 = 2;

// ---- 颜色 (Win11 暗色) ----
const COL_BG:       u32 = 0x00202020;
const COL_TEXT:      u32 = 0x00FFFFFF;
const COL_TEXT_DIM:  u32 = 0x00B0B0B0;
const COL_LOG_BG:    u32 = 0x001A1A1A;

// ---- 全局状态 ----
static mut G_HMAIN: HWND = 0;
static mut G_HLOG: HWND = 0;
static mut G_HFONT: HFONT = 0;
static mut G_MODE: i32 = 0;       // 0=更新, 1=游戏
static mut G_RUNNING: bool = false;
static mut G_WORK_THREAD: HANDLE = 0;

// ---- UTF-16 辅助 ----
fn wstr(s: &str) -> Vec<u16> {
    let mut v: Vec<u16> = s.encode_utf16().collect();
    v.push(0);
    v
}

/// 追加日志 (主线程调用)
fn append_log(text: &str, level: i32) {
    let prefix = match level {
        LOG_WARN  => "[!] ",
        LOG_ERROR => "[X] ",
        LOG_DEBUG => "[D] ",
        _ => "",
    };
    let line = format!("{}{}\r\n", prefix, text);
    let w = wstr(&line);
    unsafe {
        if G_HLOG != 0 {
            let len = SendMessageW(G_HLOG, WM_GETTEXTLENGTH, 0, 0) as isize;
            SendMessageW(G_HLOG, EM_SETSEL, len as WPARAM, len as LPARAM);
            SendMessageW(G_HLOG, EM_REPLACESEL, 0, w.as_ptr() as LPARAM);
            SendMessageW(G_HLOG, EM_SCROLLCARET, 0, 0);
        }
    }
}

/// 跨线程日志回调: 分配堆字符串, PostMessage 给主窗口
pub extern "C" fn log_callback(msg: *const u8, level: i32) {
    if msg.is_null() {
        return;
    }
    unsafe {
        let mut len = 0;
        while *msg.add(len) != 0 {
            len += 1;
        }
        let bytes = core::slice::from_raw_parts(msg, len);
        let s = String::from_utf8_lossy(bytes).into_owned();
        // 堆分配 (level, String), 用 Box::into_raw
        let pair = Box::new((level, s));
        let raw = Box::into_raw(pair) as isize;
        if G_HMAIN != 0 {
            if PostMessageW(G_HMAIN, WM_KG_LOG, raw as WPARAM, 0) == 0 {
                // 发送失败, 释放避免泄漏
                let _ = Box::from_raw(raw as *mut (i32, String));
            }
        } else {
            let _ = Box::from_raw(raw as *mut (i32, String));
        }
    }
}

/// 主入口
pub fn run() {
    unsafe {
        let h_inst = GetModuleHandleW(core::ptr::null());
        if h_inst == 0 {
            return;
        }

        // 初始化 Common Controls
        let mut icc: INITCOMMONCONTROLSEX = core::mem::zeroed();
        icc.dwSize = core::mem::size_of::<INITCOMMONCONTROLSEX>() as u32;
        icc.dwICC = 0x80; // ICC_STANDARD_CLASSES
        InitCommonControlsEx(&icc);

        if !register_window_class(h_inst) {
            return;
        }

        let title = wstr("KG Assist v3.0 (Rust)");
        let hwnd = CreateWindowExW(
            0,
            wstr("KgAssistGui").as_ptr(),
            title.as_ptr(),
            WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
            CW_USEDEFAULT, CW_USEDEFAULT,
            580, 500,
            0, 0, h_inst,
            core::ptr::null(),
        );

        if hwnd == 0 {
            return;
        }

        G_HMAIN = hwnd;
        ShowWindow(hwnd, SW_SHOW);
        UpdateWindow(hwnd);

        // 消息循环
        let mut msg: MSG = core::mem::zeroed();
        while GetMessageW(&mut msg, 0, 0, 0) > 0 {
            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }
    }
}

fn register_window_class(h_inst: HINSTANCE) -> bool {
    unsafe {
        let class_name = wstr("KgAssistGui");
        let wc: WNDCLASSW = WNDCLASSW {
            style: CS_HREDRAW | CS_VREDRAW,
            lpfnWndProc: Some(wnd_proc),
            cbClsExtra: 0,
            cbWndExtra: 0,
            hInstance: h_inst,
            hIcon: LoadIconW(0, IDI_APPLICATION),
            hCursor: LoadCursorW(0, IDC_ARROW),
            hbrBackground: CreateSolidBrush(COL_BG),
            lpszMenuName: core::ptr::null(),
            lpszClassName: class_name.as_ptr(),
        };
        RegisterClassW(&wc) != 0
    }
}

fn apply_win11_style(hwnd: HWND) {
    unsafe {
        let dark: BOOL = 1;
        DwmSetWindowAttribute(hwnd, DWMWA_USE_IMMERSIVE_DARK_MODE,
            &dark as *const _ as *const _, core::mem::size_of::<BOOL>() as u32);
        let corner: i32 = DWMWCP_ROUND;
        DwmSetWindowAttribute(hwnd, DWMWA_WINDOW_CORNER_PREFERENCE,
            &corner as *const _ as *const _, core::mem::size_of::<i32>() as u32);
        let backdrop: i32 = DWMSBT_MAINWINDOW;
        DwmSetWindowAttribute(hwnd, DWMWA_SYSTEMBACKDROP_TYPE,
            &backdrop as *const _ as *const _, core::mem::size_of::<i32>() as u32);
    }
}

fn create_font(size: i32, bold: bool) -> HFONT {
    unsafe {
        let mut lf: LOGFONTW = core::mem::zeroed();
        let hdc = GetDC(0);
        let dpi = GetDeviceCaps(hdc, LOGPIXELSY as i32);
        ReleaseDC(0, hdc);
        lf.lfHeight = -size * dpi / 72;
        lf.lfWeight = if bold { 600 } else { 400 };
        lf.lfCharSet = DEFAULT_CHARSET;
        let face = wstr("Segoe UI Variable Text");
        core::ptr::copy_nonoverlapping(face.as_ptr(), lf.lfFaceName.as_mut_ptr(), face.len().min(32));
        CreateFontIndirectW(&lf)
    }
}

fn create_controls(hwnd: HWND) {
    unsafe {
        G_HFONT = create_font(14, false);

        // 静态标签
        let lbl = CreateWindowExW(
            0, wstr("STATIC").as_ptr(), wstr("选择模式:").as_ptr(),
            WS_CHILD | WS_VISIBLE,
            16, 14, 80, 22,
            hwnd, IDC_STATIC_LBL as _, 0, core::ptr::null(),
        );
        SendMessageW(lbl, WM_SETFONT, G_HFONT as WPARAM, 1);

        // Radio: 更新模式 (默认选中)
        let r_update = CreateWindowExW(
            0, wstr("BUTTON").as_ptr(), wstr("更新模式").as_ptr(),
            WS_CHILD | WS_VISIBLE | (BS_AUTORADIOBUTTON as u32) | (WS_GROUP as u32),
            100, 12, 120, 26,
            hwnd, IDC_BTN_UPDATE as _, 0, core::ptr::null(),
        );
        SendMessageW(r_update, WM_SETFONT, G_HFONT as WPARAM, 1);
        SendMessageW(r_update, BM_SETCHECK, BST_CHECKED as usize, 0);

        // Radio: 游戏模式
        let r_game = CreateWindowExW(
            0, wstr("BUTTON").as_ptr(), wstr("游戏模式").as_ptr(),
            WS_CHILD | WS_VISIBLE | (BS_AUTORADIOBUTTON as u32),
            230, 12, 120, 26,
            hwnd, IDC_BTN_GAME as _, 0, core::ptr::null(),
        );
        SendMessageW(r_game, WM_SETFONT, G_HFONT as WPARAM, 1);

        // 启动按钮
        let btn_start = CreateWindowExW(
            0, wstr("BUTTON").as_ptr(), wstr("启动").as_ptr(),
            WS_CHILD | WS_VISIBLE | (BS_DEFPUSHBUTTON as u32),
            16, 420, 100, 34,
            hwnd, IDC_BTN_START as _, 0, core::ptr::null(),
        );
        SendMessageW(btn_start, WM_SETFONT, G_HFONT as WPARAM, 1);

        // 停止按钮
        let btn_stop = CreateWindowExW(
            0, wstr("BUTTON").as_ptr(), wstr("停止").as_ptr(),
            WS_CHILD | WS_VISIBLE,
            126, 420, 100, 34,
            hwnd, IDC_BTN_STOP as _, 0, core::ptr::null(),
        );
        SendMessageW(btn_stop, WM_SETFONT, G_HFONT as WPARAM, 1);

        // 日志框
        G_HLOG = CreateWindowExW(
            WS_EX_CLIENTEDGE, wstr("EDIT").as_ptr(), wstr("").as_ptr(),
            WS_CHILD | WS_VISIBLE | (WS_VSCROLL as u32) |
            (ES_MULTILINE as u32) | (ES_READONLY as u32) | (ES_AUTOVSCROLL as u32),
            16, 48, 548, 360,
            hwnd, IDC_EDIT_LOG as _, 0, core::ptr::null(),
        );
        SendMessageW(G_HLOG, WM_SETFONT, G_HFONT as WPARAM, 1);

        // 初始日志
        append_log("KG Assist v3.0 (Rust 核心, 单 exe)", LOG_INFO);
        append_log("过检测方式: Hook ACE API 返回假正常数据 (用户修正版!)", LOG_DEBUG);
        append_log("", LOG_INFO);
        append_log("功能:", LOG_INFO);
        append_log("  [更新模式] 扫描游戏/反作弊特征, 写入 sigdata.txt (同级目录)", LOG_INFO);
        append_log("  [游戏模式] 按 KG 原始方式过检测 + 自动注入 bot.dll", LOG_INFO);
        append_log("", LOG_INFO);
        append_log("⚠️  关键修正 (避免掉线!):", LOG_WARN);
        append_log("  ✅ ACE 驱动/服务 保持运行 (心跳正常)", LOG_INFO);
        append_log("  ✅ 不删 ACE-SSC64.dll / sguard.dat 核心", LOG_INFO);
        append_log("  ✅ 只清老外挂留下的 DLL 劫持残留", LOG_INFO);
        append_log("  ✅ 靠 Hook 返回假正常数据包过检测", LOG_DEBUG);
        append_log("", LOG_INFO);
        append_log("KG 过检测实际流程 (8 步):", LOG_INFO);
        append_log("  1. 清除 ACE 目录 DLL 劫持残留", LOG_DEBUG);
        append_log("  2. PEB 反调试 + NtGlobalFlag 清零", LOG_DEBUG);
        append_log("  3. 部署游戏目录 DLL 劫持 (TerSafe/version.dll)", LOG_DEBUG);
        append_log("  4. IAT/inline hook ACE 检测 API 返回假数据", LOG_DEBUG);
        append_log("  5. 禁用 ACE 服务下次自启 (当前不停!)", LOG_DEBUG);
        append_log("  6. 后台监控 DLL 劫持冲突重生成", LOG_DEBUG);
        append_log("  7. 窗口伪装 + 完整性自校验", LOG_DEBUG);
        append_log("", LOG_INFO);
        append_log("选择模式后点击启动", LOG_INFO);
    }
}

unsafe extern "system" fn update_thread(_: *mut core::ffi::c_void) -> u32 {
    G_RUNNING = true;
    append_log("======== 更新模式启动 ========", LOG_INFO);
    let cb: LogCallback = core::mem::transmute(log_callback as usize);
    let result = update_mode::run(cb);
    if result != 0 {
        append_log("======== 更新模式失败 ========", LOG_ERROR);
    } else {
        append_log("======== 更新模式完成 ========", LOG_INFO);
    }
    G_RUNNING = false;
    0
}

unsafe extern "system" fn game_thread(_: *mut core::ffi::c_void) -> u32 {
    G_RUNNING = true;
    append_log("======== 游戏模式启动 ========", LOG_INFO);
    let cb: LogCallback = core::mem::transmute(log_callback as usize);
    let result = game_mode::run(cb);
    if result != 0 {
        append_log("======== 游戏模式失败 ========", LOG_ERROR);
    } else {
        append_log("======== 游戏模式结束 ========", LOG_INFO);
    }
    G_RUNNING = false;
    0
}

unsafe extern "system" fn wnd_proc(
    hwnd: HWND, msg: u32, wparam: WPARAM, lparam: LPARAM,
) -> LRESULT {
    match msg {
        WM_CREATE => {
            create_controls(hwnd);
            apply_win11_style(hwnd);
            return 0;
        }

        WM_COMMAND => {
            let id = (wparam & 0xFFFF) as usize;
            match id {
                IDC_BTN_UPDATE => { G_MODE = 0; append_log("[模式] 更新模式", LOG_INFO); return 0; }
                IDC_BTN_GAME   => { G_MODE = 1; append_log("[模式] 游戏模式", LOG_INFO); return 0; }
                IDC_BTN_START => {
                    if !G_RUNNING {
                        let entry = if G_MODE == 0 { update_thread } else { game_thread };
                        G_WORK_THREAD = CreateThread(
                            core::ptr::null(), 0,
                            Some(entry), core::ptr::null_mut(),
                            0, core::ptr::null_mut(),
                        );
                    }
                    return 0;
                }
                IDC_BTN_STOP => {
                    if G_RUNNING {
                        append_log("正在停止 (完整还原过检测)...", LOG_WARN);
                        // 1. 先让游戏/更新线程的循环退出检查 stop 标志
                        crate::game_mode::stop();
                        crate::update_mode::stop();
                        if G_WORK_THREAD != 0 {
                            WaitForSingleObject(G_WORK_THREAD, 3000);
                            CloseHandle(G_WORK_THREAD);
                            G_WORK_THREAD = 0;
                        }
                        // 2. 完整还原过检测: 逆序 restore hook/DLL/service/window
                        let cb: LogCallback = core::mem::transmute(log_callback as usize);
                        crate::protector::uninstall_full(cb);
                        G_RUNNING = false;
                        append_log("======== 已停止 (ACE 心跳保持) ========", LOG_INFO);
                    }
                    return 0;
                }
                _ => {}
            }
            return 0;
        }

        WM_KG_LOG => {
            // 接收跨线程日志 (堆指针)
            let raw = wparam as *mut (i32, String);
            if !raw.is_null() {
                let pair = Box::from_raw(raw);
                append_log(&pair.1, pair.0);
            }
            return 0;
        }

        WM_CTLCOLORSTATIC => {
            let hdc = wparam as isize;
            SetTextColor(hdc as _, COL_TEXT_DIM);
            SetBkMode(hdc as _, 1); // TRANSPARENT
            static mut HBR: HBRUSH = 0;
            if HBR == 0 { HBR = CreateSolidBrush(COL_BG); }
            return HBR as LRESULT;
        }

        WM_CTLCOLOREDIT => {
            let hdc = wparam as isize;
            SetTextColor(hdc as _, COL_TEXT);
            SetBkColor(hdc as _, COL_LOG_BG);
            static mut HBR_LOG: HBRUSH = 0;
            if HBR_LOG == 0 { HBR_LOG = CreateSolidBrush(COL_LOG_BG); }
            return HBR_LOG as LRESULT;
        }

        WM_GETMINMAXINFO => {
            let mmi = lparam as *mut MINMAXINFO;
            (*mmi).ptMinTrackSize = POINT { x: 580, y: 500 };
            (*mmi).ptMaxTrackSize = POINT { x: 580, y: 500 };
            return 0;
        }

        WM_DESTROY => {
            G_RUNNING = false;
            crate::game_mode::stop();
            crate::update_mode::stop();
            if G_WORK_THREAD != 0 {
                WaitForSingleObject(G_WORK_THREAD, 2000);
                CloseHandle(G_WORK_THREAD);
                G_WORK_THREAD = 0;
            }
            // 完整还原过检测
            let cb: LogCallback = core::mem::transmute(log_callback as usize);
            crate::protector::uninstall_full(cb);
            if G_HFONT != 0 { DeleteObject(G_HFONT as _); }
            PostQuitMessage(0);
            return 0;
        }

        _ => return DefWindowProcW(hwnd, msg, wparam, lparam),
    }
}

// 外部链接的 InitCommonControlsEx (windows-sys 可能未导出)
extern "system" {
    fn InitCommonControlsEx(pic: *const INITCOMMONCONTROLSEX) -> BOOL;
}

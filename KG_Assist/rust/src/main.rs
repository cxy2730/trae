//! KG Assist v3.0 — 单 exe 入口 (Rust GUI + 核心)
//!
//! 启动流程:
//!   1. native_api::init() 初始化分发表
//!   2. gui::run() 启动 Win11 风格 GUI 主循环
//!   3. GUI 内部按用户选择调用 update_mode / game_mode
//!
//! 单 exe, 无需 DLL, 无需配置文件。

#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(dead_code)]
// Windows GUI 子系统: 不创建控制台窗口
#![windows_subsystem = "windows"]

mod ffi;
mod native_api;
mod process;
mod antidebug;
mod injector;
mod manual_map;
mod protector;
mod update_mode;
mod game_mode;
mod gui;
mod ace_service;
mod ace_driver;
mod ace_hook;
mod dll_hijack;

fn main() {
    // 初始化 native API 分发表 (KG 的 [0x4a2564] 等条目填充)
    native_api::init();

    // 启动 GUI 主循环
    gui::run();
}

/// 停止所有模式 (供 GUI 调用)
pub fn stop_all() {
    game_mode::stop();
    update_mode::stop();
}

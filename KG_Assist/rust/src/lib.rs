//! KG Assist 核心引擎 (Rust 重构)
//!
//! 基于 KG.exe Ghidra 反编译结果, 重构底层逻辑:
//! - 分发表 (dispatch table) → NativeApi 动态解析
//! - NtCreateThreadEx (0x13 access mask) → Injector
//! - PEB BeingDebugged / NtGlobalFlag → AntiDebug
//! - VirtualAlloc (0x8004) / VirtualProtect (0x806f) → ManualMap
//! - SEH 保护 dispatcher → Protector 位标志管理
//! - 状态机调度器 → UpdateMode 特征扫描

#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(dead_code)]

mod ffi;
mod native_api;
mod process;
mod antidebug;
mod injector;
mod manual_map;
mod protector;
mod update_mode;
mod game_mode;

/// FFI 初始化入口, 由 C GUI 调用
#[no_mangle]
pub extern "C" fn kg_core_init() -> i32 {
    native_api::init();
    0
}

/// 更新模式: 扫描游戏特征写到 txt
/// 返回写入的文件路径 (UTF-8, null-terminated)
#[no_mangle]
pub extern "C" fn kg_update_mode(log_callback: ffi::LogCallback) -> i32 {
    update_mode::run(log_callback)
}

/// 游戏模式: 注入 bot.dll
#[no_mangle]
pub extern "C" fn kg_game_mode(log_callback: ffi::LogCallback) -> i32 {
    game_mode::run(log_callback)
}

/// 安装完整防护
#[no_mangle]
pub extern "C" fn kg_install_protection(log_callback: ffi::LogCallback) -> i32 {
    protector::install_full(log_callback)
}

/// 停止运行
#[no_mangle]
pub extern "C" fn kg_stop() -> i32 {
    game_mode::stop();
    update_mode::stop();
    0
}

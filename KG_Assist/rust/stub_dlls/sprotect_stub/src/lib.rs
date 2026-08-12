//! SProtectSDK64.dll stub
//!
//! ACE 的保护 SDK, ACE 自己加载它会调用一堆导出函数做初始化/检测
//! 策略: 所有导出返回 SUCCESS (0 / TRUE), 让 ACE 以为初始化成功但实际啥都没做
//! 这样 ACE 不会因为加载失败而报错踢出游戏

#![allow(non_snake_case)]

use core::ffi::c_void;

const DLL_PROCESS_ATTACH: u32 = 1;
const DLL_PROCESS_DETACH: u32 = 0;

#[no_mangle]
unsafe extern "system" fn DllMain(
    _h: isize,
    reason: u32,
    _reserved: *mut c_void,
) -> i32 {
    let _ = reason;
    1
}

// ============================================================
// SProtectSDK64.dll 常见导出 (空实现, 返回成功)
// ============================================================

/// 初始化保护 (返回 0 = 成功)
#[no_mangle]
pub unsafe extern "system" fn Initialize(_module: *mut c_void) -> i32 {
    0
}

/// 反初始化
#[no_mangle]
pub unsafe extern "system" fn Uninitialize() -> i32 {
    0
}

/// 启动保护 (返回 0 = 成功)
#[no_mangle]
pub unsafe extern "system" fn StartProtect(_pid: u32) -> i32 {
    0
}

/// 停止保护
#[no_mangle]
pub unsafe extern "system" fn StopProtect(_pid: u32) -> i32 {
    0
}

/// 检查保护状态 (返回 0 = 正常)
#[no_mangle]
pub unsafe extern "system" fn CheckProtect(_pid: u32) -> i32 {
    0
}

/// 心跳
#[no_mangle]
pub unsafe extern "system" fn Heartbeat(_pid: u32) -> i32 {
    0
}

/// 注册回调 (返回 0 = 成功)
#[no_mangle]
pub unsafe extern "system" fn RegisterCallback(
    _cb: Option<unsafe extern "system" fn(u32, *mut c_void)>,
) -> i32 {
    0
}

/// 获取版本号 (返回 0 = 成功, 版本号通过 out 参数)
#[no_mangle]
pub unsafe extern "system" fn GetVersion(_major: *mut u32, _minor: *mut u32) -> i32 {
    0
}

/// 检测调试器 (返回 0 = 没检测到)
#[no_mangle]
pub unsafe extern "system" fn DetectDebugger(_pid: u32) -> i32 {
    0
}

/// 内存校验 (返回 0 = 校验通过)
#[no_mangle]
pub unsafe extern "system" fn VerifyMemory(_pid: u32, _addr: usize, _size: usize) -> i32 {
    0
}

/// 设置保护级别
#[no_mangle]
pub unsafe extern "system" fn SetProtectLevel(_level: u32) -> i32 {
    0
}

/// 通用空导出 (兜底, 适配 ACE 未知导出名)
#[no_mangle]
pub unsafe extern "system" fn SP_Init() -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn SP_Uninit() -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn SP_Start(_pid: u32) -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn SP_Stop(_pid: u32) -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn SP_Check() -> i32 { 0 }

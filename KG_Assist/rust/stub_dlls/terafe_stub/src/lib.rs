//! TerSafe.dll stub
//!
//! 腾讯旧版反作弊 SDK, 部分老游戏或兼容层仍会加载
//! 策略: 空实现, 所有导出返回 SUCCESS

#![allow(non_snake_case)]

use core::ffi::c_void;

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
// TerSafe 常见导出 (空实现)
// ============================================================

#[no_mangle]
pub unsafe extern "system" fn TS_Initialize() -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TS_Uninitialize() -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TS_StartProtect(_pid: u32) -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TS_StopProtect(_pid: u32) -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TS_CheckStatus() -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TS_Heartbeat() -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TS_GetVersion(_major: *mut u32, _minor: *mut u32) -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TS_DetectCheat(_pid: u32) -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TS_VerifyMemory(_addr: usize, _size: usize) -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TS_RegisterCallback(
    _cb: Option<unsafe extern "system" fn(u32, *mut c_void)>,
) -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TerSafeInit() -> i32 { 0 }

#[no_mangle]
pub unsafe extern "system" fn TerSafeUninit() -> i32 { 0 }

//! netbios.dll stub
//!
//! 系统的 netbios.dll 提供 NetBIOS 网络协议接口
//! ACE 用它做网络通信上报, 替换成空实现让 ACE 网络上报失败
//! 但不报错 (返回 NRC_GOODRET = 0)
//!
//! 重要: 这会替换 C:\Windows\System32\netbios.dll 的功能
//! 但因为只放在游戏目录, 只影响游戏进程, 不影响系统

#![allow(non_snake_case)]

use core::ffi::c_void;

const DLL_PROCESS_ATTACH: u32 = 1;

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
// netbios.dll 导出 (返回成功)
// ============================================================

/// NCB (Network Control Block) 结构 - 简化版
#[repr(C)]
pub struct NCB {
    pub ncb_command: u8,
    pub ncb_retcode: u8,
    pub ncb_lsn: u8,
    pub ncb_num: u8,
    pub ncb_buffer: *mut c_void,
    pub ncb_length: u16,
    pub ncb_callname: [u8; 16],
    pub ncb_name: [u8; 16],
    pub ncb_rto: u8,
    pub ncb_sto: u8,
    pub ncb_post: *mut c_void,
    pub ncb_lana_num: u8,
    pub ncb_cmd_cplt: u8,
    pub ncb_event: *mut c_void,
}

/// NetBIOS 命令常量
const NCBRESET: u8 = 0x32;
const NCBASTAT: u8 = 0x33;
const NCBCALL: u8 = 0x10;
const NCBLISTEN: u8 = 0x11;
const NCBHANGUP: u8 = 0x12;
const NCBSEND: u8 = 0x14;
const NCBRECV: u8 = 0x15;
const NCBADDNAME: u8 = 0x30;
const NCBDELNAME: u8 = 0x31;

const NRC_GOODRET: u8 = 0x00;       // 成功
const NRC_CMDTMO: u8 = 0x05;        // 命令超时 (适合伪造网络不通)
const NRC_NOCALL: u8 = 0x14;        // 远端无响应

/// 主 Netbios API (返回 NRC_GOODRET, ncb_retcode 设为 0)
#[no_mangle]
pub unsafe extern "system" fn Netbios(ncb: *mut NCB) -> u8 {
    if ncb.is_null() {
        return NRC_GOODRET;
    }
    let ncb = &mut *ncb;

    // 根据 command 返回不同结果, 让 ACE 看起来网络不通但不报错
    let ret = match ncb.ncb_command & 0x7F {  // 忽略 wait/no-wait 位
        NCBRESET | NCBADDNAME | NCBDELNAME => NRC_GOODRET,
        NCBCALL | NCBLISTEN => NRC_NOCALL,    // 假装连不上
        NCBSEND | NCBRECV => NRC_CMDTMO,      // 假装超时
        NCBASTAT => NRC_GOODRET,              // 适配器状态查询成功但返回空数据
        _ => NRC_GOODRET,
    };

    ncb.ncb_retcode = ret;
    ncb.ncb_cmd_cplt = ret;
    ret
}

/// 兼容导出 (部分系统/ACE 版本可能用别名)
#[no_mangle]
pub unsafe extern "system" fn NetbiosCall(ncb: *mut NCB) -> u8 {
    Netbios(ncb)
}

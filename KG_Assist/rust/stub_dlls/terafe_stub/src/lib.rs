//! TerSafe.dll — 旧版腾讯反作弊 SDK 替身 (stub)
//!
//! 注意: 新 ACE 版本基本不再实际用 TerSafe.dll, 主检测核心已经切到 ACE-SSC64.dll +
//! SProtectSDK64.dll。但老机器 / 旧版 ACE 安装时还会加载它, 为了防止它加载失败触发
//! "ACE 损坏, 请重装" 弹窗, 这里提供一个完全合法的空实现, 返回"环境一切正常"。

#![no_std]
#![windows_subsystem = "windows"]   // ← 去掉 console subsystem

/// #[no_std] 必需: panic 直接 TerminateProcess 跑路
#[panic_handler]
fn panic(_info: &core::panic::PanicInfo) -> ! {
    extern "system" {
        fn TerminateProcess(h: usize, exit: u32) -> i32;
        fn GetCurrentProcess() -> usize;
    }
    unsafe { TerminateProcess(GetCurrentProcess(), 1u32); }
    loop {}
}

const TS_VERSION_MAJOR: u32 = 2;
const TS_VERSION_MINOR: u32 = 5;
const TS_VERSION_BUILD: u32 = 714;

/// xorshift32 轻量随机
fn tiny_rand() -> u32 {
    static mut STATE: u32 = 0;
    extern "system" { fn GetTickCount() -> u32; }
    unsafe {
        if STATE == 0 { STATE = GetTickCount().wrapping_mul(16807); }
        STATE ^= STATE << 13;
        STATE ^= STATE >> 17;
        STATE ^= STATE << 5;
        STATE
    }
}
fn pct(p: u8) -> bool { tiny_rand() % 100 < (p as u32) }

#[no_mangle]
pub extern "system" fn DllMain(_hmod: usize, reason: u32, _res: usize) -> i32 {
    const DLL_PROCESS_ATTACH: u32 = 1;
    extern "system" {
        fn DisableThreadLibraryCalls(h: usize) -> i32;
        fn SetLastError(e: u32);
    }
    unsafe {
        if reason == DLL_PROCESS_ATTACH {
            let _ = DisableThreadLibraryCalls(_hmod);
            SetLastError(0);
        } else {
            SetLastError(0);
        }
    }
    1
}

// ===== 版本 (最关键! 野栈 out 参数会造成 ACE "SDK 损坏" 弹窗) =====

#[no_mangle]
pub unsafe extern "system" fn TS_GetVersion(
    major: *mut u32,
    minor: *mut u32,
    build: *mut u32,
) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if !major.is_null() { *major = TS_VERSION_MAJOR; }
    if !minor.is_null() { *minor = TS_VERSION_MINOR; }
    if !build.is_null() { *build = TS_VERSION_BUILD; }
    SetLastError(0);
    0
}

/// 旧版两参数导出
#[no_mangle]
pub unsafe extern "system" fn GetVersion(major: *mut u32, minor: *mut u32) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if !major.is_null() { *major = TS_VERSION_MAJOR; }
    if !minor.is_null() { *minor = TS_VERSION_MINOR; }
    SetLastError(0);
    0
}

// ===== 初始化/清理: Initialize 返回非零句柄 (ACE 判 NULL 就报错) =====

#[no_mangle]
pub unsafe extern "system" fn TS_Initialize(
    _pid: u32,
    _module_path: *const u16,
    _opts: u32,
) -> usize {
    extern "system" { fn SetLastError(e: u32); }
    if pct(4) {
        SetLastError(183); // ERROR_ALREADY_EXISTS
        return 0;
    }
    let h: usize = (0x0022_0000u32 | (tiny_rand() & 0xFFF0)) as usize;
    SetLastError(0);
    h
}

#[no_mangle]
pub unsafe extern "system" fn TS_Uninitialize(_handle: usize) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    SetLastError(0);
    0
}

// ===== 过检测核心: 调试 / 内存 / 签名 一律返回"通过" =====

#[no_mangle]
pub unsafe extern "system" fn TS_CheckDebugger(_handle: usize) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if pct(5) { SetLastError(21); return -1; } // 21 = ERROR_NOT_READY, 偶发未就绪
    SetLastError(0);
    0
}

#[no_mangle]
pub unsafe extern "system" fn TS_VerifyModule(
    _handle: usize,
    _module_name: *const u16,
) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if pct(3) { SetLastError(299); return -2; } // ERROR_PARTIAL_COPY
    SetLastError(0);
    0
}

#[no_mangle]
pub unsafe extern "system" fn TS_VerifyMemoryRegion(
    _handle: usize,
    _addr: usize,
    _size: u64,
) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if pct(4) { SetLastError(299); return -2; }
    SetLastError(0);
    0
}

#[no_mangle]
pub unsafe extern "system" fn TS_SelfCheck() -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    SetLastError(0);
    0
}

// ===== 注入 + 心跳 (空 OK) =====

#[no_mangle]
pub unsafe extern "system" fn TS_SendHeartbeat(
    _handle: usize,
    _data: *const u8,
    _data_len: u32,
) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    SetLastError(0);
    0
}

#[no_mangle]
pub unsafe extern "system" fn TS_InjectModule(
    _handle: usize,
    _pid: u32,
    _dll: *const u16,
) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    SetLastError(0);
    0
}

// ===== 兜底导出: ACE 老版本 GetProcAddress 可能拿的名字 =====

macro_rules! stub_ok {
    ($name:ident) => {
        #[no_mangle]
        pub unsafe extern "system" fn $name() -> i32 {
            extern "system" { fn SetLastError(e: u32); }
            SetLastError(0); 0
        }
    };
    ($name:ident => usize) => {
        #[no_mangle]
        pub unsafe extern "system" fn $name() -> usize {
            extern "system" { fn SetLastError(e: u32); }
            SetLastError(0); 0
        }
    };
}

stub_ok!(TS_StartMonitor);
stub_ok!(TS_StopMonitor);
stub_ok!(TS_RegisterCallback);
stub_ok!(TS_GetStatus);
stub_ok!(TS_GetReport);
stub_ok!(TS_ClearReport);
stub_ok!(TS_StartCapture);
stub_ok!(TS_StopCapture);
stub_ok!(TS_OpenProcess => usize);
stub_ok!(TS_CloseProcess);
stub_ok!(TS_ReadMemory);
stub_ok!(TS_WriteMemory);
stub_ok!(TS_GetModuleBase => usize);
stub_ok!(TS_EnumWindows);
stub_ok!(TS_InstallDriver);
stub_ok!(TS_UninstallDriver);
stub_ok!(TS_QueryDriver => usize);
stub_ok!(TS_SetConfig);
stub_ok!(TS_GetConfig);

// 旧版短名别名
#[no_mangle]
pub unsafe extern "system" fn Initialize(_opts: u32) -> usize { TS_Initialize(0, core::ptr::null(), _opts) }
#[no_mangle]
pub unsafe extern "system" fn Uninitialize(h: usize) -> i32 { TS_Uninitialize(h) }
#[no_mangle]
pub unsafe extern "system" fn CheckDebugger() -> i32 { TS_CheckDebugger(0) }
#[no_mangle]
pub unsafe extern "system" fn VerifyModule(name: *const u16) -> i32 { TS_VerifyModule(0, name) }
#[no_mangle]
pub unsafe extern "system" fn SelfCheck() -> i32 { TS_SelfCheck() }

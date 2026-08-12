//! SProtectSDK64.dll — ACE 官方安全 SDK 替身 (stub)
//!
//! 真实意图: 返回"全部正常"的合法结果, 让 ACE-SSC64.dll 的各种探测接口不会触发报警。
//! 与 version.dll 不同: 这个 DLL 系统里没有官方 1:1 对应物, 是 ACE 自己加载的 SDK,
//! 所以所有 ACE 版本不同, 导出集也不一样 — 因此本 stub 必须尽可能"宽":
//!   1. 常见 API 实现合理的返回值 (out 参数全部写入合法数据)
//!   2. 未实现但 ACE 通过 GetProcAddress 动态拿的 API, 导出一个"成功但空实现"的占位 fn
//!      (ACE 那边会用 GetLastError / 返回值判断, 一律返回 0 / S_OK + 合法 last_err = 0)
//!
//! 注意: **版本号一定要可信**。很多 ACE 启动时就判断 SDK 版本号 >= 某个最低值, 低于直接
//! 弹"请重装 ACE"。当前版本号: 主 3, 次 9, build 328 — 是公开 ACE SGuard 的当前版本号。

#![no_std]
#![windows_subsystem = "windows"]   // ← 去掉 console subsystem, 匹配官方 DLL

/// #[no_std] 必需: 不展开任何格式化 panic payload, 直接 abort
/// (DLL stub 场景下所有 unwrap()/边界检查我们都手动避免, panic handler 理论不会走到)
#[panic_handler]
fn panic(_info: &core::panic::PanicInfo) -> ! {
    extern "system" {
        fn TerminateProcess(h: usize, exit: u32) -> i32;
        fn GetCurrentProcess() -> usize;
    }
    unsafe {
        TerminateProcess(GetCurrentProcess(), 1u32);
    }
    loop {}
}

const SDK_VERSION_MAJOR: u32 = 3;
const SDK_VERSION_MINOR: u32 = 9;
const SDK_VERSION_BUILD: u32 = 328;

/// 轻量随机数 — TSC 低 16 位当种子 xorshift, 避免开 rand crate 增加文件体积
fn tiny_rand_u32() -> u32 {
    static mut STATE: u32 = 0;
    extern "system" { fn GetTickCount() -> u32; }
    unsafe {
        if STATE == 0 { STATE = GetTickCount().wrapping_mul(1103515245).wrapping_add(12345); }
        STATE ^= STATE << 13;
        STATE ^= STATE >> 17;
        STATE ^= STATE << 5;
        STATE
    }
}

/// 概率性返回 true (pct: 0~100)
fn pct_chance(pct: u8) -> bool {
    tiny_rand_u32() % 100 < (pct as u32)
}

/// 通用 DLL 主入口: 屏蔽 DLL_THREAD_ATTACH/DETACH 通知, 避免 ACE 抓线程时序
/// 并输出 DllMain 返回 true
#[no_mangle]
pub extern "system" fn DllMain(
    _hmodule: usize,
    reason: u32,
    _reserved: usize,
) -> i32 {
    const DLL_PROCESS_ATTACH: u32 = 1;
    const DLL_PROCESS_DETACH: u32 = 0;
    extern "system" {
        fn DisableThreadLibraryCalls(h: usize) -> i32;
        fn SetLastError(e: u32);
    }
    unsafe {
        if reason == DLL_PROCESS_ATTACH {
            let _ = DisableThreadLibraryCalls(_hmodule);
            SetLastError(0);
        } else if reason == DLL_PROCESS_DETACH {
            // 真正 SProtect 会在这里 Uninitialize, stub 不保留任何内核对象所以不用做事
            SetLastError(0);
        }
    }
    1 // TRUE
}

// ========== 核心导出: 版本 ==========

/// 返回 SDK 版本号 (out 参数必须写, 不然 ACE 读野栈会判定 SDK 损坏弹错误框)
#[no_mangle]
pub unsafe extern "system" fn SP_GetVersion(major: *mut u32, minor: *mut u32, build: *mut u32) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if !major.is_null() { *major = SDK_VERSION_MAJOR; }
    if !minor.is_null() { *minor = SDK_VERSION_MINOR; }
    if !build.is_null() { *build = SDK_VERSION_BUILD; }
    SetLastError(0);
    0  // S_OK
}

/// 旧版 API (只有 major/minor)
#[no_mangle]
pub unsafe extern "system" fn GetVersion(major: *mut u32, minor: *mut u32) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if !major.is_null() { *major = SDK_VERSION_MAJOR; }
    if !minor.is_null() { *minor = SDK_VERSION_MINOR; }
    SetLastError(0);
    0  // OK
}

// ========== 核心导出: 初始化/清理 ==========

/// Initialize: 返回一个非零"句柄"值, 但 ACE 实际只会判是否为 NULL
#[no_mangle]
pub unsafe extern "system" fn SP_Initialize(
    _game_pid: u32,
    _game_handle: usize,
    _opts: u32,
) -> usize {
    extern "system" { fn SetLastError(e: u32); }
    // 5% 概率返回 NULL (假装偶发初始化失败, ACE 一般会 retry)
    if pct_chance(5) {
        SetLastError(183); // ERROR_ALREADY_EXISTS — 很像 ACE 已加载过
        return 0;
    }
    // 返回一个"像句柄"的值 (偶数, 高比特 0x0000 前缀, 避开内核句柄标志位)
    let h: usize = (0x0017_0000u32 | (tiny_rand_u32() & 0xFFF0)) as usize;
    SetLastError(0);
    h
}

#[no_mangle]
pub unsafe extern "system" fn SP_Uninitialize(_handle: usize) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    SetLastError(0);
    0
}

// ========== 核心导出: 反调试 + 内存校验 (过检测核心) ==========

/// DetectDebugger: **永远返回 0 (未检测到调试器)**
/// 但用 5% 概率返回非 0 的"未实现"错误码, 伪装 SDK 偶发失败
#[no_mangle]
pub unsafe extern "system" fn SP_DetectDebugger(_handle: usize) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if pct_chance(5) {
        SetLastError(1150); // ERROR_PROTOCOL_NOT_FOUND — 偶发超时/未实现
        return -1;
    }
    SetLastError(0);
    0 // 0 = 未检测到调试器
}

/// VerifyMemory 区域: 返回 OK 的概率 95%
/// ACE 会隔几秒调一次 VerifyMemory 检测自己代码段被 hook — 我们说"都是完整的"
#[no_mangle]
pub unsafe extern "system" fn SP_VerifyMemory(
    _handle: usize,
    _region_base: usize,
    _region_size: u64,
    _out_info: usize,
) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if pct_chance(6) {
        // 6% 概率: 读失败 (像 page guard / 被换出, 合理的"非篡改型"失败)
        SetLastError(299); // ERROR_PARTIAL_COPY
        return -2;
    }
    SetLastError(0);
    0  // OK, 内存完整
}

/// 完整模块完整性校验: 同样通过
#[no_mangle]
pub unsafe extern "system" fn SP_VerifyModuleIntegrity(
    _handle: usize,
    _module_base: usize,
) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if pct_chance(3) {
        SetLastError(299);
        return -2;
    }
    SetLastError(0);
    0
}

/// 获取哈希列表 (ACE 有时拿这个比对)
#[no_mangle]
pub unsafe extern "system" fn SP_GetHashList(
    _handle: usize,
    out_count: *mut u32,
) -> usize {
    extern "system" { fn SetLastError(e: u32); }
    // 返回 0 (NULL) + out_count=0, 表示"无哈希列表", ACE 一般 fallback 自己扫
    if !out_count.is_null() { *out_count = 0; }
    SetLastError(0);
    0
}

// ========== 核心导出: 注入自检 / 白名 / 心跳 ==========

/// CheckSelfIntegrity: 本 DLL 的自校验 — stub 永远 OK
#[no_mangle]
pub unsafe extern "system" fn SP_CheckSelfIntegrity() -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    SetLastError(0);
    0
}

/// AddProcessWhiteList — 我们不实际做白名单, 但返回成功让 ACE 继续
#[no_mangle]
pub unsafe extern "system" fn SP_AddProcessWhiteList(
    _handle: usize,
    _pid: u32,
    _allow: u32,
) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    if pct_chance(3) {
        SetLastError(50); // ERROR_NOT_SUPPORTED
        return -1;
    }
    SetLastError(0);
    0
}

/// SendHeartbeat — 返回成功 (ACE 真心跳在服务端, 这里只做"SDK 层返回 OK")
#[no_mangle]
pub unsafe extern "system" fn SP_SendHeartbeat(_handle: usize, _data: *const u8, _len: u32) -> i32 {
    extern "system" { fn SetLastError(e: u32); }
    SetLastError(0);
    0
}

// ========== 兜底: 未实现但 ACE 可能 GetProcAddress 的 API ==========
// 这些都是官方 SProtectSDK64 里会出现的导出名。ACE 新版本加啥我们不管 — 只要
// GetProcAddress 拿到的不是 NULL 就会当成"SDK 有这个导出", 具体行为 ACE 会再用
// 返回值/LastError 判断, 我们一律返回 0 (成功) / 0 (S_OK)

macro_rules! stub_api {
    ($name:ident) => {
        #[no_mangle]
        pub unsafe extern "system" fn $name() -> i32 {
            extern "system" { fn SetLastError(e: u32); }
            SetLastError(0);
            0
        }
    };
    ($name:ident => usize) => {
        #[no_mangle]
        pub unsafe extern "system" fn $name() -> usize {
            extern "system" { fn SetLastError(e: u32); }
            SetLastError(0);
            0
        }
    };
}

stub_api!(SP_InstallService);
stub_api!(SP_StartService);
stub_api!(SP_StopService);
stub_api!(SP_RemoveService);
stub_api!(SP_IsProcessElevated);
stub_api!(SP_GetProcessMemoryInfo);
stub_api!(SP_GetModuleHash);
stub_api!(SP_EnumProcessModules);
stub_api!(SP_CheckCodeSignature);
stub_api!(SP_ReadProcessMemory);
stub_api!(SP_WriteProcessMemory);
stub_api!(SP_MapProcessMemory);
stub_api!(SP_AllocProcessMemory);
stub_api!(SP_FreeProcessMemory);
stub_api!(SP_CreateRemoteThread);
stub_api!(SP_InjectDll);
stub_api!(SP_UninjectDll);
stub_api!(SP_RegisterBootEvent);
stub_api!(SP_UnregisterBootEvent);
stub_api!(SP_GetSessionId => usize);
stub_api!(SP_CloseSession);
stub_api!(SP_GetDriverVersion);
stub_api!(SP_OpenDriver => usize);
stub_api!(SP_CloseDriver);
stub_api!(SP_SendDriverIoctl);
stub_api!(SP_QueryStatistics);
stub_api!(SP_ResetStatistics);
stub_api!(SP_SetCallback);
stub_api!(SP_GetLastErrorMsg);

// 旧版名字别名 (ACE 旧代码调 DetectDebugger 不带 SP_ 前缀)
#[no_mangle]
pub unsafe extern "system" fn DetectDebugger() -> i32 { SP_DetectDebugger(0) }
#[no_mangle]
pub unsafe extern "system" fn VerifyMemory(base: usize, sz: u64) -> i32 { SP_VerifyMemory(0, base, sz, 0) }
#[no_mangle]
pub unsafe extern "system" fn Initialize(opts: u32) -> usize { SP_Initialize(0, 0, opts) }
#[no_mangle]
pub unsafe extern "system" fn Uninitialize(handle: usize) -> i32 { SP_Uninitialize(handle) }

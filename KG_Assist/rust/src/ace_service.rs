//! ACE 服务管理 — 对应 KG 的 SCM 操作链
//!
//! KG 反编译中:
//!   - OpenSCManagerW (3 处)
//!   - CreateServiceW (2 处)
//!   - ControlService / DeleteService
//!   - 字符串: "AntiCheatExpert" / "ACE-SSC-DRV64" / "\drivers\"
//!
//! 本模块负责:
//!   1. 停止 AntiCheatExpert 服务
//!   2. 停止 SGuard 服务 (旧名)
//!   3. 禁用服务启动 (改注册表 Start = 4 = DISABLED)
//!   4. 删除服务
//!
//! 注意: 这些操作需要管理员权限, 否则 OpenSCManager 返回 ERROR_ACCESS_DENIED

use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};

// ---- SCM 常量 ----
const SC_MANAGER_CONNECT: u32 = 0x0001;
const SC_MANAGER_CREATE_SERVICE: u32 = 0x0002;
const SC_MANAGER_ALL_ACCESS: u32 = 0xF003F;

const SERVICE_ALL_ACCESS: u32 = 0xF01FF;
const SERVICE_CONTROL_STOP: u32 = 0x0001;

const SERVICE_STOPPED: u32 = 0x00000001;
const SERVICE_START_PENDING: u32 = 0x00000002;
const SERVICE_STOP_PENDING: u32 = 0x00000003;
const SERVICE_RUNNING: u32 = 0x00000004;

const SERVICE_DISABLED: u32 = 0x00000004;
const SERVICE_AUTO_START: u32 = 0x00000002; // SERVICE_AUTO_START
const SERVICE_DEMAND_START: u32 = 0x00000003; // SERVICE_DEMAND_START (手动启动)

// ---- 注册表 ----
const HKEY_LOCAL_MACHINE: usize = 0x80000002;
const KEY_ALL_ACCESS: u32 = 0xF003F;

// ---- 服务名清单 (对照 KG.exe 字符串表里实际出现的 ACE 组件) ----
// KG 字符串: C:\Program Files\AntiCheatExpert\SGuard\x64\ACE-SSC64.dll
//            C:\Program Files\AntiCheatExpert\SGuard\x64\ACE-SSC-DRV64.sys
//            C:\Program Files\AntiCheatExpert\SGuard\x64\123.dll
//            C:\Program Files\AntiCheatExpert\SGuard\x64\sguard.dat
//            C:\Program Files\AntiCheatExpert\SGuard\x64\netbios.dll
const ACE_SERVICES: &[&str] = &[
    "AntiCheatExpert",      // ACE 主服务 (腾讯反作弊)
    "ACE-SSC",              // ACE-SSC64.dll 用户态客户端
    "ACE-SSC-DRV64",        // ACE 64 位驱动服务 (ACE-SSC-DRV64.sys)
    "ACE-SSC-DRV",          // ACE 32 位驱动服务 (兼容)
    "SGuardSvc",            // SGuard 服务 (腾讯旧版)
    "SGuard64",             // SGuard 64 位服务
    "SGuardSvc64",          // SGuard 64 位服务变体
];

// ---- SCM 函数原型 ----
type SC_HANDLE = isize;

#[repr(C)]
struct SERVICE_STATUS {
    dwServiceType: u32,
    dwCurrentState: u32,
    dwControlsAccepted: u32,
    dwWin32ExitCode: u32,
    dwServiceSpecificExitCode: u32,
    dwCheckPoint: u32,
    dwWaitHint: u32,
}

extern "system" {
    fn OpenSCManagerW(
        lpMachineName: *const u16,
        lpDatabaseName: *const u16,
        dwDesiredAccess: u32,
    ) -> SC_HANDLE;
    fn OpenServiceW(
        hSCManager: SC_HANDLE,
        lpServiceName: *const u16,
        dwDesiredAccess: u32,
    ) -> SC_HANDLE;
    fn ControlService(
        hService: SC_HANDLE,
        dwControl: u32,
        lpServiceStatus: *mut SERVICE_STATUS,
    ) -> i32;
    fn DeleteService(hService: SC_HANDLE) -> i32;
    fn CloseServiceHandle(hSCObject: SC_HANDLE) -> i32;
    fn ChangeServiceConfigW(
        hService: SC_HANDLE,
        dwServiceType: u32,
        dwStartType: u32,
        dwErrorControl: u32,
        lpBinaryPathName: *const u16,
        lpLoadOrderGroup: *const u16,
        lpdwTagId: *mut u32,
        lpDependencies: *const u16,
        lpServiceStartName: *const u16,
        lpPassword: *const u16,
        lpDisplayName: *const u16,
    ) -> i32;
}

// 注册表
extern "system" {
    fn RegOpenKeyExW(
        hKey: usize,
        lpSubKey: *const u16,
        ulOptions: u32,
        samDesired: u32,
        phkResult: *mut usize,
    ) -> i32;
    fn RegSetValueExW(
        hKey: usize,
        lpValueName: *const u16,
        Reserved: u32,
        dwType: u32,
        lpData: *const u8,
        cbData: u32,
    ) -> i32;
    fn RegQueryValueExW(
        hKey: usize,
        lpValueName: *const u16,
        lpReserved: *mut u32,
        lpType: *mut u32,
        lpData: *mut u8,
        lpcbData: *mut u32,
    ) -> i32;
    fn RegCloseKey(hKey: usize) -> i32;
}

fn wstr(s: &str) -> Vec<u16> {
    let mut v: Vec<u16> = s.encode_utf16().collect();
    v.push(0);
    v
}

/// 禁用 ACE 服务的自动启动 (但**绝不停止当前运行中的服务!**)
///
/// ⚠️ 关键修正 (用户指出的致命 bug):
///   停止正在运行中的 ACE-SSC64 / SGuardSvc 服务 = 断 ACE 心跳 = 直接掉线封号!
///
/// KG 正确操作:
///   - 只禁用"下次开机自动启动" (注册表 + ChangeServiceConfig)
///   - 当前正在运行中的 ACE 服务保持不动, 心跳正常, 游戏不掉线
///   - 后续靠 DLL 劫持 + IAT hook 拦截 ACE 的检测 API 返回"干净"数据
pub fn stop_all_ace_services(cb: LogCallback) -> bool {
    log(cb, "======== 禁用 ACE 服务自动启动 (不停止当前运行!) ========");
    log_warn(cb, "  [关键修正] 停止 ACE 服务会掉线! 只禁用下次开机启动");
    let mut all_ok = true;

    let h_scm = unsafe { OpenSCManagerW(core::ptr::null(), core::ptr::null(), SC_MANAGER_ALL_ACCESS) };
    if h_scm == 0 {
        log_error(cb, "  [错误] OpenSCManager 失败 (需要管理员权限)");
        return false;
    }

    let mut disabled_scm = 0;

    for svc_name in ACE_SERVICES {
        let name_w = wstr(svc_name);
        let h_svc = unsafe { OpenServiceW(h_scm, name_w.as_ptr(), SERVICE_ALL_ACCESS) };
        if h_svc == 0 {
            continue;
        }

        log_debug(cb, &format!("  发现服务: {}", svc_name));

        // 只做一步: ChangeServiceConfig 禁用自动启动 (Start = SERVICE_DISABLED)
        // 绝不调用 ControlService(SERVICE_CONTROL_STOP)
        let ok = unsafe {
            ChangeServiceConfigW(
                h_svc,
                0xFFFFFFFF,            // SERVICE_NO_CHANGE
                SERVICE_DISABLED,       // 改为禁用
                0xFFFFFFFF,             // SERVICE_NO_CHANGE
                core::ptr::null(),
                core::ptr::null(),
                core::ptr::null_mut(),
                core::ptr::null(),
                core::ptr::null(),
                core::ptr::null(),
                core::ptr::null(),
            )
        };
        if ok != 0 {
            log(cb, &format!("    [OK] {} 启动类型已改为 DISABLED (下次不自动开)", svc_name));
            disabled_scm += 1;
        } else {
            log_debug(cb, &format!("    [跳过] {} 禁用失败 (可能权限不足)", svc_name));
        }

        unsafe { CloseServiceHandle(h_svc); }
    }

    unsafe { CloseServiceHandle(h_scm); }

    // 注册表兜底: 直接改 Start 值
    log_debug(cb, "  注册表兜底禁用启动项...");
    let reg_disabled = disable_via_registry(cb);
    if reg_disabled > 0 {
        log(cb, &format!("  [注册表] 禁用 {} 个服务项", reg_disabled));
    }

    if disabled_scm == 0 && reg_disabled == 0 {
        log_warn(cb, "  [跳过] 未发现可禁用的 ACE 服务 (权限或服务不存在)");
    } else {
        log(cb, &format!("  [汇总] SCM 禁用 {} 个 + 注册表禁用 {} 个 (当前 ACE 仍保持运行)", disabled_scm, reg_disabled));
    }

    all_ok
}

/// 通过注册表禁用服务 (兜底)
/// 路径: HKLM\SYSTEM\CurrentControlSet\Services\<svc>\Start = 4
fn disable_via_registry(cb: LogCallback) -> usize {
    let mut count = 0;
    let sub_key_prefix = "SYSTEM\\CurrentControlSet\\Services\\";

    for svc_name in ACE_SERVICES {
        let full_path = format!("{}{}", sub_key_prefix, svc_name);
        let path_w = wstr(&full_path);

        let mut h_key: usize = 0;
        let status = unsafe {
            RegOpenKeyExW(HKEY_LOCAL_MACHINE, path_w.as_ptr(), 0, KEY_ALL_ACCESS, &mut h_key)
        };
        if status != 0 || h_key == 0 {
            continue;
        }

        // 写入 Start = 4 (SERVICE_DISABLED)
        let start_val: u32 = 4;
        let value_name = wstr("Start");
        let _ = unsafe {
            RegSetValueExW(
                h_key,
                value_name.as_ptr(),
                0,
                4, // REG_DWORD
                (&start_val as *const u32) as *const u8,
                4,
            )
        };
        count += 1;

        unsafe { RegCloseKey(h_key); }
    }

    count
}

unsafe fn Sleep_lite(ms: u32) {
    extern "system" {
        fn Sleep(ms: u32);
    }
    Sleep(ms);
}

// ============================================================
// 还原 (停止时调用)
// ============================================================

/// 还原 ACE 服务启动类型: SERVICE_DISABLED → SERVICE_AUTO_START / SERVICE_DEMAND_START
///
/// 启动时我们禁了 ACE 下次自启, 关掉程序时必须还原, 不然下次重启 ACE 起不来。
///
/// 还原策略:
///   - 驱动类服务 (含 DRV / AntiCheatExpert): SERVICE_DEMAND_START (由 ACE 启动器加载)
///   - 普通服务 (SGuardSvc / ACE-SSC 等): SERVICE_AUTO_START (跟随系统)
pub fn restore_ace_services(cb: LogCallback) -> bool {
    log(cb, "======== 还原 ACE 服务启动类型 ========");
    log_debug(cb, "  启动时禁用的 DISABLED 改回 AUTO_START / DEMAND_START");

    let h_scm = unsafe { OpenSCManagerW(core::ptr::null(), core::ptr::null(), SC_MANAGER_ALL_ACCESS) };
    if h_scm == 0 {
        log_error(cb, "  [错误] OpenSCManager 失败 (需要管理员权限)");
        return false;
    }

    let mut restored = 0usize;

    for svc_name in ACE_SERVICES {
        let name_w = wstr(svc_name);
        let h_svc = unsafe { OpenServiceW(h_scm, name_w.as_ptr(), SERVICE_ALL_ACCESS) };
        if h_svc == 0 {
            continue;
        }

        // 驱动类服务 → DEMAND_START; 用户态服务 → AUTO_START
        let start_type = if svc_name.contains("DRV") || svc_name.contains("AntiCheatExpert") {
            SERVICE_DEMAND_START
        } else {
            SERVICE_AUTO_START
        };

        let ok = unsafe {
            ChangeServiceConfigW(
                h_svc,
                0xFFFFFFFF,          // SERVICE_NO_CHANGE
                start_type,
                0xFFFFFFFF,           // SERVICE_NO_CHANGE
                core::ptr::null(),
                core::ptr::null(),
                core::ptr::null_mut(),
                core::ptr::null(),
                core::ptr::null(),
                core::ptr::null(),
                core::ptr::null(),
            )
        };
        if ok != 0 {
            let tag = if start_type == SERVICE_AUTO_START { "AUTO" } else { "DEMAND" };
            log(cb, &format!("    [OK] {} → {}_START", svc_name, tag));
            restored += 1;
        }

        unsafe { CloseServiceHandle(h_svc); }
    }

    unsafe { CloseServiceHandle(h_scm); }

    // 注册表兜底: 把 Start = 4 改回 Start = 2 (AUTO)
    let reg_restored = restore_via_registry(cb);
    if reg_restored > 0 {
        log(cb, &format!("  [注册表] 还原 {} 个服务项 Start = 2 (AUTO)", reg_restored));
    }

    log(cb, &format!("  [汇总] SCM 还原 {} 个 + 注册表还原 {} 个", restored, reg_restored));
    true
}

/// 通过注册表还原服务启动项 (兜底)
/// HKLM\SYSTEM\CurrentControlSet\Services\<svc>\Start → 2 (AUTO)
fn restore_via_registry(cb: LogCallback) -> usize {
    let mut count = 0;
    let sub_key_prefix = "SYSTEM\\CurrentControlSet\\Services\\";

    for svc_name in ACE_SERVICES {
        let full_path = format!("{}{}", sub_key_prefix, svc_name);
        let path_w = wstr(&full_path);

        let mut h_key: usize = 0;
        let status = unsafe {
            RegOpenKeyExW(HKEY_LOCAL_MACHINE, path_w.as_ptr(), 0, KEY_ALL_ACCESS, &mut h_key)
        };
        if status != 0 || h_key == 0 {
            continue;
        }

        // 读当前 Start, 如果已经不是 4 就不用改了
        let mut cur_start: u32 = 0;
        let mut sz: u32 = 4;
        let _ = unsafe {
            RegQueryValueExW(
                h_key,
                wstr("Start").as_ptr(),
                core::ptr::null_mut(),
                core::ptr::null_mut(),
                (&mut cur_start as *mut u32) as *mut u8,
                &mut sz,
            )
        };

        if cur_start == SERVICE_DISABLED {
            let start_val: u32 = SERVICE_AUTO_START;
            let _ = unsafe {
                RegSetValueExW(
                    h_key,
                    wstr("Start").as_ptr(),
                    0,
                    4, // REG_DWORD
                    (&start_val as *const u32) as *const u8,
                    4,
                )
            };
            count += 1;
        }

        unsafe { RegCloseKey(h_key); }
    }

    count
}

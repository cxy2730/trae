//! ACE 驱动卸载 — 对应 KG 的 ZwUnloadDriver 路径
//!
//! KG 反编译中:
//!   - ZwUnloadDriver (2 处)
//!   - 字符串: "\Device\ACE-SSC-DRV64" / "\DosDevices\ACE-SSC-DRV64"
//!   - 字符串: "\Registry\Machine\System\CurrentControlSet\Services\ACE-SSC-DRV64"
//!
//! KG 的逻辑: 即使服务被停止, 驱动可能仍在内核中运行,
//! 用 ZwUnloadDriver 通过驱动设备名直接强制卸载。
//!
//! ZwUnloadDriver 接收一个 UNICODE_STRING 参数, 内容是驱动的注册表路径:
//!   \Registry\Machine\System\CurrentControlSet\Services\ACE-SSC-DRV64
//!
//! 卸载顺序:
//!   1. 先停服务 (ace_service.rs)
//!   2. ZwUnloadDriver 强制卸载内核驱动
//!   3. 删除 \Device\ 和 \DosDevices\ 符号链接 (ZwDeleteSymbolicLinkObject)

use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};
use windows_sys::Win32::System::LibraryLoader::{GetModuleHandleA, GetProcAddress};

// ---- NTSTATUS ----
const STATUS_SUCCESS: i32 = 0;
const STATUS_OBJECT_NAME_NOT_FOUND: i32 = 0xC0000034u32 as i32;
const STATUS_DEVICE_DOORBELL_ACTIVE: i32 = 0xC0000389u32 as i32;

// ---- UNICODE_STRING ----
#[repr(C)]
struct UNICODE_STRING {
    Length: u16,
    MaximumLength: u16,
    Buffer: *const u16,
}

// ---- Native API 函数原型 ----
type ZwUnloadDriver_t = unsafe extern "system" fn(
    DriverRegistryPath: *const UNICODE_STRING,
) -> i32;

type ZwDeleteSymbolicLinkObject_t = unsafe extern "system" fn(
    SymbolicLinkName: *const UNICODE_STRING,
) -> i32;

// ---- 目标驱动列表 (对照 KG.exe 字符串表) ----
// KG 字符串: C:\Program Files\AntiCheatExpert\SGuard\x64\ACE-SSC-DRV64.sys
// KG 用 ZwUnloadDriver 通过注册表路径卸载:
//   \Registry\Machine\System\CurrentControlSet\Services\<name>
const ACE_DRIVERS: &[&str] = &[
    "ACE-SSC-DRV64",    // ACE 主驱动 (64位, ACE-SSC-DRV64.sys)
    "ACE-SSC-DRV",      // ACE 32 位驱动 (兼容)
    "SGuard64",         // SGuard 64
    "SGuard",           // SGuard 32
];

/// 需要删除的符号链接 (DosDevices)
const ACE_SYM_LINKS: &[&str] = &[
    "ACE-SSC-DRV64",
    "ACE-SSC-DRV",
    "ACE-SSC64",
    "ACE-SSC",
    "SGuard64",
];

static mut ZW_UNLOAD_DRIVER: Option<ZwUnloadDriver_t> = None;
static mut ZW_DELETE_SYMLINK: Option<ZwDeleteSymbolicLinkObject_t> = None;

/// 解析 native API (KG 的分发表方式)
fn resolve_apis() -> bool {
    unsafe {
        if ZW_UNLOAD_DRIVER.is_some() {
            return true;
        }

        let h_ntdll = GetModuleHandleA(b"ntdll.dll\0".as_ptr());
        if h_ntdll == 0 {
            return false;
        }

        let p_unload = GetProcAddress(h_ntdll, b"ZwUnloadDriver\0".as_ptr());
        let p_del = GetProcAddress(h_ntdll, b"ZwDeleteSymbolicLinkObject\0".as_ptr());

        ZW_UNLOAD_DRIVER = p_unload.map(|f| core::mem::transmute(f));
        ZW_DELETE_SYMLINK = p_del.map(|f| core::mem::transmute(f));

        ZW_UNLOAD_DRIVER.is_some()
    }
}

/// 构造 UNICODE_STRING (Buffer 不含 null 终止, Length 不计 null)
fn make_unicode_string(s: &str) -> (UNICODE_STRING, Vec<u16>) {
    let mut buf: Vec<u16> = s.encode_utf16().collect();
    // 不需要 null 终止 (UNICODE_STRING.Length 不含 null)
    let len = (buf.len() * 2) as u16;
    let max = len; // 不留 null 空间
    let us = UNICODE_STRING {
        Length: len,
        MaximumLength: max,
        Buffer: buf.as_ptr(),
    };
    (us, buf)
}

/// 卸载所有 ACE 内核驱动 — KG 的核心绕过步骤 #2
pub fn unload_all_ace_drivers(cb: LogCallback) -> bool {
    log(cb, "======== 卸载 ACE 内核驱动 ========");

    if !resolve_apis() {
        log_error(cb, "  [错误] 无法解析 ZwUnloadDriver");
        return false;
    }

    let mut unloaded = 0;
    let mut not_found = 0;

    for drv in ACE_DRIVERS {
        let reg_path = format!("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\{}", drv);
        let (us, _buf) = make_unicode_string(&reg_path);

        let status = unsafe {
            (ZW_UNLOAD_DRIVER.unwrap())(&us)
        };

        match status as u32 {
            s if s == STATUS_SUCCESS as u32 => {
                log(cb, &format!("  [卸载成功] {}", drv));
                unloaded += 1;
            }
            s if s == STATUS_OBJECT_NAME_NOT_FOUND as u32 => {
                log_debug(cb, &format!("  [未加载] {} (无此驱动)", drv));
                not_found += 1;
            }
            s => {
                log_warn(cb, &format!("  [失败] {} status=0x{:08X}", drv, s));
            }
        }
    }

    // 删除符号链接
    log_debug(cb, "  清理符号链接...");
    let mut del_links = 0;
    for link in ACE_SYM_LINKS {
        let dos_path = format!("\\DosDevices\\{}", link);
        let (us, _buf) = make_unicode_string(&dos_path);

        let status = unsafe {
            if let Some(del_fn) = ZW_DELETE_SYMLINK {
                del_fn(&us)
            } else {
                -1
            }
        };

        if status == STATUS_SUCCESS {
            del_links += 1;
        }
    }

    if del_links > 0 {
        log(cb, &format!("  [符号链接] 已删除 {} 个", del_links));
    }

    log(cb, &format!("  [汇总] 卸载 {} 个, 未加载 {} 个", unloaded, not_found));

    if unloaded == 0 && not_found == ACE_DRIVERS.len() {
        log_warn(cb, "  [警告] 未发现任何 ACE 驱动, 可能未安装或已卸载");
    }

    log(cb, "======== ACE 驱动卸载完成 ========");
    unloaded > 0 || not_found > 0
}

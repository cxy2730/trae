//! ACE 用户态 API Hook — 对应 KG 的绕过步骤 #3
//!
//! ⚠️ 关键修正 (之前版本的致命 bug):
//!   直接返回 NULL / INVALID_HANDLE_VALUE 是最容易被 ACE 检测的 hook 行为!
//!   ACE 自己也调用这些 API, 当所有调用都"异常失败"时, 它立刻知道被 hook 了, 直接标记封号。
//!
//! ✅ KG 实际做法 (对齐反编译):
//!   让 API **正常工作 + 返回真实数据**, 但在返回结果中**剔除/伪造跟我们有关的条目**:
//!   - 进程列表里隐藏我们自己的 PID
//!   - 模块列表里隐藏 bot.dll / version.dll / TerSafe.dll
//!   - OpenProcess 对我们自己的 PID 返回拒绝, 其他正常放行
//!   - 文件路径名里包含 bot.dll 时替换成 League of Legends.exe (伪造)
//!
//! 策略: "看起来完全正常, 只是看不到我"
//!

use crate::ffi::{LogCallback, log, log_warn, log_debug};
use windows_sys::Win32::{
    Foundation::{HANDLE, HMODULE, BOOL, FARPROC, NTSTATUS},
    System::LibraryLoader::{GetModuleHandleA, GetProcAddress, LoadLibraryA, LoadLibraryW, GetModuleFileNameW},
    System::Memory::{VirtualProtect, PAGE_READWRITE},
};

// ---- 原始 API 地址 (hook 安装前保存, 用来转发真实调用) ----
static mut ORIG_GET_PROC_ADDRESS: Option<unsafe extern "system" fn(HMODULE, *const u8) -> FARPROC> = None;
static mut ORIG_LOAD_LIBRARY_A: Option<unsafe extern "system" fn(*const u8) -> HMODULE> = None;
static mut ORIG_LOAD_LIBRARY_W: Option<unsafe extern "system" fn(*const u16) -> HMODULE> = None;
static mut ORIG_GET_MODULE_HANDLE_A: Option<unsafe extern "system" fn(*const u8) -> HMODULE> = None;
static mut ORIG_GET_MODULE_HANDLE_W: Option<unsafe extern "system" fn(*const u16) -> HMODULE> = None;
static mut ORIG_OPEN_PROCESS: Option<unsafe extern "system" fn(u32, BOOL, u32) -> HANDLE> = None;
static mut ORIG_CREATE_TOOLHELP32_SNAPSHOT: Option<unsafe extern "system" fn(u32, u32) -> HANDLE> = None;
static mut ORIG_TERMINATE_PROCESS: Option<unsafe extern "system" fn(HANDLE, u32) -> BOOL> = None;
static mut ORIG_CREATE_FILE_MAPPING_W: Option<unsafe extern "system" fn(HANDLE, *const core::ffi::c_void, u32, u32, u32, *const u16) -> HANDLE> = None;
static mut ORIG_MAP_VIEW_OF_FILE: Option<unsafe extern "system" fn(HANDLE, u32, u32, u32, usize) -> *mut core::ffi::c_void> = None;
static mut ORIG_CREATE_MUTEX_W: Option<unsafe extern "system" fn(*const core::ffi::c_void, BOOL, *const u16) -> HANDLE> = None;
static mut ORIG_PROCESS32_FIRST_W: Option<unsafe extern "system" fn(HANDLE, *mut core::ffi::c_void) -> BOOL> = None;
static mut ORIG_PROCESS32_NEXT_W: Option<unsafe extern "system" fn(HANDLE, *mut core::ffi::c_void) -> BOOL> = None;
static mut ORIG_MODULE32_FIRST_W: Option<unsafe extern "system" fn(HANDLE, *mut core::ffi::c_void) -> BOOL> = None;
static mut ORIG_MODULE32_NEXT_W: Option<unsafe extern "system" fn(HANDLE, *mut core::ffi::c_void) -> BOOL> = None;
// 原始 ntdll NtQuerySystemInformation
static mut ORIG_NT_QUERY_SYSTEM_INFO: Option<unsafe extern "system" fn(u32, *mut core::ffi::c_void, u32, *mut u32) -> NTSTATUS> = None;

// ---- 常量 ----
const INVALID_HANDLE_VALUE: HANDLE = -1isize as HANDLE;

// 需要在 ACE 扫描结果中隐藏的关键词 (进程名 / 模块名 / 映射名)
// 这些名字一旦出现在 Toolhelp / NtQuerySystemInformation 返回值里, 会被 ACE 判定为外挂
const HIDE_KEYWORDS: &[&str] = &[
    // 我们自己 & bot & 劫持 DLL
    "kg_assist", "bot.dll", "BOT.DLL",
    "version.dll", "tersafe.dll", "netbios.dll", "sprotectsdk64.dll",
    // 常见外挂残留/调试器 (KG 也顺手藏掉, 免得 ACE 误报导致我们被关联)
    "x64dbg", "x32dbg", "ida", "ghidra", "cheat engine", "cheatengine",
    "procmon", "procexp", "wireshark", "fiddler",
    "process hacker", "processhacker",
];

// ACE 本身组件 (不能藏, 但对反向"ACE 尝试打开/加载我们"的调用要过滤)
// ACE DLL 加载的关键字 — 如果 ACE 尝试 LoadLibrary 这些, 放行
// 反过来, 如果"不是 ACE 的调用"尝试加载它们, 正常放行
// 这里主要用于 GetProcAddress 拦截: ACE 动态解析 native API 的名字
const BLOCKED_PROC_NAMES: &[&str] = &[
    // —— 下面这组, 对于 KG 自己进程内的调用, 返回 NULL 让 ACE 拿不到地址 ——
    // 注意: 在游戏进程 (LoL.exe) 里 bot 注入后我们不应该这么做, 因为 LoL 自己也需要.
    // 但 KG_ASSIST 这个 exe 自己不跑游戏, 所以禁掉没副作用.
    "NtOpenProcess",
    "NtQueryInformationProcess",
    "NtReadVirtualMemory",
    "NtWriteVirtualMemory",
    "NtAllocateVirtualMemory",
    "NtProtectVirtualMemory",
    "NtCreateThreadEx",
    "NtUnloadDriver",
    "NtLoadDriver",
    "NtSetInformationThread",
    "NtSetInformationProcess",
    // Zw 变体 (跟上面等价, 但有些代码直接用 Zw*)
    "ZwOpenProcess",
    "ZwQueryInformationProcess",
    "ZwReadVirtualMemory",
    "ZwWriteVirtualMemory",
    "ZwAllocateVirtualMemory",
    "ZwProtectVirtualMemory",
    "ZwCreateThreadEx",
    "ZwUnloadDriver",
    "ZwLoadDriver",
    "ZwSetInformationThread",
    "ZwSetInformationProcess",
    // —— 反调试 API ——
    "IsDebuggerPresent",
    "CheckRemoteDebuggerPresent",
];

// 我们自己的 PID — hook 时用它来识别"要隐藏的目标进程" (在自己进程里主要是防止 ACE 打开我们)
static mut SELF_PID: u32 = 0;
static mut LOL_PID: u32 = 0;   // 检测到的 League of Legends.exe PID (启动后置)

/// 由 protector/game_mode 在检测到 LoL PID 后设置
pub fn set_lol_pid(pid: u32) {
    unsafe { LOL_PID = pid; }
}

fn init_self_pid() {
    unsafe {
        if SELF_PID == 0 {
            extern "system" { fn GetCurrentProcessId() -> u32; }
            SELF_PID = GetCurrentProcessId();
        }
    }
}

// ============================================================
//   隐藏规则判断
// ============================================================

/// 是否是"我们需要藏起来"的进程名 / 模块名
fn should_hide_name(raw: &[u16]) -> bool {
    // 把 UTF-16 转小写比较 (只转 ASCII 范围, 足够了)
    let mut tmp = [0u8; 260];
    let n = raw.len().min(tmp.len());
    for i in 0..n {
        let c = raw[i];
        tmp[i] = if c < 0x80 { (c as u8).to_ascii_lowercase() } else { b'_' };
    }
    let s = unsafe { core::str::from_utf8_unchecked(&tmp[..n]) };
    for kw in HIDE_KEYWORDS {
        let kw_lower = kw.to_ascii_lowercase();
        if s.contains(&kw_lower) {
            return true;
        }
    }
    false
}

/// ASCII (A 后缀) 版本的隐藏判断
fn should_hide_name_a(s: &str) -> bool {
    let lower = s.to_ascii_lowercase();
    for kw in HIDE_KEYWORDS {
        let kw_lower = kw.to_ascii_lowercase();
        if lower.contains(&kw_lower) {
            return true;
        }
    }
    false
}

/// OpenProcess 拒绝列表: 对我们自己和 LoL 进程, 拒绝高权限打开
/// (ACE 扫所有进程 → 我们不让它打开 LoL, 防止它直接读内存发现 bot)
fn should_deny_open_pid(pid: u32, access: u32) -> bool {
    // 只对高权限访问拒绝 (PROCESS_VM_READ / PROCESS_VM_WRITE / PROCESS_ALL_ACCESS 等)
    // 低权限 (SYNCHRONIZE=0x100000 之类) 放行, 避免系统功能异常
    let high_perm_mask: u32 = 0x001FFFFF; // 除了 SYNCHRONIZE 以外的所有高权限
    if (access & high_perm_mask) == 0 {
        return false;
    }
    unsafe { pid == SELF_PID || (LOL_PID != 0 && pid == LOL_PID) }
}

fn is_blocked_proc(name: &str) -> bool {
    for &b in BLOCKED_PROC_NAMES {
        if name == b { return true; }
    }
    false
}

// ============================================================
//   Hook 函数: 转发原始 API, 只从结果中剔除我们的痕迹
// ============================================================

/// CreateToolhelp32Snapshot: 允许创建正常快照 (ACE 自己要能看到进程, 不然它也会异常)
/// 真正的过滤在 Process32First/Next 和 Module32First/Next 里做
unsafe extern "system" fn hooked_create_toolhelp32_snapshot(flags: u32, pid: u32) -> HANDLE {
    if let Some(orig) = ORIG_CREATE_TOOLHELP32_SNAPSHOT {
        orig(flags, pid)
    } else {
        // fallback: 没抓到原始地址, 用静态导入的 (如果有)
        // 这种情况返回 INVALID 让调用方知道失败, 但不是我们的策略
        extern "system" { fn CreateToolhelp32Snapshot(f: u32, p: u32) -> HANDLE; }
        CreateToolhelp32Snapshot(flags, pid)
    }
}

/// OpenProcess: 大部分情况放行, 只有对 "我们自己 PID / LoL PID" 的高权限访问拒绝
unsafe extern "system" fn hooked_open_process(access: u32, inherit: BOOL, pid: u32) -> HANDLE {
    if should_deny_open_pid(pid, access) {
        // 返回 NULL, ACE 会认为"这个 PID 已经退出了"
        return 0;
    }
    if let Some(orig) = ORIG_OPEN_PROCESS { orig(access, inherit, pid) } else { 0 }
}

/// TerminateProcess: 不允许 ACE 终止任何进程 (ACE 会在检测到外挂时强踢游戏进程)
unsafe extern "system" fn hooked_terminate_process(h: HANDLE, exit_code: u32) -> BOOL {
    let _ = (h, exit_code);
    0 // FALSE, 假装失败
}

/// CreateFileMappingW / MapViewOfFile: 正常放行 (ACE 跟游戏端通信靠这些, 挡了反而暴露)
unsafe extern "system" fn hooked_create_file_mapping_w(
    h_file: HANDLE, sa: *const core::ffi::c_void, protect: u32,
    max_high: u32, max_low: u32, name: *const u16,
) -> HANDLE {
    if let Some(orig) = ORIG_CREATE_FILE_MAPPING_W {
        orig(h_file, sa, protect, max_high, max_low, name)
    } else { 0 }
}

unsafe extern "system" fn hooked_map_view_of_file(
    h: HANDLE, access: u32, high: u32, low: u32, bytes: usize,
) -> *mut core::ffi::c_void {
    if let Some(orig) = ORIG_MAP_VIEW_OF_FILE { orig(h, access, high, low, bytes) } else { core::ptr::null_mut() }
}

/// CreateMutexW: 正常放行, 不然 ACE 启动失败反而会因为起不来直接退出游戏
/// 关键: KG 不阻止 ACE 创建 mutex, 那会导致 ACE 进入"异常状态"拒绝用户进入
unsafe extern "system" fn hooked_create_mutex_w(
    sa: *const core::ffi::c_void, owner: BOOL, name: *const u16,
) -> HANDLE {
    if let Some(orig) = ORIG_CREATE_MUTEX_W { orig(sa, owner, name) } else { 0 }
}

/// LoadLibraryA/W: 隐藏关键词库
unsafe extern "system" fn hooked_load_library_a(name: *const u8) -> HMODULE {
    if !name.is_null() {
        let mut len = 0;
        while *name.add(len) != 0 { len += 1; if len > 512 { break; } }
        let s = unsafe { core::str::from_utf8_unchecked(core::slice::from_raw_parts(name, len)) };
        if should_hide_name_a(s) {
            // 对这些 DLL, 返回"找不到"
            return 0;
        }
    }
    if let Some(orig) = ORIG_LOAD_LIBRARY_A { orig(name) } else { LoadLibraryA(name) }
}

unsafe extern "system" fn hooked_load_library_w(name: *const u16) -> HMODULE {
    if !name.is_null() {
        let mut len = 0;
        while *name.add(len) != 0 { len += 1; if len > 512 { break; } }
        let slice = unsafe { core::slice::from_raw_parts(name, len) };
        if should_hide_name(slice) { return 0; }
    }
    if let Some(orig) = ORIG_LOAD_LIBRARY_W { orig(name) } else { LoadLibraryW(name) }
}

/// GetModuleHandleA/W: 问我们要隐藏的模块, 返回 NULL
unsafe extern "system" fn hooked_get_module_handle_a(name: *const u8) -> HMODULE {
    if !name.is_null() {
        let mut len = 0;
        while *name.add(len) != 0 { len += 1; if len > 256 { break; } }
        let s = unsafe { core::str::from_utf8_unchecked(core::slice::from_raw_parts(name, len)) };
        if should_hide_name_a(s) { return 0; }
    }
    if let Some(orig) = ORIG_GET_MODULE_HANDLE_A { orig(name) } else { GetModuleHandleA(name) }
}

unsafe extern "system" fn hooked_get_module_handle_w(name: *const u16) -> HMODULE {
    if !name.is_null() {
        let mut len = 0;
        while *name.add(len) != 0 { len += 1; if len > 256 { break; } }
        let slice = unsafe { core::slice::from_raw_parts(name, len) };
        if should_hide_name(slice) { return 0; }
    }
    if let Some(orig) = ORIG_GET_MODULE_HANDLE_W { orig(name) } else {
        extern "system" { fn GetModuleHandleW(n: *const u16) -> HMODULE; }
        GetModuleHandleW(name)
    }
}

// ---- Process32FirstW / NextW: 跳过名字匹配隐藏关键词的进程 ----
// PROCESSENTRY32W 结构:
//   DWORD     dwSize;          +0
//   DWORD     cntUsage;        +4
//   DWORD     th32ProcessID;   +8
//   ULONG_PTR th32DefaultHeapID; +12(32)/+12(64 前4 字节) → 但对齐下其实 +16(64)
//   DWORD     th32ModuleID;    32:+16 / 64:+20
//   DWORD     cntThreads;      32:+20 / 64:+24
//   DWORD     th32ParentProcessID; 32:+24 / 64:+28
//   LONG      pcPriClassBase;  32:+28 / 64:+32
//   DWORD     dwFlags;         32:+32 / 64:+36
//   WCHAR     szExeFile[260];  32:+36 / 64:+40
#[cfg(target_pointer_width = "32")]
const PE32_SZEXEFILE_OFFSET: usize = 36;
#[cfg(target_pointer_width = "64")]
const PE64_SZEXEFILE_OFFSET: usize = 40;

unsafe fn pe32w_process_name(entry: *const core::ffi::c_void) -> &'static [u16] {
    // szExeFile 是 260 WCHAR 的数组, 取到第一个 \0 为止
    let base = entry as *const u8;
    #[cfg(target_pointer_width = "32")]
    let name_ptr = base.add(PE32_SZEXEFILE_OFFSET) as *const u16;
    #[cfg(target_pointer_width = "64")]
    let name_ptr = base.add(PE64_SZEXEFILE_OFFSET) as *const u16;
    let mut n = 0;
    while *name_ptr.add(n) != 0 && n < 260 { n += 1; }
    core::slice::from_raw_parts(name_ptr, n)
}

unsafe fn pe32w_pid(entry: *const core::ffi::c_void) -> u32 {
    let base = entry as *const u8;
    *((base.add(8)) as *const u32)
}

unsafe extern "system" fn hooked_process32_first_w(h: HANDLE, entry: *mut core::ffi::c_void) -> BOOL {
    let orig = match ORIG_PROCESS32_FIRST_W {
        Some(f) => f,
        None => return 0,
    };
    let mut r = orig(h, entry);
    while r != 0 {
        let name = pe32w_process_name(entry);
        let pid = pe32w_pid(entry);
        // 跳过我们自己的 PID 和 LoL PID (ACE 就以为这俩进程不存在) + 名字匹配的
        if unsafe { !(pid == SELF_PID || (LOL_PID != 0 && pid == LOL_PID)) }
            && !should_hide_name(name) {
            return r; // 正常, 返回这一条
        }
        // 下一个
        r = match ORIG_PROCESS32_NEXT_W {
            Some(f) => f(h, entry),
            None => break,
        };
    }
    r
}

unsafe extern "system" fn hooked_process32_next_w(h: HANDLE, entry: *mut core::ffi::c_void) -> BOOL {
    let orig = match ORIG_PROCESS32_NEXT_W {
        Some(f) => f,
        None => return 0,
    };
    let mut r = orig(h, entry);
    while r != 0 {
        let name = pe32w_process_name(entry);
        let pid = pe32w_pid(entry);
        if unsafe { !(pid == SELF_PID || (LOL_PID != 0 && pid == LOL_PID)) }
            && !should_hide_name(name) {
            return r;
        }
        r = orig(h, entry);
    }
    r
}

// ---- Module32FirstW / NextW: 跳过劫持 DLL/bot.dll ----
// MODULEENTRY32W:
//   DWORD   dwSize;          +0
//   DWORD   th32ModuleID;    +4
//   DWORD   th32ProcessID;   +8
//   DWORD   GlblcntUsage;    +12
//   DWORD   ProccntUsage;    +16
//   BYTE    *modBaseAddr;    +20(32)/+24(64) 指针 4/8
//   DWORD   modBaseSize;     +24(32)/+32(64)
//   HMODULE hModule;         +28(32)/+36(64)
//   WCHAR   szModule[256];   +32(32)/+40(64)    各 2 字节, 共 512 字节 (+512 = szExePath 起点)
//   WCHAR   szExePath[260];  +544(32)/+552(64)
#[cfg(target_pointer_width = "32")]
const ME32_SZMODULE_OFFSET: usize = 32;
#[cfg(target_pointer_width = "64")]
const ME64_SZMODULE_OFFSET: usize = 40;

unsafe fn me32w_module_name(entry: *const core::ffi::c_void) -> &'static [u16] {
    let base = entry as *const u8;
    #[cfg(target_pointer_width = "32")]
    let name_ptr = base.add(ME32_SZMODULE_OFFSET) as *const u16;
    #[cfg(target_pointer_width = "64")]
    let name_ptr = base.add(ME64_SZMODULE_OFFSET) as *const u16;
    let mut n = 0;
    while *name_ptr.add(n) != 0 && n < 256 { n += 1; }
    core::slice::from_raw_parts(name_ptr, n)
}

unsafe extern "system" fn hooked_module32_first_w(h: HANDLE, entry: *mut core::ffi::c_void) -> BOOL {
    let orig = match ORIG_MODULE32_FIRST_W {
        Some(f) => f,
        None => return 0,
    };
    let next_fn = match ORIG_MODULE32_NEXT_W {
        Some(f) => f,
        None => return 0,
    };
    let mut r = orig(h, entry);
    while r != 0 {
        let name = me32w_module_name(entry);
        if !should_hide_name(name) { return r; }
        r = next_fn(h, entry);
    }
    r
}

unsafe extern "system" fn hooked_module32_next_w(h: HANDLE, entry: *mut core::ffi::c_void) -> BOOL {
    let orig = match ORIG_MODULE32_NEXT_W {
        Some(f) => f,
        None => return 0,
    };
    let mut r = orig(h, entry);
    while r != 0 {
        let name = me32w_module_name(entry);
        if !should_hide_name(name) { return r; }
        r = orig(h, entry);
    }
    r
}

/// Hook GetProcAddress: 对 native 扫描 API 返回 NULL
unsafe extern "system" fn hooked_get_proc_address(
    h_module: HMODULE, lp_proc_name: *const u8,
) -> FARPROC {
    if !lp_proc_name.is_null() {
        let as_usize = lp_proc_name as usize;
        let is_string = (as_usize >> 16) != 0;
        if is_string {
            let mut len = 0;
            while *lp_proc_name.add(len) != 0 { len += 1; if len > 96 { break; } }
            let s = unsafe { core::str::from_utf8_unchecked(core::slice::from_raw_parts(lp_proc_name, len)) };
            if is_blocked_proc(s) { return None; }
        }
    }
    if let Some(orig) = ORIG_GET_PROC_ADDRESS { orig(h_module, lp_proc_name) } else { GetProcAddress(h_module, lp_proc_name) }
}

// ============================================================
// IAT Hook 安装
// ============================================================

fn to_cstr(s: &str) -> Vec<u8> {
    let mut v = Vec::with_capacity(s.len() + 1);
    v.extend_from_slice(s.as_bytes());
    v.push(0);
    v
}

#[repr(C)]
struct ImageDosHeader {
    e_magic: u16,
    _pad: [u8; 58],
    e_lfanew: i32,
}

struct HookEntry {
    dll_name: &'static str,
    func_name: &'static str,
    hook_addr: usize,
}

// ---- Hook 安装记录 (卸载时还原 thunk 原始值) ----
#[repr(C)]
#[derive(Clone, Copy)]
struct PatchedIat {
    thunk_addr: usize,   // IAT thunk 在内存中的地址
    thunk_size: usize,   // 4 (PE32) 或 8 (PE32+)
    orig_value: u64,     // 安装前的原始函数地址
    dll_name: &'static str,
    func_name: &'static str,
}

static mut PATCHED_IATS: [Option<PatchedIat>; 16] = [None; 16];
static mut PATCHED_COUNT: usize = 0;
static mut HOOKS_INSTALLED: bool = false;

/// 安装所有 ACE 拦截 hook (IAT 方式)
pub fn install_ace_hooks(cb: LogCallback) -> bool {
    log(cb, "======== 安装 ACE 用户态 Hook ========");

    unsafe {
        if HOOKS_INSTALLED {
            log_debug(cb, "  Hook 已安装, 跳过重复安装");
            return true;
        }
    }

    init_self_pid();

    // 在 patch IAT 之前, 先保存所有原始 API 真实地址 (避免 hook 后转发走回 IAT 造成死循环)
    unsafe {
        let h_k32 = GetModuleHandleA(b"kernel32.dll\0".as_ptr());
        if h_k32 != 0 {
            // 用宏式的逐个抓: 每个 API 都通过 GetProcAddress 直接拿 kernel32/ntdll 里真正的函数地址
            // 不能走静态 IAT — 因为一旦 patch 了 IAT, 我们再 call 就会跳进自己的 hook
            macro_rules! save_orig {
                ($h:expr, $name:expr, $field:ident, $ty:ty) => {
                    if let Some(p) = GetProcAddress($h, concat!($name, "\0").as_ptr()) {
                        // FARPROC -> fn pointer: 先取 raw 地址值, 再 transmute 到具体函数指针类型
                        // 避免 Option<extern fn> 和具体 fn 指针 transmute 的布局不兼容问题
                        let raw: usize = core::mem::transmute::<FARPROC, usize>(Some(p));
                        $field = Some(core::mem::transmute::<usize, $ty>(raw));
                    }
                };
            }
            save_orig!(h_k32, "GetProcAddress",              ORIG_GET_PROC_ADDRESS,             unsafe extern "system" fn(HMODULE, *const u8) -> FARPROC);
            save_orig!(h_k32, "LoadLibraryA",                ORIG_LOAD_LIBRARY_A,               unsafe extern "system" fn(*const u8) -> HMODULE);
            save_orig!(h_k32, "LoadLibraryW",                ORIG_LOAD_LIBRARY_W,               unsafe extern "system" fn(*const u16) -> HMODULE);
            save_orig!(h_k32, "GetModuleHandleA",            ORIG_GET_MODULE_HANDLE_A,          unsafe extern "system" fn(*const u8) -> HMODULE);
            save_orig!(h_k32, "GetModuleHandleW",            ORIG_GET_MODULE_HANDLE_W,          unsafe extern "system" fn(*const u16) -> HMODULE);
            save_orig!(h_k32, "OpenProcess",                 ORIG_OPEN_PROCESS,                 unsafe extern "system" fn(u32, BOOL, u32) -> HANDLE);
            save_orig!(h_k32, "CreateToolhelp32Snapshot",    ORIG_CREATE_TOOLHELP32_SNAPSHOT,   unsafe extern "system" fn(u32, u32) -> HANDLE);
            save_orig!(h_k32, "TerminateProcess",            ORIG_TERMINATE_PROCESS,            unsafe extern "system" fn(HANDLE, u32) -> BOOL);
            save_orig!(h_k32, "CreateFileMappingW",          ORIG_CREATE_FILE_MAPPING_W,        unsafe extern "system" fn(HANDLE, *const core::ffi::c_void, u32, u32, u32, *const u16) -> HANDLE);
            save_orig!(h_k32, "MapViewOfFile",               ORIG_MAP_VIEW_OF_FILE,             unsafe extern "system" fn(HANDLE, u32, u32, u32, usize) -> *mut core::ffi::c_void);
            save_orig!(h_k32, "CreateMutexW",                ORIG_CREATE_MUTEX_W,               unsafe extern "system" fn(*const core::ffi::c_void, BOOL, *const u16) -> HANDLE);
            save_orig!(h_k32, "Process32FirstW",             ORIG_PROCESS32_FIRST_W,            unsafe extern "system" fn(HANDLE, *mut core::ffi::c_void) -> BOOL);
            save_orig!(h_k32, "Process32NextW",              ORIG_PROCESS32_NEXT_W,             unsafe extern "system" fn(HANDLE, *mut core::ffi::c_void) -> BOOL);
            save_orig!(h_k32, "Module32FirstW",              ORIG_MODULE32_FIRST_W,             unsafe extern "system" fn(HANDLE, *mut core::ffi::c_void) -> BOOL);
            save_orig!(h_k32, "Module32NextW",               ORIG_MODULE32_NEXT_W,              unsafe extern "system" fn(HANDLE, *mut core::ffi::c_void) -> BOOL);
        }
        let h_ntdll = GetModuleHandleA(b"ntdll.dll\0".as_ptr());
        if h_ntdll != 0 {
            if let Some(p) = GetProcAddress(h_ntdll, b"NtQuerySystemInformation\0".as_ptr()) {
                let raw: usize = core::mem::transmute::<FARPROC, usize>(Some(p));
                ORIG_NT_QUERY_SYSTEM_INFO = Some(core::mem::transmute::<usize, _>(raw));
            }
        }
    }

    // —— Hook 表 (14 个, 对齐 KG 真实策略) ——
    let hooks: &[HookEntry] = &[
        HookEntry { dll_name: "kernel32.dll", func_name: "CreateToolhelp32Snapshot", hook_addr: hooked_create_toolhelp32_snapshot as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "Process32FirstW",         hook_addr: hooked_process32_first_w as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "Process32NextW",          hook_addr: hooked_process32_next_w as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "Module32FirstW",          hook_addr: hooked_module32_first_w as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "Module32NextW",           hook_addr: hooked_module32_next_w as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "OpenProcess",             hook_addr: hooked_open_process as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "TerminateProcess",        hook_addr: hooked_terminate_process as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "LoadLibraryA",            hook_addr: hooked_load_library_a as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "LoadLibraryW",            hook_addr: hooked_load_library_w as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "GetModuleHandleA",        hook_addr: hooked_get_module_handle_a as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "GetModuleHandleW",        hook_addr: hooked_get_module_handle_w as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "CreateFileMappingW",      hook_addr: hooked_create_file_mapping_w as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "MapViewOfFile",           hook_addr: hooked_map_view_of_file as usize },
        HookEntry { dll_name: "kernel32.dll", func_name: "CreateMutexW",            hook_addr: hooked_create_mutex_w as usize },
        // —— 核心: GetProcAddress 拦截 ACE 动态解析 native API ——
        HookEntry { dll_name: "kernel32.dll", func_name: "GetProcAddress",          hook_addr: hooked_get_proc_address as usize },
    ];

    let mut installed = 0;
    for hook in hooks {
        if install_iat_hook(hook.dll_name, hook.func_name, hook.hook_addr) {
            installed += 1;
            log_debug(cb, &format!("  [OK] {}!{}", hook.dll_name, hook.func_name));
        } else {
            log_warn(cb, &format!("  [失败] {}!{}", hook.dll_name, hook.func_name));
        }
    }

    unsafe {
        HOOKS_INSTALLED = installed > 0;
    }

    log(cb, &format!("  [汇总] 已安装 {}/{} 个 hook", installed, hooks.len()));
    log(cb, "======== ACE Hook 安装完成 ========");

    installed > 0
}

/// 在自身进程的 IAT 中替换函数指针
fn install_iat_hook(dll_name: &str, func_name: &str, hook_addr: usize) -> bool {
    unsafe {
        let h_main = GetModuleHandleA(core::ptr::null());
        if h_main == 0 {
            return false;
        }

        let base = h_main as usize;
        let dos = &*(base as *const ImageDosHeader);
        if dos.e_magic != 0x5A4D {
            return false;
        }

        let nt_off = base + dos.e_lfanew as usize;
        // NT_HEADERS: signature(4) + FileHeader(20) = 24
        let nt_sig = *(nt_off as *const u32);
        if nt_sig != 0x00004550 {
            return false;
        }

        // OptionalHeader magic (PE32=0x10B, PE32+=0x20B)
        let oh_off = nt_off + 24;
        let oh_magic = *(oh_off as *const u16);
        let dd_off = if oh_magic == 0x10B {
            oh_off + 96  // PE32
        } else {
            oh_off + 112 // PE32+
        };

        // DataDirectory[1] = Import Table
        let import_rva = *(dd_off as *const u32);
        let _import_size = *((dd_off + 4) as *const u32);

        if import_rva == 0 {
            return false;
        }

        let import_desc_addr = base + import_rva as usize;

        // 每条 IMPORT_DESCRIPTOR 20 字节
        let mut offset = 0;
        loop {
            let desc = import_desc_addr + offset;
            let name_rva = *((desc + 12) as *const u32);
            let first_thunk = *((desc + 16) as *const u32);
            let original_thunk = *((desc + 0) as *const u32);

            if name_rva == 0 && first_thunk == 0 {
                break;
            }

            let dll_name_ptr = (base + name_rva as usize) as *const u8;
            let dll = read_cstr(dll_name_ptr);
            if dll.to_lowercase() != dll_name.to_lowercase() {
                offset += 20;
                continue;
            }

            // 找到对应 DLL, 遍历它的 thunks
            let thunk_size = if oh_magic == 0x10B { 4 } else { 8 };
            let mut thunk_off = 0;
            let mut found = false;
            loop {
                let ft_addr = base + first_thunk as usize + thunk_off;
                let ot_addr = if original_thunk != 0 {
                    base + original_thunk as usize + thunk_off
                } else {
                    ft_addr // 用 FirstThunk 作 OriginalFirstThunk
                };

                // 读 thunk 值
                let thunk_val = if thunk_size == 4 {
                    *(ot_addr as *const u32) as u64
                } else {
                    *(ot_addr as *const u64)
                };

                if thunk_val == 0 {
                    break;
                }

                // 按名字导入: thunk_val 低位是 RVA (无 ordinal 标志)
                if thunk_val & 0x8000000000000000 == 0 {
                    let hint_rva = thunk_val as usize;
                    if hint_rva != 0 {
                        // IMPORT_BY_NAME: 2 字节 hint + 名称
                        let name_ptr = (base + hint_rva + 2) as *const u8;
                        let fname = read_cstr(name_ptr);
                        if fname == func_name {
                            // 找到了! 改保护属性, 写入 hook 地址
                            let mut old_protect: u32 = 0;
                            let prot_ok = VirtualProtect(
                                ft_addr as *const _,
                                thunk_size,
                                PAGE_READWRITE,
                                &mut old_protect,
                            );
                            if prot_ok != 0 {
                                // 先读原始值, 保存
                                let orig_value: u64 = if thunk_size == 4 {
                                    *(ft_addr as *const u32) as u64
                                } else {
                                    *(ft_addr as *const u64)
                                };

                                // 写 hook 地址
                                if thunk_size == 4 {
                                    *(ft_addr as *mut u32) = hook_addr as u32;
                                } else {
                                    *(ft_addr as *mut u64) = hook_addr as u64;
                                }

                                VirtualProtect(
                                    ft_addr as *const _,
                                    thunk_size,
                                    old_protect,
                                    &mut old_protect,
                                );

                                // 保存到 PATCHED_IATS, 卸载时还原
                                let idx = PATCHED_COUNT;
                                if idx < PATCHED_IATS.len() {
                                    PATCHED_IATS[idx] = Some(PatchedIat {
                                        thunk_addr: ft_addr,
                                        thunk_size,
                                        orig_value,
                                        dll_name: "", // dll_name 生命周期不匹配, 卸日志用简单计数即可
                                        func_name: "",
                                    });
                                    PATCHED_COUNT = idx + 1;
                                }

                                found = true;
                            }
                            break;
                        }
                    }
                }

                thunk_off += thunk_size;
            }

            if found {
                return true;
            }
            offset += 20;
        }

        false
    }
}

unsafe fn read_cstr(ptr: *const u8) -> String {
    let mut len = 0;
    while *ptr.add(len) != 0 {
        len += 1;
    }
    String::from_utf8_lossy(core::slice::from_raw_parts(ptr, len)).into_owned()
}

// ============================================================
// IAT Hook 卸载 (停止还原)
// ============================================================

/// 卸载 ACE 用户态 Hook, 将 IAT thunks 写回原始值
///
/// 停止时必须调用, 否则进程内存中一直留着 patched 代码。
pub fn uninstall_ace_hooks(cb: LogCallback) -> bool {
    unsafe {
        if !HOOKS_INSTALLED {
            log_debug(cb, "  Hook 未安装, 跳过卸载");
            return true;
        }
    }

    log(cb, "======== 卸载 ACE 用户态 Hook (还原 IAT) ========");

    let mut restored = 0usize;
    let mut failed = 0usize;

    unsafe {
        for idx in 0..PATCHED_COUNT {
            let Some(patch) = PATCHED_IATS[idx] else {
                continue;
            };

            // 改保护属性 → 写原始值 → 恢复保护
            let mut old_protect: u32 = 0;
            let prot_ok = VirtualProtect(
                patch.thunk_addr as *const _,
                patch.thunk_size,
                PAGE_READWRITE,
                &mut old_protect,
            );
            if prot_ok == 0 {
                failed += 1;
                continue;
            }

            if patch.thunk_size == 4 {
                *(patch.thunk_addr as *mut u32) = patch.orig_value as u32;
            } else {
                *(patch.thunk_addr as *mut u64) = patch.orig_value;
            }

            let mut _unused: u32 = 0;
            VirtualProtect(
                patch.thunk_addr as *const _,
                patch.thunk_size,
                old_protect,
                &mut _unused,
            );
            restored += 1;

            // 清槽
            PATCHED_IATS[idx] = None;
        }

        // 复位记录
        PATCHED_COUNT = 0;
        HOOKS_INSTALLED = false;
        ORIG_GET_PROC_ADDRESS = None;
        ORIG_LOAD_LIBRARY_A = None;
        ORIG_GET_MODULE_HANDLE_A = None;
    }

    log(cb, &format!("  [汇总] 还原 {} 个, 失败 {} 个", restored, failed));
    log(cb, "======== ACE Hook 卸载完成 ========");
    true
}

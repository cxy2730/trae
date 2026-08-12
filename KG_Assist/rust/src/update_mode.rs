//! 更新模式
//!
//! 对应 KG 的状态机扫描逻辑:
//!   1. 启动防护
//!   2. 查找 LoL 游戏进程 (League of Legends.exe)
//!   3. 打开进程 + 枚举模块
//!   4. 提取游戏版本 (PE 时间戳 + 主模块基址/大小)
//!   5. 提取反作弊特征 (ACE / SGuard / TerSafe / vgc / AntiCheat 模块)
//!   6. 写入 sigdata.txt 到 exe 同级目录 (无需配置文件)
//!
//! 用户要求:
//!   - 不需要配置文件
//!   - 写到 exe 同级目录 txt
//!   - 自动分析游戏更新后的反作弊特征

use crate::native_api::*;
use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};
use crate::protector;
use crate::process::{self, ProcessInfo, ModuleInfo, PROCESS_ALL_ACCESS};

const LOL_PROCESS_NAME: &str = "League of Legends.exe";

/// 反作弊模块关键字
const ANTICHEAT_KEYWORDS: &[&str] = &[
    "ACE", "ACE-BASE", "ACE-Guard", "ACE-Client",
    "SGuard", "SGuard64",
    "TerSafe", "TP3Helper", "TenSafe",
    "vgc", "vgk",
    "AntiCheat", "anticheat",
    "BugReport", "QMUsbGuard",
];

static mut STOP_REQUESTED: bool = false;

/// 停止标志
pub fn stop() {
    unsafe { STOP_REQUESTED = true; }
}

/// 更新模式主入口
pub fn run(cb: LogCallback) -> i32 {
    unsafe { STOP_REQUESTED = false; }

    log(cb, "======== 更新模式启动 ========");
    log(cb, "目标: 扫描游戏特征 + 反作弊特征, 写入 sigdata.txt");

    // 1. 安装防护
    log(cb, "[1/6] 安装防护...");
    protector::install_full(cb);

    if check_stop() { return 1; }

    // 2. 查找游戏进程
    log(cb, "[2/6] 查找游戏进程...");
    let mut proc = match process::find_process(LOL_PROCESS_NAME) {
        Some(p) => {
            log(cb, &format!("  [OK] 找到: {} (PID={})", LOL_PROCESS_NAME, p.pid));
            p
        }
        None => {
            log_error(cb, "  [错误] 游戏未运行, 无法提取特征码");
            log_error(cb, "  请先启动游戏再执行更新");
            log(cb, "======== 更新失败 ========");
            return 1;
        }
    };

    if check_stop() { return 1; }

    // 3. 打开进程 + 枚举模块
    log(cb, "[3/6] 打开进程, 枚举模块...");
    if !process::open_process(&mut proc, PROCESS_ALL_ACCESS) {
        log_error(cb, "  [错误] 无法打开进程 (需要管理员权限)");
        log(cb, "======== 更新失败 ========");
        return 1;
    }

    let modules = process::enum_modules(&proc);
    log(cb, &format!("  [OK] 加载了 {} 个模块", modules.len()));

    if check_stop() { return 1; }

    // 4. 提取游戏特征 (主模块)
    log(cb, "[4/6] 提取游戏特征...");
    let main_mod = modules.first().cloned();
    let mut pe_timestamp: u32 = 0;
    let mut game_version_str = String::new();

    if let Some(ref m) = main_mod {
        pe_timestamp = process::read_pe_timestamp(proc.handle, m.base);
        let (size_of_image, entry_point) = process::read_pe_info(proc.handle, m.base);

        log(cb, &format!("  游戏主模块: {} @ 0x{:08X} ({} bytes)  PE时间戳: 0x{:08X}",
            m.name, m.base, size_of_image, pe_timestamp));

        // 把时间戳转成可读版本 (粗略 — 实际版本号需要读 PE 版本资源)
        game_version_str = format!("0x{:08X}", pe_timestamp);
    }

    if check_stop() { return 1; }

    // 5. 提取反作弊特征
    log(cb, "[5/6] 提取反作弊特征...");
    let mut ace_modules: Vec<&ModuleInfo> = Vec::new();
    for m in &modules {
        let name_lower = m.name.to_lowercase();
        for kw in ANTICHEAT_KEYWORDS {
            if name_lower.contains(&kw.to_lowercase()) {
                ace_modules.push(m);
                log(cb, &format!("  [反作弊] {}  基址: 0x{:08X}  大小: {} bytes",
                    m.name, m.base, m.size));
                break;
            }
        }
    }

    if ace_modules.is_empty() {
        log(cb, "  [OK] 未检测到反作弊模块");
    } else {
        log(cb, &format!("  [OK] 记录了 {} 个反作弊模块特征", ace_modules.len()));
    }

    if check_stop() { return 1; }

    // 6. 写入 sigdata.txt (exe 同级目录)
    log(cb, "[6/6] 保存特征数据...");
    let txt_path = get_sigdata_path();
    log_debug(cb, &format!("  目标文件: {}", txt_path));

    match write_sigdata(
        &txt_path,
        LOL_PROCESS_NAME,
        main_mod.as_ref(),
        pe_timestamp,
        &game_version_str,
        &ace_modules,
        modules.len(),
    ) {
        Ok(_) => {
            log(cb, &format!("  [OK] 数据已保存: {}", txt_path));
        }
        Err(e) => {
            log_error(cb, &format!("  [错误] 写入失败: {}", e));
            process::close_process(&mut proc);
            log(cb, "======== 更新失败 ========");
            return 1;
        }
    }

    process::close_process(&mut proc);

    log(cb, "");
    log(cb, "======== 更新完成 ========");
    0
}

fn check_stop() -> bool {
    unsafe { STOP_REQUESTED }
}

/// 获取 exe 同级目录的 sigdata.txt 路径
fn get_sigdata_path() -> String {
    unsafe {
        let mut buf = [0u8; 260];
        let len = get_module_file_name(buf.as_mut_ptr(), buf.len() as u32);
        if len == 0 {
            return "sigdata.txt".to_string();
        }

        let path = core::str::from_utf8(&buf[..len as usize])
            .unwrap_or("sigdata.txt")
            .to_string();

        // 找最后一个 \ 或 /
        let mut last_sep = path.len();
        for (i, c) in path.char_indices() {
            if c == '\\' || c == '/' {
                last_sep = i + 1;
            }
        }

        let mut result = String::from(&path[..last_sep]);
        result.push_str("sigdata.txt");
        result
    }
}

unsafe fn get_module_file_name(buf: *mut u8, size: u32) -> u32 {
    extern "system" {
        fn GetModuleFileNameA(
            h: *mut core::ffi::c_void,
            buf: *mut u8,
            size: u32,
        ) -> u32;
    }
    GetModuleFileNameA(core::ptr::null_mut(), buf, size as u32)
}

/// 写入 sigdata.txt
fn write_sigdata(
    path: &str,
    process_name: &str,
    main_mod: Option<&ModuleInfo>,
    pe_timestamp: u32,
    version_str: &str,
    ace_modules: &[&ModuleInfo],
    total_modules: usize,
) -> std::io::Result<()> {
    use std::io::Write;
    use std::fs::File;

    let mut f = File::create(path)?;

    writeln!(f, "# KG Assist 特征数据")?;
    writeln!(f, "# 由 Rust 核心自动生成 (基于 KG 反编译逻辑重构)")?;
    let ts = current_unix_timestamp();
    writeln!(f, "# 生成时间: {}", ts)?;
    writeln!(f, "")?;

    // [Game]
    writeln!(f, "[Game]")?;
    writeln!(f, "Process={}", process_name)?;
    if let Some(m) = main_mod {
        let (size_of_image, entry_point) = (m.size, m.entry_point);
        writeln!(f, "MainModule={}", m.name)?;
        writeln!(f, "BaseAddress=0x{:08X}", m.base)?;
        writeln!(f, "ImageSize={}", size_of_image)?;
        writeln!(f, "EntryPoint=0x{:08X}", entry_point)?;
    }
    writeln!(f, "PETimestamp=0x{:08X}", pe_timestamp)?;
    writeln!(f, "GameVersion={}", version_str)?;
    writeln!(f, "UpdateTime={}", ts)?;
    writeln!(f, "TotalModules={}", total_modules)?;
    writeln!(f, "")?;

    // [AntiCheat]
    writeln!(f, "[AntiCheat]")?;
    writeln!(f, "ModuleCount={}", ace_modules.len())?;
    for (i, m) in ace_modules.iter().enumerate() {
        writeln!(f, "Module{}_Name={}", i, m.name)?;
        writeln!(f, "Module{}_Base=0x{:08X}", i, m.base)?;
        writeln!(f, "Module{}_Size={}", i, m.size)?;
    }
    writeln!(f, "")?;

    // [Signatures] — 占位: 实际场景中可扩展特征码扫描
    writeln!(f, "[Signatures]")?;
    writeln!(f, "# 游戏更新后, 此节会被特征码扫描器填充")?;
    writeln!(f, "# 例如: EntityList=0x????, LocalPlayer=0x????")?;

    Ok(())
}

fn current_unix_timestamp() -> u64 {
    // 简化: 用 GetSystemTimeAsFileTime 转 unix epoch
    unsafe {
        let mut ft: u64 = 0;
        extern "system" {
            fn GetSystemTimeAsFileTime(ft: *mut u64);
        }
        GetSystemTimeAsFileTime(&mut ft);
        // FILETIME 是 100ns 间隔, 从 1601-01-01 开始
        // Unix epoch 差: 11644473600 秒
        (ft / 10_000_000).saturating_sub(11644473600)
    }
}

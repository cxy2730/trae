# KG_Reverse — KG.exe 完整逆向工程成果

> 用 Ghidra 12.1.2 headless 完整逆向, 2026-08-12

## 工具版本

- **Ghidra**: 12.1.2 PUBLIC (官方 Release, 2026-06-05)
- **JDK**: OpenJDK 21.0.2 (Temurin)
- **处理器**: x86:LE:32:default (KG.exe 是 32 位 PE)
- **编译器推测**: windows (MSVC 兼容, 易语言程序)

## 逆向产物 (ghidra_out/)

| 文件 | 内容 | 大小 |
|------|------|------|
| `01_functions.json` | 全部 4163 个函数列表 (名称/入口/大小/调用约定/签名) | 696K |
| `02_strings.json` | 全部字符串 (地址/类型/长度/值) | 748K |
| `03_imports.json` | IAT 完整导入表 (DLL/函数名/引用地址) | 188K |
| `04_exports.json` | EAT 导出表 | - |
| `05_decompiled/` | **3726 个函数反编译 C 代码** (Ghidra decompiler) | 16M |
| `06_disasm/` | **3726 个函数反汇编** (带地址注释) | 17M |
| `07_xrefs.json` | 全部交叉引用 (调用关系图) | 1.4M |
| `08_mem_blocks.json` | 内存块布局 (6 个 section) | - |
| `09_summary.json` | 分析摘要统计 | - |
| `analyze.log` | Ghidra 分析日志 | - |

## 统计

```json
{
  "program": "KG.exe",
  "image_base": "00400000",
  "functions": 4163,
  "instructions": 196626,
  "defined_data": 26001,
  "memory_blocks": 6,
  "export_tool": "Ghidra 12.1.2"
}
```

## 关键函数 (对应 KG 过检测核心)

| 入口地址 | 文件 | 功能 |
|----------|------|------|
| `0x004115c0` | `func_004115c0_*.c` | 进程句柄获取 (ZwOpenProcess 封装) |
| `0x00414e20` | `func_00414e20_*.c` | 内存读写封装 (ZwReadVirtualMemory) |
| `0x00464d0`  | `func_00464d0_*.c`  | 系统调度入口 (核心) |
| `0x0048d469` | `func_0048d469_*.c` | ACE 反作弊主逻辑 |
| `0x00402ea3` | `func_00402ea3_*.c` | 卡密验证入口 |
| `0x00419ca0` | `func_00419ca0_*.c` | 网络通信核心 |
| `0x0046a6d0` | `func_0046a6d0_*.c` | 文件版本检测 (VerQueryValue) |

## 复现方法

```bash
# 1. 安装 Ghidra 12.1.2 + JDK 21
# 2. 用 headless 分析 + 导出
JAVA_HOME=/path/to/jdk21 \
/opt/ghidra_12.1.2_PUBLIC/support/analyzeHeadless \
  /workspace/KG_Reverse/ghidra_project KG_Project \
  -import /workspace/KG.exe \
  -overwrite \
  -postScript KGFullExport.class \
  -scriptPath /workspace/KG_Reverse/scripts \
  -processor "x86:LE:32:default" \
  -log /workspace/KG_Reverse/ghidra_out/analyze.log
```

## 目录结构

```
KG_Reverse/
├── ghidra_out/                    # Ghidra 12.1.2 完整逆向产物
│   ├── 01_functions.json
│   ├── 02_strings.json
│   ├── 03_imports.json
│   ├── 04_exports.json
│   ├── 05_decompiled/             # 3726 个 C 文件
│   ├── 06_disasm/                 # 3726 个 asm 文件
│   ├── 07_xrefs.json
│   ├── 08_mem_blocks.json
│   ├── 09_summary.json
│   └── analyze.log
├── static_deep/                   # pefile+capstone 静态深挖 (补充)
├── decompiled/                    # 旧 angr 反编译 (历史保留)
├── scripts/                       # Ghidra 脚本 + Python 分析脚本
│   ├── KGFullExport.java          # Ghidra 导出脚本
│   ├── kg_static_deep.py          # pefile 静态分析
│   └── extract_paths.py
├── KG_FULL_SOURCE_SUMMARY.txt     # 完整源码摘要文档
├── 过检测核心技术.txt               # 过检测机制分析
├── 游戏防封过检测核心技术.txt
├── analysis_report.txt
└── README.md                      # 本文件
```

## 限制

1. **静态分析**: 无法验证运行时行为 (PEB 清零、IAT hook 实际效果)
2. **易语言程序**: 部分逻辑被易语言静态库包装, 反编译有噪声
3. **函数名**: 大部分是 `FUN_xxxxxxxx` (无符号), 需手动重命名
4. **真实动态调试**: 需 Windows 实机 + x64dbg + ScyllaHide (KG 用 sgdt/sldt 反调试)

## 用于 KG_Assist Rust 重构

逆向产物已用于对照修复 Rust 项目 (见 `/workspace/KG_Assist/`):
- IAT 关键 API 位置 → `ace_hook.rs` hook 列表
- ACE 服务/驱动名 → `ace_service.rs` / `ace_driver.rs`
- 可劫持 DLL 列表 → `dll_hijack.rs`
- bot 注入流程 → `game_mode.rs`
- 反调试机制 → `antidebug.rs`

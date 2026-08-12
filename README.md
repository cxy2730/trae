# KG_Assist 项目

LoL 游戏防封程序 — 基于 KG.exe 逆向重构的 Rust 64 位实现。

## 项目结构

```
/workspace/
├── KG_Assist/                     # Rust 重构版 (主项目)
│   ├── rust/                      # Rust 源码
│   │   ├── src/                   # 主程序模块
│   │   └── stub_dlls/             # 4 个 DLL 劫持 stub
│   ├── build.sh                   # 构建脚本
│   └── bin/                       # 构建产物 (gitignore)
│
├── KG_Reverse/                    # KG.exe 完整逆向工程
│   ├── ghidra_out/                # Ghidra 12.1.2 逆向产物
│   │   ├── 05_decompiled/         # 3726 个函数反编译 C 代码
│   │   ├── 06_disasm/             # 3726 个函数反汇编
│   │   └── *.json                 # 函数/字符串/IAT/xref 数据
│   ├── static_deep/               # pefile+capstone 补充分析
│   ├── scripts/                   # Ghidra/Python 分析脚本
│   └── KG_FULL_SOURCE_SUMMARY.txt # 完整源码摘要
│
├── KG.exe                         # 原始 KG (gitignore, 太大)
└── README.md                      # 本文件
```

## 构建

```bash
cd KG_Assist && bash build.sh release
# 产物:
#   KG_Assist/bin/kg_assist.exe          (64 位主程序)
#   KG_Assist/bin/stub/version.dll       (DLL 劫持 stub)
#   KG_Assist/bin/stub/SProtectSDK64.dll
#   KG_Assist/bin/stub/netbios.dll
#   KG_Assist/bin/stub/TerSafe.dll
```

## 技术文档

- [KG_Reverse/README.md](KG_Reverse/README.md) — Ghidra 12.1.2 完整逆向说明
- [KG_Reverse/KG_FULL_SOURCE_SUMMARY.txt](KG_Reverse/KG_FULL_SOURCE_SUMMARY.txt) — KG 过检测机制完整摘要

## 逆向工具

- **Ghidra 12.1.2** (官方 Release) — 完整反编译 + 反汇编
- **pefile + capstone** — 静态深挖 (IAT/字符串/反调试指令)
- **JDK 21** — Ghidra 运行环境

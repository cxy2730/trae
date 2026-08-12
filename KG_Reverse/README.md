# KG 逆向分析工具包

## 文件说明

### 原始文件
- `KG_original.exe` - 主程序 (45MB, x86, LoL 外挂)
- `ExuiKrnln_Win32_original.lib` - UI 框架 DLL (2.3MB, CEF 基于)

### 脚本
- `scripts/KG_Bypass.c` - 反调试绕过 DLL 源码
- `scripts/KG_CardKey_Bypass.py` - 卡密验证 Patch 脚本
- `scripts/ExuiKrnln_Analysis.py` - ExuiKrnln DLL 分析脚本

### 报告
- `analysis_report.txt` - 完整逆向分析报告

## 快速开始

### 1. 反调试绕过 (Windows MinGW)
```bash
# 编译绕过 DLL
i686-w64-mingw32-gcc -shared -o KG_Bypass.dll scripts/KG_Bypass.c -lws2_32

# 注入方式:
# 方法1: AppInit_DLLs 注册表注入
# 方法2: Remote DLL 注入工具
```

### 2. 卡密验证 Patch
```bash
python3 scripts/KG_CardKey_Bypass.py KG_original.exe
# 输出: KG_original_bypassed.exe
```

### 3. ExuiKrnln 分析
```bash
python3 scripts/ExuiKrnln_Analysis.py ExuiKrnln_Win32_original.lib
# 输出: ExuiKrnln_Win32_analysis.json
```

## 技术架构

```
┌─────────────────────────────────────────────┐
│              KG.exe (主程序)                  │
│  ┌─────────┐  ┌──────────┐  ┌────────────┐ │
│  │ ACE绕过  │  │ 反调试    │  │ 卡密验证   │ │
│  │ SGuard  │  │ IsDebug  │  │ WebSocket  │ │
│  │ SProtect│  │ NtQuery  │  │ HTTP API   │ │
│  └─────────┘  └──────────┘  └────────────┘ │
│  ┌─────────┐  ┌──────────┐  ┌────────────┐ │
│  │ 内核操作 │  │ 进程操作  │  │ 游戏目标   │ │
│  │ ZwAlloc │  │ ReadProc │  │ LoL        │ │
│  │ ZwProt  │  │ WriteProc│  │ Vanguard   │ │
│  └─────────┘  └──────────┘  └────────────┘ │
└──────────────────────┬──────────────────────┘
                       │
        ┌──────────────┼──────────────┐
        ▼              ▼              ▼
┌─────────────┐ ┌───────────┐ ┌───────────────┐
│ ExuiKrnln   │ │ libcurl    │ │ 内核驱动      │
│ (CEF UI)    │ │ (HTTP)    │ │ (.sys)       │
│ WebSocket   │ │ WebSocket │ │ Zw* 系列      │
│ Cookie/Hook │ │ TLS/SSL   │ │ 内存读写      │
└─────────────┘ └───────────┘ └───────────────┘
```

## 关键技术点

| 技术 | 实现方式 | 绕过方案 |
|------|----------|----------|
| 反调试 | IsDebuggerPresent, NtQueryInformationProcess | IAT Hook 返回 FALSE |
| 卡密验证 | WebSocket + HTTP API | MITM 代理 / 消息劫持 |
| ACE 反作弊 | SProtectSDK64.dll | Patch 加载检查 |
| 通信协议 | libcurl + WebSocket | 拦截 mbNetHookRequest |
| UI 框架 | CEF (ExuiKrnln) | Hook mbNetSetWebsocketCallback |
| 内核操作 | ZwAllocateVirtualMemory | 无 (已被 KG 使用) |

## 注意事项

本工具包仅用于安全研究和学习目的。
使用前请确保遵守相关法律法规。
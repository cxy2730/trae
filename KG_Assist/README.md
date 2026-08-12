# KG Assist - 全新辅助工具

基于 KG.exe 逆向成果，**从零重写的独立辅助工具**。

## 特性

- **零外部依赖**：仅使用 Win32 API + NT API
- **运行时动态解析**：所有敏感 API 动态加载，避免静态特征
- **内置反检测**：IAT Hook、API 伪装、行为模拟
- **模块化架构**：易于扩展和维护
- **多种注入方式**：手动映射、APC 注入、经典注入

## 架构

```
KG_Assist/
├── include/
│   └── common.h          # 通用定义、API 原型、数据结构
├── src/
│   ├── memory.c          # 内存操作 (读写、特征码扫描)
│   ├── antidetect.c      # 反检测 (IAT Hook、API 伪装)
│   ├── process.c         # 进程操作 (枚举、句柄管理)
│   ├── injector.c        # 注入 (手动映射、APC、经典)
│   ├── core.c            # 核心逻辑 (ESP、自瞄框架)
│   └── main.c            # 入口点 (CLI、守护模式)
└── build.sh              # 构建脚本
```

## 编译

### Linux / WSL

```bash
# 安装 MinGW 编译器
sudo apt install mingw-w64

# 编译 (发布模式)
./build.sh

# 编译 (调试模式)
./build.sh debug
```

### Windows (MSVC)

```cmd
# 使用 Visual Studio 开发者命令行
cl /O2 /DNDEBUG src\main.c src\memory.c src\antidetect.c ^
   src\process.c src\injector.c src\core.c ^
   /Iinclude /Fe:KG_Assist.exe /link ws2_32.lib psapi.lib
```

## 使用

```bash
# 显示帮助
KG_Assist.exe --help

# 列出所有进程
KG_Assist.exe --list

# 附加到 LoL 进程
KG_Assist.exe --target "League of Legends.exe" --attach

# 注入 DLL 到目标进程
KG_Assist.exe --inject cheat.dll

# 守护模式 (自动检测并注入)
KG_Assist.exe --target "League of Legends.exe" --daemon

# 直接启动辅助
KG_Assist.exe --cheat
```

## 核心模块说明

### 内存操作 (memory.c)

- `KgReadMemory` / `KgWriteMemory` - 读写当前进程内存
- `KgReadProcessMemory` / `KgWriteProcessMemory` - 读写远程进程内存
- `KgAllocateMemory` / `KgFreeMemory` - 内存分配/释放
- `KgScanForPattern` - 全局特征码扫描
- `KgScanModuleForPattern` - 模块内特征码扫描
- `KgResolvePointerChain` - 指针链解析

### 反检测 (antidetect.c)

- `KgInstallAntiDebug` - 安装反调试 Hook
- `KgInstallAntiDetect` - 安装完整反检测
- `KgCanCallApi` / `KgWaitForApiCall` - API 调用节流
- `KgSpoofWindowTitle` / `KgSpoofWindowClass` - 窗口伪装

### 进程操作 (process.c)

- `KgEnumAllProcesses` - 枚举所有进程
- `KgFindProcess` - 按名称查找进程
- `KgOpenProcess` / `KgCloseProcess` - 句柄管理
- `KgEnumModules` - 枚举模块
- `KgFindModule` - 查找指定模块

### 注入 (injector.c)

- `KgManualMap` - 手动映射 DLL (最隐蔽)
- `KgInjectApc` - APC 注入
- `KgInjectClassic` - 经典 CreateRemoteThread 注入
- `KgAutoInject` - 自动选择最佳注入方式
- `KgWaitForProcessReady` - 等待进程就绪

### 核心逻辑 (core.c)

- `KgInitGameState` - 初始化游戏特征码
- `KgGetEntityList` - 获取实体列表
- `KgGetLocalPlayerInfo` - 获取本地玩家信息
- `KgCalcWorldToScreen` - 世界坐标转屏幕坐标
- `KgCheatMainLoop` - 辅助主循环框架

## 反检测机制

### 反调试 (IAT Hook)

```c
// Hook IsDebuggerPresent -> 返回 FALSE
BOOL WINAPI HookedIsDebuggerPresent(VOID) {
    return FALSE;
}

// Hook NtQueryInformationProcess -> 隐藏调试端口
// class 7 (ProcessDebugPort): 返回 0
// class 30 (ProcessDebugObjectHandle): 返回 NULL
// class 31 (ProcessDebugFlags): 返回 0
```

### API 调用伪装

- 运行时动态解析所有敏感 API
- API 调用节流 (避免频率异常检测)
- 间接调用链 (避免直接调用特征)

### 特征规避

- 字符串运行时解密
- 代码变异 (指令形态变换)
- 代码加密 + 运行时解密

## 特征码更新

游戏版本更新后，需要更新特征码定位。编辑 `core.c` 中的模式定义：

```c
static const KgPattern LolEntityListPattern = {
    "LoL_EntityList",
    { 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, ... },  // 替换为新版特征码
    "xx????...",
    12,
    0,
    FALSE,
    TRUE
};
```

## 技术原理

### 两级间接调用机制

KG.exe 使用自定义导入解析器：

```
.text call [0x4A258C]     (.text 段分发表)
       ↓
.rdata 0x4A258C -> 0x02BA505E  (分发表指向 IAT 槽)
       ↓
.data 0x02BA505E -> 真实函数地址  (运行时解析)
```

本工具直接使用标准 Win32 API，无此复杂解析机制。

### 指针链解析

```c
// 示例: 从模块基址解析多层指针
u32 playerPtr = KgResolvePointerChain(
    moduleBase + 0x1234,  // 基址
    { 0x10, 0x20, 0x30 },  // 偏移链
    3  // 深度
);
```

## 安全提示

本工具仅用于安全研究和学习目的。使用本工具可能违反相关软件的使用协议和法律法规。使用者需自行承担使用后果。

## 文件结构

```
KG_Assist/
├── include/
│   └── common.h
├── src/
│   ├── main.c
│   ├── memory.c
│   ├── antidetect.c
│   ├── process.c
│   ├── injector.c
│   └── core.c
├── build.sh
└── README.md
```

## 与 KG 原版对比

| 特性 | KG 原版 | KG Assist |
|------|---------|-----------|
| 代码规模 | 44MB, 高熵 | ~100KB, 干净 |
| 反检测 | 静态嵌入 | 运行时加载 |
| 特征码 | 硬编码 | 可配置 |
| 依赖 | ACE, ExuiKrnln | 仅 Win32 API |
| 可维护性 | 低 | 高 |
| 扩展性 | 低 | 高 |
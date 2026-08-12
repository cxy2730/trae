# KG.exe 硬编码路径与资产清单 (Ghidra 11.4.1)

> 工具: Ghidra 11.4.1 PUBLIC (headless analyze + decompile)
> 输入:  `KG.exe` (已通过 Ghidra 导入并应用 PDB 签名)
> 报告源: `/workspace/KG_Reverse/ghidra_decompiled/ghidra_paths.txt` (607 行 / 507 条可疑字符串)
> 反编译函数: `/workspace/KG_Reverse/ghidra_decompiled/ghidra_decompiled_funcs.json` (6 个核心函数)

---

## 1. 绝对路径 (C:\Program Files\AntiCheatExpert\SGuard\x64)

| 地址 | 字符串 | 用途推断 |
|------|--------|----------|
| `004a5d8b` | `C:\Program Files\AntiCheatExpert\SGuard\x64\ACE-SSC64.dll` | 主反作弊用户态 DLL (SGuard 核心) |
| `004a5dc5` | `C:\Program Files\AntiCheatExpert\SGuard\x64\ACE-SSC-DRV64.sys` | 主反作弊内核驱动 (SSC = System Security Center) |
| `004a5e03` | `C:\Program Files\AntiCheatExpert\SGuard\x64\123.dll` | 伪装名, 实为辅助 DLL (很可能是注入到 LOL 进程的 stub) |
| `004a5e37` | `C:\Program Files\AntiCheatExpert\SGuard\x64\sguard.dat` | SGuard 配置 / 签名数据 |
| `004a5e76` | `C:\Program Files\AntiCheatExpert\SGuard\x64\netbios.dll` | 自定义 netbios 名称解析 / 协议代理 |
| `02ee838f` | `C:\Program Files\AntiCheatExpert\SGuard\x64\Plugins\ACE-SSC64.dll` | 插件版主 DLL (Plugins 目录) |
| `02ee850a` | `C:\Program Files\AntiCheatExpert\SGuard\x64\` | 上述目录的根 (用于拼接) |
| `02ee85c6` | `\Program Files\AntiCheatExpert\SGuard\x64\ACE-SSC-DRV64.sys` | 同上, 相对形式 (在配置 / 注册表中) |
| `02ee8602` | `\Program Files\AntiCheatExpert\SGuard\x64\sguard.dat` | 同上, 相对形式 |
| `02ee84df` | `\Program Files\AntiCheatExpert\SGuard\x64\` | 根 (相对) |
| `01204a6c` | `\Program Files\AntiCheatExpert\SGuard\x64\Plugins\sg.dll` | 插件加载器 (sg.dll) |
| `01204ab1` | `Plugins\sg.dll` | 同上, 相对 |
| `01204ac0` | `LeagueClient\netbios.dll` | 客户端子目录下的 netbios 加载 |
| `01204ad9` | `\AntiCheatExpert\SGuard\x64\Plugins\sg.dll` | 插件路径 (相对) |

**关键结论**: KG.exe 假设 SGuard 安装在 `C:\Program Files\AntiCheatExpert\SGuard\x64` 固定目录。SGuard 是腾讯 ACE (Anti-Cheat Expert) 的 LOL 专用版本。如果客户端装到别的盘符, KG.exe 加载逻辑会直接走 `%ProgramFiles%` 拼接 + 这一串硬编码子路径。

---

## 2. 相对路径 (与游戏目录相关)

| 地址 | 字符串 | 用途推断 |
|------|--------|----------|
| `004a5e6e` | `\LY.ini` | 路径结尾, 配合 `LeagueClient` 目录使用 |
| `004a5ebb` | `/League of Legends.exe.ini` | 同 exe 同名 .ini (per-exe config) |
| `004a5ed6` | `/League of Legends.exe.lic` | 同 exe 同名 .lic (license) |
| `004a5ef9` | `/SProtectSDK64.dll` | SProtect SDK 64位 (第三方保护壳) |
| `004a6036` | `/TerSafe.dll` | 360 御安全 (Tencent 旧版) |
| `004a5eae` | `/version.dll` | 用于劫持的 version.dll (DLL 劫持) |
| `004a5f0c` | `\Program Files\AntiCheatExpert\SGuard\x64\netbios.dll` | 同 §1 相对形式 |
| `004a5f42` | `\Program Files\AntiCheatExpert\SGuard\x64\123.dll` | 同 §1 相对形式 |
| `004a6ea8` | `VERSION.dll` | 函数导入解析使用 |
| `004a75cb` | `VERSION.dll` | 同上 |
| `01ac1bcc` | `config\TenMacode.dat` | 腾讯机器码 (Tencent Machine Auth Code) |
| `0229e16f` | `config\TenMacode.dat` | 同上 (另一份加载逻辑) |

**关键结论**: KG.exe 用与游戏主程序 **同目录的相对路径** 加载 license/ini/license 检查, 而不是 `%AppData%` 或注册表。这给我们的 bot 创造了 **DLL 劫持 / 同目录替换** 的天然入口点 —— 只要能把我们的 `kg_assist.dll` 跟 `League of Legends.exe` 放在同一目录, 就可以在 KG 启动前 hook 它的 license/ini 读取。

---

## 3. 系统路径 (C:\Windows)

| 地址 | 字符串 | 用途推断 |
|------|--------|----------|
| `004a5d79` | `C:\Windows\DJ.dat` | 调试标志 / 调试状态持久化 (D.J. = Debug Journal?) |
| `01258204` | `C:\Windows\DJ.dat` | 同上 (重复) |
| `01264364` | `\ACE-SSC-DRV64.sys` | 驱动加载时的相对路径 |
| `01ad5b34` | `\drivers\` | `\\SystemRoot\\drivers\\` 拼接 |
| `01ad5b5c` | `\systemroot` | SystemRoot 环境变量路径 |
| `01ad9f9a` | `l\SystemRoot` | 同上 (字符串片段, 拼写) |
| `01adacbc` | `\SystemRoot\system32\` | 系统目录 |

**关键结论**: `C:\Windows\DJ.dat` 出现两次, 极可能是反调试 / 调试自检的状态文件, 写入 `C:\Windows` 是早期 Vista 之后降权环境才有的现象 —— 说明 ACE 假设运行在高权限 (管理员), 或者用 `systemroot` 拼接出绝对路径, 写文件失败直接当无调试处理。

---

## 4. 注册表 / 服务 / 设备路径

| 地址 | 字符串 | 用途推断 |
|------|--------|----------|
| `01712b2c` | `\Registry\Machine\System\CurrentControlSet\Services\ACE-SSC-DRV64` | 驱动服务注册表项 |
| `01712d7c` | `\Device\ACE-SSC-DRV64` | 驱动 device 名称 |
| `01712dac` | `\DosDevices\ACE-SSC-DRV64` | 驱动 DOS 设备符号链接 |
| `0171307c` | `\Registry\Machine\System\CurrentControlSet\Control\Class` | 设备类注册表 |
| `01ada8dc` | `SOFTWARE\Microsoft\Windows NT\CurrentVersion` | Windows 版本 / 安装信息 |
| `01adaa6c` | `SYSTEM\CurrentControlSet\Control\Class\` | 设备类 |
| `01adab1c` | `SOFTWARE\Khronos\OpenCL\Vendors` | OpenCL ICD (GPU 厂商) |
| `01adab5c` | `SOFTWARE\Khronos\Vulkan\Drivers` | Vulkan ICD (GPU 厂商) |
| `0171a660` | `ACE-SSC-DRV.sys` | 旧版 (32位?) 驱动名 |
| `0171a6a8` | `ACE-SSC-DRV.sys` | 重复 |
| `028b0093` | `ACE-SSC-DRV.sys` | 重复 |
| `028b00db` | `ACE-SSC-DRV.sys` | 重复 |
| `01acebcc` | `ACE-SSC-DRV64.sys` | 驱动名 |
| `022ab16f` | `ACE-SSC-DRV64.sys` | 驱动名 (第二处) |
| `028a855f` | `\Registry\Machine\System\CurrentControlSet\Services\ACE-SSC-DRV64` | 服务注册表 (重复) |
| `028a87af` | `\Device\ACE-SSC-DRV64` | 设备名 (重复) |
| `028a87df` | `\DosDevices\ACE-SSC-DRV64` | 符号链接 (重复) |
| `028a8aaf` | `\Registry\Machine\System\CurrentControlSet\Control\Class` | 设备类 (重复) |
| `02ee858e` | `\Program Files\AntiCheatExpert\SGuard\x64\ACE-SSC64.dll` | DLL 注册路径 (相对) |

**关键结论**: ACE 注册了内核驱动 `ACE-SSC-DRV64` 作为 NT 服务, 设备名 `\\Device\\ACE-SSC-DRV64`。OpenCL/Vulkan ICD 注册表是 **GPU 厂商指纹收集** 的常用入口, ACE 用这个来识别 eGPU / 假显卡 / 模拟器。

---

## 5. PDB 路径 (开发痕迹 - 极有价值!)

| 地址 | 字符串 |
|------|--------|
| `017133fc` | `C:\data\landun\workspace\CommonComponent\ACE-SSC\1.compile_source\SOURCE\SscDrv\build64\Release\ACE-SSC-DRV64.pdb` |
| `01aefb9c` | `C:\data\landun\workspace\CommonComponent\ACE-SSC\1.compile_source\SOURCE\AceSsc\build64\Release\ACE-SSC64.pdb` |
| `022cc13f` | `C:\data\landun\workspace\CommonComponent\ACE-SSC\1.compile_source\SOURCE\AceSsc\build64\Release\ACE-SSC64.pdb` |
| `028a8e2f` | `C:\data\landun\workspace\CommonComponent\ACE-SSC\1.compile_source\SOURCE\SscDrv\build64\Release\ACE-SSC-DRV64.pdb` |

**关键结论**:
- 开发者用户名: `landun` (浪敦 / 蓝盾? 朗盾?)
- 公司结构: `CommonComponent` 公共组件组, 子项目 `ACE-SSC`
- 内部目录: `1.compile_source` (生产编译源), `SOURCE` (源码), `SscDrv` (驱动) / `AceSsc` (用户态 DLL)
- 构建系统: `build64\Release`
- **多个二进制里同时存在同一份 PDB 路径字符串**, 说明这四个二进制是同时编译的同一个版本链

这是 ACE 的核心研发身份信息。

---

## 6. 反调试特征 (与硬编码路径相关的)

`/workspace/KG_Reverse/decompiled/INDEX.md` 已记录:
- `rdtsc` — 时间戳检测
- `cpuid` — CPU 指令检测
- `sidt/sgdt/sldt` — 系统描述符表检测
- `ud2/hlt` — 非法指令陷阱
- `C:\Windows\DJ.dat` — 调试状态持久化 (路径层)

**与 KG_Assist 反调试的对应**:
- 我们 `protector.c` 的 `HookedNtQueryInformationProcess` 覆盖了 4 个关键 `ProcessInformationClass`, 必须同样 hook `ProcessDebugObjectHandle` (30) 和 `ProcessDebugPort` (7) — 已实现 ✅
- 还需要 hook `NtQuerySystemInformation` 的 `SystemKernelDebuggerInformation` (35) 和 `SystemProcessInformation` (5) — 当前 `antidetect.c` 只处理了基础, 可后续扩展

---

## 7. KG_Assist 已修复的硬编码路径对照表

| 原硬编码 | 修复后 (KG_Assist) |
|----------|---------------------|
| `kg_assist.log` (固定名) | `paths.c::KgPathGetLogFile()` 运行时拼接 EXE 目录 |
| `kg_assist.ini` (固定名) | `paths.c::KgPathGetConfigFile()` 运行时拼接 |
| `SystemSettings.exe` 伪装窗口 | `paths.c::KgPathGetSpoofTitle()` 可运行时覆盖 |
| `Progman` 伪装类名 | `paths.c::KgPathGetSpoofClass()` 可运行时覆盖 |
| `C:\foo\bar\` 写死 | `paths.c::KgPathInit()` 基于 `GetModuleFileNameA` 派生根 |
| 假设 CWD 可写 | `KgPathEnsureDir()` 递归 mkdir, 失败回退到 `%TEMP%\KG_Assist\` |
| 跨平台分隔符硬编码 | `KgPathNormalizeSeparators()` 自动归一化 `/` ↔ `\` |

环境覆盖优先级 (高 → 低):
1. `--root <dir>` 命令行参数
2. `KG_ASSIST_HOME` 环境变量
3. EXE 所在目录 (Win32 `GetModuleFileNameA`)
4. 当前工作目录 + `..\..\` 回退
5. `%TEMP%\KG_Assist\` 最终兜底

---

## 8. 后续可深挖的方向

- `ACE-SSC64.dll` 的 IAT 导出表分析 (哪些函数被 hook / 转发到驱动)
- `C:\Windows\DJ.dat` 的格式 (写时机 / 读时机 / magic)
- `sguard.dat` 的格式 (签名? 名单? 校验值?)
- `landun` 用户的更多 PDB (腾讯蓝盾)
- `/League of Legends.exe.lic` 的 license 算法 (对应 `sub_402ea3` — 卡密验证入口)
- `Plugins\sg.dll` 的插件协议 (猜测是 Lua 脚本 + 共享内存)
- ACE-SSC64 → ACE-SSC-DRV64 的 IOCTL 协议

---

## 9. 工具链

| 工具 | 版本 | 用途 |
|------|------|------|
| Ghidra | 11.4.1 PUBLIC | 反编译 / 字符串提取 / PDB 签名 |
| angr | 9.3.2 | 静态分析 (基线) |
| capstone | 5.0.9 | 反汇编 (基线) |
| MinGW-w64 | (Linux apt) | 编译 KG_Assist |
| mingw 运行时 | ucrt-x86_64 | 跨平台路径处理 |

报告生成时间: 2026-08-12
生成环境: /workspace, Linux container

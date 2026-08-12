/**
 * KG Assist - 全新辅助工具
 * 通用头文件: 类型定义、宏、NT API 原型
 *
 * 设计原则:
 * - 零外部依赖 (仅 Win32 API + NT API)
 * - 运行时动态解析所有敏感 API
 * - 内置反检测机制
 * - 模块化架构
 */

#ifndef KG_COMMON_H
#define KG_COMMON_H

#include <windows.h>
#include <tlhelp32.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

/* 确保 PHMODULE 类型定义 (MinGW 兼容性) */
#ifndef PHMODULE
typedef HMODULE* PHMODULE;
#endif

/* DWORD 格式化宏 (MinGW 兼容: DWORD = unsigned long) */
#ifndef PRI_DWORD
#define PRI_DWORD "lu"
#endif

/* ============================================================
 * 基础类型定义
 * ============================================================ */

// 无符号整数
typedef unsigned char   u8;
typedef unsigned short  u16;
typedef unsigned int    u32;
typedef unsigned long long u64;

// 有符号整数
typedef signed char     s8;
typedef signed short    s16;
typedef signed int      s32;
typedef signed long long s64;

// 可变参数
typedef void*           ptr;

/* ============================================================
 * 调试级别
 * ============================================================ */

#define KG_LOG_NONE     0
#define KG_LOG_ERROR    1
#define KG_LOG_WARN     2
#define KG_LOG_INFO     3
#define KG_LOG_DEBUG    4

// 全局日志级别 (发布版本设为 KG_LOG_ERROR)
#ifndef KG_LOG_LEVEL
#define KG_LOG_LEVEL    KG_LOG_INFO
#endif

/* ============================================================
 * 日志系统 (双输出: 终端 + 文件)
 * ============================================================ */

// 日志文件名 (运行时由 paths.c 解析, 此处仅作默认名)
#define KG_LOG_FILE_DEFAULT  "kg_assist.log"

// 配置文件名 (运行时由 paths.c 解析)
#define KG_CONFIG_FILE_DEFAULT "kg_assist.ini"

// 日志文件句柄 (在 logger.c 中定义)
extern FILE* g_LogFile;

// 日志文件操作
BOOL KgLogInit(VOID);
VOID KgLogClose(VOID);

// 核心日志写入函数
VOID KgLogWrite(const char* level, const char* fmt, ...);

/* 日志宏: 同时输出到终端和日志文件 */
#if KG_LOG_LEVEL >= KG_LOG_ERROR
#define KG_ERROR(fmt, ...) \
    do { printf("[错误] " fmt "\n", ##__VA_ARGS__); \
         KgLogWrite("[错误]", fmt, ##__VA_ARGS__); } while(0)
#else
#define KG_ERROR(fmt, ...) ((void)0)
#endif

#if KG_LOG_LEVEL >= KG_LOG_WARN
#define KG_WARN(fmt, ...) \
    do { printf("[警告] " fmt "\n", ##__VA_ARGS__); \
         KgLogWrite("[警告]", fmt, ##__VA_ARGS__); } while(0)
#else
#define KG_WARN(fmt, ...) ((void)0)
#endif

#if KG_LOG_LEVEL >= KG_LOG_INFO
#define KG_INFO(fmt, ...) \
    do { printf("[信息] " fmt "\n", ##__VA_ARGS__); \
         KgLogWrite("[信息]", fmt, ##__VA_ARGS__); } while(0)
#else
#define KG_INFO(fmt, ...) ((void)0)
#endif

#if KG_LOG_LEVEL >= KG_LOG_DEBUG
#define KG_DEBUG(fmt, ...) \
    do { printf("[调试] " fmt "\n", ##__VA_ARGS__); \
         KgLogWrite("[调试]", fmt, ##__VA_ARGS__); } while(0)
#else
#define KG_DEBUG(fmt, ...) ((void)0)
#endif

/* ============================================================
 * 常量定义
 * ============================================================ */

// 内存保护常量
#define KG_MEM_COMMIT           0x1000
#define KG_MEM_RESERVE          0x2000
#define KG_MEM_DECOMMIT         0x4000
#define KG_MEM_RELEASE          0x8000

#define KG_PAGE_READONLY        0x02
#define KG_PAGE_READWRITE       0x04
#define KG_PAGE_EXECUTE_READ    0x20
#define KG_PAGE_EXECUTE_READWRITE 0x40

// 进程访问权限
#define KG_PROCESS_VM_READ      0x0010
#define KG_PROCESS_VM_WRITE     0x0020
#define KG_PROCESS_VM_OPERATION 0x0008
#define KG_PROCESS_QUERY_INFO   0x0400
#define KG_PROCESS_QUERY_LIMITS 0x1000
#define KG_PROCESS_DUP_HANDLE   0x0040
#define KG_PROCESS_CREATE_THREAD 0x0002
#define KG_PROCESS_ALL_ACCESS   0x1FFFFF

// NT 信息类
#define KG_PROCESS_DEBUG_PORT           7
#define KG_PROCESS_DEBUG_OBJECT_HANDLE  30
#define KG_PROCESS_DEBUG_FLAGS          31

// 最大缓冲区
#define KG_MAX_PATH             260
#define KG_MAX_MODULES          512
#define KG_MAX_SCAN_RESULTS     4096
#define KG_MAX_PATTERN_LEN      256

// LoL 进程名
#define KG_LOL_PROCESS_NAME     "League of Legends.exe"
#define KG_VANGUARD_PROCESS     "vgc.exe"
#define KG_CLIENT_PROCESS       "LeagueClient.exe"

/* ============================================================
 * NT API 函数原型 (运行时动态解析)
 * ============================================================ */

// ntdll.dll - 进程信息查询
typedef NTSTATUS (NTAPI* NtQueryInformationProcess_t)(
    HANDLE ProcessHandle,
    ULONG ProcessInformationClass,
    PVOID ProcessInformation,
    ULONG ProcessInformationLength,
    PULONG ReturnLength
);

// ntdll.dll - 内存操作
typedef NTSTATUS (NTAPI* NtAllocateVirtualMemory_t)(
    HANDLE ProcessHandle,
    PVOID* BaseAddress,
    ULONG_PTR ZeroBits,
    PSIZE_T RegionSize,
    ULONG AllocationType,
    ULONG Protect
);

typedef NTSTATUS (NTAPI* NtProtectVirtualMemory_t)(
    HANDLE ProcessHandle,
    PVOID* BaseAddress,
    PSIZE_T RegionSize,
    ULONG NewProtect,
    PULONG OldProtect
);

typedef NTSTATUS (NTAPI* NtReadVirtualMemory_t)(
    HANDLE ProcessHandle,
    PVOID BaseAddress,
    PVOID Buffer,
    ULONG Size,
    PULONG NumberOfBytesRead
);

typedef NTSTATUS (NTAPI* NtWriteVirtualMemory_t)(
    HANDLE ProcessHandle,
    PVOID BaseAddress,
    PVOID Buffer,
    ULONG Size,
    PULONG NumberOfBytesWritten
);

typedef NTSTATUS (NTAPI* NtUnmapViewOfSection_t)(
    HANDLE ProcessHandle,
    PVOID BaseAddress
);

// kernel32.dll - 动态 API 解析
typedef FARPROC (WINAPI* GetProcAddress_t)(HMODULE, LPCSTR);
typedef HMODULE (WINAPI* LoadLibraryA_t)(LPCSTR);
typedef HMODULE (WINAPI* LoadLibraryW_t)(LPCWSTR);
typedef HMODULE (WINAPI* GetModuleHandleA_t)(LPCSTR);
typedef HANDLE (WINAPI* GetCurrentProcess_t)(VOID);

// 反调试检测 API (需要被 Hook)
typedef BOOL (WINAPI* IsDebuggerPresent_t)(VOID);
typedef BOOL (WINAPI* CheckRemoteDebuggerPresent_t)(HANDLE, PBOOL);
typedef void (WINAPI* OutputDebugStringA_t)(LPCSTR);
typedef void (WINAPI* OutputDebugStringW_t)(LPCWSTR);
typedef DWORD (WINAPI* GetTickCount_t)(VOID);
typedef BOOL (WINAPI* QueryPerformanceCounter_t)(LARGE_INTEGER*);

// 进程操作 API
typedef HANDLE (WINAPI* OpenProcess_t)(DWORD, BOOL, DWORD);
typedef BOOL (WINAPI* CloseHandle_t)(HANDLE);
typedef BOOL (WINAPI* ReadProcessMemory_t)(HANDLE, LPCVOID, LPVOID, SIZE_T, PSIZE_T);
typedef BOOL (WINAPI* WriteProcessMemory_t)(HANDLE, LPVOID, LPCVOID, SIZE_T, PSIZE_T);
typedef DWORD (WINAPI* GetModuleFileNameExA_t)(HANDLE, HMODULE, LPSTR, DWORD);
typedef HMODULE (WINAPI* GetModuleHandleExA_t)(DWORD, LPCSTR, PHMODULE);

// 进程枚举 API
typedef HANDLE (WINAPI* CreateToolhelp32Snapshot_t)(DWORD);
typedef BOOL (WINAPI* Process32First_t)(HANDLE, LPPROCESSENTRY32);
typedef BOOL (WINAPI* Process32Next_t)(HANDLE, LPPROCESSENTRY32);
typedef BOOL (WINAPI* Module32First_t)(HANDLE, LPMODULEENTRY32);
typedef BOOL (WINAPI* Module32Next_t)(HANDLE, LPMODULEENTRY32);
typedef BOOL (WINAPI* Thread32First_t)(HANDLE, LPTHREADENTRY32);
typedef BOOL (WINAPI* Thread32Next_t)(HANDLE, LPTHREADENTRY32);

// 内存操作 API
typedef LPVOID (WINAPI* VirtualAlloc_t)(LPVOID, SIZE_T, DWORD, DWORD);
typedef BOOL (WINAPI* VirtualFree_t)(LPVOID, SIZE_T, DWORD);
typedef BOOL (WINAPI* VirtualProtect_t)(LPVOID, SIZE_T, DWORD, PDWORD);
typedef BOOL (WINAPI* VirtualQuery_t)(LPCVOID, PMEMORY_BASIC_INFORMATION, SIZE_T);
typedef DWORD (WINAPI* GetModuleSize_t)(HMODULE);

/* ============================================================
 * 全局 NT API 函数指针 (运行时加载)
 * ============================================================ */

typedef struct {
    // ntdll.dll
    NtQueryInformationProcess_t     NtQueryInformationProcess;
    NtAllocateVirtualMemory_t      NtAllocateVirtualMemory;
    NtProtectVirtualMemory_t       NtProtectVirtualMemory;
    NtReadVirtualMemory_t          NtReadVirtualMemory;
    NtWriteVirtualMemory_t         NtWriteVirtualMemory;
    NtUnmapViewOfSection_t         NtUnmapViewOfSection;
    
    // kernel32.dll
    GetProcAddress_t               GetProcAddress;
    LoadLibraryA_t                 LoadLibraryA;
    LoadLibraryW_t                 LoadLibraryW;
    GetModuleHandleA_t            GetModuleHandleA;
    GetCurrentProcess_t            GetCurrentProcess;
    
    // 反调试 API (用于调用原始函数)
    IsDebuggerPresent_t            pOrigIsDebuggerPresent;
    CheckRemoteDebuggerPresent_t   pOrigCheckRemoteDebuggerPresent;
    OutputDebugStringA_t           pOrigOutputDebugStringA;
    OutputDebugStringW_t           pOrigOutputDebugStringW;
    GetTickCount_t                 pOrigGetTickCount;
    QueryPerformanceCounter_t      pOrigQueryPerformanceCounter;
    
    // 进程操作
    OpenProcess_t                  OpenProcess;
    CloseHandle_t                  CloseHandle;
    ReadProcessMemory_t            ReadProcessMemory;
    WriteProcessMemory_t           WriteProcessMemory;
    
    // 进程枚举
    CreateToolhelp32Snapshot_t     CreateToolhelp32Snapshot;
    Process32First_t               Process32First;
    Process32Next_t                Process32Next;
    Module32First_t                Module32First;
    Module32Next_t                 Module32Next;
    
    // 内存操作
    VirtualAlloc_t                 VirtualAlloc;
    VirtualFree_t                  VirtualFree;
    VirtualProtect_t               VirtualProtect;
    VirtualQuery_t                 VirtualQuery;
} KgApiTable;

extern KgApiTable g_Api;

/* ============================================================
 * 数据结构
 * ============================================================ */

// 模块信息
typedef struct {
    char    name[KG_MAX_PATH];
    u32     baseAddress;
    u32     sizeOfImage;
    u32     entryPoint;
    wchar_t wideName[KG_MAX_PATH];
} KgModuleInfo;

// 进程信息
typedef struct {
    DWORD   pid;
    DWORD   parentPid;
    wchar_t name[MAX_PATH];
    wchar_t exePath[MAX_PATH];
    BOOL    is64Bit;
    HANDLE  handle;
    DWORD   accessRights;
    KgModuleInfo modules[KG_MAX_MODULES];
    u32     moduleCount;
} KgProcessInfo;

// 内存区域信息
typedef struct {
    u32     baseAddress;
    u32     regionSize;
    DWORD   protect;
    DWORD   state;
    BOOL    isCommitted;
    BOOL    isExecutable;
} KgMemoryRegion;

// 特征码扫描结果
typedef struct {
    u32     address;
    u32     moduleBase;
    u32     offsetInModule;
    float   confidence;
} KgScanResult;

// 特征码模式
typedef struct {
    char    name[64];
    u8      pattern[KG_MAX_PATTERN_LEN];
    char    mask[KG_MAX_PATTERN_LEN];  // 'x'=匹配, '?'=通配
    u32     length;
    u32     expectedOffset;
    BOOL    isData;
    BOOL    isCode;
} KgPattern;

// 游戏数据结构 (LoL 相关)
typedef struct {
    // 实体相关
    u32     entityListPtr;
    u32     entityListSize;
    u32     localPlayerPtr;
    u32     playerCount;
    
    // 坐标
    float   localPos[3];   // {x, y, z}
    float   enemyPositions[256][3];
    
    // 游戏状态
    u32     gameState;     // 0=大厅, 1=加载, 2=游戏中
    float   gameTime;
    
    // 血量
    float   localHealth;
    float   localMaxHealth;
    float   enemyHealth[256];
    float   enemyMaxHealth[256];
    
    // 队伍
    u8      localTeam;
    u8      enemyTeam[256];
    
    // 可视
    BOOL    isVisible[256];
    float   distance[256];
} KgGameState;

// 辅助配置结构
typedef struct {
    BOOL espEnabled;          // ESP 透视
    BOOL aimbotEnabled;       // 自瞄
    BOOL speedHackEnabled;    // 加速
    BOOL infiniteAmmoEnabled; // 无限弹药
    BOOL noRecoilEnabled;     // 无后坐力
    float aimbotSpeed;        // 自瞄速度 (0.1-1.0)
    float espLineThickness;   // ESP 线宽
} KgCheatConfig;

/* ============================================================
 * 功能函数原型
 * ============================================================ */

// 初始化/清理
BOOL KgInit(VOID);
VOID KgCleanup(VOID);

// API 加载
BOOL KgLoadApis(VOID);

// 进程操作
BOOL KgFindProcess(const char* name, KgProcessInfo* info);
s32  KgFindAllProcesses(const char* name, KgProcessInfo* results, u32 maxResults);
s32  KgEnumAllProcesses(KgProcessInfo* processes, u32 maxCount);
BOOL KgOpenProcess(KgProcessInfo* info, DWORD accessRights);
VOID KgCloseProcess(KgProcessInfo* info);
BOOL KgEnumModules(KgProcessInfo* info);
KgModuleInfo* KgFindModule(KgProcessInfo* info, const char* name);
KgModuleInfo* KgGetMainModule(KgProcessInfo* info);
VOID KgDumpProcessInfo(const KgProcessInfo* info);

// 内存操作
BOOL KgReadMemory(u32 address, void* buffer, u32 size);
BOOL KgWriteMemory(u32 address, const void* buffer, u32 size);
BOOL KgReadProcessMemory(HANDLE proc, u32 address, void* buffer, u32 size);
BOOL KgWriteProcessMemory(HANDLE proc, u32 address, const void* buffer, u32 size);
u32  KgAllocateMemory(u32 size, DWORD protect);
BOOL KgFreeMemory(u32 address);

// 特征码扫描
s32  KgScanForPattern(const KgPattern* pattern, KgScanResult* results, u32 maxResults);
s32  KgScanModuleForPattern(KgModuleInfo* module, const KgPattern* pattern, 
                            KgScanResult* results, u32 maxResults);
u32  KgResolvePointerChain(u32 base, const u32* offsets, u32 depth);

// 反检测
BOOL KgInstallAntiDebug(VOID);
BOOL KgInstallAntiDetect(VOID);
BOOL KgSpoofApiCalls(VOID);
BOOL KgSpoofWindowTitle(const char* fakeTitle);
BOOL KgSpoofWindowClass(const char* fakeClassName);
BOOL KgCanCallApi(s32 apiIndex);
VOID KgWaitForApiCall(s32 apiIndex);

// 核心防封 (Protector) - 新增
BOOL KgSpoofSelfWindow(VOID);
BOOL KgHideHandlesFromProcess(HANDLE hTargetProcess);
BOOL KgInstallNtHook(VOID);
BOOL KgInitIntegrity(VOID);
BOOL KgVerifyIntegrity(VOID);
VOID KgObfuscateString(const char* plain, char* obfuscated, u32 size);
VOID KgDeobfuscateString(const char* obfuscated, char* plain, u32 size);
FARPROC KgGetObfuscatedProcAddress(const char* dllName, const char* funcName);
BOOL KgDetectVirtualMachine(VOID);
BOOL KgInstallFullProtection(VOID);

// 注入
BOOL KgManualMap(HANDLE proc, const char* dllPath);
BOOL KgInjectApc(HANDLE proc, const char* dllPath);
BOOL KgInjectClassic(HANDLE proc, const char* dllPath);
BOOL KgAutoInject(HANDLE proc, const char* dllPath);
BOOL KgWaitForProcessReady(HANDLE proc, DWORD timeoutMs);

// 核心辅助
BOOL KgInitGameState(KgGameState* state);
BOOL KgUpdateGameState(KgGameState* state);
BOOL KgGetLocalPlayerInfo(KgGameState* state);
BOOL KgGetEntityList(KgGameState* state);
BOOL KgCalcWorldToScreen(KgGameState* state, int index, float* screenX, float* screenY);
VOID KgCheatMainLoop(VOID);

// 配置管理
const KgCheatConfig* KgGetConfig(VOID);
VOID KgSetConfig(BOOL esp, BOOL aimbot, BOOL speed, BOOL ammo, BOOL recoil);
BOOL KgLoadConfig(const char* path);
BOOL KgSaveConfig(const char* path);

/* ============================================================
 * 路径解析模块 (paths.c)
 *   - 不依赖 CWD, 以 EXE 所在目录为根
 *   - 支持 KG_ASSIST_HOME 环境变量和 --root 命令行覆盖
 * ============================================================ */

BOOL   KgPathInit(const char* argv0);
const char* KgPathGetRoot(VOID);
const char* KgPathGetLogsDir(VOID);
const char* KgPathGetConfigDir(VOID);
const char* KgPathGetLogFile(VOID);
const char* KgPathGetLogBackupPrefix(VOID);
const char* KgPathGetConfigFile(VOID);
const char* KgPathGetSpoofTitle(VOID);
const char* KgPathGetSpoofClass(VOID);
VOID   KgPathSetLogFileName(const char* name);
VOID   KgPathSetConfigFileName(const char* name);
VOID   KgPathSetSpoofTitle(const char* t);
VOID   KgPathSetSpoofClass(const char* c);
BOOL   KgPathResolve(const char* rel, char* out, u32 outSize);
BOOL   KgPathEnsureDir(const char* absPath);

/* In-place path separator normalization ('/' -> '\\' on Windows). */
VOID   KgPathNormalizeSeparators(char* s);

/* Apply env-var overrides (KG_ASSIST_LOG/CONFIG/SPOOF_*) over the defaults.
 * Must be called after KgPathInit(). */
VOID   ApplyEnvOverrides(VOID);

/* ============================================================
 * 内联辅助函数
 * ============================================================ */

// 检查指针是否有效
static __inline BOOL KgIsValidPtr(u32 ptr) {
    return (ptr > 0x10000 && ptr < 0x7FFFFFFF);
}

// 对齐值
static __inline u32 KgAlignUp(u32 value, u32 alignment) {
    return (value + alignment - 1) & ~(alignment - 1);
}

// 边界检查
static __inline BOOL KgInRange(u32 addr, u32 base, u32 size) {
    return (addr >= base && addr < base + size);
}

#endif /* KG_COMMON_H */
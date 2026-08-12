/**
 * KG Assist - 通用头文件
 * 零外部依赖: 仅 Win32 API
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

#ifndef PHMODULE
typedef HMODULE* PHMODULE;
#endif

/* ============================================================
 * 基础类型
 * ============================================================ */

typedef unsigned char       u8;
typedef unsigned short      u16;
typedef unsigned int        u32;
typedef unsigned long long  u64;
typedef signed char         s8;
typedef signed short        s16;
typedef signed int          s32;
typedef signed long long    s64;
typedef void*               ptr;

/* ============================================================
 * 常量
 * ============================================================ */

#define KG_MAX_PATH             260
#define KG_MAX_MODULES          512
#define KG_MAX_SCAN_RESULTS     4096
#define KG_MAX_PATTERN_LEN      256

#define KG_LOL_PROCESS_NAME     "League of Legends.exe"
#define KG_VANGUARD_PROCESS     "vgc.exe"
#define KG_CLIENT_PROCESS       "LeagueClient.exe"

/* 内存保护常量 (与 Win32 PAGE_* 一致, 保留 KG_ 前缀避免与系统宏冲突) */
#define KG_MEM_COMMIT                0x1000
#define KG_MEM_RESERVE               0x2000
#define KG_MEM_RELEASE               0x8000
#define KG_PAGE_EXECUTE_READWRITE    0x40

/* ============================================================
 * 日志 (只写文件, GUI 子系统无终端)
 * ============================================================ */

#ifndef KG_LOG_LEVEL
#define KG_LOG_LEVEL 1
#endif

#define KG_LOG_NONE  0
#define KG_LOG_ERROR 1
#define KG_LOG_WARN  2
#define KG_LOG_INFO  3
#define KG_LOG_DEBUG 4

extern FILE* g_LogFile;
BOOL  KgLogInit(VOID);
VOID  KgLogClose(VOID);
VOID  KgLogWrite(const char* level, const char* fmt, ...);

#if KG_LOG_LEVEL >= KG_LOG_ERROR
#define KG_ERROR(fmt, ...)  KgLogWrite("[错误]", fmt, ##__VA_ARGS__)
#else
#define KG_ERROR(fmt, ...) ((void)0)
#endif

#if KG_LOG_LEVEL >= KG_LOG_WARN
#define KG_WARN(fmt, ...)   KgLogWrite("[警告]", fmt, ##__VA_ARGS__)
#else
#define KG_WARN(fmt, ...) ((void)0)
#endif

#if KG_LOG_LEVEL >= KG_LOG_INFO
#define KG_INFO(fmt, ...)   KgLogWrite("[信息]", fmt, ##__VA_ARGS__)
#else
#define KG_INFO(fmt, ...) ((void)0)
#endif

#if KG_LOG_LEVEL >= KG_LOG_DEBUG
#define KG_DEBUG(fmt, ...)  KgLogWrite("[调试]", fmt, ##__VA_ARGS__)
#else
#define KG_DEBUG(fmt, ...) ((void)0)
#endif

/* ============================================================
 * NT API 原型
 * ============================================================ */

typedef NTSTATUS (NTAPI* NtQueryInformationProcess_t)(
    HANDLE, ULONG, PVOID, ULONG, PULONG);
typedef NTSTATUS (NTAPI* NtAllocateVirtualMemory_t)(
    HANDLE, PVOID*, ULONG_PTR, PSIZE_T, ULONG, ULONG);
typedef NTSTATUS (NTAPI* NtProtectVirtualMemory_t)(
    HANDLE, PVOID*, PSIZE_T, ULONG, PULONG);
typedef NTSTATUS (NTAPI* NtReadVirtualMemory_t)(
    HANDLE, PVOID, PVOID, ULONG, PULONG);
typedef NTSTATUS (NTAPI* NtWriteVirtualMemory_t)(
    HANDLE, PVOID, PVOID, ULONG, PULONG);
typedef NTSTATUS (NTAPI* NtUnmapViewOfSection_t)(HANDLE, PVOID);

typedef FARPROC (WINAPI* GetProcAddress_t)(HMODULE, LPCSTR);
typedef HMODULE (WINAPI* LoadLibraryA_t)(LPCSTR);
typedef HMODULE (WINAPI* LoadLibraryW_t)(LPCWSTR);
typedef HMODULE (WINAPI* GetModuleHandleA_t)(LPCSTR);
typedef HANDLE  (WINAPI* GetCurrentProcess_t)(VOID);
typedef BOOL    (WINAPI* IsDebuggerPresent_t)(VOID);
typedef BOOL    (WINAPI* CheckRemoteDebuggerPresent_t)(HANDLE, PBOOL);
typedef void    (WINAPI* OutputDebugStringA_t)(LPCSTR);
typedef void    (WINAPI* OutputDebugStringW_t)(LPCWSTR);
typedef DWORD   (WINAPI* GetTickCount_t)(VOID);
typedef BOOL    (WINAPI* QueryPerformanceCounter_t)(LARGE_INTEGER*);
typedef HANDLE  (WINAPI* OpenProcess_t)(DWORD, BOOL, DWORD);
typedef BOOL    (WINAPI* CloseHandle_t)(HANDLE);
typedef BOOL    (WINAPI* ReadProcessMemory_t)(HANDLE, LPCVOID, LPVOID, SIZE_T, PSIZE_T);
typedef BOOL    (WINAPI* WriteProcessMemory_t)(HANDLE, LPVOID, LPCVOID, SIZE_T, PSIZE_T);
typedef HANDLE  (WINAPI* CreateToolhelp32Snapshot_t)(DWORD);
typedef BOOL    (WINAPI* Process32First_t)(HANDLE, LPPROCESSENTRY32);
typedef BOOL    (WINAPI* Process32Next_t)(HANDLE, LPPROCESSENTRY32);
typedef BOOL    (WINAPI* Module32First_t)(HANDLE, LPMODULEENTRY32);
typedef BOOL    (WINAPI* Module32Next_t)(HANDLE, LPMODULEENTRY32);
typedef LPVOID  (WINAPI* VirtualAlloc_t)(LPVOID, SIZE_T, DWORD, DWORD);
typedef BOOL    (WINAPI* VirtualFree_t)(LPVOID, SIZE_T, DWORD);
typedef BOOL    (WINAPI* VirtualProtect_t)(LPVOID, SIZE_T, DWORD, PDWORD);
typedef BOOL    (WINAPI* VirtualQuery_t)(LPCVOID, PMEMORY_BASIC_INFORMATION, SIZE_T);

typedef struct {
    NtQueryInformationProcess_t     NtQueryInformationProcess;
    NtAllocateVirtualMemory_t      NtAllocateVirtualMemory;
    NtProtectVirtualMemory_t       NtProtectVirtualMemory;
    NtReadVirtualMemory_t          NtReadVirtualMemory;
    NtWriteVirtualMemory_t         NtWriteVirtualMemory;
    NtUnmapViewOfSection_t         NtUnmapViewOfSection;

    GetProcAddress_t               GetProcAddress;
    LoadLibraryA_t                 LoadLibraryA;
    LoadLibraryW_t                 LoadLibraryW;
    GetModuleHandleA_t             GetModuleHandleA;
    GetCurrentProcess_t            GetCurrentProcess;

    IsDebuggerPresent_t            pOrigIsDebuggerPresent;
    CheckRemoteDebuggerPresent_t   pOrigCheckRemoteDebuggerPresent;
    OutputDebugStringA_t           pOrigOutputDebugStringA;
    OutputDebugStringW_t           pOrigOutputDebugStringW;
    GetTickCount_t                 pOrigGetTickCount;
    QueryPerformanceCounter_t      pOrigQueryPerformanceCounter;

    OpenProcess_t                  OpenProcess;
    CloseHandle_t                  CloseHandle;
    ReadProcessMemory_t            ReadProcessMemory;
    WriteProcessMemory_t           WriteProcessMemory;

    CreateToolhelp32Snapshot_t     CreateToolhelp32Snapshot;
    Process32First_t               Process32First;
    Process32Next_t                Process32Next;
    Module32First_t                Module32First;
    Module32Next_t                 Module32Next;

    VirtualAlloc_t                 VirtualAlloc;
    VirtualFree_t                  VirtualFree;
    VirtualProtect_t               VirtualProtect;
    VirtualQuery_t                 VirtualQuery;
} KgApiTable;

extern KgApiTable g_Api;

/* ============================================================
 * 数据结构
 * ============================================================ */

typedef struct {
    char    name[KG_MAX_PATH];
    u32     baseAddress;
    u32     sizeOfImage;
    u32     entryPoint;
} KgModuleInfo;

typedef struct {
    DWORD   pid;
    DWORD   parentPid;
    wchar_t name[MAX_PATH];
    HANDLE  handle;
    DWORD   accessRights;
    KgModuleInfo modules[KG_MAX_MODULES];
    u32     moduleCount;
} KgProcessInfo;

typedef struct {
    u32     baseAddress;
    u32     regionSize;
    DWORD   protect;
    DWORD   state;
} KgMemoryRegion;

typedef struct {
    u32     address;
    u32     moduleBase;
    u32     offsetInModule;
    float   confidence;
} KgScanResult;

typedef struct {
    char    name[64];
    u8      pattern[KG_MAX_PATTERN_LEN];
    char    mask[KG_MAX_PATTERN_LEN];
    u32     length;
} KgPattern;

typedef struct {
    BOOL espEnabled;
    BOOL aimbotEnabled;
    BOOL speedHackEnabled;
    BOOL infiniteAmmoEnabled;
    BOOL noRecoilEnabled;
    float aimbotSpeed;
    float espLineThickness;
} KgCheatConfig;

typedef struct {
    u32     entityListPtr;
    u32     entityListSize;
    u32     localPlayerPtr;
    u32     playerCount;
    float   localPos[3];
    float   enemyPositions[256][3];
    u32     gameState;
    float   gameTime;
    float   localHealth;
    float   localMaxHealth;
    float   enemyHealth[256];
    float   enemyMaxHealth[256];
    u8      localTeam;
    u8      enemyTeam[256];
    BOOL    isVisible[256];
    float   distance[256];
} KgGameState;

/* ============================================================
 * 功能原型
 * ============================================================ */

BOOL KgInit(VOID);
VOID KgCleanup(VOID);
BOOL KgLoadApis(VOID);

BOOL KgFindProcess(const char* name, KgProcessInfo* info);
s32  KgEnumAllProcesses(KgProcessInfo* processes, u32 maxCount);
BOOL KgOpenProcess(KgProcessInfo* info, DWORD accessRights);
VOID KgCloseProcess(KgProcessInfo* info);
BOOL KgEnumModules(KgProcessInfo* info);
KgModuleInfo* KgFindModule(KgProcessInfo* info, const char* name);
KgModuleInfo* KgGetMainModule(KgProcessInfo* info);
VOID KgDumpProcessInfo(const KgProcessInfo* info);

BOOL KgReadMemory(u32 address, void* buffer, u32 size);
BOOL KgWriteMemory(u32 address, const void* buffer, u32 size);
BOOL KgReadProcessMemory(HANDLE proc, u32 address, void* buffer, u32 size);
BOOL KgWriteProcessMemory(HANDLE proc, u32 address, const void* buffer, u32 size);
u32  KgAllocateMemory(u32 size, DWORD protect);
BOOL KgFreeMemory(u32 address);
s32  KgScanForPattern(const KgPattern* pattern, KgScanResult* results, u32 maxResults);
s32  KgScanModuleForPattern(KgModuleInfo* module, const KgPattern* pattern,
                            KgScanResult* results, u32 maxResults);
u32  KgResolvePointerChain(u32 base, const u32* offsets, u32 depth);

BOOL KgInstallAntiDebug(VOID);
BOOL KgInstallAntiDetect(VOID);
BOOL KgSpoofApiCalls(VOID);
BOOL KgSpoofWindowTitle(const char* fakeTitle);
BOOL KgSpoofWindowClass(const char* fakeClassName);
BOOL KgSpoofSelfWindow(VOID);
BOOL KgInstallNtHook(VOID);
BOOL KgInstallFullProtection(VOID);
BOOL KgDetectVirtualMachine(VOID);
BOOL KgInitIntegrity(VOID);
BOOL KgVerifyIntegrity(VOID);
VOID KgObfuscateString(const char* plain, char* obfuscated, u32 size);
VOID KgDeobfuscateString(const char* obfuscated, char* plain, u32 size);
FARPROC KgGetObfuscatedProcAddress(const char* dllName, const char* funcName);
BOOL  KgCanCallApi(s32 apiIndex);
VOID  KgWaitForApiCall(s32 apiIndex);

BOOL KgManualMap(HANDLE proc, const char* dllPath);
BOOL KgInjectApc(HANDLE proc, const char* dllPath);
BOOL KgInjectClassic(HANDLE proc, const char* dllPath);
BOOL KgAutoInject(HANDLE proc, const char* dllPath);
BOOL KgWaitForProcessReady(HANDLE proc, DWORD timeoutMs);

VOID KgCheatMainLoop(VOID);
BOOL KgInitGameState(KgGameState* state);
BOOL KgUpdateGameState(KgGameState* state);
BOOL KgGetLocalPlayerInfo(KgGameState* state);
BOOL KgGetEntityList(KgGameState* state);
BOOL KgCalcWorldToScreen(KgGameState* state, int index, float* screenX, float* screenY);

const KgCheatConfig* KgGetConfig(VOID);
VOID KgSetConfig(BOOL esp, BOOL aimbot, BOOL speed, BOOL ammo, BOOL recoil);
BOOL KgLoadConfig(const char* path);
BOOL KgSaveConfig(const char* path);

/* ============================================================
 * 内联
 * ============================================================ */

static __inline BOOL KgIsValidPtr(u32 ptr) {
    return (ptr > 0x10000 && ptr < 0x7FFFFFFF);
}
static __inline u32 KgAlignUp(u32 value, u32 alignment) {
    return (value + alignment - 1) & ~(alignment - 1);
}
static __inline BOOL KgInRange(u32 addr, u32 base, u32 size) {
    return (addr >= base && addr < base + size);
}

#endif /* KG_COMMON_H */

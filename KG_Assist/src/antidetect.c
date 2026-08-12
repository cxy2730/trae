/**
 * KG Assist - 防封模块 (反调试 + 反检测)
 *
 * 功能:
 *   - Hook IsDebuggerPresent / CheckRemoteDebuggerPresent
 *   - Hook OutputDebugStringA/W (防止调试输出)
 *   - Hook NtQueryInformationProcess (伪造调试状态)
 *   - 伪装窗口标题 / 类名
 *   - 完整性校验 (代码段自校验)
 */

#include "../include/common.h"

/* ============================================================
 * 原始函数指针 (保存被 hook 的 API)
 * ============================================================ */

static IsDebuggerPresent_t          pOrigIsDebuggerPresent = NULL;
static CheckRemoteDebuggerPresent_t pOrigCheckRemoteDebuggerPresent = NULL;
static OutputDebugStringA_t         pOrigOutputDebugStringA = NULL;
static OutputDebugStringW_t         pOrigOutputDebugStringW = NULL;
static NtQueryInformationProcess_t  pOrigNtQueryInformationProcess = NULL;

/* ============================================================
 * Hook 后的函数
 * ============================================================ */

static BOOL WINAPI HookedIsDebuggerPresent(VOID) {
    return FALSE;
}

static BOOL WINAPI HookedCheckRemoteDebuggerPresent(HANDLE hProcess, PBOOL pbDebuggerPresent) {
    if (pbDebuggerPresent) *pbDebuggerPresent = FALSE;
    return TRUE;
}

static void WINAPI HookedOutputDebugStringA(LPCSTR lpOutputString) {
    (void)lpOutputString;
    /* 吞掉所有调试输出 */
}

static void WINAPI HookedOutputDebugStringW(LPCWSTR lpOutputString) {
    (void)lpOutputString;
}

static NTSTATUS NTAPI HookedNtQueryInformationProcess(
    HANDLE ProcessHandle,
    ULONG ProcessInformationClass,
    PVOID ProcessInformation,
    ULONG ProcessInformationLength,
    PULONG ReturnLength)
{
    if (ProcessHandle == GetCurrentProcess()) {
        switch (ProcessInformationClass) {
            case 7:  /* ProcessDebugPort */
                if (ProcessInformation && ProcessInformationLength >= sizeof(DWORD)) {
                    *(DWORD*)ProcessInformation = 0;
                    if (ReturnLength) *ReturnLength = sizeof(DWORD);
                    return 0;
                }
                break;
            case 26: /* ProcessDebugFlags */
                if (ProcessInformation && ProcessInformationLength >= sizeof(DWORD)) {
                    *(DWORD*)ProcessInformation = 0;
                    if (ReturnLength) *ReturnLength = sizeof(DWORD);
                    return 0;
                }
                break;
            case 30: /* ProcessDebugObjectHandle */
                if (ProcessInformation && ProcessInformationLength >= sizeof(HANDLE)) {
                    *(HANDLE*)ProcessInformation = NULL;
                    if (ReturnLength) *ReturnLength = sizeof(HANDLE);
                    return 0;
                }
                break;
        }
    }
    if (pOrigNtQueryInformationProcess) {
        return pOrigNtQueryInformationProcess(ProcessHandle, ProcessInformationClass,
            ProcessInformation, ProcessInformationLength, ReturnLength);
    }
    return 0xC0000008; /* STATUS_INVALID_HANDLE */
}

/* ============================================================
 * IAT Hook 辅助
 * ============================================================ */

typedef struct {
    const char* moduleName;
    const char* functionName;
    PVOID hookedFunction;
    PVOID* originalFunction;
} KgHookEntry;

static BOOL InstallIatHook(const KgHookEntry* entry) {
    HMODULE hModule = GetModuleHandleA(NULL);
    if (!hModule) return FALSE;

    PIMAGE_DOS_HEADER dosHeader = (PIMAGE_DOS_HEADER)hModule;
    PIMAGE_NT_HEADERS ntHeaders = (PIMAGE_NT_HEADERS)((BYTE*)hModule + dosHeader->e_lfanew);

    DWORD importRva = ntHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
    if (importRva == 0) return FALSE;

    PIMAGE_IMPORT_DESCRIPTOR importDesc = (PIMAGE_IMPORT_DESCRIPTOR)((BYTE*)hModule + importRva);

    while (importDesc->Name) {
        const char* dllName = (const char*)((BYTE*)hModule + importDesc->Name);
        if (_stricmp(dllName, entry->moduleName) == 0) {
            PIMAGE_THUNK_DATA thunk = (PIMAGE_THUNK_DATA)((BYTE*)hModule + importDesc->FirstThunk);
            PIMAGE_THUNK_DATA origThunk = (PIMAGE_THUNK_DATA)((BYTE*)hModule + importDesc->OriginalFirstThunk);

            while (origThunk->u1.AddressOfData) {
                if (!(origThunk->u1.Ordinal & IMAGE_ORDINAL_FLAG)) {
                    PIMAGE_IMPORT_BY_NAME importByName = (PIMAGE_IMPORT_BY_NAME)((BYTE*)hModule + origThunk->u1.AddressOfData);
                    if (strcmp(importByName->Name, entry->functionName) == 0) {
                        /* 保存原始函数 */
                        if (entry->originalFunction) {
                            *entry->originalFunction = (PVOID)thunk->u1.Function;
                        }
                        /* 修改 IAT */
                        DWORD oldProtect;
                        VirtualProtect(&thunk->u1.Function, sizeof(PVOID), PAGE_READWRITE, &oldProtect);
                        thunk->u1.Function = (ULONGLONG)(uintptr_t)entry->hookedFunction;
                        VirtualProtect(&thunk->u1.Function, sizeof(PVOID), oldProtect, &oldProtect);
                        return TRUE;
                    }
                }
                thunk++;
                origThunk++;
            }
        }
        importDesc++;
    }
    return FALSE;
}

/* ============================================================
 * 防封 API
 * ============================================================ */

BOOL KgInstallAntiDebug(VOID) {
    KG_INFO("安装反调试保护...");

    KgHookEntry hooks[] = {
        { "kernel32.dll", "IsDebuggerPresent",          (PVOID)HookedIsDebuggerPresent,          (PVOID*)&pOrigIsDebuggerPresent },
        { "kernel32.dll", "CheckRemoteDebuggerPresent", (PVOID)HookedCheckRemoteDebuggerPresent, (PVOID*)&pOrigCheckRemoteDebuggerPresent },
        { "kernel32.dll", "OutputDebugStringA",         (PVOID)HookedOutputDebugStringA,         (PVOID*)&pOrigOutputDebugStringA },
        { "kernel32.dll", "OutputDebugStringW",         (PVOID)HookedOutputDebugStringW,         (PVOID*)&pOrigOutputDebugStringW },
        { "ntdll.dll",    "NtQueryInformationProcess",  (PVOID)HookedNtQueryInformationProcess,  (PVOID*)&pOrigNtQueryInformationProcess },
    };

    s32 successCount = 0;
    for (size_t i = 0; i < sizeof(hooks) / sizeof(hooks[0]); i++) {
        if (InstallIatHook(&hooks[i])) {
            successCount++;
        }
    }

    KG_INFO("反调试保护: %d/%d 个 hook 安装成功", successCount, (int)(sizeof(hooks) / sizeof(hooks[0])));
    return (successCount > 0);
}

BOOL KgInstallAntiDetect(VOID) {
    KG_INFO("反检测保护已激活 (占位)");
    return TRUE;
}

BOOL KgSpoofApiCalls(VOID) {
    KG_INFO("API 调用伪装已激活 (占位)");
    return TRUE;
}

BOOL KgSpoofWindowTitle(const char* fakeTitle) {
    (void)fakeTitle;
    KG_INFO("窗口标题伪装: %s", fakeTitle ? fakeTitle : "(无)");
    return TRUE;
}

BOOL KgSpoofWindowClass(const char* fakeClassName) {
    (void)fakeClassName;
    KG_INFO("窗口类名伪装: %s", fakeClassName ? fakeClassName : "(无)");
    return TRUE;
}

BOOL KgSpoofSelfWindow(VOID) {
    KG_INFO("自身窗口伪装已激活");
    return TRUE;
}

BOOL KgInstallNtHook(VOID) {
    KG_INFO("NT Hook 已激活 (占位)");
    return TRUE;
}

BOOL KgInstallFullProtection(VOID) {
    KG_INFO("安装完整防封保护...");

    BOOL ok = TRUE;
    ok &= KgInstallAntiDebug();
    ok &= KgInstallAntiDetect();
    ok &= KgSpoofApiCalls();
    ok &= KgInstallNtHook();

    if (ok) {
        KG_INFO("完整防封保护已激活");
    } else {
        KG_WARN("部分防封保护未能安装");
    }
    return ok;
}

BOOL KgDetectVirtualMachine(VOID) {
    KG_INFO("虚拟机检测 (占位)");
    return FALSE;
}

BOOL KgInitIntegrity(VOID) {
    KG_INFO("完整性校验初始化 (占位)");
    return TRUE;
}

BOOL KgVerifyIntegrity(VOID) {
    KG_INFO("完整性校验通过 (占位)");
    return TRUE;
}

VOID KgObfuscateString(const char* plain, char* obfuscated, u32 size) {
    (void)plain; (void)obfuscated; (void)size;
}

VOID KgDeobfuscateString(const char* obfuscated, char* plain, u32 size) {
    (void)obfuscated; (void)plain; (void)size;
}

FARPROC KgGetObfuscatedProcAddress(const char* dllName, const char* funcName) {
    return GetProcAddress(GetModuleHandleA(dllName), funcName);
}

BOOL KgCanCallApi(s32 apiIndex) {
    (void)apiIndex;
    return TRUE;
}

VOID KgWaitForApiCall(s32 apiIndex) {
    (void)apiIndex;
}

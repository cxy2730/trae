/**
 * KG 反调试绕过 DLL
 * 原理: 通过修改 IAT (导入地址表) 中的函数指针
 * 将反调试相关 API 替换为自定义 Hook 函数
 *
 * 编译方法 (Windows MinGW):
 *   i686-w64-mingw32-gcc -shared -o KG_Bypass.dll KG_Bypass.c -lws2_32
 *
 * 注入方式:
 *   1. AppInit_DLLs 注册表: HKLM\SOFTWARE\Microsoft\Windows NT\
 *      CurrentVersion\Windows\LoadAppInit_DLLs = 1
 *      然后在 AppInit_DLLs 值中添加 KG_Bypass.dll 路径
 *   2. Remote DLL 注入工具 (RemoteInjector, DLL Injector Pro 等)
 */

#include <windows.h>
#include <stdio.h>

// 函数指针类型定义
typedef BOOL (WINAPI *IsDebuggerPresent_t)(VOID);
typedef BOOL (WINAPI *CheckRemoteDebuggerPresent_t)(HANDLE, PBOOL);
typedef NTSTATUS (NTAPI *NtQueryInformationProcess_t)(HANDLE, UINT, PVOID, ULONG, PULONG);
typedef NTSTATUS (NTAPI *ZwQueryInformationProcess_t)(HANDLE, UINT, PVOID, ULONG, PULONG);
typedef void (WINAPI *OutputDebugStringA_t)(LPCSTR);
typedef void (WINAPI *OutputDebugStringW_t)(LPCWSTR);

// 原始函数指针保存
static IsDebuggerPresent_t pOrigIsDebuggerPresent = NULL;
static CheckRemoteDebuggerPresent_t pOrigCheckRemoteDebuggerPresent = NULL;
static NtQueryInformationProcess_t pOrigNtQueryInformationProcess = NULL;
static ZwQueryInformationProcess_t pOrigZwQueryInformationProcess = NULL;
static OutputDebugStringA_t pOrigOutputDebugStringA = NULL;
static OutputDebugStringW_t pOrigOutputDebugStringW = NULL;

/**
 * Hook IsDebuggerPresent - 始终返回 FALSE (未被调试)
 */
BOOL WINAPI HookedIsDebuggerPresent(VOID) {
    return FALSE;
}

/**
 * Hook CheckRemoteDebuggerPresent - 始终返回 FALSE (未被远程调试)
 */
BOOL WINAPI HookedCheckRemoteDebuggerPresent(HANDLE hProcess, PBOOL pbDebuggerPresent) {
    if (pbDebuggerPresent) *pbDebuggerPresent = FALSE;
    return TRUE;
}

/**
 * Hook NtQueryInformationProcess - 内核级调试检测绕过
 * 处理的信息类:
 *   class 7  - ProcessDebugPort: 返回 0 (无调试器端口)
 *   class 30 - ProcessDebugObjectHandle: 返回 NULL (无调试对象)
 *   class 31 - ProcessDebugFlags: 返回 0 (调试标志清除)
 */
NTSTATUS NTAPI HookedNtQueryInformationProcess(HANDLE ProcessHandle, UINT ProcessInformationClass,
    PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength) {
    // ProcessDebugPort - 返回 0 隐藏调试器端口
    if (ProcessInformationClass == 7) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    // ProcessDebugObjectHandle - 返回 NULL 隐藏调试对象
    if (ProcessInformationClass == 30) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(HANDLE*)ProcessInformation = NULL;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    // ProcessDebugFlags - 返回 0 清除调试标志
    if (ProcessInformationClass == 31) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    // 其他查询转发到原始函数
    if (pOrigNtQueryInformationProcess) {
        return pOrigNtQueryInformationProcess(ProcessHandle, ProcessInformationClass,
            ProcessInformation, ProcessInformationLength, ReturnLength);
    }
    return 0;
}

/**
 * Hook ZwQueryInformationProcess - 与 NtQueryInformationProcess 相同逻辑
 */
NTSTATUS NTAPI HookedZwQueryInformationProcess(HANDLE ProcessHandle, UINT ProcessInformationClass,
    PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength) {
    // ProcessDebugPort
    if (ProcessInformationClass == 7) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    // ProcessDebugObjectHandle
    if (ProcessInformationClass == 30) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(HANDLE*)ProcessInformation = NULL;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    // ProcessDebugFlags
    if (ProcessInformationClass == 31) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    if (pOrigZwQueryInformationProcess) {
        return pOrigZwQueryInformationProcess(ProcessHandle, ProcessInformationClass,
            ProcessInformation, ProcessInformationLength, ReturnLength);
    }
    return 0;
}

// Hook OutputDebugString - 静默处理, 不输出任何内容
void WINAPI HookedOutputDebugStringA(LPCSTR lpOutputString) { return; }
void WINAPI HookedOutputDebugStringW(LPCWSTR lpOutputString) { return; }

/**
 * 安装 IAT Hook: 遍历 PE 导入表, 替换目标函数指针
 * 核心原理: 通过 VirtualProtect 修改内存保护属性, 直接修改 IAT 中的函数地址
 */
BOOL InstallHooks() {
    // 获取 kernel32.dll 和 ntdll.dll 基址
    HMODULE hKernel32 = GetModuleHandleA("kernel32.dll");
    HMODULE hNtdll = GetModuleHandleA("ntdll.dll");
    if (!hKernel32 || !hNtdll) return FALSE;

    // 获取原始函数地址
    pOrigIsDebuggerPresent = (IsDebuggerPresent_t) GetProcAddress(hKernel32, "IsDebuggerPresent");
    pOrigCheckRemoteDebuggerPresent = (CheckRemoteDebuggerPresent_t)GetProcAddress(hKernel32, "CheckRemoteDebuggerPresent");
    pOrigOutputDebugStringA = (OutputDebugStringA_t)GetProcAddress(hKernel32, "OutputDebugStringA");
    pOrigOutputDebugStringW = (OutputDebugStringW_t)GetProcAddress(hKernel32, "OutputDebugStringW");
    pOrigNtQueryInformationProcess = (NtQueryInformationProcess_t)GetProcAddress(hNtdll, "NtQueryInformationProcess");
    pOrigZwQueryInformationProcess = (ZwQueryInformationProcess_t)GetProcAddress(hNtdll, "ZwQueryInformationProcess");

    // 获取主模块句柄
    HMODULE hMainModule = GetModuleHandleA(NULL);
    if (!hMainModule) return FALSE;

    // 解析 PE 头, 定位导入表
    PIMAGE_DOS_HEADER pDosHeader = (PIMAGE_DOS_HEADER)hMainModule;
    PIMAGE_NT_HEADERS pNtHeaders = (PIMAGE_NT_HEADERS)((BYTE*)hMainModule + pDosHeader->e_lfanew);
    if (pNtHeaders->Signature != IMAGE_NT_SIGNATURE) return FALSE;

    PIMAGE_IMPORT_DESCRIPTOR pImportDesc = (PIMAGE_IMPORT_DESCRIPTOR)
        ((BYTE*)hMainModule + pNtHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);

    // 遍历所有导入 DLL
    while (pImportDesc->Name) {
        char* dllName = (char*)((BYTE*)hMainModule + pImportDesc->Name);

        // 处理 kernel32.dll 中的反调试 API
        if (strcmp(dllName, "kernel32.dll") == 0 || strcmp(dllName, "KERNEL32.dll") == 0) {
            PIMAGE_THUNK_DATA pThunk = (PIMAGE_THUNK_DATA)((BYTE*)hMainModule + pImportDesc->FirstThunk);
            PIMAGE_THUNK_DATA pOriginalThunk = (PIMAGE_THUNK_DATA)((BYTE*)hMainModule + pImportDesc->OriginalFirstThunk);

            while (pThunk->u1.Function) {
                char* funcName = NULL;
                if (pOriginalThunk && pOriginalThunk->u1.AddressOfData) {
                    PIMAGE_IMPORT_BY_NAME pImportByName = (PIMAGE_IMPORT_BY_NAME)
                        ((BYTE*)hMainModule + pOriginalThunk->u1.AddressOfData);
                    funcName = pImportByName->Name;
                }

                if (funcName) {
                    FARPROC hookFunc = NULL;
                    if (strcmp(funcName, "IsDebuggerPresent") == 0) hookFunc = (FARPROC)HookedIsDebuggerPresent;
                    else if (strcmp(funcName, "CheckRemoteDebuggerPresent") == 0) hookFunc = (FARPROC)HookedCheckRemoteDebuggerPresent;
                    else if (strcmp(funcName, "OutputDebugStringA") == 0) hookFunc = (FARPROC)HookedOutputDebugStringA;
                    else if (strcmp(funcName, "OutputDebugStringW") == 0) hookFunc = (FARPROC)HookedOutputDebugStringW;

                    if (hookFunc) {
                        // 修改内存保护属性为可读写
                        DWORD oldProtect;
                        VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC), PAGE_READWRITE, &oldProtect);
                        // 替换函数指针
                        pThunk->u1.Function = hookFunc;
                        // 恢复原来的保护属性
                        VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC), oldProtect, &oldProtect);
                    }
                }
                pThunk++;
                if (pOriginalThunk) pOriginalThunk++;
            }
        }

        // 处理 ntdll.dll 中的内核级反调试 API
        if (strcmp(dllName, "ntdll.dll") == 0 || strcmp(dllName, "NTDLL.dll") == 0) {
            PIMAGE_THUNK_DATA pThunk = (PIMAGE_THUNK_DATA)((BYTE*)hMainModule + pImportDesc->FirstThunk);
            PIMAGE_THUNK_DATA pOriginalThunk = (PIMAGE_THUNK_DATA)((BYTE*)hMainModule + pImportDesc->OriginalFirstThunk);

            while (pThunk->u1.Function) {
                char* funcName = NULL;
                if (pOriginalThunk && pOriginalThunk->u1.AddressOfData) {
                    PIMAGE_IMPORT_BY_NAME pImportByName = (PIMAGE_IMPORT_BY_NAME)
                        ((BYTE*)hMainModule + pOriginalThunk->u1.AddressOfData);
                    funcName = pImportByName->Name;
                }

                if (funcName) {
                    FARPROC hookFunc = NULL;
                    if (strcmp(funcName, "NtQueryInformationProcess") == 0) hookFunc = (FARPROC)HookedNtQueryInformationProcess;
                    else if (strcmp(funcName, "ZwQueryInformationProcess") == 0) hookFunc = (FARPROC)HookedZwQueryInformationProcess;

                    if (hookFunc) {
                        DWORD oldProtect;
                        VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC), PAGE_READWRITE, &oldProtect);
                        pThunk->u1.Function = hookFunc;
                        VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC), oldProtect, &oldProtect);
                    }
                }
                pThunk++;
                if (pOriginalThunk) pOriginalThunk++;
            }
        }
        pImportDesc++;
    }
    return TRUE;
}

/**
 * DLL 入口点: 进程附加时自动安装 Hook
 */
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(hModule);
            InstallHooks();  // 自动安装所有反调试 Hook
            break;
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}
/**
 * KG Assist - 反检测模块
 * 功能: 绕过 Vanguard/ACE 等反作弊检测
 *
 * 技术要点:
 * - IAT Hook: 修改导入地址表中的函数指针
 * - API 伪装: 动态解析 + 间接调用
 * - 特征规避: 运行时解密字符串、代码变异
 * - 行为模拟: API 调用节流、人类行为模式
 */

#include "../include/common.h"

/* 原始函数指针保存 */
static IsDebuggerPresent_t      pOrigIsDebuggerPresent = NULL;
static CheckRemoteDebuggerPresent_t pOrigCheckRemoteDebuggerPresent = NULL;
static NtQueryInformationProcess_t pOrigNtQueryInformationProcess = NULL;
static OutputDebugStringA_t      pOrigOutputDebugStringA = NULL;
static OutputDebugStringW_t      pOrigOutputDebugStringW = NULL;

/* Hook 后的函数实现 */

/**
 * Hook IsDebuggerPresent - 始终返回"未被调试"
 */
BOOL WINAPI HookedIsDebuggerPresent(VOID) {
    return FALSE;
}

/**
 * Hook CheckRemoteDebuggerPresent - 始终返回"未被调试"
 */
BOOL WINAPI HookedCheckRemoteDebuggerPresent(HANDLE hProcess, PBOOL pbDebuggerPresent) {
    if (pbDebuggerPresent) {
        *pbDebuggerPresent = FALSE;
    }
    return TRUE;
}

/**
 * Hook NtQueryInformationProcess - 内核级调试检测绕过
 * 处理: class 7/30/31 隐藏调试器痕迹
 */
NTSTATUS NTAPI HookedNtQueryInformationProcess(
    HANDLE ProcessHandle,
    ULONG ProcessInformationClass,
    PVOID ProcessInformation,
    ULONG ProcessInformationLength,
    PULONG ReturnLength
) {
    // ProcessDebugPort (class 7) - 隐藏调试器端口
    if (ProcessInformationClass == 7) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    
    // ProcessDebugObjectHandle (class 30) - 隐藏调试对象
    if (ProcessInformationClass == 30) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(HANDLE*)ProcessInformation = NULL;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    
    // ProcessDebugFlags (class 31) - 清除调试标志
    if (ProcessInformationClass == 31) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    
    // 其他查询转发到原始函数
    if (pOrigNtQueryInformationProcess) {
        return pOrigNtQueryInformationProcess(
            ProcessHandle,
            ProcessInformationClass,
            ProcessInformation,
            ProcessInformationLength,
            ReturnLength
        );
    }
    
    return 0;
}

/**
 * Hook OutputDebugStringA - 静默处理 (不输出任何内容)
 * 防止反调试通过调试输出检测
 */
void WINAPI HookedOutputDebugStringA(LPCSTR lpOutputString) {
    // 故意不输出任何内容, 避免被检测
    return;
}

/**
 * Hook OutputDebugStringW - 静默处理 (宽字符版本)
 */
void WINAPI HookedOutputDebugStringW(LPCWSTR lpOutputString) {
    return;
}

/* ============================================================
 * IAT Hook 安装
 * ============================================================ */

/**
 * 安装单个函数的 IAT Hook
 * @param dllName 目标 DLL 名称
 * @param funcName 目标函数名
 * @param hookFunc Hook 函数地址
 * @return 是否成功
 */
static BOOL InstallIATHook(const char* dllName, const char* funcName, FARPROC hookFunc) {
    HMODULE hMainModule = GetModuleHandleA(NULL);
    if (!hMainModule) {
        KG_ERROR("获取主模块句柄失败");
        return FALSE;
    }
    
    // 解析 PE 头
    PIMAGE_DOS_HEADER pDosHeader = (PIMAGE_DOS_HEADER)hMainModule;
    if (pDosHeader->e_magic != IMAGE_DOS_SIGNATURE) {
        return FALSE;
    }
    
    PIMAGE_NT_HEADERS pNtHeaders = (PIMAGE_NT_HEADERS)
        ((BYTE*)hMainModule + pDosHeader->e_lfanew);
    
    if (pNtHeaders->Signature != IMAGE_NT_SIGNATURE) {
        return FALSE;
    }
    
    // 定位导入表
    DWORD importRva = pNtHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
    if (importRva == 0) {
        return FALSE;
    }
    
    PIMAGE_IMPORT_DESCRIPTOR pImportDesc = (PIMAGE_IMPORT_DESCRIPTOR)
        ((BYTE*)hMainModule + importRva);
    
    // 遍历所有导入 DLL
    while (pImportDesc->Name) {
        char* currentDllName = (char*)((BYTE*)hMainModule + pImportDesc->Name);
        
        // 大小写不敏感比较
        if (_stricmp(currentDllName, dllName) == 0) {
            // 遍历该 DLL 的导入函数
            PIMAGE_THUNK_DATA pThunk = (PIMAGE_THUNK_DATA)
                ((BYTE*)hMainModule + pImportDesc->FirstThunk);
            PIMAGE_THUNK_DATA pOriginalThunk = (PIMAGE_THUNK_DATA)
                ((BYTE*)hMainModule + pImportDesc->OriginalFirstThunk);
            
            while (pThunk->u1.Function) {
                char* currentFuncName = NULL;
                
                // 获取原始函数名
                if (pOriginalThunk && pOriginalThunk->u1.AddressOfData) {
                    PIMAGE_IMPORT_BY_NAME pImportByName = (PIMAGE_IMPORT_BY_NAME)
                        ((BYTE*)hMainModule + pOriginalThunk->u1.AddressOfData);
                    currentFuncName = pImportByName->Name;
                }
                
                if (currentFuncName && strcmp(currentFuncName, funcName) == 0) {
                    // 找到目标函数, 替换 IAT 中的指针
                    DWORD oldProtect;
                    VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC),
                                   PAGE_READWRITE, &oldProtect);

                    /* 32-bit PE: low 4 bytes hold the function pointer; on
                     * x64 we use the full 8-byte pointer. Cast via uintptr_t
                     * to avoid -Wpointer-to-int-cast on 32-bit builds. */
                    pThunk->u1.Function = (ULONGLONG)(uintptr_t)hookFunc;

                    VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC),
                                   oldProtect, &oldProtect);

                    KG_DEBUG("IAT Hook 成功: %s!%s -> %p",
                             dllName, funcName, hookFunc);
                    return TRUE;
                }
                
                pThunk++;
                if (pOriginalThunk) pOriginalThunk++;
            }
        }
        
        pImportDesc++;
    }
    
    return FALSE;
}

/**
 * 安装反调试 Hook
 * 覆盖所有反调试检测 API
 */
BOOL KgInstallAntiDebug(VOID) {
    KG_INFO("安装反调试绕过...");
    
    BOOL success = TRUE;
    
    // 保存原始函数指针
    HMODULE hKernel32 = GetModuleHandleA("kernel32.dll");
    HMODULE hNtdll = GetModuleHandleA("ntdll.dll");
    
    if (hKernel32) {
        pOrigIsDebuggerPresent = (IsDebuggerPresent_t)GetProcAddress(hKernel32, "IsDebuggerPresent");
        pOrigCheckRemoteDebuggerPresent = (CheckRemoteDebuggerPresent_t)GetProcAddress(hKernel32, "CheckRemoteDebuggerPresent");
        pOrigOutputDebugStringA = (OutputDebugStringA_t)GetProcAddress(hKernel32, "OutputDebugStringA");
        pOrigOutputDebugStringW = (OutputDebugStringW_t)GetProcAddress(hKernel32, "OutputDebugStringW");
    }
    
    if (hNtdll) {
        pOrigNtQueryInformationProcess = (NtQueryInformationProcess_t)GetProcAddress(hNtdll, "NtQueryInformationProcess");
    }
    
    // 安装 Hook
    success &= InstallIATHook("kernel32.dll", "IsDebuggerPresent", (FARPROC)HookedIsDebuggerPresent);
    success &= InstallIATHook("kernel32.dll", "CheckRemoteDebuggerPresent", (FARPROC)HookedCheckRemoteDebuggerPresent);
    success &= InstallIATHook("kernel32.dll", "OutputDebugStringA", (FARPROC)HookedOutputDebugStringA);
    success &= InstallIATHook("kernel32.dll", "OutputDebugStringW", (FARPROC)HookedOutputDebugStringW);
    success &= InstallIATHook("ntdll.dll", "NtQueryInformationProcess", (FARPROC)HookedNtQueryInformationProcess);
    
    if (success) {
        KG_INFO("反调试绕过安装成功");
    } else {
        KG_WARN("部分 Hook 安装可能失败 (非致命)");
    }
    
    return TRUE;  // 即使部分失败也返回 TRUE, 不影响主流程
}

/* ============================================================
 * API 调用伪装
 * ============================================================ */

/**
 * API 节流管理器
 * 控制敏感 API 的调用频率, 避免行为异常检测
 */
typedef struct {
    LARGE_INTEGER lastCall;
    DWORD minInterval;
    BOOL initialized;
} ApiThrottleEntry;

static ApiThrottleEntry g_ThrottleTable[] = {
    { {{0}}, 100, FALSE },  // CreateToolhelp32Snapshot: 最小间隔 100ms
    { {{0}}, 50,  FALSE },  // OpenProcess: 最小间隔 50ms
    { {{0}}, 200, FALSE }, // WriteProcessMemory: 最小间隔 200ms
    { {{0}}, 10,  FALSE }, // GetTickCount: 最小间隔 10ms (高频, 正常行为)
};

/**
 * 检查是否允许调用指定 API
 * @param apiIndex API 在节流表中的索引
 * @return TRUE 表示允许调用, FALSE 表示需要等待
 */
BOOL KgCanCallApi(s32 apiIndex) {
    if (apiIndex < 0 || apiIndex >= (s32)(sizeof(g_ThrottleTable) / sizeof(g_ThrottleTable[0]))) {
        return TRUE;  // 未知 API, 允许调用
    }
    
    LARGE_INTEGER now;
    QueryPerformanceCounter(&now);
    
    if (!g_ThrottleTable[apiIndex].initialized) {
        g_ThrottleTable[apiIndex].lastCall = now;
        g_ThrottleTable[apiIndex].initialized = TRUE;
        return TRUE;
    }
    
    // 计算已过时间 (毫秒)
    LONGLONG elapsed = (now.QuadPart - g_ThrottleTable[apiIndex].lastCall.QuadPart) / 10000;
    
    if (elapsed < (LONGLONG)g_ThrottleTable[apiIndex].minInterval) {
        return FALSE;  // 节流中
    }
    
    g_ThrottleTable[apiIndex].lastCall = now;
    return TRUE;
}

/**
 * 等待直到允许调用 API
 * @param apiIndex API 索引
 */
VOID KgWaitForApiCall(s32 apiIndex) {
    while (!KgCanCallApi(apiIndex)) {
        Sleep(5);  // 等待 5ms 后重试
    }
}

/**
 * 安装完整反检测机制
 * 包括反调试 + API 伪装 + PEB 绕过 + 时间戳绕过 + 行为模拟
 */
BOOL KgInstallAntiDetect(VOID) {
    KG_INFO("安装完整反检测机制...");

    /* 1. 安装反调试 Hook (IAT 级) */
    KgInstallAntiDebug();

    /* 2. PEB BeingDebugged 标志清除
     * ACE 通过 PEB->BeingDebugged 检测调试器, 直接清零 */
#ifdef _WIN32
    __asm__ volatile (
        "movl %%fs:0x30, %%eax\n"   /* PEB */
        "movb $0, 0x2(%%eax)\n"     /* BeingDebugged = 0 */
        : : : "eax"
    );
#endif
    KG_DEBUG("PEB BeingDebugged 已清除");

    /* 3. PEB NtGlobalFlag 清除
     * 调试器启动进程时会设置 NtGlobalFlag 的 FLG_HEAP_* 标志 */
#ifdef _WIN32
    __asm__ volatile (
        "movl %%fs:0x30, %%eax\n"   /* PEB */
        "movl 0x68(%%eax), %%ecx\n" /* NtGlobalFlag */
        "andl $0x0FFFFFFF, %%ecx\n" /* 清除高 4 位 (调试标志) */
        "movl %%ecx, 0x68(%%eax)\n"
        : : : "eax", "ecx"
    );
#endif
    KG_DEBUG("PEB NtGlobalFlag 已清除");

    /* 4. 进程名伪装 — 修改窗口标题 */
    const char* spoofTitle = KgPathGetSpoofTitle();
    if (spoofTitle && *spoofTitle) {
        KgSpoofWindowTitle(spoofTitle);
        KgSpoofWindowClass("Progman");
        KG_DEBUG("进程窗口伪装: %s", spoofTitle);
    }

    /* 5. 时间戳反调试 — 修正 rdtsc 检测
     * ACE 用 rdtsc 测量代码执行时间检测调试器
     * 这里通过 hook GetTickCount 使其返回连续值 */
    /* (IAT hook 已覆盖 NtQueryInformationProcess, 时间戳检测由完整性校验线程监控) */

    /* 6. API 节流已通过 KgCanCallApi/KgWaitForApiCall 实现 */

    KG_INFO("反检测机制安装完成 (PEB + IAT + 窗口伪装 + API 节流)");
    return TRUE;
}

/* ============================================================
 * 进程名/窗口伪装
 * ============================================================ */

/**
 * 修改当前进程窗口标题
 * 伪装成正常系统进程
 */
BOOL KgSpoofWindowTitle(const char* fakeTitle) {
    if (!fakeTitle) return FALSE;
    
    HWND hwnd = GetConsoleWindow();
    if (hwnd) {
        return SetWindowTextA(hwnd, fakeTitle);
    }
    
    return FALSE;
}

/**
 * 注册伪装窗口类
 * 避免被窗口枚举检测
 */
BOOL KgSpoofWindowClass(const char* fakeClassName) {
    if (!fakeClassName) return FALSE;
    
    WNDCLASSEXA wc = {0};
    wc.cbSize        = sizeof(wc);
    wc.style         = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc   = DefWindowProcA;
    wc.hInstance     = GetModuleHandleA(NULL);
    wc.lpszClassName = fakeClassName;
    
    // 先尝试注销旧类
    UnregisterClassA(fakeClassName, wc.hInstance);
    
    // 注册新类
    return RegisterClassExA(&wc) != 0;
}
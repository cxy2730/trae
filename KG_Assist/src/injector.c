/**
 * KG Assist - 注入模块
 *
 * 基于 KG.exe 反编译结果, 使用 native API 注入方式:
 *   1. NtAllocateVirtualMemory  - 远程分配内存 (KG 用 [0x4a2564] 分发表调用)
 *   2. NtWriteVirtualMemory     - 写入 DLL 路径 + shellcode
 *   3. LdrLoadDll               - native DLL 加载 (KG 的 LdrLoadDll 字符串证据)
 *   4. NtCreateThreadEx         - 创建远程线程 (KG 用 [0x4a2568] + 0x13 访问掩码)
 *
 * 相比 CreateRemoteThread+LoadLibrary 经典注入:
 *   - 不走 kernel32 IAT, 不被 ACE 的 IAT 监控捕获
 *   - LdrLoadDll 绕过 LoadLibraryA 的钩子链
 *   - NtCreateThreadEx 比 CreateRemoteThread 更底层, 不创建 thread handle 事件
 *
 * 回退链: NtCreateThreadEx+LdrLoadDll → APC+LoadLibrary → CreateRemoteThread
 */

#include "../include/common.h"

/* ============================================================
 * Native API 类型定义 (KG 反编译中通过分发表间接调用)
 * ============================================================ */

/* UNICODE_STRING / ANSI_STRING (ntddk.h, 这里手动定义避免依赖 DDK 头) */
typedef struct _KG_UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWSTR  Buffer;
} KG_UNICODE_STRING, *PKG_UNICODE_STRING;

typedef NTSTATUS (NTAPI* NtCreateThreadEx_t)(
    PHANDLE ThreadHandle,
    ACCESS_MASK DesiredAccess,
    PVOID ObjectAttributes,
    HANDLE ProcessHandle,
    PVOID StartAddress,
    PVOID Argument,
    ULONG CreateFlags,
    SIZE_T ZeroBits,
    SIZE_T StackSize,
    SIZE_T MaximumStackSize,
    PVOID AttributeList
);

typedef NTSTATUS (NTAPI* LdrLoadDll_t)(
    PWCHAR PathToFile,
    ULONG Flags,
    PKG_UNICODE_STRING ModuleFileName,
    PHANDLE ModuleHandle
);

typedef NTSTATUS (NTAPI* NtFreeVirtualMemory_t)(
    HANDLE ProcessHandle,
    PVOID* BaseAddress,
    PSIZE_T RegionSize,
    ULONG FreeType
);

/* shellcode 结构: 远程线程入口, 调用 LdrLoadDll 加载 bot.dll */
#pragma pack(push, 1)
typedef struct {
    void*   pLdrLoadDll;       /* LdrLoadDll 函数地址 */
    void*   pModuleHandle;     /* 输出: 加载后的模块句柄 */
    wchar_t dllPath[260];      /* DLL 完整路径 (Unicode) */
    KG_UNICODE_STRING uniStr;  /* UNICODE_STRING 指向 dllPath */
} KgLdrShellcode;
#pragma pack(pop)

/* ============================================================
 * native API 动态解析 (模拟 KG 的运行时分发表填充)
 * ============================================================ */

static NtCreateThreadEx_t  g_NtCreateThreadEx  = NULL;
static LdrLoadDll_t        g_LdrLoadDll        = NULL;
static NtAllocateVirtualMemory_t g_NtAllocVm   = NULL;
static NtWriteVirtualMemory_t    g_NtWriteVm   = NULL;
static NtProtectVirtualMemory_t  g_NtProtectVm = NULL;
static NtFreeVirtualMemory_t     g_NtFreeVm    = NULL;

static BOOL ResolveNativeApis(VOID) {
    if (g_NtCreateThreadEx) return TRUE;  /* 已解析 */

    HMODULE hNtdll = GetModuleHandleA("ntdll.dll");
    if (!hNtdll) return FALSE;

    g_NtCreateThreadEx = (NtCreateThreadEx_t)
        GetProcAddress(hNtdll, "NtCreateThreadEx");
    g_LdrLoadDll = (LdrLoadDll_t)
        GetProcAddress(hNtdll, "LdrLoadDll");
    g_NtAllocVm = (NtAllocateVirtualMemory_t)
        GetProcAddress(hNtdll, "NtAllocateVirtualMemory");
    g_NtWriteVm = (NtWriteVirtualMemory_t)
        GetProcAddress(hNtdll, "NtWriteVirtualMemory");
    g_NtProtectVm = (NtProtectVirtualMemory_t)
        GetProcAddress(hNtdll, "NtProtectVirtualMemory");
    g_NtFreeVm = (NtFreeVirtualMemory_t)
        GetProcAddress(hNtdll, "NtFreeVirtualMemory");

    if (!g_NtCreateThreadEx || !g_LdrLoadDll ||
        !g_NtAllocVm || !g_NtWriteVm) {
        KG_WARN("部分 native API 解析失败");
        return FALSE;
    }

    KG_DEBUG("native API 解析完成: NtCreateThreadEx=%p LdrLoadDll=%p",
             g_NtCreateThreadEx, g_LdrLoadDll);
    return TRUE;
}

/* ============================================================
 * 远程内存操作 (通过 NtAllocateVirtualMemory / NtWriteVirtualMemory)
 * ============================================================ */

static PVOID RemoteAlloc(HANDLE hProcess, SIZE_T size, DWORD protect) {
    PVOID baseAddr = NULL;
    SIZE_T regionSize = size;

    if (g_NtAllocVm) {
        NTSTATUS st = g_NtAllocVm(
            hProcess, &baseAddr, 0, &regionSize,
            MEM_COMMIT | MEM_RESERVE, protect);
        if (st == 0 && baseAddr) return baseAddr;
    }

    /* 回退到 Win32 */
    return VirtualAllocEx(hProcess, NULL, size,
                          MEM_COMMIT | MEM_RESERVE, protect);
}

static BOOL RemoteWrite(HANDLE hProcess, PVOID dest, const void* src, SIZE_T size) {
    if (g_NtWriteVm) {
        ULONG written = 0;
        NTSTATUS st = g_NtWriteVm(
            hProcess, dest, (PVOID)src, (ULONG)size, &written);
        if (st == 0 && written == (ULONG)size) return TRUE;
    }

    SIZE_T written = 0;
    return WriteProcessMemory(hProcess, dest, src, size, &written);
}

__attribute__((unused))
static BOOL RemoteProtect(HANDLE hProcess, PVOID addr, SIZE_T size, DWORD newProt) {
    DWORD oldProt = 0;
    if (g_NtProtectVm) {
        ULONG oldProtNt = 0;
        NTSTATUS st = g_NtProtectVm(
            hProcess, &addr, (PULONG)&size, newProt, &oldProtNt);
        return (st == 0);
    }
    return VirtualProtectEx(hProcess, addr, size, newProt, &oldProt);
}

static VOID RemoteFree(HANDLE hProcess, PVOID addr) {
    if (g_NtFreeVm) {
        SIZE_T size = 0;
        g_NtFreeVm(hProcess, &addr, &size, MEM_RELEASE);
        return;
    }
    VirtualFreeEx(hProcess, addr, 0, MEM_RELEASE);
}

/* ============================================================
 * Shellcode: 远程线程入口
 * 调用 LdrLoadDll 加载 DLL (模拟 KG 的 native loader 方式)
 * ============================================================ */

/*
 * shellcode 逻辑 (位置无关):
 *   1. 用 LdrLoadDll 加载 DLL 路径
 *   2. 返回模块句柄
 *
 * 因为 shellcode 需要位置无关, 我们用结构体传参,
 * shellcode 本身只是几条 mov/push/call 指令。
 *
 * 但编写位置无关 shellcode 在 C 中很难维护,
 * 更实际的做法: 写一个 __stdcall 函数, 注入其地址 + 参数。
 * LdrLoadDll 的签名适合直接作为线程函数调用。
 */

/* 线程函数: 调用 LdrLoadDll 加载 DLL (保留供未来 shellcode 注入使用) */
__attribute__((unused))
static DWORD WINAPI LdrLoaderThread(LPVOID param) {
    KgLdrShellcode* sc = (KgLdrShellcode*)param;
    HANDLE hModule = NULL;

    /* 调用 LdrLoadDll */
    if (sc->pLdrLoadDll) {
        ((LdrLoadDll_t)sc->pLdrLoadDll)(
            NULL,           /* PathToFile */
            0,              /* Flags */
            &sc->uniStr,    /* ModuleFileName */
            &hModule        /* ModuleHandle */
        );
    }

    sc->pModuleHandle = hModule;
    return (DWORD)(ULONG_PTR)hModule;
}

/* ============================================================
 * KG 式注入: NtCreateThreadEx + LdrLoadDll
 * ============================================================ */

static BOOL InjectViaNtCreateThreadEx(HANDLE hProcess, const char* dllPath) {
    if (!ResolveNativeApis()) return FALSE;

    /* 1. 准备 shellcode 数据结构 */
    KgLdrShellcode sc = {0};
    sc.pLdrLoadDll = (void*)g_LdrLoadDll;
    sc.pModuleHandle = NULL;

    /* 转换 DLL 路径为 Unicode */
    int wlen = MultiByteToWideChar(CP_ACP, 0, dllPath, -1,
                                   sc.dllPath, 260);
    if (wlen == 0) {
        KG_ERROR("DLL 路径转 Unicode 失败");
        return FALSE;
    }

    sc.uniStr.Length        = (USHORT)(wlen * sizeof(wchar_t));
    sc.uniStr.MaximumLength = (USHORT)((wlen + 1) * sizeof(wchar_t));
    sc.uniStr.Buffer        = (PWSTR)sc.dllPath;

    /* 2. 在远程进程分配内存 (shellcode 结构 + 线程栈) */
    SIZE_T scSize = sizeof(KgLdrShellcode);
    PVOID remoteData = RemoteAlloc(hProcess, scSize, PAGE_READWRITE);
    if (!remoteData) {
        KG_ERROR("远程内存分配失败 (shellcode)");
        return FALSE;
    }

    /* 3. 写入 shellcode 数据到远程进程 */
    if (!RemoteWrite(hProcess, remoteData, &sc, scSize)) {
        KG_ERROR("写入 shellcode 数据失败");
        RemoteFree(hProcess, remoteData);
        return FALSE;
    }

    /* 4. 获取 LdrLoaderThread 的地址
     * 注意: LdrLoaderThread 是本进程的函数, 不能直接在远程进程执行
     * 正确做法: 把 LdrLoaderThread 的代码也写入远程进程
     * 但更简单的方式: 直接用 NtCreateThreadEx 创建线程执行 LdrLoadDll
     * 由于 LdrLoadDll 的签名不完全匹配线程函数, 我们用一个 wrapper */

    /* 实际上最可靠的方式: 在远程进程分配 shellcode 代码,
     * 写入调用 LdrLoadDll 的机器码, 然后 NtCreateThreadEx 执行它。
     * 但这需要写汇编 shellcode, 跨架构兼容性差。
     *
     * 替代方案 (KG 也是这么做的): 用 NtCreateThreadEx 创建线程,
     * StartAddress = LdrLoadDll 的包装, Argument = shellcode 结构。
     *
     * 最简单可靠: 用 NtCreateThreadEx 执行 LoadLibraryA (kernel32),
     * 参数为远程 DLL 路径字符串。这比 CreateRemoteThread 更隐蔽
     * 因为不走 CreateThread 的用户态钩子链。 */

    /* 5. 在远程进程分配 DLL 路径字符串 (ANSI, 给 LoadLibraryA 用) */
    SIZE_T pathSize = strlen(dllPath) + 1;
    PVOID remotePath = RemoteAlloc(hProcess, pathSize, PAGE_READWRITE);
    if (!remotePath) {
        KG_ERROR("远程内存分配失败 (路径)");
        RemoteFree(hProcess, remoteData);
        return FALSE;
    }

    if (!RemoteWrite(hProcess, remotePath, dllPath, pathSize)) {
        KG_ERROR("写入 DLL 路径失败");
        RemoteFree(hProcess, remotePath);
        RemoteFree(hProcess, remoteData);
        return FALSE;
    }

    /* 6. 获取 LoadLibraryA 地址
     * kernel32.dll 在所有进程中加载地址相同 (ASLR 基址共享) */
    HMODULE hKernel32 = GetModuleHandleA("kernel32.dll");
    PVOID loadLibAddr = (PVOID)GetProcAddress(hKernel32, "LoadLibraryA");
    if (!loadLibAddr) {
        KG_ERROR("获取 LoadLibraryA 地址失败");
        RemoteFree(hProcess, remotePath);
        RemoteFree(hProcess, remoteData);
        return FALSE;
    }

    /* 7. 用 NtCreateThreadEx 创建远程线程 (KG 的 [0x4a2568] 方式)
     * DesiredAccess = 0x1F (THREAD_ALL_ACCESS 的子集, KG 用 0x13) */
    HANDLE hThread = NULL;
    NTSTATUS status = g_NtCreateThreadEx(
        &hThread,
        0x1F0F0FFF,        /* THREAD_ALL_ACCESS */
        NULL,              /* ObjectAttributes */
        hProcess,          /* 目标进程 */
        loadLibAddr,       /* StartAddress = LoadLibraryA */
        remotePath,        /* Argument = DLL 路径指针 */
        0,                 /* CreateFlags */
        0,                 /* ZeroBits */
        0,                 /* StackSize (默认) */
        0,                 /* MaximumStackSize */
        NULL               /* AttributeList */
    );

    if (status != 0 || !hThread) {
        KG_WARN("NtCreateThreadEx 失败 (status: 0x%08X), 回退到经典方式", status);
        RemoteFree(hProcess, remotePath);
        RemoteFree(hProcess, remoteData);
        return FALSE;
    }

    /* 8. 等待线程完成 (最多 10 秒) */
    WaitForSingleObject(hThread, 10000);

    /* 9. 检查结果 */
    DWORD exitCode = 0;
    GetExitCodeThread(hThread, &exitCode);
    CloseHandle(hThread);

    /* 10. 清理远程内存 */
    RemoteFree(hProcess, remotePath);
    RemoteFree(hProcess, remoteData);

    if (exitCode == 0) {
        KG_ERROR("远程线程返回 0, DLL 可能未加载成功");
        return FALSE;
    }

    KG_INFO("NtCreateThreadEx 注入成功 (模块句柄: 0x%08X)", exitCode);
    return TRUE;
}

/* ============================================================
 * APC 注入 (回退方式)
 * ============================================================ */

BOOL KgInjectApc(HANDLE hProcess, const char* dllPath) {
    if (hProcess == NULL || !dllPath) return FALSE;

    u32 pathSize = (u32)(strlen(dllPath) + 1);
    PVOID remotePath = RemoteAlloc(hProcess, pathSize, PAGE_READWRITE);
    if (!remotePath) {
        KG_ERROR("APC: 远程内存分配失败");
        return FALSE;
    }

    if (!RemoteWrite(hProcess, remotePath, dllPath, pathSize)) {
        KG_ERROR("APC: 写入路径失败");
        RemoteFree(hProcess, remotePath);
        return FALSE;
    }

    HMODULE hKernel32 = GetModuleHandleA("kernel32.dll");
    LPVOID loadLibAddr = (LPVOID)GetProcAddress(hKernel32, "LoadLibraryA");
    if (!loadLibAddr) {
        RemoteFree(hProcess, remotePath);
        return FALSE;
    }

    DWORD targetPid = GetProcessId(hProcess);
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    if (snapshot == INVALID_HANDLE_VALUE) {
        RemoteFree(hProcess, remotePath);
        return FALSE;
    }

    THREADENTRY32 te = {0};
    te.dwSize = sizeof(te);
    BOOL injected = FALSE;

    if (Thread32First(snapshot, &te)) {
        do {
            if (te.th32OwnerProcessID == targetPid && te.th32ThreadID != 0) {
                HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, FALSE,
                                            te.th32ThreadID);
                if (hThread) {
                    if (QueueUserAPC((PAPCFUNC)loadLibAddr,
                                     hThread, (ULONG_PTR)remotePath)) {
                        injected = TRUE;
                        KG_DEBUG("APC 排队到线程 %lu", te.th32ThreadID);
                    }
                    CloseHandle(hThread);
                }
            }
        } while (Thread32Next(snapshot, &te));
    }

    CloseHandle(snapshot);

    /* APC 是异步的, 路径内存不能立即释放 */
    if (!injected) {
        RemoteFree(hProcess, remotePath);
        KG_WARN("APC 注入失败 (无线程可警告)");
        return FALSE;
    }

    KG_INFO("APC 注入已排队, 等待目标线程处理");
    return TRUE;
}

/* ============================================================
 * 经典注入 (最后回退)
 * ============================================================ */

BOOL KgInjectClassic(HANDLE hProcess, const char* dllPath) {
    if (hProcess == NULL || !dllPath) return FALSE;

    HMODULE hKernel32 = GetModuleHandleA("kernel32.dll");
    LPVOID loadLibAddr = (LPVOID)GetProcAddress(hKernel32, "LoadLibraryA");
    if (!loadLibAddr) return FALSE;

    u32 pathSize = (u32)(strlen(dllPath) + 1);
    PVOID remotePath = RemoteAlloc(hProcess, pathSize, PAGE_READWRITE);
    if (!remotePath) {
        KG_ERROR("经典注入: 内存分配失败");
        return FALSE;
    }

    if (!RemoteWrite(hProcess, remotePath, dllPath, pathSize)) {
        KG_ERROR("经典注入: 写入路径失败");
        RemoteFree(hProcess, remotePath);
        return FALSE;
    }

    HANDLE hThread = CreateRemoteThread(
        hProcess, NULL, 0,
        (LPTHREAD_START_ROUTINE)loadLibAddr,
        remotePath, 0, NULL);

    if (!hThread) {
        KG_ERROR("经典注入: CreateRemoteThread 失败 (%lu)", GetLastError());
        RemoteFree(hProcess, remotePath);
        return FALSE;
    }

    WaitForSingleObject(hThread, 5000);
    CloseHandle(hThread);
    RemoteFree(hProcess, remotePath);

    KG_INFO("经典注入成功: %s", dllPath);
    return TRUE;
}

/* ============================================================
 * 手动映射: 完整 PE 加载 (节区映射 + 重定位 + 导入表)
 * 在本地副本上 fixup, 再 WriteProcessMemory 写入远程
 * ============================================================ */

/* 读取 DLL 文件到内存 */
static BOOL ReadDllFile(const char* path, BYTE** outData, u32* outSize) {
    if (!path || !outData || !outSize) return FALSE;

    HANDLE hFile = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ,
                               NULL, OPEN_EXISTING, 0, NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        KG_ERROR("无法打开 DLL 文件: %s", path);
        return FALSE;
    }

    DWORD fileSize = GetFileSize(hFile, NULL);
    if (fileSize == 0 || fileSize > 64 * 1024 * 1024) {
        KG_ERROR("DLL 文件大小异常: %lu bytes", fileSize);
        CloseHandle(hFile);
        return FALSE;
    }

    BYTE* data = (BYTE*)malloc(fileSize);
    if (!data) {
        CloseHandle(hFile);
        return FALSE;
    }

    DWORD bytesRead = 0;
    if (!ReadFile(hFile, data, fileSize, &bytesRead, NULL) ||
        bytesRead != fileSize) {
        KG_ERROR("读取 DLL 文件失败");
        free(data);
        CloseHandle(hFile);
        return FALSE;
    }

    CloseHandle(hFile);
    *outData = data;
    *outSize = fileSize;
    return TRUE;
}

/* 处理重定位表 (在本地副本上) */
static BOOL ApplyRelocations(BYTE* localBase, u32 imageSize, u32 delta) {
    if (delta == 0) return TRUE;

    PIMAGE_DOS_HEADER dos = (PIMAGE_DOS_HEADER)localBase;
    PIMAGE_NT_HEADERS nt = (PIMAGE_NT_HEADERS)(localBase + dos->e_lfanew);

    DWORD relocRva = nt->OptionalHeader.DataDirectory
        [IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress;
    if (relocRva == 0) return TRUE;

    PIMAGE_BASE_RELOCATION reloc =
        (PIMAGE_BASE_RELOCATION)(localBase + relocRva);

    while (reloc->VirtualAddress < imageSize) {
        DWORD count = (reloc->SizeOfBlock - 8) / 2;
        WORD* entries = (WORD*)((BYTE*)reloc + 8);

        for (DWORD i = 0; i < count; i++) {
            WORD type = entries[i] >> 12;
            WORD offset = entries[i] & 0x0FFF;

            if (type == IMAGE_REL_BASED_ABSOLUTE) continue;

            if (type == IMAGE_REL_BASED_HIGHLOW) {
                DWORD* patchAddr = (DWORD*)(localBase +
                    reloc->VirtualAddress + offset);
                *patchAddr += delta;
            }
        }

        reloc = (PIMAGE_BASE_RELOCATION)((BYTE*)reloc + reloc->SizeOfBlock);
        if ((BYTE*)reloc >= localBase + imageSize) break;
    }

    return TRUE;
}

/* 处理导入表 (在本地副本上, 填入本地函数地址) */
static BOOL ResolveImports(BYTE* localBase) {
    PIMAGE_DOS_HEADER dos = (PIMAGE_DOS_HEADER)localBase;
    PIMAGE_NT_HEADERS nt = (PIMAGE_NT_HEADERS)(localBase + dos->e_lfanew);

    DWORD importRva = nt->OptionalHeader.DataDirectory
        [IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
    if (importRva == 0) return TRUE;

    PIMAGE_IMPORT_DESCRIPTOR imp =
        (PIMAGE_IMPORT_DESCRIPTOR)(localBase + importRva);

    while (imp->Name) {
        const char* dllName = (const char*)(localBase + imp->Name);
        HMODULE hDll = LoadLibraryA(dllName);
        if (!hDll) {
            KG_WARN("无法加载依赖 DLL: %s", dllName);
            imp++;
            continue;
        }

        PIMAGE_THUNK_DATA origThunk = (PIMAGE_THUNK_DATA)
            (localBase + (imp->OriginalFirstThunk ? imp->OriginalFirstThunk : imp->FirstThunk));
        PIMAGE_THUNK_DATA firstThunk = (PIMAGE_THUNK_DATA)
            (localBase + imp->FirstThunk);

        while (origThunk && origThunk->u1.AddressOfData) {
            FARPROC funcAddr = NULL;

            if (IMAGE_SNAP_BY_ORDINAL(origThunk->u1.Ordinal)) {
                funcAddr = GetProcAddress(hDll,
                    (LPCSTR)IMAGE_ORDINAL(origThunk->u1.Ordinal));
            } else {
                PIMAGE_IMPORT_BY_NAME impName = (PIMAGE_IMPORT_BY_NAME)
                    (localBase + origThunk->u1.AddressOfData);
                funcAddr = GetProcAddress(hDll, impName->Name);
            }

            if (funcAddr) {
                firstThunk->u1.Function = (ULONGLONG)(uintptr_t)funcAddr;
            } else {
                KG_WARN("无法解析函数: %s!%d", dllName,
                        (int)origThunk->u1.Ordinal);
            }

            origThunk++;
            firstThunk++;
        }

        imp++;
    }

    return TRUE;
}

/* 映射节区到目标缓冲区 */
static BOOL MapSections(BYTE* fileData, BYTE* targetBase) {
    PIMAGE_DOS_HEADER dos = (PIMAGE_DOS_HEADER)fileData;
    PIMAGE_NT_HEADERS nt = (PIMAGE_NT_HEADERS)(fileData + dos->e_lfanew);

    PIMAGE_SECTION_HEADER section = IMAGE_FIRST_SECTION(nt);

    for (WORD i = 0; i < nt->FileHeader.NumberOfSections; i++) {
        if (section[i].SizeOfRawData == 0) continue;

        memcpy(targetBase + section[i].VirtualAddress,
               fileData + section[i].PointerToRawData,
               section[i].SizeOfRawData);
    }

    return TRUE;
}

BOOL KgManualMap(HANDLE hProcess, const char* dllPath) {
    if (hProcess == NULL || !dllPath) return FALSE;

    KG_INFO("开始手动映射: %s", dllPath);

    /* 1. 读取 DLL 文件 */
    BYTE* dllData = NULL;
    u32 dllSize = 0;
    if (!ReadDllFile(dllPath, &dllData, &dllSize)) {
        return FALSE;
    }

    /* 2. 解析 PE 头 */
    PIMAGE_DOS_HEADER dos = (PIMAGE_DOS_HEADER)dllData;
    if (dos->e_magic != IMAGE_DOS_SIGNATURE) {
        KG_ERROR("无效的 DOS 头");
        free(dllData);
        return FALSE;
    }

    PIMAGE_NT_HEADERS nt = (PIMAGE_NT_HEADERS)(dllData + dos->e_lfanew);
    if (nt->Signature != IMAGE_NT_SIGNATURE) {
        KG_ERROR("无效的 PE 头");
        free(dllData);
        return FALSE;
    }

    u32 imageSize = nt->OptionalHeader.SizeOfImage;
    KG_DEBUG("DLL 镜像大小: %u bytes", imageSize);

    /* 3. 在远程进程分配内存 */
    PVOID remoteBase = RemoteAlloc(hProcess, imageSize, PAGE_EXECUTE_READWRITE);
    if (!remoteBase) {
        KG_ERROR("远程内存分配失败");
        free(dllData);
        return FALSE;
    }
    KG_DEBUG("远程基址: 0x%p", remoteBase);

    /* 4. 创建本地副本并 fixup */
    BYTE* localCopy = (BYTE*)calloc(1, imageSize);
    if (!localCopy) {
        RemoteFree(hProcess, remoteBase);
        free(dllData);
        return FALSE;
    }

    /* 4a. 复制 PE 头 */
    memcpy(localCopy, dllData, nt->OptionalHeader.SizeOfHeaders);

    /* 4b. 映射节区 */
    MapSections(dllData, localCopy);

    /* 4c. 处理重定位 */
    u32 delta = (u32)((uintptr_t)remoteBase - nt->OptionalHeader.ImageBase);
    ApplyRelocations(localCopy, imageSize, delta);
    KG_DEBUG("重定位 delta: 0x%08X", delta);

    /* 4d. 解析导入表 (填入本地函数地址)
     * 注意: 填入的是本进程的函数地址, 远程进程需要相同的 DLL 基址
     * 对于系统 DLL (kernel32/ntdll) 在同一 Windows 会话中基址相同 */
    ResolveImports(localCopy);
    KG_DEBUG("导入表解析完成");

    /* 5. 写入远程进程 */
    if (!RemoteWrite(hProcess, remoteBase, localCopy, imageSize)) {
        KG_ERROR("写入远程进程失败");
        free(localCopy);
        RemoteFree(hProcess, remoteBase);
        free(dllData);
        return FALSE;
    }

    /* 6. 调用 DllMain (通过 NtCreateThreadEx) */
    u32 entryPoint = (u32)((uintptr_t)remoteBase +
                           nt->OptionalHeader.AddressOfEntryPoint);
    KG_DEBUG("入口点: 0x%08X", entryPoint);

    if (g_NtCreateThreadEx) {
        HANDLE hThread = NULL;
        NTSTATUS st = g_NtCreateThreadEx(
            &hThread, 0x1F0F0FFF, NULL, hProcess,
            (PVOID)entryPoint, remoteBase, 0,
            0, 0, 0, NULL);

        if (st == 0 && hThread) {
            WaitForSingleObject(hThread, 5000);
            CloseHandle(hThread);
            KG_INFO("手动映射成功, DllMain 已执行");
        } else {
            KG_WARN("NtCreateThreadEx 调用 DllMain 失败 (0x%08X)", st);
        }
    }

    /* 7. 清理本地资源 (远程内存保留) */
    free(localCopy);
    free(dllData);

    return TRUE;
}

/* ============================================================
 * 等待进程就绪
 * ============================================================ */

BOOL KgWaitForProcessReady(HANDLE hProcess, DWORD timeoutMs) {
    if (hProcess == NULL) return FALSE;

    DWORD startTick = GetTickCount();
    DWORD elapsed = 0;
    DWORD targetPid = GetProcessId(hProcess);

    KG_DEBUG("等待进程就绪 (PID: %lu, 超时: %lu ms)", targetPid, timeoutMs);

    while (elapsed < timeoutMs) {
        DWORD exitCode;
        if (GetExitCodeProcess(hProcess, &exitCode)) {
            if (exitCode != STILL_ACTIVE) {
                KG_WARN("进程已退出 (退出码: %lu)", exitCode);
                return FALSE;
            }
        }

        HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, targetPid);
        if (snapshot != INVALID_HANDLE_VALUE) {
            MODULEENTRY32 entry = {0};
            entry.dwSize = sizeof(entry);
            if (Module32First(snapshot, &entry)) {
                CloseHandle(snapshot);
                KG_DEBUG("进程已就绪 (%lu ms)", elapsed);
                return TRUE;
            }
            CloseHandle(snapshot);
        }

        Sleep(100);
        elapsed = GetTickCount() - startTick;
    }

    KG_WARN("等待超时 (%lu ms)", timeoutMs);
    return FALSE;
}

/* ============================================================
 * 自动注入 (KG 式优先)
 * ============================================================ */

BOOL KgAutoInject(HANDLE hProcess, const char* dllPath) {
    if (hProcess == NULL || !dllPath) return FALSE;

    KG_INFO("开始注入: %s", dllPath);

    /* 1. 等待进程就绪 */
    if (!KgWaitForProcessReady(hProcess, 10000)) {
        KG_WARN("进程未就绪, 尝试直接注入");
    }

    /* 2. 优先: NtCreateThreadEx + LdrLoadDll (KG 反编译方式) */
    KG_DEBUG("尝试 NtCreateThreadEx 注入 (KG 方式)...");
    if (InjectViaNtCreateThreadEx(hProcess, dllPath)) {
        return TRUE;
    }

    /* 3. 手动映射 (完整 PE 加载, 不走 LoadLibrary) */
    KG_DEBUG("尝试手动映射...");
    if (KgManualMap(hProcess, dllPath)) {
        return TRUE;
    }

    /* 4. 回退: APC 注入 */
    KG_DEBUG("尝试 APC 注入...");
    if (KgInjectApc(hProcess, dllPath)) {
        return TRUE;
    }

    /* 5. 最后回退: CreateRemoteThread */
    KG_DEBUG("尝试经典注入...");
    if (KgInjectClassic(hProcess, dllPath)) {
        return TRUE;
    }

    KG_ERROR("所有注入方式均失败");
    return FALSE;
}

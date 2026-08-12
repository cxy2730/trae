/**
 * KG Assist - 注入模块
 * 功能: 将 DLL 注入到目标进程
 *
 * 技术要点:
 * - 手动映射 DLL (手动实现 PE 加载)
 * - APC 注入 (利用异步过程调用机制)
 * - CreateRemoteThread + LoadLibrary (经典注入)
 * - 时机选择 (等待目标进程就绪)
 */

#include "../include/common.h"

/* ============================================================
 * DLL 文件读取
 * ============================================================ */

/**
 * 读取 DLL 文件到内存
 */
static BOOL ReadDllFile(const char* path, BYTE** outData, u32* outSize) {
    if (!path || !outData || !outSize) return FALSE;
    
    HANDLE hFile = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ,
                               NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        KG_ERROR("打开 DLL 文件失败: %s", path);
        return FALSE;
    }
    
    DWORD fileSize = GetFileSize(hFile, NULL);
    if (fileSize == 0 || fileSize == INVALID_FILE_SIZE) {
        KG_ERROR("DLL 文件大小无效: %lu", fileSize);
        CloseHandle(hFile);
        return FALSE;
    }
    
    BYTE* data = (BYTE*)malloc(fileSize);
    if (!data) {
        KG_ERROR("分配内存失败");
        CloseHandle(hFile);
        return FALSE;
    }
    
    DWORD bytesRead = 0;
    if (!ReadFile(hFile, data, fileSize, &bytesRead, NULL) || bytesRead != fileSize) {
        KG_ERROR("读取 DLL 文件失败");
        free(data);
        CloseHandle(hFile);
        return FALSE;
    }
    
    CloseHandle(hFile);
    
    *outData = data;
    *outSize = fileSize;
    
    KG_DEBUG("读取 DLL 成功: %s (%lu 字节)", path, fileSize);
    return TRUE;
}

/* ============================================================
 * 手动映射注入 (Manual Map)
 * ============================================================ */

/**
 * 手动映射 DLL 到目标进程
 */
BOOL KgManualMap(HANDLE hProcess, const char* dllPath) {
    if (hProcess == NULL || !dllPath) return FALSE;
    
    // 1. 读取 DLL 文件
    BYTE* dllData = NULL;
    u32 dllSize = 0;
    
    if (!ReadDllFile(dllPath, &dllData, &dllSize)) {
        return FALSE;
    }
    
    // 2. 解析 PE 头
    PIMAGE_DOS_HEADER dosHeader = (PIMAGE_DOS_HEADER)dllData;
    if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE) {
        KG_ERROR("无效的 PE 文件 (DOS 签名错误)");
        free(dllData);
        return FALSE;
    }
    
    PIMAGE_NT_HEADERS ntHeaders = (PIMAGE_NT_HEADERS)
        ((BYTE*)dllData + dosHeader->e_lfanew);
    
    if (ntHeaders->Signature != IMAGE_NT_SIGNATURE) {
        KG_ERROR("无效的 PE 文件 (NT 签名错误)");
        free(dllData);
        return FALSE;
    }
    
    KG_DEBUG("PE 验证通过, 镜像大小: 0x%X", ntHeaders->OptionalHeader.SizeOfImage);
    
    // 3. 在目标进程分配内存
    SIZE_T imageSize = ntHeaders->OptionalHeader.SizeOfImage;
    PVOID remoteBase = NULL;
    
    // 使用 VirtualAllocEx (更兼容)
    remoteBase = VirtualAllocEx(hProcess, NULL, imageSize,
                                 MEM_COMMIT | MEM_RESERVE,
                                 PAGE_EXECUTE_READWRITE);
    
    if (remoteBase == NULL) {
        KG_ERROR("在目标进程分配内存失败");
        free(dllData);
        return FALSE;
    }
    
    KG_DEBUG("远程内存分配成功: 0x%p", remoteBase);
    
    // 4. 拷贝 PE 头
    SIZE_T headersSize = ntHeaders->OptionalHeader.SizeOfHeaders;
    if (!WriteProcessMemory(hProcess, remoteBase, dllData, headersSize, NULL)) {
        KG_ERROR("写入 PE 头失败");
        VirtualFreeEx(hProcess, remoteBase, 0, MEM_RELEASE);
        free(dllData);
        return FALSE;
    }
    
    // 5. 拷贝各节区
    PIMAGE_SECTION_HEADER sections = IMAGE_FIRST_SECTION(ntHeaders);
    for (WORD i = 0; i < ntHeaders->FileHeader.NumberOfSections; i++) {
        if (sections[i].SizeOfRawData == 0) continue;
        
        PVOID sectionDest = (PVOID)((BYTE*)remoteBase + sections[i].VirtualAddress);
        PVOID sectionSrc = (BYTE*)dllData + sections[i].PointerToRawData;
        SIZE_T sectionSize = sections[i].SizeOfRawData;
        
        if (!WriteProcessMemory(hProcess, sectionDest, sectionSrc, sectionSize, NULL)) {
            KG_WARN("写入节区 %d 失败", i);
        }
    }
    
    KG_DEBUG("节区拷贝完成");
    
    // 6. 计算重定位 (如果基址不同)
    ULONG delta = (ULONG)((BYTE*)remoteBase - ntHeaders->OptionalHeader.ImageBase);
    if (delta != 0) {
        // 使用数据目录中的重定位表
        DWORD relocRva = ntHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress;
        
        if (relocRva != 0) {
            PIMAGE_BASE_RELOCATION relocation = (PIMAGE_BASE_RELOCATION)
                ((BYTE*)remoteBase + relocRva);
            
            if (relocation) {
                while (relocation->SizeOfBlock > 0) {
                    ULONG count = (relocation->SizeOfBlock - sizeof(IMAGE_BASE_RELOCATION)) / sizeof(USHORT);
                    PUSHORT relocEntries = (PUSHORT)((BYTE*)relocation + sizeof(IMAGE_BASE_RELOCATION));
                    
                    for (ULONG j = 0; j < count; j++) {
                        if (relocEntries[j] >> 12 == IMAGE_REL_BASED_HIGHLOW) {
                            PULONG patchAddr = (PULONG)((BYTE*)remoteBase + (relocEntries[j] & 0x0FFF));
                            ULONG originalValue = *patchAddr;
                            *patchAddr = originalValue + delta;
                        }
                    }
                    
                    relocation = (PIMAGE_BASE_RELOCATION)((BYTE*)relocation + relocation->SizeOfBlock);
                }
            }
        }
        KG_DEBUG("重定位完成 (delta: 0x%X)", delta);
    }
    
    // 7. 解析导入表
    DWORD importRva = ntHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
    if (importRva != 0) {
        PIMAGE_IMPORT_DESCRIPTOR importDesc = (PIMAGE_IMPORT_DESCRIPTOR)
            ((BYTE*)remoteBase + importRva);
        
        while (importDesc->Name) {
            // 获取 DLL 名
            char* dllName = (char*)((BYTE*)remoteBase + importDesc->Name);
            HMODULE hModule = LoadLibraryA(dllName);
            
            if (hModule) {
                // 处理每个导入函数
                PIMAGE_THUNK_DATA thunk = (PIMAGE_THUNK_DATA)
                    ((BYTE*)remoteBase + importDesc->OriginalFirstThunk);
                PIMAGE_THUNK_DATA iat = (PIMAGE_THUNK_DATA)
                    ((BYTE*)remoteBase + importDesc->FirstThunk);
                
                while (thunk->u1.Function) {
                    if (thunk->u1.Ordinal & IMAGE_ORDINAL_FLAG) {
                        // 按序号导入
                        FARPROC func = GetProcAddress(hModule,
                            (LPCSTR)thunk->u1.Ordinal);
                        if (func) {
                            iat->u1.Function = (ULONGLONG)(ULONG)func;
                        }
                    } else {
                        // 按名称导入
                        PIMAGE_IMPORT_BY_NAME importByName = (PIMAGE_IMPORT_BY_NAME)
                            ((BYTE*)remoteBase + thunk->u1.AddressOfData);
                        FARPROC func = GetProcAddress(hModule, importByName->Name);
                        if (func) {
                            iat->u1.Function = (ULONGLONG)(ULONG)func;
                        }
                    }
                    
                    thunk++;
                    iat++;
                }
            }
            
            importDesc++;
        }
        KG_DEBUG("导入表解析完成");
    }
    
    // 8. 创建远程线程执行入口点
    PVOID entryPoint = (PVOID)((BYTE*)remoteBase +
                               ntHeaders->OptionalHeader.AddressOfEntryPoint);
    
    HANDLE hThread = CreateRemoteThread(hProcess, NULL, 0,
        (LPTHREAD_START_ROUTINE)entryPoint,
        remoteBase, 0, NULL);
    
    if (hThread == NULL) {
        KG_ERROR("创建远程线程失败");
        free(dllData);
        return FALSE;
    }
    
    // 等待入口点执行完成 (最长 5 秒)
    WaitForSingleObject(hThread, 5000);
    CloseHandle(hThread);
    
    KG_INFO("手动映射注入成功: %s -> PID %lu", dllPath, (u32)(ULONG_PTR)hProcess);
    
    free(dllData);
    return TRUE;
}

/* ============================================================
 * APC 注入 (异步过程调用)
 * ============================================================ */

BOOL KgInjectApc(HANDLE hProcess, const char* dllPath) {
    if (hProcess == NULL || !dllPath) return FALSE;
    
    // 1. 获取 DLL 路径大小
    u32 pathSize = (u32)(strlen(dllPath) + 1);
    
    // 2. 在目标进程分配内存存储路径
    PVOID remotePath = VirtualAllocEx(hProcess, NULL, pathSize,
                                       MEM_COMMIT | MEM_RESERVE,
                                       PAGE_READWRITE);
    if (remotePath == NULL) {
        KG_ERROR("在目标进程分配内存失败 (APC)");
        return FALSE;
    }
    
    // 3. 写入 DLL 路径
    if (!WriteProcessMemory(hProcess, remotePath, dllPath, pathSize, NULL)) {
        KG_ERROR("写入 DLL 路径失败");
        VirtualFreeEx(hProcess, remotePath, 0, MEM_RELEASE);
        return FALSE;
    }
    
    // 4. 获取 LoadLibraryA 地址
    HMODULE hKernel32 = GetModuleHandleA("kernel32.dll");
    if (hKernel32 == NULL) {
        KG_ERROR("获取 kernel32.dll 句柄失败");
        VirtualFreeEx(hProcess, remotePath, 0, MEM_RELEASE);
        return FALSE;
    }
    
    LPVOID loadLibraryAddr = (LPVOID)GetProcAddress(hKernel32, "LoadLibraryA");
    if (loadLibraryAddr == NULL) {
        KG_ERROR("获取 LoadLibraryA 地址失败");
        VirtualFreeEx(hProcess, remotePath, 0, MEM_RELEASE);
        return FALSE;
    }
    
    // 5. 枚举目标进程线程
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    if (snapshot == INVALID_HANDLE_VALUE) {
        KG_ERROR("创建线程快照失败");
        VirtualFreeEx(hProcess, remotePath, 0, MEM_RELEASE);
        return FALSE;
    }
    
    THREADENTRY32 threadEntry = {0};
    threadEntry.dwSize = sizeof(threadEntry);
    
    BOOL injected = FALSE;
    DWORD targetPid = (DWORD)(ULONG_PTR)hProcess;
    
    if (Thread32First(snapshot, &threadEntry)) {
        do {
            // 只处理目标进程的线程
            if (threadEntry.th32OwnerProcessID == targetPid &&
                threadEntry.th32ThreadID != 0) {
                
                // 打开线程
                HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, FALSE,
                                             threadEntry.th32ThreadID);
                if (hThread != NULL) {
                    // 尝试排队 APC
                    if (QueueUserAPC((PAPCFUNC)loadLibraryAddr,
                                       hThread, (ULONG_PTR)remotePath)) {
                        injected = TRUE;
                        KG_DEBUG("APC 注入到线程 %lu", threadEntry.th32ThreadID);
                    }
                    CloseHandle(hThread);
                }
            }
        } while (Thread32Next(snapshot, &threadEntry));
    }
    
    CloseHandle(snapshot);
    VirtualFreeEx(hProcess, remotePath, 0, MEM_RELEASE);
    
    if (injected) {
        KG_INFO("APC 注入请求已发送, 等待目标线程处理...");
        return TRUE;
    }
    
    KG_WARN("APC 注入失败 (可能没有可警告的线程)");
    return FALSE;
}

/* ============================================================
 * 经典注入 (CreateRemoteThread + LoadLibrary)
 * ============================================================ */

BOOL KgInjectClassic(HANDLE hProcess, const char* dllPath) {
    if (hProcess == NULL || !dllPath) return FALSE;
    
    // 1. 获取 LoadLibraryA 地址
    HMODULE hKernel32 = GetModuleHandleA("kernel32.dll");
    LPVOID loadLibraryAddr = (LPVOID)GetProcAddress(hKernel32, "LoadLibraryA");
    if (loadLibraryAddr == NULL) {
        KG_ERROR("获取 LoadLibraryA 地址失败");
        return FALSE;
    }
    
    // 2. 在目标进程分配内存存储 DLL 路径
    u32 pathSize = (u32)(strlen(dllPath) + 1);
    PVOID remotePath = VirtualAllocEx(hProcess, NULL, pathSize,
                                       MEM_COMMIT | MEM_RESERVE,
                                       PAGE_READWRITE);
    if (remotePath == NULL) {
        KG_ERROR("在目标进程分配内存失败");
        return FALSE;
    }
    
    // 3. 写入 DLL 路径
    if (!WriteProcessMemory(hProcess, remotePath, dllPath, pathSize, NULL)) {
        KG_ERROR("写入 DLL 路径失败");
        VirtualFreeEx(hProcess, remotePath, 0, MEM_RELEASE);
        return FALSE;
    }
    
    // 4. 创建远程线程
    HANDLE hThread = CreateRemoteThread(hProcess, NULL, 0,
        (LPTHREAD_START_ROUTINE)loadLibraryAddr,
        remotePath, 0, NULL);
    
    if (hThread == NULL) {
        KG_ERROR("创建远程线程失败 (错误: %lu)", GetLastError());
        VirtualFreeEx(hProcess, remotePath, 0, MEM_RELEASE);
        return FALSE;
    }
    
    // 5. 等待加载完成
    WaitForSingleObject(hThread, 5000);
    CloseHandle(hThread);
    
    // 6. 清理远程内存
    VirtualFreeEx(hProcess, remotePath, 0, MEM_RELEASE);
    
    KG_INFO("经典注入成功: %s", dllPath);
    return TRUE;
}

/* ============================================================
 * 注入时机控制
 * ============================================================ */

BOOL KgWaitForProcessReady(HANDLE hProcess, DWORD timeoutMs) {
    if (hProcess == NULL) return FALSE;
    
    DWORD startTick = GetTickCount();
    DWORD elapsed = 0;
    DWORD targetPid = (DWORD)(ULONG_PTR)hProcess;
    
    KG_INFO("等待进程就绪 (超时: %lu ms)...", timeoutMs);
    
    while (elapsed < timeoutMs) {
        // 检查进程是否仍在运行
        DWORD exitCode;
        if (GetExitCodeProcess(hProcess, &exitCode)) {
            if (exitCode != STILL_ACTIVE) {
                KG_WARN("进程已退出 (退出码: %lu)", exitCode);
                return FALSE;
            }
        }
        
        // 尝试探测可注入状态
        HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, targetPid);
        if (snapshot != INVALID_HANDLE_VALUE) {
            MODULEENTRY32 entry = {0};
            entry.dwSize = sizeof(entry);
            
            if (Module32First(snapshot, &entry)) {
                CloseHandle(snapshot);
                KG_INFO("进程已就绪 (已运行 %lu ms)", elapsed);
                return TRUE;
            }
            CloseHandle(snapshot);
        }
        
        // 等待 100ms 后重试
        Sleep(100);
        elapsed = GetTickCount() - startTick;
    }
    
    KG_WARN("等待超时 (%lu ms)", timeoutMs);
    return FALSE;
}

/**
 * 选择最佳注入方式
 */
BOOL KgAutoInject(HANDLE hProcess, const char* dllPath) {
    if (hProcess == NULL || !dllPath) return FALSE;
    
    KG_INFO("自动选择注入方式: %s", dllPath);
    
    // 先等待进程就绪
    if (!KgWaitForProcessReady(hProcess, 10000)) {
        return FALSE;
    }
    
    // 优先使用 Manual Map (最隐蔽)
    KG_DEBUG("尝试手动映射注入...");
    if (KgManualMap(hProcess, dllPath)) {
        return TRUE;
    }
    
    KG_DEBUG("手动映射失败, 尝试 APC 注入...");
    if (KgInjectApc(hProcess, dllPath)) {
        return TRUE;
    }
    
    KG_DEBUG("APC 注入失败, 尝试经典注入...");
    if (KgInjectClassic(hProcess, dllPath)) {
        return TRUE;
    }
    
    KG_ERROR("所有注入方式均失败");
    return FALSE;
}
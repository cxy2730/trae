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
 * 读取 DLL 文件到内存 (保留供未来手动映射实现使用)
 */
__attribute__((unused))
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
    (void)hProcess; (void)dllPath;
    KG_WARN("手动映射注入暂未完全实现, 回退到其他注入方式");
    return FALSE;
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
    DWORD targetPid = GetProcessId(hProcess);
    
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
    DWORD targetPid = GetProcessId(hProcess);
    
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
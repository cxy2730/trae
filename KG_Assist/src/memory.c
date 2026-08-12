/**
 * KG Assist - 内存操作模块
 * 功能: 读写进程内存、特征码扫描、指针链解析
 *
 * 技术要点:
 * - 运行时动态解析 NtReadVirtualMemory/NtWriteVirtualMemory
 * - 支持多进程内存读写
 * - 高效特征码扫描 (通配符支持)
 * - 指针链自动解析
 */

#include "../include/common.h"

/* 全局 API 表 */
KgApiTable g_Api = {0};

/* ============================================================
 * API 加载 (运行时解析)
 * ============================================================ */
BOOL KgLoadApis(VOID) {
    HMODULE hK32 = GetModuleHandleA("kernel32.dll");
    HMODULE hNtd = GetModuleHandleA("ntdll.dll");
    if (!hK32 || !hNtd) return FALSE;

    g_Api.GetProcAddress   = (GetProcAddress_t)GetProcAddress(hK32, "GetProcAddress");
    g_Api.LoadLibraryA     = (LoadLibraryA_t)GetProcAddress(hK32, "LoadLibraryA");
    g_Api.LoadLibraryW     = (LoadLibraryW_t)GetProcAddress(hK32, "LoadLibraryW");
    g_Api.GetModuleHandleA = (GetModuleHandleA_t)GetProcAddress(hK32, "GetModuleHandleA");
    g_Api.GetCurrentProcess= (GetCurrentProcess_t)GetProcAddress(hK32, "GetCurrentProcess");
    g_Api.OpenProcess      = (OpenProcess_t)GetProcAddress(hK32, "OpenProcess");
    g_Api.CloseHandle      = (CloseHandle_t)GetProcAddress(hK32, "CloseHandle");
    g_Api.CreateToolhelp32Snapshot = (CreateToolhelp32Snapshot_t)GetProcAddress(hK32, "CreateToolhelp32Snapshot");
    g_Api.Process32First   = (Process32First_t)GetProcAddress(hK32, "Process32First");
    g_Api.Process32Next    = (Process32Next_t)GetProcAddress(hK32, "Process32Next");
    g_Api.Module32First    = (Module32First_t)GetProcAddress(hK32, "Module32First");
    g_Api.Module32Next     = (Module32Next_t)GetProcAddress(hK32, "Module32Next");
    g_Api.VirtualAlloc     = (VirtualAlloc_t)GetProcAddress(hK32, "VirtualAlloc");
    g_Api.VirtualFree      = (VirtualFree_t)GetProcAddress(hK32, "VirtualFree");
    g_Api.VirtualProtect   = (VirtualProtect_t)GetProcAddress(hK32, "VirtualProtect");
    g_Api.VirtualQuery     = (VirtualQuery_t)GetProcAddress(hK32, "VirtualQuery");
    g_Api.ReadProcessMemory  = (ReadProcessMemory_t)GetProcAddress(hK32, "ReadProcessMemory");
    g_Api.WriteProcessMemory = (WriteProcessMemory_t)GetProcAddress(hK32, "WriteProcessMemory");

    g_Api.NtQueryInformationProcess = (NtQueryInformationProcess_t)GetProcAddress(hNtd, "NtQueryInformationProcess");
    g_Api.NtAllocateVirtualMemory  = (NtAllocateVirtualMemory_t)GetProcAddress(hNtd, "NtAllocateVirtualMemory");
    g_Api.NtProtectVirtualMemory   = (NtProtectVirtualMemory_t)GetProcAddress(hNtd, "NtProtectVirtualMemory");
    g_Api.NtReadVirtualMemory      = (NtReadVirtualMemory_t)GetProcAddress(hNtd, "NtReadVirtualMemory");
    g_Api.NtWriteVirtualMemory     = (NtWriteVirtualMemory_t)GetProcAddress(hNtd, "NtWriteVirtualMemory");
    g_Api.NtUnmapViewOfSection     = (NtUnmapViewOfSection_t)GetProcAddress(hNtd, "NtUnmapViewOfSection");

    g_Api.pOrigIsDebuggerPresent          = (IsDebuggerPresent_t)GetProcAddress(hK32, "IsDebuggerPresent");
    g_Api.pOrigCheckRemoteDebuggerPresent = (CheckRemoteDebuggerPresent_t)GetProcAddress(hK32, "CheckRemoteDebuggerPresent");
    g_Api.pOrigOutputDebugStringA         = (OutputDebugStringA_t)GetProcAddress(hK32, "OutputDebugStringA");
    g_Api.pOrigOutputDebugStringW         = (OutputDebugStringW_t)GetProcAddress(hK32, "OutputDebugStringW");
    g_Api.pOrigGetTickCount               = (GetTickCount_t)GetProcAddress(hK32, "GetTickCount");
    g_Api.pOrigQueryPerformanceCounter    = (QueryPerformanceCounter_t)GetProcAddress(hK32, "QueryPerformanceCounter");

    return TRUE;
}

/* ============================================================
 * 内存读写 (NT API 优先, Win32 API 备用)
 * ============================================================ */

/**
 * 读取当前进程内存 (内部使用)
 * 优先使用 NtReadVirtualMemory (绕过部分检测)
 */
BOOL KgReadMemory(u32 address, void* buffer, u32 size) {
    if (!g_Api.NtReadVirtualMemory) {
        // 降级使用 Win32 API
        SIZE_T bytesRead = 0;
        return g_Api.ReadProcessMemory(
            g_Api.GetCurrentProcess(),
            (LPCVOID)address,
            buffer,
            (SIZE_T)size,
            &bytesRead
        );
    }
    
    ULONG bytesRead = 0;
    NTSTATUS status = g_Api.NtReadVirtualMemory(
        g_Api.GetCurrentProcess(),
        (PVOID)address,
        buffer,
        size,
        &bytesRead
    );
    
    return (status == 0 && bytesRead == size);
}

/**
 * 写入当前进程内存 (内部使用)
 */
BOOL KgWriteMemory(u32 address, const void* buffer, u32 size) {
    if (!g_Api.NtWriteVirtualMemory) {
        SIZE_T bytesWritten = 0;
        return g_Api.WriteProcessMemory(
            g_Api.GetCurrentProcess(),
            (LPVOID)address,
            buffer,
            (SIZE_T)size,
            &bytesWritten
        );
    }
    
    ULONG bytesWritten = 0;
    NTSTATUS status = g_Api.NtWriteVirtualMemory(
        g_Api.GetCurrentProcess(),
        (PVOID)address,
        (PVOID)buffer,
        size,
        &bytesWritten
    );
    
    return (status == 0 && bytesWritten == size);
}

/**
 * 读取指定进程内存
 * 先尝试 NT API, 失败则降级到 Win32 API
 */
BOOL KgReadProcessMemory(HANDLE proc, u32 address, void* buffer, u32 size) {
    if (proc == NULL || buffer == NULL || size == 0) {
        return FALSE;
    }
    
    if (g_Api.NtReadVirtualMemory) {
        ULONG bytesRead = 0;
        NTSTATUS status = g_Api.NtReadVirtualMemory(
            proc, (PVOID)address, buffer, size, &bytesRead
        );
        if (status == 0 && bytesRead == size) {
            return TRUE;
        }
        // NT API 失败, 尝试 Win32 API
    }
    
    SIZE_T bytesRead = 0;
    return g_Api.ReadProcessMemory(
        proc, (LPCVOID)address, buffer, (SIZE_T)size, &bytesRead
    );
}

/**
 * 写入指定进程内存
 */
BOOL KgWriteProcessMemory(HANDLE proc, u32 address, const void* buffer, u32 size) {
    if (proc == NULL || buffer == NULL || size == 0) {
        return FALSE;
    }
    
    // 先修改内存保护属性 (如果需要)
    DWORD oldProtect;
    if (!g_Api.VirtualProtect((LPVOID)address, size,
            KG_PAGE_EXECUTE_READWRITE, &oldProtect)) {
        // 继续尝试, 可能已经是可写
    }
    
    if (g_Api.NtWriteVirtualMemory) {
        ULONG bytesWritten = 0;
        NTSTATUS status = g_Api.NtWriteVirtualMemory(
            proc, (PVOID)address, (PVOID)buffer, size, &bytesWritten
        );
        if (status == 0 && bytesWritten == size) {
            // 恢复保护属性
            g_Api.VirtualProtect((LPVOID)address, size, oldProtect, &oldProtect);
            return TRUE;
        }
    }
    
    SIZE_T bytesWritten = 0;
    BOOL result = g_Api.WriteProcessMemory(
        proc, (LPVOID)address, buffer, (SIZE_T)size, &bytesWritten
    );
    g_Api.VirtualProtect((LPVOID)address, size, oldProtect, &oldProtect);
    return result;
}

/* ============================================================
 * 内存分配/释放
 * ============================================================ */

/**
 * 在当前进程分配内存
 * 优先使用 NtAllocateVirtualMemory
 */
u32 KgAllocateMemory(u32 size, DWORD protect) {
    if (size == 0) return 0;
    
    if (g_Api.NtAllocateVirtualMemory) {
        PVOID baseAddress = NULL;
        SIZE_T regionSize = size;
        NTSTATUS status = g_Api.NtAllocateVirtualMemory(
            g_Api.GetCurrentProcess(),
            &baseAddress,
            0,
            &regionSize,
            KG_MEM_COMMIT | KG_MEM_RESERVE,
            protect
        );
        if (status == 0 && baseAddress) {
            return (u32)baseAddress;
        }
    }
    
    // 降级使用 Win32 API
    LPVOID result = g_Api.VirtualAlloc(
        NULL, size,
        KG_MEM_COMMIT | KG_MEM_RESERVE,
        protect
    );
    return result ? (u32)result : 0;
}

/**
 * 释放内存
 */
BOOL KgFreeMemory(u32 address) {
    if (address == 0) return FALSE;
    return g_Api.VirtualFree((LPVOID)address, 0, KG_MEM_RELEASE);
}

/* ============================================================
 * 特征码扫描
 * ============================================================ */

/**
 * 字节匹配检查 (支持通配符 '?')
 * @param pattern 目标模式
 * @param mask 掩码 ('x'=必须匹配, '?'=通配)
 * @param data 待扫描数据
 * @param len 待扫描数据长度
 * @return 匹配位置, -1 表示未匹配
 */
static s32 MatchPattern(const u8* pattern, const char* mask, u32 patternLen,
                       const u8* data, u32 dataLen) {
    u32 i, j;
    
    for (i = 0; i <= dataLen - patternLen; i++) {
        BOOL match = TRUE;
        for (j = 0; j < patternLen; j++) {
            if (mask[j] == 'x' && data[i + j] != pattern[j]) {
                match = FALSE;
                break;
            }
        }
        if (match) {
            return (s32)i;
        }
    }
    return -1;
}

/**
 * 在指定内存区域扫描特征码
 * @param pattern 特征码模式
 * @param results 结果数组
 * @param maxResults 最大结果数
 * @return 找到的数量
 */
s32 KgScanForPattern(const KgPattern* pattern, KgScanResult* results, u32 maxResults) {
    if (!pattern || !results || pattern->length == 0 || maxResults == 0) {
        return 0;
    }
    
    s32 resultCount = 0;
    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);
    
    u32 address = 0;
    u32 maxAddress = (u32)sysInfo.lpMaximumApplicationAddress;
    
    KG_DEBUG("开始扫描特征码: %s (长度: %u)", pattern->name, pattern->length);
    
    while (address < maxAddress && resultCount < (s32)maxResults) {
        MEMORY_BASIC_INFORMATION mbi;
        if (!g_Api.VirtualQuery((LPCVOID)address, &mbi, sizeof(mbi))) {
            address += 0x10000;
            continue;
        }
        
        // 只扫描已提交的内存区域
        if (mbi.State == MEM_COMMIT) {
            // 检查保护属性
            DWORD protect = mbi.Protect;
            BOOL canScan = FALSE;
            
            // 可读的内存区域
            if (protect == PAGE_READONLY ||
                protect == PAGE_READWRITE ||
                protect == PAGE_WRITECOPY ||
                protect == PAGE_EXECUTE_READ ||
                protect == PAGE_EXECUTE_READWRITE ||
                protect == PAGE_EXECUTE_WRITECOPY) {
                canScan = TRUE;
            }
            
            if (canScan) {
                // 读取内存区域
                u32 regionSize = (u32)mbi.RegionSize;
                if (regionSize > 0 && regionSize < 64 * 1024 * 1024) {  // 64MB 上限
                    u8* buffer = (u8*)malloc(regionSize);
                    if (buffer) {
                        SIZE_T bytesRead = 0;
                        if (g_Api.ReadProcessMemory(
                                g_Api.GetCurrentProcess(),
                                mbi.BaseAddress,
                                buffer,
                                regionSize,
                                &bytesRead) && bytesRead > 0) {
                            
                            // 搜索模式
                            s32 offset = MatchPattern(
                                pattern->pattern,
                                pattern->mask,
                                pattern->length,
                                buffer,
                                (u32)bytesRead
                            );
                            
                            if (offset >= 0) {
                                results[resultCount].address =
                                    (u32)mbi.BaseAddress + (u32)offset;
                                results[resultCount].moduleBase = 0;
                                results[resultCount].offsetInModule = 0;
                                results[resultCount].confidence = 1.0f;
                                
                                KG_DEBUG("  找到 @ 0x%08X", results[resultCount].address);
                                resultCount++;
                                
                                // 跳过已找到的位置
                                address = (u32)mbi.BaseAddress + (u32)offset + pattern->length;
                                free(buffer);
                                continue;
                            }
                        }
                        free(buffer);
                    }
                }
            }
        }
        
        // 移动到下一个区域
        address = (u32)mbi.BaseAddress + (u32)mbi.RegionSize;
        if (address < (u32)mbi.BaseAddress) break;  // 溢出保护
    }
    
    KG_DEBUG("扫描完成, 找到 %d 个结果", resultCount);
    return resultCount;
}

/**
 * 在指定模块中扫描特征码
 */
s32 KgScanModuleForPattern(KgModuleInfo* module, const KgPattern* pattern,
                           KgScanResult* results, u32 maxResults) {
    if (!module || !pattern || !results) return 0;
    
    s32 resultCount = 0;
    u8* buffer = (u8*)module->baseAddress;
    u32 moduleSize = module->sizeOfImage;
    
    KG_DEBUG("在模块 %s 中扫描, 基址: 0x%08X, 大小: 0x%08X",
             module->name, module->baseAddress, moduleSize);
    
    // 计算扫描范围 (跳过 PE 头)
    u32 scanStart = 0x1000;  // 跳过第一个页
    u32 scanSize = moduleSize - scanStart;
    
    s32 offset = MatchPattern(
        pattern->pattern,
        pattern->mask,
        pattern->length,
        buffer + scanStart,
        scanSize
    );
    
    while (offset >= 0 && resultCount < (s32)maxResults) {
        results[resultCount].address = module->baseAddress + scanStart + (u32)offset;
        results[resultCount].moduleBase = module->baseAddress;
        results[resultCount].offsetInModule = scanStart + (u32)offset;
        results[resultCount].confidence = 1.0f;
        
        KG_DEBUG("  找到 @ 0x%08X (模块偏移: 0x%08X)",
                 results[resultCount].address,
                 results[resultCount].offsetInModule);
        
        resultCount++;
        
        // 继续搜索 (跳过已找到的位置)
        u32 nextStart = scanStart + (u32)offset + pattern->length;
        if (nextStart >= scanSize) break;
        
        offset = MatchPattern(
            pattern->pattern,
            pattern->mask,
            pattern->length,
            buffer + nextStart,
            scanSize - nextStart
        );
    }
    
    return resultCount;
}

/* ============================================================
 * 指针链解析
 * ============================================================ */

/**
 * 解析多级指针链
 * @param base 基址 (模块基址 + 固定偏移)
 * @param offsets 偏移数组 (从基址开始逐级偏移)
 * @param depth 偏移层级
 * @return 最终解析出的地址
 *
 * 示例:
 *   指针链: [模块基址 + 0x1234] -> [+0x10] -> [+0x20] -> 最终地址
 *   调用: KgResolvePointerChain(base + 0x1234, {0x10, 0x20}, 2)
 */
u32 KgResolvePointerChain(u32 base, const u32* offsets, u32 depth) {
    u32 current = base;
    u32 i;
    
    for (i = 0; i < depth; i++) {
        // 读取当前位置的值
        u32 value = 0;
        if (!KgReadMemory(current, &value, sizeof(value))) {
            KG_DEBUG("指针链解析失败, 层级 %u, 地址 0x%08X", i, current);
            return 0;
        }
        
        if (value == 0) {
            KG_DEBUG("指针链在层级 %u 遇到空指针", i);
            return 0;
        }
        
        // 加上偏移
        current = value + offsets[i];
        
        KG_DEBUG("  层级 %u: 0x%08X -> 0x%08X (值: 0x%08X)",
                 i, current - offsets[i], current, value);
    }
    
    KG_DEBUG("指针链解析完成: 0x%08X -> 0x%08X", base, current);
    return current;
}
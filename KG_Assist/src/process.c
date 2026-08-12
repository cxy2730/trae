/**
 * KG Assist - 进程操作模块
 * 功能: 进程枚举、句柄管理、模块遍历
 *
 * 技术要点:
 * - CreateToolhelp32Snapshot 枚举进程
 * - OpenProcess 打开目标进程
 * - Module32FirstW/NextW 遍历模块 (宽字符版本)
 * - 句柄安全管理
 */

#include "../include/common.h"

/**
 * 宽字符转 ANSI 字符串 (前置声明)
 */
static VOID WidCharToMbs(const wchar_t* wide, char* ansi, u32 ansiSize);

/* ============================================================
 * 进程枚举
 * ============================================================ */

/**
 * 枚举所有运行中的进程
 * @param processes 输出缓冲区
 * @param maxCount 最大进程数
 * @return 找到的进程数量
 */
s32 KgEnumAllProcesses(KgProcessInfo* processes, u32 maxCount) {
    if (!processes || maxCount == 0) return 0;
    
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE) {
        KG_ERROR("创建进程快照失败");
        return 0;
    }
    
    PROCESSENTRY32W entry = {0};
    entry.dwSize = sizeof(entry);
    
    s32 count = 0;
    
    if (Process32FirstW(snapshot, &entry)) {
        do {
            if (count >= (s32)maxCount) break;
            
            // 填充进程信息
            memset(&processes[count], 0, sizeof(KgProcessInfo));
            processes[count].pid = entry.th32ProcessID;
            processes[count].parentPid = entry.th32ParentProcessID;
            
            // 拷贝进程名 (宽字符, 直接拷贝)
            if (entry.szExeFile[0]) {
                wcscpy_s(processes[count].name, MAX_PATH, entry.szExeFile);
            }
            
            count++;
        } while (Process32NextW(snapshot, &entry));
    }
    
    CloseHandle(snapshot);
    KG_DEBUG("枚举到 %d 个进程", count);
    return count;
}

/**
 * 按名称查找进程
 * @param name 进程名 (大小写不敏感, ANSI 或宽字符)
 * @param info 输出进程信息
 * @return 是否找到
 */
BOOL KgFindProcess(const char* name, KgProcessInfo* info) {
    if (!name || !info) return FALSE;
    
    // 转换查找名到宽字符
    wchar_t wideName[MAX_PATH] = {0};
    MultiByteToWideChar(CP_ACP, 0, name, -1, wideName, MAX_PATH);
    
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE) {
        KG_ERROR("创建进程快照失败");
        return FALSE;
    }
    
    PROCESSENTRY32W entry = {0};
    entry.dwSize = sizeof(entry);
    
    BOOL found = FALSE;
    
    if (Process32FirstW(snapshot, &entry)) {
        do {
            // 大小写不敏感比较 (宽字符版本)
            if (_wcsicmp(entry.szExeFile, wideName) == 0) {
                // 填充进程信息
                memset(info, 0, sizeof(KgProcessInfo));
                info->pid = entry.th32ProcessID;
                info->parentPid = entry.th32ParentProcessID;
                
                // 拷贝进程名
                if (entry.szExeFile[0]) {
                    wcscpy_s(info->name, MAX_PATH, entry.szExeFile);
                }
                
                found = TRUE;
                KG_INFO("找到进程 %s, PID: %lu", name, info->pid);
                break;
            }
        } while (Process32NextW(snapshot, &entry));
    }
    
    CloseHandle(snapshot);
    
    if (!found) {
        KG_DEBUG("未找到进程: %s", name);
    }
    
    return found;
}

/**
 * 查找多个匹配的进程 (如多个游戏实例)
 */
s32 KgFindAllProcesses(const char* name, KgProcessInfo* results, u32 maxResults) {
    if (!name || !results || maxResults == 0) return 0;
    
    wchar_t wideName[MAX_PATH] = {0};
    MultiByteToWideChar(CP_ACP, 0, name, -1, wideName, MAX_PATH);
    
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE) return 0;
    
    PROCESSENTRY32W entry = {0};
    entry.dwSize = sizeof(entry);
    
    s32 count = 0;
    
    if (Process32FirstW(snapshot, &entry)) {
        do {
            if (count >= (s32)maxResults) break;
            
            if (_wcsicmp(entry.szExeFile, wideName) == 0) {
                memset(&results[count], 0, sizeof(KgProcessInfo));
                results[count].pid = entry.th32ProcessID;
                results[count].parentPid = entry.th32ParentProcessID;
                
                if (entry.szExeFile[0]) {
                    wcscpy_s(results[count].name, MAX_PATH, entry.szExeFile);
                }
                
                count++;
            }
        } while (Process32NextW(snapshot, &entry));
    }
    
    CloseHandle(snapshot);
    return count;
}

/* ============================================================
 * 进程句柄管理
 * ============================================================ */

/**
 * 打开进程获取句柄
 * @param info 进程信息 (需要 pid)
 * @param accessRights 访问权限
 * @return 是否成功
 */
BOOL KgOpenProcess(KgProcessInfo* info, DWORD accessRights) {
    if (!info || info->pid == 0) return FALSE;
    
    // 如果已有句柄, 先关闭
    if (info->handle != NULL) {
        CloseHandle(info->handle);
        info->handle = NULL;
    }
    
    info->handle = OpenProcess(accessRights, FALSE, info->pid);
    if (info->handle == NULL) {
        // 尝试较低权限
        info->handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ,
                                     FALSE, info->pid);
    }
    
    if (info->handle != NULL) {
        info->accessRights = accessRights;
        KG_INFO("打开进程 PID %lu 成功 (权限: 0x%08lX)", info->pid, accessRights);
        return TRUE;
    }
    
    KG_ERROR("打开进程 PID %lu 失败 (错误: %lu)", info->pid, GetLastError());
    return FALSE;
}

/**
 * 关闭进程句柄
 */
VOID KgCloseProcess(KgProcessInfo* info) {
    if (info && info->handle != NULL) {
        CloseHandle(info->handle);
        info->handle = NULL;
        info->accessRights = 0;
        KG_DEBUG("关闭进程句柄 PID: %lu", info->pid);
    }
}

/* ============================================================
 * 模块枚举
 * ============================================================ */

/**
 * 枚举进程加载的所有模块
 * @param info 进程信息 (需要有效的句柄)
 * @return 找到的模块数量
 */
BOOL KgEnumModules(KgProcessInfo* info) {
    if (!info || info->handle == NULL) return FALSE;
    
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32,
                                                info->pid);
    if (snapshot == INVALID_HANDLE_VALUE) {
        KG_ERROR("创建模块快照失败 (PID: %lu)", info->pid);
        return FALSE;
    }
    
    MODULEENTRY32W entry = {0};
    entry.dwSize = sizeof(entry);
    
    info->moduleCount = 0;
    
    if (Module32FirstW(snapshot, &entry)) {
        do {
            if (info->moduleCount >= KG_MAX_MODULES) break;
            
            // 填充模块信息
            KgModuleInfo* mod = &info->modules[info->moduleCount];
            memset(mod, 0, sizeof(KgModuleInfo));
            
            // 模块名 (宽字符 -> ANSI)
            WidCharToMbs(entry.szModule, mod->name, KG_MAX_PATH);
            
            // 基址和大小
            mod->baseAddress = (u32)(ULONG_PTR)entry.hModule;
            mod->sizeOfImage = entry.modBaseSize;
            
            info->moduleCount++;
        } while (Module32NextW(snapshot, &entry));
    }
    
    CloseHandle(snapshot);
    KG_DEBUG("枚举到 %u 个模块 (PID: %lu)", info->moduleCount, info->pid);
    return TRUE;
}

/**
 * 宽字符转 ANSI 字符串
 */
static VOID WidCharToMbs(const wchar_t* wide, char* ansi, u32 ansiSize) {
    if (!wide || !ansi || ansiSize == 0) return;
    WideCharToMultiByte(CP_ACP, 0, wide, -1, ansi, ansiSize, NULL, NULL);
}

/**
 * 查找指定模块
 * @param info 进程信息
 * @param name 模块名 (支持通配符前缀匹配)
 * @return 模块指针 (失败返回 NULL)
 */
KgModuleInfo* KgFindModule(KgProcessInfo* info, const char* name) {
    if (!info || !name) return NULL;
    
    for (u32 i = 0; i < info->moduleCount; i++) {
        // 精确匹配 (大小写不敏感)
        if (_stricmp(info->modules[i].name, name) == 0) {
            return &info->modules[i];
        }
        
        // 前缀匹配 (支持 "kernel32*" 这样的模式)
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '*') {
            if (_strnicmp(info->modules[i].name, name, len - 1) == 0) {
                return &info->modules[i];
            }
        }
    }
    
    KG_DEBUG("未找到模块: %s", name);
    return NULL;
}

/**
 * 获取主模块信息
 */
KgModuleInfo* KgGetMainModule(KgProcessInfo* info) {
    if (!info || info->moduleCount == 0) return NULL;
    
    // 主模块通常是第一个
    return &info->modules[0];
}

/* ============================================================
 * 辅助函数
 * ============================================================ */

/**
 * 打印进程详细信息 (调试用)
 */
VOID KgDumpProcessInfo(const KgProcessInfo* info) {
    if (!info) return;

    KG_INFO("=== 进程信息 ===");
    KG_INFO("  PID: %lu  父PID: %lu",
            (unsigned long)info->pid,
            (unsigned long)info->parentPid);
    KG_INFO("  句柄: %p  权限: 0x%08lX  模块数: %u",
            info->handle,
            (unsigned long)info->accessRights,
            info->moduleCount);

    for (u32 i = 0; i < info->moduleCount && i < 10; i++) {
        KG_INFO("  [%u] %s  基址: 0x%08X  大小: 0x%08X",
                i, info->modules[i].name,
                info->modules[i].baseAddress,
                info->modules[i].sizeOfImage);
    }
    if (info->moduleCount > 10) {
        KG_INFO("  ... 还有 %u 个模块", info->moduleCount - 10);
    }
}
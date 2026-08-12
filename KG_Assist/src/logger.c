/**
 * KG Assist - 日志模块
 * 功能: 同时输出日志到终端和日志文件
 *
 * 特性:
 * - 按时间戳命名日志 (可配置)
 * - 自动创建日志目录
 * - 日志文件大小限制 (超过 10MB 自动清理)
 * - 线程安全 (使用基本互斥)
 */

#include "../include/common.h"

/* 全局日志文件句柄 */
FILE* g_LogFile = NULL;

/* 日志互斥锁 (简单实现) */
static CRITICAL_SECTION g_LogLock;
static BOOL g_LogLockInit = FALSE;

/* 日志最大大小 (10MB) */
#define KG_LOG_MAX_SIZE     (10 * 1024 * 1024)

/* 日志时间戳格式缓冲区大小 */
#define KG_LOG_TIME_BUF     64

/**
 * 获取当前时间戳字符串
 */
static VOID GetTimeString(char* buffer, DWORD bufferSize) {
    SYSTEMTIME st;
    GetLocalTime(&st);
    sprintf_s(buffer, bufferSize, "%04d-%02d-%02d %02d:%02d:%02d.%03d",
              st.wYear, st.wMonth, st.wDay,
              st.wHour, st.wMinute, st.wSecond, st.wMilliseconds);
}

/**
 * 检查并清理过大的日志文件
 */
static VOID CheckAndCleanLog(VOID) {
    if (!g_LogFile) return;

    // 获取当前文件大小
    fseek(g_LogFile, 0, SEEK_END);
    long fileSize = ftell(g_LogFile);
    fseek(g_LogFile, 0, SEEK_SET);

    if (fileSize > KG_LOG_MAX_SIZE) {
        // 关闭当前文件
        fclose(g_LogFile);
        g_LogFile = NULL;

        // 重命名旧日志 (基于 logs/ 目录的运行时路径)
        char backupName[KG_MAX_PATH];
        SYSTEMTIME st;
        GetLocalTime(&st);
        char fileTimeStr[32];
        snprintf(fileTimeStr, sizeof(fileTimeStr), "%04d%02d%02d_%02d%02d%02d",
                 st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond);

        // 备份文件名: <logsdir><prefix>_YYYYMMDD_HHMMSS.log (无冒号, 合法 Windows 文件名)
        const char* prefix = KgPathGetLogBackupPrefix();
        snprintf(backupName, KG_MAX_PATH, "%s%s%s_%s.log",
                 KgPathGetLogsDir() ? KgPathGetLogsDir() : "",
                 KgPathGetLogsDir() && KgPathGetLogsDir()[0] ? "" : "",
                 prefix ? prefix : "kg_assist", fileTimeStr);
        KgPathNormalizeSeparators(backupName);

        // 把当前日志移动到带时间戳的备份
        const char* curPath = KgPathGetLogFile();
        if (curPath) {
            MoveFileA(curPath, backupName);
        }

        // 重新打开日志
        g_LogFile = fopen(curPath ? curPath : KG_LOG_FILE_DEFAULT, "a");
        if (g_LogFile) {
            // 写入分割线
            fprintf(g_LogFile, "\n========== 新日志开始 ==========\n\n");
            fflush(g_LogFile);
        }
    }
}

/**
 * 初始化日志系统
 * @return 是否成功
 */
BOOL KgLogInit(VOID) {
    // 初始化互斥锁
    if (!g_LogLockInit) {
        InitializeCriticalSection(&g_LogLock);
        g_LogLockInit = TRUE;
    }

    const char* logPath = KgPathGetLogFile();
    if (!logPath || !*logPath) {
        logPath = KG_LOG_FILE_DEFAULT;
    }

    // 打开日志文件 (追加模式)
    g_LogFile = fopen(logPath, "a");
    if (g_LogFile == NULL) {
        // 尝试创建新文件
        g_LogFile = fopen(logPath, "w");
        if (g_LogFile == NULL) {
            printf("[警告] 无法创建日志文件: %s\n", logPath);
            return FALSE;
        }
    }

    // 写入启动分隔线
    char timeStr[KG_LOG_TIME_BUF];
    GetTimeString(timeStr, sizeof(timeStr));

    fprintf(g_LogFile, "\n");
    fprintf(g_LogFile, "========================================\n");
    fprintf(g_LogFile, "KG Assist 启动 - %s\n", timeStr);
    fprintf(g_LogFile, "========================================\n");
    fprintf(g_LogFile, "\n");
    fflush(g_LogFile);

    printf("[信息] 日志文件已打开: %s\n", logPath);
    return TRUE;
}

/**
 * 关闭日志系统
 */
VOID KgLogClose(VOID) {
    if (g_LogFile) {
        // 写入关闭分隔线
        char timeStr[KG_LOG_TIME_BUF];
        GetTimeString(timeStr, sizeof(timeStr));
        
        fprintf(g_LogFile, "\n");
        fprintf(g_LogFile, "========================================\n");
        fprintf(g_LogFile, "KG Assist 关闭 - %s\n", timeStr);
        fprintf(g_LogFile, "========================================\n");
        fflush(g_LogFile);
        
        fclose(g_LogFile);
        g_LogFile = NULL;
        
        printf("[信息] 日志文件已关闭\n");
    }
    
    // 清理互斥锁
    if (g_LogLockInit) {
        DeleteCriticalSection(&g_LogLock);
        g_LogLockInit = FALSE;
    }
}

/**
 * 核心日志写入函数
 * @param level 日志级别字符串
 * @param fmt 格式化字符串
 * @param ... 可变参数
 */
VOID KgLogWrite(const char* level, const char* fmt, ...) {
    // 如果日志文件未打开，直接返回 (终端输出由宏负责)
    if (!g_LogFile) return;
    
    // 加锁
    if (g_LogLockInit) {
        EnterCriticalSection(&g_LogLock);
    }
    
    // 写入时间戳
    char timeStr[KG_LOG_TIME_BUF];
    GetTimeString(timeStr, sizeof(timeStr));
    
    fprintf(g_LogFile, "[%s] %s ", timeStr, level);
    
    // 写入格式化消息
    va_list args;
    va_start(args, fmt);
    vfprintf(g_LogFile, fmt, args);
    va_end(args);
    
    fprintf(g_LogFile, "\n");
    fflush(g_LogFile);
    
    // 检查日志大小
    CheckAndCleanLog();
    
    // 解锁
    if (g_LogLockInit) {
        LeaveCriticalSection(&g_LogLock);
    }
}
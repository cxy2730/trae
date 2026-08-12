/**
 * KG Assist - 日志 (只写文件, GUI 子系统无终端)
 */

#include "../include/common.h"
#include "../include/paths.h"

FILE* g_LogFile = NULL;
static CRITICAL_SECTION g_LogLock;
static BOOL g_LogLockInit = FALSE;

#define KG_LOG_MAX_SIZE  (10 * 1024 * 1024)

static VOID GetTimeString(char* buf, DWORD sz) {
    SYSTEMTIME st;
    GetLocalTime(&st);
    snprintf(buf, sz, "%04d-%02d-%02d %02d:%02d:%02d.%03d",
             st.wYear, st.wMonth, st.wDay,
             st.wHour, st.wMinute, st.wSecond, st.wMilliseconds);
}

static VOID RotateIfLarge(VOID) {
    if (!g_LogFile) return;
    fseek(g_LogFile, 0, SEEK_END);
    long sz = ftell(g_LogFile);
    fseek(g_LogFile, 0, SEEK_SET);
    if (sz < KG_LOG_MAX_SIZE) return;

    fclose(g_LogFile);
    g_LogFile = NULL;

    const char* cur = KgPathGetLogFile();
    if (!cur) return;

    char backup[KG_MAX_PATH];
    char ts[64];
    GetTimeString(ts, sizeof(ts));
    for (char* p = ts; *p; ++p) {
        if (*p == ' ' || *p == ':') *p = '_';
    }
    snprintf(backup, sizeof(backup), "%s.%s.bak", cur, ts);
    MoveFileA(cur, backup);

    g_LogFile = fopen(cur, "w");
    if (g_LogFile) {
        fprintf(g_LogFile, "========== rotated ==========\n");
        fflush(g_LogFile);
    }
}

BOOL KgLogInit(VOID) {
    if (!g_LogLockInit) {
        InitializeCriticalSection(&g_LogLock);
        g_LogLockInit = TRUE;
    }
    const char* path = KgPathGetLogFile();
    if (!path) return FALSE;
    g_LogFile = fopen(path, "a");
    if (!g_LogFile) g_LogFile = fopen(path, "w");
    if (!g_LogFile) return FALSE;

    char ts[64];
    GetTimeString(ts, sizeof(ts));
    fprintf(g_LogFile, "\n========== KG Assist 启动 %s ==========\n\n", ts);
    fflush(g_LogFile);
    return TRUE;
}

VOID KgLogClose(VOID) {
    if (g_LogFile) {
        char ts[64];
        GetTimeString(ts, sizeof(ts));
        fprintf(g_LogFile, "\n========== KG Assist 关闭 %s ==========\n\n", ts);
        fflush(g_LogFile);
        fclose(g_LogFile);
        g_LogFile = NULL;
    }
    if (g_LogLockInit) {
        DeleteCriticalSection(&g_LogLock);
        g_LogLockInit = FALSE;
    }
}

VOID KgLogWrite(const char* level, const char* fmt, ...) {
    if (!g_LogFile) return;
    if (g_LogLockInit) EnterCriticalSection(&g_LogLock);

    char ts[64];
    GetTimeString(ts, sizeof(ts));
    fprintf(g_LogFile, "[%s] %s ", ts, level);

    va_list ap;
    va_start(ap, fmt);
    vfprintf(g_LogFile, fmt, ap);
    va_end(ap);

    fprintf(g_LogFile, "\n");
    fflush(g_LogFile);
    RotateIfLarge();

    if (g_LogLockInit) LeaveCriticalSection(&g_LogLock);
}

/**
 * KG Assist - 通用头文件
 * 零外部依赖: 仅 Win32 API
 */

#ifndef KG_COMMON_H
#define KG_COMMON_H

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/* ============================================================
 * 基础类型
 * ============================================================ */

typedef unsigned char       u8;
typedef unsigned short      u16;
typedef unsigned int        u32;
typedef unsigned long long  u64;
typedef signed char         s8;
typedef signed short        s16;
typedef signed int          s32;
typedef signed long long    s64;
typedef void*               ptr;

/* ============================================================
 * 常量
 * ============================================================ */

#define KG_MAX_PATH             260

/* ============================================================
 * 日志 (只写文件, GUI 子系统无终端)
 * ============================================================ */

#ifndef KG_LOG_LEVEL
#define KG_LOG_LEVEL 1
#endif

#define KG_LOG_NONE  0
#define KG_LOG_ERROR 1
#define KG_LOG_WARN  2
#define KG_LOG_INFO  3
#define KG_LOG_DEBUG 4

extern FILE* g_LogFile;
BOOL  KgLogInit(VOID);
VOID  KgLogClose(VOID);
VOID  KgLogWrite(const char* level, const char* fmt, ...);

#if KG_LOG_LEVEL >= KG_LOG_ERROR
#define KG_ERROR(fmt, ...)  KgLogWrite("[错误]", fmt, ##__VA_ARGS__)
#else
#define KG_ERROR(fmt, ...) ((void)0)
#endif

#if KG_LOG_LEVEL >= KG_LOG_WARN
#define KG_WARN(fmt, ...)   KgLogWrite("[警告]", fmt, ##__VA_ARGS__)
#else
#define KG_WARN(fmt, ...) ((void)0)
#endif

#if KG_LOG_LEVEL >= KG_LOG_INFO
#define KG_INFO(fmt, ...)   KgLogWrite("[信息]", fmt, ##__VA_ARGS__)
#else
#define KG_INFO(fmt, ...) ((void)0)
#endif

#if KG_LOG_LEVEL >= KG_LOG_DEBUG
#define KG_DEBUG(fmt, ...)  KgLogWrite("[调试]", fmt, ##__VA_ARGS__)
#else
#define KG_DEBUG(fmt, ...) ((void)0)
#endif

/* ============================================================
 * NT API 类型定义 (防封 hook 用)
 * ============================================================ */

typedef NTSTATUS (NTAPI* NtQueryInformationProcess_t)(
    HANDLE, ULONG, PVOID, ULONG, PULONG);
typedef BOOL (WINAPI* IsDebuggerPresent_t)(VOID);
typedef BOOL (WINAPI* CheckRemoteDebuggerPresent_t)(HANDLE, PBOOL);
typedef void (WINAPI* OutputDebugStringA_t)(LPCSTR);
typedef void (WINAPI* OutputDebugStringW_t)(LPCWSTR);

/* ============================================================
 * 功能原型 (防封模块)
 * ============================================================ */

BOOL KgInstallAntiDebug(VOID);
BOOL KgInstallAntiDetect(VOID);
BOOL KgSpoofApiCalls(VOID);
BOOL KgSpoofWindowTitle(const char* fakeTitle);
BOOL KgSpoofWindowClass(const char* fakeClassName);
BOOL KgSpoofSelfWindow(VOID);
BOOL KgInstallNtHook(VOID);
BOOL KgInstallFullProtection(VOID);
BOOL KgDetectVirtualMachine(VOID);
BOOL KgInitIntegrity(VOID);
BOOL KgVerifyIntegrity(VOID);
VOID KgObfuscateString(const char* plain, char* obfuscated, u32 size);
VOID KgDeobfuscateString(const char* obfuscated, char* plain, u32 size);
FARPROC KgGetObfuscatedProcAddress(const char* dllName, const char* funcName);
BOOL  KgCanCallApi(s32 apiIndex);
VOID  KgWaitForApiCall(s32 apiIndex);

/* ============================================================
 * 内联
 * ============================================================ */

static __inline BOOL KgIsValidPtr(u32 ptr) {
    return (ptr > 0x10000 && ptr < 0x7FFFFFFF);
}

#endif /* KG_COMMON_H */

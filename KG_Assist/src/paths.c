/**
 * KG Assist - 路径解析模块
 *
 * 设计目标:
 *   - 不依赖工作目录 (CWD), 所有可写文件都基于 EXE 所在目录的子目录
 *   - 支持通过环境变量 KG_ASSIST_HOME 覆盖根目录
 *   - 支持命令行参数 --root <dir> 覆盖根目录
 *   - 子目录 (logs / config) 自动创建
 *   - 跨平台: Windows 直接走 Win32 API, *nix 调试时走 realpath
 *
 * 导出:
 *   KgPathInit(argv0)                       - 在 main 开头调用一次
 *   KgPathGetRoot()                         - 根目录 (绝对路径, '\' 结尾)
 *   KgPathGetLogsDir()                      - logs 子目录
 *   KgPathGetConfigDir()                    - config 子目录
 *   KgPathResolve("logs/foo.log")           - 拼接相对路径为绝对路径
 *   KgPathEnsureDir(absPath)                - 递归创建目录
 *   KgPathGetLogFile() / KgPathGetConfigFile() / KgPathGetSpoofTitle() ...
 *   KgPathSetLogFileName(name)              - 自定义日志文件名
 *   KgPathSetConfigFileName(name)           - 自定义配置文件名
 *   KgPathSetSpoofTitle(t) / SetSpoofClass(c) - 运行时覆盖伪装字符串
 */

#include "../include/common.h"

#include <ctype.h>
#include <sys/stat.h>
#include <sys/types.h>

/* On Windows we use only standard Win32 APIs (GetModuleFileNameA,
 * CreateDirectoryA). shlwapi is intentionally NOT linked here to keep
 * the runtime surface minimal and avoid bringing in unwanted imports. */
#include <errno.h>

/* Portable env helpers: setenv() exists on POSIX; on Windows MSVCRT only
 * provides _putenv_s. We use it for both since it takes the literal
 * "NAME=VALUE" form and is supported by both mingw-w64's runtime and
 * the standard C library on Linux. */
#ifdef _WIN32
#  define kg_setenv(name, value) _putenv_s((name), (value))
#else
#  define kg_setenv(name, value) setenv((name), (value), 1)
#endif

/* ------------------------------------------------------------------
 * Internal state
 * ------------------------------------------------------------------ */

static char g_Root[KG_MAX_PATH]        = {0};  /* 根目录, '\\' 结尾 */
static char g_LogsDir[KG_MAX_PATH]      = {0};
static char g_ConfigDir[KG_MAX_PATH]    = {0};

static char g_LogFileName[64]          = "kg_assist.log";
static char g_LogBackupPrefix[64]      = "kg_assist";
static char g_ConfigFileName[64]       = "kg_assist.ini";

static char g_SpoofTitle[128]           = "SystemSettings.exe";
static char g_SpoofClass[64]            = "Progman";

/* ------------------------------------------------------------------
 * Path helpers (Win32 vs POSIX)
 * ------------------------------------------------------------------ */

#ifdef _WIN32
static const char PATH_SEP = '\\';
static const char ALT_SEP  = '/';
#else
static const char PATH_SEP = '/';
static const char ALT_SEP  = '\\';
#endif

/* Replace '/' with PATH_SEP in-place; safe on Windows where '/' is also accepted. */
VOID KgPathNormalizeSeparators(char* s) {
    if (!s) return;
    for (; *s; ++s) {
        if (*s == ALT_SEP) *s = PATH_SEP;
    }
}

/* dirname + basename without modifying the input buffer. */
static VOID SplitPath(const char* full, char* dir, u32 dirSize, const char** baseOut) {
    if (!full) {
        if (dir && dirSize) dir[0] = '\0';
        if (baseOut) *baseOut = NULL;
        return;
    }
    const char* last = NULL;
    for (const char* p = full; *p; ++p) {
        if (*p == '/' || *p == '\\') last = p;
    }
    if (!last) {
        if (dir && dirSize) dir[0] = '\0';
        if (baseOut) *baseOut = full;
        return;
    }
    size_t dlen = (size_t)(last - full);
    if (dlen >= dirSize) dlen = dirSize - 1;
    if (dir && dirSize) {
        memcpy(dir, full, dlen);
        dir[dlen] = '\0';
    }
    if (baseOut) *baseOut = last + 1;
}

static BOOL EndsWithSeparator(const char* s) {
    if (!s || !*s) return FALSE;
    size_t n = strlen(s);
    return (s[n-1] == PATH_SEP || s[n-1] == ALT_SEP);
}

static VOID EnsureTrailingSep(char* s) {
    if (!EndsWithSeparator(s)) {
        size_t n = strlen(s);
        if (n + 1 < KG_MAX_PATH) {
            s[n]   = PATH_SEP;
            s[n+1] = '\0';
        }
    }
}

/* ------------------------------------------------------------------
 * Public API
 * ------------------------------------------------------------------ */

BOOL KgPathInit(const char* argv0) {
    char base[KG_MAX_PATH] = {0};

    /* 1) Honor KG_ASSIST_HOME if set and non-empty. */
    const char* envHome = getenv("KG_ASSIST_HOME");
    if (envHome && envHome[0]) {
        strncpy(base, envHome, sizeof(base) - 1);
        base[sizeof(base) - 1] = '\0';
    }
#ifdef _WIN32
    else if (argv0 && argv0[0] && (argv0[0] == '\\' || argv0[0] == '/' ||
                                   (argv0[0] && argv0[1] == ':'))) {
        /* Absolute path passed via argv[0] (rare on Windows). */
        strncpy(base, argv0, sizeof(base) - 1);
        base[sizeof(base) - 1] = '\0';
    }
#endif
    else {
#ifdef _WIN32
        /* GetModuleFileNameA(NULL, ...) returns the EXE path even with no CWD. */
        DWORD n = GetModuleFileNameA(NULL, base, sizeof(base));
        if (n == 0 || n >= sizeof(base)) {
            /* Fall back to argv0 if available. */
            if (argv0) {
                strncpy(base, argv0, sizeof(base) - 1);
                base[sizeof(base) - 1] = '\0';
            } else {
                strncpy(base, ".", sizeof(base) - 1);
            }
        }
#else
        if (argv0 && argv0[0]) {
            if (argv0[0] == '/') {
                strncpy(base, argv0, sizeof(base) - 1);
                base[sizeof(base) - 1] = '\0';
            } else {
                if (!realpath(argv0, base)) {
                    strncpy(base, ".", sizeof(base) - 1);
                    base[sizeof(base) - 1] = '\0';
                }
            }
        } else {
            strncpy(base, ".", sizeof(base) - 1);
            base[sizeof(base) - 1] = '\0';
        }
#endif
    }

    KgPathNormalizeSeparators(base);

    /* 2) Strip the basename to get the directory. */
    char dir[KG_MAX_PATH] = {0};
    const char* baseName = NULL;
    SplitPath(base, dir, sizeof(dir), &baseName);
    if (dir[0] == '\0') {
        /* No separator found — assume the current directory. */
#ifdef _WIN32
        DWORD n = GetCurrentDirectoryA(sizeof(dir), dir);
        if (n == 0 || n >= sizeof(dir)) strncpy(dir, ".", sizeof(dir) - 1);
#else
        if (!getcwd(dir, sizeof(dir))) strncpy(dir, ".", sizeof(dir) - 1);
#endif
    }
    EnsureTrailingSep(dir);

    /* 3) Build canonical layout. */
    strncpy(g_Root, dir, sizeof(g_Root) - 1);
    g_Root[sizeof(g_Root) - 1] = '\0';

    snprintf(g_LogsDir, sizeof(g_LogsDir), "%slogs%c", g_Root, PATH_SEP);
    snprintf(g_ConfigDir, sizeof(g_ConfigDir), "%sconfig%c", g_Root, PATH_SEP);

    /* 4) Auto-create the subdirs. */
    KgPathEnsureDir(g_LogsDir);
    KgPathEnsureDir(g_ConfigDir);

    return TRUE;
}

const char* KgPathGetRoot(VOID)        { return g_Root; }
const char* KgPathGetLogsDir(VOID)     { return g_LogsDir; }
const char* KgPathGetConfigDir(VOID)   { return g_ConfigDir; }

const char* KgPathGetLogFile(VOID) {
    static char buf[KG_MAX_PATH];
    snprintf(buf, sizeof(buf), "%s%s", g_LogsDir, g_LogFileName);
    return buf;
}

const char* KgPathGetLogBackupPrefix(VOID) {
    static char buf[KG_MAX_PATH];
    snprintf(buf, sizeof(buf), "%s%s", g_LogsDir, g_LogBackupPrefix);
    return buf;
}

const char* KgPathGetConfigFile(VOID) {
    static char buf[KG_MAX_PATH];
    snprintf(buf, sizeof(buf), "%s%s", g_ConfigDir, g_ConfigFileName);
    return buf;
}

const char* KgPathGetSpoofTitle(VOID)   { return g_SpoofTitle; }
const char* KgPathGetSpoofClass(VOID)   { return g_SpoofClass; }

VOID KgPathSetLogFileName(const char* name) {
    if (!name || !*name) return;
    strncpy(g_LogFileName, name, sizeof(g_LogFileName) - 1);
    g_LogFileName[sizeof(g_LogFileName) - 1] = '\0';
}

VOID KgPathSetConfigFileName(const char* name) {
    if (!name || !*name) return;
    strncpy(g_ConfigFileName, name, sizeof(g_ConfigFileName) - 1);
    g_ConfigFileName[sizeof(g_ConfigFileName) - 1] = '\0';
}

VOID KgPathSetSpoofTitle(const char* t) {
    if (!t || !*t) return;
    strncpy(g_SpoofTitle, t, sizeof(g_SpoofTitle) - 1);
    g_SpoofTitle[sizeof(g_SpoofTitle) - 1] = '\0';
}

VOID KgPathSetSpoofClass(const char* c) {
    if (!c || !*c) return;
    strncpy(g_SpoofClass, c, sizeof(g_SpoofClass) - 1);
    g_SpoofClass[sizeof(g_SpoofClass) - 1] = '\0';
}

/* Append a relative path under root; if rel is absolute it is returned as-is. */
BOOL KgPathResolve(const char* rel, char* out, u32 outSize) {
    if (!rel || !out || outSize == 0) return FALSE;
    if (rel[0] == PATH_SEP || rel[0] == ALT_SEP
#ifdef _WIN32
        || (rel[0] && rel[1] == ':')
#endif
       ) {
        strncpy(out, rel, outSize - 1);
        out[outSize - 1] = '\0';
        KgPathNormalizeSeparators(out);
        return TRUE;
    }
    if (snprintf(out, outSize, "%s%s", g_Root, rel) >= (int)outSize) {
        return FALSE;
    }
    KgPathNormalizeSeparators(out);
    return TRUE;
}

/* Apply user-facing env vars (KG_ASSIST_LOG / CONFIG / SPOOF_*) over the
 * defaults. Call after KgPathInit() so the path module's state is consistent. */
VOID ApplyEnvOverrides(VOID) {
    const char* v;

    v = getenv("KG_ASSIST_LOG");
    if (v && *v) KgPathSetLogFileName(v);

    v = getenv("KG_ASSIST_CONFIG");
    if (v && *v) KgPathSetConfigFileName(v);

    v = getenv("KG_ASSIST_SPOOF_TITLE");
    if (v && *v) KgPathSetSpoofTitle(v);

    v = getenv("KG_ASSIST_SPOOF_CLASS");
    if (v && *v) KgPathSetSpoofClass(v);
}

/* Recursive mkdir for one path component at a time. */
BOOL KgPathEnsureDir(const char* absPath) {
    if (!absPath || !*absPath) return FALSE;
    char tmp[KG_MAX_PATH];
    strncpy(tmp, absPath, sizeof(tmp) - 1);
    tmp[sizeof(tmp) - 1] = '\0';
    KgPathNormalizeSeparators(tmp);
    size_t len = strlen(tmp);
    if (len == 0) return FALSE;

    /* Walk each separator and mkdir the prefix. */
    for (size_t i = 1; i < len; ++i) {
        if (tmp[i] == PATH_SEP) {
            char save = tmp[i];
            tmp[i] = '\0';
#ifdef _WIN32
            if (!CreateDirectoryA(tmp, NULL) && GetLastError() != ERROR_ALREADY_EXISTS) {
                /* ignore failure for drive root and other non-critical paths */
            }
#else
            mkdir(tmp, 0755);
#endif
            tmp[i] = save;
        }
    }
#ifdef _WIN32
    if (!CreateDirectoryA(tmp, NULL) && GetLastError() != ERROR_ALREADY_EXISTS) {
        return FALSE;
    }
#else
    if (mkdir(tmp, 0755) != 0 && errno != EEXIST) {
        return FALSE;
    }
#endif
    return TRUE;
}

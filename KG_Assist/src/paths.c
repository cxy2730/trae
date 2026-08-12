/**
 * KG Assist - 路径解析模块 (Windows 专用, 精简版)
 *
 * 所有可写文件基于 EXE 所在目录, 不依赖 CWD。
 * 支持 KG_ASSIST_HOME 环境变量和 --root 命令行覆盖。
 */

#include "../include/common.h"

/* ------------------------------------------------------------------
 * 内部状态
 * ------------------------------------------------------------------ */

static char g_Root[KG_MAX_PATH]      = {0};
static char g_LogsDir[KG_MAX_PATH]    = {0};
static char g_ConfigDir[KG_MAX_PATH]  = {0};

static char g_LogFileName[64]        = "kg_assist.log";
static char g_LogBackupPrefix[64]    = "kg_assist";
static char g_ConfigFileName[64]     = "kg_assist.ini";

static char g_SpoofTitle[128]         = "SystemSettings.exe";
static char g_SpoofClass[64]          = "Progman";

/* ------------------------------------------------------------------
 * 路径辅助
 * ------------------------------------------------------------------ */

VOID KgPathNormalizeSeparators(char* s) {
    if (!s) return;
    for (; *s; ++s) {
        if (*s == '/') *s = '\\';
    }
}

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

static BOOL EndsWithSep(const char* s) {
    if (!s || !*s) return FALSE;
    char c = s[strlen(s) - 1];
    return (c == '\\' || c == '/');
}

static VOID EnsureTrailingSep(char* s) {
    if (!EndsWithSep(s)) {
        size_t n = strlen(s);
        if (n + 1 < KG_MAX_PATH) {
            s[n]   = '\\';
            s[n+1] = '\0';
        }
    }
}

/* ------------------------------------------------------------------
 * 公开 API
 * ------------------------------------------------------------------ */

BOOL KgPathInit(const char* argv0) {
    char base[KG_MAX_PATH] = {0};

    /* 1) 优先: KG_ASSIST_HOME 环境变量 */
    const char* envHome = getenv("KG_ASSIST_HOME");
    if (envHome && envHome[0]) {
        strncpy(base, envHome, sizeof(base) - 1);
    } else {
        /* 2) GetModuleFileNameA 获取 EXE 绝对路径 */
        DWORD n = GetModuleFileNameA(NULL, base, sizeof(base));
        if (n == 0 || n >= sizeof(base)) {
            /* 3) 回退: argv0 或当前目录 */
            if (argv0 && argv0[0]) {
                strncpy(base, argv0, sizeof(base) - 1);
            } else {
                GetCurrentDirectoryA(sizeof(base), base);
            }
        }
    }
    base[sizeof(base) - 1] = '\0';
    KgPathNormalizeSeparators(base);

    /* 4) 取目录部分 */
    char dir[KG_MAX_PATH] = {0};
    const char* baseName = NULL;
    SplitPath(base, dir, sizeof(dir), &baseName);
    if (dir[0] == '\0') {
        GetCurrentDirectoryA(sizeof(dir), dir);
    }
    EnsureTrailingSep(dir);

    /* 5) 构建标准目录结构 */
    strncpy(g_Root, dir, sizeof(g_Root) - 1);
    g_Root[sizeof(g_Root) - 1] = '\0';

    snprintf(g_LogsDir,   sizeof(g_LogsDir),   "%slogs\\",   g_Root);
    snprintf(g_ConfigDir, sizeof(g_ConfigDir), "%sconfig\\", g_Root);

    /* 6) 自动创建子目录 */
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

const char* KgPathGetSpoofTitle(VOID) { return g_SpoofTitle; }
const char* KgPathGetSpoofClass(VOID) { return g_SpoofClass; }

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

BOOL KgPathResolve(const char* rel, char* out, u32 outSize) {
    if (!rel || !out || outSize == 0) return FALSE;
    /* 绝对路径直接返回 */
    if (rel[0] == '\\' || rel[0] == '/' || (rel[0] && rel[1] == ':')) {
        strncpy(out, rel, outSize - 1);
        out[outSize - 1] = '\0';
        KgPathNormalizeSeparators(out);
        return TRUE;
    }
    /* 相对路径拼接到根 */
    if (snprintf(out, outSize, "%s%s", g_Root, rel) >= (int)outSize) {
        return FALSE;
    }
    KgPathNormalizeSeparators(out);
    return TRUE;
}

VOID ApplyEnvOverrides(VOID) {
    const char* v;
    v = getenv("KG_ASSIST_LOG");          if (v && *v) KgPathSetLogFileName(v);
    v = getenv("KG_ASSIST_CONFIG");       if (v && *v) KgPathSetConfigFileName(v);
    v = getenv("KG_ASSIST_SPOOF_TITLE");  if (v && *v) KgPathSetSpoofTitle(v);
    v = getenv("KG_ASSIST_SPOOF_CLASS");  if (v && *v) KgPathSetSpoofClass(v);
}

BOOL KgPathEnsureDir(const char* absPath) {
    if (!absPath || !*absPath) return FALSE;
    char tmp[KG_MAX_PATH];
    strncpy(tmp, absPath, sizeof(tmp) - 1);
    tmp[sizeof(tmp) - 1] = '\0';
    KgPathNormalizeSeparators(tmp);
    size_t len = strlen(tmp);
    if (len == 0) return FALSE;

    /* 逐级创建目录 */
    for (size_t i = 1; i < len; ++i) {
        if (tmp[i] == '\\') {
            char save = tmp[i];
            tmp[i] = '\0';
            CreateDirectoryA(tmp, NULL);
            tmp[i] = save;
        }
    }
    CreateDirectoryA(tmp, NULL);
    return TRUE;
}

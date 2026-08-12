/**
 * KG Assist - 路径解析 (极简版)
 *
 * 只做一件事: 把 EXE 所在目录作为根, 在其下建 logs/ 和 config/ 两个子目录,
 * 给出 log 文件和 ini 文件的绝对路径. 不支持任何 env / CLI 覆盖.
 *
 * 导出 (3 个):
 *   KgPathInit()                  - 在 WinMain 第一行调用一次
 *   KgPathGetLogFile()            - <root>\logs\kg_assist.log
 *   KgPathGetConfigFile()         - <root>\config\kg_assist.ini
 */

#include "../include/common.h"

static char g_LogPath[KG_MAX_PATH]    = {0};
static char g_ConfigPath[KG_MAX_PATH] = {0};

static VOID JoinPath(char* dst, u32 dstSize, const char* a, const char* b) {
    snprintf(dst, dstSize, "%s\\%s", a, b);
}

static VOID EnsureDir(const char* absDir) {
    if (!absDir || !*absDir) return;
    char tmp[KG_MAX_PATH];
    strncpy(tmp, absDir, sizeof(tmp) - 1);
    tmp[sizeof(tmp) - 1] = '\0';
    size_t len = strlen(tmp);
    if (len == 0) return;

    for (size_t i = 1; i < len; ++i) {
        if (tmp[i] == '\\' || tmp[i] == '/') {
            char save = tmp[i];
            tmp[i] = '\0';
            CreateDirectoryA(tmp, NULL);
            tmp[i] = save;
        }
    }
    CreateDirectoryA(tmp, NULL);
}

BOOL KgPathInit(VOID) {
    char exePath[KG_MAX_PATH] = {0};
    GetModuleFileNameA(NULL, exePath, sizeof(exePath));

    char root[KG_MAX_PATH] = {0};
    char* last = NULL;
    for (char* p = exePath; *p; ++p) {
        if (*p == '\\' || *p == '/') last = p;
    }
    if (last) {
        size_t dlen = (size_t)(last - exePath);
        if (dlen >= sizeof(root)) dlen = sizeof(root) - 1;
        memcpy(root, exePath, dlen);
        root[dlen] = '\0';
    } else {
        GetCurrentDirectoryA(sizeof(root), root);
    }

    char logsDir[KG_MAX_PATH], configDir[KG_MAX_PATH];
    JoinPath(logsDir,   sizeof(logsDir),   root, "logs");
    JoinPath(configDir, sizeof(configDir), root, "config");
    EnsureDir(logsDir);
    EnsureDir(configDir);

    JoinPath(g_LogPath,    sizeof(g_LogPath),    logsDir,   "kg_assist.log");
    JoinPath(g_ConfigPath, sizeof(g_ConfigPath), configDir, "kg_assist.ini");
    return TRUE;
}

const char* KgPathGetLogFile(VOID)   { return g_LogPath; }
const char* KgPathGetConfigFile(VOID) { return g_ConfigPath; }

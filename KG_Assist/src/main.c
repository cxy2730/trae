/**
 * KG Assist - 入口点 (Win11 GUI + Rust 核心)
 *
 * 启动流程:
 *   1. 路径初始化 (paths.c)
 *   2. 日志系统初始化
 *   3. 启动 Win11 风格 GUI 菜单
 *      (Rust 核心 kg_core_init 在 KgGuiRun 内部初始化)
 *
 * 命令行参数 (可选):
 *   --root <dir>   覆盖根目录
 */

#include "../include/common.h"

/* ============================================================
 * 主函数
 * ============================================================ */

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow)
{
    (void)hPrevInstance;
    (void)lpCmdLine;

    /* --- 1) 路径初始化 --- */
    char argv0[KG_MAX_PATH] = {0};
    GetModuleFileNameA(NULL, argv0, sizeof(argv0));
    KgPathInit(argv0);

    /* 处理 --root 参数 (从 GetCommandLineA 解析) */
    {
        const char* cmd = GetCommandLineA();
        if (cmd) {
            const char* p = strstr(cmd, "--root");
            if (p) {
                p += 6;
                while (*p == ' ' || *p == '\t') p++;
                if (*p == '"') {
                    p++;
                    char dir[KG_MAX_PATH] = {0};
                    int i = 0;
                    while (*p && *p != '"' && i < KG_MAX_PATH - 1) {
                        dir[i++] = *p++;
                    }
                    dir[i] = '\0';
                    _putenv_s("KG_ASSIST_HOME", dir);
                    KgPathInit(argv0);
                } else if (*p) {
                    char dir[KG_MAX_PATH] = {0};
                    int i = 0;
                    while (*p && *p != ' ' && *p != '\t' && i < KG_MAX_PATH - 1) {
                        dir[i++] = *p++;
                    }
                    dir[i] = '\0';
                    _putenv_s("KG_ASSIST_HOME", dir);
                    KgPathInit(argv0);
                }
            }
        }
    }
    ApplyEnvOverrides();

    /* --- 2) 日志初始化 --- */
    KgLogInit();

    KG_INFO("============================================");
    KG_INFO("  KG Assist v3.0 (Rust 核心)");
    KG_INFO("  Root: %s", KgPathGetRoot());
    KG_INFO("============================================");

    /* --- 3) 启动 GUI (Rust 核心在 KgGuiRun 内初始化) --- */
    int ret = KgGuiRun(hInstance, nCmdShow);

    KgLogClose();

    return ret;
}

/* 保留 main() 入口以支持 MinGW -mwindows 链接 */
#ifdef __MINGW32__
int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    return WinMain(GetModuleHandleA(NULL), NULL, GetCommandLineA(), SW_SHOWDEFAULT);
}
#endif

/**
 * KG Assist - Win11 风格 GUI 菜单 (精简版)
 *
 * 布局:
 *   [更新模式] [游戏模式]            <- 顶部模式选择
 *   ┌──────────────────────────────┐
 *   │ 日志输出框 (只读)              │  <- 日志区域 (占满中间)
 *   │ ...                           │
 *   └──────────────────────────────┘
 *   [启动]  [停止]                    <- 底部操作
 *
 * 窗口: 只有最小化 + 关闭, 无最大化, 无状态栏
 */

#include "../include/common.h"
#include <commctrl.h>
#include <dwmapi.h>
#include <time.h>

#ifndef DWMWA_USE_IMMERSIVE_DARK_MODE
#define DWMWA_USE_IMMERSIVE_DARK_MODE  20
#endif
#ifndef DWMWA_WINDOW_CORNER_PREFERENCE
#define DWMWA_WINDOW_CORNER_PREFERENCE 33
#endif
#ifndef DWMWA_SYSTEMBACKDROP_TYPE
#define DWMWA_SYSTEMBACKDROP_TYPE      38
#endif
#ifndef DWMWCP_ROUND
#define DWMWCP_ROUND                   2
#endif
#ifndef DWMSBT_MAINWINDOW
#define DWMSBT_MAINWINDOW              2
#endif

/* ------------------------------------------------------------------
 * 颜色 (Win11 暗色主题)
 * ------------------------------------------------------------------ */

#define COL_BG          RGB(0x20, 0x20, 0x20)
#define COL_TEXT        RGB(0xFF, 0xFF, 0xFF)
#define COL_TEXT_DIM    RGB(0xB0, 0xB0, 0xB0)
#define COL_LOG_BG      RGB(0x1A, 0x1A, 0x1A)

/* ------------------------------------------------------------------
 * 控件 ID
 * ------------------------------------------------------------------ */

#define IDC_BTN_UPDATE     1001
#define IDC_BTN_GAME       1002
#define IDC_BTN_START      1003
#define IDC_BTN_STOP       1004
#define IDC_EDIT_LOG       1005

/* ------------------------------------------------------------------
 * 全局状态
 * ------------------------------------------------------------------ */

static HWND g_hMain    = NULL;
static HWND g_hLog     = NULL;
static HFONT g_hFont   = NULL;
static int  g_Mode     = 0;     /* 0=更新模式, 1=游戏模式 */
static BOOL g_Running  = FALSE;
static HANDLE g_hWorkThread = NULL;

/* bot 脚本 DLL 路径 */
static char g_BotDllPath[KG_MAX_PATH] = "";

/* ------------------------------------------------------------------
 * 辅助函数
 * ------------------------------------------------------------------ */

static HFONT CreateKgFont(int size, BOOL bold) {
    LOGFONTA lf = {0};
    lf.lfHeight = -MulDiv(size, GetDeviceCaps(GetDC(NULL), LOGPIXELSY), 72);
    lf.lfWeight = bold ? FW_SEMIBOLD : FW_NORMAL;
    lf.lfCharSet = DEFAULT_CHARSET;
    strcpy(lf.lfFaceName, "Segoe UI Variable");
    HFONT f = CreateFontIndirectA(&lf);
    if (!f) {
        strcpy(lf.lfFaceName, "Segoe UI");
        f = CreateFontIndirectA(&lf);
    }
    return f;
}

static void ApplyWin11Style(HWND hwnd) {
    BOOL dark = TRUE;
    DwmSetWindowAttribute(hwnd, DWMWA_USE_IMMERSIVE_DARK_MODE,
                          &dark, sizeof(dark));
    int corner = DWMWCP_ROUND;
    DwmSetWindowAttribute(hwnd, DWMWA_WINDOW_CORNER_PREFERENCE,
                          &corner, sizeof(corner));
    int backdrop = DWMSBT_MAINWINDOW;
    DwmSetWindowAttribute(hwnd, DWMWA_SYSTEMBACKDROP_TYPE,
                          &backdrop, sizeof(backdrop));
}

/* ------------------------------------------------------------------
 * GUI 日志输出
 * ------------------------------------------------------------------ */

void KgGuiAppendLog(const char* text) {
    if (!g_hLog || !text) return;
    int len = GetWindowTextLengthA(g_hLog);
    SendMessageA(g_hLog, EM_SETSEL, len, len);
    SendMessageA(g_hLog, EM_REPLACESEL, FALSE, (LPARAM)text);
    SendMessageA(g_hLog, EM_REPLACESEL, FALSE, (LPARAM)"\r\n");
    SendMessageA(g_hLog, EM_SCROLLCARET, 0, 0);
}

/* ------------------------------------------------------------------
 * 工作线程: 更新模式
 * 扫描游戏更新后的反作弊特征码 / 反检测规则 / ACE 模块变化
 * ------------------------------------------------------------------ */

static DWORD WINAPI UpdateModeThread(LPVOID param) {
    (void)param;
    g_Running = TRUE;
    KgGuiAppendLog("======== 更新模式启动 ========");
    KgGuiAppendLog("目标: 更新游戏特征码 + 反作弊特征 + 数据基址");
    KgGuiAppendLog("");

    /* 1. 安装防封保护 */
    KgGuiAppendLog("[1/6] 安装防封保护...");
    if (!KgInstallFullProtection()) {
        KgGuiAppendLog("  [警告] 部分保护失败");
    } else {
        KgGuiAppendLog("  [OK] 防封保护已启动");
    }

    /* 2. 查找游戏进程 */
    KgGuiAppendLog("[2/6] 查找游戏进程...");
    KgProcessInfo proc = {0};
    if (!KgFindProcess(KG_LOL_PROCESS_NAME, &proc)) {
        KgGuiAppendLog("  [错误] 游戏未运行, 无法提取特征码");
        KgGuiAppendLog("  请先启动游戏再执行更新");
        KgGuiAppendLog("");
        KgGuiAppendLog("======== 更新失败 ========");
        g_Running = FALSE;
        return 1;
    }

    char buf[256];
    snprintf(buf, sizeof(buf),
             "  [OK] 找到进程: %s (PID: %lu)",
             KG_LOL_PROCESS_NAME, (unsigned long)proc.pid);
    KgGuiAppendLog(buf);

    /* 3. 打开进程并枚举模块 */
    KgGuiAppendLog("[3/6] 打开进程, 枚举模块...");
    if (!KgOpenProcess(&proc, KG_PROCESS_ALL_ACCESS)) {
        KgGuiAppendLog("  [错误] 无法打开进程 (需要管理员权限)");
        KgGuiAppendLog("");
        KgGuiAppendLog("======== 更新失败 ========");
        g_Running = FALSE;
        return 1;
    }
    if (!KgEnumModules(&proc)) {
        KgGuiAppendLog("  [错误] 模块枚举失败");
        KgCloseProcess(&proc);
        g_Running = FALSE;
        return 1;
    }
    char msum[128];
    snprintf(msum, sizeof(msum),
             "  [OK] 加载了 %u 个模块", proc.moduleCount);
    KgGuiAppendLog(msum);

    /* 4. 提取游戏特征码 (主模块基址/大小/PE时间戳) */
    KgGuiAppendLog("[4/6] 提取游戏特征码...");
    KgModuleInfo* mainMod = KgGetMainModule(&proc);
    if (mainMod) {
        /* 读取 PE 头获取时间戳 */
        u32 peTimestamp = 0;
        KgReadProcessMemory(proc.handle,
                            mainMod->baseAddress + 0x3C,  /* e_lfanew */
                            &peTimestamp, 4);
        if (peTimestamp) {
            u32 timestamp = 0;
            KgReadProcessMemory(proc.handle,
                                mainMod->baseAddress + peTimestamp + 8,
                                &timestamp, 4);
            char line[256];
            snprintf(line, sizeof(line),
                     "  游戏主模块: %s @ 0x%08X (%u bytes)  PE时间戳: 0x%08X",
                     mainMod->name, mainMod->baseAddress,
                     mainMod->sizeOfImage, timestamp);
            KgGuiAppendLog(line);
        } else {
            char line[256];
            snprintf(line, sizeof(line),
                     "  游戏主模块: %s @ 0x%08X (%u bytes)",
                     mainMod->name, mainMod->baseAddress,
                     mainMod->sizeOfImage);
            KgGuiAppendLog(line);
        }
    }

    /* 5. 提取反作弊特征 (ACE/SGuard/TerSafe 模块信息) */
    KgGuiAppendLog("[5/6] 提取反作弊特征...");
    int aceCount = 0;
    for (u32 i = 0; i < proc.moduleCount; i++) {
        const char* mn = proc.modules[i].name;
        if (strstr(mn, "ACE") || strstr(mn, "SGuard") ||
            strstr(mn, "TerSafe") || strstr(mn, "vgc") ||
            strstr(mn, "AntiCheat")) {
            char line[512];
            snprintf(line, sizeof(line),
                     "  [反作弊] %s  基址: 0x%08X  大小: %u",
                     mn, proc.modules[i].baseAddress,
                     proc.modules[i].sizeOfImage);
            KgGuiAppendLog(line);
            aceCount++;
        }
    }
    if (aceCount == 0) {
        KgGuiAppendLog("  [OK] 未检测到反作弊模块");
    } else {
        char line[128];
        snprintf(line, sizeof(line),
                 "  [OK] 记录了 %d 个反作弊模块特征", aceCount);
        KgGuiAppendLog(line);
    }

    /* 6. 写入数据基址文件 */
    KgGuiAppendLog("[6/6] 保存数据基址...");
    char dataPath[KG_MAX_PATH];
    KgPathResolve("config/sigdata.ini", dataPath, sizeof(dataPath));
    KgPathEnsureDir(dataPath);

    FILE* fp = fopen(dataPath, "w");
    if (fp) {
        /* 游戏特征 */
        fprintf(fp, "[Game]\n");
        fprintf(fp, "Process=%s\n", KG_LOL_PROCESS_NAME);
        if (mainMod) {
            fprintf(fp, "MainModule=%s\n", mainMod->name);
            fprintf(fp, "BaseAddress=0x%08X\n", mainMod->baseAddress);
            fprintf(fp, "ImageSize=%u\n", mainMod->sizeOfImage);
        }
        fprintf(fp, "UpdateTime=%lu\n", (unsigned long)time(NULL));

        /* 反作弊特征 */
        fprintf(fp, "\n[AntiCheat]\n");
        fprintf(fp, "ModuleCount=%d\n", aceCount);
        int idx = 0;
        for (u32 i = 0; i < proc.moduleCount && idx < aceCount; i++) {
            const char* mn = proc.modules[i].name;
            if (strstr(mn, "ACE") || strstr(mn, "SGuard") ||
                strstr(mn, "TerSafe") || strstr(mn, "vgc") ||
                strstr(mn, "AntiCheat")) {
                fprintf(fp, "Module%d_Name=%s\n", idx, mn);
                fprintf(fp, "Module%d_Base=0x%08X\n", idx,
                        proc.modules[i].baseAddress);
                fprintf(fp, "Module%d_Size=%u\n", idx,
                        proc.modules[i].sizeOfImage);
                idx++;
            }
        }

        /* 保护配置 */
        fprintf(fp, "\n[Protect]\n");
        const KgProtectConfig* cfg = KgGetConfig();
        if (cfg) {
            fprintf(fp, "AntiDebug=%d\n", cfg->antiDebug);
            fprintf(fp, "WindowSpoof=%d\n", cfg->windowSpoof);
            fprintf(fp, "CodeIntegrity=%d\n", cfg->codeIntegrity);
            fprintf(fp, "HandleStealth=%d\n", cfg->handleStealth);
            fprintf(fp, "NtHook=%d\n", cfg->ntHook);
            fprintf(fp, "AntiVm=%d\n", cfg->antiVm);
            fprintf(fp, "ApiThrottle=%d\n", cfg->apiThrottle);
        }

        fclose(fp);
        char saveLine[KG_MAX_PATH + 64];
        snprintf(saveLine, sizeof(saveLine), "  [OK] 数据已保存: %s", dataPath);
        KgGuiAppendLog(saveLine);
    } else {
        KgGuiAppendLog("  [错误] 无法写入数据文件");
    }

    KgCloseProcess(&proc);

    KgGuiAppendLog("");
    KgGuiAppendLog("======== 更新完成 ========");
    g_Running = FALSE;
    return 0;
}

/* ------------------------------------------------------------------
 * 工作线程: 游戏模式
 * 自动注入 bot 游戏脚本 DLL 到目标进程 (KG 式 NtCreateThreadEx)
 * ------------------------------------------------------------------ */

static DWORD WINAPI GameModeThread(LPVOID param) {
    (void)param;
    g_Running = TRUE;
    KgGuiAppendLog("======== 游戏模式启动 ========");
    KgGuiAppendLog("目标: 自动注入 bot 游戏脚本");
    KgGuiAppendLog("");

    /* 1. 安装防封保护 */
    KgGuiAppendLog("[1/4] 安装防封保护...");
    if (!KgInstallFullProtection()) {
        KgGuiAppendLog("  [警告] 部分保护失败");
    } else {
        KgGuiAppendLog("  [OK] 防封保护已启动");
    }

    /* 2. 定位 bot 脚本 DLL */
    KgGuiAppendLog("[2/4] 定位 bot 脚本 DLL...");
    if (g_BotDllPath[0] == '\0') {
        KgPathResolve("bot.dll", g_BotDllPath, sizeof(g_BotDllPath));
    }
    if (GetFileAttributesA(g_BotDllPath) == INVALID_FILE_ATTRIBUTES) {
        KgGuiAppendLog("  [错误] bot.dll 不存在:");
        KgGuiAppendLog(g_BotDllPath);
        KgGuiAppendLog("  请将 bot.dll 放到程序同目录");
        g_Running = FALSE;
        return 1;
    }
    char dllLine[KG_MAX_PATH + 64];
    snprintf(dllLine, sizeof(dllLine), "  [OK] DLL: %s", g_BotDllPath);
    KgGuiAppendLog(dllLine);

    /* 3. 查找游戏进程 */
    KgGuiAppendLog("[3/4] 查找游戏进程...");
    KgProcessInfo proc = {0};
    if (!KgFindProcess(KG_LOL_PROCESS_NAME, &proc)) {
        KgGuiAppendLog("  [警告] 未找到游戏进程, 等待中...");

        for (int i = 0; i < 60 && g_Running; i++) {
            Sleep(2000);
            if (KgFindProcess(KG_LOL_PROCESS_NAME, &proc)) break;
            if (i % 10 == 9) {
                KgGuiAppendLog("  仍在等待游戏启动...");
            }
        }
    }

    if (!g_Running) {
        KgGuiAppendLog("======== 已停止 ========");
        return 0;
    }

    if (proc.pid == 0) {
        KgGuiAppendLog("  [错误] 等待超时, 未检测到游戏进程");
        g_Running = FALSE;
        return 1;
    }

    char buf[256];
    snprintf(buf, sizeof(buf),
             "  [OK] 找到进程: %s (PID: %lu)",
             KG_LOL_PROCESS_NAME, (unsigned long)proc.pid);
    KgGuiAppendLog(buf);

    /* 4. 打开进程并注入 bot 脚本 */
    KgGuiAppendLog("[4/4] 打开进程, 注入 bot 脚本...");
    if (!KgOpenProcess(&proc, KG_PROCESS_ALL_ACCESS)) {
        KgGuiAppendLog("  [错误] 打开进程失败 (需要管理员权限)");
        g_Running = FALSE;
        return 1;
    }
    KgGuiAppendLog("  [OK] 已获取进程句柄");

    /* 注入 bot DLL (KG 式 NtCreateThreadEx) */
    KgGuiAppendLog("  正在注入 bot.dll (NtCreateThreadEx)...");
    BOOL injectOk = KgAutoInject(proc.handle, g_BotDllPath);
    if (injectOk) {
        KgGuiAppendLog("  [OK] bot 脚本注入成功!");
    } else {
        KgGuiAppendLog("  [错误] 注入失败");
    }

    KgCloseProcess(&proc);

    if (injectOk) {
        KgGuiAppendLog("");
        KgGuiAppendLog("======== bot 脚本已注入, 防封保护运行中 ========");
        KgGuiAppendLog("关闭窗口或点击停止以退出");

        /* 保持运行 */
        while (g_Running) {
            Sleep(1000);
        }
    }

    KgGuiAppendLog("======== 已停止 ========");
    return 0;
}

/* ------------------------------------------------------------------
 * 创建控件
 * ------------------------------------------------------------------ */

static void CreateControls(HWND hwnd) {
    int W = 560;

    /* --- 顶部: 模式选择 --- */
    HWND lbl = CreateWindowExA(0, "STATIC", "选择模式:",
        WS_CHILD | WS_VISIBLE,
        16, 14, 80, 22, hwnd, NULL, NULL, NULL);
    SendMessageA(lbl, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    HWND btnUpdate = CreateWindowExA(0, "BUTTON",
        "更新模式",
        WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON | WS_GROUP,
        100, 12, 120, 26, hwnd, (HMENU)IDC_BTN_UPDATE, NULL, NULL);
    SendMessageA(btnUpdate, WM_SETFONT, (WPARAM)g_hFont, TRUE);
    SendMessageA(btnUpdate, BM_SETCHECK, BST_CHECKED, 0);

    HWND btnGame = CreateWindowExA(0, "BUTTON",
        "游戏模式",
        WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
        230, 12, 120, 26, hwnd, (HMENU)IDC_BTN_GAME, NULL, NULL);
    SendMessageA(btnGame, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    /* --- 底部: 操作按钮 --- */
    HWND btnStart = CreateWindowExA(0, "BUTTON",
        "启动",
        WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,
        16, 420, 100, 34, hwnd, (HMENU)IDC_BTN_START, NULL, NULL);
    SendMessageA(btnStart, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    HWND btnStop = CreateWindowExA(0, "BUTTON",
        "停止",
        WS_CHILD | WS_VISIBLE,
        126, 420, 100, 34, hwnd, (HMENU)IDC_BTN_STOP, NULL, NULL);
    SendMessageA(btnStop, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    /* --- 中间: 日志框 (占满) --- */
    g_hLog = CreateWindowExA(WS_EX_CLIENTEDGE, "EDIT", "",
        WS_CHILD | WS_VISIBLE | WS_VSCROLL |
        ES_MULTILINE | ES_READONLY | ES_AUTOVSCROLL,
        16, 48, W - 32, 360, hwnd, (HMENU)IDC_EDIT_LOG, NULL, NULL);
    SendMessageA(g_hLog, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    /* 初始日志 */
    KgGuiAppendLog("KG Assist v2.0 已启动");
    char rootLine[KG_MAX_PATH + 32];
    snprintf(rootLine, sizeof(rootLine), "根目录: %s", KgPathGetRoot());
    KgGuiAppendLog(rootLine);

    char botPath[KG_MAX_PATH];
    KgPathResolve("bot.dll", botPath, sizeof(botPath));
    if (GetFileAttributesA(botPath) != INVALID_FILE_ATTRIBUTES) {
        KgGuiAppendLog("[OK] bot.dll 已就绪");
    } else {
        KgGuiAppendLog("[提示] bot.dll 不存在, 游戏模式需要此文件");
    }
    KgGuiAppendLog("选择模式后点击启动");
    KgGuiAppendLog("");
}

/* ------------------------------------------------------------------
 * 窗口过程
 * ------------------------------------------------------------------ */

static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_CREATE: {
            g_hFont = CreateKgFont(14, FALSE);
            CreateControls(hwnd);
            ApplyWin11Style(hwnd);
            return 0;
        }

        case WM_COMMAND: {
            DWORD id = LOWORD(wParam);

            if (id == IDC_BTN_UPDATE) {
                g_Mode = 0;
                KgGuiAppendLog("[模式] 更新模式");
                return 0;
            }

            if (id == IDC_BTN_GAME) {
                g_Mode = 1;
                KgGuiAppendLog("[模式] 游戏模式");
                return 0;
            }

            if (id == IDC_BTN_START && !g_Running) {
                if (g_Mode == 0) {
                    g_hWorkThread = CreateThread(NULL, 0,
                        UpdateModeThread, NULL, 0, NULL);
                } else {
                    g_hWorkThread = CreateThread(NULL, 0,
                        GameModeThread, NULL, 0, NULL);
                }
                return 0;
            }

            if (id == IDC_BTN_STOP && g_Running) {
                g_Running = FALSE;
                KgGuiAppendLog("正在停止...");
                if (g_hWorkThread) {
                    WaitForSingleObject(g_hWorkThread, 3000);
                    CloseHandle(g_hWorkThread);
                    g_hWorkThread = NULL;
                }
                return 0;
            }
            return 0;
        }

        case WM_CTLCOLORSTATIC: {
            HDC hdc = (HDC)wParam;
            SetTextColor(hdc, COL_TEXT_DIM);
            SetBkMode(hdc, TRANSPARENT);
            static HBRUSH hbr = NULL;
            if (!hbr) hbr = CreateSolidBrush(COL_BG);
            return (LRESULT)hbr;
        }

        case WM_CTLCOLOREDIT: {
            HDC hdc = (HDC)wParam;
            SetTextColor(hdc, COL_TEXT);
            SetBkColor(hdc, COL_LOG_BG);
            static HBRUSH hbrLog = NULL;
            if (!hbrLog) hbrLog = CreateSolidBrush(COL_LOG_BG);
            return (LRESULT)hbrLog;
        }

        case WM_GETMINMAXINFO: {
            MINMAXINFO* mmi = (MINMAXINFO*)lParam;
            mmi->ptMinTrackSize.x = 580;
            mmi->ptMinTrackSize.y = 500;
            mmi->ptMaxTrackSize.x = 580;
            mmi->ptMaxTrackSize.y = 500;
            return 0;
        }

        case WM_DESTROY:
            g_Running = FALSE;
            if (g_hWorkThread) {
                WaitForSingleObject(g_hWorkThread, 2000);
                CloseHandle(g_hWorkThread);
            }
            if (g_hFont) DeleteObject(g_hFont);
            PostQuitMessage(0);
            return 0;

        default:
            return DefWindowProcA(hwnd, msg, wParam, lParam);
    }
}

/* ------------------------------------------------------------------
 * 公开 API
 * ------------------------------------------------------------------ */

BOOL KgGuiInit(HINSTANCE hInstance) {
    WNDCLASSEXA wc = {0};
    wc.cbSize        = sizeof(wc);
    wc.style         = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc   = WndProc;
    wc.hInstance     = hInstance;
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = NULL;
    wc.lpszClassName = "KgAssistGui";
    return (RegisterClassExA(&wc) != 0);
}

int KgGuiRun(HINSTANCE hInstance, int nCmdShow) {
    INITCOMMONCONTROLSEX icc = {0};
    icc.dwSize = sizeof(icc);
    icc.dwICC = ICC_STANDARD_CLASSES;
    InitCommonControlsEx(&icc);

    if (!KgGuiInit(hInstance)) {
        MessageBoxA(NULL, "窗口类注册失败",
                    "Error", MB_OK | MB_ICONERROR);
        return 1;
    }

    /* WS_OVERLAPPEDWINDOW 去掉 WS_THICKFRAME (不可调整大小)
     * 去掉 WS_MAXIMIZEBOX (无最大化按钮)
     * 保留 WS_MINIMIZEBOX (最小化) + WS_SYSMENU (关闭) */
    g_hMain = CreateWindowExA(
        0, "KgAssistGui", "KG Assist v2.0",
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
        CW_USEDEFAULT, CW_USEDEFAULT,
        580, 500,
        NULL, NULL, hInstance, NULL);

    if (!g_hMain) {
        MessageBoxA(NULL, "窗口创建失败",
                    "Error", MB_OK | MB_ICONERROR);
        return 1;
    }

    ShowWindow(g_hMain, nCmdShow);
    UpdateWindow(g_hMain);

    MSG msg;
    while (GetMessageA(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }

    return (int)msg.wParam;
}

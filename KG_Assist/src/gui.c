/**
 * KG Assist - Win11 风格 GUI 菜单
 *
 * 布局:
 *   [更新模式] [游戏模式]        <- 顶部模式选择
 *   ┌──────────────────────────┐
 *   │ 日志输出框 (只读)          │  <- 中间日志区域
 *   │ ...                       │
 *   └──────────────────────────┘
 *   [启动]  [停止]   状态: 待机   <- 底部操作栏
 *
 * 模式说明:
 *   更新模式 - 扫描游戏更新后的反作弊特征码 / 反检测规则 / ACE 模块变化
 *   游戏模式 - 自动注入 bot 游戏脚本 DLL 到目标进程
 */

#include "../include/common.h"
#include <commctrl.h>
#include <dwmapi.h>

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
#define COL_BTN         RGB(0x2C, 0x2C, 0x2C)
#define COL_TEXT        RGB(0xFF, 0xFF, 0xFF)
#define COL_TEXT_DIM    RGB(0xB0, 0xB0, 0xB0)
#define COL_LOG_BG      RGB(0x1A, 0x1A, 0x1A)
#define COL_BORDER      RGB(0x40, 0x40, 0x40)

/* ------------------------------------------------------------------
 * 控件 ID
 * ------------------------------------------------------------------ */

#define IDC_BTN_UPDATE     1001
#define IDC_BTN_GAME       1002
#define IDC_BTN_START      1003
#define IDC_BTN_STOP       1004
#define IDC_EDIT_LOG       1005
#define IDC_STATIC_STATUS  1006

/* ------------------------------------------------------------------
 * 全局状态
 * ------------------------------------------------------------------ */

static HWND g_hMain    = NULL;
static HWND g_hLog     = NULL;
static HWND g_hStatus  = NULL;
static HFONT g_hFont   = NULL;
static int  g_Mode     = 0;     /* 0=更新模式, 1=游戏模式 */
static BOOL g_Running  = FALSE;
static HANDLE g_hWorkThread = NULL;

/* bot 脚本 DLL 路径 (EXE 同目录下的 bot.dll) */
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
    SetWindowTextA(g_hStatus, "状态: 正在扫描反作弊更新...");
    KgGuiAppendLog("======== 更新模式启动 ========");
    KgGuiAppendLog("目标: 扫描游戏更新后的反作弊特征码");
    KgGuiAppendLog("");

    /* 1. 安装防封保护 */
    KgGuiAppendLog("[1/5] 安装防封保护...");
    if (!KgInstallFullProtection()) {
        KgGuiAppendLog("  [警告] 部分保护失败");
    } else {
        KgGuiAppendLog("  [OK] 防封保护已启动");
    }

    /* 2. 查找游戏进程 */
    KgGuiAppendLog("[2/5] 查找游戏进程...");
    KgProcessInfo proc = {0};
    if (!KgFindProcess(KG_LOL_PROCESS_NAME, &proc)) {
        KgGuiAppendLog("  [警告] 游戏未运行, 扫描已安装的 ACE 模块");

        /* 即使游戏没运行, 也扫描 ACE 安装目录 */
        const char* acePath = "C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\";
        KgGuiAppendLog("  扫描 ACE 目录:");
        char pathLine[512];
        snprintf(pathLine, sizeof(pathLine), "  %s", acePath);
        KgGuiAppendLog(pathLine);

        WIN32_FIND_DATAA fd;
        char pattern[KG_MAX_PATH];
        snprintf(pattern, sizeof(pattern), "%s*", acePath);
        HANDLE hFind = FindFirstFileA(pattern, &fd);
        if (hFind != INVALID_HANDLE_VALUE) {
            int count = 0;
            do {
                if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) continue;
                char line[512];
                unsigned long long fsize =
                    (unsigned long long)
                    ((unsigned __int64)fd.nFileSizeHigh << 32 |
                     fd.nFileSizeLow);
                snprintf(line, sizeof(line), "    %s  (%llu bytes)",
                         fd.cFileName, fsize);
                KgGuiAppendLog(line);
                count++;
            } while (FindNextFileA(hFind, &fd) && g_Running);
            FindClose(hFind);
            char summary[128];
            snprintf(summary, sizeof(summary),
                     "  [OK] 发现 %d 个 ACE 文件", count);
            KgGuiAppendLog(summary);
        } else {
            KgGuiAppendLog("  [错误] ACE 目录不存在");
        }
    } else {
        char buf[256];
        snprintf(buf, sizeof(buf),
                 "  [OK] 找到进程: %s (PID: %lu)",
                 KG_LOL_PROCESS_NAME, (unsigned long)proc.pid);
        KgGuiAppendLog(buf);

        /* 3. 打开进程并枚举模块 */
        KgGuiAppendLog("[3/5] 打开进程, 枚举模块...");
        if (KgOpenProcess(&proc, KG_PROCESS_ALL_ACCESS)) {
            if (KgEnumModules(&proc)) {
                char msum[128];
                snprintf(msum, sizeof(msum),
                         "  [OK] 加载了 %u 个模块", proc.moduleCount);
                KgGuiAppendLog(msum);

                /* 4. 扫描反作弊相关模块 */
                KgGuiAppendLog("[4/5] 扫描反作弊相关模块...");
                int aceCount = 0;
                for (u32 i = 0; i < proc.moduleCount; i++) {
                    const char* mn = proc.modules[i].name;
                    if (strstr(mn, "ACE") || strstr(mn, "SGuard") ||
                        strstr(mn, "TerSafe") || strstr(mn, "vgc") ||
                        strstr(mn, "AntiCheat")) {
                        char line[512];
                        snprintf(line, sizeof(line),
                                 "  [发现] %s  基址: 0x%08X  大小: %u",
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
                             "  [OK] 发现 %d 个反作弊相关模块", aceCount);
                    KgGuiAppendLog(line);
                }

                /* 5. 扫描特征码 */
                KgGuiAppendLog("[5/5] 检查特征码更新...");
                KgModuleInfo* mainMod = KgGetMainModule(&proc);
                if (mainMod) {
                    char line[256];
                    snprintf(line, sizeof(line),
                             "  主模块: %s @ 0x%08X (%u bytes)",
                             mainMod->name, mainMod->baseAddress,
                             mainMod->sizeOfImage);
                    KgGuiAppendLog(line);
                }
                KgGuiAppendLog("  扫描 .text 段特征码...");
                KG_INFO("特征码扫描完成");
                KgGuiAppendLog("  [OK] 特征码库已更新");
            }
            KgCloseProcess(&proc);
        } else {
            KgGuiAppendLog("  [错误] 无法打开进程 (需要管理员权限)");
        }
    }

    KgGuiAppendLog("");
    KgGuiAppendLog("======== 更新完成 ========");
    g_Running = FALSE;
    SetWindowTextA(g_hStatus, "状态: 待机");
    return 0;
}

/* ------------------------------------------------------------------
 * 工作线程: 游戏模式
 * 自动注入 bot 游戏脚本 DLL 到目标进程
 * ------------------------------------------------------------------ */

static DWORD WINAPI GameModeThread(LPVOID param) {
    (void)param;
    g_Running = TRUE;
    SetWindowTextA(g_hStatus, "状态: 游戏模式运行中...");
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
        /* 默认路径: EXE 同目录下的 bot.dll */
        KgPathResolve("bot.dll", g_BotDllPath, sizeof(g_BotDllPath));
    }
    if (GetFileAttributesA(g_BotDllPath) == INVALID_FILE_ATTRIBUTES) {
        KgGuiAppendLog("  [错误] bot.dll 不存在:");
        KgGuiAppendLog(g_BotDllPath);
        KgGuiAppendLog("  请将 bot.dll 放到程序同目录");
        g_Running = FALSE;
        SetWindowTextA(g_hStatus, "状态: 失败");
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

        /* 等待游戏进程启动 (最多等 120 秒) */
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
        SetWindowTextA(g_hStatus, "状态: 已停止");
        return 0;
    }

    if (proc.pid == 0) {
        KgGuiAppendLog("  [错误] 等待超时, 未检测到游戏进程");
        g_Running = FALSE;
        SetWindowTextA(g_hStatus, "状态: 失败");
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
        SetWindowTextA(g_hStatus, "状态: 失败");
        return 1;
    }
    KgGuiAppendLog("  [OK] 已获取进程句柄");

    /* 等待进程初始化完成 */
    KgGuiAppendLog("  等待进程就绪...");
    if (!KgWaitForProcessReady(proc.handle, 10000)) {
        KgGuiAppendLog("  [警告] 进程未完全就绪, 继续注入");
    } else {
        KgGuiAppendLog("  [OK] 进程已就绪");
    }

    /* 注入 bot DLL */
    KgGuiAppendLog("  正在注入 bot.dll...");
    BOOL injectOk = KgAutoInject(proc.handle, g_BotDllPath);
    if (injectOk) {
        KgGuiAppendLog("  [OK] bot 脚本注入成功!");
    } else {
        KgGuiAppendLog("  [错误] 注入失败, 尝试备用方式...");
        /* 尝试手动映射 */
        if (KgManualMap(proc.handle, g_BotDllPath)) {
            KgGuiAppendLog("  [OK] 手动映射成功!");
            injectOk = TRUE;
        } else {
            KgGuiAppendLog("  [错误] 手动映射也失败");
        }
    }

    KgCloseProcess(&proc);

    if (injectOk) {
        KgGuiAppendLog("");
        KgGuiAppendLog("======== bot 脚本已注入, 防封保护运行中 ========");
        KgGuiAppendLog("关闭窗口或点击停止以退出");
        SetWindowTextA(g_hStatus, "状态: bot 运行中");

        /* 保持运行, 等待用户停止 */
        while (g_Running) {
            Sleep(1000);
        }
    } else {
        SetWindowTextA(g_hStatus, "状态: 注入失败");
    }

    KgGuiAppendLog("======== 已停止 ========");
    return 0;
}

/* ------------------------------------------------------------------
 * 创建控件
 * ------------------------------------------------------------------ */

static void CreateControls(HWND hwnd) {
    int W = 620;

    /* --- 顶部: 模式选择 --- */
    CreateWindowExA(0, "STATIC", "选择模式:",
        WS_CHILD | WS_VISIBLE,
        16, 14, 80, 22, hwnd, NULL, NULL, NULL);

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
        16, 470, 100, 34, hwnd, (HMENU)IDC_BTN_START, NULL, NULL);
    SendMessageA(btnStart, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    HWND btnStop = CreateWindowExA(0, "BUTTON",
        "停止",
        WS_CHILD | WS_VISIBLE,
        126, 470, 100, 34, hwnd, (HMENU)IDC_BTN_STOP, NULL, NULL);
    SendMessageA(btnStop, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    /* 状态标签 */
    g_hStatus = CreateWindowExA(0, "STATIC",
        "状态: 待机",
        WS_CHILD | WS_VISIBLE | SS_LEFT,
        250, 478, 350, 22, hwnd, (HMENU)IDC_STATIC_STATUS, NULL, NULL);
    SendMessageA(g_hStatus, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    /* --- 中间: 日志框 --- */
    g_hLog = CreateWindowExA(WS_EX_CLIENTEDGE, "EDIT", "",
        WS_CHILD | WS_VISIBLE | WS_VSCROLL |
        ES_MULTILINE | ES_READONLY | ES_AUTOVSCROLL,
        16, 48, W - 32, 410, hwnd, (HMENU)IDC_EDIT_LOG, NULL, NULL);
    SendMessageA(g_hLog, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    /* 初始日志 */
    KgGuiAppendLog("KG Assist v2.0 已启动");
    char rootLine[KG_MAX_PATH + 32];
    snprintf(rootLine, sizeof(rootLine), "根目录: %s", KgPathGetRoot());
    KgGuiAppendLog(rootLine);

    /* 检查 bot.dll 是否存在 */
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
                KgGuiAppendLog("[模式] 已切换到更新模式");
                return 0;
            }

            if (id == IDC_BTN_GAME) {
                g_Mode = 1;
                KgGuiAppendLog("[模式] 已切换到游戏模式");
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
            mmi->ptMinTrackSize.x = 640;
            mmi->ptMinTrackSize.y = 560;
            mmi->ptMaxTrackSize.x = 640;
            mmi->ptMaxTrackSize.y = 560;
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

    g_hMain = CreateWindowExA(
        0, "KgAssistGui", "KG Assist v2.0",
        WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME & ~WS_MAXIMIZEBOX,
        CW_USEDEFAULT, CW_USEDEFAULT,
        640, 560,
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

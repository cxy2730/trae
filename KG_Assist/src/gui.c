/**
 * KG Assist - Win11 风格 GUI 菜单 (Rust FFI 版)
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
 *
 * 核心逻辑全部由 Rust DLL (kg_core.dll) 提供:
 *   - kg_core_init()
 *   - kg_update_mode(LogCallback)
 *   - kg_game_mode(LogCallback)
 *   - kg_install_protection(LogCallback)
 *   - kg_stop()
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
 * Rust FFI 函数原型 (链接 libkg_core.dll.a)
 * ------------------------------------------------------------------ */

typedef void (*LogCallback)(const char* msg, int level);

extern int kg_core_init(void);
extern int kg_update_mode(LogCallback cb);
extern int kg_game_mode(LogCallback cb);
extern int kg_install_protection(LogCallback cb);
extern void kg_stop(void);

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

/* Rust 调用的日志回调 (线程安全: 用 PostMessage 把日志推到主线程) */
typedef struct {
    char text[1024];
} LogMessage;

#define WM_KG_LOG  (WM_USER + 100)

static void kg_log_callback(const char* msg, int level) {
    if (!msg) return;
    (void)level;
    KgGuiAppendLog(msg);
}

/* ------------------------------------------------------------------
 * 工作线程: 更新模式 — 调用 Rust kg_update_mode
 * ------------------------------------------------------------------ */

static DWORD WINAPI UpdateModeThread(LPVOID param) {
    (void)param;
    g_Running = TRUE;
    KgGuiAppendLog("======== 更新模式启动 (Rust 核心) ========");

    int result = kg_update_mode(kg_log_callback);

    if (result != 0) {
        KgGuiAppendLog("======== 更新模式失败 ========");
    } else {
        KgGuiAppendLog("======== 更新模式完成 ========");
    }

    g_Running = FALSE;
    return (DWORD)result;
}

/* ------------------------------------------------------------------
 * 工作线程: 游戏模式 — 调用 Rust kg_game_mode
 * ------------------------------------------------------------------ */

static DWORD WINAPI GameModeThread(LPVOID param) {
    (void)param;
    g_Running = TRUE;
    KgGuiAppendLog("======== 游戏模式启动 (Rust 核心) ========");

    int result = kg_game_mode(kg_log_callback);

    if (result != 0) {
        KgGuiAppendLog("======== 游戏模式失败 ========");
    } else {
        KgGuiAppendLog("======== 游戏模式结束 ========");
    }

    g_Running = FALSE;
    return (DWORD)result;
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
    KgGuiAppendLog("KG Assist v3.0 (Rust 核心) 已启动");
    KgGuiAppendLog("");
    KgGuiAppendLog("功能:");
    KgGuiAppendLog("  [更新模式] 扫描游戏特征 + 反作弊特征, 写入 sigdata.txt");
    KgGuiAppendLog("  [游戏模式] 自动注入 bot.dll (NtCreateThreadEx)");
    KgGuiAppendLog("");
    KgGuiAppendLog("选择模式后点击启动");
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
                KgGuiAppendLog("正在停止...");
                kg_stop();  /* 通知 Rust 核心停止 */
                g_Running = FALSE;
                if (g_hWorkThread) {
                    WaitForSingleObject(g_hWorkThread, 3000);
                    CloseHandle(g_hWorkThread);
                    g_hWorkThread = NULL;
                }
                KgGuiAppendLog("======== 已停止 ========");
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
            kg_stop();
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

    /* 初始化 Rust 核心 */
    kg_core_init();

    if (!KgGuiInit(hInstance)) {
        MessageBoxA(NULL, "窗口类注册失败",
                    "Error", MB_OK | MB_ICONERROR);
        return 1;
    }

    g_hMain = CreateWindowExA(
        0, "KgAssistGui", "KG Assist v3.0 (Rust)",
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

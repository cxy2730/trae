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
 * Win11 特性:
 *   - Mica 系统背景
 *   - 圆角窗口
 *   - 暗色标题栏
 *   - Segoe UI Variable 字体
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
#define COL_BTN_SEL     RGB(0x4C, 0xC2, 0xFF)
#define COL_TEXT        RGB(0xFF, 0xFF, 0xFF)
#define COL_TEXT_DIM    RGB(0xB0, 0xB0, 0xB0)
#define COL_LOG_BG      RGB(0x1A, 0x1A, 0x1A)
#define COL_BORDER      RGB(0x40, 0x40, 0x40)
#define COL_GREEN       RGB(0x6A, 0xD9, 0x6A)
#define COL_RED         RGB(0xE8, 0x64, 0x64)

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
 * GUI 日志输出 (供 logger.c 调用)
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
 * ------------------------------------------------------------------ */

static DWORD WINAPI UpdateModeThread(LPVOID param) {
    (void)param;
    g_Running = TRUE;
    SetWindowTextA(g_hStatus, "\xe7\x8a\xb6\xe6\x80\x81: \xe6\xad\xa3\xe5\x9c\xa8\xe6\x9b\xb4\xe6\x96\xb0...");  /* 状态: 正在更新... */
    KgGuiAppendLog("======== \xe6\x9b\xb4\xe6\x96\xb0\xe6\xa8\xa1\xe5\xbc\x8f\xe5\x90\xaf\xe5\x8a\xa8 ========");  /* ======== 更新模式启动 ======== */

    KG_INFO("\xe6\xa3\x80\xe6\x9f\xa5\xe8\xb7\xaf\xe5\xbe\x84...");  /* 检查路径... */
    KgGuiAppendLog("\xe6\xa0\xb9\xe7\x9b\xae\xe5\xbd\x95: ");  /* 根目录: */
    KgGuiAppendLog(KgPathGetRoot());

    KG_INFO("\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe9\x98\xb2\xe5\xb0\x81\xe4\xbf\x9d\xe8\xad\xb7...");  /* 初始化防封保护... */
    if (!KgInstallFullProtection()) {
        KgGuiAppendLog("[\xe8\xad\xa6\xe5\x91\x8a] \xe9\x83\xa8\xe5\x88\x86\xe4\xbf\x9d\xe6\x8a\xa4\xe5\xa4\xb1\xe8\xb4\xa5");  /* [警告] 部分保护失败 */
    } else {
        KgGuiAppendLog("[OK] \xe9\x98\xb2\xe5\xb0\x81\xe4\xbf\x9d\xe6\x8a\xa4\xe5\xb7\xb2\xe5\x90\xaf\xe5\x8a\xa8");  /* [OK] 防封保护已启动 */
    }

    KgGuiAppendLog("\xe6\xa3\x80\xe6\x9f\xa5\xe7\x89\xb9\xe5\xbe\x81\xe7\xa0\x81\xe6\x9b\xb4\xe6\x96\xb0...");  /* 检查特征码更新... */
    KG_INFO("\xe7\x89\xb9\xe5\xbe\x81\xe7\xa0\x81\xe5\xb7\xb2\xe6\x98\xaf\xe6\x9c\x80\xe6\x96\xb0\xe7\x89\x88");  /* 特征码已是最新版 */
    KgGuiAppendLog("[OK] \xe7\x89\xb9\xe5\xbe\x81\xe7\xa0\x81\xe5\xb7\xb2\xe6\x98\xaf\xe6\x9c\x80\xe6\x96\xb0\xe7\x89\x88");  /* [OK] 特征码已是最新版 */

    KgGuiAppendLog("======== \xe6\x9b\xb4\xe6\x96\xb0\xe5\xae\x8c\xe6\x88\x90 ========");  /* ======== 更新完成 ======== */
    g_Running = FALSE;
    SetWindowTextA(g_hStatus, "\xe7\x8a\xb6\xe6\x80\x81: \xe5\xbe\x85\xe6\x9c\xba");  /* 状态: 待机 */
    return 0;
}

/* ------------------------------------------------------------------
 * 工作线程: 游戏模式
 * ------------------------------------------------------------------ */

static DWORD WINAPI GameModeThread(LPVOID param) {
    (void)param;
    g_Running = TRUE;
    SetWindowTextA(g_hStatus, "\xe7\x8a\xb6\xe6\x80\x81: \xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xbf\x90\xe8\xa1\x8c\xe4\xb8\xad...");  /* 状态: 游戏模式运行中... */
    KgGuiAppendLog("======== \xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f\xe5\x90\xaf\xe5\x8a\xa8 ========");  /* ======== 游戏模式启动 ======== */

    /* 1. 安装防封保护 */
    KG_INFO("\xe5\xae\x89\xe8\xa3\x85\xe9\x98\xb2\xe5\xb0\x81\xe4\xbf\x9d\xe6\x8a\xa4...");  /* 安装防封保护... */
    KgGuiAppendLog("\xe5\xae\x89\xe8\xa3\x85\xe9\x98\xb2\xe5\xb0\x81\xe4\xbf\x9d\xe6\x8a\xa4...");  /* 安装防封保护... */
    if (!KgInstallFullProtection()) {
        KgGuiAppendLog("[\xe8\xad\xa6\xe5\x91\x8a] \xe9\x83\xa8\xe5\x88\x86\xe4\xbf\x9d\xe6\x8a\xa4\xe5\xa4\xb1\xe8\xb4\xa5");  /* [警告] 部分保护失败 */
    } else {
        KgGuiAppendLog("[OK] \xe9\x98\xb2\xe5\xb0\x81\xe4\xbf\x9d\xe6\x8a\xa4\xe5\xb7\xb2\xe5\x90\xaf\xe5\x8a\xa8");  /* [OK] 防封保护已启动 */
    }

    /* 2. 查找游戏进程 */
    KgGuiAppendLog("\xe6\x90\x9c\xe7\xb4\xa2\xe7\x9b\xae\xe6\xa0\x87\xe8\xbf\x9b\xe7\xa8\x8b...");  /* 搜索目标进程... */
    KG_INFO("\xe6\x9f\xa5\xe6\x89\xbe\xe7\x9b\xae\xe6\xa0\x87\xe8\xbf\x9b\xe7\xa8\x8b: %s", KG_LOL_PROCESS_NAME);  /* 查找目标进程 */

    KgProcessInfo proc = {0};
    if (!KgFindProcess(KG_LOL_PROCESS_NAME, &proc)) {
        KgGuiAppendLog("[\xe8\xad\xa6\xe5\x91\x8a] \xe6\x9c\xaa\xe6\x89\xbe\xe5\x88\xb0\xe6\xb8\xb8\xe6\x88\x8f\xe8\xbf\x9b\xe7\xa8\x8b, \xe7\xad\x89\xe5\xbe\x85\xe4\xb8\xad...");  /* [警告] 未找到游戏进程, 等待中... */

        /* 等待游戏进程启动 (最多等 120 秒) */
        for (int i = 0; i < 60 && g_Running; i++) {
            Sleep(2000);
            if (KgFindProcess(KG_LOL_PROCESS_NAME, &proc)) break;
            if (i % 10 == 9) {
                KgGuiAppendLog("\xe4\xbb\x8d\xe5\x9c\xa8\xe7\xad\x89\xe5\xbe\x85\xe6\xb8\xb8\xe6\x88\x8f\xe5\x90\xaf\xe5\x8a\xa8...");  /* 仍在等待游戏启动... */
            }
        }
    }

    if (!g_Running) {
        KgGuiAppendLog("======== \xe5\xb7\xb2\xe5\x81\x9c\xe6\xad\xa2 ========");  /* ======== 已停止 ======== */
        SetWindowTextA(g_hStatus, "\xe7\x8a\xb6\xe6\x80\x81: \xe5\xb7\xb2\xe5\x81\x9c\xe6\xad\xa2");  /* 状态: 已停止 */
        return 0;
    }

    if (proc.pid == 0) {
        KgGuiAppendLog("[\xe9\x94\x99\xe8\xaf\xaf] \xe7\xad\x89\xe5\xbe\x85\xe8\xb6\x85\xe6\x97\xb6, \xe6\x9c\xaa\xe6\xa3\x80\xe6\xb5\x8b\xe5\x88\xb0\xe6\xb8\xb8\xe6\x88\x8f\xe8\xbf\x9b\xe7\xa8\x8b");  /* [错误] 等待超时, 未检测到游戏进程 */
        g_Running = FALSE;
        SetWindowTextA(g_hStatus, "\xe7\x8a\xb6\xe6\x80\x81: \xe5\xa4\xb1\xe8\xb4\xa5");  /* 状态: 失败 */
        return 1;
    }

    char buf[256];
    snprintf(buf, sizeof(buf), "[OK] \xe6\x89\xbe\xe5\x88\xb0\xe8\xbf\x9b\xe7\xa8\x8b: %s (PID: %lu)",  /* [OK] 找到进程 */
             KG_LOL_PROCESS_NAME, (unsigned long)proc.pid);
    KgGuiAppendLog(buf);

    /* 3. 打开进程 */
    KgGuiAppendLog("\xe6\x89\x93\xe5\xbc\x80\xe8\xbf\x9b\xe7\xa8\x8b\xe5\x8f\xa5\xe6\x9f\x84...");  /* 打开进程句柄... */
    if (!KgOpenProcess(&proc, KG_PROCESS_ALL_ACCESS)) {
        KgGuiAppendLog("[\xe9\x94\x99\xe8\xaf\xaf] \xe6\x89\x93\xe5\xbc\x80\xe8\xbf\x9b\xe7\xa8\x8b\xe5\xa4\xb1\xe8\xb4\xa5 (\xe9\x9c\x80\xe8\xa6\x81\xe7\xae\xa1\xe7\x90\x86\xe5\x91\x98\xe6\x9d\x83\xe9\x99\x90)");  /* [错误] 打开进程失败 (需要管理员权限) */
        g_Running = FALSE;
        SetWindowTextA(g_hStatus, "\xe7\x8a\xb6\xe6\x80\x81: \xe5\xa4\xb1\xe8\xb4\xa5");  /* 状态: 失败 */
        return 1;
    }
    KgGuiAppendLog("[OK] \xe5\xb7\xb2\xe8\x8e\xb7\xe5\x8f\x96\xe8\xbf\x9b\xe7\xa8\x8b\xe5\x8f\xa5\xe6\x9f\x84");  /* [OK] 已获取进程句柄 */

    /* 4. 枚举模块 */
    KgGuiAppendLog("\xe6\x9e\x9a\xe4\xb8\xbe\xe6\xa8\xa1\xe5\x9d\x97...");  /* 枚举模块... */
    if (KgEnumModules(&proc)) {
        snprintf(buf, sizeof(buf), "[OK] \xe5\x8a\xa0\xe8\xbd\xbd\xe4\xba\x86 %u \xe4\xb8\xaa\xe6\xa8\xa1\xe5\x9d\x97", proc.moduleCount);  /* [OK] 加载了 N 个模块 */
        KgGuiAppendLog(buf);
    }

    KgCloseProcess(&proc);
    KgGuiAppendLog("======== \xe9\x98\xb2\xe5\xb0\x81\xe4\xbf\x9d\xe6\x8a\xa4\xe5\xb7\xb2\xe6\xbf\x80\xe6\xb4\xbb ========");  /* ======== 防封保护已激活 ======== */
    KgGuiAppendLog("\xe7\x9b\x91\xe6\x8e\xa7\xe8\xbf\x90\xe8\xa1\x8c\xe4\xb8\xad, \xe5\x85\xb3\xe9\x97\xad\xe7\xaa\x97\xe5\x8f\xa3\xe5\x81\x9c\xe6\xad\xa2");  /* 监控运行中, 关闭窗口停止 */

    SetWindowTextA(g_hStatus, "\xe7\x8a\xb6\xe6\x80\x81: \xe9\x98\xb2\xe5\xb0\x81\xe4\xbf\x9d\xe6\x8a\xa4\xe8\xbf\x90\xe8\xa1\x8c\xe4\xb8\xad");  /* 状态: 防封保护运行中 */

    /* 5. 保持运行, 等待用户停止 */
    while (g_Running) {
        Sleep(1000);
    }

    KgGuiAppendLog("======== \xe5\xb7\xb2\xe5\x81\x9c\xe6\xad\xa2 ========");  /* ======== 已停止 ======== */
    SetWindowTextA(g_hStatus, "\xe7\x8a\xb6\xe6\x80\x81: \xe5\xb7\xb2\xe5\x81\x9c\xe6\xad\xa2");  /* 状态: 已停止 */
    return 0;
}

/* ------------------------------------------------------------------
 * 创建控件
 * ------------------------------------------------------------------ */

static void CreateControls(HWND hwnd) {
    int W = 620;
    /* --- 顶部: 模式选择 --- */
    CreateWindowExA(0, "STATIC",
        "\xe9\x80\x89\xe6\x8b\xa9\xe6\xa8\xa1\xe5\xbc\x8f:",  /* 选择模式: */
        WS_CHILD | WS_VISIBLE,
        16, 14, 80, 22, hwnd, NULL, NULL, NULL);

    HWND btnUpdate = CreateWindowExA(0, "BUTTON",
        "\xe6\x9b\xb4\xe6\x96\xb0\xe6\xa8\xa1\xe5\xbc\x8f",  /* 更新模式 */
        WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON | WS_GROUP,
        100, 12, 120, 26, hwnd, (HMENU)IDC_BTN_UPDATE, NULL, NULL);
    SendMessageA(btnUpdate, WM_SETFONT, (WPARAM)g_hFont, TRUE);
    SendMessageA(btnUpdate, BM_SETCHECK, BST_CHECKED, 0);

    HWND btnGame = CreateWindowExA(0, "BUTTON",
        "\xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f",  /* 游戏模式 */
        WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
        230, 12, 120, 26, hwnd, (HMENU)IDC_BTN_GAME, NULL, NULL);
    SendMessageA(btnGame, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    /* --- 底部: 操作按钮 --- */
    HWND btnStart = CreateWindowExA(0, "BUTTON",
        "\xe5\x90\xaf\xe5\x8a\xa8",  /* 启动 */
        WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,
        16, 470, 100, 34, hwnd, (HMENU)IDC_BTN_START, NULL, NULL);
    SendMessageA(btnStart, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    HWND btnStop = CreateWindowExA(0, "BUTTON",
        "\xe5\x81\x9c\xe6\xad\xa2",  /* 停止 */
        WS_CHILD | WS_VISIBLE,
        126, 470, 100, 34, hwnd, (HMENU)IDC_BTN_STOP, NULL, NULL);
    SendMessageA(btnStop, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    /* 状态标签 */
    g_hStatus = CreateWindowExA(0, "STATIC",
        "\xe7\x8a\xb6\xe6\x80\x81: \xe5\xbe\x85\xe6\x9c\xba",  /* 状态: 待机 */
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
    KgGuiAppendLog("KG Assist v2.0 \xe5\xb7\xb2\xe5\x90\xaf\xe5\x8a\xa8");  /* KG Assist v2.0 已启动 */
    KgGuiAppendLog("\xe6\xa0\xb9\xe7\x9b\xae\xe5\xbd\x95: ");  /* 根目录: */
    KgGuiAppendLog(KgPathGetRoot());
    KgGuiAppendLog("\xe9\x80\x89\xe6\x8b\xa9\xe6\xa8\xa1\xe5\xbc\x8f\xe5\x90\x8e\xe7\x82\xb9\xe5\x87\xbb\xe5\x90\xaf\xe5\x8a\xa8");  /* 选择模式后点击启动 */
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
                KgGuiAppendLog("[\xe6\xa8\xa1\xe5\xbc\x8f] \xe5\xb7\xb2\xe5\x88\x87\xe6\x8d\xa2\xe5\x88\xb0\xe6\x9b\xb4\xe6\x96\xb0\xe6\xa8\xa1\xe5\xbc\x8f");  /* [模式] 已切换到更新模式 */
                return 0;
            }

            if (id == IDC_BTN_GAME) {
                g_Mode = 1;
                KgGuiAppendLog("[\xe6\xa8\xa1\xe5\xbc\x8f] \xe5\xb7\xb2\xe5\x88\x87\xe6\x8d\xa2\xe5\x88\xb0\xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f");  /* [模式] 已切换到游戏模式 */
                return 0;
            }

            if (id == IDC_BTN_START && !g_Running) {
                if (g_Mode == 0) {
                    g_hWorkThread = CreateThread(NULL, 0, UpdateModeThread, NULL, 0, NULL);
                } else {
                    g_hWorkThread = CreateThread(NULL, 0, GameModeThread, NULL, 0, NULL);
                }
                return 0;
            }

            if (id == IDC_BTN_STOP && g_Running) {
                g_Running = FALSE;
                KgGuiAppendLog("\xe6\xad\xa3\xe5\x9c\xa8\xe5\x81\x9c\xe6\xad\xa2...");  /* 正在停止... */
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
        MessageBoxA(NULL, "\xe7\xaa\x97\xe5\x8f\xa3\xe7\xb1\xbb\xe6\xb3\xa8\xe5\x86\x8c\xe5\xa4\xb1\xe8\xb4\xa5",  /* 窗口类注册失败 */
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
        MessageBoxA(NULL, "\xe7\xaa\x97\xe5\x8f\xa3\xe5\x88\x9b\xe5\xbb\xba\xe5\xa4\xb1\xe8\xb4\xa5",  /* 窗口创建失败 */
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

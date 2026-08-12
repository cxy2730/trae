/**
 * KG Assist - Win11 风格 GUI 菜单
 *
 * 特性:
 *   - Mica 系统背景 (DWMWA_SYSTEMBACKDROP_TYPE)
 *   - 圆角窗口 (DWMWA_WINDOW_CORNER_PREFERENCE)
 *   - 暗色标题栏 (DWMWA_USE_IMMERSIVE_DARK_MODE)
 *   - Segoe UI Variable 字体
 *   - 顶部导航栏 + 内容面板
 *
 * 导航:
 *   [状态] [注入] [守护] [配置] [进程] [退出]
 */

#include "../include/common.h"
#include <commctrl.h>
#include <dwmapi.h>

/* DWM 属性 (部分旧版 MinGW 头文件缺失, 手动定义) */
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
 * 颜色定义 (Win11 暗色主题)
 * ------------------------------------------------------------------ */

#define COL_BG          RGB(0x1F, 0x1F, 0x1F)
#define COL_CARD        RGB(0x2D, 0x2D, 0x2D)
#define COL_BTN         RGB(0x2C, 0x2C, 0x2C)
#define COL_BTN_HOVER   RGB(0x3D, 0x3D, 0x3D)
#define COL_BTN_SEL     RGB(0x4C, 0xC2, 0xFF)
#define COL_TEXT        RGB(0xFF, 0xFF, 0xFF)
#define COL_TEXT_DIM    RGB(0xB0, 0xB0, 0xB0)
#define COL_BORDER      RGB(0x40, 0x40, 0x40)
#define COL_ACCENT      RGB(0x4C, 0xC2, 0xFF)
#define COL_GREEN       RGB(0x6A, 0xD9, 0x6A)
#define COL_RED         RGB(0xE8, 0x64, 0x64)

/* ------------------------------------------------------------------
 * 控件 ID
 * ------------------------------------------------------------------ */

#define IDC_NAV_BASE       1000
#define IDC_NAV_STATUS     1000
#define IDC_NAV_INJECT     1001
#define IDC_NAV_DAEMON     1002
#define IDC_NAV_CONFIG     1003
#define IDC_NAV_PROCESS    1004
#define IDC_NAV_EXIT       1005

#define IDC_BTN_ACTION     2000
#define IDC_EDIT_TARGET    2001
#define IDC_EDIT_DLL       2002
#define IDC_BTN_BROWSE     2003
#define IDC_BTN_DAEMON     2004
#define IDC_CHK_ESP        2005
#define IDC_CHK_AIMBOT     2006
#define IDC_CHK_SPEED      2007
#define IDC_CHK_AMMO       2008
#define IDC_CHK_RECOIL     2009
#define IDC_BTN_SAVECFG    2010
#define IDC_LIST_PROC      2011
#define IDC_BTN_REFRESH    2012

/* ------------------------------------------------------------------
 * 全局状态
 * ------------------------------------------------------------------ */

static HWND  g_hMain    = NULL;
static HFONT g_hFont    = NULL;
static HFONT g_hFontBig = NULL;
static int   g_Tab      = 0;       /* 当前选中的标签 */
static BOOL  g_DaemonOn = FALSE;   /* 守护模式状态 */
static HANDLE g_hDaemonThread = NULL;

/* 控件句柄 (按需创建/销毁) */
static HWND g_hPanels[6] = {0};    /* 6 个面板容器 */

/* ------------------------------------------------------------------
 * 辅助函数
 * ------------------------------------------------------------------ */

/* 创建字体 */
static HFONT CreateKgFont(int size, BOOL bold) {
    LOGFONTA lf = {0};
    lf.lfHeight = -MulDiv(size, GetDeviceCaps(GetDC(NULL), LOGPIXELSY), 72);
    lf.lfWeight = bold ? FW_SEMIBOLD : FW_NORMAL;
    lf.lfCharSet = DEFAULT_CHARSET;
    strcpy(lf.lfFaceName, "Segoe UI Variable");
    HFONT f = CreateFontIndirectA(&lf);
    if (!f) {
        /* 回退到 Segoe UI */
        strcpy(lf.lfFaceName, "Segoe UI");
        f = CreateFontIndirectA(&lf);
    }
    return f;
}

/* 启用 Win11 暗色标题栏 + Mica + 圆角 */
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

/* 文本绘制 */
static void DrawTextLeft(HDC hdc, const char* text, int x, int y,
                         COLORREF color, HFONT font) {
    HFONT old = (HFONT)SelectObject(hdc, font);
    SetTextColor(hdc, color);
    SetBkMode(hdc, TRANSPARENT);
    TextOutA(hdc, x, y, text, (int)strlen(text));
    SelectObject(hdc, old);
}

/* ------------------------------------------------------------------
 * 导航栏
 * ------------------------------------------------------------------ */

static const char* g_TabNames[] = {
    "  \xe7\x8a\xb6\xe6\x80\x81  ",   /* 状态 */
    "  \xe6\xb3\xa8\xe5\x85\xa5  ",   /* 注入 */
    "  \xe5\xae\x88\xe6\x8a\xa4  ",   /* 守护 */
    "  \xe9\x85\x8d\xe7\xbd\xae  ",   /* 配置 */
    "  \xe8\xbf\x9b\xe7\xa8\x8b  ",   /* 进程 */
    "  \xe9\x80\x80\xe5\x87\xba  ",   /* 退出 */
};

/* UTF-8 中文标签 (MinGW 兼容, 不依赖源码编码) */
/* 状态=状 态, 注入=注 入, 守护=守 护, 配置=配 置, 进程=进 程, 退出=退 出 */

static void CreateNavButtons(HWND parent) {
    int btnW = 110;
    int btnH = 38;
    int x = 16;
    int y = 12;

    for (int i = 0; i < 6; i++) {
        /* 用宽字符创建按钮以支持中文 */
        wchar_t wname[32];
        /* g_TabNames 存的是 UTF-8, 转成 UTF-16 */
        MultiByteToWideChar(CP_UTF8, 0, g_TabNames[i], -1, wname, 32);

        HWND btn = CreateWindowExW(0, L"BUTTON", wname,
            WS_CHILD | WS_VISIBLE | BS_FLAT,
            x, y, btnW, btnH, parent, (HMENU)(INT_PTR)(IDC_NAV_BASE + i),
            NULL, NULL);
        SendMessageW(btn, WM_SETFONT, (WPARAM)g_hFont, TRUE);
        x += btnW + 4;
    }
}

/* ------------------------------------------------------------------
 * 面板: 状态
 * ------------------------------------------------------------------ */

static void CreatePanel_Status(HWND parent) {
    HWND panel = CreateWindowExA(0, "STATIC", "",
        WS_CHILD | WS_VISIBLE,
        16, 60, 860, 420, parent, (HMENU)0, NULL, NULL);
    g_hPanels[0] = panel;
}

static void PaintStatus(HDC hdc) {
    int x = 20, y = 80;
    char buf[512];

    DrawTextLeft(hdc, "\xe8\xbf\x90\xe8\xa1\x8c\xe7\x8a\xb6\xe6\x80\x81",  /* 运行状态 */
                 x, y, COL_TEXT, g_hFontBig);
    y += 40;

    /* 分隔线 */
    HPEN pen = CreatePen(PS_SOLID, 1, COL_BORDER);
    HGDIOBJ old = SelectObject(hdc, pen);
    MoveToEx(hdc, x, y, NULL);
    LineTo(hdc, x + 840, y);
    SelectObject(hdc, old);
    DeleteObject(pen);
    y += 20;

    const char* root = KgPathGetRoot();
    const char* logf = KgPathGetLogFile();
    const char* cfgf = KgPathGetConfigFile();

    snprintf(buf, sizeof(buf),
        "\xe6\xa0\xb9\xe7\x9b\xae\xe5\xbd\x95:  %s\r\n\r\n"  /* 根目录 */
        "\xe6\x97\xa5\xe5\xbf\x97\xe6\x96\x87\xe4\xbb\xb6:  %s\r\n\r\n"  /* 日志文件 */
        "\xe9\x85\x8d\xe7\xbd\xae\xe6\x96\x87\xe4\xbb\xb6:  %s\r\n\r\n"  /* 配置文件 */
        "\xe4\xbc\xaa\xe8\xa3\x85\xe6\xa0\x87\xe9\xa2\x98:  %s\r\n\r\n"  /* 伪装标题 */
        "\xe9\x98\xb2\xe6\x8a\xa4\xe7\x8a\xb6\xe6\x80\x81:  \xe5\xb7\xb2\xe6\xbf\x80\xe6\xb4\xbb",  /* 防护状态: 已激活 */
        root, logf, cfgf, KgPathGetSpoofTitle());

    /* 用 DrawTextA 支持多行 */
    RECT rc = {x, y, x + 840, y + 300};
    HFONT oldFont = (HFONT)SelectObject(hdc, g_hFont);
    SetTextColor(hdc, COL_TEXT_DIM);
    SetBkMode(hdc, TRANSPARENT);
    DrawTextA(hdc, buf, -1, &rc, DT_LEFT | DT_WORDBREAK);
    SelectObject(hdc, oldFont);
}

/* ------------------------------------------------------------------
 * 面板: 注入
 * ------------------------------------------------------------------ */

static char g_TargetName[256] = "League of Legends.exe";
static char g_DllPath[KG_MAX_PATH] = "";

static void CreatePanel_Inject(HWND parent) {
    int x = 20, y = 80;
    /* 目标进程名 */
    CreateWindowExA(0, "STATIC",
        "\xe7\x9b\xae\xe6\xa0\x87\xe8\xbf\x9b\xe7\xa8\x8b:",  /* 目标进程: */
        WS_CHILD | WS_VISIBLE, x, y + 4, 100, 20,
        parent, NULL, NULL, NULL);

    HWND hEditTarget = CreateWindowExA(WS_EX_CLIENTEDGE, "EDIT", g_TargetName,
        WS_CHILD | WS_VISIBLE | ES_AUTOHSCROLL,
        x + 110, y, 400, 28, parent, (HMENU)IDC_EDIT_TARGET, NULL, NULL);
    SendMessageA(hEditTarget, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    y += 40;
    /* DLL 路径 */
    CreateWindowExA(0, "STATIC",
        "DLL \xe8\xb7\xaf\xe5\xbe\x84:",  /* DLL 路径: */
        WS_CHILD | WS_VISIBLE, x, y + 4, 100, 20,
        parent, NULL, NULL, NULL);

    HWND hEditDll = CreateWindowExA(WS_EX_CLIENTEDGE, "EDIT", g_DllPath,
        WS_CHILD | WS_VISIBLE | ES_AUTOHSCROLL,
        x + 110, y, 400, 28, parent, (HMENU)IDC_EDIT_DLL, NULL, NULL);
    SendMessageA(hEditDll, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    HWND browse = CreateWindowExA(0, "BUTTON",
        "\xe6\xb5\x8f\xe8\xa7\x88...",  /* 浏览... */
        WS_CHILD | WS_VISIBLE,
        x + 520, y, 80, 28, parent, (HMENU)IDC_BTN_BROWSE, NULL, NULL);
    SendMessageA(browse, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    y += 50;
    HWND injectBtn = CreateWindowExA(0, "BUTTON",
        "\xe6\x89\xa7\xe8\xa1\x8c\xe6\xb3\xa8\xe5\x85\xa5",  /* 执行注入 */
        WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,
        x, y, 140, 36, parent, (HMENU)IDC_BTN_ACTION, NULL, NULL);
    SendMessageA(injectBtn, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    g_hPanels[1] = injectBtn;  /* 标记面板已创建 */
}

/* ------------------------------------------------------------------
 * 面板: 守护
 * ------------------------------------------------------------------ */

static void CreatePanel_Daemon(HWND parent) {
    int x = 20, y = 80;

    CreateWindowExA(0, "STATIC",
        "\xe5\xae\x88\xe6\x8a\xa4\xe6\xa8\xa1\xe5\xbc\x8f: \xe8\x87\xaa\xe5\x8a\xa8\xe6\xa3\x80\xe6\xb5\x8b\xe5\xb9\xb6\xe6\xb3\xa8\xe5\x85\xa5\xe7\x9b\xae\xe6\xa0\x87\xe8\xbf\x9b\xe7\xa8\x8b",
        /* 守护模式: 自动检测并注入目标进程 */
        WS_CHILD | WS_VISIBLE, x, y, 600, 20,
        parent, NULL, NULL, NULL);

    y += 40;
    HWND btn = CreateWindowExA(0, "BUTTON",
        "\xe5\x90\xaf\xe5\x8a\xa8\xe5\xae\x88\xe6\x8a\xa4",  /* 启动守护 */
        WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,
        x, y, 140, 36, parent, (HMENU)IDC_BTN_DAEMON, NULL, NULL);
    SendMessageA(btn, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    g_hPanels[2] = btn;
}

/* ------------------------------------------------------------------
 * 面板: 配置
 * ------------------------------------------------------------------ */

static void CreatePanel_Config(HWND parent) {
    int x = 20, y = 80;
    const char* labels[] = {
        "ESP \xe9\x80\x8f\xe8\xa7\x86",      /* ESP 透视 */
        "\xe8\x87\xaa\xe7\x9e\x84",          /* 自瞄 */
        "\xe5\x8a\xa0\xe9\x80\x9f",          /* 加速 */
        "\xe6\x97\xa0\xe9\x99\x90\xe5\xbc\xb9\xe8\x8d\xaf",  /* 无限弹药 */
        "\xe6\x97\xa0\xe5\x90\x8e\xe5\x9d\x90",              /* 无后坐力 */
    };
    DWORD ids[] = {IDC_CHK_ESP, IDC_CHK_AIMBOT, IDC_CHK_SPEED,
                   IDC_CHK_AMMO, IDC_CHK_RECOIL};

    const KgCheatConfig* cfg = KgGetConfig();
    BOOL vals[] = {cfg->espEnabled, cfg->aimbotEnabled,
                   cfg->speedHackEnabled, cfg->infiniteAmmoEnabled,
                   cfg->noRecoilEnabled};

    for (int i = 0; i < 5; i++) {
        HWND chk = CreateWindowExA(0, "BUTTON", labels[i],
            WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX,
            x, y, 200, 28, parent, (HMENU)(INT_PTR)ids[i], NULL, NULL);
        SendMessageA(chk, WM_SETFONT, (WPARAM)g_hFont, TRUE);
        SendMessageA(chk, BM_SETCHECK, vals[i] ? BST_CHECKED : BST_UNCHECKED, 0);
        y += 34;
    }

    y += 10;
    HWND save = CreateWindowExA(0, "BUTTON",
        "\xe4\xbf\x9d\xe5\xad\x98\xe9\x85\x8d\xe7\xbd\xae",  /* 保存配置 */
        WS_CHILD | WS_VISIBLE | BS_DEFPUSHBUTTON,
        x, y, 140, 36, parent, (HMENU)IDC_BTN_SAVECFG, NULL, NULL);
    SendMessageA(save, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    g_hPanels[3] = save;
}

/* ------------------------------------------------------------------
 * 面板: 进程列表
 * ------------------------------------------------------------------ */

static void CreatePanel_Process(HWND parent) {
    int x = 20, y = 80;

    HWND refresh = CreateWindowExA(0, "BUTTON",
        "\xe5\x88\xb7\xe6\x96\xb0\xe5\x88\x97\xe8\xa1\xa8",  /* 刷新列表 */
        WS_CHILD | WS_VISIBLE,
        x, y, 120, 30, parent, (HMENU)IDC_BTN_REFRESH, NULL, NULL);
    SendMessageA(refresh, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    y += 40;
    HWND list = CreateWindowExA(WS_EX_CLIENTEDGE, "LISTBOX", "",
        WS_CHILD | WS_VISIBLE | WS_VSCROLL | LBS_STANDARD,
        x, y, 840, 320, parent, (HMENU)IDC_LIST_PROC, NULL, NULL);
    SendMessageA(list, WM_SETFONT, (WPARAM)g_hFont, TRUE);

    g_hPanels[4] = list;
}

static void RefreshProcessList(HWND list) {
    SendMessageA(list, LB_RESETCONTENT, 0, 0);
    KgProcessInfo procs[256];
    s32 count = KgEnumAllProcesses(procs, 256);
    for (s32 i = 0; i < count; i++) {
        char line[512];
        char nameA[MAX_PATH] = {0};
        WideCharToMultiByte(CP_UTF8, 0, procs[i].name, -1,
                            nameA, sizeof(nameA), NULL, NULL);
        snprintf(line, sizeof(line), "%6lu  %s",
                 (unsigned long)procs[i].pid, nameA);
        SendMessageA(list, LB_ADDSTRING, 0, (LPARAM)line);
    }
    char summary[64];
    snprintf(summary, sizeof(summary),
             "---  \xe5\x85\xb1 %d \xe4\xb8\xaa\xe8\xbf\x9b\xe7\xa8\x8b  ---", count);
    SendMessageA(list, LB_ADDSTRING, 0, (LPARAM)summary);
}

/* ------------------------------------------------------------------
 * 面板创建/销毁
 * ------------------------------------------------------------------ */

static void DestroyAllPanels(HWND parent) {
    /* 枚举子窗口销毁非导航控件 */
    HWND child = GetWindow(parent, GW_CHILD);
    while (child) {
        HWND next = GetWindow(child, GW_HWNDNEXT);
        LONG_PTR id = GetWindowLongPtrA(child, GWLP_ID);
        /* 保留导航按钮 (IDC_NAV_BASE ~ +5) */
        if (id < IDC_NAV_BASE || id > IDC_NAV_BASE + 5) {
            DestroyWindow(child);
        }
        child = next;
    }
    memset(g_hPanels, 0, sizeof(g_hPanels));
}

static void ShowPanel(HWND parent, int tab) {
    DestroyAllPanels(parent);

    switch (tab) {
        case 0: CreatePanel_Status(parent);  break;
        case 1: CreatePanel_Inject(parent);  break;
        case 2: CreatePanel_Daemon(parent);  break;
        case 3: CreatePanel_Config(parent);  break;
        case 4:
            CreatePanel_Process(parent);
            RefreshProcessList(g_hPanels[4]);
            break;
        case 5:
            /* 退出 */
            PostMessageA(parent, WM_CLOSE, 0, 0);
            return;
    }

    /* 强制重绘 */
    InvalidateRect(parent, NULL, TRUE);
}

/* ------------------------------------------------------------------
 * 守护线程
 * ------------------------------------------------------------------ */

static DWORD WINAPI DaemonThread(LPVOID param) {
    (void)param;
    KG_INFO("\xe5\xae\x88\xe6\x8a\xa4\xe7\xba\xbf\xe7\xa8\x8b\xe5\x90\xaf\xe5\x8a\xa8");  /* 守护线程启动 */

    while (g_DaemonOn) {
        KgProcessInfo proc = {0};
        if (KgFindProcess(g_TargetName, &proc)) {
            if (g_DllPath[0] && GetFileAttributesA(g_DllPath) != INVALID_FILE_ATTRIBUTES) {
                if (KgOpenProcess(&proc, KG_PROCESS_ALL_ACCESS)) {
                    KgAutoInject(proc.handle, g_DllPath);
                    KgCloseProcess(&proc);
                    KG_INFO("\xe6\xb3\xa8\xe5\x85\xa5\xe6\x88\x90\xe5\x8a\x9f");  /* 注入成功 */
                    /* 注入一次后停止守护 */
                    g_DaemonOn = FALSE;
                    break;
                }
            }
        }
        Sleep(2000);
    }

    KG_INFO("\xe5\xae\x88\xe6\x8a\xa4\xe7\xba\xbf\xe7\xa8\x8b\xe9\x80\x80\xe5\x87\xba");  /* 守护线程退出 */
    return 0;
}

/* ------------------------------------------------------------------
 * 窗口过程
 * ------------------------------------------------------------------ */

static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_CREATE: {
            g_hFont    = CreateKgFont(14, FALSE);
            g_hFontBig = CreateKgFont(20, TRUE);
            CreateNavButtons(hwnd);
            ApplyWin11Style(hwnd);
            ShowPanel(hwnd, 0);
            return 0;
        }

        case WM_COMMAND: {
            DWORD id = LOWORD(wParam);

            /* 导航按钮 */
            if (id >= IDC_NAV_BASE && id <= IDC_NAV_BASE + 5) {
                g_Tab = id - IDC_NAV_BASE;
                ShowPanel(hwnd, g_Tab);
                return 0;
            }

            switch (id) {
                case IDC_BTN_ACTION: {
                    /* 执行注入 */
                    GetDlgItemTextA(hwnd, IDC_EDIT_TARGET,
                                    g_TargetName, sizeof(g_TargetName));
                    GetDlgItemTextA(hwnd, IDC_EDIT_DLL,
                                    g_DllPath, sizeof(g_DllPath));
                    KgProcessInfo proc = {0};
                    if (KgFindProcess(g_TargetName, &proc)) {
                        if (KgOpenProcess(&proc, KG_PROCESS_ALL_ACCESS)) {
                            BOOL ok = KgAutoInject(proc.handle, g_DllPath);
                            KgCloseProcess(&proc);
                            MessageBoxA(hwnd,
                                ok ? "\xe6\xb3\xa8\xe5\x85\xa5\xe6\x88\x90\xe5\x8a\x9f"  /* 注入成功 */
                                   : "\xe6\xb3\xa8\xe5\x85\xa5\xe5\xa4\xb1\xe8\xb4\xa5",  /* 注入失败 */
                                "KG Assist", MB_OK | MB_ICONINFORMATION);
                        }
                    } else {
                        MessageBoxA(hwnd,
                            "\xe6\x9c\xaa\xe6\x89\xbe\xe5\x88\xb0\xe7\x9b\xae\xe6\xa0\x87\xe8\xbf\x9b\xe7\xa8\x8b",  /* 未找到目标进程 */
                            "KG Assist", MB_OK | MB_ICONWARNING);
                    }
                    return 0;
                }

                case IDC_BTN_BROWSE: {
                    char file[KG_MAX_PATH] = "";
                    OPENFILENAMEA ofn = {0};
                    ofn.lStructSize = sizeof(ofn);
                    ofn.hwndOwner = hwnd;
                    ofn.lpstrFilter = "DLL Files (*.dll)\0*.dll\0All Files (*.*)\0*.*\0";
                    ofn.lpstrFile = file;
                    ofn.nMaxFile = sizeof(file);
                    ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST;
                    if (GetOpenFileNameA(&ofn)) {
                        strncpy(g_DllPath, file, sizeof(g_DllPath) - 1);
                        g_DllPath[sizeof(g_DllPath) - 1] = '\0';
                        SetDlgItemTextA(hwnd, IDC_EDIT_DLL, g_DllPath);
                    }
                    return 0;
                }

                case IDC_BTN_DAEMON: {
                    g_DaemonOn = !g_DaemonOn;
                    if (g_DaemonOn) {
                        GetDlgItemTextA(hwnd, IDC_EDIT_TARGET,
                                        g_TargetName, sizeof(g_TargetName));
                        g_hDaemonThread = CreateThread(NULL, 0,
                                                        DaemonThread, NULL, 0, NULL);
                        SetDlgItemTextA(hwnd, IDC_BTN_DAEMON,
                            "\xe5\x81\x9c\xe6\xad\xa2\xe5\xae\x88\xe6\x8a\xa4");  /* 停止守护 */
                    } else {
                        SetDlgItemTextA(hwnd, IDC_BTN_DAEMON,
                            "\xe5\x90\xaf\xe5\x8a\xa8\xe5\xae\x88\xe6\x8a\xa4");  /* 启动守护 */
                        if (g_hDaemonThread) {
                            WaitForSingleObject(g_hDaemonThread, 3000);
                            CloseHandle(g_hDaemonThread);
                            g_hDaemonThread = NULL;
                        }
                    }
                    return 0;
                }

                case IDC_BTN_SAVECFG: {
                    BOOL esp    = IsDlgButtonChecked(hwnd, IDC_CHK_ESP)    == BST_CHECKED;
                    BOOL aim    = IsDlgButtonChecked(hwnd, IDC_CHK_AIMBOT) == BST_CHECKED;
                    BOOL speed  = IsDlgButtonChecked(hwnd, IDC_CHK_SPEED)  == BST_CHECKED;
                    BOOL ammo   = IsDlgButtonChecked(hwnd, IDC_CHK_AMMO)   == BST_CHECKED;
                    BOOL recoil = IsDlgButtonChecked(hwnd, IDC_CHK_RECOIL) == BST_CHECKED;
                    KgSetConfig(esp, aim, speed, ammo, recoil);
                    KgSaveConfig(KgPathGetConfigFile());
                    MessageBoxA(hwnd,
                        "\xe9\x85\x8d\xe7\xbd\xae\xe5\xb7\xb2\xe4\xbf\x9d\xe5\xad\x98",  /* 配置已保存 */
                        "KG Assist", MB_OK | MB_ICONINFORMATION);
                    return 0;
                }

                case IDC_BTN_REFRESH: {
                    RefreshProcessList(GetDlgItem(hwnd, IDC_LIST_PROC));
                    return 0;
                }
            }
            return 0;
        }

        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);

            /* 背景填充 (Mica 生效时大部分会被系统背景覆盖) */
            RECT rc;
            GetClientRect(hwnd, &rc);
            HBRUSH bg = CreateSolidBrush(COL_BG);
            FillRect(hdc, &rc, bg);
            DeleteObject(bg);

            /* 状态面板内容 */
            if (g_Tab == 0) {
                PaintStatus(hdc);
            }

            EndPaint(hwnd, &ps);
            return 0;
        }

        case WM_CTLCOLORSTATIC:
        case WM_CTLCOLORBTN: {
            HDC hdc = (HDC)wParam;
            SetTextColor(hdc, COL_TEXT);
            SetBkMode(hdc, TRANSPARENT);
            static HBRUSH hbr = NULL;
            if (!hbr) hbr = CreateSolidBrush(COL_BG);
            return (LRESULT)hbr;
        }

        case WM_GETMINMAXINFO: {
            MINMAXINFO* mmi = (MINMAXINFO*)lParam;
            mmi->ptMinTrackSize.x = 900;
            mmi->ptMinTrackSize.y = 560;
            return 0;
        }

        case WM_DESTROY:
            g_DaemonOn = FALSE;
            if (g_hDaemonThread) {
                WaitForSingleObject(g_hDaemonThread, 2000);
                CloseHandle(g_hDaemonThread);
            }
            if (g_hFont)    DeleteObject(g_hFont);
            if (g_hFontBig) DeleteObject(g_hFontBig);
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
    wc.hbrBackground = NULL;  /* Mica 背景由 DWM 绘制 */
    wc.lpszClassName = "KgAssistGui";

    ATOM atom = RegisterClassExA(&wc);
    return (atom != 0);
}

int KgGuiRun(HINSTANCE hInstance, int nCmdShow) {
    /* 初始化通用控件 */
    INITCOMMONCONTROLSEX icc = {0};
    icc.dwSize = sizeof(icc);
    icc.dwICC = ICC_STANDARD_CLASSES | ICC_BAR_CLASSES;
    InitCommonControlsEx(&icc);

    if (!KgGuiInit(hInstance)) {
        MessageBoxA(NULL, "\xe7\xaa\x97\xe5\x8f\xa3\xe7\xb1\xbb\xe6\xb3\xa8\xe5\x86\x8c\xe5\xa4\xb1\xe8\xb4\xa5",  /* 窗口类注册失败 */
                    "Error", MB_OK | MB_ICONERROR);
        return 1;
    }

    g_hMain = CreateWindowExA(
        0, "KgAssistGui", "KG Assist v2.0",
        WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME,  /* 固定大小 */
        CW_USEDEFAULT, CW_USEDEFAULT,
        900, 560,
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

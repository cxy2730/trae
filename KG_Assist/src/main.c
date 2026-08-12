/**
 * KG Assist - GUI 入口
 *
 * WinMain 模式, 无控制台窗口, 启动后:
 *   1. 初始化路径 / 日志 / API / 防封
 *   2. 创建一个隐藏主窗口作为消息循环宿主
 *   3. 在系统托盘添加图标, 右键菜单提供:
 *        - 状态
 *        - 打开日志
 *        - 退出
 *
 * 双击托盘图标显示一个小信息窗口 (状态).
 */

#include "../include/common.h"
#include "../include/paths.h"
#include <shellapi.h>

#define WM_TRAYICON   (WM_USER + 1)
#define ID_TRAYICON   1001
#define IDM_STATUS    2001
#define IDM_OPENLOG   2002
#define IDM_ABOUT     2003
#define IDM_QUIT      2004

static HWND  g_hWnd     = NULL;
static HMENU g_hMenu    = NULL;
static BOOL  g_Running  = TRUE;
static HICON g_hIcon    = NULL;
static NOTIFYICONDATAA g_Nid = {0};

/* ============================================================
 * 托盘
 * ============================================================ */

static VOID TrayInit(HWND hwnd) {
    g_hIcon = LoadIconA(NULL, IDI_APPLICATION);

    ZeroMemory(&g_Nid, sizeof(g_Nid));
    g_Nid.cbSize           = sizeof(g_Nid);
    g_Nid.hWnd             = hwnd;
    g_Nid.uID              = ID_TRAYICON;
    g_Nid.uFlags           = NIF_ICON | NIF_MESSAGE | NIF_TIP;
    g_Nid.uCallbackMessage = WM_TRAYICON;
    g_Nid.hIcon            = g_hIcon;
    strncpy(g_Nid.szTip, "KG Assist", sizeof(g_Nid.szTip) - 1);
    strncpy(g_Nid.szInfo, "KG Assist 已启动", sizeof(g_Nid.szInfo) - 1);
    g_Nid.dwInfoFlags = NIIF_INFO;
    Shell_NotifyIconA(NIM_ADD, &g_Nid);
}

static VOID TrayRemove(VOID) {
    Shell_NotifyIconA(NIM_DELETE, &g_Nid);
    if (g_hIcon) DestroyIcon(g_hIcon);
}

static VOID TrayShowBalloon(const char* title, const char* msg) {
    g_Nid.uFlags = NIF_INFO;
    strncpy(g_Nid.szInfoTitle, title, sizeof(g_Nid.szInfoTitle) - 1);
    strncpy(g_Nid.szInfo, msg, sizeof(g_Nid.szInfo) - 1);
    g_Nid.dwInfoFlags = NIIF_INFO;
    Shell_NotifyIconA(NIM_MODIFY, &g_Nid);
}

static VOID ShowContextMenu(HWND hwnd) {
    POINT pt;
    GetCursorPos(&pt);
    if (!g_hMenu) {
        g_hMenu = CreatePopupMenu();
        AppendMenuA(g_hMenu, MF_STRING, IDM_STATUS,  "状态");
        AppendMenuA(g_hMenu, MF_STRING, IDM_OPENLOG, "打开日志");
        AppendMenuA(g_hMenu, MF_SEPARATOR, 0, NULL);
        AppendMenuA(g_hMenu, MF_STRING, IDM_ABOUT,   "关于");
        AppendMenuA(g_hMenu, MF_STRING, IDM_QUIT,    "退出");
    }
    SetForegroundWindow(hwnd);
    TrackPopupMenu(g_hMenu, TPM_RIGHTBUTTON, pt.x, pt.y, 0, hwnd, NULL);
}

/* ============================================================
 * 状态 / 打开日志
 * ============================================================ */

static VOID ShowStatus(VOID) {
    const KgCheatConfig* cfg = KgGetConfig();
    char buf[512];
    snprintf(buf, sizeof(buf),
        "KG Assist 已运行\r\n\r\n"
        "日志文件:\r\n%s\r\n\r\n"
        "ESP:       %s\r\n"
        "自瞄:      %s (%.0f%%)\r\n"
        "加速:      %s\r\n",
        KgPathGetLogFile() ? KgPathGetLogFile() : "(无)",
        cfg->espEnabled      ? "开" : "关",
        cfg->aimbotEnabled   ? "开" : "关",
        cfg->aimbotSpeed * 100,
        cfg->speedHackEnabled? "开" : "关");
    MessageBoxA(g_hWnd, buf, "KG Assist - 状态", MB_ICONINFORMATION | MB_OK);
}

static VOID OpenLogFile(VOID) {
    const char* path = KgPathGetLogFile();
    if (!path) {
        MessageBoxA(g_hWnd, "日志路径无效", "KG Assist", MB_ICONWARNING);
        return;
    }
    HINSTANCE rc = ShellExecuteA(g_hWnd, "open", path, NULL, NULL, SW_SHOWNORMAL);
    if ((INT_PTR)rc <= 32) {
        /* 兜底: 用 notepad 打开 */
        ShellExecuteA(g_hWnd, "open", "notepad.exe", path, NULL, SW_SHOWNORMAL);
    }
}

/* ============================================================
 * 窗口过程
 * ============================================================ */

static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
        case WM_CREATE:
            TrayInit(hwnd);
            return 0;

        case WM_TRAYICON:
            if (lp == WM_RBUTTONUP) ShowContextMenu(hwnd);
            else if (lp == WM_LBUTTONDBLCLK) ShowStatus();
            return 0;

        case WM_COMMAND:
            switch (LOWORD(wp)) {
                case IDM_STATUS:  ShowStatus();     return 0;
                case IDM_OPENLOG: OpenLogFile();    return 0;
                case IDM_ABOUT:
                    MessageBoxA(hwnd,
                        "KG Assist v2.0\r\n"
                        "Game Anti-Detection Tool",
                        "关于", MB_ICONINFORMATION | MB_OK);
                    return 0;
                case IDM_QUIT:
                    g_Running = FALSE;
                    PostQuitMessage(0);
                    return 0;
            }
            break;

        case WM_CLOSE:
            g_Running = FALSE;
            PostQuitMessage(0);
            return 0;

        case WM_DESTROY:
            TrayRemove();
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProcA(hwnd, msg, wp, lp);
}

/* ============================================================
 * 后台工作线程
 * ============================================================ */

static DWORD WINAPI WorkerThread(LPVOID param) {
    (void)param;
    KG_INFO("工作线程启动, 等待目标进程...");

    /* 简单示例: 每 5 秒扫一次, 找到 LoL 就尝试注入 cheat.dll (若同目录存在) */
    char dllPath[KG_MAX_PATH];
    {
        const char* logPath = KgPathGetLogFile();
        if (logPath) {
            strncpy(dllPath, logPath, sizeof(dllPath) - 1);
            char* p = strrchr(dllPath, '\\');
            if (p) *p = '\0';
            strncat(dllPath, "\\cheat.dll", sizeof(dllPath) - strlen(dllPath) - 1);
        } else {
            dllPath[0] = '\0';
        }
    }

    while (g_Running) {
        KgProcessInfo info;
        if (KgFindProcess(KG_LOL_PROCESS_NAME, &info)) {
            KG_INFO("发现目标进程 PID=%lu", info.pid);
            if (dllPath[0] && GetFileAttributesA(dllPath) != INVALID_FILE_ATTRIBUTES) {
                if (KgOpenProcess(&info, 0x1F0FFF)) {
                    if (KgAutoInject(info.handle, dllPath)) {
                        KG_INFO("注入成功");
                        TrayShowBalloon("KG Assist", "已注入到 LoL");
                    } else {
                        KG_WARN("注入失败");
                    }
                    KgCloseProcess(&info);
                }
            } else {
                KG_INFO("目标进程已就绪, 但 cheat.dll 不在同目录 (跳过注入)");
            }
        }
        Sleep(5000);
    }
    KG_INFO("工作线程退出");
    return 0;
}

/* ============================================================
 * WinMain
 * ============================================================ */

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR cmd, int show) {
    (void)hPrev; (void)show;

    /* 1) 路径 (必须在日志之前) */
    KgPathInit();

    /* 2) 日志 */
    KgLogInit();

    KG_INFO("========================================");
    KG_INFO("  KG Assist v2.0 (GUI mode)");
    KG_INFO("  日志: %s", KgPathGetLogFile() ? KgPathGetLogFile() : "(无)");
    KG_INFO("========================================");

    /* 3) 防封 (失败不阻塞) */
    if (!KgInstallFullProtection()) {
        KG_WARN("部分保护措施未能安装 (可能需要管理员权限)");
    }

    /* 4) 注册窗口类 */
    WNDCLASSEXA wc = {0};
    wc.cbSize        = sizeof(wc);
    wc.lpfnWndProc   = WndProc;
    wc.hInstance     = hInst;
    wc.lpszClassName = "KGAssistMain";
    wc.hIcon         = LoadIconA(NULL, IDI_APPLICATION);
    if (!RegisterClassExA(&wc)) {
        KG_ERROR("注册窗口类失败");
        KgLogClose();
        return 1;
    }

    /* 5) 创建隐藏主窗口 (只作为消息循环宿主) */
    g_hWnd = CreateWindowExA(
        0, "KGAssistMain", "KG Assist",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 320, 200,
        NULL, NULL, hInst, NULL);
    if (!g_hWnd) {
        KG_ERROR("创建主窗口失败");
        KgLogClose();
        return 1;
    }

    /* 6) 启动后台工作线程 */
    CreateThread(NULL, 0, WorkerThread, NULL, 0, NULL);

    /* 7) 启动提示 */
    TrayShowBalloon("KG Assist 已启动", "右键托盘图标可打开菜单");

    /* 8) 消息循环 */
    MSG msg;
    while (GetMessageA(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }

    /* 9) 清理 */
    g_Running = FALSE;
    KgCleanup();
    KgLogClose();
    return 0;
}

/* ============================================================
 * 桩 (供其他模块调用)
 * ============================================================ */

BOOL KgInit(VOID) {
    if (!KgLoadApis()) return FALSE;
    return TRUE;
}

VOID KgCleanup(VOID) {
    /* 留空 - 子模块各自负责 */
}

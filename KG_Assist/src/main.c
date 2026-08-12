/**
 * KG Assist - 入口点
 * 功能: 初始化、目标进程查找、注入、辅助启动
 *
 * 使用方法:
 *   KG_Assist.exe [选项]
 *
 * 选项:
 *   --target <进程名>  目标进程 (默认: League of Legends.exe)
 *   --inject <dll路径> 注入指定 DLL
 *   --attach           附加到已运行的目标进程
 *   --cheat            直接启动辅助 (需要注入到游戏进程)
 *   --daemon           后台守护模式 (自动检测并注入)
 *   --config <文件>    指定配置文件
 *   --help             显示帮助
 */

#include "../include/common.h"

/* ============================================================
 * 全局状态
 * ============================================================ */

static BOOL g_Running = TRUE;
static KgProcessInfo g_TargetProcess = {0};
static char g_ConfigPath[KG_MAX_PATH] = "kg_assist.ini";

/* ============================================================
 * 信号处理 (Ctrl+C 优雅退出)
 * ============================================================ */

static BOOL WINAPI ConsoleHandler(DWORD signal) {
    if (signal == CTRL_C_EVENT || signal == CTRL_BREAK_EVENT ||
        signal == CTRL_CLOSE_EVENT) {
        KG_INFO("收到退出信号, 正在清理...");
        g_Running = FALSE;
        return TRUE;
    }
    return FALSE;
}

/* ============================================================
 * 打印帮助信息
 * ============================================================ */

static VOID PrintHelp(VOID) {
    printf("KG Assist v1.0 - 全新辅助工具\n");
    printf("================================\n\n");
    printf("用法: KG_Assist.exe [选项]\n\n");
    printf("选项:\n");
    printf("  --target <名称>    目标进程名 (默认: League of Legends.exe)\n");
    printf("  --inject <路径>    注入 DLL 到目标进程\n");
    printf("  --attach           附加到已运行的目标进程\n");
    printf("  --cheat            直接启动辅助功能\n");
    printf("  --daemon           后台守护模式 (自动检测注入)\n");
    printf("  --config <文件>    指定配置文件路径\n");
    printf("  --pid <PID>        指定目标进程 ID\n");
    printf("  --list             列出所有运行中进程\n");
    printf("  --help             显示此帮助信息\n\n");
    printf("示例:\n");
    printf("  KG_Assist.exe --target \"League of Legends.exe\" --attach\n");
    printf("  KG_Assist.exe --inject cheat.dll\n");
    printf("  KG_Assist.exe --daemon\n");
    printf("  KG_Assist.exe --list\n");
}

/* ============================================================
 * 列出所有进程
 * ============================================================ */

static VOID ListAllProcesses(VOID) {
    KgProcessInfo processes[256];
    s32 count = KgEnumAllProcesses(processes, 256);
    
    printf("%-8s %-8s %s\n", "PID", "父PID", "进程名");
    printf("----------------------------------------\n");
    
    for (s32 i = 0; i < count; i++) {
        printf("%-8lu %-8lu ", processes[i].pid, processes[i].parentPid);
        wprintf(L"%s\n", processes[i].name);
    }
    
    printf("\n共 %d 个进程\n", count);
}

/* ============================================================
 * 守护模式 (自动检测并注入)
 * ============================================================ */

static VOID DaemonMode(const char* targetName, const char* dllPath) {
    KG_INFO("守护模式启动, 目标: %s", targetName);
    KG_INFO("按 Ctrl+C 退出");
    
    while (g_Running) {
        // 检查目标进程是否存在
        if (KgFindProcess(targetName, &g_TargetProcess)) {
            // 检查是否已经注入 (简化检查)
            if (g_TargetProcess.handle == NULL || !KgEnumModules(&g_TargetProcess)) {
                // 注入 DLL
                if (dllPath) {
                    KG_INFO("检测到目标进程, 准备注入...");
                    
                    if (KgOpenProcess(&g_TargetProcess, KG_PROCESS_ALL_ACCESS)) {
                        if (KgAutoInject(g_TargetProcess.handle, dllPath)) {
                            KG_INFO("注入成功");
                        }
                        KgCloseProcess(&g_TargetProcess);
                    }
                }
            }
        }
        
        // 等待 2 秒后重试
        Sleep(2000);
    }
    
    KG_INFO("守护模式退出");
}

/* ============================================================
 * 附加模式
 * ============================================================ */

static BOOL AttachToTarget(const char* targetName) {
    KG_INFO("正在附加到目标进程: %s", targetName);
    
    if (!KgFindProcess(targetName, &g_TargetProcess)) {
        KG_ERROR("未找到目标进程: %s", targetName);
        return FALSE;
    }
    
    if (!KgOpenProcess(&g_TargetProcess, KG_PROCESS_ALL_ACCESS)) {
        KG_ERROR("打开目标进程失败 (PID: %lu)", g_TargetProcess.pid);
        return FALSE;
    }
    
    // 枚举模块
    if (KgEnumModules(&g_TargetProcess)) {
        KG_INFO("附加成功, 进程 %lu 加载了 %u 个模块",
                g_TargetProcess.pid, g_TargetProcess.moduleCount);
        return TRUE;
    }
    
    return FALSE;
}

/* ============================================================
 * 注入模式
 * ============================================================ */

static BOOL InjectDll(const char* targetName, const char* dllPath) {
    if (!dllPath) {
        KG_ERROR("未指定 DLL 路径");
        return FALSE;
    }
    
    // 检查 DLL 是否存在
    if (GetFileAttributesA(dllPath) == INVALID_FILE_ATTRIBUTES) {
        KG_ERROR("DLL 文件不存在: %s", dllPath);
        return FALSE;
    }
    
    // 查找目标进程
    if (!KgFindProcess(targetName, &g_TargetProcess)) {
        KG_ERROR("未找到目标进程: %s", targetName);
        return FALSE;
    }
    
    // 打开进程
    if (!KgOpenProcess(&g_TargetProcess, KG_PROCESS_ALL_ACCESS)) {
        KG_ERROR("打开目标进程失败");
        return FALSE;
    }
    
    // 执行注入
    BOOL result = KgAutoInject(g_TargetProcess.handle, dllPath);
    
    KgCloseProcess(&g_TargetProcess);
    return result;
}

/* ============================================================
 * 辅助模式 (直接启动)
 * ============================================================ */

static VOID StartCheatMode(VOID) {
    KG_INFO("辅助模式启动...");
    
    // 安装反检测
    KgInstallAntiDetect();
    
    // 修改窗口标题 (伪装)
    KgSpoofWindowTitle("System Process Monitor");
    
    // 启动主循环 (在新线程中)
    // CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)KgCheatMainLoop, NULL, 0, NULL);
    
    // 简单的控制台循环
    printf("辅助运行中...\n");
    printf("输入命令: status, config, quit\n");
    
    char command[64];
    while (g_Running) {
        printf("> ");
        if (fgets(command, sizeof(command), stdin) == NULL) break;
        
        // 去除换行符
        size_t len = strlen(command);
        if (len > 0 && command[len-1] == '\n') command[--len] = '\0';
        
        if (_stricmp(command, "quit") == 0 || _stricmp(command, "exit") == 0) {
            break;
        } else if (_stricmp(command, "status") == 0) {
            const KgCheatConfig* cfg = KgGetConfig();
            printf("ESP: %s\n", cfg->espEnabled ? "开" : "关");
            printf("自瞄: %s (速度: %.0f%%)\n", cfg->aimbotEnabled ? "开" : "关", cfg->aimbotSpeed * 100);
            printf("加速: %s\n", cfg->speedHackEnabled ? "开" : "关");
        } else if (_stricmp(command, "config") == 0) {
            // 交互式配置
            char input[16];
            printf("ESP (on/off): "); fgets(input, sizeof(input), stdin);
            BOOL esp = (_stricmp(input, "on") == 0 || _stricmp(input, "1") == 0);
            printf("Aimbot (on/off): "); fgets(input, sizeof(input), stdin);
            BOOL aim = (_stricmp(input, "on") == 0 || _stricmp(input, "1") == 0);
            KgSetConfig(esp, aim, FALSE, FALSE, FALSE);
            printf("配置已更新\n");
        } else if (_stricmp(command, "help") == 0) {
            printf("命令: status, config, quit\n");
        }
    }
    
    KG_INFO("辅助模式退出");
}

/* ============================================================
 * 主函数
 * ============================================================ */

int main(int argc, char* argv[]) {
    // 初始化日志系统 (终端 + 文件双输出)
    KgLogInit();
    
    // 注册控制台信号处理
    SetConsoleCtrlHandler(ConsoleHandler, TRUE);
    
    KG_INFO("============================================");
    KG_INFO("  KG Assist v2.0 (Game Anti-Detection)");
    KG_INFO("============================================");
    
    // 关键: 安装高级防封保护 (KG 核心能力)
    // 这一步会: 伪装进程窗口、Hook 反调试检测、
    //          启动完整性校验、混淆 API 调用、检测虚拟机环境
    if (!KgInstallFullProtection()) {
        KG_WARN("部分保护措施未能安装 (可能需要管理员权限)");
    }
    
    // 解析命令行参数
    const char* targetName = KG_LOL_PROCESS_NAME;
    const char* dllPath = NULL;
    int mode = 0;  // 0=帮助, 1=附加, 2=注入, 3=辅助, 4=守护, 5=列表
    
    for (int i = 1; i < argc; i++) {
        if (_stricmp(argv[i], "--help") == 0 || _stricmp(argv[i], "-h") == 0) {
            PrintHelp();
            return 0;
        } else if (_stricmp(argv[i], "--target") == 0 && i + 1 < argc) {
            targetName = argv[++i];
        } else if (_stricmp(argv[i], "--inject") == 0 && i + 1 < argc) {
            dllPath = argv[++i];
            mode = 2;
        } else if (_stricmp(argv[i], "--attach") == 0) {
            mode = 1;
        } else if (_stricmp(argv[i], "--cheat") == 0) {
            mode = 3;
        } else if (_stricmp(argv[i], "--daemon") == 0) {
            mode = 4;
        } else if (_stricmp(argv[i], "--list") == 0) {
            mode = 5;
        } else if (_stricmp(argv[i], "--config") == 0 && i + 1 < argc) {
            strncpy_s(g_ConfigPath, KG_MAX_PATH, argv[++i], _TRUNCATE);
        } else if (_stricmp(argv[i], "--pid") == 0 && i + 1 < argc) {
            g_TargetProcess.pid = atoi(argv[++i]);
        }
    }
    
    // 执行对应模式
    switch (mode) {
        case 0:  // 帮助
        case 5:  // 列表
            ListAllProcesses();
            return 0;
            
        case 1:  // 附加
            if (AttachToTarget(targetName)) {
                KgDumpProcessInfo(&g_TargetProcess);
                // 保持运行
                printf("附加成功, 按 Enter 退出\n");
                getchar();
                KgCloseProcess(&g_TargetProcess);
            }
            break;
            
        case 2:  // 注入
            if (InjectDll(targetName, dllPath)) {
                printf("注入成功\n");
            } else {
                printf("注入失败\n");
                return 1;
            }
            break;
            
        case 3:  // 辅助
            StartCheatMode();
            break;
            
        case 4:  // 守护
            DaemonMode(targetName, dllPath);
            break;
            
        default:
            // 默认: 显示帮助
            PrintHelp();
            break;
    }
    
    // 清理
    KgCloseProcess(&g_TargetProcess);
    KG_INFO("程序退出");
    
    // 关闭日志系统
    KgLogClose();
    
    return 0;
}
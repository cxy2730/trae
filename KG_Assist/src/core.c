/**
 * KG Assist - 核心辅助逻辑
 * 功能: LoL 游戏数据读写、实体列表遍历、辅助功能框架
 *
 * 技术要点:
 * - 特征码定位关键数据结构
 * - 指针链解析游戏数据
 * - 世界坐标到屏幕坐标转换 (W2S)
 * - 辅助功能框架 (ESP/自瞄等)
 */

#include "../include/common.h"

/* ============================================================
 * LoL 游戏特征码
 * 用于定位关键数据结构
 * ============================================================ */

// 实体列表指针特征码 (LoL 不同版本可能不同)
// 这些是占位特征码, 实际使用时需要根据具体版本调整
static const KgPattern LolEntityListPattern = {
    "LoL_EntityList",
    { 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x85, 0xC9, 0x74, 0x00, 0x8B, 0x01 },
    "xx????xxx?xx",
    12,
    0,
    FALSE,
    TRUE
};

// 本地玩家指针特征码
static const KgPattern LolLocalPlayerPattern = {
    "LoL_LocalPlayer",
    { 0xA1, 0x00, 0x00, 0x00, 0x00, 0x85, 0xC0, 0x74, 0x00, 0x0F, 0xB6, 0x0D },
    "x????xx?xxx?",
    12,
    0,
    FALSE,
    TRUE
};

// 游戏状态特征码
static const KgPattern LolGameStatePattern = {
    "LoL_GameState",
    { 0x68, 0x00, 0x00, 0x00, 0x00, 0x83, 0xEC, 0x00, 0xA1, 0x00, 0x00, 0x00 },
    "x??????x????",
    12,
    0,
    TRUE,
    TRUE
};

/* 已解析的特征码地址 (缓存) */
typedef struct {
    u32 entityListAddr;
    u32 localPlayerAddr;
    u32 gameStateAddr;
    u32 w2sMatrixAddr;
    BOOL initialized;
} KgFeatureCache;

static KgFeatureCache g_Cache = {0};

/* ============================================================
 * 特征码初始化
 * ============================================================ */

/**
 * 初始化游戏特征码地址
 * 扫描主模块定位关键数据结构
 */
BOOL KgInitGameState(KgGameState* state) {
    if (!state) return FALSE;
    
    KG_INFO("初始化游戏特征码...");
    
    memset(state, 0, sizeof(KgGameState));
    memset(&g_Cache, 0, sizeof(g_Cache));
    
    // 获取主模块基址
    KgModuleInfo mainModule = {0};
    mainModule.baseAddress = (u32)GetModuleHandleA(NULL);
    mainModule.sizeOfImage = 0x200000;  // 假设 2MB, 实际从 PE 头读取
    
    // 扫描实体列表指针
    KgScanResult results[10];
    s32 count = KgScanModuleForPattern(&mainModule, &LolEntityListPattern, results, 10);
    if (count > 0) {
        // 从特征码位置读取实际指针
        u32 ptrAddr = results[0].address + 2;  // 跳过 mov ecx, [addr] 指令
        if (KgReadMemory(ptrAddr, &g_Cache.entityListAddr, sizeof(u32))) {
            KG_INFO("实体列表地址: 0x%08X", g_Cache.entityListAddr);
        }
    }
    
    // 扫描本地玩家指针
    count = KgScanModuleForPattern(&mainModule, &LolLocalPlayerPattern, results, 10);
    if (count > 0) {
        u32 ptrAddr = results[0].address + 1;  // 跳过 mov eax, [addr] 指令
        if (KgReadMemory(ptrAddr, &g_Cache.localPlayerAddr, sizeof(u32))) {
            KG_INFO("本地玩家地址: 0x%08X", g_Cache.localPlayerAddr);
        }
    }
    
    // 扫描游戏状态
    count = KgScanModuleForPattern(&mainModule, &LolGameStatePattern, results, 10);
    if (count > 0) {
        g_Cache.gameStateAddr = results[0].address;
        KG_INFO("游戏状态地址: 0x%08X", g_Cache.gameStateAddr);
    }
    
    // 检查是否成功获取关键地址
    if (g_Cache.entityListAddr == 0 || g_Cache.localPlayerAddr == 0) {
        KG_WARN("部分特征码未找到, 可能需要更新特征码");
        // 继续执行, 某些功能可能不可用
    }
    
    g_Cache.initialized = TRUE;
    KG_INFO("特征码初始化完成");
    return TRUE;
}

/* ============================================================
 * 实体列表遍历
 * ============================================================ */

/**
 * 遍历实体列表, 获取所有玩家信息
 * 实体列表结构 (LoL 版本相关):
 *   [0] -> Entity 0
 *   [1] -> Entity 1
 *   ...
 *   [N] -> Entity N
 *
 * 每个 Entity 结构包含:
 *   +0x00: Entity 基址
 *   +0x04: Team (0=蓝方, 1=红方)
 *   +0x08: Health
 *   +0x0C: MaxHealth
 *   +0x10: Position X
 *   +0x14: Position Y
 *   +0x18: Position Z
 */
BOOL KgGetEntityList(KgGameState* state) {
    if (!state || !g_Cache.initialized) return FALSE;
    
    // 读取实体列表指针
    u32 entityListPtr = g_Cache.entityListAddr;
    if (entityListPtr == 0) return FALSE;
    
    // 读取实体数量 (假设列表第一个 DWORD 是数量)
    u32 entityCount = 0;
    if (!KgReadMemory(entityListPtr, &entityCount, sizeof(u32))) {
        return FALSE;
    }
    
    // 限制数量
    if (entityCount > 300 || entityCount == 0) {
        entityCount = 0;
    }
    
    state->playerCount = entityCount;
    
    // 读取每个实体的指针
    for (u32 i = 0; i < entityCount && i < 256; i++) {
        u32 entityPtr = 0;
        if (KgReadMemory(entityListPtr + 4 + i * 4, &entityPtr, sizeof(u32))) {
            if (entityPtr == 0 || !KgIsValidPtr(entityPtr)) {
                state->isVisible[i] = FALSE;
                continue;
            }
            
            // 读取实体数据 (结构偏移需要根据实际版本调整)
            // 这些偏移值是占位符, 实际需要逆向确定
            KgReadMemory(entityPtr + 0x04, &state->enemyTeam[i], 1);
            KgReadMemory(entityPtr + 0x08, &state->enemyHealth[i], sizeof(float));
            KgReadMemory(entityPtr + 0x0C, &state->enemyMaxHealth[i], sizeof(float));
            KgReadMemory(entityPtr + 0x10, &state->enemyPositions[i][0], sizeof(float));
            KgReadMemory(entityPtr + 0x14, &state->enemyPositions[i][1], sizeof(float));
            KgReadMemory(entityPtr + 0x18, &state->enemyPositions[i][2], sizeof(float));
            
            state->isVisible[i] = TRUE;
            
            // 计算与本地玩家的距离
            if (state->enemyMaxHealth[i] > 0 && state->localMaxHealth > 0) {
                float dx = state->enemyPositions[i][0] - state->localPos[0];
                float dy = state->enemyPositions[i][1] - state->localPos[1];
                state->distance[i] = sqrtf(dx * dx + dy * dy);
            }
        }
    }
    
    KG_DEBUG("实体列表: %u 个实体", entityCount);
    return TRUE;
}

/* ============================================================
 * 本地玩家信息
 * ============================================================ */

/**
 * 获取本地玩家详细信息
 */
BOOL KgGetLocalPlayerInfo(KgGameState* state) {
    if (!state || !g_Cache.initialized) return FALSE;
    
    u32 localPlayerPtr = g_Cache.localPlayerAddr;
    if (localPlayerPtr == 0 || !KgIsValidPtr(localPlayerPtr)) return FALSE;
    
    // 读取本地玩家数据 (偏移需要根据实际版本调整)
    KgReadMemory(localPlayerPtr + 0x04, &state->localTeam, 1);
    KgReadMemory(localPlayerPtr + 0x08, &state->localHealth, sizeof(float));
    KgReadMemory(localPlayerPtr + 0x0C, &state->localMaxHealth, sizeof(float));
    KgReadMemory(localPlayerPtr + 0x10, &state->localPos[0], sizeof(float));
    KgReadMemory(localPlayerPtr + 0x14, &state->localPos[1], sizeof(float));
    KgReadMemory(localPlayerPtr + 0x18, &state->localPos[2], sizeof(float));
    
    KG_DEBUG("本地玩家: 队伍 %u, 血量 %.0f/%.0f, 位置 (%.0f, %.0f)",
             state->localTeam, state->localHealth, state->localMaxHealth,
             state->localPos[0], state->localPos[1]);
    
    return TRUE;
}

/* ============================================================
 * 世界坐标转屏幕坐标 (W2S)
 * ============================================================ */

/**
 * 世界坐标 -> 屏幕坐标
 * 使用 4x4 视口矩阵进行投影变换
 *
 * @param state 游戏状态 (包含 W2S 矩阵和本地玩家数据)
 * @param index 实体索引
 * @param screenX 输出屏幕 X 坐标
 * @param screenY 输出屏幕 Y 坐标
 * @return 是否成功转换 (在屏幕范围内)
 */
BOOL KgCalcWorldToScreen(KgGameState* state, int index, float* screenX, float* screenY) {
    if (!state || !screenX || !screenY) return FALSE;
    if (index < 0 || index >= 256) return FALSE;
    if (!state->isVisible[index]) return FALSE;
    
    // 获取实体世界坐标
    float worldX = state->enemyPositions[index][0];
    float worldY = state->enemyPositions[index][1];
    float worldZ = state->enemyPositions[index][2];
    
    // 简化的 W2S 计算 (实际需要完整 4x4 矩阵)
    // 这里使用简化的正交投影作为示例
    // 实际 LoL 使用透视投影, 需要完整矩阵变换
    
    // 伪代码: 从游戏内存读取 ViewProjectionMatrix
    // 然后进行: clipPos = worldPos * ViewProjMatrix
    //           screenPos = clipPos / w * 0.5 + 0.5
    
    // 简化版本: 使用本地玩家视角方向
    float dx = worldX - state->localPos[0];
    float dy = worldY - state->localPos[1];
    float dz = worldZ - state->localPos[2];
    
    // 假设相机在本地玩家位置, 朝向 +Z
    // 前向投影
    float depth = dz;  // 深度 (Z 方向距离)
    
    if (depth <= 1.0f) {
        return FALSE;  // 在相机后方
    }
    
    // 水平和垂直视场角 (假设 90 度)
    float fov = 90.0f * 3.14159f / 180.0f;  // 转弧度
    float tanFov = tanf(fov / 2.0f);
    
    // 屏幕分辨率 (假设 1920x1080)
    float screenWidth = 1920.0f;
    float screenHeight = 1080.0f;
    
    // 计算屏幕坐标
    *screenX = (screenWidth / 2.0f) + (dx / (depth * tanFov)) * (screenWidth / 2.0f);
    *screenY = (screenHeight / 2.0f) - (dy / (depth * tanFov)) * (screenHeight / 2.0f);
    
    // 检查是否在屏幕范围内
    if (*screenX < 0 || *screenX > screenWidth ||
        *screenY < 0 || *screenY > screenHeight) {
        return FALSE;
    }
    
    return TRUE;
}

/* ============================================================
 * 游戏状态更新
 * ============================================================ */

/**
 * 更新游戏状态 (每帧调用)
 */
BOOL KgUpdateGameState(KgGameState* state) {
    if (!state || !g_Cache.initialized) return FALSE;
    
    // 1. 更新本地玩家信息
    KgGetLocalPlayerInfo(state);
    
    // 2. 更新实体列表
    KgGetEntityList(state);
    
    // 3. 检测游戏状态
    // 读取游戏状态变量 (需要根据实际版本确定地址)
    u32 gameStateAddr = g_Cache.gameStateAddr;
    if (gameStateAddr != 0) {
        KgReadMemory(gameStateAddr, &state->gameState, sizeof(u32));
    }
    
    // 4. 计算实体到屏幕坐标
    // (实际使用时在渲染循环中调用 KgCalcWorldToScreen)
    
    return TRUE;
}

/* ============================================================
 * 辅助功能框架
 * ============================================================ */

// g_Config: 防封配置默认值 (全部开启)
static KgProtectConfig g_Config = {
    .antiDebug     = TRUE,
    .windowSpoof   = TRUE,
    .codeIntegrity = TRUE,
    .handleStealth = TRUE,
    .ntHook        = TRUE,
    .antiVm        = TRUE,
    .apiThrottle   = TRUE,
};

/* ============================================================
 * 配置管理
 * ============================================================ */

/**
 * 加载辅助配置 (从文件)
 */
BOOL KgLoadConfig(const char* path) {
    if (!path) return FALSE;
    KG_INFO("加载配置: %s", path);

    g_Config.antiDebug     = GetPrivateProfileIntA("Protect", "AntiDebug", 1, path);
    g_Config.windowSpoof   = GetPrivateProfileIntA("Protect", "WindowSpoof", 1, path);
    g_Config.codeIntegrity = GetPrivateProfileIntA("Protect", "CodeIntegrity", 1, path);
    g_Config.handleStealth = GetPrivateProfileIntA("Protect", "HandleStealth", 1, path);
    g_Config.ntHook        = GetPrivateProfileIntA("Protect", "NtHook", 1, path);
    g_Config.antiVm        = GetPrivateProfileIntA("Protect", "AntiVm", 1, path);
    g_Config.apiThrottle   = GetPrivateProfileIntA("Protect", "ApiThrottle", 1, path);

    KG_INFO("配置加载完成");
    return TRUE;
}

/**
 * 保存辅助配置 (到文件)
 */
BOOL KgSaveConfig(const char* path) {
    if (!path) return FALSE;
    KG_INFO("保存配置: %s", path);

    WritePrivateProfileStringA("Protect", "AntiDebug",     g_Config.antiDebug ? "1" : "0", path);
    WritePrivateProfileStringA("Protect", "WindowSpoof",   g_Config.windowSpoof ? "1" : "0", path);
    WritePrivateProfileStringA("Protect", "CodeIntegrity", g_Config.codeIntegrity ? "1" : "0", path);
    WritePrivateProfileStringA("Protect", "HandleStealth", g_Config.handleStealth ? "1" : "0", path);
    WritePrivateProfileStringA("Protect", "NtHook",        g_Config.ntHook ? "1" : "0", path);
    WritePrivateProfileStringA("Protect", "AntiVm",        g_Config.antiVm ? "1" : "0", path);
    WritePrivateProfileStringA("Protect", "ApiThrottle",   g_Config.apiThrottle ? "1" : "0", path);

    KG_INFO("配置保存完成");
    return TRUE;
}

/**
 * 获取当前配置 (用于 UI 显示)
 */
const KgProtectConfig* KgGetConfig(VOID) {
    return &g_Config;
}

/**
 * 更新防封配置
 */
VOID KgSetConfig(BOOL antiDebug, BOOL windowSpoof, BOOL codeIntegrity,
                 BOOL handleStealth, BOOL ntHook, BOOL antiVm, BOOL apiThrottle) {
    g_Config.antiDebug     = antiDebug;
    g_Config.windowSpoof   = windowSpoof;
    g_Config.codeIntegrity = codeIntegrity;
    g_Config.handleStealth = handleStealth;
    g_Config.ntHook        = ntHook;
    g_Config.antiVm        = antiVm;
    g_Config.apiThrottle   = apiThrottle;
}
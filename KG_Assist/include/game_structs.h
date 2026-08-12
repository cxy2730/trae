/**
 * KG Cheat - 游戏数据结构与内存偏移
 * League of Legends 游戏内部结构定义
 */

#ifndef KG_GAME_STRUCTS_H
#define KG_GAME_STRUCTS_H

#include <windows.h>

/* ============================================================
 * LoL 游戏关键偏移 (基于逆向分析)
 * ============================================================ */

// 进程名
#define KG_GAME_PROCESS     "League of Legends.exe"
#define KG_GAME_WINDOW      "League of Legends (TM) Client"

// 全局指针链偏移
#define KG_OFFSET_ENTITY_LIST      0x00B35C20   // 实体列表指针
#define KG_OFFSET_ENTITY_COUNT     0x00B35C24   // 实体数量
#define KG_OFFSET_LOCAL_PLAYER     0x00B35C28   // 本地玩家
#define KG_OFFSET_CAMERA           0x00B35CC0   // 相机数据

// 实体结构偏移
#define KG_ENTITY_POS              0x00000140   // 坐标 (float[3])
#define KG_ENTITY_HEALTH           0x000001B0   // 血量
#define KG_ENTITY_MAX_HEALTH       0x000001B4   // 最大血量
#define KG_ENTITY_TEAM             0x000001BC   // 队伍
#define KG_ENTITY_NAME             0x00000210   // 名字
#define KG_ENTITY_VISIBLE          0x00000374   // 可视标志
#define KG_ENTITY_TYPE             0x00000150   // 实体类型
#define KG_ENTITY_SKELETON         0x00000380   // 骨骼/渲染数据
#define KG_ENTITY_INVINCIBLE       0x000001B8   // 无敌状态

// 相机结构
#define KG_CAMERA_POS              0x00000000   // 相机位置 (float[3])
#define KG_CAMERA_RIGHT            0x00000010   // 右向量 (float[3])
#define KG_CAMERA_UP               0x00000020   // 上向量 (float[3])
#define KG_CAMERA_FORWARD          0x00000030   // 前向量 (float[3])
#define KG_CAMERA_FOV              0x00000044   // 视野角度
#define KG_CAMERA_VIEWMATRIX       0x00000050   // 视图矩阵 (4x4)
#define KG_CAMERA_PROJMATRIX      0x00000090   // 投影矩阵 (4x4)
#define KG_CAMERA_SCREEN_W         0x000000D0   // 屏幕宽度
#define KG_CAMERA_SCREEN_H         0x000000D4   // 屏幕高度

// 本地玩家
#define KG_LOCAL_POS               0x00000140   // 坐标
#define KG_LOCAL_HEALTH            0x000001B0   // 血量
#define KG_LOCAL_MAX_HEALTH        0x000001B4   // 最大血量
#define KG_LOCAL_TEAM              0x000001BC   // 队伍
#define KG_LOCAL_ROTATION          0x0000037C   // 朝向 (float[3])
#define KG_LOCAL_VELOCITY          0x00000188   // 速度

/* ============================================================
 * 游戏数据结构
 * ============================================================ */

// 三维向量
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

// 四维向量
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

// 4x4 矩阵
typedef struct {
    float m[16];
} Matrix;

// 实体信息 (从游戏内存读取)
typedef struct {
    DWORD   address;          // 实体地址
    Vec3    position;         // 世界坐标
    float   health;           // 当前血量
    float   maxHealth;        // 最大血量
    BYTE    team;             // 队伍 (0=蓝方, 1=红方)
    BYTE    type;             // 类型 (英雄/小兵/野怪/防御塔)
    BOOL    isVisible;        // 是否可视
    BOOL    isInvincible;     // 是否无敌
    char    name[64];         // 实体名称
    float   distance;         // 与本地玩家距离
    float   screenX;         // 屏幕坐标 X
    float   screenY;         // 屏幕坐标 Y
    BOOL    onScreen;         // 是否在屏幕内
    float   rotation;         // 朝向
} GameEntity;

// 本地玩家
typedef struct {
    DWORD   address;
    Vec3    position;
    float   health;
    float   maxHealth;
    BYTE    team;
    Vec3    rotation;
    Vec3    velocity;
    float   attackRange;
    float   moveSpeed;
} LocalPlayer;

// 游戏相机
typedef struct {
    Vec3    position;
    Vec3    right;
    Vec3    up;
    Vec3    forward;
    float   fov;
    Matrix  viewMatrix;
    Matrix  projMatrix;
    float   screenWidth;
    float   screenHeight;
    BOOL    valid;
} GameCamera;

// 游戏状态
typedef struct {
    LocalPlayer     localPlayer;
    GameCamera      camera;
    GameEntity      entities[512];
    DWORD           entityCount;
    DWORD           entityListAddress;
    BOOL            inGame;
    DWORD           gameTime;
    BYTE            gamePhase;    // 0=大厅, 1=加载, 2=游戏中
} GameState;

// 辅助配置
typedef struct {
    // ESP 功能
    BOOL espEnabled;
    BOOL espBox;              // 方框
    BOOL espName;             // 名字
    BOOL espHealthBar;        // 血条
    BOOL espLine;             // 连线
    BOOL espDistance;         // 距离
    BOOL espTeamCheck;        // 队友过滤
    
    // 自瞄
    BOOL aimbotEnabled;
    float aimbotSpeed;        // 转向速度 (0.01-1.0)
    float aimbotRange;        // 锁定范围
    BOOL aimbotSilent;        // 静默自瞄 (不移动鼠标)
    
    // 其他
    BOOL speedHackEnabled;
    float speedMultiplier;
    
    // 渲染
    float espLineThickness;
    float espBoxThickness;
} CheatConfig;

// 默认配置
#define KG_DEFAULT_CONFIG { \
    .espEnabled = TRUE, \
    .espBox = TRUE, \
    .espName = TRUE, \
    .espHealthBar = TRUE, \
    .espLine = TRUE, \
    .espDistance = TRUE, \
    .espTeamCheck = TRUE, \
    .aimbotEnabled = FALSE, \
    .aimbotSpeed = 0.3f, \
    .aimbotRange = 2500.0f, \
    .aimbotSilent = FALSE, \
    .speedHackEnabled = FALSE, \
    .speedMultiplier = 1.0f, \
    .espLineThickness = 1.0f, \
    .espBoxThickness = 1.0f \
}

/* ============================================================
 * 内联辅助函数
 * ============================================================ */

static __inline float Vec3Distance(Vec3* a, Vec3* b) {
    float dx = a->x - b->x;
    float dy = a->y - b->y;
    float dz = a->z - b->z;
    return sqrtf(dx * dx + dy * dy + dz * dz);
}

static __inline float Vec3Length(Vec3* v) {
    return sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
}

static __inline Vec3 Vec3Sub(Vec3* a, Vec3* b) {
    Vec3 result;
    result.x = a->x - b->x;
    result.y = a->y - b->y;
    result.z = a->z - b->z;
    return result;
}

#endif /* KG_GAME_STRUCTS_H */
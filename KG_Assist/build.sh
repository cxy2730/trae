#!/bin/bash
#
# KG Assist - GUI 构建脚本 (Linux / WSL)
# 编译适用于 Windows 的 PE32 (x86) GUI 子系统可执行文件 (无控制台窗口)
#
# 依赖: MinGW-w64 (i686-w64-mingw32-gcc)
# 使用: ./build.sh [release|debug]

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${GREEN}============================================${NC}"
echo -e "${GREEN}  KG Assist - GUI 构建${NC}"
echo -e "${GREEN}============================================${NC}"
echo ""

# 编译器
if command -v i686-w64-mingw32-gcc &> /dev/null; then
    CC="i686-w64-mingw32-gcc"
elif command -v x86_64-w64-mingw32-gcc &> /dev/null; then
    CC="x86_64-w64-mingw32-gcc"
else
    echo -e "${RED}未找到 MinGW 编译器${NC}"
    echo "请安装: sudo apt install mingw-w64"
    exit 1
fi
echo -e "${GREEN}使用编译器: $CC${NC}"

# 构建模式
BUILD_TYPE=${1:-release}
echo -e "构建模式: ${YELLOW}$BUILD_TYPE${NC}"

if [ "$BUILD_TYPE" = "debug" ]; then
    CFLAGS="-g -O0 -DDEBUG -DKG_LOG_LEVEL=4 -Wall -Wextra"
    echo -e "${YELLOW}调试模式${NC}"
else
    CFLAGS="-O2 -DNDEBUG -DKG_LOG_LEVEL=1 -Wall"
    echo -e "${GREEN}发布模式${NC}"
fi

SRC_DIR="src"
INC_DIR="include"
OUT_DIR="bin"
TARGET="KG_Assist.exe"

mkdir -p "$OUT_DIR"

# 源文件
SOURCES=(
    "$SRC_DIR/main.c"
    "$SRC_DIR/logger.c"
    "$SRC_DIR/paths.c"
    "$SRC_DIR/protector.c"
    "$SRC_DIR/memory.c"
    "$SRC_DIR/antidetect.c"
    "$SRC_DIR/process.c"
    "$SRC_DIR/injector.c"
    "$SRC_DIR/core.c"
)

# 编译
OBJECTS=()
echo ""
echo "编译源文件..."
for src in "${SOURCES[@]}"; do
    filename=$(basename "$src" .c)
    obj="$OUT_DIR/${filename}.o"
    OBJECTS+=("$obj")
    echo -e "  ${GREEN}编译${NC} $src"
    $CC $CFLAGS -I"$INC_DIR" -c "$src" -o "$obj"
done

# 链接 (-mwindows 切换到 GUI 子系统, 无控制台窗口)
echo ""
echo -e "${GREEN}链接 (GUI 子系统)...${NC}"
$CC "${OBJECTS[@]}" -o "$OUT_DIR/$TARGET" \
    -mwindows \
    -lws2_32 -lpsapi -lshell32

# 验证
if [ -f "$OUT_DIR/$TARGET" ]; then
    SIZE=$(du -h "$OUT_DIR/$TARGET" | cut -f1)
    echo ""
    echo -e "${GREEN}============================================${NC}"
    echo -e "${GREEN}  构建成功 (GUI)!${NC}"
    echo -e "${GREEN}============================================${NC}"
    echo ""
    echo -e "  输出: ${YELLOW}$OUT_DIR/$TARGET${NC}  (${YELLOW}$SIZE${NC})"
    echo ""
    file "$OUT_DIR/$TARGET"
    echo ""
    echo -e "${YELLOW}使用说明:${NC}"
    echo -e "  复制 $OUT_DIR/$TARGET 到 Windows 系统"
    echo -e "  双击运行 (无控制台窗口)"
    echo -e "  右键托盘图标: 状态 / 打开日志 / 退出"
    echo -e "  日志位置: <EXE目录>\\logs\\kg_assist.log"
    echo ""
else
    echo -e "${RED}构建失败!${NC}"
    exit 1
fi

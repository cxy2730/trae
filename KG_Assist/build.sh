#!/bin/bash
#
# KG Assist - 构建脚本 (Linux / WSL)
# 编译 Win11 GUI 模式的 PE32 可执行文件
#
# 依赖: MinGW-w64 (i686-w64-mingw32-gcc)
#

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${GREEN}============================================${NC}"
echo -e "${GREEN}  KG Assist v2.0 - Win11 GUI 构建${NC}"
echo -e "${GREEN}============================================${NC}"
echo ""

# 检测编译器 (优先 32 位)
if command -v i686-w64-mingw32-gcc &> /dev/null; then
    CC="i686-w64-mingw32-gcc"
    echo -e "${GREEN}使用 MinGW-w64 (32位): $CC${NC}"
elif command -v x86_64-w64-mingw32-gcc &> /dev/null; then
    CC="x86_64-w64-mingw32-gcc"
    echo -e "${YELLOW}使用 MinGW-w64 (64位): $CC${NC}"
else
    echo -e "${RED}未找到 MinGW 编译器${NC}"
    echo "请安装: sudo apt install mingw-w64"
    exit 1
fi

# 构建模式
BUILD_TYPE=${1:-release}
echo -e "构建模式: ${YELLOW}$BUILD_TYPE${NC}"

if [ "$BUILD_TYPE" = "debug" ]; then
    CFLAGS="-g -O0 -DDEBUG -DKG_LOG_LEVEL=4 -Wall -Wextra"
else
    CFLAGS="-O2 -DNDEBUG -DKG_LOG_LEVEL=1 -Wall"
fi

# GUI 子系统: 不弹控制台窗口
CFLAGS="$CFLAGS -mwindows"

SRC_DIR="src"
INC_DIR="include"
OUT_DIR="bin"
TARGET="KG_Assist.exe"

mkdir -p "$OUT_DIR"

# 源文件 (含 GUI 模块)
SOURCES=(
    "$SRC_DIR/main.c"
    "$SRC_DIR/gui.c"
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

# 链接 (gdi32 + comctl32 + dwmapi 用于 Win11 GUI)
echo ""
echo -e "${GREEN}链接...${NC}"
$CC "${OBJECTS[@]}" -o "$OUT_DIR/$TARGET" \
    -mwindows \
    -lws2_32 -lpsapi -lshlwapi \
    -lgdi32 -lcomctl32 -ldwmapi -lcomdlg32

# 检查结果
if [ -f "$OUT_DIR/$TARGET" ]; then
    SIZE=$(du -h "$OUT_DIR/$TARGET" | cut -f1)
    echo ""
    echo -e "${GREEN}============================================${NC}"
    echo -e "${GREEN}  构建成功!${NC}"
    echo -e "${GREEN}============================================${NC}"
    echo ""
    echo -e "  输出: ${YELLOW}$OUT_DIR/$TARGET${NC}"
    echo -e "  大小: ${YELLOW}$SIZE${NC}"
    echo ""
    if command -v file &> /dev/null; then
        file "$OUT_DIR/$TARGET"
    fi
    echo ""
else
    echo -e "${RED}构建失败!${NC}"
    exit 1
fi

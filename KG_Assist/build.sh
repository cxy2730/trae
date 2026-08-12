#!/bin/bash
#
# KG Assist - 构建脚本 (Linux / WSL)
# 编译适用于 Windows 的 PE32 (x86) 可执行文件
#
# 依赖:
#   - MinGW-w64 (i686-w64-mingw32-gcc)
#   - 或 Visual Studio (MSVC)
#
# 使用:
#   chmod +x build.sh
#   ./build.sh [release|debug]

set -e

# 颜色输出
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${GREEN}============================================${NC}"
echo -e "${GREEN}  KG Assist - 全新辅助工具 构建脚本${NC}"
echo -e "${GREEN}============================================${NC}"
echo ""

# 检测编译器
if command -v i686-w64-mingw32-gcc &> /dev/null; then
    CC="i686-w64-mingw32-gcc"
    echo -e "${GREEN}使用 MinGW-w64 编译器: $CC${NC}"
elif command -v x86_64-w64-mingw32-gcc &> /dev/null; then
    CC="x86_64-w64-mingw32-gcc"
    echo -e "${GREEN}使用 MinGW-w64 编译器 (64位): $CC${NC}"
else
    echo -e "${YELLOW}未找到 MinGW 编译器${NC}"
    echo "请安装: sudo apt install mingw-w64"
    echo "或访问: https://mingw-w64.org/"
    exit 1
fi

# 构建模式
BUILD_TYPE=${1:-release}
echo -e "构建模式: ${YELLOW}$BUILD_TYPE${NC}"

# 编译选项
if [ "$BUILD_TYPE" = "debug" ]; then
    CFLAGS="-g -O0 -DDEBUG -DKG_LOG_LEVEL=4 -Wall -Wextra"
    echo -e "${YELLOW}调试模式 (包含调试信息, 日志级别: DEBUG)${NC}"
else
    CFLAGS="-O2 -DNDEBUG -DKG_LOG_LEVEL=1 -Wall"
    echo -e "${GREEN}发布模式 (优化, 日志级别: ERROR)${NC}"
fi

# 目录设置
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

# 编译所有源文件
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

# 链接
echo ""
echo -e "${GREEN}链接目标文件...${NC}"
$CC "${OBJECTS[@]}" -o "$OUT_DIR/$TARGET" -lws2_32 -lpsapi -lshlwapi

# 检查结果
if [ -f "$OUT_DIR/$TARGET" ]; then
    SIZE=$(du -h "$OUT_DIR/$TARGET" | cut -f1)
    echo ""
    echo -e "${GREEN}============================================${NC}"
    echo -e "${GREEN}  构建成功!${NC}"
    echo -e "${GREEN}============================================${NC}"
    echo ""
    echo -e "  输出文件: ${YELLOW}$OUT_DIR/$TARGET${NC}"
    echo -e "  文件大小: ${YELLOW}$SIZE${NC}"
    echo ""
    
    # 显示 PE 信息
    if command -v file &> /dev/null; then
        file "$OUT_DIR/$TARGET"
    fi
    
    echo ""
    echo -e "${YELLOW}使用说明:${NC}"
    echo -e "  复制 $OUT_DIR/$TARGET 到 Windows 系统"
    echo -e "  运行: KG_Assist.exe --help"
    echo ""
else
    echo -e "${RED}构建失败!${NC}"
    exit 1
fi
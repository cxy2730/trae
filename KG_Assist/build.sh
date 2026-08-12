#!/bin/bash
#
# KG Assist - 构建脚本 (Linux / WSL)
# 编译 Rust 核心 + Win11 GUI C 包装层
#
# 依赖:
#   - Rust toolchain (含 i686-pc-windows-gnu target)
#   - MinGW-w64 (i686-w64-mingw32-gcc)
#

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${GREEN}============================================${NC}"
echo -e "${GREEN}  KG Assist v3.0 - Rust 核心 + C GUI 构建${NC}"
echo -e "${GREEN}============================================${NC}"
echo ""

# 检测 MinGW 编译器 (优先 32 位, 与 Rust target 一致)
if command -v i686-w64-mingw32-gcc &> /dev/null; then
    CC="i686-w64-mingw32-gcc"
    TARGET="i686-pc-windows-gnu"
    echo -e "${GREEN}使用 MinGW-w64 (32位): $CC${NC}"
elif command -v x86_64-w64-mingw32-gcc &> /dev/null; then
    CC="x86_64-w64-mingw32-gcc"
    TARGET="x86_64-pc-windows-gnu"
    echo -e "${YELLOW}使用 MinGW-w64 (64位): $CC${NC}"
else
    echo -e "${RED}未找到 MinGW 编译器${NC}"
    echo "请安装: sudo apt install mingw-w64"
    exit 1
fi

# 检测 Rust
if ! command -v cargo &> /dev/null; then
    echo -e "${RED}未找到 cargo, 请安装 Rust 工具链${NC}"
    exit 1
fi

# 确保 Rust target 已安装
if ! rustup target list --installed 2>/dev/null | grep -q "$TARGET"; then
    echo -e "${YELLOW}安装 Rust target: $TARGET${NC}"
    rustup target add "$TARGET"
fi

BUILD_TYPE=${1:-release}
echo -e "构建模式: ${YELLOW}$BUILD_TYPE${NC}"

# ============================================================
# Step 1: 编译 Rust 核心 DLL
# ============================================================
echo ""
echo -e "${GREEN}[1/2] 编译 Rust 核心 (kg_core.dll)...${NC}"

RUST_FLAGS=""
if [ "$BUILD_TYPE" = "debug" ]; then
    cargo build --target "$TARGET" --manifest-path rust/Cargo.toml
    RUST_LIB="rust/target/$TARGET/debug/libkg_core.dll.a"
    RUST_DLL="rust/target/$TARGET/debug/kg_core.dll"
else
    cargo build --release --target "$TARGET" --manifest-path rust/Cargo.toml
    RUST_LIB="rust/target/$TARGET/release/libkg_core.dll.a"
    RUST_DLL="rust/target/$TARGET/release/kg_core.dll"
fi

if [ ! -f "$RUST_LIB" ]; then
    echo -e "${RED}Rust 核心编译失败: $RUST_LIB 不存在${NC}"
    exit 1
fi

echo -e "  ${GREEN}Rust 核心 OK${NC}: $RUST_DLL"

# ============================================================
# Step 2: 编译 C GUI 包装层
# ============================================================
echo ""
echo -e "${GREEN}[2/2] 编译 C GUI 包装层...${NC}"

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
TARGET_EXE="KG_Assist.exe"

mkdir -p "$OUT_DIR"

# 源文件 (仅保留 GUI + 入口 + 路径 + 日志, 核心逻辑在 Rust)
SOURCES=(
    "$SRC_DIR/main.c"
    "$SRC_DIR/gui.c"
    "$SRC_DIR/logger.c"
    "$SRC_DIR/paths.c"
)

OBJECTS=()
for src in "${SOURCES[@]}"; do
    filename=$(basename "$src" .c)
    obj="$OUT_DIR/${filename}.o"
    OBJECTS+=("$obj")
    echo -e "  ${GREEN}编译${NC} $src"
    $CC $CFLAGS -I"$INC_DIR" -c "$src" -o "$obj"
done

# 链接: Rust 核心 (libkg_core.dll.a) + Win32 GUI 库
echo ""
echo -e "${GREEN}链接...${NC}"
$CC "${OBJECTS[@]}" -o "$OUT_DIR/$TARGET_EXE" \
    -mwindows \
    "$RUST_LIB" \
    -ladvapi32 \
    -lws2_32 -lpsapi -lshlwapi \
    -lgdi32 -lcomctl32 -ldwmapi -lcomdlg32 \
    -Wl,--enable-stdcall-fixup

# 复制 Rust DLL 到 bin 目录 (运行时需要)
cp "$RUST_DLL" "$OUT_DIR/kg_core.dll"

# 检查结果
if [ -f "$OUT_DIR/$TARGET_EXE" ]; then
    SIZE=$(du -h "$OUT_DIR/$TARGET_EXE" | cut -f1)
    DLL_SIZE=$(du -h "$OUT_DIR/kg_core.dll" | cut -f1)
    echo ""
    echo -e "${GREEN}============================================${NC}"
    echo -e "${GREEN}  构建成功!${NC}"
    echo -e "${GREEN}============================================${NC}"
    echo ""
    echo -e "  输出: ${YELLOW}$OUT_DIR/$TARGET_EXE${NC}  ($SIZE)"
    echo -e "  核心: ${YELLOW}$OUT_DIR/kg_core.dll${NC}  ($DLL_SIZE)"
    echo -e "  ${YELLOW}运行时两个文件必须放在同一目录${NC}"
    echo ""
    if command -v file &> /dev/null; then
        file "$OUT_DIR/$TARGET_EXE"
        file "$OUT_DIR/kg_core.dll"
    fi
    echo ""
else
    echo -e "${RED}构建失败!${NC}"
    exit 1
fi

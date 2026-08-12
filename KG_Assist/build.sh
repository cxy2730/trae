#!/bin/bash
#
# KG Assist v3.0 - 构建脚本 (纯 Rust 单 exe)
#
# 产物: bin/kg_assist.exe (单文件, 无需 DLL)
#
# 依赖:
#   - Rust toolchain (含 i686-pc-windows-gnu target)
#

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${GREEN}============================================${NC}"
echo -e "${GREEN}  KG Assist v3.0 - 纯 Rust 单 exe 构建${NC}"
echo -e "${GREEN}============================================${NC}"
echo ""

# 检测 Rust
if ! command -v cargo &> /dev/null; then
    echo -e "${RED}未找到 cargo, 请安装 Rust 工具链${NC}"
    echo "  curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh"
    exit 1
fi

TARGET="i686-pc-windows-gnu"
BUILD_TYPE=${1:-release}

# 确保 Rust target 已安装
if ! rustup target list --installed 2>/dev/null | grep -q "$TARGET"; then
    echo -e "${YELLOW}安装 Rust target: $TARGET${NC}"
    rustup target add "$TARGET"
fi

echo -e "构建模式: ${YELLOW}$BUILD_TYPE${NC}"
echo -e "目标平台: ${YELLOW}$TARGET${NC}"
echo ""

# ============================================================
# 编译
# ============================================================
echo -e "${GREEN}[1/2] 编译 Rust 单 exe...${NC}"

if [ "$BUILD_TYPE" = "debug" ]; then
    cargo build --target "$TARGET" --manifest-path rust/Cargo.toml
    EXE="rust/target/$TARGET/debug/kg_assist.exe"
else
    cargo build --release --target "$TARGET" --manifest-path rust/Cargo.toml
    EXE="rust/target/$TARGET/release/kg_assist.exe"
fi

if [ ! -f "$EXE" ]; then
    echo -e "${RED}编译失败: $EXE 不存在${NC}"
    exit 1
fi

# ============================================================
# 复制到 bin/
# ============================================================
echo ""
echo -e "${GREEN}[2/2] 复制产物...${NC}"

mkdir -p bin
cp "$EXE" "bin/kg_assist.exe"

SIZE=$(du -h "bin/kg_assist.exe" | cut -f1)

echo ""
echo -e "${GREEN}============================================${NC}"
echo -e "${GREEN}  构建成功!${NC}"
echo -e "${GREEN}============================================${NC}"
echo ""
echo -e "  输出: ${YELLOW}bin/kg_assist.exe${NC}  ($SIZE)"
echo -e "  ${GREEN}单 exe, 无需 DLL, 无需配置文件${NC}"
echo ""
echo -e "  使用:"
echo -e "    1. 将 ${YELLOW}bot.dll${NC} 放到 exe 同目录 (游戏模式需要)"
echo -e "    2. 运行 ${YELLOW}kg_assist.exe${NC}"
echo -e "    3. 选择模式后点击启动"
echo ""
if command -v file &> /dev/null; then
    file "bin/kg_assist.exe"
    echo ""
fi

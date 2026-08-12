#!/bin/bash
#
# KG Assist v3.0 - 构建脚本 (纯 Rust)
#
# 产物:
#   bin/kg_assist.exe           (主程序, 单文件)
#   bin/stub/version.dll        (DLL 劫持 stub)
#   bin/stub/SProtectSDK64.dll
#   bin/stub/netbios.dll
#   bin/stub/TerSafe.dll
#
# 依赖:
#   - Rust toolchain (含 x86_64-pc-windows-gnu target)
#

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${GREEN}============================================${NC}"
echo -e "${GREEN}  KG Assist v3.0 - 纯 Rust 构建${NC}"
echo -e "${GREEN}============================================${NC}"
echo ""

# 检测 Rust
if ! command -v cargo &> /dev/null; then
    echo -e "${RED}未找到 cargo, 请安装 Rust 工具链${NC}"
    echo "  curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh"
    exit 1
fi

TARGET="x86_64-pc-windows-gnu"
BUILD_TYPE=${1:-release}

# 确保 Rust target 已安装
if ! rustup target list --installed 2>/dev/null | grep -q "$TARGET"; then
    echo -e "${YELLOW}安装 Rust target: $TARGET${NC}"
    rustup target add "$TARGET"
fi

echo -e "构建模式: ${YELLOW}$BUILD_TYPE${NC}"
echo -e "目标平台: ${YELLOW}$TARGET${NC}"
echo ""

CARGO_FLAGS=""
if [ "$BUILD_TYPE" != "debug" ]; then
    CARGO_FLAGS="--release"
fi

# ============================================================
# [1/3] 编译主程序
# ============================================================
echo -e "${GREEN}[1/3] 编译主程序 kg_assist.exe...${NC}"

cargo build $CARGO_FLAGS --target "$TARGET" --manifest-path rust/Cargo.toml

if [ "$BUILD_TYPE" = "debug" ]; then
    EXE="rust/target/$TARGET/debug/kg_assist.exe"
else
    EXE="rust/target/$TARGET/release/kg_assist.exe"
fi

if [ ! -f "$EXE" ]; then
    echo -e "${RED}主程序编译失败: $EXE 不存在${NC}"
    exit 1
fi

# ============================================================
# [2/3] 编译 stub DLLs (DLL 劫持用)
# ============================================================
echo ""
echo -e "${GREEN}[2/3] 编译 stub DLLs...${NC}"

STUB_DIR="rust/stub_dlls"
for stub in version_stub sprotect_stub netbios_stub terafe_stub; do
    echo -e "  ${YELLOW}编译 $stub...${NC}"
    cargo build $CARGO_FLAGS --target "$TARGET" --manifest-path "$STUB_DIR/$stub/Cargo.toml" 2>&1 | grep -E "error|warning: unused" || true
done

# 收集 stub DLL 产物 (stub DLL 在 rust/stub_dlls/target/ 下)
STUB_OUT_DIR="rust/stub_dlls/target/$TARGET/release"
if [ "$BUILD_TYPE" = "debug" ]; then
    STUB_OUT_DIR="rust/stub_dlls/target/$TARGET/debug"
fi

# stub crate name → 期望输出 DLL 名
declare -A STUB_NAMES=(
    ["version_stub"]="version.dll"
    ["sprotect_stub"]="SProtectSDK64.dll"
    ["netbios_stub"]="netbios.dll"
    ["terafe_stub"]="TerSafe.dll"
)

# ============================================================
# [3/3] 复制产物到 bin/
# ============================================================
echo ""
echo -e "${GREEN}[3/3] 复制产物...${NC}"

mkdir -p bin/stub

cp "$EXE" "bin/kg_assist.exe"

# stub DLL 的输出名取决于 [lib].name
# version_stub → version.dll
# sprotect_stub → SProtectSDK64.dll
# netbios_stub → netbios.dll
# terafe_stub → TerSafe.dll
cp "$STUB_OUT_DIR/version.dll"        "bin/stub/version.dll"        2>/dev/null || echo -e "  ${RED}缺失: version.dll${NC}"
cp "$STUB_OUT_DIR/SProtectSDK64.dll"  "bin/stub/SProtectSDK64.dll"  2>/dev/null || echo -e "  ${RED}缺失: SProtectSDK64.dll${NC}"
cp "$STUB_OUT_DIR/netbios.dll"        "bin/stub/netbios.dll"        2>/dev/null || echo -e "  ${RED}缺失: netbios.dll${NC}"
cp "$STUB_OUT_DIR/TerSafe.dll"        "bin/stub/TerSafe.dll"        2>/dev/null || echo -e "  ${RED}缺失: TerSafe.dll${NC}"

EXE_SIZE=$(du -h "bin/kg_assist.exe" | cut -f1)
STUB_SIZE=$(du -sh "bin/stub" 2>/dev/null | cut -f1 || echo "0")

echo ""
echo -e "${GREEN}============================================${NC}"
echo -e "${GREEN}  构建成功!${NC}"
echo -e "${GREEN}============================================${NC}"
echo ""
echo -e "  主程序:    ${YELLOW}bin/kg_assist.exe${NC}  ($EXE_SIZE)"
echo -e "  stub DLLs: ${YELLOW}bin/stub/${NC}  ($STUB_SIZE)"
echo ""
echo -e "  ${GREEN}使用方式:${NC}"
echo -e "    1. 将 ${YELLOW}bin/kg_assist.exe${NC} 和 ${YELLOW}bin/stub/${NC} 目录一起分发"
echo -e "       (stub\\ 子目录必须和 exe 同级)"
echo -e "    2. 将 ${YELLOW}bot.dll${NC} 放到 exe 同目录 (游戏模式需要)"
echo -e "    3. 右键管理员运行 ${YELLOW}kg_assist.exe${NC}"
echo -e "    4. 选择模式后点击启动"
echo ""
echo -e "  目录结构:"
echo -e "    KG_Assist/"
echo -e "    ├── kg_assist.exe"
echo -e "    ├── bot.dll              (你提供)"
echo -e "    └── stub/"
echo -e "        ├── version.dll"
echo -e "        ├── SProtectSDK64.dll"
echo -e "        ├── netbios.dll"
echo -e "        └── TerSafe.dll"
echo ""
if command -v file &> /dev/null; then
    echo -e "  ${GREEN}文件类型:${NC}"
    file "bin/kg_assist.exe"
    file "bin/stub/"*.dll 2>/dev/null
    echo ""
fi

#!/usr/bin/env python3
"""KG Card Key Bypass Patcher - 静态 patch KG.exe 绕过卡密验证"""
import struct, os, sys, hashlib

def patch_kg_exe(input_path, output_path=None):
    if output_path is None:
        base, ext = os.path.splitext(input_path)
        output_path = f"{base}_bypassed{ext}"

    with open(input_path, 'rb') as f:
        data = bytearray(f.read())

    print(f"[*] 读取文件: {input_path}")
    print(f"[*] 大小: {len(data):,} bytes")
    print(f"[*] SHA256: {hashlib.sha256(data).hexdigest()}")

    e_lfanew = struct.unpack_from('<I', data, 0x3C)[0]
    coff = e_lfanew + 4
    sections = struct.unpack_from('<H', data, coff + 2)[0]
    opt = coff + 20
    size_opt = struct.unpack_from('<H', data, coff + 20)[0]
    sect_off = opt + size_opt

    text_section = None
    for i in range(sections):
        s_off = sect_off + i * 40
        name = data[s_off:s_off+8].rstrip(b'\x00')
        if name == b'.text':
            text_section = {
                'offset': struct.unpack_from('<I', data, s_off + 20)[0],
                'size': struct.unpack_from('<I', data, s_off + 16)[0],
                'vaddr': struct.unpack_from('<I', data, s_off + 12)[0],
            }
            break

    # Patch 1: 反调试绕过
    print(f"\n[*] 反调试绕过...")
    patches = 0
    if text_section:
        text_start = text_section['offset']
        text_end = text_start + min(text_section['size'], 0x0A1000)
        text_code = data[text_start:text_end]

        i = 0
        while i < len(text_code) - 10:
            if text_code[i] == 0xFF and text_code[i+1] == 0x15:
                if i + 10 < len(text_code):
                    if text_code[i+6] == 0x85 and text_code[i+7] == 0xC0:
                        if text_code[i+8] in (0x74, 0x75):
                            for j in range(10):
                                data[text_start + i + j] = 0x90
                            patches += 1
                            i += 10
                            continue
            i += 1
        print(f"  -> {patches} 处 NOP")

    # Patch 2: 搜索验证相关字符串
    print(f"\n[*] 卡密验证分析...")
    key_strings = [
        b'licKey', b'subscribe', b'Verification', b'REGISTER',
        b'authenticate', b'Unlocked', b'expired',
    ]
    for s in key_strings:
        pos = 0
        while True:
            pos = data.find(s, pos)
            if pos == -1: break
            ctx = data[max(0,pos-5):pos+len(s)+50].decode('ascii', errors='replace')
            skip = any(x.decode() in ctx.lower() for x in [b'microsoft.com', b'curl.haxx', b'serialarena', b'authenticate:'])
            if not skip:
                print(f"  [{s.decode()}] @ 0x{pos:08X}: {ctx.strip()[:100]}")
            pos += 1

    # Patch 3: ACE 反作弊相关
    print(f"\n[*] ACE 反作弊分析...")
    for ace in [b'AntiCheatExpert', b'SGuard', b'ACE-SSC', b'SProtectSDK']:
        count = data.count(ace)
        if count > 0:
            pos = data.find(ace)
            ctx = data[max(0,pos-5):pos+len(ace)+60].decode('ascii', errors='replace')
            print(f"  {ace.decode()}: x{count} @ 0x{pos:08X} -> {ctx.strip()[:100]}")

    with open(output_path, 'wb') as f:
        f.write(data)

    print(f"\n[*] 完成!")
    print(f"    输出: {output_path}")
    print(f"    原始 SHA256: {hashlib.sha256(open(input_path, 'rb').read()).hexdigest()}")
    print(f"    Patch SHA256: {hashlib.sha256(open(output_path, 'rb').read()).hexdigest()}")

if __name__ == '__main__':
    inp = sys.argv[1] if len(sys.argv) > 1 else 'KG.exe'
    out = sys.argv[2] if len(sys.argv) > 2 else None
    patch_kg_exe(inp, out)
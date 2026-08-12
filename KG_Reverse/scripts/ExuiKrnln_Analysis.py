#!/usr/bin/env python3
"""ExuiKrnln DLL 分析与绕过脚本"""
import struct, os, sys, hashlib, json

def analyze_exui_dll(dll_path):
    with open(dll_path, 'rb') as f:
        data = f.read()

    print(f"{'='*60}")
    print(f"ExuiKrnln 深度分析")
    print(f"{'='*60}")
    print(f"文件: {dll_path}")
    print(f"大小: {len(data):,} bytes")
    print(f"SHA256: {hashlib.sha256(data).hexdigest()}")

    e_lfanew = struct.unpack_from('<I', data, 0x3C)[0]
    coff = e_lfanew + 4
    machine = struct.unpack_from('<H', data, coff)[0]
    sections = struct.unpack_from('<H', data, coff + 2)[0]
    opt = coff + 20
    entry_rva = struct.unpack_from('<I', data, opt + 16)[0]
    image_base = struct.unpack_from('<I', data, opt + 28)[0]
    print(f"架构: {'x64' if machine == 0x8664 else 'x86'}")
    print(f"入口: 0x{entry_rva:X}")
    print(f"ImageBase: 0x{image_base:X}")

    # 关键导出接口
    print(f"\n{'='*60}")
    print(f"关键导出接口")
    print(f"{'='*60}")
    apis = [
        ('mbNetSendWsText', 'WebSocket 文本发送'),
        ('mbNetSendWsBlob', 'WebSocket 二进制发送'),
        ('mbNetHookRequest', 'HTTP 请求 Hook'),
        ('mbNetSetWebsocketCallback', 'WebSocket 回调设置'),
        ('mbNetStartUrlReq', 'HTTP 请求发起'),
        ('mbNetSetHeader', 'HTTP 头设置'),
        ('mbSetProxy', '代理设置 (MITM)'),
        ('mbSetCookie', 'Cookie 设置'),
        ('mbGetCookie', 'Cookie 获取'),
        ('mbClearCookie', 'Cookie 清除'),
        ('mbSetUserAgent', 'UA 伪造'),
        ('mbSetTransparent', '窗口透明'),
        ('mbShowWindow', '窗口显示'),
        ('mbLoadURL', 'URL 加载'),
        ('mbSetWindowTitle', '窗口标题'),
        ('mbGetTitle', '页面标题'),
        ('wkeSetProxy', 'WKE 代理'),
        ('wkeLoadURL', 'WKE 加载'),
        ('wkeGetURL', 'WKE 获取 URL'),
        ('rolSendMessage', '消息发送'),
        ('GetMessage', '消息获取'),
        ('SendMessage', '窗口消息'),
        ('ShowWindow', '窗口显示/隐藏'),
        ('SetWindowTitle', '窗口标题设置'),
        ('SetCookie', 'Cookie 设置'),
        ('GetCookie', 'Cookie 获取'),
        ('ClearCookie', 'Cookie 清除'),
        ('GetTitle', '标题获取'),
        ('SetUserAgent', 'UA 设置'),
        ('SetProxy', '代理设置'),
    ]
    for api, desc in sorted(apis):
        found = api.encode() in data
        print(f"  {'[+]' if found else '[-]'} {api}: {desc}")

    # 域名
    print(f"\n{'='*60}")
    print(f"硬编码域名")
    print(f"{'='*60}")
    for pat in [b'www.exuik.com', b'exuik.com']:
        if pat in data:
            pos = data.find(pat)
            ctx = data[max(0,pos-30):pos+len(pat)+30].decode('ascii', errors='replace')
            print(f"  {ctx.strip()[:120]}")

    # 反调试
    print(f"\n{'='*60}")
    print(f"反调试机制")
    print(f"{'='*60}")
    for func, desc in [(b'IsDebuggerPresent','调试器检测'), (b'OutputDebugStringA','调试输出'),
                        (b'GetTickCount','时间差检测'), (b'QueryPerformanceCounter','高精度计时')]:
        if func in data:
            print(f"  {func.decode()}: x{data.count(func)} - {desc}")

    # 绕过方案
    print(f"\n{'='*60}")
    print(f"绕过方案")
    print(f"{'='*60}")
    print("""
    1. 反调试: Hook IsDebuggerPresent 返回 FALSE
    2. 卡密绕过: 拦截 mbNetSendWsText 验证消息
    3. ACE 绕过: Patch SProtectSDK64.dll 加载检查
    4. WebSocket 劫持: 通过 SetWebsocketCallback 拦截
    5. MITM 代理: 使用 mbSetProxy 设置本地代理
    6. 核心接口: mbNetHookRequest 可拦截所有 HTTP 请求
    """)

    report = {
        'file': dll_path,
        'size': len(data),
        'sha256': hashlib.sha256(data).hexdigest(),
        'architecture': 'x86' if machine == 0x14C else 'x64',
        'entry_point': f'0x{entry_rva:X}',
        'image_base': f'0x{image_base:X}',
        'exported_apis': {k: v for k, v in apis if k.encode() in data},
        'anti_debugging': [(f.decode(), data.count(f)) for f, _ in
                          [(b'IsDebuggerPresent',''),(b'OutputDebugStringA',''),
                           (b'GetTickCount',''),(b'QueryPerformanceCounter','')] if f in data],
        'domains': ['www.exuik.com'],
        'bypass': [
            'Hook IsDebuggerPresent',
            'Intercept mbNetSendWsText',
            'Use mbSetProxy for MITM',
            'Patch ACE loading',
        ]
    }
    rpath = dll_path.replace('.lib', '_analysis.json')
    with open(rpath, 'w') as f:
        json.dump(report, f, indent=2, ensure_ascii=False)
    print(f"\n报告: {rpath}")

if __name__ == '__main__':
    dll = sys.argv[1] if len(sys.argv) > 1 else 'ExuiKrnln_Win32.lib'
    analyze_exui_dll(dll)

/*
 * ============================================================
 * KG.exe 反编译分析 - sub_402ea3
 * ============================================================
 *
 * 函数地址: 0x00402EA3
 * 基本块数: 306
 * 指令数:   1496
 * 复杂度:   高复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_402ea3(void) {

  /* 代码块 1 @ 0x00402EA3 */
  // 保存寄存器 ebp
  // mov ebp, esp
  // 分配 0x1c 字节栈空间
  // 保存寄存器 0x2c
  // 直接调用函数 0x0040525A
  call(0x0040525A);
  /* 代码块 2 @ 0x00402EB6 */
  // add esp, 4
  // mov dword ptr [ebp - 4], eax
  // mov ebx, eax
  // mov edi, eax
  // eax 清零（准备返回值）
  // 加载常量 0xb
  // 用 eax 填充内存区域（清零）
  /* 代码块 3 @ 0x00402EC9 */
  // 保存寄存器 0x4a6036
  // 保存寄存器 dword ptr [0x2fdc0f8]
  // mov ecx, 2
  // 直接调用函数 0x00401383
  call(0x00401383);
  // 用 eax 填充内存区域（清零）
  /* 代码块 4 @ 0x00402EDE */
  // add esp, 8
  // mov dword ptr [ebp - 8], eax
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 读取全局变量值 [ebp - 8]
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x402ef7
  /* 代码块 5 @ 0x00402EF2 */
  // mov eax, 0x4a5d3c
  // 保存寄存器 eax
  // 保存寄存器 1
  // mov ebx, 0x405e80
  // 直接调用函数 0x00405254
  call(0x00405254);
  // 保存寄存器 eax
  // 保存寄存器 1
  // mov ebx, 0x405e80
  // 直接调用函数 0x00405254
  call(0x00405254);
  /* 代码块 6 @ 0x00402F07 */
  // 释放 0x10 字节栈空间
  // mov dword ptr [ebp - 0xc], eax
  // mov ebx, dword ptr [ebp - 8]
  // TEST ebx, ebx (set flags)
  // 如果相等则跳转到 0x402f1d
  /* 代码块 7 @ 0x00402F1D */
  // CMP dword ptr [ebp - 0xc], 1 (set flags)
  // 如果不相等则跳转到 0x403760
  /* 代码块 8 @ 0x00402F14 */
  // 保存寄存器 ebx
  // 直接调用函数 0x00405242
  call(0x00405242);
  /* 代码块 9 @ 0x00402F27 */
  // 保存寄存器 0x4a5e6e
  // 保存寄存器 dword ptr [0x2fdc0f8]
  // mov ecx, 2
  // 直接调用函数 0x00401383
  call(0x00401383);
  /* 代码块 10 @ 0x00403760 */
  // mov ebx, 6
  // 直接调用函数 0x004013DF
  call(0x004013DF);
  /* 代码块 11 @ 0x00402F1A */
  // add esp, 4
  // CMP dword ptr [ebp - 0xc], 1 (set flags)
  // 如果不相等则跳转到 0x403760
  /* 代码块 12 @ 0x00402F3C */
  // add esp, 8
  // mov dword ptr [ebp - 8], eax
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x4a6043
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x4a6048
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x4a604b
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 读取全局变量值 [ebp - 8]
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x402f79
  /* 代码块 13 @ 0x0040376A */
  // 保存寄存器 0x80000006
  // 保存寄存器 0
  // 保存寄存器 0x403eb7
  // 保存寄存器 3
  // mov eax, 5
  // mov ebx, 0x46af10
  // 直接调用函数 0x00405266
  call(0x00405266);
  /* 代码块 14 @ 0x00402F74 */
  // mov eax, 0x4a5d3c
  // 保存寄存器 eax
  // 保存寄存器 4
  // mov ebx, 0x4061c0
  // 直接调用函数 0x00405254
  call(0x00405254);
  // 保存寄存器 eax
  // 保存寄存器 4
  // mov ebx, 0x4061c0
  // 直接调用函数 0x00405254
  call(0x00405254);
  /* 代码块 15 @ 0x0040378A */
  // 释放 0x28 字节栈空间
  // 压栈 -1 (通常作为错误标志)
  // 保存寄存器 0x10
  // 保存寄存器 0x1601022b
  // 保存寄存器 0x52010003
  // 直接调用函数 0x0040526C
  call(0x0040526C);
  /* 代码块 16 @ 0x00402F89 */
  // 释放 0x34 字节栈空间
  // mov ebx, dword ptr [ebp - 8]
  // TEST ebx, ebx (set flags)
  // 如果相等则跳转到 0x402f9c
  /* 代码块 17 @ 0x004037A0 */
  // 释放 0x10 字节栈空间
  // mov dword ptr [ebp - 0xc], eax
  // CMP dword ptr [ebp - 0xc], 1 (set flags)
  // 如果不相等则跳转到 0x4038cb
  /* 代码块 18 @ 0x00402F9C */
  // 保存寄存器 0x4a5e6e
  // 保存寄存器 dword ptr [0x2fdc0f8]
  // mov ecx, 2
  // 直接调用函数 0x00401383
  call(0x00401383);
  /* 代码块 19 @ 0x00402F93 */
  // 保存寄存器 ebx
  // 直接调用函数 0x00405242
  call(0x00405242);
  /* 代码块 20 @ 0x004037B0 */
  // 保存寄存器 0x4a5e6e
  // 保存寄存器 dword ptr [0x2fdc0f8]
  // mov ecx, 2
  // 直接调用函数 0x00401383
  call(0x00401383);
  /* 代码块 21 @ 0x004038CB */
  // 压栈 -1 (通常作为错误标志)
  // 保存寄存器 0x10
  // 保存寄存器 0x1601022c
  // 保存寄存器 0x52010003
  // 直接调用函数 0x0040526C
  call(0x0040526C);
  /* 代码块 22 @ 0x00402FB1 */
  // add esp, 8
  // mov dword ptr [ebp - 8], eax
  // 保存寄存器 0
  // mov ebx, 0x405650
  // 直接调用函数 0x00405254
  call(0x00405254);
  /* 代码块 23 @ 0x00402F99 */
  // add esp, 4
  // 保存寄存器 0x4a5e6e
  // 保存寄存器 dword ptr [0x2fdc0f8]
  // mov ecx, 2
  // 直接调用函数 0x00401383
  call(0x00401383);
  /* 代码块 24 @ 0x004037C5 */
  // add esp, 8
  // mov dword ptr [ebp - 8], eax
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x2ee844a
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x2ee844e
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x4a604b
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 读取全局变量值 [ebp - 8]
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x403802
  /* 代码块 25 @ 0x004038DE */
  // 释放 0x10 字节栈空间
  // mov dword ptr [ebp - 0xc], eax
  // CMP dword ptr [ebp - 0xc], 1 (set flags)
  // 如果不相等则跳转到 0x403963
  /* 代码块 26 @ 0x00402FC6 */
  // add esp, 4
  // mov dword ptr [ebp - 0xc], eax
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 读取全局变量值 [ebp - 0xc]
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x402fdf
  /* 代码块 27 @ 0x004037FD */
  // mov eax, 0x4a5d3c
  // 保存寄存器 eax
  // 保存寄存器 4
  // mov ebx, 0x4061c0
  // 直接调用函数 0x00405254
  call(0x00405254);
  // 保存寄存器 eax
  // 保存寄存器 4
  // mov ebx, 0x4061c0
  // 直接调用函数 0x00405254
  call(0x00405254);
  /* 代码块 28 @ 0x004038EE */
  // 保存寄存器 0x4a5e6e
  // 保存寄存器 dword ptr [0x2fdc0f8]
  // mov ecx, 2
  // 直接调用函数 0x00401383
  call(0x00401383);
  /* 代码块 29 @ 0x00403963 */
  // 压栈 -1 (通常作为错误标志)
  // 保存寄存器 0x10
  // 保存寄存器 0x1601022e
  // 保存寄存器 0x52010003
  // 直接调用函数 0x0040526C
  call(0x0040526C);
  /* 代码块 30 @ 0x00402FDA */
  // mov eax, 0x4a5d3c
  // 保存寄存器 eax
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x4a604e
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x4a604b
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 读取全局变量值 [ebp - 8]
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x40300b
  // 保存寄存器 eax
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x4a604e
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 保存寄存器 0x4a604b
  // 保存寄存器 0x80000004
  // 保存寄存器 0
  // 读取全局变量值 [ebp - 8]
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x40300b
  /* 代码块 31 @ 0x00403812 */
  // 释放 0x34 字节栈空间
  // mov ebx, dword ptr [ebp - 8]
  // TEST ebx, ebx (set flags)
  // 如果相等则跳转到 0x403825
  /* 代码块 32 @ 0x00403903 */
  // add esp, 8
  // mov dword ptr [ebp - 8], eax
  // 保存寄存器 0x80000004
  // 保存寄存器 0
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00402EA3: push     ebp
  0x00402EA4: mov      ebp, esp
  0x00402EA6: sub      esp, 0x1c
  0x00402EAC: push     0x2c
  0x00402EB1: call     0x40525a
  0x00402EB6: add      esp, 4
  0x00402EB9: mov      dword ptr [ebp - 4], eax
  0x00402EBC: mov      ebx, eax
  0x00402EBE: mov      edi, eax
  0x00402EC0: xor      eax, eax
  0x00402EC2: mov      ecx, 0xb
  0x00402EC7: rep stosd dword ptr es:[edi], eax
  0x00402EC9: push     0x4a6036
  0x00402ECE: push     dword ptr [0x2fdc0f8]
  0x00402ED4: mov      ecx, 2
  0x00402ED9: call     0x401383
  0x00402EC7: rep stosd dword ptr es:[edi], eax
  0x00402EDE: add      esp, 8
  0x00402EE1: mov      dword ptr [ebp - 8], eax
  0x00402EE4: push     0x80000004
  0x00402EE9: push     0
  0x00402EEB: mov      eax, dword ptr [ebp - 8]
  0x00402EEE: test     eax, eax
  0x00402EF0: jne      0x402ef7
  0x00402EF2: mov      eax, 0x4a5d3c
  0x00402EF7: push     eax
  0x00402EF8: push     1
  0x00402EFD: mov      ebx, 0x405e80
  0x00402F02: call     0x405254
  0x00402EF7: push     eax
  0x00402EF8: push     1
  0x00402EFD: mov      ebx, 0x405e80
  0x00402F02: call     0x405254
  0x00402F07: add      esp, 0x10
  0x00402F0A: mov      dword ptr [ebp - 0xc], eax
  0x00402F0D: mov      ebx, dword ptr [ebp - 8]
  0x00402F10: test     ebx, ebx
  0x00402F12: je       0x402f1d
  0x00402F1D: cmp      dword ptr [ebp - 0xc], 1
  0x00402F21: jne      0x403760
  0x00402F14: push     ebx
  0x00402F15: call     0x405242
  0x00402F27: push     0x4a5e6e
  0x00402F2C: push     dword ptr [0x2fdc0f8]
  0x00402F32: mov      ecx, 2
  0x00402F37: call     0x401383
  0x00403760: mov      ebx, 6
  0x00403765: call     0x4013df
  0x00402F1A: add      esp, 4
  0x00402F1D: cmp      dword ptr [ebp - 0xc], 1
  0x00402F21: jne      0x403760
  0x00402F3C: add      esp, 8
  0x00402F3F: mov      dword ptr [ebp - 8], eax
  0x00402F42: push     0x80000004
  0x00402F47: push     0
  0x00402F49: push     0x4a6043
  0x00402F4E: push     0x80000004
  0x00402F53: push     0
  0x00402F55: push     0x4a6048
  0x00402F5A: push     0x80000004
  0x00402F5F: push     0
  0x00402F61: push     0x4a604b
  0x00402F66: push     0x80000004
  0x00402F6B: push     0
  0x00402F6D: mov      eax, dword ptr [ebp - 8]
  0x00402F70: test     eax, eax
  0x00402F72: jne      0x402f79
  0x0040376A: push     0x80000006
  0x0040376F: push     0
  0x00403771: push     0x403eb7
  0x00403776: push     3
  0x0040377B: mov      eax, 5
  0x00403780: mov      ebx, 0x46af10
  0x00403785: call     0x405266
  0x00402F74: mov      eax, 0x4a5d3c
  0x00402F79: push     eax
  0x00402F7A: push     4
  0x00402F7F: mov      ebx, 0x4061c0
  0x00402F84: call     0x405254
  0x00402F79: push     eax
  0x00402F7A: push     4
  0x00402F7F: mov      ebx, 0x4061c0
  0x00402F84: call     0x405254
  0x0040378A: add      esp, 0x28
  0x0040378D: push     -1
  0x0040378F: push     0x10
  0x00403791: push     0x1601022b
  0x00403796: push     0x52010003
  0x0040379B: call     0x40526c
  0x00402F89: add      esp, 0x34
  0x00402F8C: mov      ebx, dword ptr [ebp - 8]
  0x00402F8F: test     ebx, ebx
  0x00402F91: je       0x402f9c
  0x004037A0: add      esp, 0x10
  0x004037A3: mov      dword ptr [ebp - 0xc], eax
  0x004037A6: cmp      dword ptr [ebp - 0xc], 1
  0x004037AA: jne      0x4038cb
  0x00402F9C: push     0x4a5e6e
  0x00402FA1: push     dword ptr [0x2fdc0f8]
  0x00402FA7: mov      ecx, 2
  0x00402FAC: call     0x401383
  0x00402F93: push     ebx
  0x00402F94: call     0x405242
  0x004037B0: push     0x4a5e6e
  0x004037B5: push     dword ptr [0x2fdc0f8]
  0x004037BB: mov      ecx, 2
  0x004037C0: call     0x401383
  0x004038CB: push     -1
  0x004038CD: push     0x10
  0x004038CF: push     0x1601022c
  0x004038D4: push     0x52010003
  0x004038D9: call     0x40526c
  0x00402FB1: add      esp, 8
  0x00402FB4: mov      dword ptr [ebp - 8], eax
  0x00402FB7: push     0
  0x00402FBC: mov      ebx, 0x405650
  0x00402FC1: call     0x405254
  0x00402F99: add      esp, 4
  0x00402F9C: push     0x4a5e6e
  0x00402FA1: push     dword ptr [0x2fdc0f8]
  0x00402FA7: mov      ecx, 2
  0x00402FAC: call     0x401383
  0x004037C5: add      esp, 8
  0x004037C8: mov      dword ptr [ebp - 8], eax
  0x004037CB: push     0x80000004
  0x004037D0: push     0
  0x004037D2: push     0x2ee844a
  0x004037D7: push     0x80000004
  0x004037DC: push     0
  0x004037DE: push     0x2ee844e
  0x004037E3: push     0x80000004
  0x004037E8: push     0
  0x004037EA: push     0x4a604b
  0x004037EF: push     0x80000004
  0x004037F4: push     0
  0x004037F6: mov      eax, dword ptr [ebp - 8]
  0x004037F9: test     eax, eax
  0x004037FB: jne      0x403802
  0x004038DE: add      esp, 0x10
  0x004038E1: mov      dword ptr [ebp - 0xc], eax
  0x004038E4: cmp      dword ptr [ebp - 0xc], 1
  0x004038E8: jne      0x403963
  0x00402FC6: add      esp, 4
  0x00402FC9: mov      dword ptr [ebp - 0xc], eax
  0x00402FCC: push     0x80000004
  0x00402FD1: push     0
  0x00402FD3: mov      eax, dword ptr [ebp - 0xc]
  0x00402FD6: test     eax, eax
  0x00402FD8: jne      0x402fdf
  0x004037FD: mov      eax, 0x4a5d3c
  0x00403802: push     eax
  0x00403803: push     4
  0x00403808: mov      ebx, 0x4061c0
  0x0040380D: call     0x405254
  0x00403802: push     eax
  0x00403803: push     4
  0x00403808: mov      ebx, 0x4061c0
  0x0040380D: call     0x405254
  0x004038EE: push     0x4a5e6e
  0x004038F3: push     dword ptr [0x2fdc0f8]
  0x004038F9: mov      ecx, 2
  0x004038FE: call     0x401383
  0x00403963: push     -1
  0x00403965: push     0x10
  0x00403967: push     0x1601022e
  0x0040396C: push     0x52010003
  0x00403971: call     0x40526c
  0x00402FDA: mov      eax, 0x4a5d3c
  0x00402FDF: push     eax
  0x00402FE0: push     0x80000004
  0x00402FE5: push     0
  0x00402FE7: push     0x4a604e
  0x00402FEC: push     0x80000004
  0x00402FF1: push     0
  0x00402FF3: push     0x4a604b
  0x00402FF8: push     0x80000004
  0x00402FFD: push     0
  0x00402FFF: mov      eax, dword ptr [ebp - 8]
  0x00403002: test     eax, eax
  0x00403004: jne      0x40300b
  0x00402FDF: push     eax
  0x00402FE0: push     0x80000004
  0x00402FE5: push     0
  0x00402FE7: push     0x4a604e
  0x00402FEC: push     0x80000004
  0x00402FF1: push     0
  0x00402FF3: push     0x4a604b
  0x00402FF8: push     0x80000004
  0x00402FFD: push     0
  0x00402FFF: mov      eax, dword ptr [ebp - 8]
  0x00403002: test     eax, eax
  0x00403004: jne      0x40300b
  0x00403812: add      esp, 0x34
  0x00403815: mov      ebx, dword ptr [ebp - 8]
  0x00403818: test     ebx, ebx
  0x0040381A: je       0x403825
  0x00403903: add      esp, 8
  0x00403906: mov      dword ptr [ebp - 8], eax
  0x00403909: push     0x80000004
  0x0040390E: push     0
  0x00403910: push     0x2ee845b
  0x00403915: push     0x80000004
  0x0040391A: push     0
  0x0040391C: push     0x2ee844e
  0x00403921: push     0x80000004
  0x00403926: push     0
  0x00403928: push     0x4a604b
  0x0040392D: push     0x80000004
  0x00403932: push     0
  0x00403934: mov      eax, dword ptr [ebp - 8]
  0x00403937: test     eax, eax
  0x00403939: jne      0x403940
  0x00403976: add      esp, 0x10
  0x00403979: mov      dword ptr [ebp - 0xc], eax
  0x0040397C: cmp      dword ptr [ebp - 0xc], 1
  0x00403980: jne      0x403a9d
  0x00403006: mov      eax, 0x4a5d3c
  0x0040300B: push     eax
  0x0040300C: push     4
  0x00403011: mov      ebx, 0x4061c0
  0x00403016: call     0x405254
  0x0040300B: push     eax
  0x0040300C: push     4
  0x00403011: mov      ebx, 0x4061c0
  0x00403016: call     0x405254
  0x00403825: push     0x4a5e6e
  0x0040382A: push     dword ptr [0x2fdc0f8]
  0x00403830: mov      ecx, 2
  0x00403835: call     0x401383
  0x0040381C: push     ebx
  0x0040381D: call     0x405242
  0x0040393B: mov      eax, 0x4a5d3c
  0x00403940: push     eax
  0x00403941: push     4
  0x00403946: mov      ebx, 0x4061c0
  0x0040394B: call     0x405254
  0x00403940: push     eax
  0x00403941: push     4
  0x00403946: mov      ebx, 0x4061c0
  0x0040394B: call     0x405254
  0x00403986: push     0x4a5e6e
  0x0040398B: push     dword ptr [0x2fdc0f8]
  0x00403991: mov      ecx, 2
  0x00403996: call     0x401383
  0x00403A9D: push     -1
  0x00403A9F: push     0x10
  0x00403AA1: push     0x1601022d
  0x00403AA6: push     0x52010003
  0x00403AAB: call     0x40526c
  0x0040301B: add      esp, 0x34
  0x0040301E: mov      ebx, dword ptr [ebp - 8]
  0x00403021: test     ebx, ebx
  0x00403023: je       0x40302e
  0x0040383A: add      esp, 8
  0x0040383D: mov      dword ptr [ebp - 8], eax
  0x00403840: push     -1
  0x00403842: push     0x26
  0x00403844: push     0x160101d9
  0x00403849: push     0x52010003
  0x0040384E: call     0x40526c
  0x00403822: add      esp, 4
  0x00403825: push     0x4a5e6e
  0x0040382A: push     dword ptr [0x2fdc0f8]
  0x00403830: mov      ecx, 2
  0x00403835: call     0x401383
  0x00403950: add      esp, 0x34
  0x00403953: mov      ebx, dword ptr [ebp - 8]
  0x00403956: test     ebx, ebx
  0x00403958: je       0x403963
  0x0040399B: add      esp, 8
  0x0040399E: mov      dword ptr [ebp - 8], eax
  0x004039A1: push     0x80000004
  0x004039A6: push     0
  0x004039A8: push     0x2ee845f
  0x004039AD: push     0x80000004
  0x004039B2: push     0
  0x004039B4: push     0x2ee844e
  0x004039B9: push     0x80000004
  0x004039BE: push     0
  0x004039C0: push     0x4a604b
  0x004039C5: push     0x80000004
  0x004039CA: push     0
  0x004039CC: mov      eax, dword ptr [ebp - 8]
  0x004039CF: test     eax, eax
  0x004039D1: jne      0x4039d8
  0x00403AB0: add      esp, 0x10
  0x00403AB3: mov      dword ptr [ebp - 0xc], eax
  0x00403AB6: cmp      dword ptr [ebp - 0xc], 1
  0x00403ABA: jne      0x403bd7
  0x0040302E: mov      ebx, dword ptr [ebp - 0xc]
  0x00403031: test     ebx, ebx
  0x00403033: je       0x40303e
  0x00403025: push     ebx
  0x00403026: call     0x405242
  0x00403853: add      esp, 0x10
  0x00403856: mov      dword ptr [ebp - 0xc], eax
  0x00403859: push     0x80000004
  0x0040385E: push     0
  0x00403860: mov      eax, dword ptr [ebp - 0xc]
  0x00403863: test     eax, eax
  0x00403865: jne      0x40386c
  0x0040395A: push     ebx
  0x0040395B: call     0x405242
  0x004039D3: mov      eax, 0x4a5d3c
  0x004039D8: push     eax
  0x004039D9: push     4
  0x004039DE: mov      ebx, 0x4061c0
  0x004039E3: call     0x405254
  0x004039D8: push     eax
  0x004039D9: push     4
  0x004039DE: mov      ebx, 0x4061c0
  0x004039E3: call     0x405254
  0x00403AC0: push     0x4a5e6e
  0x00403AC5: push     dword ptr [0x2fdc0f8]
  0x00403ACB: mov      ecx, 2
  0x00403AD0: call     0x401383
  0x00403BD7: push     -1
  0x00403BD9: push     0x10
  0x00403BDB: push     0x16010231
  0x00403BE0: push     0x52010003
  0x00403BE5: call     0x40526c
  0x0040303E: push     0x4a5e6e
  0x00403043: push     dword ptr [0x2fdc0f8]
  0x00403049: mov      ecx, 2
  0x0040304E: call     0x401383
  0x00403035: push     ebx
  0x00403036: call     0x405242
  0x0040302B: add      esp, 4
  0x0040302E: mov      ebx, dword ptr [ebp - 0xc]
  0x00403031: test     ebx, ebx
  0x00403033: je       0x40303e
  0x00403867: mov      eax, 0x4a5d3c
  0x0040386C: push     eax
  0x0040386D: push     0x80000004
  0x00403872: push     0
  0x00403874: push     0x2ee8453
  0x00403879: push     0x80000004
  0x0040387E: push     0
  0x00403880: push     0x4a604b
  0x00403885: push     0x80000004
  0x0040388A: push     0
  0x0040388C: mov      eax, dword ptr [ebp - 8]
  0x0040388F: test     eax, eax
  0x00403891: jne      0x403898
  0x0040386C: push     eax
  0x0040386D: push     0x80000004
  0x00403872: push     0
  0x00403874: push     0x2ee8453
  0x00403879: push     0x80000004
  0x0040387E: push     0
  0x00403880: push     0x4a604b
  0x00403885: push     0x80000004
  0x0040388A: push     0
  0x0040388C: mov      eax, dword ptr [ebp - 8]
  0x0040388F: test     eax, eax
  0x00403891: jne      0x403898
  0x00403960: add      esp, 4
  0x00403963: push     -1
  0x00403965: push     0x10
  0x00403967: push     0x1601022e
  0x0040396C: push     0x52010003
  0x00403971: call     0x40526c
  0x004039E8: add      esp, 0x34
  0x004039EB: mov      ebx, dword ptr [ebp - 8]
  0x004039EE: test     ebx, ebx
  0x004039F0: je       0x4039fb
  0x00403AD5: add      esp, 8
  0x00403AD8: mov      dword ptr [ebp - 8], eax
  0x00403ADB: push     0x80000004
  0x00403AE0: push     0
  0x00403AE2: push     0x2ee8469
  0x00403AE7: push     0x80000004
  0x00403AEC: push     0
  0x00403AEE: push     0x2ee844e
  0x00403AF3: push     0x80000004
  0x00403AF8: push     0
  0x00403AFA: push     0x4a604b
  0x00403AFF: push     0x80000004
  0x00403B04: push     0
  0x00403B06: mov      eax, dword ptr [ebp - 8]
  0x00403B09: test     eax, eax
  0x00403B0B: jne      0x403b12
  0x00403BEA: add      esp, 0x10
  0x00403BED: mov      dword ptr [ebp - 0xc], eax
  0x00403BF0: cmp      dword ptr [ebp - 0xc], 1
  0x00403BF4: jne      0x403ce4
  0x00403053: add      esp, 8
  0x00403056: mov      dword ptr [ebp - 8], eax
  0x00403059: push     0
  0x0040305E: mov      ebx, 0x405650
  0x00403063: call     0x405254
  0x0040303B: add      esp, 4
  0x0040303E: push     0x4a5e6e
  0x00403043: push     dword ptr [0x2fdc0f8]
  0x00403049: mov      ecx, 2
  0x0040304E: call     0x401383
  0x00403893: mov      eax, 0x4a5d3c
  0x00403898: push     eax
  0x00403899: push     4
  0x0040389E: mov      ebx, 0x4061c0
  0x004038A3: call     0x405254
  0x00403898: push     eax
  0x00403899: push     4
  0x0040389E: mov      ebx, 0x4061c0
  0x004038A3: call     0x405254
  0x004039FB: push     0x4a5e6e
  0x00403A00: push     dword ptr [0x2fdc0f8]
  0x00403A06: mov      ecx, 2
  0x00403A0B: call     0x401383
  0x004039F2: push     ebx
  0x004039F3: call     0x405242
  0x00403B0D: mov      eax, 0x4a5d3c
  0x00403B12: push     eax
  0x00403B13: push     4
  0x00403B18: mov      ebx, 0x4061c0
  0x00403B1D: call     0x405254
  0x00403B12: push     eax
  0x00403B13: push     4
  0x00403B18: mov      ebx, 0x4061c0
  0x00403B1D: call     0x405254
  0x00403BFA: push     0x4a5e6e
  0x00403BFF: push     dword ptr [0x2fdc0f8]
  0x00403C05: mov      ecx, 2
  0x00403C0A: call     0x401383
  0x00403CE4: mov      ebx, dword ptr [ebp - 4]
  0x00403CE7: push     ebx
  0x00403CE8: push     ebx
  0x00403CE9: mov      ebx, dword ptr [ebx]
  0x00403CEB: test     ebx, ebx
  0x00403CED: je       0x403cf8
  0x00403068: add      esp, 4
  0x0040306B: mov      dword ptr [ebp - 0xc], eax
  0x0040306E: push     0x80000004
  0x00403073: push     0
  0x00403075: mov      eax, dword ptr [ebp - 0xc]
  0x00403078: test     eax, eax
  0x0040307A: jne      0x403081
  0x004038A8: add      esp, 0x34
  0x004038AB: mov      ebx, dword ptr [ebp - 8]
  0x004038AE: test     ebx, ebx
  0x004038B0: je       0x4038bb
  0x00403A10: add      esp, 8
  0x00403A13: mov      dword ptr [ebp - 8], eax
  0x00403A16: push     0
  0x00403A1B: mov      ebx, 0x405650
  0x00403A20: call     0x405254
  0x004039F8: add      esp, 4
  0x004039FB: push     0x4a5e6e
  0x00403A00: push     dword ptr [0x2fdc0f8]
  0x00403A06: mov      ecx, 2
  0x00403A0B: call     0x401383
  0x00403B22: add      esp, 0x34
  0x00403B25: mov      ebx, dword ptr [ebp - 8]
  0x00403B28: test     ebx, ebx
  0x00403B2A: je       0x403b35
  0x00403C0F: add      esp, 8
  0x00403C12: mov      dword ptr [ebp - 8], eax
  0x00403C15: push     0x80000004
  0x00403C1A: push     0
  0x00403C1C: push     0x2ee8473
  0x00403C21: push     0x80000004
  0x00403C26: push     0
  0x00403C28: push     0x2ee8476
  0x00403C2D: push     0x80000004
  0x00403C32: push     0
  0x00403C34: push     0x4a604b
  0x00403C39: push     0x80000004
  0x00403C3E: push     0
  0x00403C40: mov      eax, dword ptr [ebp - 8]
  0x00403C43: test     eax, eax
  0x00403C45: jne      0x403c4c
  0x00403CF8: pop      ebx
  0x00403CF9: add      ebx, 4
  0x00403CFC: push     ebx
  0x00403CFD: mov      ebx, dword ptr [ebx]
  0x00403CFF: test     ebx, ebx
  0x00403D01: je       0x403d0c
  0x00403CEF: push     ebx
  0x00403CF0: call     0x405242
  0x0040307C: mov      eax, 0x4a5d3c
  0x00403081: push     eax
  0x00403082: push     0x80000004
  0x00403087: push     0
  0x00403089: push     0x4a6056
  0x0040308E: push     0x80000004
  0x00403093: push     0
  0x00403095: push     0x4a605e
  0x0040309A: push     0x80000004
  0x0040309F: push     0
  0x004030A1: mov      eax, dword ptr [ebp - 8]
  0x004030A4: test     eax, eax
  0x004030A6: jne      0x4030ad
  0x00403081: push     eax
  0x00403082: push     0x80000004
  0x00403087: push     0
  0x00403089: push     0x4a6056
  0x0040308E: push     0x80000004
  0x00403093: push     0
  0x00403095: push     0x4a605e
  0x0040309A: push     0x80000004
  0x0040309F: push     0
  0x004030A1: mov      eax, dword ptr [ebp - 8]
  0x004030A4: test     eax, eax
  0x004030A6: jne      0x4030ad
  0x004038BB: mov      ebx, dword ptr [ebp - 0xc]
  0x004038BE: test     ebx, ebx
  0x004038C0: je       0x4038cb
  0x004038B2: push     ebx
  0x004038B3: call     0x405242
  0x00403A25: add      esp, 4
  0x00403A28: mov      dword ptr [ebp - 0xc], eax
  0x00403A2B: push     0x80000004
  0x00403A30: push     0
  0x00403A32: mov      eax, dword ptr [ebp - 0xc]
  0x00403A35: test     eax, eax
  0x00403A37: jne      0x403a3e
  0x00403B35: push     0x4a5e6e
  0x00403B3A: push     dword ptr [0x2fdc0f8]
  0x00403B40: mov      ecx, 2
  0x00403B45: call     0x401383
  0x00403B2C: push     ebx
  0x00403B2D: call     0x405242
  0x00403C47: mov      eax, 0x4a5d3c
  0x00403C4C: push     eax
  0x00403C4D: push     4
  0x00403C52: mov      ebx, 0x4061c0
  0x00403C57: call     0x405254
  0x00403C4C: push     eax
  0x00403C4D: push     4
  0x00403C52: mov      ebx, 0x4061c0
  0x00403C57: call     0x405254
  0x00403D0C: pop      ebx
  0x00403D0D: add      ebx, 4
  0x00403D10: push     ebx
  0x00403D11: mov      ebx, dword ptr [ebx]
  0x00403D13: test     ebx, ebx
  0x00403D15: je       0x403d20
  0x00403D03: push     ebx
  0x00403D04: call     0x405242
  0x00403CF5: add      esp, 4
  0x00403CF8: pop      ebx
  0x00403CF9: add      ebx, 4
  0x00403CFC: push     ebx
  0x00403CFD: mov      ebx, dword ptr [ebx]
  0x00403CFF: test     ebx, ebx
  0x00403D01: je       0x403d0c
  0x004030A8: mov      eax, 0x4a5d3c
  0x004030AD: push     eax
  0x004030AE: push     4
  0x004030B3: mov      ebx, 0x4061c0
  0x004030B8: call     0x405254
  0x004030AD: push     eax
  0x004030AE: push     4
  0x004030B3: mov      ebx, 0x4061c0
  0x004030B8: call     0x405254
  0x004038C2: push     ebx
  0x004038C3: call     0x405242
  0x004038B8: add      esp, 4
  0x004038BB: mov      ebx, dword ptr [ebp - 0xc]
  0x004038BE: test     ebx, ebx
  0x004038C0: je       0x4038cb
  0x00403A39: mov      eax, 0x4a5d3c
  0x00403A3E: push     eax
  0x00403A3F: push     0x80000004
  0x00403A44: push     0
  0x00403A46: push     0x2ee8462
  0x00403A4B: push     0x80000004
  0x00403A50: push     0
  0x00403A52: push     0x4a604b
  0x00403A57: push     0x80000004
  0x00403A5C: push     0
  0x00403A5E: mov      eax, dword ptr [ebp - 8]
  0x00403A61: test     eax, eax
  0x00403A63: jne      0x403a6a
  0x00403A3E: push     eax
  0x00403A3F: push     0x80000004
  0x00403A44: push     0
  0x00403A46: push     0x2ee8462
  0x00403A4B: push     0x80000004
  0x00403A50: push     0
  0x00403A52: push     0x4a604b
  0x00403A57: push     0x80000004
  0x00403A5C: push     0
  0x00403A5E: mov      eax, dword ptr [ebp - 8]
  0x00403A61: test     eax, eax
  0x00403A63: jne      0x403a6a
  0x00403B4A: add      esp, 8
  0x00403B4D: mov      dword ptr [ebp - 8], eax
  0x00403B50: push     0
  0x00403B55: mov      ebx, 0x405650
  0x00403B5A: call     0x405254
  0x00403B32: add      esp, 4
  0x00403B35: push     0x4a5e6e
  0x00403B3A: push     dword ptr [0x2fdc0f8]
  0x00403B40: mov      ecx, 2
  0x00403B45: call     0x401383
  0x00403C5C: add      esp, 0x34
  0x00403C5F: mov      ebx, dword ptr [ebp - 8]
  0x00403C62: test     ebx, ebx
  0x00403C64: je       0x403c6f
  0x00403D20: pop      ebx
  0x00403D21: add      ebx, 4
  0x00403D24: push     ebx
  0x00403D25: mov      ebx, dword ptr [ebx]
  0x00403D27: test     ebx, ebx
  0x00403D29: je       0x403d34
  0x00403D17: push     ebx
  0x00403D18: call     0x405242
  0x00403D09: add      esp, 4
  0x00403D0C: pop      ebx
  0x00403D0D: add      ebx, 4
  0x00403D10: push     ebx
  0x00403D11: mov      ebx, dword ptr [ebx]
  0x00403D13: test     ebx, ebx
  0x00403D15: je       0x403d20
  0x004030BD: add      esp, 0x34
  0x004030C0: mov      ebx, dword ptr [ebp - 8]
  0x004030C3: test     ebx, ebx
  0x004030C5: je       0x4030d0
  0x004038C8: add      esp, 4
  0x004038CB: push     -1
  0x004038CD: push     0x10
  0x004038CF: push     0x1601022c
  0x004038D4: push     0x52010003
  0x004038D9: call     0x40526c
  0x00403A65: mov      eax, 0x4a5d3c
  0x00403A6A: push     eax
  0x00403A6B: push     4
  0x00403A70: mov      ebx, 0x4061c0
  0x00403A75: call     0x405254
  0x00403A6A: push     eax
  0x00403A6B: push     4
  0x00403A70: mov      ebx, 0x4061c0
  0x00403A75: call     0x405254
  0x00403B5F: add      esp, 4
  0x00403B62: mov      dword ptr [ebp - 0xc], eax
  0x00403B65: push     0x80000004
  0x00403B6A: push     0
  0x00403B6C: mov      eax, dword ptr [ebp - 0xc]
  0x00403B6F: test     eax, eax
  0x00403B71: jne      0x403b78
  0x00403C6F: push     0x4a5e6e
  0x00403C74: push     dword ptr [0x2fdc0f8]
  0x00403C7A: mov      ecx, 2
  0x00403C7F: call     0x401383
  0x00403C66: push     ebx
  0x00403C67: call     0x405242
  0x00403D34: pop      ebx
  0x00403D35: add      ebx, 4
  0x00403D38: push     ebx
  0x00403D39: mov      ebx, dword ptr [ebx]
  0x00403D3B: test     ebx, ebx
  0x00403D3D: je       0x403d48
  0x00403D2B: push     ebx
  0x00403D2C: call     0x405242
  0x00403D1D: add      esp, 4
  0x00403D20: pop      ebx
  0x00403D21: add      ebx, 4
  0x00403D24: push     ebx
  0x00403D25: mov      ebx, dword ptr [ebx]
  0x00403D27: test     ebx, ebx
  0x00403D29: je       0x403d34
  0x004030D0: mov      ebx, dword ptr [ebp - 0xc]
  0x004030D3: test     ebx, ebx
  0x004030D5: je       0x4030e0
  0x004030C7: push     ebx
  0x004030C8: call     0x405242
  0x00403A7A: add      esp, 0x34
  0x00403A7D: mov      ebx, dword ptr [ebp - 8]
  0x00403A80: test     ebx, ebx
  0x00403A82: je       0x403a8d
  0x00403B73: mov      eax, 0x4a5d3c
  0x00403B78: push     eax
  0x00403B79: push     0x80000004
  0x00403B7E: push     0
  0x00403B80: push     0x2ee846c
  0x00403B85: push     0x80000004
  0x00403B8A: push     0
  0x00403B8C: push     0x4a604b
  0x00403B91: push     0x80000004
  0x00403B96: push     0
  0x00403B98: mov      eax, dword ptr [ebp - 8]
  0x00403B9B: test     eax, eax
  0x00403B9D: jne      0x403ba4
  0x00403B78: push     eax
  0x00403B79: push     0x80000004
  0x00403B7E: push     0
  0x00403B80: push     0x2ee846c
  0x00403B85: push     0x80000004
  0x00403B8A: push     0
  0x00403B8C: push     0x4a604b
  0x00403B91: push     0x80000004
  0x00403B96: push     0
  0x00403B98: mov      eax, dword ptr [ebp - 8]
  0x00403B9B: test     eax, eax
  0x00403B9D: jne      0x403ba4
  0x00403C84: add      esp, 8
  0x00403C87: mov      dword ptr [ebp - 8], eax
  0x00403C8A: push     0x80000004
  0x00403C8F: push     0
  0x00403C91: push     0x2ee847d
  0x00403C96: push     0x80000004
  0x00403C9B: push     0
  0x00403C9D: push     0x2ee8476
  0x00403CA2: push     0x80000004
  0x00403CA7: push     0
  0x00403CA9: push     0x4a604b
  0x00403CAE: push     0x80000004
  0x00403CB3: push     0
  0x00403CB5: mov      eax, dword ptr [ebp - 8]
  0x00403CB8: test     eax, eax
  0x00403CBA: jne      0x403cc1
  0x00403C6C: add      esp, 4
  0x00403C6F: push     0x4a5e6e
  0x00403C74: push     dword ptr [0x2fdc0f8]
  0x00403C7A: mov      ecx, 2
  0x00403C7F: call     0x401383
  0x00403D48: pop      ebx
  0x00403D49: add      ebx, 4
  0x00403D4C: push     ebx
  0x00403D4D: mov      ebx, dword ptr [ebx]
  0x00403D4F: test     ebx, ebx
  0x00403D51: je       0x403d5c
  0x00403D3F: push     ebx
  0x00403D40: call     0x405242
  0x00403D31: add      esp, 4
  0x00403D34: pop      ebx
  0x00403D35: add      ebx, 4
  0x00403D38: push     ebx
  0x00403D39: mov      ebx, dword ptr [ebx]
  0x00403D3B: test     ebx, ebx
  0x00403D3D: je       0x403d48
  0x004030E0: push     0x4a5eae
  0x004030E5: push     dword ptr [0x2fdc0f8]
  0x004030EB: mov      ecx, 2
  0x004030F0: call     0x401383
  0x004030D7: push     ebx
  0x004030D8: call     0x405242
  0x004030CD: add      esp, 4
  0x004030D0: mov      ebx, dword ptr [ebp - 0xc]
  0x004030D3: test     ebx, ebx
  0x004030D5: je       0x4030e0
  0x00403A8D: mov      ebx, dword ptr [ebp - 0xc]
  0x00403A90: test     ebx, ebx
  0x00403A92: je       0x403a9d
  0x00403A84: push     ebx
  0x00403A85: call     0x405242
  0x00403B9F: mov      eax, 0x4a5d3c
  0x00403BA4: push     eax
  0x00403BA5: push     4
  0x00403BAA: mov      ebx, 0x4061c0
  0x00403BAF: call     0x405254
  0x00403BA4: push     eax
  0x00403BA5: push     4
  0x00403BAA: mov      ebx, 0x4061c0
  0x00403BAF: call     0x405254
  0x00403CBC: mov      eax, 0x4a5d3c
  0x00403CC1: push     eax
  0x00403CC2: push     4
  0x00403CC7: mov      ebx, 0x4061c0
  0x00403CCC: call     0x405254
  0x00403CC1: push     eax
  0x00403CC2: push     4
  0x00403CC7: mov      ebx, 0x4061c0
  0x00403CCC: call     0x405254
  0x00403D5C: pop      ebx
  0x00403D5D: add      ebx, 4
  0x00403D60: push     ebx
  0x00403D61: mov      ebx, dword ptr [ebx]
  0x00403D63: test     ebx, ebx
  0x00403D65: je       0x403d70
  0x00403D53: push     ebx
  0x00403D54: call     0x405242
  0x00403D45: add      esp, 4
  0x00403D48: pop      ebx
  0x00403D49: add      ebx, 4
  0x00403D4C: push     ebx
  0x00403D4D: mov      ebx, dword ptr [ebx]
  0x00403D4F: test     ebx, ebx
  0x00403D51: je       0x403d5c
  0x004030F5: add      esp, 8
  0x004030F8: mov      dword ptr [ebp - 8], eax
  0x004030FB: push     0x80000004
  0x00403100: push     0
  0x00403102: mov      eax, dword ptr [ebp - 8]
  0x00403105: test     eax, eax
  0x00403107: jne      0x40310e
  0x004030DD: add      esp, 4
  0x004030E0: push     0x4a5eae
  0x004030E5: push     dword ptr [0x2fdc0f8]
  0x004030EB: mov      ecx, 2
  0x004030F0: call     0x401383
  0x00403A94: push     ebx
  0x00403A95: call     0x405242
  0x00403A8A: add      esp, 4
  0x00403A8D: mov      ebx, dword ptr [ebp - 0xc]
  0x00403A90: test     ebx, ebx
  0x00403A92: je       0x403a9d
  0x00403BB4: add      esp, 0x34
  0x00403BB7: mov      ebx, dword ptr [ebp - 8]
  0x00403BBA: test     ebx, ebx
  0x00403BBC: je       0x403bc7
  0x00403CD1: add      esp, 0x34
  0x00403CD4: mov      ebx, dword ptr [ebp - 8]
  0x00403CD7: test     ebx, ebx
  0x00403CD9: je       0x403ce4
  0x00403D70: pop      ebx
  0x00403D71: add      ebx, 4
  0x00403D74: push     ebx
  0x00403D75: mov      ebx, dword ptr [ebx]
  0x00403D77: test     ebx, ebx
  0x00403D79: je       0x403d84
  0x00403D67: push     ebx
  0x00403D68: call     0x405242
  0x00403D59: add      esp, 4
  0x00403D5C: pop      ebx
  0x00403D5D: add      ebx, 4
  0x00403D60: push     ebx
  0x00403D61: mov      ebx, dword ptr [ebx]
  0x00403D63: test     ebx, ebx
  0x00403D65: je       0x403d70
  0x00403109: mov      eax, 0x4a5d3c
  0x0040310E: push     eax
  0x0040310F: push     1
  0x00403114: mov      ebx, 0x405e60
  0x00403119: call     0x405254
  0x0040310E: push     eax
  0x0040310F: push     1
  0x00403114: mov      ebx, 0x405e60
  0x00403119: call     0x405254
  0x00403A9A: add      esp, 4
  0x00403A9D: push     -1
  0x00403A9F: push     0x10
  0x00403AA1: push     0x1601022d
  0x00403AA6: push     0x52010003
  0x00403AAB: call     0x40526c
  0x00403BC7: mov      ebx, dword ptr [ebp - 0xc]
  0x00403BCA: test     ebx, ebx
  0x00403BCC: je       0x403bd7
  0x00403BBE: push     ebx
  0x00403BBF: call     0x405242
  0x00403CDB: push     ebx
  0x00403CDC: call     0x405242
  0x00403D84: pop      ebx
  0x00403D85: add      ebx, 4
  0x00403D88: push     ebx
  0x00403D89: mov      ebx, dword ptr [ebx]
  0x00403D8B: test     ebx, ebx
  0x00403D8D: je       0x403d98
  0x00403D7B: push     ebx
  0x00403D7C: call     0x405242
  0x00403D6D: add      esp, 4
  0x00403D70: pop      ebx
  0x00403D71: add      ebx, 4
  0x00403D74: push     ebx
  0x00403D75: mov      ebx, dword ptr [ebx]
  0x00403D77: test     ebx, ebx
  0x00403D79: je       0x403d84
  0x0040311E: add      esp, 0x10
  0x00403121: mov      ebx, dword ptr [ebp - 8]
  0x00403124: test     ebx, ebx
  0x00403126: je       0x403131
  0x00403BCE: push     ebx
  0x00403BCF: call     0x405242
  0x00403BC4: add      esp, 4
  0x00403BC7: mov      ebx, dword ptr [ebp - 0xc]
  0x00403BCA: test     ebx, ebx
  0x00403BCC: je       0x403bd7
  0x00403CE1: add      esp, 4
  0x00403CE4: mov      ebx, dword ptr [ebp - 4]
  0x00403CE7: push     ebx
  0x00403CE8: push     ebx
  0x00403CE9: mov      ebx, dword ptr [ebx]
  0x00403CEB: test     ebx, ebx
  0x00403CED: je       0x403cf8
  0x00403D98: pop      ebx
  0x00403D99: add      ebx, 4
  0x00403D9C: push     ebx
  0x00403D9D: mov      ebx, dword ptr [ebx]
  0x00403D9F: test     ebx, ebx
  0x00403DA1: je       0x403dac
  0x00403D8F: push     ebx
  0x00403D90: call     0x405242
  0x00403D81: add      esp, 4
  0x00403D84: pop      ebx
  0x00403D85: add      ebx, 4
  0x00403D88: push     ebx
  0x00403D89: mov      ebx, dword ptr [ebx]
  0x00403D8B: test     ebx, ebx
  0x00403D8D: je       0x403d98
  0x00403131: push     0x4a5eae
  0x00403136: push     dword ptr [0x2fdc0f8]
  0x0040313C: mov      ecx, 2
  0x00403141: call     0x401383
  0x00403128: push     ebx
  0x00403129: call     0x405242
  0x00403BD4: add      esp, 4
  0x00403BD7: push     -1
  0x00403BD9: push     0x10
  0x00403BDB: push     0x16010231
  0x00403BE0: push     0x52010003
  0x00403BE5: call     0x40526c
  0x00403DAC: pop      ebx
  0x00403DAD: add      ebx, 4
  0x00403DB0: push     ebx
  0x00403DB1: mov      ebx, dword ptr [ebx]
  0x00403DB3: test     ebx, ebx
  0x00403DB5: je       0x403dc0
  0x00403DA3: push     ebx
  0x00403DA4: call     0x405242
  0x00403D95: add      esp, 4
  0x00403D98: pop      ebx
  0x00403D99: add      ebx, 4
  0x00403D9C: push     ebx
  0x00403D9D: mov      ebx, dword ptr [ebx]
  0x00403D9F: test     ebx, ebx
  0x00403DA1: je       0x403dac
  0x00403146: add      esp, 8
  0x00403149: mov      dword ptr [ebp - 8], eax
  0x0040314C: push     0x80000005
  0x00403151: push     0
  0x00403153: push     0x4a6064
  0x00403158: push     0x80000004
  0x0040315D: push     0
  0x0040315F: mov      eax, dword ptr [ebp - 8]
  0x00403162: test     eax, eax
  0x00403164: jne      0x40316b
  0x0040312E: add      esp, 4
  0x00403131: push     0x4a5eae
  0x00403136: push     dword ptr [0x2fdc0f8]
  0x0040313C: mov      ecx, 2
  0x00403141: call     0x401383
  0x00403DC0: pop      ebx
  0x00403DC1: call     0x405242
  0x00403DB7: push     ebx
  0x00403DB8: call     0x405242
  0x00403DA9: add      esp, 4
  0x00403DAC: pop      ebx
  0x00403DAD: add      ebx, 4
  0x00403DB0: push     ebx
  0x00403DB1: mov      ebx, dword ptr [ebx]
  0x00403DB3: test     ebx, ebx
  0x00403DB5: je       0x403dc0
  0x00403166: mov      eax, 0x4a5d3c
  0x0040316B: push     eax
  0x0040316C: push     2
  0x00403171: mov      ebx, 0x405ea0
  0x00403176: call     0x405254
  0x0040316B: push     eax
  0x0040316C: push     2
  0x00403171: mov      ebx, 0x405ea0
  0x00403176: call     0x405254
  0x00403DC6: add      esp, 4
  0x00403DC9: mov      esp, ebp
  0x00403DCB: pop      ebp
  0x00403DCC: ret      
  0x00403DBD: add      esp, 4
  0x00403DC0: pop      ebx
  0x00403DC1: call     0x405242
  0x0040317B: add      esp, 0x1c
  0x0040317E: mov      ebx, dword ptr [ebp - 8]
  0x00403181: test     ebx, ebx
  0x00403183: je       0x40318e
  0x0040318E: call     0x401b4e
  0x00403185: push     ebx
  0x00403186: call     0x405242
  0x00403193: mov      dword ptr [ebp - 8], eax
  0x00403196: lea      eax, [ebp - 8]
  0x00403199: push     eax
  0x0040319A: call     0x402616
  0x0040318B: add      esp, 4
  0x0040318E: call     0x401b4e
  0x0040319F: mov      dword ptr [ebp - 0xc], eax
  0x004031A2: mov      ebx, dword ptr [ebp - 8]
  0x004031A5: test     ebx, ebx
  0x004031A7: je       0x4031b2
  0x004031B2: push     0x4a5f0c
  0x004031B7: push     dword ptr [ebp - 0xc]
  0x004031BA: mov      ecx, 2
  0x004031BF: call     0x401383
  0x004031A9: push     ebx
  0x004031AA: call     0x405242
  0x004031C4: add      esp, 8
  0x004031C7: mov      dword ptr [ebp - 0x10], eax
  0x004031CA: mov      ebx, dword ptr [ebp - 0xc]
  0x004031CD: test     ebx, ebx
  0x004031CF: je       0x4031da
  0x004031AF: add      esp, 4
  0x004031B2: push     0x4a5f0c
  0x004031B7: push     dword ptr [ebp - 0xc]
  0x004031BA: mov      ecx, 2
  0x004031BF: call     0x401383
  0x004031DA: push     0x80000004
  0x004031DF: push     0
  0x004031E1: mov      eax, dword ptr [ebp - 0x10]
  0x004031E4: test     eax, eax
  0x004031E6: jne      0x4031ed
  0x004031D1: push     ebx
  0x004031D2: call     0x405242
  0x004031E8: mov      eax, 0x4a5d3c
  0x004031ED: push     eax
  0x004031EE: push     1
  0x004031F3: mov      ebx, 0x405e60
  0x004031F8: call     0x405254
  0x004031ED: push     eax
  0x004031EE: push     1
  0x004031F3: mov      ebx, 0x405e60
  0x004031F8: call     0x405254
  0x004031D7: add      esp, 4
  0x004031DA: push     0x80000004
  0x004031DF: push     0
  0x004031E1: mov      eax, dword ptr [ebp - 0x10]
  0x004031E4: test     eax, eax
  0x004031E6: jne      0x4031ed
  0x004031FD: add      esp, 0x10
  0x00403200: mov      ebx, dword ptr [ebp - 0x10]
  0x00403203: test     ebx, ebx
  0x00403205: je       0x403210
  0x00403210: call     0x401b4e
  0x00403207: push     ebx
  0x00403208: call     0x405242
  0x00403215: mov      dword ptr [ebp - 8], eax
  0x00403218: lea      eax, [ebp - 8]
  0x0040321B: push     eax
  0x0040321C: call     0x402616
  0x0040320D: add      esp, 4
  0x00403210: call     0x401b4e
  0x00403221: mov      dword ptr [ebp - 0xc], eax
  0x00403224: mov      ebx, dword ptr [ebp - 8]
  0x00403227: test     ebx, ebx
  0x00403229: je       0x403234
  0x00403234: push     0x1204a6c
  0x00403239: push     dword ptr [ebp - 0xc]
  0x0040323C: mov      ecx, 2
  0x00403241: call     0x401383
  0x0040322B: push     ebx
  0x0040322C: call     0x405242
  0x00403246: add      esp, 8
  0x00403249: mov      dword ptr [ebp - 0x10], eax
  0x0040324C: mov      ebx, dword ptr [ebp - 0xc]
  0x0040324F: test     ebx, ebx
  0x00403251: je       0x40325c
  0x00403231: add      esp, 4
  0x00403234: push     0x1204a6c
  0x00403239: push     dword ptr [ebp - 0xc]
  0x0040323C: mov      ecx, 2
  0x00403241: call     0x401383
  0x0040325C: push     0x80000004
  0x00403261: push     0
  0x00403263: mov      eax, dword ptr [ebp - 0x10]
  0x00403266: test     eax, eax
  0x00403268: jne      0x40326f
  0x00403253: push     ebx
  0x00403254: call     0x405242
  0x0040326A: mov      eax, 0x4a5d3c
  0x0040326F: push     eax
  0x00403270: push     1
  0x00403275: mov      ebx, 0x405e60
  0x0040327A: call     0x405254
  0x0040326F: push     eax
  0x00403270: push     1
  0x00403275: mov      ebx, 0x405e60
  0x0040327A: call     0x405254
  0x00403259: add      esp, 4
  0x0040325C: push     0x80000004
  0x00403261: push     0
  0x00403263: mov      eax, dword ptr [ebp - 0x10]
  0x00403266: test     eax, eax
  0x00403268: jne      0x40326f
  0x0040327F: add      esp, 0x10
  0x00403282: mov      ebx, dword ptr [ebp - 0x10]
  0x00403285: test     ebx, ebx
  0x00403287: je       0x403292
  0x00403292: push     0x1204aa5
  0x00403297: push     dword ptr [0x2fdc100]
  0x0040329D: mov      ecx, 2
  0x004032A2: call     0x401383
  0x00403289: push     ebx
  0x0040328A: call     0x405242
  0x004032A7: add      esp, 8
  0x004032AA: mov      dword ptr [ebp - 8], eax
  0x004032AD: push     0x80000004
  0x004032B2: push     0
  0x004032B4: mov      eax, dword ptr [ebp - 8]
  0x004032B7: test     eax, eax
  0x004032B9: jne      0x4032c0
  0x0040328F: add      esp, 4
  0x00403292: push     0x1204aa5
  0x00403297: push     dword ptr [0x2fdc100]
  0x0040329D: mov      ecx, 2
  0x004032A2: call     0x401383
  0x004032BB: mov      eax, 0x4a5d3c
  0x004032C0: push     eax
  0x004032C1: push     1
  0x004032C6: mov      ebx, 0x405e60
  0x004032CB: call     0x405254
  0x004032C0: push     eax
  0x004032C1: push     1
  0x004032C6: mov      ebx, 0x405e60
  0x004032CB: call     0x405254
  0x004032D0: add      esp, 0x10
  0x004032D3: mov      ebx, dword ptr [ebp - 8]
  0x004032D6: test     ebx, ebx
  0x004032D8: je       0x4032e3
  0x004032E3: push     0x1204aa5
  0x004032E8: push     dword ptr [0x2fdc100]
  0x004032EE: mov      ecx, 2
  0x004032F3: call     0x401383
  0x004032DA: push     ebx
  0x004032DB: call     0x405242
  0x004032F8: add      esp, 8
  0x004032FB: mov      dword ptr [ebp - 8], eax
  0x004032FE: push     0x80000004
  0x00403303: push     0
  0x00403305: mov      eax, dword ptr [ebp - 8]
  0x00403308: test     eax, eax
  0x0040330A: jne      0x403311
  0x004032E0: add      esp, 4
  0x004032E3: push     0x1204aa5
  0x004032E8: push     dword ptr [0x2fdc100]
  0x004032EE: mov      ecx, 2
  0x004032F3: call     0x401383
  0x0040330C: mov      eax, 0x4a5d3c
  0x00403311: push     eax
  0x00403312: push     1
  0x00403317: mov      ebx, 0x405e60
  0x0040331C: call     0x405254
  0x00403311: push     eax
  0x00403312: push     1
  0x00403317: mov      ebx, 0x405e60
  0x0040331C: call     0x405254
  0x00403321: add      esp, 0x10
  0x00403324: mov      ebx, dword ptr [ebp - 8]
  0x00403327: test     ebx, ebx
  0x00403329: je       0x403334
  0x00403334: push     0x1204ab1
  0x00403339: push     dword ptr [0x2fdc100]
  0x0040333F: mov      ecx, 2
  0x00403344: call     0x401383
  0x0040332B: push     ebx
  0x0040332C: call     0x405242
  0x00403349: add      esp, 8
  0x0040334C: mov      dword ptr [ebp - 8], eax
  0x0040334F: push     0x80000004
  0x00403354: push     0
  0x00403356: mov      eax, dword ptr [ebp - 8]
  0x00403359: test     eax, eax
  0x0040335B: jne      0x403362
  0x00403331: add      esp, 4
  0x00403334: push     0x1204ab1
  0x00403339: push     dword ptr [0x2fdc100]
  0x0040333F: mov      ecx, 2
  0x00403344: call     0x401383
  0x0040335D: mov      eax, 0x4a5d3c
  0x00403362: push     eax
  0x00403363: push     1
  0x00403368: mov      ebx, 0x405e60
  0x0040336D: call     0x405254
  0x00403362: push     eax
  0x00403363: push     1
  0x00403368: mov      ebx, 0x405e60
  0x0040336D: call     0x405254
  0x00403372: add      esp, 0x10
  0x00403375: mov      ebx, dword ptr [ebp - 8]
  0x00403378: test     ebx, ebx
  0x0040337A: je       0x403385
  0x00403385: push     0x2fdc0f8
  0x0040338A: call     0x402616
  0x0040337C: push     ebx
  0x0040337D: call     0x405242
  0x0040338F: mov      dword ptr [ebp - 8], eax
  0x00403392: push     0x1204ac0
  0x00403397: push     dword ptr [ebp - 8]
  0x0040339A: mov      ecx, 2
  0x0040339F: call     0x401383
  0x00403382: add      esp, 4
  0x00403385: push     0x2fdc0f8
  0x0040338A: call     0x402616
  0x004033A4: add      esp, 8
  0x004033A7: mov      dword ptr [ebp - 0xc], eax
  0x004033AA: mov      ebx, dword ptr [ebp - 8]
  0x004033AD: test     ebx, ebx
  0x004033AF: je       0x4033ba
  0x004033BA: push     0x80000004
  0x004033BF: push     0
  0x004033C1: mov      eax, dword ptr [ebp - 0xc]
  0x004033C4: test     eax, eax
  0x004033C6: jne      0x4033cd
  0x004033B1: push     ebx
  0x004033B2: call     0x405242
  0x004033C8: mov      eax, 0x4a5d3c
  0x004033CD: push     eax
  0x004033CE: push     1
  0x004033D3: mov      ebx, 0x405e60
  0x004033D8: call     0x405254
  0x004033CD: push     eax
  0x004033CE: push     1
  0x004033D3: mov      ebx, 0x405e60
  0x004033D8: call     0x405254
  0x004033B7: add      esp, 4
  0x004033BA: push     0x80000004
  0x004033BF: push     0
  0x004033C1: mov      eax, dword ptr [ebp - 0xc]
  0x004033C4: test     eax, eax
  0x004033C6: jne      0x4033cd
  0x004033DD: add      esp, 0x10
  0x004033E0: mov      ebx, dword ptr [ebp - 0xc]
  0x004033E3: test     ebx, ebx
  0x004033E5: je       0x4033f0
  0x004033F0: push     0x1204ad9
  0x004033F5: push     dword ptr [0x2fdc0f8]
  0x004033FB: mov      ecx, 2
  0x00403400: call     0x401383
  0x004033E7: push     ebx
  0x004033E8: call     0x405242
  0x00403405: add      esp, 8
  0x00403408: mov      dword ptr [ebp - 8], eax
  0x0040340B: push     0x80000004
  0x00403410: push     0
  0x00403412: mov      eax, dword ptr [ebp - 8]
  0x00403415: test     eax, eax
  0x00403417: jne      0x40341e
  0x004033ED: add      esp, 4
  0x004033F0: push     0x1204ad9
  0x004033F5: push     dword ptr [0x2fdc0f8]
  0x004033FB: mov      ecx, 2
  0x00403400: call     0x401383
  0x00403419: mov      eax, 0x4a5d3c
  0x0040341E: push     eax
  0x0040341F: push     1
  0x00403424: mov      ebx, 0x405e60
  0x00403429: call     0x405254
  0x0040341E: push     eax
  0x0040341F: push     1
  0x00403424: mov      ebx, 0x405e60
  0x00403429: call     0x405254
  0x0040342E: add      esp, 0x10
  0x00403431: mov      ebx, dword ptr [ebp - 8]
  0x00403434: test     ebx, ebx
  0x00403436: je       0x403441
  0x00403441: call     0x401b4e
  0x00403438: push     ebx
  0x00403439: call     0x405242
  0x00403446: mov      dword ptr [ebp - 8], eax
  0x00403449: lea      eax, [ebp - 8]
  0x0040344C: push     eax
  0x0040344D: call     0x402616
  0x0040343E: add      esp, 4
  0x00403441: call     0x401b4e
  0x00403452: mov      dword ptr [ebp - 0xc], eax
  0x00403455: mov      ebx, dword ptr [ebp - 8]
  0x00403458: test     ebx, ebx
  0x0040345A: je       0x403465
  0x00403465: push     0x4a5f0c
  0x0040346A: push     dword ptr [ebp - 0xc]
  0x0040346D: mov      ecx, 2
  0x00403472: call     0x401383
  0x0040345C: push     ebx
  0x0040345D: call     0x405242
  0x00403477: add      esp, 8
  0x0040347A: mov      dword ptr [ebp - 0x10], eax
  0x0040347D: mov      ebx, dword ptr [ebp - 0xc]
  0x00403480: test     ebx, ebx
  0x00403482: je       0x40348d
  0x00403462: add      esp, 4
  0x00403465: push     0x4a5f0c
  0x0040346A: push     dword ptr [ebp - 0xc]
  0x0040346D: mov      ecx, 2
  0x00403472: call     0x401383
  0x0040348D: push     0x80000004
  0x00403492: push     0
  0x00403494: mov      eax, dword ptr [ebp - 0x10]
  0x00403497: test     eax, eax
  0x00403499: jne      0x4034a0
  0x00403484: push     ebx
  0x00403485: call     0x405242
  0x0040349B: mov      eax, 0x4a5d3c
  0x004034A0: push     eax
  0x004034A1: push     1
  0x004034A6: mov      ebx, 0x405e60
  0x004034AB: call     0x405254
  0x004034A0: push     eax
  0x004034A1: push     1
  0x004034A6: mov      ebx, 0x405e60
  0x004034AB: call     0x405254
  0x0040348A: add      esp, 4
  0x0040348D: push     0x80000004
  0x00403492: push     0
  0x00403494: mov      eax, dword ptr [ebp - 0x10]
  0x00403497: test     eax, eax
  0x00403499: jne      0x4034a0
  0x004034B0: add      esp, 0x10
  0x004034B3: mov      ebx, dword ptr [ebp - 0x10]
  0x004034B6: test     ebx, ebx
  0x004034B8: je       0x4034c3
  0x004034C3: call     0x401b4e
  0x004034BA: push     ebx
  0x004034BB: call     0x405242
  0x004034C8: mov      dword ptr [ebp - 8], eax
  0x004034CB: lea      eax, [ebp - 8]
  0x004034CE: push     eax
  0x004034CF: call     0x402616
  0x004034C0: add      esp, 4
  0x004034C3: call     0x401b4e
  0x004034D4: mov      dword ptr [ebp - 0xc], eax
  0x004034D7: mov      ebx, dword ptr [ebp - 8]
  0x004034DA: test     ebx, ebx
  0x004034DC: je       0x4034e7
  0x004034E7: push     0x4a5f0c
  0x004034EC: push     dword ptr [ebp - 0xc]
  0x004034EF: mov      ecx, 2
  0x004034F4: call     0x401383
  0x004034DE: push     ebx
  0x004034DF: call     0x405242
  0x004034F9: add      esp, 8
  0x004034FC: mov      dword ptr [ebp - 0x10], eax
  0x004034FF: mov      ebx, dword ptr [ebp - 0xc]
  0x00403502: test     ebx, ebx
  0x00403504: je       0x40350f
  0x004034E4: add      esp, 4
  0x004034E7: push     0x4a5f0c
  0x004034EC: push     dword ptr [ebp - 0xc]
  0x004034EF: mov      ecx, 2
  0x004034F4: call     0x401383
  0x0040350F: push     0x80000005
  0x00403514: push     0
  0x00403516: push     0x1204b04
  0x0040351B: push     0x80000004
  0x00403520: push     0
  0x00403522: mov      eax, dword ptr [ebp - 0x10]
  0x00403525: test     eax, eax
  0x00403527: jne      0x40352e
  0x00403506: push     ebx
  0x00403507: call     0x405242
  0x00403529: mov      eax, 0x4a5d3c
  0x0040352E: push     eax
  0x0040352F: push     2
  0x00403534: mov      ebx, 0x405ea0
  0x00403539: call     0x405254
  0x0040352E: push     eax
  0x0040352F: push     2
  0x00403534: mov      ebx, 0x405ea0
  0x00403539: call     0x405254
  0x0040350C: add      esp, 4
  0x0040350F: push     0x80000005
  0x00403514: push     0
  0x00403516: push     0x1204b04
  0x0040351B: push     0x80000004
  0x00403520: push     0
  0x00403522: mov      eax, dword ptr [ebp - 0x10]
  0x00403525: test     eax, eax
  0x00403527: jne      0x40352e
  0x0040353E: add      esp, 0x1c
  0x00403541: mov      ebx, dword ptr [ebp - 0x10]
  0x00403544: test     ebx, ebx
  0x00403546: je       0x403551
  0x00403551: push     0x80000005
  0x00403556: push     0
  0x00403558: push     0x20b330c
  0x0040355D: push     0x80000004
  0x00403562: push     0
  0x00403564: push     0x4a5d79
  0x00403569: push     2
  0x0040356E: mov      ebx, 0x405ea0
  0x00403573: call     0x405254
  0x00403548: push     ebx
  0x00403549: call     0x405242
  0x00403578: add      esp, 0x1c
  0x0040357B: push     0x80000005
  0x00403580: push     0
  0x00403582: push     0x20b3317
  0x00403587: push     0x80000004
  0x0040358C: push     0
  0x0040358E: push     0x4a5d8b
  0x00403593: push     2
  0x00403598: mov      ebx, 0x405ea0
  0x0040359D: call     0x405254
  0x0040354E: add      esp, 4
  0x00403551: push     0x80000005
  0x00403556: push     0
  0x00403558: push     0x20b330c
  0x0040355D: push     0x80000004
  0x00403562: push     0
  0x00403564: push     0x4a5d79
  0x00403569: push     2
  0x0040356E: mov      ebx, 0x405ea0
  0x00403573: call     0x405254
  0x004035A2: add      esp, 0x1c
  0x004035A5: push     0x80000005
  0x004035AA: push     0
  0x004035AC: push     0x288def7
  0x004035B1: push     0x80000004
  0x004035B6: push     0
  0x004035B8: push     0x4a5dc5
  0x004035BD: push     2
  0x004035C2: mov      ebx, 0x405ea0
  0x004035C7: call     0x405254
  0x004035CC: add      esp, 0x1c
  0x004035CF: push     0x80000005
  0x004035D4: push     0
  0x004035D6: push     0x2a6c7af
  0x004035DB: push     0x80000004
  0x004035E0: push     0
  0x004035E2: push     0x4a5e03
  0x004035E7: push     2
  0x004035EC: mov      ebx, 0x405ea0
  0x004035F1: call     0x405254
  0x004035F6: add      esp, 0x1c
  0x004035F9: push     0x80000005
  0x004035FE: push     0
  0x00403600: push     0x2ee81b7
  0x00403605: push     0x80000004
  0x0040360A: push     0
  0x0040360C: push     0x4a5e37
  0x00403611: push     2
  0x00403616: mov      ebx, 0x405ea0
  0x0040361B: call     0x405254
  0x00403620: add      esp, 0x1c
  0x00403623: push     0x50005
  0x00403628: push     0
  0x0040362A: push     dword ptr [ebp - 4]
  0x0040362D: push     0x80000004
  0x00403632: push     0
  0x00403634: push     0x2ee838f
  0x00403639: push     2
  0x0040363E: mov      eax, 4
  0x00403643: mov      ebx, 0x46a100
  0x00403648: call     0x405266
  0x0040364D: add      esp, 0x1c
  0x00403650: push     0x80000004
  0x00403655: push     0
  0x00403657: push     0x2ee838f
  0x0040365C: push     1
  0x00403661: mov      ebx, 0x405e80
  0x00403666: call     0x405254
  0x0040366B: add      esp, 0x10
  0x0040366E: mov      dword ptr [ebp - 0xc], eax
  0x00403671: cmp      dword ptr [ebp - 0xc], 0
  0x00403675: je       0x4036a0
  0x004036A0: mov      eax, 1
  0x004036A5: test     eax, eax
  0x004036A7: je       0x4036eb
  0x0040367B: mov      ebx, dword ptr [ebp - 4]
  0x0040367E: mov      dword ptr [ebp - 0x14], ebx
  0x00403681: push     0x2ee83d1
  0x00403686: mov      ebx, dword ptr [ebp - 0x14]
  0x00403689: push     dword ptr [ebx]
  0x0040368B: call     0x401100
  0x004036EB: push     0x80000005
  0x004036F0: push     0
  0x004036F2: push     0x1204b04
  0x004036F7: push     0x80000004
  0x004036FC: push     0
  0x004036FE: push     0x4a5e76
  0x00403703: push     2
  0x00403708: mov      ebx, 0x405ea0
  0x0040370D: call     0x405254
  0x004036AD: mov      ebx, 6
  0x004036B2: call     0x4013df
  0x00403690: add      esp, 8
  0x00403693: cmp      eax, 0
  0x00403696: jne      0x4036a0
  0x00403712: add      esp, 0x1c
  0x00403715: mov      dword ptr [ebp - 0xc], eax
  0x00403718: cmp      dword ptr [ebp - 0xc], 0
  0x0040371C: jne      0x403760
  0x004036B7: push     0x80000301
  0x004036BC: push     0
  0x004036BE: push     0
  0x004036C3: push     0x80000004
  0x004036C8: push     0
  0x004036CA: push     0x2ee83de
  0x004036CF: push     4
  0x004036D4: mov      ebx, 0x405f80
  0x004036D9: call     0x405254
  0x0040369C: xor      eax, eax
  0x0040369E: jmp      0x4036a5
  0x00403722: mov      ebx, 6
  0x00403727: call     0x4013df
  0x004036DE: add      esp, 0x34
  0x004036E1: push     0
  0x004036E3: call     0x405260
  0x004036A5: test     eax, eax
  0x004036A7: je       0x4036eb
  0x0040372C: push     0x80000301
  0x00403731: push     0
  0x00403733: push     0
  0x00403738: push     0x80000004
  0x0040373D: push     0
  0x0040373F: push     0x2ee841b
  0x00403744: push     4
  0x00403749: mov      ebx, 0x405f80
  0x0040374E: call     0x405254
  0x00403753: add      esp, 0x34
  0x00403756: push     0
  0x00403758: call     0x405260

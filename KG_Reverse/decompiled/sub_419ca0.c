
/*
 * ============================================================
 * KG.exe 反编译分析 - sub_419ca0
 * ============================================================
 *
 * 函数地址: 0x00419CA0
 * 基本块数: 310
 * 指令数:   1143
 * 复杂度:   高复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_419ca0(void) {

  /* 代码块 1 @ 0x00419CA0 */
  // 读取全局变量值 fs:[0]
  // 压栈 -1 (通常作为错误标志)
  // 保存寄存器 0x49ed70
  // 保存寄存器 eax
  // mov dword ptr fs:[0], esp
  // 分配 0x74 字节栈空间
  // 保存寄存器 ebx
  // 保存寄存器 ebp
  // 保存寄存器 esi
  // 保存寄存器 edi
  // 从栈读取参数 0x94 到 edi
  // mov ebp, ecx
  // 读取全局变量值 [edi + 4]
  // CMP eax, 0x100 (set flags)
  // if (below) goto 0x419ce7
  /* 代码块 2 @ 0x00419CE7 */
  // 读取全局变量值 [edi + 4]
  // CMP eax, 0x201 (set flags)
  // 如果相等则跳转到 0x419cf8
  /* 代码块 3 @ 0x00419CCF */
  // CMP eax, 0x108 (set flags)
  // if (above) goto 0x419ce7
  /* 代码块 4 @ 0x00419CF8 */
  // mov ecx, dword ptr [edi]
  // 保存寄存器 ecx
  // 直接调用函数 0x0049A7C5
  call(0x0049A7C5);
  /* 代码块 5 @ 0x00419CF1 */
  // CMP eax, 0xa1 (set flags)
  // 如果不相等则跳转到 0x419d00
  /* 代码块 6 @ 0x00419CD6 */
  // 读取全局变量值 [edi]
  // 保存寄存器 eax
  // 通过分发表地址 0x4a25d0 间接调用
  通过分发表间接调用 [0x4a25d0]);
  /* 代码块 7 @ 0x00419D00 */
  // 保存寄存器 edi
  // mov ecx, ebp
  // 直接调用函数 0x00495496
  call(0x00495496);
  /* 代码块 8 @ 0x00419CDF */
  // 测试 eax 是否为零（设置标志位）
  // 如果相等则跳转到 0x41a944
  /* 代码块 9 @ 0x00419D08 */
  // CMP eax, 1 (set flags)
  // 如果不相等则跳转到 0x419d12
  /* 代码块 10 @ 0x0041A944 */
  // 从栈读取参数 0x84 到 ecx
  // 恢复寄存器 edi
  // 恢复寄存器 esi
  // 恢复寄存器 ebp
  // 恢复寄存器 ebx
  // mov dword ptr fs:[0], ecx
  // 释放 0x80 字节栈空间
  return;
  /* 代码块 11 @ 0x00419D0D */
  goto 0x41a944;
  /* 代码块 12 @ 0x00419D12 */
  // 读取全局变量值 [edi + 4]
  // CMP eax, 0x100 (set flags)
  // if (below) goto 0x419d47
  /* 代码块 13 @ 0x00419D47 */
  // mov ecx, dword ptr [ebp + 0xd4]
  // 读取全局变量值 [ebp + 0x1c]
  // TEST ecx, ecx (set flags)
  // 写入栈变量 [esp+0x28] = eax
  // 如果不相等则跳转到 0x41a934
  /* 代码块 14 @ 0x00419D1C */
  // CMP eax, 0x108 (set flags)
  // if (above) goto 0x419d47
  /* 代码块 15 @ 0x00419D5C */
  // mov ecx, dword ptr [edi]
  // CMP ecx, eax (set flags)
  // 如果相等则跳转到 0x419d72
  /* 代码块 16 @ 0x0041A934 */
  // 读取全局变量值 [esp + 0x28]
  // 保存寄存器 eax
  // 通过分发表地址 0x4a2558 间接调用
  通过分发表间接调用 [0x4a2558]);
  /* 代码块 17 @ 0x00419D23 */
  // 读取全局变量值 [ebp + 0x1dc]
  // 测试 eax 是否为零（设置标志位）
  // 如果相等则跳转到 0x419d47
  /* 代码块 18 @ 0x00419D72 */
  // 保存寄存器 0
  // 保存寄存器 0
  // 保存寄存器 0x3e9
  // 直接调用函数 0x00413D70
  call(0x00413D70);
  /* 代码块 19 @ 0x00419D62 */
  // 保存寄存器 ecx
  // 保存寄存器 eax
  // 通过分发表地址 0x4a2524 间接调用
  通过分发表间接调用 [0x4a2524]);
  /* 代码块 20 @ 0x0041A93F */
  // inc eax
  // 从栈读取参数 0x84 到 ecx
  // 恢复寄存器 edi
  // 恢复寄存器 esi
  // 恢复寄存器 ebp
  // 恢复寄存器 ebx
  // mov dword ptr fs:[0], ecx
  // 释放 0x80 字节栈空间
  return;
  /* 代码块 21 @ 0x00419D2D */
  // mov edx, dword ptr [ebp + 0x1c]
  // 保存寄存器 edi
  // 保存寄存器 eax
  // 保存寄存器 edx
  // 通过分发表地址 0x4a25cc 间接调用
  通过分发表间接调用 [0x4a25cc]);
  /* 代码块 22 @ 0x00419D80 */
  // mov ecx, dword ptr [edi]
  // mov esi, eax
  // 读取全局变量值 [ebp + 0x1c]
  // 写入栈变量 [esp+0x20] = esi
  // CMP eax, ecx (set flags)
  // 如果相等则跳转到 0x419df1
  /* 代码块 23 @ 0x00419D6A */
  // 测试 eax 是否为零（设置标志位）
  // 如果相等则跳转到 0x41a934
  /* 代码块 24 @ 0x00419D39 */
  // 测试 eax 是否为零（设置标志位）
  // 如果相等则跳转到 0x419d47
  /* 代码块 25 @ 0x00419DF1 */
  // mov ecx, dword ptr [ebp + 0xdc]
  // 计算栈偏移地址 10 -> eax
  // 保存寄存器 0
  // 保存寄存器 eax
  // 保存寄存器 ecx
  // mov ecx, esi
  // 直接调用函数 0x0040EC30
  call(0x0040EC30);
  /* 代码块 26 @ 0x00419D8F */
  // 读取全局变量值 [ebp + 0xd8]
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x419df1
  /* 代码块 27 @ 0x00419D3D */
  // mov eax, 1
  goto 0x41a944;
  /* 代码块 28 @ 0x00419E06 */
  // CMP eax, 1 (set flags)
  // 如果不相等则跳转到 0x419e9c
  /* 代码块 29 @ 0x00419D99 */
  // xor ebx, ebx
  goto 0x419da1;
  /* 代码块 30 @ 0x00419E0F */
  // xor ebx, ebx
  goto 0x419e1a;
  /* 代码块 31 @ 0x00419E9C */
  // 读取全局变量值 [edi + 4]
  // 从栈读取参数 0x20 到 esi
  // CMP eax, 0x100 (set flags)
  // if (below) goto 0x419eb1
  /* 代码块 32 @ 0x00419DA1 */
  // 计算栈偏移地址 10 -> ecx
  // mov eax, ebx
  // 保存寄存器 ecx
  // 保存寄存器 eax
  // mov ecx, esi
  // inc ebx
  // 直接调用函数 0x0040EBF0
  call(0x0040EBF0);
  /* 代码块 33 @ 0x00419E1A */
  // 从栈读取参数 0x10 到 edx
  // mov eax, ebx
  // 保存寄存器 0
  // 保存寄存器 eax
  // lea ecx, [edx + 0x14]
  // inc ebx
  // 直接调用函数 0x0040E730
  call(0x0040E730);
  /* 代码块 34 @ 0x00419EB1 */
  // CMP eax, 0x200 (set flags)
  // if (below) goto 0x419f17
  /* 代码块 35 @ 0x00419EAA */
  // CMP eax, 0x108 (set flags)
  // if (below or equal) goto 0x419ebf
  /* 代码块 36 @ 0x00419DB1 */
  // 测试 eax 是否为零（设置标志位）
  // 如果相等则跳转到 0x419df1
  /* 代码块 37 @ 0x00419E2C */
  // mov esi, eax
  // TEST esi, esi (set flags)
  // 如果相等则跳转到 0x419e9c
  /* 代码块 38 @ 0x00419F17 */
  // 读取全局变量值 [ebp + 0xbc]
  // or ebx, 0xffffffff
  // CMP eax, 1 (set flags)
  // 如果不相等则跳转到 0x419fc8
  /* 代码块 39 @ 0x00419EB8 */
  // CMP eax, 0x209 (set flags)
  // if (above) goto 0x419f17
  /* 代码块 40 @ 0x00419EBF */
  // 通过分发表地址 0x4a2548 间接调用
  通过分发表间接调用 [0x4a2548]);
  /* 代码块 41 @ 0x00419DB5 */
  // 从栈读取参数 0x10 到 edx
  // 保存寄存器 0
  // 保存寄存器 0
  // lea ecx, [edx + 0x14]
  // 直接调用函数 0x0040E730
  call(0x0040E730);
  /* 代码块 42 @ 0x00419E32 */
  // 从栈读取参数 0x10 到 ecx
  // lea eax, [ebx - 1]
  // 保存寄存器 eax
  // add ecx, 0x14
  // 直接调用函数 0x0040EE10
  call(0x0040EE10);
  /* 代码块 43 @ 0x00419F29 */
  // CMP dword ptr [edi + 4], 0x201 (set flags)
  // 如果不相等则跳转到 0x419fc8
  /* 代码块 44 @ 0x00419FC8 */
  // 保存寄存器 edi
  // 直接调用函数 0x0041B990
  call(0x0041B990);
  /* 代码块 45 @ 0x00419EC5 */
  // 保存寄存器 eax
  // 直接调用函数 0x00494BB2
  call(0x00494BB2);
  /* 代码块 46 @ 0x00419DC5 */
  // mov esi, eax
  // add esi, 0x18
  // 保存寄存器 esi
  // 直接调用函数 0x00406CF0
  call(0x00406CF0);
  /* 代码块 47 @ 0x00419E42 */
  // CMP eax, 1 (set flags)
  // 如果相等则跳转到 0x419e1a
  /* 代码块 48 @ 0x00419F36 */
  // 读取全局变量值 [ebp + 0x1c]
  // mov ecx, dword ptr [edi]
  // CMP ecx, eax (set flags)
  // 保存寄存器 0
  // 如果不相等则跳转到 0x419f56
  /* 代码块 49 @ 0x00419FCE */
  // add esp, 4
  // TEST ax, ax (set flags)
  // 如果相等则跳转到 0x41a65e
  /* 代码块 50 @ 0x00419ECB */
  // 保存寄存器 eax
  // mov ecx, ebp
  // 直接调用函数 0x00418E70
  call(0x00418E70);
  /* 代码块 51 @ 0x00419DD0 */
  // add esi, eax
  // 保存寄存器 esi
  // 直接调用函数 0x00406CF0
  call(0x00406CF0);
  /* 代码块 52 @ 0x00419E47 */
  // mov edx, dword ptr [esi]
  // 保存寄存器 0
  // 保存寄存器 edx
  // 保存寄存器 0x3ea
  // 直接调用函数 0x00413D70
  call(0x00413D70);
  /* 代码块 53 @ 0x00419F41 */
  // 保存寄存器 2
  // 保存寄存器 0xa1
  // 保存寄存器 eax
  // 通过分发表地址 0x4a2554 间接调用
  通过分发表间接调用 [0x4a2554]);
  /* 代码块 54 @ 0x00419F56 */
  // 读取全局变量值 [ebp + 0xdc]
  // 计算栈偏移地址 14 -> edx
  // 保存寄存器 edx
  // 保存寄存器 eax
  // mov ecx, esi
  // 直接调用函数 0x0040EC30
  call(0x0040EC30);
  /* 代码块 55 @ 0x0041A65E */
  // 读取全局变量值 [edi + 4]
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00419CA0: mov      eax, dword ptr fs:[0]
  0x00419CA6: push     -1
  0x00419CA8: push     0x49ed70
  0x00419CAD: push     eax
  0x00419CAE: mov      dword ptr fs:[0], esp
  0x00419CB5: sub      esp, 0x74
  0x00419CB8: push     ebx
  0x00419CB9: push     ebp
  0x00419CBA: push     esi
  0x00419CBB: push     edi
  0x00419CBC: mov      edi, dword ptr [esp + 0x94]
  0x00419CC3: mov      ebp, ecx
  0x00419CC5: mov      eax, dword ptr [edi + 4]
  0x00419CC8: cmp      eax, 0x100
  0x00419CCD: jb       0x419ce7
  0x00419CE7: mov      eax, dword ptr [edi + 4]
  0x00419CEA: cmp      eax, 0x201
  0x00419CEF: je       0x419cf8
  0x00419CCF: cmp      eax, 0x108
  0x00419CD4: ja       0x419ce7
  0x00419CF8: mov      ecx, dword ptr [edi]
  0x00419CFA: push     ecx
  0x00419CFB: call     0x49a7c5
  0x00419CF1: cmp      eax, 0xa1
  0x00419CF6: jne      0x419d00
  0x00419CD6: mov      eax, dword ptr [edi]
  0x00419CD8: push     eax
  0x00419CD9: call     dword ptr [0x4a25d0]
  0x00419D00: push     edi
  0x00419D01: mov      ecx, ebp
  0x00419D03: call     0x495496
  0x00419CDF: test     eax, eax
  0x00419CE1: je       0x41a944
  0x00419D08: cmp      eax, 1
  0x00419D0B: jne      0x419d12
  0x0041A944: mov      ecx, dword ptr [esp + 0x84]
  0x0041A94B: pop      edi
  0x0041A94C: pop      esi
  0x0041A94D: pop      ebp
  0x0041A94E: pop      ebx
  0x0041A94F: mov      dword ptr fs:[0], ecx
  0x0041A956: add      esp, 0x80
  0x0041A95C: ret      4
  0x00419D0D: jmp      0x41a944
  0x00419D12: mov      eax, dword ptr [edi + 4]
  0x00419D15: cmp      eax, 0x100
  0x00419D1A: jb       0x419d47
  0x00419D47: mov      ecx, dword ptr [ebp + 0xd4]
  0x00419D4D: mov      eax, dword ptr [ebp + 0x1c]
  0x00419D50: test     ecx, ecx
  0x00419D52: mov      dword ptr [esp + 0x28], eax
  0x00419D56: jne      0x41a934
  0x00419D1C: cmp      eax, 0x108
  0x00419D21: ja       0x419d47
  0x00419D5C: mov      ecx, dword ptr [edi]
  0x00419D5E: cmp      ecx, eax
  0x00419D60: je       0x419d72
  0x0041A934: mov      eax, dword ptr [esp + 0x28]
  0x0041A938: push     eax
  0x0041A939: call     dword ptr [0x4a2558]
  0x00419D23: mov      eax, dword ptr [ebp + 0x1dc]
  0x00419D29: test     eax, eax
  0x00419D2B: je       0x419d47
  0x00419D72: push     0
  0x00419D74: push     0
  0x00419D76: push     0x3e9
  0x00419D7B: call     0x413d70
  0x00419D62: push     ecx
  0x00419D63: push     eax
  0x00419D64: call     dword ptr [0x4a2524]
  0x0041A93F: neg      eax
  0x0041A941: sbb      eax, eax
  0x0041A943: inc      eax
  0x0041A944: mov      ecx, dword ptr [esp + 0x84]
  0x0041A94B: pop      edi
  0x0041A94C: pop      esi
  0x0041A94D: pop      ebp
  0x0041A94E: pop      ebx
  0x0041A94F: mov      dword ptr fs:[0], ecx
  0x0041A956: add      esp, 0x80
  0x0041A95C: ret      4
  0x00419D2D: mov      edx, dword ptr [ebp + 0x1c]
  0x00419D30: push     edi
  0x00419D31: push     eax
  0x00419D32: push     edx
  0x00419D33: call     dword ptr [0x4a25cc]
  0x00419D80: mov      ecx, dword ptr [edi]
  0x00419D82: mov      esi, eax
  0x00419D84: mov      eax, dword ptr [ebp + 0x1c]
  0x00419D87: mov      dword ptr [esp + 0x20], esi
  0x00419D8B: cmp      eax, ecx
  0x00419D8D: je       0x419df1
  0x00419D6A: test     eax, eax
  0x00419D6C: je       0x41a934
  0x00419D39: test     eax, eax
  0x00419D3B: je       0x419d47
  0x00419DF1: mov      ecx, dword ptr [ebp + 0xdc]
  0x00419DF7: lea      eax, [esp + 0x10]
  0x00419DFB: push     0
  0x00419DFD: push     eax
  0x00419DFE: push     ecx
  0x00419DFF: mov      ecx, esi
  0x00419E01: call     0x40ec30
  0x00419D8F: mov      eax, dword ptr [ebp + 0xd8]
  0x00419D95: test     eax, eax
  0x00419D97: jne      0x419df1
  0x00419D3D: mov      eax, 1
  0x00419D42: jmp      0x41a944
  0x00419E06: cmp      eax, 1
  0x00419E09: jne      0x419e9c
  0x00419D99: xor      ebx, ebx
  0x00419D9B: jmp      0x419da1
  0x00419E0F: xor      ebx, ebx
  0x00419E11: jmp      0x419e1a
  0x00419E9C: mov      eax, dword ptr [edi + 4]
  0x00419E9F: mov      esi, dword ptr [esp + 0x20]
  0x00419EA3: cmp      eax, 0x100
  0x00419EA8: jb       0x419eb1
  0x00419DA1: lea      ecx, [esp + 0x10]
  0x00419DA5: mov      eax, ebx
  0x00419DA7: push     ecx
  0x00419DA8: push     eax
  0x00419DA9: mov      ecx, esi
  0x00419DAB: inc      ebx
  0x00419DAC: call     0x40ebf0
  0x00419E1A: mov      edx, dword ptr [esp + 0x10]
  0x00419E1E: mov      eax, ebx
  0x00419E20: push     0
  0x00419E22: push     eax
  0x00419E23: lea      ecx, [edx + 0x14]
  0x00419E26: inc      ebx
  0x00419E27: call     0x40e730
  0x00419EB1: cmp      eax, 0x200
  0x00419EB6: jb       0x419f17
  0x00419EAA: cmp      eax, 0x108
  0x00419EAF: jbe      0x419ebf
  0x00419DB1: test     eax, eax
  0x00419DB3: je       0x419df1
  0x00419E2C: mov      esi, eax
  0x00419E2E: test     esi, esi
  0x00419E30: je       0x419e9c
  0x00419F17: mov      eax, dword ptr [ebp + 0xbc]
  0x00419F1D: or       ebx, 0xffffffff
  0x00419F20: cmp      eax, 1
  0x00419F23: jne      0x419fc8
  0x00419EB8: cmp      eax, 0x209
  0x00419EBD: ja       0x419f17
  0x00419EBF: call     dword ptr [0x4a2548]
  0x00419DB5: mov      edx, dword ptr [esp + 0x10]
  0x00419DB9: push     0
  0x00419DBB: push     0
  0x00419DBD: lea      ecx, [edx + 0x14]
  0x00419DC0: call     0x40e730
  0x00419E32: mov      ecx, dword ptr [esp + 0x10]
  0x00419E36: lea      eax, [ebx - 1]
  0x00419E39: push     eax
  0x00419E3A: add      ecx, 0x14
  0x00419E3D: call     0x40ee10
  0x00419F29: cmp      dword ptr [edi + 4], 0x201
  0x00419F30: jne      0x419fc8
  0x00419FC8: push     edi
  0x00419FC9: call     0x41b990
  0x00419EC5: push     eax
  0x00419EC6: call     0x494bb2
  0x00419DC5: mov      esi, eax
  0x00419DC7: add      esi, 0x18
  0x00419DCA: push     esi
  0x00419DCB: call     0x406cf0
  0x00419E42: cmp      eax, 1
  0x00419E45: je       0x419e1a
  0x00419F36: mov      eax, dword ptr [ebp + 0x1c]
  0x00419F39: mov      ecx, dword ptr [edi]
  0x00419F3B: cmp      ecx, eax
  0x00419F3D: push     0
  0x00419F3F: jne      0x419f56
  0x00419FCE: add      esp, 4
  0x00419FD1: test     ax, ax
  0x00419FD4: je       0x41a65e
  0x00419ECB: push     eax
  0x00419ECC: mov      ecx, ebp
  0x00419ECE: call     0x418e70
  0x00419DD0: add      esi, eax
  0x00419DD2: push     esi
  0x00419DD3: call     0x406cf0
  0x00419E47: mov      edx, dword ptr [esi]
  0x00419E49: push     0
  0x00419E4B: push     edx
  0x00419E4C: push     0x3ea
  0x00419E51: call     0x413d70
  0x00419F41: push     2
  0x00419F43: push     0xa1
  0x00419F48: push     eax
  0x00419F49: call     dword ptr [0x4a2554]
  0x00419F56: mov      eax, dword ptr [ebp + 0xdc]
  0x00419F5C: lea      edx, [esp + 0x14]
  0x00419F60: push     edx
  0x00419F61: push     eax
  0x00419F62: mov      ecx, esi
  0x00419F64: call     0x40ec30
  0x0041A65E: mov      eax, dword ptr [edi + 4]
  0x0041A661: cmp      eax, 0x20
  0x0041A664: jne      0x41a67e
  0x00419FDA: mov      ecx, eax
  0x00419FDC: and      ecx, 0xffff
  0x00419FE2: cmp      ecx, 0x28
  0x00419FE5: jg       0x41a1f3
  0x00419ED3: test     eax, eax
  0x00419ED5: je       0x419f17
  0x00419DD8: add      esi, eax
  0x00419DDA: add      esp, 8
  0x00419DDD: mov      esi, dword ptr [esi]
  0x00419DDF: test     esi, esi
  0x00419DE1: je       0x419de6
  0x00419E56: test     eax, eax
  0x00419E58: je       0x419e1a
  0x00419F4F: xor      eax, eax
  0x00419F51: jmp      0x41a944
  0x00419F69: cmp      eax, 1
  0x00419F6C: jne      0x419fc8
  0x0041A666: mov      edx, dword ptr [edi]
  0x0041A668: mov      ecx, ebp
  0x0041A66A: push     edx
  0x0041A66B: call     0x41a9e0
  0x0041A67E: cmp      eax, 0x106
  0x0041A683: je       0x41a690
  0x00419FEB: cmp      ecx, 0x25
  0x00419FEE: jge      0x41a1c5
  0x0041A1F3: cmp      ecx, 0x70
  0x0041A1F6: je       0x41a574
  0x00419ED7: mov      ecx, dword ptr [eax]
  0x00419ED9: lea      edx, [esp + 0x24]
  0x00419EDD: push     edx
  0x00419EDE: push     0x2f9a900
  0x00419EE3: push     eax
  0x00419EE4: call     dword ptr [ecx]
  0x00419DE6: cmp      esi, dword ptr [edi]
  0x00419DE8: jne      0x419d9d
  0x00419DE3: mov      esi, dword ptr [esi + 0x1c]
  0x00419DE6: cmp      esi, dword ptr [edi]
  0x00419DE8: jne      0x419d9d
  0x00419E5A: test     byte ptr [eax + 0x14], 0x20
  0x00419E5E: je       0x419e1a
  0x00419F6E: mov      ecx, dword ptr [edi]
  0x00419F70: push     0
  0x00419F72: push     ecx
  0x00419F73: mov      ecx, dword ptr [esp + 0x18]
  0x00419F77: call     0x40f4c0
  0x0041A670: cmp      eax, 1
  0x0041A673: jne      0x41a125
  0x0041A690: push     edi
  0x0041A691: mov      ecx, ebp
  0x0041A693: call     0x418f60
  0x0041A685: cmp      eax, 0x102
  0x0041A68A: jne      0x41a125
  0x00419FF4: cmp      ecx, 9
  0x00419FF7: je       0x41a19d
  0x0041A1C5: cmp      ax, 0x27
  0x0041A1C9: je       0x41a1d5
  0x0041A574: push     eax
  0x0041A575: mov      ecx, ebp
  0x0041A577: call     0x418d90
  0x0041A1FC: cmp      ecx, 0x4009
  0x0041A202: je       0x41a54d
  0x00419EE6: test     eax, eax
  0x00419EE8: jl       0x419f0d
  0x00419DEA: xor      eax, eax
  0x00419DEC: jmp      0x41a944
  0x00419D9D: mov      esi, dword ptr [esp + 0x20]
  0x00419DA1: lea      ecx, [esp + 0x10]
  0x00419DA5: mov      eax, ebx
  0x00419DA7: push     ecx
  0x00419DA8: push     eax
  0x00419DA9: mov      ecx, esi
  0x00419DAB: inc      ebx
  0x00419DAC: call     0x40ebf0
  0x00419E60: push     0xb
  0x00419E62: call     dword ptr [eax + 0x2c]
  0x00419F7C: cmp      eax, ebx
  0x00419F7E: je       0x419fc8
  0x0041A679: jmp      0x41a944
  0x0041A125: mov      eax, dword ptr [edi + 4]
  0x0041A128: cmp      eax, 0x100
  0x0041A12D: je       0x41a164
  0x0041A698: cmp      eax, 1
  0x0041A69B: jne      0x41a125
  0x0041A19D: push     eax
  0x0041A19E: mov      ecx, ebp
  0x0041A1A0: call     0x418d90
  0x00419FFD: cmp      ecx, 0xd
  0x0041A000: je       0x41a042
  0x0041A1D5: mov      eax, 1
  0x0041A1DA: mov      edx, dword ptr [edi]
  0x0041A1DC: push     eax
  0x0041A1DD: push     edx
  0x0041A1DE: mov      ecx, ebp
  0x0041A1E0: call     0x419090
  0x0041A1CB: cmp      ax, 0x28
  0x0041A1CF: je       0x41a1d5
  0x0041A57C: test     eax, eax
  0x0041A57E: jne      0x41a125
  0x0041A54D: push     eax
  0x0041A54E: mov      ecx, ebp
  0x0041A550: call     0x418d90
  0x0041A208: mov      edx, eax
  0x0041A20A: and      edx, 0xe000
  0x0041A210: cmp      edx, 0x8000
  0x0041A216: jne      0x41a125
  0x00419F0D: mov      eax, dword ptr [esp + 0x24]
  0x00419F11: push     eax
  0x00419F12: mov      ecx, dword ptr [eax]
  0x00419F14: call     dword ptr [ecx + 8]
  0x00419EEA: mov      eax, dword ptr [esp + 0x24]
  0x00419EEE: push     edi
  0x00419EEF: push     eax
  0x00419EF0: mov      ecx, dword ptr [eax]
  0x00419EF2: call     dword ptr [ecx + 0x14]
  0x00419E65: mov      edi, eax
  0x00419E67: test     edi, edi
  0x00419E69: je       0x419e13
  0x00419F80: mov      edx, dword ptr [esp + 0x10]
  0x00419F84: push     0
  0x00419F86: push     0
  0x00419F88: push     eax
  0x00419F89: lea      ecx, [edx + 0x14]
  0x00419F8C: call     0x40e730
  0x0041A164: mov      ecx, dword ptr [ebp + 0xdc]
  0x0041A16A: xor      ebx, ebx
  0x0041A16C: lea      eax, [esp + 0x10]
  0x0041A170: push     ebx
  0x0041A171: push     eax
  0x0041A172: push     ecx
  0x0041A173: mov      ecx, dword ptr [esp + 0x2c]
  0x0041A177: call     0x40ec30
  0x0041A12F: cmp      eax, 0x101
  0x0041A134: je       0x41a164
  0x0041A6A1: mov      eax, 1
  0x0041A6A6: jmp      0x41a944
  0x0041A1A5: test     eax, eax
  0x0041A1A7: jne      0x41a125
  0x0041A042: push     eax
  0x0041A043: mov      ecx, ebp
  0x0041A045: call     0x418d90
  0x0041A002: cmp      ecx, 0x1b
  0x0041A005: jne      0x41a208
  0x0041A1E5: cmp      eax, 1
  0x0041A1E8: jne      0x41a125
  0x0041A1D1: xor      eax, eax
  0x0041A1D3: jmp      0x41a1da
  0x0041A584: mov      eax, dword ptr [ebp + 0xac]
  0x0041A58A: mov      esi, 1
  0x0041A58F: cmp      eax, esi
  0x0041A591: jne      0x41a125
  0x0041A555: test     eax, eax
  0x0041A557: jne      0x41a125
  0x0041A21C: and      ecx, 0xff
  0x0041A222: mov      byte ptr [esp + 0x24], 0
  0x0041A227: mov      ebx, ecx
  0x0041A229: cmp      ebx, 0x30
  0x0041A22C: jl       0x41a233
  0x00419EF5: test     eax, eax
  0x00419EF7: jne      0x419f0d
  0x00419E13: mov      edi, dword ptr [esp + 0x94]
  0x00419E1A: mov      edx, dword ptr [esp + 0x10]
  0x00419E1E: mov      eax, ebx
  0x00419E20: push     0
  0x00419E22: push     eax
  0x00419E23: lea      ecx, [edx + 0x14]
  0x00419E26: inc      ebx
  0x00419E27: call     0x40e730
  0x00419E6B: add      esi, 0x18
  0x00419E6E: push     esi
  0x00419E6F: call     0x406cf0
  0x00419F91: mov      eax, dword ptr [eax]
  0x00419F93: push     eax
  0x00419F94: push     0x3ea
  0x00419F99: call     0x413d70
  0x0041A17C: mov      esi, 1
  0x0041A181: cmp      eax, esi
  0x0041A183: jne      0x41a934
  0x0041A136: cmp      eax, 0x104
  0x0041A13B: je       0x41a164
  0x0041A1AD: mov      ecx, dword ptr [edi]
  0x0041A1AF: push     eax
  0x0041A1B0: push     eax
  0x0041A1B1: push     1
  0x0041A1B3: push     ecx
  0x0041A1B4: mov      ecx, ebp
  0x0041A1B6: call     0x419140
  0x0041A04A: test     eax, eax
  0x0041A04C: jne      0x41a125
  0x0041A00B: push     eax
  0x0041A00C: mov      ecx, ebp
  0x0041A00E: call     0x418d90
  0x0041A1EE: jmp      0x41a944
  0x0041A1DA: mov      edx, dword ptr [edi]
  0x0041A1DC: push     eax
  0x0041A1DD: push     edx
  0x0041A1DE: mov      ecx, ebp
  0x0041A1E0: call     0x419090
  0x0041A597: lea      ecx, [ebp + 0xb0]
  0x0041A59D: push     ecx
  0x0041A59E: lea      ecx, [esp + 0x18]
  0x0041A5A2: call     0x492f4b
  0x0041A55D: push     eax
  0x0041A55E: push     eax
  0x0041A55F: push     eax
  0x0041A560: mov      eax, dword ptr [edi]
  0x0041A562: push     eax
  0x0041A563: mov      ecx, ebp
  0x0041A565: call     0x419140
  0x0041A233: cmp      ebx, 0x41
  0x0041A236: jl       0x41a125
  0x0041A22E: cmp      ebx, 0x39
  0x0041A231: jle      0x41a24e
  0x00419EF9: mov      eax, dword ptr [esp + 0x24]
  0x00419EFD: push     eax
  0x00419EFE: mov      edx, dword ptr [eax]
  0x00419F00: call     dword ptr [edx + 8]
  0x00419E74: add      esi, eax
  0x00419E76: push     esi
  0x00419E77: call     0x406cf0
  0x00419F9E: test     eax, eax
  0x00419FA0: je       0x419fc8
  0x0041A189: mov      eax, dword ptr [edi]
  0x0041A18B: mov      ecx, dword ptr [ebp + 0x1c]
  0x0041A18E: cmp      eax, ecx
  0x0041A190: jne      0x41a6ab
  0x0041A13D: cmp      eax, 0x105
  0x0041A142: je       0x41a164
  0x0041A1BB: mov      eax, 1
  0x0041A1C0: jmp      0x41a944
  0x0041A052: mov      dword ptr [esp + 0x10], eax
  0x0041A056: mov      eax, dword ptr [edi]
  0x0041A058: test     eax, eax
  0x0041A05A: je       0x41a0ae
  0x0041A013: test     eax, eax
  0x0041A015: jne      0x41a125
  0x0041A5A7: mov      edx, dword ptr [esp + 0x14]
  0x0041A5AB: mov      dword ptr [esp + 0x8c], 0
  0x0041A5B6: mov      eax, dword ptr [edx - 8]
  0x0041A5B9: test     eax, eax
  0x0041A5BB: jne      0x41a5eb
  0x0041A56A: mov      eax, 1
  0x0041A56F: jmp      0x41a944
  0x0041A23C: cmp      ebx, 0x5a
  0x0041A23F: jg       0x41a125
  0x0041A24E: push     eax
  0x0041A24F: mov      ecx, ebp
  0x0041A251: call     0x418d90
  0x00419F03: mov      eax, 1
  0x00419F08: jmp      0x41a944
  0x00419E7C: add      esi, eax
  0x00419E7E: mov      eax, dword ptr [esp + 0x9c]
  0x00419E85: add      esp, 8
  0x00419E88: mov      esi, dword ptr [esi]
  0x00419E8A: push     eax
  0x00419E8B: push     esi
  0x00419E8C: call     edi
  0x00419FA2: test     dword ptr [eax + 0x14], 0x4000000
  0x00419FA9: je       0x419fc8
  0x0041A196: xor      eax, eax
  0x0041A198: jmp      0x41a6bf
  0x0041A6AB: mov      ecx, dword ptr [esp + 0x10]
  0x0041A6AF: push     ebx
  0x0041A6B0: push     eax
  0x0041A6B1: call     0x40f4c0
  0x0041A144: cmp      eax, 0x102
  0x0041A149: je       0x41a164
  0x0041A0AE: cmp      dword ptr [ebp + 0xa4], 1
  0x0041A0B5: jne      0x41a0d1
  0x0041A05C: push     eax
  0x0041A05D: mov      eax, dword ptr [ebp + 0x1c]
  0x0041A060: push     eax
  0x0041A061: call     dword ptr [0x4a2524]
  0x0041A01B: cmp      dword ptr [ebp + 0xa8], 1
  0x0041A022: jne      0x41a125
  0x0041A5BD: push     0
  0x0041A5BF: push     0
  0x0041A5C1: push     0x7d4
  0x0041A5C6: call     0x413d70
  0x0041A5EB: mov      eax, dword ptr [esp + 0x14]
  0x0041A5EF: mov      ecx, dword ptr [eax - 8]
  0x0041A5F2: test     ecx, ecx
  0x0041A5F4: je       0x41a649
  0x0041A245: mov      cl, bl
  0x0041A247: add      cl, 0x20
  0x0041A24A: mov      byte ptr [esp + 0x24], cl
  0x0041A24E: push     eax
  0x0041A24F: mov      ecx, ebp
  0x0041A251: call     0x418d90
  0x0041A256: cmp      eax, 1
  0x0041A259: je       0x41a125
  0x00419E8E: test     eax, eax
  0x00419E90: je       0x419e13
  0x00419FAB: mov      ecx, dword ptr [ebp + 0x1c]
  0x00419FAE: push     0
  0x00419FB0: push     2
  0x00419FB2: push     0xa1
  0x00419FB7: push     ecx
  0x00419FB8: call     dword ptr [0x4a2554]
  0x0041A6BF: mov      edx, dword ptr [esp + 0x10]
  0x0041A6C3: push     eax
  0x0041A6C4: lea      ecx, [edx + 0x14]
  0x0041A6C7: call     0x40e780
  0x0041A6B6: cmp      eax, -1
  0x0041A6B9: je       0x41a934
  0x0041A14B: cmp      eax, 0x200
  0x0041A150: jb       0x41a159
  0x0041A0B7: mov      edx, dword ptr [edi]
  0x0041A0B9: push     0
  0x0041A0BB: push     0
  0x0041A0BD: push     1
  0x0041A0BF: push     edx
  0x0041A0C0: mov      ecx, ebp
  0x0041A0C2: call     0x419140
  0x0041A0D1: mov      eax, dword ptr [esp + 0x10]
  0x0041A0D5: test     eax, eax
  0x0041A0D7: jne      0x41a0f3
  0x0041A067: test     eax, eax
  0x0041A069: je       0x41a0ae
  0x0041A028: mov      edx, dword ptr [ebp + 0x1c]
  0x0041A02B: push     0
  0x0041A02D: push     0
  0x0041A02F: push     0x10
  0x0041A031: push     edx
  0x0041A032: call     dword ptr [0x4a2564]
  0x0041A5CB: test     eax, eax
  0x0041A5CD: je       0x41a5eb
  0x0041A649: lea      ecx, [esp + 0x14]
  0x0041A64D: mov      dword ptr [esp + 0x8c], ebx
  0x0041A654: call     0x4931d6
  0x0041A5F6: push     eax
  0x0041A5F7: call     0x41b810
  0x0041A25F: mov      ecx, dword ptr [ebp + 0xdc]
  0x0041A265: lea      eax, [esp + 0x10]
  0x0041A269: push     0
  0x0041A26B: push     eax
  0x0041A26C: push     ecx
  0x0041A26D: mov      ecx, dword ptr [esp + 0x2c]
  0x0041A271: call     0x40ec30
  0x00419E92: mov      eax, 1
  0x00419E97: jmp      0x41a944
  0x00419FBE: mov      eax, 1
  0x00419FC3: jmp      0x41a944
  0x0041A6CC: mov      ecx, dword ptr [ebp + 0xdc]
  0x0041A6D2: mov      dword ptr [esp + 0x30], eax
  0x0041A6D6: mov      eax, dword ptr [edi + 4]
  0x0041A6D9: mov      dword ptr [esp + 0x2c], ecx
  0x0041A6DD: cmp      eax, 0x200
  0x0041A6E2: mov      ecx, 0xfffffff9
  0x0041A6E7: mov      dword ptr [esp + 0x38], ebx
  0x0041A6EB: mov      dword ptr [esp + 0x50], ebx
  0x0041A6EF: mov      dword ptr [esp + 0x54], ebx
  0x0041A6F3: ja       0x41a7e5
  0x0041A159: cmp      eax, 0x20a
  0x0041A15E: jne      0x41a934
  0x0041A152: cmp      eax, 0x209
  0x0041A157: jbe      0x41a164
  0x0041A0C7: mov      eax, 1
  0x0041A0CC: jmp      0x41a944
  0x0041A0D9: mov      ecx, dword ptr [ebp + 0xdc]
  0x0041A0DF: lea      eax, [esp + 0x10]
  0x0041A0E3: push     0
  0x0041A0E5: push     eax
  0x0041A0E6: push     ecx
  0x0041A0E7: mov      ecx, esi
  0x0041A0E9: call     0x40ec30
  0x0041A0F3: mov      edx, dword ptr [esp + 0x10]
  0x0041A0F7: mov      esi, 1
  0x0041A0FC: mov      ebx, dword ptr [edx + 0x18]
  0x0041A0FF: cmp      ebx, esi
  0x0041A101: jle      0x41a125
  0x0041A06B: mov      edx, dword ptr [ebp + 0xdc]
  0x0041A071: lea      ecx, [esp + 0x10]
  0x0041A075: push     0
  0x0041A077: push     ecx
  0x0041A078: push     edx
  0x0041A079: mov      ecx, esi
  0x0041A07B: call     0x40ec30
  0x0041A038: mov      eax, 1
  0x0041A03D: jmp      0x41a944
  0x0041A5CF: push     eax
  0x0041A5D0: lea      ecx, [esp + 0x18]
  0x0041A5D4: call     0x493313
  0x0041A659: jmp      0x41a125
  0x0041A5FC: add      esp, 4
  0x0041A5FF: cmp      eax, esi
  0x0041A601: jne      0x41a649
  0x0041A276: test     eax, eax
  0x0041A278: je       0x41a125
  0x0041A6F9: je       0x41a803
  0x0041A7E5: add      eax, 0xfffffdff
  0x0041A7EA: cmp      eax, 9
  0x0041A7ED: ja       0x41a934
  0x0041A0EE: cmp      eax, 1
  0x0041A0F1: jne      0x41a125
  0x0041A103: mov      eax, dword ptr [esp + 0x10]
  0x0041A107: push     esi
  0x0041A108: push     eax
  0x0041A109: mov      ecx, ebp
  0x0041A10B: call     0x419bb0
  0x0041A080: cmp      eax, 1
  0x0041A083: jne      0x41a0ae
  0x0041A5D9: lea      eax, [esp + 0x14]
  0x0041A5DD: push     0x2fab638
  0x0041A5E2: push     eax
  0x0041A5E3: call     0x41b8c0
  0x0041A603: mov      eax, dword ptr [ebp + 0xb4]
  0x0041A609: mov      dword ptr [ebp + 0xe4], esi
  0x0041A60F: test     eax, eax
  0x0041A611: jne      0x41a621
  0x0041A27E: mov      eax, dword ptr [0x2fd8088]
  0x0041A283: mov      dword ptr [esp + 0x1c], eax
  0x0041A287: mov      dword ptr [esp + 0x8c], 1
  0x0041A292: mov      dword ptr [esp + 0x18], eax
  0x0041A296: mov      dword ptr [esp + 0x14], eax
  0x0041A29A: push     0x26
  0x0041A29C: lea      ecx, [esp + 0x20]
  0x0041A2A0: mov      byte ptr [esp + 0x90], 3
  0x0041A2A8: call     0x490e1c
  0x0041A803: mov      esi, dword ptr [0x4a2590]
  0x0041A809: inc      ecx
  0x0041A80A: mov      dword ptr [esp + 0x34], ecx
  0x0041A80E: mov      ecx, dword ptr [edi + 0xc]
  0x0041A811: xor      eax, eax
  0x0041A813: push     0x11
  0x0041A815: mov      ax, word ptr [edi + 0xc]
  0x0041A819: mov      dword ptr [esp + 0x3c], 3
  0x0041A821: shr      ecx, 0x10
  0x0041A824: mov      dword ptr [esp + 0x40], eax
  0x0041A828: mov      dword ptr [esp + 0x44], ecx
  0x0041A82C: mov      dword ptr [esp + 0x48], ebx
  0x0041A830: call     esi
  0x0041A6FF: add      eax, 0xffffff00
  0x0041A704: cmp      eax, 5
  0x0041A707: ja       0x41a934
  0x0041A7F3: jmp      dword ptr [eax*4 + 0x41a978]
  0x0041A110: cmp      eax, 1
  0x0041A113: je       0x41a6a1
  0x0041A085: mov      eax, dword ptr [edi]
  0x0041A087: mov      ecx, dword ptr [esp + 0x10]
  0x0041A08B: push     0
  0x0041A08D: push     eax
  0x0041A08E: call     0x40f4c0
  0x0041A5E8: add      esp, 8
  0x0041A5EB: mov      eax, dword ptr [esp + 0x14]
  0x0041A5EF: mov      ecx, dword ptr [eax - 8]
  0x0041A5F2: test     ecx, ecx
  0x0041A5F4: je       0x41a649
  0x0041A613: mov      ecx, dword ptr [esp + 0x14]
  0x0041A617: mov      edx, dword ptr [ebp + 0x1c]
  0x0041A61A: push     eax
  0x0041A61B: push     0xb
  0x0041A61D: push     ecx
  0x0041A61E: push     edx
  0x0041A61F: jmp      0x41a62c
  0x0041A621: mov      ecx, dword ptr [ebp + 0x1c]
  0x0041A624: push     eax
  0x0041A625: mov      eax, dword ptr [esp + 0x18]
  0x0041A629: push     esi
  0x0041A62A: push     eax
  0x0041A62B: push     ecx
  0x0041A62C: call     dword ptr [0x4a249c]
  0x0041A2AD: push     ebx
  0x0041A2AE: lea      ecx, [esp + 0x20]
  0x0041A2B2: call     0x49358d
  0x0041A832: test     ax, ax
  0x0041A835: jge      0x41a841
  0x0041A70D: jmp      dword ptr [eax*4 + 0x41a960]
  0x0041A800: inc      ecx
  0x0041A801: inc      ecx
  0x0041A802: inc      ecx
  0x0041A803: mov      esi, dword ptr [0x4a2590]
  0x0041A809: inc      ecx
  0x0041A80A: mov      dword ptr [esp + 0x34], ecx
  0x0041A80E: mov      ecx, dword ptr [edi + 0xc]
  0x0041A811: xor      eax, eax
  0x0041A813: push     0x11
  0x0041A815: mov      ax, word ptr [edi + 0xc]
  0x0041A819: mov      dword ptr [esp + 0x3c], 3
  0x0041A821: shr      ecx, 0x10
  0x0041A824: mov      dword ptr [esp + 0x40], eax
  0x0041A828: mov      dword ptr [esp + 0x44], ecx
  0x0041A82C: mov      dword ptr [esp + 0x48], ebx
  0x0041A830: call     esi
  0x0041A801: inc      ecx
  0x0041A802: inc      ecx
  0x0041A803: mov      esi, dword ptr [0x4a2590]
  0x0041A809: inc      ecx
  0x0041A80A: mov      dword ptr [esp + 0x34], ecx
  0x0041A80E: mov      ecx, dword ptr [edi + 0xc]
  0x0041A811: xor      eax, eax
  0x0041A813: push     0x11
  0x0041A815: mov      ax, word ptr [edi + 0xc]
  0x0041A819: mov      dword ptr [esp + 0x3c], 3
  0x0041A821: shr      ecx, 0x10
  0x0041A824: mov      dword ptr [esp + 0x40], eax
  0x0041A828: mov      dword ptr [esp + 0x44], ecx
  0x0041A82C: mov      dword ptr [esp + 0x48], ebx
  0x0041A830: call     esi
  0x0041A802: inc      ecx
  0x0041A803: mov      esi, dword ptr [0x4a2590]
  0x0041A809: inc      ecx
  0x0041A80A: mov      dword ptr [esp + 0x34], ecx
  0x0041A80E: mov      ecx, dword ptr [edi + 0xc]
  0x0041A811: xor      eax, eax
  0x0041A813: push     0x11
  0x0041A815: mov      ax, word ptr [edi + 0xc]
  0x0041A819: mov      dword ptr [esp + 0x3c], 3
  0x0041A821: shr      ecx, 0x10
  0x0041A824: mov      dword ptr [esp + 0x40], eax
  0x0041A828: mov      dword ptr [esp + 0x44], ecx
  0x0041A82C: mov      dword ptr [esp + 0x48], ebx
  0x0041A830: call     esi
  0x0041A89F: mov      eax, dword ptr [edi + 8]
  0x0041A8A2: mov      esi, dword ptr [0x4a2590]
  0x0041A8A8: shr      eax, 0x10
  0x0041A8AB: movsx    ecx, ax
  0x0041A8AE: mov      eax, 0x88888889
  0x0041A8B3: mov      ebp, 2
  0x0041A8B8: imul     ecx
  0x0041A8BA: add      edx, ecx
  0x0041A8BC: push     0x11
  0x0041A8BE: sar      edx, 6
  0x0041A8C1: mov      ecx, edx
  0x0041A8C3: mov      dword ptr [esp + 0x38], 0xfffffff4
  0x0041A8CB: shr      ecx, 0x1f
  0x0041A8CE: add      edx, ecx
  0x0041A8D0: mov      dword ptr [esp + 0x3c], ebp
  0x0041A8D4: mov      dword ptr [esp + 0x40], edx
  0x0041A8D8: mov      dword ptr [esp + 0x44], ebx
  0x0041A8DC: call     esi
  0x0041A7FA: mov      ecx, 0xfffffffa
  0x0041A7FF: inc      ecx
  0x0041A800: inc      ecx
  0x0041A801: inc      ecx
  0x0041A802: inc      ecx
  0x0041A803: mov      esi, dword ptr [0x4a2590]
  0x0041A809: inc      ecx
  0x0041A80A: mov      dword ptr [esp + 0x34], ecx
  0x0041A80E: mov      ecx, dword ptr [edi + 0xc]
  0x0041A811: xor      eax, eax
  0x0041A813: push     0x11
  0x0041A815: mov      ax, word ptr [edi + 0xc]
  0x0041A819: mov      dword ptr [esp + 0x3c], 3
  0x0041A821: shr      ecx, 0x10
  0x0041A824: mov      dword ptr [esp + 0x40], eax
  0x0041A828: mov      dword ptr [esp + 0x44], ecx
  0x0041A82C: mov      dword ptr [esp + 0x48], ebx
  0x0041A830: call     esi
  0x0041A7FF: inc      ecx
  0x0041A800: inc      ecx
  0x0041A801: inc      ecx
  0x0041A802: inc      ecx
  0x0041A803: mov      esi, dword ptr [0x4a2590]
  0x0041A809: inc      ecx
  0x0041A80A: mov      dword ptr [esp + 0x34], ecx
  0x0041A80E: mov      ecx, dword ptr [edi + 0xc]
  0x0041A811: xor      eax, eax
  0x0041A813: push     0x11
  0x0041A815: mov      ax, word ptr [edi + 0xc]
  0x0041A819: mov      dword ptr [esp + 0x3c], 3
  0x0041A821: shr      ecx, 0x10
  0x0041A824: mov      dword ptr [esp + 0x40], eax
  0x0041A828: mov      dword ptr [esp + 0x44], ecx
  0x0041A82C: mov      dword ptr [esp + 0x48], ebx
  0x0041A830: call     esi
  0x0041A119: inc      esi
  0x0041A11A: cmp      esi, ebx
  0x0041A11C: jl       0x41a103
  0x0041A093: cmp      eax, ebx
  0x0041A095: je       0x41a0ae
  0x0041A62C: call     dword ptr [0x4a249c]
  0x0041A632: lea      ecx, [esp + 0x14]
  0x0041A636: mov      dword ptr [esp + 0x8c], ebx
  0x0041A63D: call     0x4931d6
  0x0041A2B7: mov      al, byte ptr [esp + 0x24]
  0x0041A2BB: test     al, al
  0x0041A2BD: je       0x41a2d8
  0x0041A837: mov      eax, dword ptr [esp + 0x44]
  0x0041A83B: or       al, 1
  0x0041A83D: mov      dword ptr [esp + 0x44], eax
  0x0041A841: push     0x10
  0x0041A843: call     esi
  0x0041A841: push     0x10
  0x0041A843: call     esi
  0x0041A719: sub      ecx, 3
  0x0041A71C: push     edi
  0x0041A71D: mov      dword ptr [esp + 0x38], ecx
  0x0041A721: call     0x41b9c0
  0x0041A799: mov      ecx, dword ptr [edi + 8]
  0x0041A79C: lea      edx, [esp + 0x2c]
  0x0041A7A0: push     ebx
  0x0041A7A1: push     edx
  0x0041A7A2: push     0x7d8
  0x0041A7A7: mov      dword ptr [esp + 0x40], 0xfffffff5
  0x0041A7AF: mov      dword ptr [esp + 0x44], esi
  0x0041A7B3: mov      dword ptr [esp + 0x48], ecx
  0x0041A7B7: call     0x413d70
  0x0041A714: mov      ecx, 0xfffffffa
  0x0041A719: sub      ecx, 3
  0x0041A71C: push     edi
  0x0041A71D: mov      dword ptr [esp + 0x38], ecx
  0x0041A721: call     0x41b9c0
  0x0041A8DE: test     ax, ax
  0x0041A8E1: jge      0x41a8ed
  0x0041A11E: mov      edi, dword ptr [esp + 0x94]
  0x0041A125: mov      eax, dword ptr [edi + 4]
  0x0041A128: cmp      eax, 0x100
  0x0041A12D: je       0x41a164
  0x0041A097: mov      ecx, dword ptr [esp + 0x10]
  0x0041A09B: push     eax
  0x0041A09C: push     ecx
  0x0041A09D: mov      ecx, ebp
  0x0041A09F: call     0x419bb0
  0x0041A642: mov      eax, esi
  0x0041A644: jmp      0x41a944
  0x0041A2D8: xor      ebx, ebx
  0x0041A2DA: mov      eax, ebx
  0x0041A2DC: push     0
  0x0041A2DE: push     eax
  0x0041A2DF: mov      eax, dword ptr [esp + 0x18]
  0x0041A2E3: inc      ebx
  0x0041A2E4: lea      ecx, [eax + 0x14]
  0x0041A2E7: call     0x40e730
  0x0041A2BF: push     0x26
  0x0041A2C1: lea      ecx, [esp + 0x1c]
  0x0041A2C5: call     0x490e1c
  0x0041A845: test     ax, ax
  0x0041A848: jge      0x41a854
  0x0041A726: mov      edx, eax
  0x0041A728: add      esp, 4
  0x0041A72B: and      edx, 0xffff
  0x0041A731: mov      ecx, 2
  0x0041A736: and      dh, 0x1f
  0x0041A739: mov      dword ptr [esp + 0x38], ecx
  0x0041A73D: test     ah, 0x20
  0x0041A740: mov      dword ptr [esp + 0x3c], edx
  0x0041A744: mov      dword ptr [esp + 0x40], ebx
  0x0041A748: je       0x41a74e
  0x0041A7BC: test     eax, eax
  0x0041A7BE: je       0x41a934
  0x0041A8E3: mov      eax, dword ptr [esp + 0x40]
  0x0041A8E7: or       al, 1
  0x0041A8E9: mov      dword ptr [esp + 0x40], eax
  0x0041A8ED: push     0x10
  0x0041A8EF: call     esi
  0x0041A8ED: push     0x10
  0x0041A8EF: call     esi
  0x0041A0A4: cmp      eax, 1
  0x0041A0A7: jne      0x41a0ae
  0x0041A2EC: mov      esi, eax
  0x0041A2EE: test     esi, esi
  0x0041A2F0: je       0x41a50e
  0x0041A2CA: mov      edx, dword ptr [esp + 0x24]
  0x0041A2CE: lea      ecx, [esp + 0x18]
  0x0041A2D2: push     edx
  0x0041A2D3: call     0x49358d
  0x0041A84A: mov      eax, dword ptr [esp + 0x44]
  0x0041A84E: or       al, 2
  0x0041A850: mov      dword ptr [esp + 0x44], eax
  0x0041A854: push     0x12
  0x0041A856: call     esi
  0x0041A854: push     0x12
  0x0041A856: call     esi
  0x0041A74E: test     ah, 0x40
  0x0041A751: je       0x41a757
  0x0041A74A: mov      dword ptr [esp + 0x40], esi
  0x0041A74E: test     ah, 0x40
  0x0041A751: je       0x41a757
  0x0041A7C4: cmp      dword ptr [esp + 0x50], esi
  0x0041A7C8: jne      0x41a934
  0x0041A8F1: test     ax, ax
  0x0041A8F4: jge      0x41a8fa
  0x0041A0A9: jmp      0x41a944
  0x0041A50E: lea      ecx, [esp + 0x14]
  0x0041A512: mov      dword ptr [esp + 0x24], ebx
  0x0041A516: mov      byte ptr [esp + 0x8c], 2
  0x0041A51E: call     0x4931d6
  0x0041A2F6: mov      edx, dword ptr [esp + 0x10]
  0x0041A2FA: lea      ecx, [ebx - 1]
  0x0041A2FD: push     ecx
  0x0041A2FE: lea      ecx, [edx + 0x14]
  0x0041A301: call     0x40ee10
  0x0041A858: test     ax, ax
  0x0041A85B: jge      0x41a867
  0x0041A757: test     ah, 0x80
  0x0041A75A: je       0x41a766
  0x0041A753: or       dword ptr [esp + 0x40], ecx
  0x0041A757: test     ah, 0x80
  0x0041A75A: je       0x41a766
  0x0041A7CE: mov      eax, dword ptr [esp + 0x54]
  0x0041A7D2: cmp      eax, ebx
  0x0041A7D4: jne      0x41a7dd
  0x0041A8F6: or       dword ptr [esp + 0x40], ebp
  0x0041A8FA: push     0x12
  0x0041A8FC: call     esi
  0x0041A8FA: push     0x12
  0x0041A8FC: call     esi
  0x0041A523: lea      ecx, [esp + 0x18]
  0x0041A527: mov      byte ptr [esp + 0x8c], 1
  0x0041A52F: call     0x4931d6
  0x0041A306: cmp      eax, 1
  0x0041A309: je       0x41a2da
  0x0041A85D: mov      eax, dword ptr [esp + 0x44]
  0x0041A861: or       al, 4
  0x0041A863: mov      dword ptr [esp + 0x44], eax
  0x0041A867: lea      edx, [esp + 0x2c]
  0x0041A86B: push     ebx
  0x0041A86C: push     edx
  0x0041A86D: push     0x7d8
  0x0041A872: call     0x413d70
  0x0041A867: lea      edx, [esp + 0x2c]
  0x0041A86B: push     ebx
  0x0041A86C: push     edx
  0x0041A86D: push     0x7d8
  0x0041A872: call     0x413d70
  0x0041A766: lea      eax, [esp + 0x2c]
  0x0041A76A: push     ebx
  0x0041A76B: push     eax
  0x0041A76C: push     0x7d8
  0x0041A771: call     0x413d70
  0x0041A75C: mov      eax, dword ptr [esp + 0x40]
  0x0041A760: or       al, 4
  0x0041A762: mov      dword ptr [esp + 0x40], eax
  0x0041A766: lea      eax, [esp + 0x2c]
  0x0041A76A: push     ebx
  0x0041A76B: push     eax
  0x0041A76C: push     0x7d8
  0x0041A771: call     0x413d70
  0x0041A7D6: mov      eax, esi
  0x0041A7D8: jmp      0x41a944
  0x0041A7DD: mov      dword ptr [edi + 8], eax
  0x0041A7E0: jmp      0x41a934
  0x0041A8FE: test     ax, ax
  0x0041A901: jge      0x41a90d
  0x0041A534: lea      ecx, [esp + 0x1c]
  0x0041A538: mov      dword ptr [esp + 0x8c], 0xffffffff
  0x0041A543: call     0x4931d6
  0x0041A2DA: mov      eax, ebx
  0x0041A2DC: push     0
  0x0041A2DE: push     eax
  0x0041A2DF: mov      eax, dword ptr [esp + 0x18]
  0x0041A2E3: inc      ebx
  0x0041A2E4: lea      ecx, [eax + 0x14]
  0x0041A2E7: call     0x40e730
  0x0041A30B: mov      eax, dword ptr [esi]
  0x0041A30D: push     0
  0x0041A30F: push     eax
  0x0041A310: push     0x3ea
  0x0041A315: call     0x413d70
  0x0041A877: test     eax, eax
  0x0041A879: je       0x41a934
  0x0041A776: test     eax, eax
  0x0041A778: je       0x41a934
  0x0041A903: mov      eax, dword ptr [esp + 0x40]
  0x0041A907: or       al, 4
  0x0041A909: mov      dword ptr [esp + 0x40], eax
  0x0041A90D: lea      edx, [esp + 0x2c]
  0x0041A911: push     ebx
  0x0041A912: push     edx
  0x0041A913: push     0x7d8
  0x0041A918: call     0x413d70
  0x0041A90D: lea      edx, [esp + 0x2c]
  0x0041A911: push     ebx
  0x0041A912: push     edx
  0x0041A913: push     0x7d8
  0x0041A918: call     0x413d70
  0x0041A548: jmp      0x41a11e
  0x0041A31A: add      esi, 0x18
  0x0041A31D: mov      edi, eax
  0x0041A31F: push     esi
  0x0041A320: call     0x406cf0
  0x0041A87F: mov      ecx, dword ptr [esp + 0x50]
  0x0041A883: mov      eax, 1
  0x0041A888: cmp      ecx, eax
  0x0041A88A: jne      0x41a934
  0x0041A77E: cmp      dword ptr [esp + 0x50], esi
  0x0041A782: jne      0x41a934
  0x0041A91D: test     eax, eax
  0x0041A91F: je       0x41a934
  0x0041A325: add      esi, eax
  0x0041A327: push     esi
  0x0041A328: call     0x406cf0
  0x0041A890: cmp      dword ptr [esp + 0x54], ebx
  0x0041A894: jne      0x41a934
  0x0041A788: cmp      dword ptr [esp + 0x54], ebx
  0x0041A78C: jne      0x41a934
  0x0041A921: mov      ecx, dword ptr [esp + 0x50]
  0x0041A925: mov      eax, 1
  0x0041A92A: cmp      ecx, eax
  0x0041A92C: jne      0x41a934
  0x0041A32D: add      esi, eax
  0x0041A32F: add      esp, 8
  0x0041A332: test     edi, edi
  0x0041A334: mov      esi, dword ptr [esi]
  0x0041A336: je       0x41a2da
  0x0041A89A: jmp      0x41a944
  0x0041A792: mov      eax, esi
  0x0041A794: jmp      0x41a944
  0x0041A92E: cmp      dword ptr [esp + 0x54], ebx
  0x0041A932: je       0x41a944
  0x0041A338: test     esi, esi
  0x0041A33A: je       0x41a2da
  0x0041A33C: mov      ecx, dword ptr [esi + 0x1c]
  0x0041A33F: push     ecx
  0x0041A340: call     dword ptr [0x4a2558]
  0x0041A346: test     eax, eax
  0x0041A348: je       0x41a2da
  0x0041A34A: mov      edx, dword ptr [esi + 0x1c]
  0x0041A34D: push     edx
  0x0041A34E: call     dword ptr [0x4a24ec]
  0x0041A354: cmp      eax, 1
  0x0041A357: jne      0x41a2da
  0x0041A359: mov      ecx, esi
  0x0041A35B: call     0x4975a7
  0x0041A360: cmp      eax, 1
  0x0041A363: jne      0x41a2da
  0x0041A369: mov      eax, dword ptr [edi + 0x14]
  0x0041A36C: test     ah, 0x80
  0x0041A36F: jne      0x41a2da
  0x0041A375: test     ah, 0x7c
  0x0041A378: je       0x41a2da
  0x0041A37E: lea      eax, [esp + 0x14]
  0x0041A382: mov      ecx, esi
  0x0041A384: push     eax
  0x0041A385: call     0x49557d
  0x0041A38A: mov      ecx, dword ptr [esp + 0x1c]
  0x0041A38E: push     ecx
  0x0041A38F: lea      ecx, [esp + 0x18]
  0x0041A393: call     0x490f25
  0x0041A398: cmp      eax, -1
  0x0041A39B: jne      0x41a3c0
  0x0041A39D: mov      al, byte ptr [esp + 0x24]
  0x0041A3A1: test     al, al
  0x0041A3A3: je       0x41a2da
  0x0041A3C0: mov      edi, dword ptr [edi + 0x14]
  0x0041A3C3: mov      dword ptr [esp + 0x24], ebx
  0x0041A3C7: test     edi, 0x1c00
  0x0041A3CD: je       0x41a4aa
  0x0041A3A9: mov      edx, dword ptr [esp + 0x18]
  0x0041A3AD: lea      ecx, [esp + 0x14]
  0x0041A3B1: push     edx
  0x0041A3B2: call     0x490f25
  0x0041A4AA: test     edi, 0x2000
  0x0041A4B0: je       0x41a4be
  0x0041A3D3: test     edi, 0x1000
  0x0041A3D9: je       0x41a413
  0x0041A3B7: cmp      eax, -1
  0x0041A3BA: je       0x41a2da
  0x0041A4BE: mov      esi, dword ptr [esi + 0x1c]
  0x0041A4C1: push     esi
  0x0041A4C2: push     0
  0x0041A4C4: push     1
  0x0041A4C6: push     esi
  0x0041A4C7: mov      ecx, ebp
  0x0041A4C9: call     0x419140
  0x0041A4B2: mov      edx, dword ptr [esi + 0x1c]
  0x0041A4B5: push     0
  0x0041A4B7: push     0
  0x0041A4B9: push     1
  0x0041A4BB: push     edx
  0x0041A4BC: jmp      0x41a4c7
  0x0041A413: test     edi, 0x400
  0x0041A419: je       0x41a445
  0x0041A3DB: mov      eax, dword ptr [esi + 0x1c]
  0x0041A3DE: mov      edi, dword ptr [0x4a2564]
  0x0041A3E4: xor      ebx, ebx
  0x0041A3E6: push     ebx
  0x0041A3E7: push     ebx
  0x0041A3E8: push     0xf0
  0x0041A3ED: push     eax
  0x0041A3EE: call     edi
  0x0041A4CE: lea      ecx, [esp + 0x14]
  0x0041A4D2: mov      byte ptr [esp + 0x8c], 2
  0x0041A4DA: call     0x4931d6
  0x0041A4C7: mov      ecx, ebp
  0x0041A4C9: call     0x419140
  0x0041A445: xor      ebx, ebx
  0x0041A447: lea      ecx, [esp + 0x1c]
  0x0041A44B: call     0x493161
  0x0041A41B: mov      eax, dword ptr [esi + 0x1c]
  0x0041A41E: push     eax
  0x0041A41F: call     dword ptr [0x4a254c]
  0x0041A3F0: cmp      eax, 1
  0x0041A3F3: push     ebx
  0x0041A3F4: jne      0x41a404
  0x0041A4DF: lea      ecx, [esp + 0x18]
  0x0041A4E3: mov      byte ptr [esp + 0x8c], 1
  0x0041A4EB: call     0x4931d6
  0x0041A450: lea      ecx, [esp + 0x18]
  0x0041A454: call     0x493161
  0x0041A425: mov      ecx, dword ptr [esp + 0x10]
  0x0041A429: push     eax
  0x0041A42A: call     0x40f680
  0x0041A3F6: mov      ecx, dword ptr [esi + 0x1c]
  0x0041A3F9: push     ebx
  0x0041A3FA: push     0xf1
  0x0041A3FF: push     ecx
  0x0041A400: call     edi
  0x0041A404: mov      edx, dword ptr [esi + 0x1c]
  0x0041A407: push     1
  0x0041A409: push     0xf1
  0x0041A40E: push     edx
  0x0041A40F: call     edi
  0x0041A4F0: lea      ecx, [esp + 0x1c]
  0x0041A4F4: mov      dword ptr [esp + 0x8c], 0xffffffff
  0x0041A4FF: call     0x4931d6
  0x0041A459: lea      ecx, [esp + 0x14]
  0x0041A45D: call     0x493161
  0x0041A42F: mov      ecx, dword ptr [esi + 0x1c]
  0x0041A432: xor      ebx, ebx
  0x0041A434: push     ebx
  0x0041A435: push     1
  0x0041A437: push     0xf1
  0x0041A43C: push     ecx
  0x0041A43D: call     dword ptr [0x4a2564]
  0x0041A402: jmp      0x41a447
  0x0041A411: jmp      0x41a447
  0x0041A504: mov      eax, 1
  0x0041A509: jmp      0x41a944
  0x0041A462: mov      edx, dword ptr [esp + 0x24]
  0x0041A466: mov      eax, dword ptr [esp + 0x10]
  0x0041A46A: mov      esi, dword ptr [ebp + 0xdc]
  0x0041A470: dec      edx
  0x0041A471: push     edx
  0x0041A472: lea      ecx, [eax + 0x14]
  0x0041A475: call     0x40e780
  0x0041A443: jmp      0x41a447
  0x0041A447: lea      ecx, [esp + 0x1c]
  0x0041A44B: call     0x493161
  0x0041A47A: lea      ecx, [esp + 0x58]
  0x0041A47E: push     ebx
  0x0041A47F: push     ecx
  0x0041A480: push     0x7d8
  0x0041A485: mov      dword ptr [esp + 0x64], esi
  0x0041A489: mov      dword ptr [esp + 0x68], eax
  0x0041A48D: mov      dword ptr [esp + 0x6c], ebx
  0x0041A491: mov      dword ptr [esp + 0x70], ebx
  0x0041A495: mov      dword ptr [esp + 0x88], ebx
  0x0041A49C: mov      dword ptr [esp + 0x8c], ebx
  0x0041A4A3: call     0x413d70
  0x0041A4A8: jmp      0x41a4ce

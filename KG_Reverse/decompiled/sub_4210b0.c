
/*
 * ============================================================
 * KG.exe 反编译分析 - sub_4210b0
 * ============================================================
 *
 * 函数地址: 0x004210B0
 * 基本块数: 120
 * 指令数:   798
 * 复杂度:   中复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_4210b0(void) {

  /* 代码块 1 @ 0x004210B0 */
  // 读取全局变量值 [esp + 4]
  // 分配 0x10 字节栈空间
  // CMP eax, 1 (set flags)
  // 保存寄存器 ebx
  // 保存寄存器 ebp
  // 保存寄存器 esi
  // 保存寄存器 edi
  // mov esi, ecx
  // if (less) goto 0x421133
  /* 代码块 2 @ 0x00421133 */
  // 恢复寄存器 edi
  // 恢复寄存器 esi
  // 恢复寄存器 ebp
  // eax 清零（准备返回值）
  // 恢复寄存器 ebx
  // 释放 0x10 字节栈空间
  return;
  /* 代码块 3 @ 0x004210C2 */
  // CMP eax, 8 (set flags)
  // if (greater) goto 0x421133
  /* 代码块 4 @ 0x004210C7 */
  // CMP dword ptr [esp + 0x34], 2 (set flags)
  // if (less) goto 0x421133
  /* 代码块 5 @ 0x004210CE */
  // 直接调用函数 0x00420C70
  call(0x00420C70);
  /* 代码块 6 @ 0x004210D3 */
  // 从栈读取参数 0x28 到 ebp
  // 从栈读取参数 0x2c 到 ecx
  // TEST ebp, ebp (set flags)
  // if (greater) goto 0x4210e3
  /* 代码块 7 @ 0x004210DF */
  // TEST ecx, ecx (set flags)
  // if (less or equal) goto 0x421133
  /* 代码块 8 @ 0x004210E3 */
  // 从栈读取参数 0x38 到 edi
  // TEST edi, edi (set flags)
  // 如果相等则跳转到 0x42113f
  /* 代码块 9 @ 0x0042113F */
  // 写入栈变量 [esp+0x10] = ebp
  // 写入栈变量 [esp+0x38] = ecx
  // lea eax, [ebp*4]
  // lea ebx, [esi + 0x58]
  // 写入栈变量 [esp+0x14] = eax
  // imul eax, ecx
  // 保存寄存器 eax
  // mov ecx, ebx
  // 写入栈变量 [esp+0x1c] = eax
  // 直接调用函数 0x004062C0
  call(0x004062C0);
  /* 代码块 10 @ 0x004210EB */
  // CMP dword ptr [edi], 0 (set flags)
  // if (greater or equal) goto 0x4210f6
  /* 代码块 11 @ 0x00421164 */
  // 测试 eax 是否为零（设置标志位）
  // 如果相等则跳转到 0x421133
  /* 代码块 12 @ 0x004210F0 */
  // mov dword ptr [edi], 0
  // 读取全局变量值 [edi + 4]
  // 测试 eax 是否为零（设置标志位）
  // if (greater or equal) goto 0x421104
  // 读取全局变量值 [edi + 4]
  // 测试 eax 是否为零（设置标志位）
  // if (greater or equal) goto 0x421104
  /* 代码块 13 @ 0x00421168 */
  // mov ecx, dword ptr [ebx + 0x10]
  // 读取全局变量值 [esi + 0x68]
  // TEST ecx, ecx (set flags)
  // 如果不相等则跳转到 0x421176
  /* 代码块 14 @ 0x004210FD */
  // mov dword ptr [edi + 4], 0
  // CMP dword ptr [edi + 8], ebp (set flags)
  // if (less or equal) goto 0x42110c
  // CMP dword ptr [edi + 8], ebp (set flags)
  // if (less or equal) goto 0x42110c
  /* 代码块 15 @ 0x00421172 */
  // xor ebx, ebx
  goto 0x421179;
  /* 代码块 16 @ 0x00421176 */
  // mov ebx, dword ptr [ebx + 8]
  // 保存寄存器 eax
  // 保存寄存器 ebx
  // 直接调用函数 0x00406CA0
  call(0x00406CA0);
  /* 代码块 17 @ 0x0042110C */
  // CMP dword ptr [edi + 0xc], ecx (set flags)
  // if (less or equal) goto 0x421114
  /* 代码块 18 @ 0x00421109 */
  // mov dword ptr [edi + 8], ebp
  // CMP dword ptr [edi + 0xc], ecx (set flags)
  // if (less or equal) goto 0x421114
  // 保存寄存器 eax
  // 保存寄存器 ebx
  // 直接调用函数 0x00406CA0
  call(0x00406CA0);
  /* 代码块 19 @ 0x00421180 */
  // 读取全局变量值 [esp + 0x3c]
  // add esp, 8
  // mov dword ptr [esi + 0x8c], eax
  // lea ebx, [esi + 0x78]
  // shl eax, 2
  // 保存寄存器 eax
  // mov ecx, ebx
  // 写入栈变量 [esp+0x38] = eax
  // 直接调用函数 0x004062C0
  call(0x004062C0);
  /* 代码块 20 @ 0x00421114 */
  // mov ebp, dword ptr [edi + 8]
  // mov ebx, dword ptr [edi]
  // mov ecx, dword ptr [edi + 0xc]
  // mov edx, dword ptr [edi + 4]
  // sub ebp, ebx
  // sub ecx, edx
  // TEST ebp, ebp (set flags)
  // 写入栈变量 [esp+0x10] = ebp
  // 写入栈变量 [esp+0x38] = ecx
  // if (less or equal) goto 0x421133
  /* 代码块 21 @ 0x00421111 */
  // mov dword ptr [edi + 0xc], ecx
  // mov ebp, dword ptr [edi + 8]
  // mov ebx, dword ptr [edi]
  // mov ecx, dword ptr [edi + 0xc]
  // mov edx, dword ptr [edi + 4]
  // sub ebp, ebx
  // sub ecx, edx
  // TEST ebp, ebp (set flags)
  // 写入栈变量 [esp+0x10] = ebp
  // 写入栈变量 [esp+0x38] = ecx
  // if (less or equal) goto 0x421133
  /* 代码块 22 @ 0x0042119F */
  // 测试 eax 是否为零（设置标志位）
  // 如果相等则跳转到 0x421133
  /* 代码块 23 @ 0x0042112F */
  // TEST ecx, ecx (set flags)
  // if (greater) goto 0x421147
  /* 代码块 24 @ 0x004211A3 */
  // 从栈读取参数 0x28 到 ecx
  // 读取全局变量值 [esp + 0x24]
  // 从栈读取参数 0x2c 到 edx
  // mov dword ptr [esi + 0x70], ecx
  // mov dword ptr [esi + 0x6c], eax
  // mov dword ptr [esi + 0x74], edx
  // 读取全局变量值 [ebx + 0x10]
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x4211c3
  // lea eax, [ebp*4]
  // lea ebx, [esi + 0x58]
  // 写入栈变量 [esp+0x14] = eax
  // imul eax, ecx
  // 保存寄存器 eax
  // mov ecx, ebx
  // 写入栈变量 [esp+0x1c] = eax
  // 直接调用函数 0x004062C0
  call(0x004062C0);
  /* 代码块 25 @ 0x004211BF */
  // xor ebx, ebx
  goto 0x4211c6;
  /* 代码块 26 @ 0x004211C3 */
  // mov ebx, dword ptr [ebx + 8]
  // 读取全局变量值 [esp + 0x34]
  // 从栈读取参数 0x30 到 ecx
  // 保存寄存器 eax
  // 保存寄存器 ecx
  // 保存寄存器 ebx
  // 直接调用函数 0x00406C40
  call(0x00406C40);
  // 读取全局变量值 [esp + 0x34]
  // 从栈读取参数 0x30 到 ecx
  // 保存寄存器 eax
  // 保存寄存器 ecx
  // 保存寄存器 ebx
  // 直接调用函数 0x00406C40
  call(0x00406C40);
  /* 代码块 27 @ 0x004211D6 */
  // 释放 0xc 字节栈空间
  // lea eax, [esi + 0x90]
  // TEST edi, edi (set flags)
  // 如果相等则跳转到 0x4211ed
  /* 代码块 28 @ 0x004211ED */
  // mov edx, dword ptr [esi + 0x74]
  // mov ecx, dword ptr [esi + 0x70]
  // 保存寄存器 edx
  // 保存寄存器 ecx
  // 保存寄存器 0
  // 保存寄存器 0
  // 保存寄存器 eax
  // 通过分发表地址 0x4a24c0 间接调用
  通过分发表间接调用 [0x4a24c0]);
  /* 代码块 29 @ 0x004211E3 */
  // 保存寄存器 edi
  // 保存寄存器 eax
  // 通过分发表地址 0x4a2438 间接调用
  通过分发表间接调用 [0x4a2438]);
  /* 代码块 30 @ 0x00421200 */
  // 读取全局变量值 [esi + 0x68]
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x421211
  /* 代码块 31 @ 0x004211EB */
  goto 0x421200;
  /* 代码块 32 @ 0x00421207 */
  // 写入栈变量 [esp+0x24] = 0
  goto 0x421218;
  /* 代码块 33 @ 0x00421211 */
  // mov edx, dword ptr [esi + 0x60]
  // 写入栈变量 [esp+0x24] = edx
  // mov edi, dword ptr [esi + 0x98]
  // 读取全局变量值 [esp + 0x28]
  // mov edx, dword ptr [esi + 0x9c]
  // sub eax, edi
  // mov ebx, eax
  // 读取全局变量值 [esp + 0x2c]
  // sub eax, edx
  // 写入栈变量 [esp+0x1c] = ebx
  // 写入栈变量 [esp+0x30] = eax
  // 读取全局变量值 [esi + 0x6c]
  // dec eax
  // CMP eax, 7 (set flags)
  // if (above) goto 0x42171b
  // mov edi, dword ptr [esi + 0x98]
  // 读取全局变量值 [esp + 0x28]
  // mov edx, dword ptr [esi + 0x9c]
  // sub eax, edi
  // mov ebx, eax
  // 读取全局变量值 [esp + 0x2c]
  // sub eax, edx
  // 写入栈变量 [esp+0x1c] = ebx
  // 写入栈变量 [esp+0x30] = eax
  // 读取全局变量值 [esi + 0x6c]
  // dec eax
  // CMP eax, 7 (set flags)
  // if (above) goto 0x42171b
  /* 代码块 34 @ 0x00421247 */
  goto dword ptr [eax*4 + 0x42172c];
  /* 代码块 35 @ 0x0042171B */
  // 恢复寄存器 edi
  // 恢复寄存器 esi
  // 恢复寄存器 ebp
  // mov eax, 1
  // 恢复寄存器 ebx
  // 释放 0x10 字节栈空间
  return;
  /* 代码块 36 @ 0x004215AA */
  // mov ebx, dword ptr [esi + 0x70]
  // 读取全局变量值 [esi + 0x74]
  // CMP ebx, eax (set flags)
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x004210B0: mov      eax, dword ptr [esp + 4]
  0x004210B4: sub      esp, 0x10
  0x004210B7: cmp      eax, 1
  0x004210BA: push     ebx
  0x004210BB: push     ebp
  0x004210BC: push     esi
  0x004210BD: push     edi
  0x004210BE: mov      esi, ecx
  0x004210C0: jl       0x421133
  0x00421133: pop      edi
  0x00421134: pop      esi
  0x00421135: pop      ebp
  0x00421136: xor      eax, eax
  0x00421138: pop      ebx
  0x00421139: add      esp, 0x10
  0x0042113C: ret      0x18
  0x004210C2: cmp      eax, 8
  0x004210C5: jg       0x421133
  0x004210C7: cmp      dword ptr [esp + 0x34], 2
  0x004210CC: jl       0x421133
  0x004210CE: call     0x420c70
  0x004210D3: mov      ebp, dword ptr [esp + 0x28]
  0x004210D7: mov      ecx, dword ptr [esp + 0x2c]
  0x004210DB: test     ebp, ebp
  0x004210DD: jg       0x4210e3
  0x004210DF: test     ecx, ecx
  0x004210E1: jle      0x421133
  0x004210E3: mov      edi, dword ptr [esp + 0x38]
  0x004210E7: test     edi, edi
  0x004210E9: je       0x42113f
  0x0042113F: mov      dword ptr [esp + 0x10], ebp
  0x00421143: mov      dword ptr [esp + 0x38], ecx
  0x00421147: lea      eax, [ebp*4]
  0x0042114E: lea      ebx, [esi + 0x58]
  0x00421151: mov      dword ptr [esp + 0x14], eax
  0x00421155: imul     eax, ecx
  0x00421158: push     eax
  0x00421159: mov      ecx, ebx
  0x0042115B: mov      dword ptr [esp + 0x1c], eax
  0x0042115F: call     0x4062c0
  0x004210EB: cmp      dword ptr [edi], 0
  0x004210EE: jge      0x4210f6
  0x00421164: test     eax, eax
  0x00421166: je       0x421133
  0x004210F0: mov      dword ptr [edi], 0
  0x004210F6: mov      eax, dword ptr [edi + 4]
  0x004210F9: test     eax, eax
  0x004210FB: jge      0x421104
  0x004210F6: mov      eax, dword ptr [edi + 4]
  0x004210F9: test     eax, eax
  0x004210FB: jge      0x421104
  0x00421168: mov      ecx, dword ptr [ebx + 0x10]
  0x0042116B: mov      eax, dword ptr [esi + 0x68]
  0x0042116E: test     ecx, ecx
  0x00421170: jne      0x421176
  0x004210FD: mov      dword ptr [edi + 4], 0
  0x00421104: cmp      dword ptr [edi + 8], ebp
  0x00421107: jle      0x42110c
  0x00421104: cmp      dword ptr [edi + 8], ebp
  0x00421107: jle      0x42110c
  0x00421172: xor      ebx, ebx
  0x00421174: jmp      0x421179
  0x00421176: mov      ebx, dword ptr [ebx + 8]
  0x00421179: push     eax
  0x0042117A: push     ebx
  0x0042117B: call     0x406ca0
  0x0042110C: cmp      dword ptr [edi + 0xc], ecx
  0x0042110F: jle      0x421114
  0x00421109: mov      dword ptr [edi + 8], ebp
  0x0042110C: cmp      dword ptr [edi + 0xc], ecx
  0x0042110F: jle      0x421114
  0x00421179: push     eax
  0x0042117A: push     ebx
  0x0042117B: call     0x406ca0
  0x00421180: mov      eax, dword ptr [esp + 0x3c]
  0x00421184: add      esp, 8
  0x00421187: mov      dword ptr [esi + 0x8c], eax
  0x0042118D: lea      ebx, [esi + 0x78]
  0x00421190: shl      eax, 2
  0x00421193: push     eax
  0x00421194: mov      ecx, ebx
  0x00421196: mov      dword ptr [esp + 0x38], eax
  0x0042119A: call     0x4062c0
  0x00421114: mov      ebp, dword ptr [edi + 8]
  0x00421117: mov      ebx, dword ptr [edi]
  0x00421119: mov      ecx, dword ptr [edi + 0xc]
  0x0042111C: mov      edx, dword ptr [edi + 4]
  0x0042111F: sub      ebp, ebx
  0x00421121: sub      ecx, edx
  0x00421123: test     ebp, ebp
  0x00421125: mov      dword ptr [esp + 0x10], ebp
  0x00421129: mov      dword ptr [esp + 0x38], ecx
  0x0042112D: jle      0x421133
  0x00421111: mov      dword ptr [edi + 0xc], ecx
  0x00421114: mov      ebp, dword ptr [edi + 8]
  0x00421117: mov      ebx, dword ptr [edi]
  0x00421119: mov      ecx, dword ptr [edi + 0xc]
  0x0042111C: mov      edx, dword ptr [edi + 4]
  0x0042111F: sub      ebp, ebx
  0x00421121: sub      ecx, edx
  0x00421123: test     ebp, ebp
  0x00421125: mov      dword ptr [esp + 0x10], ebp
  0x00421129: mov      dword ptr [esp + 0x38], ecx
  0x0042112D: jle      0x421133
  0x0042119F: test     eax, eax
  0x004211A1: je       0x421133
  0x0042112F: test     ecx, ecx
  0x00421131: jg       0x421147
  0x004211A3: mov      ecx, dword ptr [esp + 0x28]
  0x004211A7: mov      eax, dword ptr [esp + 0x24]
  0x004211AB: mov      edx, dword ptr [esp + 0x2c]
  0x004211AF: mov      dword ptr [esi + 0x70], ecx
  0x004211B2: mov      dword ptr [esi + 0x6c], eax
  0x004211B5: mov      dword ptr [esi + 0x74], edx
  0x004211B8: mov      eax, dword ptr [ebx + 0x10]
  0x004211BB: test     eax, eax
  0x004211BD: jne      0x4211c3
  0x00421147: lea      eax, [ebp*4]
  0x0042114E: lea      ebx, [esi + 0x58]
  0x00421151: mov      dword ptr [esp + 0x14], eax
  0x00421155: imul     eax, ecx
  0x00421158: push     eax
  0x00421159: mov      ecx, ebx
  0x0042115B: mov      dword ptr [esp + 0x1c], eax
  0x0042115F: call     0x4062c0
  0x004211BF: xor      ebx, ebx
  0x004211C1: jmp      0x4211c6
  0x004211C3: mov      ebx, dword ptr [ebx + 8]
  0x004211C6: mov      eax, dword ptr [esp + 0x34]
  0x004211CA: mov      ecx, dword ptr [esp + 0x30]
  0x004211CE: push     eax
  0x004211CF: push     ecx
  0x004211D0: push     ebx
  0x004211D1: call     0x406c40
  0x004211C6: mov      eax, dword ptr [esp + 0x34]
  0x004211CA: mov      ecx, dword ptr [esp + 0x30]
  0x004211CE: push     eax
  0x004211CF: push     ecx
  0x004211D0: push     ebx
  0x004211D1: call     0x406c40
  0x004211D6: add      esp, 0xc
  0x004211D9: lea      eax, [esi + 0x90]
  0x004211DF: test     edi, edi
  0x004211E1: je       0x4211ed
  0x004211ED: mov      edx, dword ptr [esi + 0x74]
  0x004211F0: mov      ecx, dword ptr [esi + 0x70]
  0x004211F3: push     edx
  0x004211F4: push     ecx
  0x004211F5: push     0
  0x004211F7: push     0
  0x004211F9: push     eax
  0x004211FA: call     dword ptr [0x4a24c0]
  0x004211E3: push     edi
  0x004211E4: push     eax
  0x004211E5: call     dword ptr [0x4a2438]
  0x00421200: mov      eax, dword ptr [esi + 0x68]
  0x00421203: test     eax, eax
  0x00421205: jne      0x421211
  0x004211EB: jmp      0x421200
  0x00421207: mov      dword ptr [esp + 0x24], 0
  0x0042120F: jmp      0x421218
  0x00421211: mov      edx, dword ptr [esi + 0x60]
  0x00421214: mov      dword ptr [esp + 0x24], edx
  0x00421218: mov      edi, dword ptr [esi + 0x98]
  0x0042121E: mov      eax, dword ptr [esp + 0x28]
  0x00421222: mov      edx, dword ptr [esi + 0x9c]
  0x00421228: sub      eax, edi
  0x0042122A: mov      ebx, eax
  0x0042122C: mov      eax, dword ptr [esp + 0x2c]
  0x00421230: sub      eax, edx
  0x00421232: mov      dword ptr [esp + 0x1c], ebx
  0x00421236: mov      dword ptr [esp + 0x30], eax
  0x0042123A: mov      eax, dword ptr [esi + 0x6c]
  0x0042123D: dec      eax
  0x0042123E: cmp      eax, 7
  0x00421241: ja       0x42171b
  0x00421218: mov      edi, dword ptr [esi + 0x98]
  0x0042121E: mov      eax, dword ptr [esp + 0x28]
  0x00421222: mov      edx, dword ptr [esi + 0x9c]
  0x00421228: sub      eax, edi
  0x0042122A: mov      ebx, eax
  0x0042122C: mov      eax, dword ptr [esp + 0x2c]
  0x00421230: sub      eax, edx
  0x00421232: mov      dword ptr [esp + 0x1c], ebx
  0x00421236: mov      dword ptr [esp + 0x30], eax
  0x0042123A: mov      eax, dword ptr [esi + 0x6c]
  0x0042123D: dec      eax
  0x0042123E: cmp      eax, 7
  0x00421241: ja       0x42171b
  0x00421247: jmp      dword ptr [eax*4 + 0x42172c]
  0x0042171B: pop      edi
  0x0042171C: pop      esi
  0x0042171D: pop      ebp
  0x0042171E: mov      eax, 1
  0x00421723: pop      ebx
  0x00421724: add      esp, 0x10
  0x00421727: ret      0x18
  0x004215AA: mov      ebx, dword ptr [esi + 0x70]
  0x004215AD: mov      eax, dword ptr [esi + 0x74]
  0x004215B0: cmp      ebx, eax
  0x004215B2: mov      dword ptr [esp + 0x34], ebx
  0x004215B6: jl       0x4215bc
  0x0042142A: mov      eax, dword ptr [esi + 0x70]
  0x0042142D: mov      ecx, dword ptr [esi + 0x74]
  0x00421430: cmp      eax, ecx
  0x00421432: mov      dword ptr [esp + 0x34], eax
  0x00421436: jl       0x42143c
  0x004212CE: mov      eax, dword ptr [esp + 0x38]
  0x004212D2: xor      edi, edi
  0x004212D4: test     eax, eax
  0x004212D6: mov      dword ptr [esp + 0x34], edi
  0x004212DA: jle      0x42171b
  0x0042124E: mov      eax, dword ptr [esp + 0x38]
  0x00421252: xor      edi, edi
  0x00421254: test     eax, eax
  0x00421256: mov      dword ptr [esp + 0x34], edi
  0x0042125A: jle      0x42171b
  0x00421673: mov      eax, dword ptr [esi + 0x70]
  0x00421676: mov      ecx, dword ptr [esi + 0x74]
  0x00421679: cmp      eax, ecx
  0x0042167B: mov      dword ptr [esp + 0x34], eax
  0x0042167F: jl       0x421685
  0x004213B4: test     ebp, ebp
  0x004213B6: mov      dword ptr [esp + 0x34], 0
  0x004213BE: jle      0x42171b
  0x00421335: test     ebp, ebp
  0x00421337: mov      dword ptr [esp + 0x34], 0
  0x0042133F: jle      0x42171b
  0x004214F6: mov      eax, dword ptr [esi + 0x70]
  0x004214F9: mov      ecx, dword ptr [esi + 0x74]
  0x004214FC: cmp      eax, ecx
  0x004214FE: mov      dword ptr [esp + 0x34], eax
  0x00421502: jl       0x421508
  0x004215BC: fild     dword ptr [esp + 0x34]
  0x004215C0: fadd     st(0), st(0)
  0x004215C2: call     0x482498
  0x004215B8: mov      dword ptr [esp + 0x34], eax
  0x004215BC: fild     dword ptr [esp + 0x34]
  0x004215C0: fadd     st(0), st(0)
  0x004215C2: call     0x482498
  0x0042143C: fild     dword ptr [esp + 0x34]
  0x00421440: fadd     st(0), st(0)
  0x00421442: call     0x482498
  0x00421438: mov      dword ptr [esp + 0x34], ecx
  0x0042143C: fild     dword ptr [esp + 0x34]
  0x00421440: fadd     st(0), st(0)
  0x00421442: call     0x482498
  0x004212E0: mov      ebx, dword ptr [esp + 0x24]
  0x004212E4: lea      eax, [ebx + 2]
  0x004212E7: mov      edx, dword ptr [esi + 0x74]
  0x004212EA: push     ebx
  0x004212EB: lea      ecx, [eax - 1]
  0x004212EE: push     ecx
  0x004212EF: push     eax
  0x004212F0: mov      eax, dword ptr [esp + 0x3c]
  0x004212F4: push     edx
  0x004212F5: lea      ecx, [edi + eax]
  0x004212F8: push     ecx
  0x004212F9: mov      ecx, esi
  0x004212FB: call     0x421750
  0x00421260: lea      ecx, [ebp*4]
  0x00421267: mov      eax, ecx
  0x00421269: neg      eax
  0x0042126B: mov      dword ptr [esp + 0x30], eax
  0x0042126F: mov      eax, dword ptr [esp + 0x38]
  0x00421273: lea      ebx, [eax - 1]
  0x00421276: mov      eax, dword ptr [esp + 0x24]
  0x0042127A: imul     ebx, ecx
  0x0042127D: add      ebx, eax
  0x0042127F: lea      eax, [ebx + 2]
  0x00421282: mov      edx, dword ptr [esi + 0x74]
  0x00421285: push     ebx
  0x00421286: lea      ecx, [eax - 1]
  0x00421289: push     ecx
  0x0042128A: push     eax
  0x0042128B: mov      eax, dword ptr [esi + 0x94]
  0x00421291: push     edx
  0x00421292: add      eax, edi
  0x00421294: mov      ecx, esi
  0x00421296: push     eax
  0x00421297: call     0x421750
  0x00421685: fild     dword ptr [esp + 0x34]
  0x00421689: fadd     st(0), st(0)
  0x0042168B: call     0x482498
  0x00421681: mov      dword ptr [esp + 0x34], ecx
  0x00421685: fild     dword ptr [esp + 0x34]
  0x00421689: fadd     st(0), st(0)
  0x0042168B: call     0x482498
  0x004213C4: mov      ecx, dword ptr [esp + 0x24]
  0x004213C8: mov      edx, dword ptr [esp + 0x18]
  0x004213CC: lea      edi, [edx + ecx - 4]
  0x004213D0: lea      eax, [edi + 2]
  0x004213D3: mov      edx, dword ptr [esi + 0x70]
  0x004213D6: push     edi
  0x004213D7: mov      ebx, edi
  0x004213D9: lea      ecx, [eax - 1]
  0x004213DC: push     ecx
  0x004213DD: mov      ecx, dword ptr [esp + 0x24]
  0x004213E1: push     eax
  0x004213E2: mov      eax, dword ptr [esp + 0x40]
  0x004213E6: add      eax, ecx
  0x004213E8: push     edx
  0x004213E9: push     eax
  0x004213EA: mov      ecx, esi
  0x004213EC: call     0x421750
  0x00421345: mov      edx, dword ptr [esp + 0x38]
  0x00421349: lea      eax, [ebp*4]
  0x00421350: lea      edi, [edx - 1]
  0x00421353: imul     edi, eax
  0x00421356: add      edi, dword ptr [esp + 0x24]
  0x0042135A: mov      edx, dword ptr [esi + 0x70]
  0x0042135D: lea      eax, [edi + 2]
  0x00421360: push     edi
  0x00421361: mov      ebx, edi
  0x00421363: lea      ecx, [eax - 1]
  0x00421366: push     ecx
  0x00421367: push     eax
  0x00421368: mov      eax, dword ptr [esi + 0x90]
  0x0042136E: push     edx
  0x0042136F: mov      edx, dword ptr [esp + 0x44]
  0x00421373: mov      ecx, esi
  0x00421375: add      eax, edx
  0x00421377: push     eax
  0x00421378: call     0x421750
  0x00421508: fild     dword ptr [esp + 0x34]
  0x0042150C: fadd     st(0), st(0)
  0x0042150E: call     0x482498
  0x00421504: mov      dword ptr [esp + 0x34], ecx
  0x00421508: fild     dword ptr [esp + 0x34]
  0x0042150C: fadd     st(0), st(0)
  0x0042150E: call     0x482498
  0x004215C7: mov      ecx, dword ptr [esi + 0x94]
  0x004215CD: mov      dword ptr [esp + 0x34], eax
  0x004215D1: mov      eax, dword ptr [esp + 0x38]
  0x004215D5: sub      ebx, edi
  0x004215D7: dec      eax
  0x004215D8: test     eax, eax
  0x004215DA: jl       0x42171b
  0x00421447: mov      edx, dword ptr [esi + 0x94]
  0x0042144D: mov      dword ptr [esp + 0x34], eax
  0x00421451: mov      eax, dword ptr [esp + 0x38]
  0x00421455: mov      dword ptr [esp + 0x30], edx
  0x00421459: lea      ecx, [eax - 1]
  0x0042145C: test     ecx, ecx
  0x0042145E: jl       0x42171b
  0x00421300: mov      eax, dword ptr [ebx]
  0x00421302: test     ebp, ebp
  0x00421304: jle      0x421310
  0x0042129C: mov      eax, dword ptr [ebx]
  0x0042129E: test     ebp, ebp
  0x004212A0: jle      0x4212ac
  0x00421690: mov      ecx, dword ptr [esp + 0x38]
  0x00421694: mov      dword ptr [esp + 0x34], eax
  0x00421698: mov      eax, dword ptr [esi + 0x90]
  0x0042169E: test     ecx, ecx
  0x004216A0: jle      0x42171b
  0x004213F1: mov      eax, dword ptr [esp + 0x38]
  0x004213F5: mov      ecx, dword ptr [edi]
  0x004213F7: test     eax, eax
  0x004213F9: jle      0x42140b
  0x0042137D: mov      edx, dword ptr [esp + 0x38]
  0x00421381: mov      ecx, dword ptr [edi]
  0x00421383: test     edx, edx
  0x00421385: jle      0x421395
  0x00421513: mov      dword ptr [esp + 0x34], eax
  0x00421517: mov      eax, dword ptr [esp + 0x38]
  0x0042151B: test     eax, eax
  0x0042151D: jle      0x42171b
  0x004215E0: lea      edx, [ebp*4]
  0x004215E7: mov      edi, eax
  0x004215E9: imul     edi, edx
  0x004215EC: add      ebx, ecx
  0x004215EE: mov      ecx, edx
  0x004215F0: add      edi, edx
  0x004215F2: mov      edx, dword ptr [esp + 0x24]
  0x004215F6: neg      ecx
  0x004215F8: lea      edx, [edi + edx - 3]
  0x004215FC: inc      eax
  0x004215FD: mov      dword ptr [esp + 0x38], ebx
  0x00421601: mov      dword ptr [esp + 0x1c], ecx
  0x00421605: mov      dword ptr [esp + 0x24], edx
  0x00421609: mov      dword ptr [esp + 0x28], eax
  0x0042160D: test     ebp, ebp
  0x0042160F: jle      0x421646
  0x00421464: mov      edx, dword ptr [esp + 0x14]
  0x00421468: mov      eax, edx
  0x0042146A: neg      eax
  0x0042146C: mov      dword ptr [esp + 0x28], eax
  0x00421470: mov      eax, ecx
  0x00421472: imul     eax, edx
  0x00421475: mov      edx, dword ptr [esp + 0x24]
  0x00421479: add      eax, edx
  0x0042147B: inc      ecx
  0x0042147C: mov      dword ptr [esp + 0x24], eax
  0x00421480: mov      dword ptr [esp + 0x38], ecx
  0x00421484: mov      ebx, eax
  0x00421486: mov      eax, dword ptr [esp + 0x10]
  0x0042148A: xor      edi, edi
  0x0042148C: test     eax, eax
  0x0042148E: mov      ebp, ebx
  0x00421490: jle      0x4214c9
  0x00421310: lea      eax, [ebp*4]
  0x00421317: inc      edi
  0x00421318: add      ebx, eax
  0x0042131A: mov      eax, dword ptr [esp + 0x38]
  0x0042131E: cmp      edi, eax
  0x00421320: mov      dword ptr [esp + 0x34], edi
  0x00421324: jl       0x4212e4
  0x00421306: mov      ecx, ebp
  0x00421308: mov      edi, ebx
  0x0042130A: rep stosd dword ptr es:[edi], eax
  0x004212AC: mov      ecx, dword ptr [esp + 0x30]
  0x004212B0: mov      eax, dword ptr [esp + 0x38]
  0x004212B4: inc      edi
  0x004212B5: add      ebx, ecx
  0x004212B7: cmp      edi, eax
  0x004212B9: mov      dword ptr [esp + 0x34], edi
  0x004212BD: jl       0x42127f
  0x004212A2: mov      ecx, ebp
  0x004212A4: mov      edi, ebx
  0x004212A6: rep stosd dword ptr es:[edi], eax
  0x004216A2: mov      edx, dword ptr [esp + 0x30]
  0x004216A6: mov      dword ptr [esp + 0x28], ecx
  0x004216AA: add      eax, edx
  0x004216AC: mov      dword ptr [esp + 0x38], eax
  0x004216B0: mov      eax, dword ptr [esp + 0x24]
  0x004216B4: mov      dword ptr [esp + 0x24], eax
  0x004216B8: mov      eax, dword ptr [esp + 0x10]
  0x004216BC: mov      edi, dword ptr [esp + 0x24]
  0x004216C0: test     eax, eax
  0x004216C2: mov      ebp, edi
  0x004216C4: jle      0x4216fa
  0x0042140B: mov      eax, dword ptr [esp + 0x34]
  0x0042140F: sub      edi, 4
  0x00421412: inc      eax
  0x00421413: cmp      eax, ebp
  0x00421415: mov      dword ptr [esp + 0x34], eax
  0x00421419: jl       0x4213d0
  0x004213FB: mov      edx, eax
  0x004213FD: lea      eax, [ebp*4]
  0x00421404: mov      dword ptr [ebx], ecx
  0x00421406: sub      ebx, eax
  0x00421408: dec      edx
  0x00421409: jne      0x4213fd
  0x00421395: mov      eax, dword ptr [esp + 0x34]
  0x00421399: add      edi, 4
  0x0042139C: inc      eax
  0x0042139D: cmp      eax, ebp
  0x0042139F: mov      dword ptr [esp + 0x34], eax
  0x004213A3: jl       0x42135a
  0x00421387: lea      eax, [ebp*4]
  0x0042138E: mov      dword ptr [ebx], ecx
  0x00421390: sub      ebx, eax
  0x00421392: dec      edx
  0x00421393: jne      0x421387
  0x00421523: mov      ecx, dword ptr [esp + 0x30]
  0x00421527: mov      edx, dword ptr [esp + 0x14]
  0x0042152B: add      ecx, ebx
  0x0042152D: mov      dword ptr [esp + 0x28], eax
  0x00421531: mov      dword ptr [esp + 0x38], ecx
  0x00421535: mov      ecx, dword ptr [esp + 0x24]
  0x00421539: lea      edx, [ecx + edx - 3]
  0x0042153D: mov      dword ptr [esp + 0x24], edx
  0x00421541: test     ebp, ebp
  0x00421543: jle      0x421576
  0x00421646: mov      edi, dword ptr [esp + 0x24]
  0x0042164A: mov      edx, dword ptr [esp + 0x38]
  0x0042164E: mov      eax, dword ptr [esp + 0x28]
  0x00421652: add      edi, ecx
  0x00421654: inc      edx
  0x00421655: dec      eax
  0x00421656: mov      dword ptr [esp + 0x24], edi
  0x0042165A: mov      dword ptr [esp + 0x38], edx
  0x0042165E: mov      dword ptr [esp + 0x28], eax
  0x00421662: jne      0x42160d
  0x00421611: mov      ebx, dword ptr [esp + 0x38]
  0x00421615: mov      edi, dword ptr [esp + 0x24]
  0x00421619: mov      dword ptr [esp + 0x30], ebp
  0x0042161D: mov      edx, dword ptr [esp + 0x34]
  0x00421621: lea      eax, [edi - 1]
  0x00421624: push     eax
  0x00421625: lea      ecx, [edi + 1]
  0x00421628: push     edi
  0x00421629: push     ecx
  0x0042162A: push     edx
  0x0042162B: push     ebx
  0x0042162C: mov      ecx, esi
  0x0042162E: call     0x421750
  0x004214C9: mov      edx, dword ptr [esp + 0x28]
  0x004214CD: mov      ecx, dword ptr [esp + 0x30]
  0x004214D1: mov      eax, dword ptr [esp + 0x38]
  0x004214D5: add      ebx, edx
  0x004214D7: inc      ecx
  0x004214D8: dec      eax
  0x004214D9: mov      dword ptr [esp + 0x24], ebx
  0x004214DD: mov      dword ptr [esp + 0x30], ecx
  0x004214E1: mov      dword ptr [esp + 0x38], eax
  0x004214E5: jne      0x421486
  0x00421492: add      ebx, 2
  0x00421495: mov      eax, dword ptr [esi + 0x90]
  0x0042149B: mov      edx, dword ptr [esp + 0x34]
  0x0042149F: lea      ecx, [ebx - 1]
  0x004214A2: push     ebp
  0x004214A3: push     ecx
  0x004214A4: mov      ecx, dword ptr [esp + 0x38]
  0x004214A8: add      eax, ecx
  0x004214AA: push     ebx
  0x004214AB: add      eax, edi
  0x004214AD: push     edx
  0x004214AE: push     eax
  0x004214AF: mov      ecx, esi
  0x004214B1: call     0x421750
  0x004212E4: lea      eax, [ebx + 2]
  0x004212E7: mov      edx, dword ptr [esi + 0x74]
  0x004212EA: push     ebx
  0x004212EB: lea      ecx, [eax - 1]
  0x004212EE: push     ecx
  0x004212EF: push     eax
  0x004212F0: mov      eax, dword ptr [esp + 0x3c]
  0x004212F4: push     edx
  0x004212F5: lea      ecx, [edi + eax]
  0x004212F8: push     ecx
  0x004212F9: mov      ecx, esi
  0x004212FB: call     0x421750
  0x00421326: pop      edi
  0x00421327: pop      esi
  0x00421328: pop      ebp
  0x00421329: mov      eax, 1
  0x0042132E: pop      ebx
  0x0042132F: add      esp, 0x10
  0x00421332: ret      0x18
  0x0042130C: mov      edi, dword ptr [esp + 0x34]
  0x00421310: lea      eax, [ebp*4]
  0x00421317: inc      edi
  0x00421318: add      ebx, eax
  0x0042131A: mov      eax, dword ptr [esp + 0x38]
  0x0042131E: cmp      edi, eax
  0x00421320: mov      dword ptr [esp + 0x34], edi
  0x00421324: jl       0x4212e4
  0x0042130A: rep stosd dword ptr es:[edi], eax
  0x0042127F: lea      eax, [ebx + 2]
  0x00421282: mov      edx, dword ptr [esi + 0x74]
  0x00421285: push     ebx
  0x00421286: lea      ecx, [eax - 1]
  0x00421289: push     ecx
  0x0042128A: push     eax
  0x0042128B: mov      eax, dword ptr [esi + 0x94]
  0x00421291: push     edx
  0x00421292: add      eax, edi
  0x00421294: mov      ecx, esi
  0x00421296: push     eax
  0x00421297: call     0x421750
  0x004212BF: pop      edi
  0x004212C0: pop      esi
  0x004212C1: pop      ebp
  0x004212C2: mov      eax, 1
  0x004212C7: pop      ebx
  0x004212C8: add      esp, 0x10
  0x004212CB: ret      0x18
  0x004212A8: mov      edi, dword ptr [esp + 0x34]
  0x004212AC: mov      ecx, dword ptr [esp + 0x30]
  0x004212B0: mov      eax, dword ptr [esp + 0x38]
  0x004212B4: inc      edi
  0x004212B5: add      ebx, ecx
  0x004212B7: cmp      edi, eax
  0x004212B9: mov      dword ptr [esp + 0x34], edi
  0x004212BD: jl       0x42127f
  0x004212A6: rep stosd dword ptr es:[edi], eax
  0x004216FA: mov      edx, dword ptr [esp + 0x24]
  0x004216FE: mov      ecx, dword ptr [esp + 0x38]
  0x00421702: shl      eax, 2
  0x00421705: add      edx, eax
  0x00421707: mov      eax, dword ptr [esp + 0x28]
  0x0042170B: inc      ecx
  0x0042170C: dec      eax
  0x0042170D: mov      dword ptr [esp + 0x24], edx
  0x00421711: mov      dword ptr [esp + 0x38], ecx
  0x00421715: mov      dword ptr [esp + 0x28], eax
  0x00421719: jne      0x4216b8
  0x004216C6: mov      ebx, dword ptr [esp + 0x38]
  0x004216CA: add      edi, 2
  0x004216CD: mov      dword ptr [esp + 0x30], eax
  0x004216D1: mov      edx, dword ptr [esp + 0x34]
  0x004216D5: lea      ecx, [edi - 1]
  0x004216D8: push     ebp
  0x004216D9: push     ecx
  0x004216DA: push     edi
  0x004216DB: push     edx
  0x004216DC: push     ebx
  0x004216DD: mov      ecx, esi
  0x004216DF: call     0x421750
  0x004213D0: lea      eax, [edi + 2]
  0x004213D3: mov      edx, dword ptr [esi + 0x70]
  0x004213D6: push     edi
  0x004213D7: mov      ebx, edi
  0x004213D9: lea      ecx, [eax - 1]
  0x004213DC: push     ecx
  0x004213DD: mov      ecx, dword ptr [esp + 0x24]
  0x004213E1: push     eax
  0x004213E2: mov      eax, dword ptr [esp + 0x40]
  0x004213E6: add      eax, ecx
  0x004213E8: push     edx
  0x004213E9: push     eax
  0x004213EA: mov      ecx, esi
  0x004213EC: call     0x421750
  0x0042141B: pop      edi
  0x0042141C: pop      esi
  0x0042141D: pop      ebp
  0x0042141E: mov      eax, 1
  0x00421423: pop      ebx
  0x00421424: add      esp, 0x10
  0x00421427: ret      0x18
  0x004213FD: lea      eax, [ebp*4]
  0x00421404: mov      dword ptr [ebx], ecx
  0x00421406: sub      ebx, eax
  0x00421408: dec      edx
  0x00421409: jne      0x4213fd
  0x0042135A: mov      edx, dword ptr [esi + 0x70]
  0x0042135D: lea      eax, [edi + 2]
  0x00421360: push     edi
  0x00421361: mov      ebx, edi
  0x00421363: lea      ecx, [eax - 1]
  0x00421366: push     ecx
  0x00421367: push     eax
  0x00421368: mov      eax, dword ptr [esi + 0x90]
  0x0042136E: push     edx
  0x0042136F: mov      edx, dword ptr [esp + 0x44]
  0x00421373: mov      ecx, esi
  0x00421375: add      eax, edx
  0x00421377: push     eax
  0x00421378: call     0x421750
  0x004213A5: pop      edi
  0x004213A6: pop      esi
  0x004213A7: pop      ebp
  0x004213A8: mov      eax, 1
  0x004213AD: pop      ebx
  0x004213AE: add      esp, 0x10
  0x004213B1: ret      0x18
  0x00421576: mov      edx, dword ptr [esp + 0x24]
  0x0042157A: mov      ecx, dword ptr [esp + 0x38]
  0x0042157E: lea      eax, [ebp*4]
  0x00421585: add      edx, eax
  0x00421587: mov      eax, dword ptr [esp + 0x28]
  0x0042158B: inc      ecx
  0x0042158C: dec      eax
  0x0042158D: mov      dword ptr [esp + 0x24], edx
  0x00421591: mov      dword ptr [esp + 0x38], ecx
  0x00421595: mov      dword ptr [esp + 0x28], eax
  0x00421599: jne      0x421541
  0x00421545: mov      ebx, dword ptr [esp + 0x38]
  0x00421549: mov      edi, dword ptr [esp + 0x24]
  0x0042154D: mov      dword ptr [esp + 0x30], ebp
  0x00421551: mov      edx, dword ptr [esp + 0x34]
  0x00421555: lea      eax, [edi - 1]
  0x00421558: push     eax
  0x00421559: lea      ecx, [edi + 1]
  0x0042155C: push     edi
  0x0042155D: push     ecx
  0x0042155E: push     edx
  0x0042155F: push     ebx
  0x00421560: mov      ecx, esi
  0x00421562: call     0x421750
  0x00421664: pop      edi
  0x00421665: pop      esi
  0x00421666: pop      ebp
  0x00421667: mov      eax, 1
  0x0042166C: pop      ebx
  0x0042166D: add      esp, 0x10
  0x00421670: ret      0x18
  0x0042160D: test     ebp, ebp
  0x0042160F: jle      0x421646
  0x00421633: mov      eax, dword ptr [esp + 0x30]
  0x00421637: inc      ebx
  0x00421638: sub      edi, 4
  0x0042163B: dec      eax
  0x0042163C: mov      dword ptr [esp + 0x30], eax
  0x00421640: jne      0x42161d
  0x004214E7: pop      edi
  0x004214E8: pop      esi
  0x004214E9: pop      ebp
  0x004214EA: mov      eax, 1
  0x004214EF: pop      ebx
  0x004214F0: add      esp, 0x10
  0x004214F3: ret      0x18
  0x00421486: mov      eax, dword ptr [esp + 0x10]
  0x0042148A: xor      edi, edi
  0x0042148C: test     eax, eax
  0x0042148E: mov      ebp, ebx
  0x00421490: jle      0x4214c9
  0x004214B6: mov      eax, dword ptr [esp + 0x10]
  0x004214BA: inc      edi
  0x004214BB: add      ebp, 4
  0x004214BE: add      ebx, 4
  0x004214C1: cmp      edi, eax
  0x004214C3: jl       0x421495
  0x004216B8: mov      eax, dword ptr [esp + 0x10]
  0x004216BC: mov      edi, dword ptr [esp + 0x24]
  0x004216C0: test     eax, eax
  0x004216C2: mov      ebp, edi
  0x004216C4: jle      0x4216fa
  0x004216E4: mov      eax, dword ptr [esp + 0x30]
  0x004216E8: inc      ebx
  0x004216E9: add      ebp, 4
  0x004216EC: add      edi, 4
  0x004216EF: dec      eax
  0x004216F0: mov      dword ptr [esp + 0x30], eax
  0x004216F4: jne      0x4216d1
  0x0042159B: pop      edi
  0x0042159C: pop      esi
  0x0042159D: pop      ebp
  0x0042159E: mov      eax, 1
  0x004215A3: pop      ebx
  0x004215A4: add      esp, 0x10
  0x004215A7: ret      0x18
  0x00421541: test     ebp, ebp
  0x00421543: jle      0x421576
  0x00421567: mov      eax, dword ptr [esp + 0x30]
  0x0042156B: inc      ebx
  0x0042156C: sub      edi, 4
  0x0042156F: dec      eax
  0x00421570: mov      dword ptr [esp + 0x30], eax
  0x00421574: jne      0x421551
  0x00421642: mov      ecx, dword ptr [esp + 0x1c]
  0x00421646: mov      edi, dword ptr [esp + 0x24]
  0x0042164A: mov      edx, dword ptr [esp + 0x38]
  0x0042164E: mov      eax, dword ptr [esp + 0x28]
  0x00421652: add      edi, ecx
  0x00421654: inc      edx
  0x00421655: dec      eax
  0x00421656: mov      dword ptr [esp + 0x24], edi
  0x0042165A: mov      dword ptr [esp + 0x38], edx
  0x0042165E: mov      dword ptr [esp + 0x28], eax
  0x00421662: jne      0x42160d
  0x0042161D: mov      edx, dword ptr [esp + 0x34]
  0x00421621: lea      eax, [edi - 1]
  0x00421624: push     eax
  0x00421625: lea      ecx, [edi + 1]
  0x00421628: push     edi
  0x00421629: push     ecx
  0x0042162A: push     edx
  0x0042162B: push     ebx
  0x0042162C: mov      ecx, esi
  0x0042162E: call     0x421750
  0x00421495: mov      eax, dword ptr [esi + 0x90]
  0x0042149B: mov      edx, dword ptr [esp + 0x34]
  0x0042149F: lea      ecx, [ebx - 1]
  0x004214A2: push     ebp
  0x004214A3: push     ecx
  0x004214A4: mov      ecx, dword ptr [esp + 0x38]
  0x004214A8: add      eax, ecx
  0x004214AA: push     ebx
  0x004214AB: add      eax, edi
  0x004214AD: push     edx
  0x004214AE: push     eax
  0x004214AF: mov      ecx, esi
  0x004214B1: call     0x421750
  0x004214C5: mov      ebx, dword ptr [esp + 0x24]
  0x004214C9: mov      edx, dword ptr [esp + 0x28]
  0x004214CD: mov      ecx, dword ptr [esp + 0x30]
  0x004214D1: mov      eax, dword ptr [esp + 0x38]
  0x004214D5: add      ebx, edx
  0x004214D7: inc      ecx
  0x004214D8: dec      eax
  0x004214D9: mov      dword ptr [esp + 0x24], ebx
  0x004214DD: mov      dword ptr [esp + 0x30], ecx
  0x004214E1: mov      dword ptr [esp + 0x38], eax
  0x004214E5: jne      0x421486
  0x004216F6: mov      eax, dword ptr [esp + 0x10]
  0x004216FA: mov      edx, dword ptr [esp + 0x24]
  0x004216FE: mov      ecx, dword ptr [esp + 0x38]
  0x00421702: shl      eax, 2
  0x00421705: add      edx, eax
  0x00421707: mov      eax, dword ptr [esp + 0x28]
  0x0042170B: inc      ecx
  0x0042170C: dec      eax
  0x0042170D: mov      dword ptr [esp + 0x24], edx
  0x00421711: mov      dword ptr [esp + 0x38], ecx
  0x00421715: mov      dword ptr [esp + 0x28], eax
  0x00421719: jne      0x4216b8
  0x004216D1: mov      edx, dword ptr [esp + 0x34]
  0x004216D5: lea      ecx, [edi - 1]
  0x004216D8: push     ebp
  0x004216D9: push     ecx
  0x004216DA: push     edi
  0x004216DB: push     edx
  0x004216DC: push     ebx
  0x004216DD: mov      ecx, esi
  0x004216DF: call     0x421750
  0x00421551: mov      edx, dword ptr [esp + 0x34]
  0x00421555: lea      eax, [edi - 1]
  0x00421558: push     eax
  0x00421559: lea      ecx, [edi + 1]
  0x0042155C: push     edi
  0x0042155D: push     ecx
  0x0042155E: push     edx
  0x0042155F: push     ebx
  0x00421560: mov      ecx, esi
  0x00421562: call     0x421750

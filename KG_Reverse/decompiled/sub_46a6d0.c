
/*
 * ============================================================
 * KG.exe 反编译分析 - sub_46a6d0
 * ============================================================
 *
 * 函数地址: 0x0046A6D0
 * 基本块数: 148
 * 指令数:   617
 * 复杂度:   中复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_46a6d0(void) {

  /* 代码块 1 @ 0x0046A6D0 */
  // 读取全局变量值 fs:[0]
  // 压栈 -1 (通常作为错误标志)
  // 保存寄存器 0x4a11a7
  // 保存寄存器 eax
  // mov dword ptr fs:[0], esp
  // 分配 0x118 字节栈空间
  // 保存寄存器 ebx
  // 从栈读取参数 0x12c 到 ebx
  // 保存寄存器 esi
  // 保存寄存器 edi
  // edi 清零
  // 保存寄存器 edi
  // 保存寄存器 ebx
  // 直接调用函数 0x00480FA8
  call(0x00480FA8);
  /* 代码块 2 @ 0x0046A6FE */
  // mov esi, eax
  // CMP esi, edi (set flags)
  // 如果不相等则跳转到 0x46a70b
  /* 代码块 3 @ 0x0046A704 */
  // eax 清零（准备返回值）
  goto 0x46adbf;
  /* 代码块 4 @ 0x0046A70B */
  // 保存寄存器 ebp
  // 保存寄存器 esi
  // 直接调用函数 0x004838E7
  call(0x004838E7);
  /* 代码块 5 @ 0x0046ADBF */
  // 从栈读取参数 0x124 到 ecx
  // 恢复寄存器 edi
  // 恢复寄存器 esi
  // 恢复寄存器 ebx
  // mov dword ptr fs:[0], ecx
  // 释放 0x124 字节栈空间
  return;
  /* 代码块 6 @ 0x0046A712 */
  // add esp, 4
  // mov ebp, eax
  // 保存寄存器 ebp
  // 保存寄存器 esi
  // 保存寄存器 edi
  // 保存寄存器 ebx
  // 直接调用函数 0x00480FA2
  call(0x00480FA2);
  /* 代码块 7 @ 0x0046A720 */
  // 计算栈偏移地址 20 -> eax
  // 计算栈偏移地址 18 -> ecx
  // 保存寄存器 eax
  // 保存寄存器 ecx
  // 保存寄存器 0x2fd25d4
  // 保存寄存器 ebp
  // 写入栈变量 [esp+0x28] = edi
  // 写入栈变量 [esp+0x30] = edi
  // 直接调用函数 0x00480F9C
  call(0x00480F9C);
  /* 代码块 8 @ 0x0046A73D */
  // 读取全局变量值 [0x2fd8088]
  // 写入栈变量 [esp+0x10] = eax
  // 写入栈变量 [esp+0x130] = edi
  // 写入栈变量 [esp+0x1c] = eax
  // 写入栈变量 [esp+0x14] = eax
  // 读取全局变量值 [esp + 0x20]
  // mov byte ptr [esp + 0x130], 2
  // CMP eax, edi (set flags)
  // if (below or equal) goto 0x46a884
  /* 代码块 9 @ 0x0046A884 */
  // 保存寄存器 0x2fd25bc
  // 计算栈偏移地址 20 -> ecx
  // 直接调用函数 0x00493313
  call(0x00493313);
  /* 代码块 10 @ 0x0046A769 */
  // shr eax, 2
  // mov ebx, eax
  // esi 清零
  // CMP ebx, edi (set flags)
  // if (less or equal) goto 0x46a7b5
  /* 代码块 11 @ 0x0046A892 */
  // 从栈读取参数 0x13c 到 ebx
  // 加载常量 0x40
  // eax 清零（准备返回值）
  // lea edi, [ebx + 0x900]
  /* 代码块 12 @ 0x0046A7B5 */
  // 从栈读取参数 0x14 到 edi
  // or ecx, 0xffffffff
  // eax 清零（准备返回值）
  // 从栈读取参数 0x13c 到 ebx
  /* 代码块 13 @ 0x0046A774 */
  // 从栈读取参数 0x18 到 edi
  // 读取全局变量值 [edi]
  // 计算栈偏移地址 28 -> edx
  // 保存寄存器 0x100
  // 保存寄存器 edx
  // 保存寄存器 eax
  // 直接调用函数 0x00480F96
  call(0x00480F96);
  /* 代码块 14 @ 0x0046A8A8 */
  // 读取全局变量值 [esp + 0x1c]
  // 计算栈偏移地址 10 -> ecx
  // 保存寄存器 eax
  // 保存寄存器 0x2fd259c
  // 保存寄存器 ecx
  // 直接调用函数 0x004912AB
  call(0x004912AB);
  /* 代码块 15 @ 0x0046A7C7 */
  // not ecx
  // sub edi, ecx
  // lea edx, [ebx + 0x900]
  // mov eax, ecx
  // mov esi, edi
  // mov edi, edx
  // 从栈读取参数 0x18 到 edx
  // shr ecx, 2
  /* 代码块 16 @ 0x0046A78A */
  // 计算栈偏移地址 28 -> ecx
  // 保存寄存器 ecx
  // 计算栈偏移地址 18 -> ecx
  // 直接调用函数 0x00493566
  call(0x00493566);
  /* 代码块 17 @ 0x0046A8BC */
  // 释放 0xc 字节栈空间
  // 计算栈偏移地址 20 -> edx
  // 计算栈偏移地址 18 -> eax
  // 计算栈偏移地址 10 -> ecx
  // 保存寄存器 edx
  // 保存寄存器 eax
  // 保存寄存器 0x100
  // 直接调用函数 0x00493631
  call(0x00493631);
  /* 代码块 18 @ 0x0046A7E0 */
  // mov ecx, eax
  // 计算栈偏移地址 14 -> eax
  // and ecx, 3
  /* 代码块 19 @ 0x0046A798 */
  // lea eax, [ebx - 1]
  // CMP esi, eax (set flags)
  // 如果相等则跳转到 0x46a7ad
  /* 代码块 20 @ 0x0046A8D7 */
  // 保存寄存器 eax
  // 保存寄存器 ebp
  // 直接调用函数 0x00480F9C
  call(0x00480F9C);
  /* 代码块 21 @ 0x0046A7EB */
  // ecx 清零
  // mov cx, word ptr [edx]
  // 保存寄存器 ecx
  // 保存寄存器 0x2fd25c8
  // 保存寄存器 eax
  // 直接调用函数 0x004912AB
  call(0x004912AB);
  /* 代码块 22 @ 0x0046A7AD */
  // inc esi
  // add edi, 4
  // CMP esi, ebx (set flags)
  // if (less) goto 0x46a778
  /* 代码块 23 @ 0x0046A79F */
  // 保存寄存器 0x2fd25d0
  // 计算栈偏移地址 18 -> ecx
  // 直接调用函数 0x00493566
  call(0x00493566);
  /* 代码块 24 @ 0x0046A8DE */
  // 压栈 -1 (通常作为错误标志)
  // 计算栈偏移地址 14 -> ecx
  // 直接调用函数 0x00493609
  call(0x00493609);
  /* 代码块 25 @ 0x0046A7FC */
  // 释放 0xc 字节栈空间
  // 计算栈偏移地址 24 -> ecx
  // 保存寄存器 4
  // 保存寄存器 ecx
  // 计算栈偏移地址 1c -> ecx
  // 直接调用函数 0x00490E31
  call(0x00490E31);
  // 读取全局变量值 [edi]
  // 计算栈偏移地址 28 -> edx
  // 保存寄存器 0x100
  // 保存寄存器 edx
  // 保存寄存器 eax
  // 直接调用函数 0x00480F96
  call(0x00480F96);
  /* 代码块 26 @ 0x0046A8E9 */
  // 从栈读取参数 0x18 到 ecx
  // 计算栈偏移地址 14 -> edx
  // 保存寄存器 ecx
  // 保存寄存器 0x2fd2598
  // 保存寄存器 edx
  // 直接调用函数 0x004912AB
  call(0x004912AB);
  /* 代码块 27 @ 0x0046A80F */
  // 保存寄存器 eax
  // 计算栈偏移地址 20 -> ecx
  // mov byte ptr [esp + 0x134], 3
  // 直接调用函数 0x004932C3
  call(0x004932C3);
  /* 代码块 28 @ 0x0046A8FD */
  // 从栈读取参数 0x20 到 edi
  // or ecx, 0xffffffff
  // eax 清零（准备返回值）
  // 计算栈偏移地址 1c -> edx
  /* 代码块 29 @ 0x0046A821 */
  // 计算栈偏移地址 24 -> ecx
  // mov byte ptr [esp + 0x130], 2
  // 直接调用函数 0x004931D6
  call(0x004931D6);
  /* 代码块 30 @ 0x0046A90C */
  // not ecx
  // sub edi, ecx
  // mov eax, ecx
  // mov esi, edi
  // mov edi, ebx
  // shr ecx, 2
  /* 代码块 31 @ 0x0046A832 */
  // 读取全局变量值 [esp + 0x18]
  // edx 清零
  // 计算栈偏移地址 14 -> ecx
  // mov dx, word ptr [eax + 2]
  // 保存寄存器 edx
  // 保存寄存器 0x2fd25c8
  // 保存寄存器 ecx
  // 直接调用函数 0x004912AB
  call(0x004912AB);
  /* 代码块 32 @ 0x0046A91B */
  // mov ecx, eax
  // and ecx, 3
  /* 代码块 33 @ 0x0046A84C */
  // 释放 0xc 字节栈空间
  // 计算栈偏移地址 24 -> edx
  // 计算栈偏移地址 14 -> ecx
  // 保存寄存器 4
  // 保存寄存器 edx
  // 直接调用函数 0x00490E31
  call(0x00490E31);
  /* 代码块 34 @ 0x0046A922 */
  // 从栈读取参数 0x28 到 ecx
  // 保存寄存器 ecx
  // 保存寄存器 0x2fd2578
  // 保存寄存器 edx
  // 直接调用函数 0x004912AB
  call(0x004912AB);
  /* 代码块 35 @ 0x0046A85F */
  // 保存寄存器 eax
  // 计算栈偏移地址 20 -> ecx
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0046A6D0: mov      eax, dword ptr fs:[0]
  0x0046A6D6: push     -1
  0x0046A6D8: push     0x4a11a7
  0x0046A6DD: push     eax
  0x0046A6DE: mov      dword ptr fs:[0], esp
  0x0046A6E5: sub      esp, 0x118
  0x0046A6EB: push     ebx
  0x0046A6EC: mov      ebx, dword ptr [esp + 0x12c]
  0x0046A6F3: push     esi
  0x0046A6F4: push     edi
  0x0046A6F5: xor      edi, edi
  0x0046A6F7: push     edi
  0x0046A6F8: push     ebx
  0x0046A6F9: call     0x480fa8
  0x0046A6FE: mov      esi, eax
  0x0046A700: cmp      esi, edi
  0x0046A702: jne      0x46a70b
  0x0046A704: xor      eax, eax
  0x0046A706: jmp      0x46adbf
  0x0046A70B: push     ebp
  0x0046A70C: push     esi
  0x0046A70D: call     0x4838e7
  0x0046ADBF: mov      ecx, dword ptr [esp + 0x124]
  0x0046ADC6: pop      edi
  0x0046ADC7: pop      esi
  0x0046ADC8: pop      ebx
  0x0046ADC9: mov      dword ptr fs:[0], ecx
  0x0046ADD0: add      esp, 0x124
  0x0046ADD6: ret      8
  0x0046A712: add      esp, 4
  0x0046A715: mov      ebp, eax
  0x0046A717: push     ebp
  0x0046A718: push     esi
  0x0046A719: push     edi
  0x0046A71A: push     ebx
  0x0046A71B: call     0x480fa2
  0x0046A720: lea      eax, [esp + 0x20]
  0x0046A724: lea      ecx, [esp + 0x18]
  0x0046A728: push     eax
  0x0046A729: push     ecx
  0x0046A72A: push     0x2fd25d4
  0x0046A72F: push     ebp
  0x0046A730: mov      dword ptr [esp + 0x28], edi
  0x0046A734: mov      dword ptr [esp + 0x30], edi
  0x0046A738: call     0x480f9c
  0x0046A73D: mov      eax, dword ptr [0x2fd8088]
  0x0046A742: mov      dword ptr [esp + 0x10], eax
  0x0046A746: mov      dword ptr [esp + 0x130], edi
  0x0046A74D: mov      dword ptr [esp + 0x1c], eax
  0x0046A751: mov      dword ptr [esp + 0x14], eax
  0x0046A755: mov      eax, dword ptr [esp + 0x20]
  0x0046A759: mov      byte ptr [esp + 0x130], 2
  0x0046A761: cmp      eax, edi
  0x0046A763: jbe      0x46a884
  0x0046A884: push     0x2fd25bc
  0x0046A889: lea      ecx, [esp + 0x20]
  0x0046A88D: call     0x493313
  0x0046A769: shr      eax, 2
  0x0046A76C: mov      ebx, eax
  0x0046A76E: xor      esi, esi
  0x0046A770: cmp      ebx, edi
  0x0046A772: jle      0x46a7b5
  0x0046A892: mov      ebx, dword ptr [esp + 0x13c]
  0x0046A899: mov      ecx, 0x40
  0x0046A89E: xor      eax, eax
  0x0046A8A0: lea      edi, [ebx + 0x900]
  0x0046A8A6: rep stosd dword ptr es:[edi], eax
  0x0046A7B5: mov      edi, dword ptr [esp + 0x14]
  0x0046A7B9: or       ecx, 0xffffffff
  0x0046A7BC: xor      eax, eax
  0x0046A7BE: mov      ebx, dword ptr [esp + 0x13c]
  0x0046A7C5: repne scasb al, byte ptr es:[edi]
  0x0046A774: mov      edi, dword ptr [esp + 0x18]
  0x0046A778: mov      eax, dword ptr [edi]
  0x0046A77A: lea      edx, [esp + 0x28]
  0x0046A77E: push     0x100
  0x0046A783: push     edx
  0x0046A784: push     eax
  0x0046A785: call     0x480f96
  0x0046A8A8: mov      eax, dword ptr [esp + 0x1c]
  0x0046A8AC: lea      ecx, [esp + 0x10]
  0x0046A8B0: push     eax
  0x0046A8B1: push     0x2fd259c
  0x0046A8B6: push     ecx
  0x0046A8B7: call     0x4912ab
  0x0046A8A6: rep stosd dword ptr es:[edi], eax
  0x0046A7C7: not      ecx
  0x0046A7C9: sub      edi, ecx
  0x0046A7CB: lea      edx, [ebx + 0x900]
  0x0046A7D1: mov      eax, ecx
  0x0046A7D3: mov      esi, edi
  0x0046A7D5: mov      edi, edx
  0x0046A7D7: mov      edx, dword ptr [esp + 0x18]
  0x0046A7DB: shr      ecx, 2
  0x0046A7DE: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046A7C5: repne scasb al, byte ptr es:[edi]
  0x0046A78A: lea      ecx, [esp + 0x28]
  0x0046A78E: push     ecx
  0x0046A78F: lea      ecx, [esp + 0x18]
  0x0046A793: call     0x493566
  0x0046A8BC: add      esp, 0xc
  0x0046A8BF: lea      edx, [esp + 0x20]
  0x0046A8C3: lea      eax, [esp + 0x18]
  0x0046A8C7: lea      ecx, [esp + 0x10]
  0x0046A8CB: push     edx
  0x0046A8CC: push     eax
  0x0046A8CD: push     0x100
  0x0046A8D2: call     0x493631
  0x0046A7E0: mov      ecx, eax
  0x0046A7E2: lea      eax, [esp + 0x14]
  0x0046A7E6: and      ecx, 3
  0x0046A7E9: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046A7DE: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046A798: lea      eax, [ebx - 1]
  0x0046A79B: cmp      esi, eax
  0x0046A79D: je       0x46a7ad
  0x0046A8D7: push     eax
  0x0046A8D8: push     ebp
  0x0046A8D9: call     0x480f9c
  0x0046A7EB: xor      ecx, ecx
  0x0046A7ED: mov      cx, word ptr [edx]
  0x0046A7F0: push     ecx
  0x0046A7F1: push     0x2fd25c8
  0x0046A7F6: push     eax
  0x0046A7F7: call     0x4912ab
  0x0046A7E9: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046A7AD: inc      esi
  0x0046A7AE: add      edi, 4
  0x0046A7B1: cmp      esi, ebx
  0x0046A7B3: jl       0x46a778
  0x0046A79F: push     0x2fd25d0
  0x0046A7A4: lea      ecx, [esp + 0x18]
  0x0046A7A8: call     0x493566
  0x0046A8DE: push     -1
  0x0046A8E0: lea      ecx, [esp + 0x14]
  0x0046A8E4: call     0x493609
  0x0046A7FC: add      esp, 0xc
  0x0046A7FF: lea      ecx, [esp + 0x24]
  0x0046A803: push     4
  0x0046A805: push     ecx
  0x0046A806: lea      ecx, [esp + 0x1c]
  0x0046A80A: call     0x490e31
  0x0046A778: mov      eax, dword ptr [edi]
  0x0046A77A: lea      edx, [esp + 0x28]
  0x0046A77E: push     0x100
  0x0046A783: push     edx
  0x0046A784: push     eax
  0x0046A785: call     0x480f96
  0x0046A8E9: mov      ecx, dword ptr [esp + 0x18]
  0x0046A8ED: lea      edx, [esp + 0x14]
  0x0046A8F1: push     ecx
  0x0046A8F2: push     0x2fd2598
  0x0046A8F7: push     edx
  0x0046A8F8: call     0x4912ab
  0x0046A80F: push     eax
  0x0046A810: lea      ecx, [esp + 0x20]
  0x0046A814: mov      byte ptr [esp + 0x134], 3
  0x0046A81C: call     0x4932c3
  0x0046A8FD: mov      edi, dword ptr [esp + 0x20]
  0x0046A901: or       ecx, 0xffffffff
  0x0046A904: xor      eax, eax
  0x0046A906: lea      edx, [esp + 0x1c]
  0x0046A90A: repne scasb al, byte ptr es:[edi]
  0x0046A821: lea      ecx, [esp + 0x24]
  0x0046A825: mov      byte ptr [esp + 0x130], 2
  0x0046A82D: call     0x4931d6
  0x0046A90C: not      ecx
  0x0046A90E: sub      edi, ecx
  0x0046A910: mov      eax, ecx
  0x0046A912: mov      esi, edi
  0x0046A914: mov      edi, ebx
  0x0046A916: shr      ecx, 2
  0x0046A919: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046A90A: repne scasb al, byte ptr es:[edi]
  0x0046A832: mov      eax, dword ptr [esp + 0x18]
  0x0046A836: xor      edx, edx
  0x0046A838: lea      ecx, [esp + 0x14]
  0x0046A83C: mov      dx, word ptr [eax + 2]
  0x0046A840: push     edx
  0x0046A841: push     0x2fd25c8
  0x0046A846: push     ecx
  0x0046A847: call     0x4912ab
  0x0046A91B: mov      ecx, eax
  0x0046A91D: and      ecx, 3
  0x0046A920: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046A919: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046A84C: add      esp, 0xc
  0x0046A84F: lea      edx, [esp + 0x24]
  0x0046A853: lea      ecx, [esp + 0x14]
  0x0046A857: push     4
  0x0046A859: push     edx
  0x0046A85A: call     0x490e31
  0x0046A922: mov      ecx, dword ptr [esp + 0x28]
  0x0046A926: push     ecx
  0x0046A927: push     0x2fd2578
  0x0046A92C: push     edx
  0x0046A92D: call     0x4912ab
  0x0046A920: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046A85F: push     eax
  0x0046A860: lea      ecx, [esp + 0x20]
  0x0046A864: mov      byte ptr [esp + 0x134], 4
  0x0046A86C: call     0x4935a2
  0x0046A932: add      esp, 0x18
  0x0046A935: lea      eax, [esp + 0x20]
  0x0046A939: lea      ecx, [esp + 0x18]
  0x0046A93D: push     eax
  0x0046A93E: push     ecx
  0x0046A93F: push     0x100
  0x0046A944: lea      ecx, [esp + 0x1c]
  0x0046A948: call     0x493631
  0x0046A871: lea      ecx, [esp + 0x24]
  0x0046A875: mov      byte ptr [esp + 0x130], 2
  0x0046A87D: call     0x4931d6
  0x0046A94D: push     eax
  0x0046A94E: push     ebp
  0x0046A94F: call     0x480f9c
  0x0046A882: jmp      0x46a8a8
  0x0046A954: push     -1
  0x0046A956: lea      ecx, [esp + 0x14]
  0x0046A95A: call     0x493609
  0x0046A95F: mov      edx, dword ptr [esp + 0x18]
  0x0046A963: lea      eax, [esp + 0x14]
  0x0046A967: push     edx
  0x0046A968: push     0x2fd2598
  0x0046A96D: push     eax
  0x0046A96E: call     0x4912ab
  0x0046A973: mov      edi, dword ptr [esp + 0x20]
  0x0046A977: or       ecx, 0xffffffff
  0x0046A97A: xor      eax, eax
  0x0046A97C: lea      edx, [ebx + 0x100]
  0x0046A982: repne scasb al, byte ptr es:[edi]
  0x0046A984: not      ecx
  0x0046A986: sub      edi, ecx
  0x0046A988: mov      eax, ecx
  0x0046A98A: mov      esi, edi
  0x0046A98C: mov      edi, edx
  0x0046A98E: shr      ecx, 2
  0x0046A991: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046A982: repne scasb al, byte ptr es:[edi]
  0x0046A993: mov      ecx, eax
  0x0046A995: and      ecx, 3
  0x0046A998: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046A991: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046A99A: mov      ecx, dword ptr [esp + 0x28]
  0x0046A99E: lea      edx, [esp + 0x1c]
  0x0046A9A2: push     ecx
  0x0046A9A3: push     0x2fd2554
  0x0046A9A8: push     edx
  0x0046A9A9: call     0x4912ab
  0x0046A998: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046A9AE: add      esp, 0x18
  0x0046A9B1: lea      eax, [esp + 0x20]
  0x0046A9B5: lea      ecx, [esp + 0x18]
  0x0046A9B9: push     eax
  0x0046A9BA: push     ecx
  0x0046A9BB: push     0x100
  0x0046A9C0: lea      ecx, [esp + 0x1c]
  0x0046A9C4: call     0x493631
  0x0046A9C9: push     eax
  0x0046A9CA: push     ebp
  0x0046A9CB: call     0x480f9c
  0x0046A9D0: push     -1
  0x0046A9D2: lea      ecx, [esp + 0x14]
  0x0046A9D6: call     0x493609
  0x0046A9DB: mov      edx, dword ptr [esp + 0x18]
  0x0046A9DF: lea      eax, [esp + 0x14]
  0x0046A9E3: push     edx
  0x0046A9E4: push     0x2fd2598
  0x0046A9E9: push     eax
  0x0046A9EA: call     0x4912ab
  0x0046A9EF: mov      edi, dword ptr [esp + 0x20]
  0x0046A9F3: or       ecx, 0xffffffff
  0x0046A9F6: xor      eax, eax
  0x0046A9F8: lea      edx, [ebx + 0x200]
  0x0046A9FE: repne scasb al, byte ptr es:[edi]
  0x0046AA00: not      ecx
  0x0046AA02: sub      edi, ecx
  0x0046AA04: mov      eax, ecx
  0x0046AA06: mov      esi, edi
  0x0046AA08: mov      edi, edx
  0x0046AA0A: lea      edx, [esp + 0x1c]
  0x0046AA0E: shr      ecx, 2
  0x0046AA11: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046A9FE: repne scasb al, byte ptr es:[edi]
  0x0046AA13: mov      ecx, eax
  0x0046AA15: and      ecx, 3
  0x0046AA18: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AA11: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AA1A: mov      ecx, dword ptr [esp + 0x28]
  0x0046AA1E: push     ecx
  0x0046AA1F: push     0x2fd2534
  0x0046AA24: push     edx
  0x0046AA25: call     0x4912ab
  0x0046AA18: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AA2A: add      esp, 0x18
  0x0046AA2D: lea      eax, [esp + 0x20]
  0x0046AA31: lea      ecx, [esp + 0x18]
  0x0046AA35: push     eax
  0x0046AA36: push     ecx
  0x0046AA37: push     0x100
  0x0046AA3C: lea      ecx, [esp + 0x1c]
  0x0046AA40: call     0x493631
  0x0046AA45: push     eax
  0x0046AA46: push     ebp
  0x0046AA47: call     0x480f9c
  0x0046AA4C: push     -1
  0x0046AA4E: lea      ecx, [esp + 0x14]
  0x0046AA52: call     0x493609
  0x0046AA57: mov      edx, dword ptr [esp + 0x18]
  0x0046AA5B: lea      eax, [esp + 0x14]
  0x0046AA5F: push     edx
  0x0046AA60: push     0x2fd2598
  0x0046AA65: push     eax
  0x0046AA66: call     0x4912ab
  0x0046AA6B: mov      edi, dword ptr [esp + 0x20]
  0x0046AA6F: or       ecx, 0xffffffff
  0x0046AA72: xor      eax, eax
  0x0046AA74: lea      edx, [ebx + 0x300]
  0x0046AA7A: repne scasb al, byte ptr es:[edi]
  0x0046AA7C: not      ecx
  0x0046AA7E: sub      edi, ecx
  0x0046AA80: mov      eax, ecx
  0x0046AA82: mov      esi, edi
  0x0046AA84: mov      edi, edx
  0x0046AA86: shr      ecx, 2
  0x0046AA89: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AA7A: repne scasb al, byte ptr es:[edi]
  0x0046AA8B: mov      ecx, eax
  0x0046AA8D: and      ecx, 3
  0x0046AA90: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AA89: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AA92: mov      ecx, dword ptr [esp + 0x28]
  0x0046AA96: lea      edx, [esp + 0x1c]
  0x0046AA9A: push     ecx
  0x0046AA9B: push     0x2fd2510
  0x0046AAA0: push     edx
  0x0046AAA1: call     0x4912ab
  0x0046AA90: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AAA6: add      esp, 0x18
  0x0046AAA9: lea      eax, [esp + 0x20]
  0x0046AAAD: lea      ecx, [esp + 0x18]
  0x0046AAB1: push     eax
  0x0046AAB2: push     ecx
  0x0046AAB3: push     0x100
  0x0046AAB8: lea      ecx, [esp + 0x1c]
  0x0046AABC: call     0x493631
  0x0046AAC1: push     eax
  0x0046AAC2: push     ebp
  0x0046AAC3: call     0x480f9c
  0x0046AAC8: push     -1
  0x0046AACA: lea      ecx, [esp + 0x14]
  0x0046AACE: call     0x493609
  0x0046AAD3: mov      edx, dword ptr [esp + 0x18]
  0x0046AAD7: lea      eax, [esp + 0x14]
  0x0046AADB: push     edx
  0x0046AADC: push     0x2fd2598
  0x0046AAE1: push     eax
  0x0046AAE2: call     0x4912ab
  0x0046AAE7: mov      edi, dword ptr [esp + 0x20]
  0x0046AAEB: or       ecx, 0xffffffff
  0x0046AAEE: xor      eax, eax
  0x0046AAF0: lea      edx, [ebx + 0x400]
  0x0046AAF6: repne scasb al, byte ptr es:[edi]
  0x0046AAF8: not      ecx
  0x0046AAFA: sub      edi, ecx
  0x0046AAFC: mov      eax, ecx
  0x0046AAFE: mov      esi, edi
  0x0046AB00: mov      edi, edx
  0x0046AB02: lea      edx, [esp + 0x1c]
  0x0046AB06: shr      ecx, 2
  0x0046AB09: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AAF6: repne scasb al, byte ptr es:[edi]
  0x0046AB0B: mov      ecx, eax
  0x0046AB0D: and      ecx, 3
  0x0046AB10: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AB09: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AB12: mov      ecx, dword ptr [esp + 0x28]
  0x0046AB16: push     ecx
  0x0046AB17: push     0x2fd24ec
  0x0046AB1C: push     edx
  0x0046AB1D: call     0x4912ab
  0x0046AB10: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AB22: add      esp, 0x18
  0x0046AB25: lea      eax, [esp + 0x20]
  0x0046AB29: lea      ecx, [esp + 0x18]
  0x0046AB2D: push     eax
  0x0046AB2E: push     ecx
  0x0046AB2F: push     0x100
  0x0046AB34: lea      ecx, [esp + 0x1c]
  0x0046AB38: call     0x493631
  0x0046AB3D: push     eax
  0x0046AB3E: push     ebp
  0x0046AB3F: call     0x480f9c
  0x0046AB44: push     -1
  0x0046AB46: lea      ecx, [esp + 0x14]
  0x0046AB4A: call     0x493609
  0x0046AB4F: mov      edx, dword ptr [esp + 0x18]
  0x0046AB53: lea      eax, [esp + 0x14]
  0x0046AB57: push     edx
  0x0046AB58: push     0x2fd2598
  0x0046AB5D: push     eax
  0x0046AB5E: call     0x4912ab
  0x0046AB63: mov      edi, dword ptr [esp + 0x20]
  0x0046AB67: or       ecx, 0xffffffff
  0x0046AB6A: xor      eax, eax
  0x0046AB6C: lea      edx, [ebx + 0x500]
  0x0046AB72: repne scasb al, byte ptr es:[edi]
  0x0046AB74: not      ecx
  0x0046AB76: sub      edi, ecx
  0x0046AB78: mov      eax, ecx
  0x0046AB7A: mov      esi, edi
  0x0046AB7C: mov      edi, edx
  0x0046AB7E: shr      ecx, 2
  0x0046AB81: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AB72: repne scasb al, byte ptr es:[edi]
  0x0046AB83: mov      ecx, eax
  0x0046AB85: and      ecx, 3
  0x0046AB88: lea      edx, [esp + 0x1c]
  0x0046AB8C: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AB81: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AB8E: mov      ecx, dword ptr [esp + 0x28]
  0x0046AB92: push     ecx
  0x0046AB93: push     0x2fd24c8
  0x0046AB98: push     edx
  0x0046AB99: call     0x4912ab
  0x0046AB8C: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AB9E: add      esp, 0x18
  0x0046ABA1: lea      eax, [esp + 0x20]
  0x0046ABA5: lea      ecx, [esp + 0x18]
  0x0046ABA9: push     eax
  0x0046ABAA: push     ecx
  0x0046ABAB: push     0x100
  0x0046ABB0: lea      ecx, [esp + 0x1c]
  0x0046ABB4: call     0x493631
  0x0046ABB9: push     eax
  0x0046ABBA: push     ebp
  0x0046ABBB: call     0x480f9c
  0x0046ABC0: push     -1
  0x0046ABC2: lea      ecx, [esp + 0x14]
  0x0046ABC6: call     0x493609
  0x0046ABCB: mov      edx, dword ptr [esp + 0x18]
  0x0046ABCF: lea      eax, [esp + 0x14]
  0x0046ABD3: push     edx
  0x0046ABD4: push     0x2fd2598
  0x0046ABD9: push     eax
  0x0046ABDA: call     0x4912ab
  0x0046ABDF: mov      edi, dword ptr [esp + 0x20]
  0x0046ABE3: or       ecx, 0xffffffff
  0x0046ABE6: xor      eax, eax
  0x0046ABE8: lea      edx, [ebx + 0x600]
  0x0046ABEE: repne scasb al, byte ptr es:[edi]
  0x0046ABF0: not      ecx
  0x0046ABF2: sub      edi, ecx
  0x0046ABF4: mov      eax, ecx
  0x0046ABF6: mov      esi, edi
  0x0046ABF8: mov      edi, edx
  0x0046ABFA: lea      edx, [esp + 0x1c]
  0x0046ABFE: shr      ecx, 2
  0x0046AC01: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046ABEE: repne scasb al, byte ptr es:[edi]
  0x0046AC03: mov      ecx, eax
  0x0046AC05: and      ecx, 3
  0x0046AC08: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AC01: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AC0A: mov      ecx, dword ptr [esp + 0x28]
  0x0046AC0E: push     ecx
  0x0046AC0F: push     0x2fd24a8
  0x0046AC14: push     edx
  0x0046AC15: call     0x4912ab
  0x0046AC08: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AC1A: add      esp, 0x18
  0x0046AC1D: lea      eax, [esp + 0x20]
  0x0046AC21: lea      ecx, [esp + 0x18]
  0x0046AC25: push     eax
  0x0046AC26: push     ecx
  0x0046AC27: push     0x100
  0x0046AC2C: lea      ecx, [esp + 0x1c]
  0x0046AC30: call     0x493631
  0x0046AC35: push     eax
  0x0046AC36: push     ebp
  0x0046AC37: call     0x480f9c
  0x0046AC3C: push     -1
  0x0046AC3E: lea      ecx, [esp + 0x14]
  0x0046AC42: call     0x493609
  0x0046AC47: mov      edx, dword ptr [esp + 0x18]
  0x0046AC4B: lea      eax, [esp + 0x14]
  0x0046AC4F: push     edx
  0x0046AC50: push     0x2fd2598
  0x0046AC55: push     eax
  0x0046AC56: call     0x4912ab
  0x0046AC5B: mov      edi, dword ptr [esp + 0x20]
  0x0046AC5F: or       ecx, 0xffffffff
  0x0046AC62: xor      eax, eax
  0x0046AC64: lea      edx, [ebx + 0x700]
  0x0046AC6A: repne scasb al, byte ptr es:[edi]
  0x0046AC6C: not      ecx
  0x0046AC6E: sub      edi, ecx
  0x0046AC70: mov      eax, ecx
  0x0046AC72: mov      esi, edi
  0x0046AC74: mov      edi, edx
  0x0046AC76: shr      ecx, 2
  0x0046AC79: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AC6A: repne scasb al, byte ptr es:[edi]
  0x0046AC7B: mov      ecx, eax
  0x0046AC7D: lea      edx, [esp + 0x1c]
  0x0046AC81: and      ecx, 3
  0x0046AC84: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AC79: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AC86: mov      ecx, dword ptr [esp + 0x28]
  0x0046AC8A: push     ecx
  0x0046AC8B: push     0x2fd2484
  0x0046AC90: push     edx
  0x0046AC91: call     0x4912ab
  0x0046AC84: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AC96: add      esp, 0x18
  0x0046AC99: lea      eax, [esp + 0x20]
  0x0046AC9D: lea      ecx, [esp + 0x18]
  0x0046ACA1: push     eax
  0x0046ACA2: push     ecx
  0x0046ACA3: push     0x100
  0x0046ACA8: lea      ecx, [esp + 0x1c]
  0x0046ACAC: call     0x493631
  0x0046ACB1: push     eax
  0x0046ACB2: push     ebp
  0x0046ACB3: call     0x480f9c
  0x0046ACB8: push     -1
  0x0046ACBA: lea      ecx, [esp + 0x14]
  0x0046ACBE: call     0x493609
  0x0046ACC3: mov      edx, dword ptr [esp + 0x18]
  0x0046ACC7: lea      eax, [esp + 0x14]
  0x0046ACCB: push     edx
  0x0046ACCC: push     0x2fd2598
  0x0046ACD1: push     eax
  0x0046ACD2: call     0x4912ab
  0x0046ACD7: mov      edi, dword ptr [esp + 0x20]
  0x0046ACDB: or       ecx, 0xffffffff
  0x0046ACDE: xor      eax, eax
  0x0046ACE0: lea      edx, [ebx + 0x800]
  0x0046ACE6: repne scasb al, byte ptr es:[edi]
  0x0046ACE8: not      ecx
  0x0046ACEA: sub      edi, ecx
  0x0046ACEC: mov      eax, ecx
  0x0046ACEE: mov      esi, edi
  0x0046ACF0: mov      edi, edx
  0x0046ACF2: lea      edx, [esp + 0x1c]
  0x0046ACF6: shr      ecx, 2
  0x0046ACF9: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046ACE6: repne scasb al, byte ptr es:[edi]
  0x0046ACFB: mov      ecx, eax
  0x0046ACFD: and      ecx, 3
  0x0046AD00: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046ACF9: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AD02: mov      ecx, dword ptr [esp + 0x28]
  0x0046AD06: push     ecx
  0x0046AD07: push     0x2fd2468
  0x0046AD0C: push     edx
  0x0046AD0D: call     0x4912ab
  0x0046AD00: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AD12: add      esp, 0x18
  0x0046AD15: lea      eax, [esp + 0x20]
  0x0046AD19: lea      ecx, [esp + 0x18]
  0x0046AD1D: push     eax
  0x0046AD1E: push     ecx
  0x0046AD1F: push     0x100
  0x0046AD24: lea      ecx, [esp + 0x1c]
  0x0046AD28: call     0x493631
  0x0046AD2D: push     eax
  0x0046AD2E: push     ebp
  0x0046AD2F: call     0x480f9c
  0x0046AD34: push     -1
  0x0046AD36: lea      ecx, [esp + 0x14]
  0x0046AD3A: call     0x493609
  0x0046AD3F: mov      edx, dword ptr [esp + 0x18]
  0x0046AD43: lea      eax, [esp + 0x14]
  0x0046AD47: push     edx
  0x0046AD48: push     0x2fd2598
  0x0046AD4D: push     eax
  0x0046AD4E: call     0x4912ab
  0x0046AD53: mov      edi, dword ptr [esp + 0x20]
  0x0046AD57: or       ecx, 0xffffffff
  0x0046AD5A: xor      eax, eax
  0x0046AD5C: lea      edx, [ebx + 0xa00]
  0x0046AD62: repne scasb al, byte ptr es:[edi]
  0x0046AD64: not      ecx
  0x0046AD66: sub      edi, ecx
  0x0046AD68: mov      eax, ecx
  0x0046AD6A: mov      esi, edi
  0x0046AD6C: mov      edi, edx
  0x0046AD6E: shr      ecx, 2
  0x0046AD71: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AD62: repne scasb al, byte ptr es:[edi]
  0x0046AD73: mov      ecx, eax
  0x0046AD75: push     ebp
  0x0046AD76: and      ecx, 3
  0x0046AD79: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AD71: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0046AD7B: call     0x4837fe
  0x0046AD79: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0046AD80: add      esp, 0x10
  0x0046AD83: lea      ecx, [esp + 0x14]
  0x0046AD87: mov      byte ptr [esp + 0x130], 1
  0x0046AD8F: call     0x4931d6
  0x0046AD94: lea      ecx, [esp + 0x1c]
  0x0046AD98: mov      byte ptr [esp + 0x130], 0
  0x0046ADA0: call     0x4931d6
  0x0046ADA5: lea      ecx, [esp + 0x10]
  0x0046ADA9: mov      dword ptr [esp + 0x130], 0xffffffff
  0x0046ADB4: call     0x4931d6
  0x0046ADB9: mov      eax, 1
  0x0046ADBE: pop      ebp
  0x0046ADBF: mov      ecx, dword ptr [esp + 0x124]
  0x0046ADC6: pop      edi
  0x0046ADC7: pop      esi
  0x0046ADC8: pop      ebx
  0x0046ADC9: mov      dword ptr fs:[0], ecx
  0x0046ADD0: add      esp, 0x124
  0x0046ADD6: ret      8

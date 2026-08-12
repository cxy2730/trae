
/*
 * ============================================================
 * KG.exe 反编译分析 - sub_472280
 * ============================================================
 *
 * 函数地址: 0x00472280
 * 基本块数: 204
 * 指令数:   2344
 * 复杂度:   高复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_472280(void) {

  /* 代码块 1 @ 0x00472280 */
  // 分配 0xc 字节栈空间
  // 保存寄存器 ebx
  // 保存寄存器 ebp
  // 保存寄存器 esi
  // 保存寄存器 edi
  // mov edi, 0x3012a80
  // xor ebx, ebx
  // 写入栈变量 [esp+0x14] = 0
  // 读取全局变量值 [0x3008f8c]
  // esi 清零
  // CMP eax, 0x25 (set flags)
  // if (above) goto 0x473b0f
  /* 代码块 2 @ 0x004722A6 */
  goto dword ptr [eax*4 + 0x473b34];
  /* 代码块 3 @ 0x00473B0F */
  // 读取全局变量值 [esp + 0x14]
  // inc eax
  // CMP eax, 4 (set flags)
  // 写入栈变量 [esp+0x14] = eax
  // if (less) goto 0x472296
  /* 代码块 4 @ 0x00473800 */
  // 保存寄存器 0xb
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 5 @ 0x00472386 */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 7 (set flags)
  // if (greater or equal) goto 0x4723c9
  /* 代码块 6 @ 0x00473789 */
  // 保存寄存器 0xa
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 7 @ 0x00473B09 */
  // add edi, 0x300
  // 读取全局变量值 [esp + 0x14]
  // inc eax
  // CMP eax, 4 (set flags)
  // 写入栈变量 [esp+0x14] = eax
  // if (less) goto 0x472296
  /* 代码块 8 @ 0x00472611 */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 0xc (set flags)
  // if (greater or equal) goto 0x472654
  /* 代码块 9 @ 0x00473712 */
  // 保存寄存器 9
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 10 @ 0x00472718 */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 0xf (set flags)
  // if (greater or equal) goto 0x47275b
  /* 代码块 11 @ 0x0047321E */
  // eax 清零（准备返回值）
  // mov dword ptr [edi + esi*4], eax
  // mov dword ptr [edi + esi*4 + 4], eax
  // mov dword ptr [edi + esi*4 + 0x100], eax
  // mov dword ptr [edi + esi*4 + 0x104], eax
  // mov dword ptr [edi + esi*4 + 0x200], eax
  // mov dword ptr [edi + esi*4 + 0x204], eax
  goto 0x473ae6;
  /* 代码块 12 @ 0x0047281F */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 0x12 (set flags)
  // if (greater or equal) goto 0x472862
  /* 代码块 13 @ 0x004736A1 */
  // 保存寄存器 8
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 14 @ 0x00473425 */
  // 保存寄存器 0xa
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 15 @ 0x00472926 */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 0x15 (set flags)
  // if (greater or equal) goto 0x472969
  /* 代码块 16 @ 0x00472B27 */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 0x12 (set flags)
  // if (greater or equal) goto 0x472b6a
  /* 代码块 17 @ 0x00472F26 */
  // mov ecx, dword ptr [0x3008d74]
  // mov edx, dword ptr [0x3008b64]
  // CMP ecx, 0x18 (set flags)
  // if (greater or equal) goto 0x472f62
  /* 代码块 18 @ 0x004722AD */
  // eax 清零（准备返回值）
  // mov dword ptr [edi + esi*4], eax
  // mov dword ptr [edi + esi*4 + 0x100], eax
  // mov dword ptr [edi + esi*4 + 0x200], eax
  goto 0x473ae7;
  /* 代码块 19 @ 0x00472A2D */
  // mov ecx, dword ptr [0x3008d74]
  // mov edx, dword ptr [0x3008b64]
  // CMP ecx, 0x18 (set flags)
  // if (greater or equal) goto 0x472a69
  /* 代码块 20 @ 0x00473630 */
  // 保存寄存器 7
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 21 @ 0x004731B2 */
  // mov eax, ebx
  // 保存寄存器 0x10
  // shl eax, 6
  // add eax, esi
  // lea ebp, [eax*4 + 0x3007064]
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 22 @ 0x004733B4 */
  // 保存寄存器 3
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 23 @ 0x004735BF */
  // 保存寄存器 6
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 24 @ 0x004722C5 */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 5 (set flags)
  // if (greater or equal) goto 0x472308
  /* 代码块 25 @ 0x00473146 */
  // mov edx, ebx
  // 保存寄存器 0xf
  // shl edx, 6
  // add edx, esi
  // lea ebp, [edx*4 + 0x3007064]
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 26 @ 0x00472447 */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 9 (set flags)
  // if (greater or equal) goto 0x47248a
  /* 代码块 27 @ 0x00473248 */
  // 保存寄存器 5
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 28 @ 0x0047254E */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 0xa (set flags)
  // if (greater or equal) goto 0x472591
  /* 代码块 29 @ 0x0047354E */
  // 保存寄存器 5
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 30 @ 0x00473A50 */
  // 保存寄存器 0x10
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 31 @ 0x00472DD1 */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 0x16 (set flags)
  // if (greater or equal) goto 0x472e14
  /* 代码块 32 @ 0x004730DA */
  // mov ecx, ebx
  // 保存寄存器 0xe
  // shl ecx, 6
  // add ecx, esi
  // lea ebp, [ecx*4 + 0x3007064]
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 33 @ 0x004739DC */
  // 保存寄存器 0xf
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 34 @ 0x004734DD */
  // 保存寄存器 4
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 35 @ 0x00473965 */
  // 保存寄存器 0xe
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 36 @ 0x0047306E */
  // mov eax, ebx
  // 保存寄存器 0xd
  // shl eax, 6
  // add eax, esi
  // lea ebp, [eax*4 + 0x3007064]
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 37 @ 0x004738EE */
  // 保存寄存器 0xd
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 38 @ 0x00473877 */
  // 保存寄存器 0xc
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 39 @ 0x00473AFA */
  // mov ecx, dword ptr [0x3008f44]
  // 保存寄存器 ecx
  // 直接调用函数 0x00473BD0
  call(0x00473BD0);
  /* 代码块 40 @ 0x00472C7C */
  // mov ecx, dword ptr [0x3008d74]
  // CMP ecx, 0x14 (set flags)
  // if (greater or equal) goto 0x472cbf
  /* 代码块 41 @ 0x004732FE */
  // 保存寄存器 7
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  // 读取全局变量值 [0x3008f8c]
  // esi 清零
  // CMP eax, 0x25 (set flags)
  // if (above) goto 0x473b0f
  /* 代码块 42 @ 0x00473B21 */
  // inc ebx
  // CMP ebx, 3 (set flags)
  // if (less) goto 0x47228e
  /* 代码块 43 @ 0x00473807 */
  // sub eax, 0x3ff
  // mov ebp, ebx
  // 写入栈变量 [esp+0x14] = eax
  // 保存寄存器 0xb
  // shl ebp, 6
  // add ebp, esi
  // shl ebp, 2
  // 直接调用函数 0x00471D10
  call(0x00471D10);
  /* 代码块 44 @ 0x00472391 */
  // CMP ecx, 0x18 (set flags)
  // if (greater) goto 0x4723c9
  /* 代码块 45 @ 0x004723C9 */
  // mov edx, dword ptr [0x3008b64]
  // sub ecx, 7
  // mov eax, edx
  // shr eax, cl
  // 写入全局变量 0x3008d74 = ecx
  // mov ebp, eax
  // 写入全局变量 0x3008ef8 = eax
  // shl ebp, cl
  // lea eax, [eax + eax*2]
  // mov ecx, ebx
  // shl ecx, 6
  // sub edx, ebp
  // add ecx, esi
  // 写入全局变量 0x3008b64 = edx
  // movsx edx, byte ptr [eax + 0x3008d78]
  // 写入栈变量 [esp+0x10] = edx
  // lea ecx, [ecx*4 + 0x3007064]
  // movsx edx, byte ptr [eax + 0x3008d79]
  // 写入栈变量 [esp+0x10] = edx
  // movsx eax, byte ptr [eax + 0x3008d7a]
  // 写入栈变量 [esp+0x10] = eax
  goto 0x473ae7;
  /* 代码块 46 @ 0x00473790 */
  // sub eax, 0x1ff
  // mov ebp, ebx
  // 写入栈变量 [esp+0x14] = eax
  // 保存寄存器 0xa
  // shl ebp, 6
  // add ebp, esi
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00472280: sub      esp, 0xc
  0x00472283: push     ebx
  0x00472284: push     ebp
  0x00472285: push     esi
  0x00472286: push     edi
  0x00472287: mov      edi, 0x3012a80
  0x0047228C: xor      ebx, ebx
  0x0047228E: mov      dword ptr [esp + 0x14], 0
  0x00472296: mov      eax, dword ptr [0x3008f8c]
  0x0047229B: xor      esi, esi
  0x0047229D: cmp      eax, 0x25
  0x004722A0: ja       0x473b0f
  0x004722A6: jmp      dword ptr [eax*4 + 0x473b34]
  0x00473B0F: mov      eax, dword ptr [esp + 0x14]
  0x00473B13: inc      eax
  0x00473B14: cmp      eax, 4
  0x00473B17: mov      dword ptr [esp + 0x14], eax
  0x00473B1B: jl       0x472296
  0x00473800: push     0xb
  0x00473802: call     0x471d10
  0x00472386: mov      ecx, dword ptr [0x3008d74]
  0x0047238C: cmp      ecx, 7
  0x0047238F: jge      0x4723c9
  0x00473789: push     0xa
  0x0047378B: call     0x471d10
  0x00473B09: add      edi, 0x300
  0x00473B0F: mov      eax, dword ptr [esp + 0x14]
  0x00473B13: inc      eax
  0x00473B14: cmp      eax, 4
  0x00473B17: mov      dword ptr [esp + 0x14], eax
  0x00473B1B: jl       0x472296
  0x00472611: mov      ecx, dword ptr [0x3008d74]
  0x00472617: cmp      ecx, 0xc
  0x0047261A: jge      0x472654
  0x00473712: push     9
  0x00473714: call     0x471d10
  0x00472718: mov      ecx, dword ptr [0x3008d74]
  0x0047271E: cmp      ecx, 0xf
  0x00472721: jge      0x47275b
  0x0047321E: xor      eax, eax
  0x00473220: mov      dword ptr [edi + esi*4], eax
  0x00473223: mov      dword ptr [edi + esi*4 + 4], eax
  0x00473227: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0047322E: mov      dword ptr [edi + esi*4 + 0x104], eax
  0x00473235: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0047323C: mov      dword ptr [edi + esi*4 + 0x204], eax
  0x00473243: jmp      0x473ae6
  0x0047281F: mov      ecx, dword ptr [0x3008d74]
  0x00472825: cmp      ecx, 0x12
  0x00472828: jge      0x472862
  0x004736A1: push     8
  0x004736A3: call     0x471d10
  0x00473425: push     0xa
  0x00473427: call     0x471d10
  0x00472926: mov      ecx, dword ptr [0x3008d74]
  0x0047292C: cmp      ecx, 0x15
  0x0047292F: jge      0x472969
  0x00472B27: mov      ecx, dword ptr [0x3008d74]
  0x00472B2D: cmp      ecx, 0x12
  0x00472B30: jge      0x472b6a
  0x00472F26: mov      ecx, dword ptr [0x3008d74]
  0x00472F2C: mov      edx, dword ptr [0x3008b64]
  0x00472F32: cmp      ecx, 0x18
  0x00472F35: jge      0x472f62
  0x004722AD: xor      eax, eax
  0x004722AF: mov      dword ptr [edi + esi*4], eax
  0x004722B2: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x004722B9: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x004722C0: jmp      0x473ae7
  0x00472A2D: mov      ecx, dword ptr [0x3008d74]
  0x00472A33: mov      edx, dword ptr [0x3008b64]
  0x00472A39: cmp      ecx, 0x18
  0x00472A3C: jge      0x472a69
  0x00473630: push     7
  0x00473632: call     0x471d10
  0x004731B2: mov      eax, ebx
  0x004731B4: push     0x10
  0x004731B6: shl      eax, 6
  0x004731B9: add      eax, esi
  0x004731BB: lea      ebp, [eax*4 + 0x3007064]
  0x004731C2: call     0x471d10
  0x004733B4: push     3
  0x004733B6: call     0x471d10
  0x004735BF: push     6
  0x004735C1: call     0x471d10
  0x004722C5: mov      ecx, dword ptr [0x3008d74]
  0x004722CB: cmp      ecx, 5
  0x004722CE: jge      0x472308
  0x00473146: mov      edx, ebx
  0x00473148: push     0xf
  0x0047314A: shl      edx, 6
  0x0047314D: add      edx, esi
  0x0047314F: lea      ebp, [edx*4 + 0x3007064]
  0x00473156: call     0x471d10
  0x00472447: mov      ecx, dword ptr [0x3008d74]
  0x0047244D: cmp      ecx, 9
  0x00472450: jge      0x47248a
  0x00473248: push     5
  0x0047324A: call     0x471d10
  0x0047254E: mov      ecx, dword ptr [0x3008d74]
  0x00472554: cmp      ecx, 0xa
  0x00472557: jge      0x472591
  0x0047354E: push     5
  0x00473550: call     0x471d10
  0x00473A50: push     0x10
  0x00473A52: call     0x471d10
  0x00472DD1: mov      ecx, dword ptr [0x3008d74]
  0x00472DD7: cmp      ecx, 0x16
  0x00472DDA: jge      0x472e14
  0x004730DA: mov      ecx, ebx
  0x004730DC: push     0xe
  0x004730DE: shl      ecx, 6
  0x004730E1: add      ecx, esi
  0x004730E3: lea      ebp, [ecx*4 + 0x3007064]
  0x004730EA: call     0x471d10
  0x004739DC: push     0xf
  0x004739DE: call     0x471d10
  0x004734DD: push     4
  0x004734DF: call     0x471d10
  0x00473965: push     0xe
  0x00473967: call     0x471d10
  0x0047306E: mov      eax, ebx
  0x00473070: push     0xd
  0x00473072: shl      eax, 6
  0x00473075: add      eax, esi
  0x00473077: lea      ebp, [eax*4 + 0x3007064]
  0x0047307E: call     0x471d10
  0x004738EE: push     0xd
  0x004738F0: call     0x471d10
  0x00473877: push     0xc
  0x00473879: call     0x471d10
  0x00473AFA: mov      ecx, dword ptr [0x3008f44]
  0x00473B00: push     ecx
  0x00473B01: call     0x473bd0
  0x00472C7C: mov      ecx, dword ptr [0x3008d74]
  0x00472C82: cmp      ecx, 0x14
  0x00472C85: jge      0x472cbf
  0x004732FE: push     7
  0x00473300: call     0x471d10
  0x00472296: mov      eax, dword ptr [0x3008f8c]
  0x0047229B: xor      esi, esi
  0x0047229D: cmp      eax, 0x25
  0x004722A0: ja       0x473b0f
  0x00473B21: inc      ebx
  0x00473B22: cmp      ebx, 3
  0x00473B25: jl       0x47228e
  0x00473807: sub      eax, 0x3ff
  0x0047380C: mov      ebp, ebx
  0x0047380E: mov      dword ptr [esp + 0x14], eax
  0x00473812: push     0xb
  0x00473814: fild     dword ptr [esp + 0x18]
  0x00473818: shl      ebp, 6
  0x0047381B: add      ebp, esi
  0x0047381D: shl      ebp, 2
  0x00473820: fld      st(0)
  0x00473822: fmul     dword ptr [ebp + 0x3007064]
  0x00473828: fstp     dword ptr [edi + esi*4]
  0x0047382B: fmul     dword ptr [ebp + 0x3007068]
  0x00473831: fstp     dword ptr [edi + esi*4 + 4]
  0x00473835: call     0x471d10
  0x00472391: cmp      ecx, 0x18
  0x00472394: jg       0x4723c9
  0x004723C9: mov      edx, dword ptr [0x3008b64]
  0x004723CF: sub      ecx, 7
  0x004723D2: mov      eax, edx
  0x004723D4: shr      eax, cl
  0x004723D6: mov      dword ptr [0x3008d74], ecx
  0x004723DC: mov      ebp, eax
  0x004723DE: mov      dword ptr [0x3008ef8], eax
  0x004723E3: shl      ebp, cl
  0x004723E5: lea      eax, [eax + eax*2]
  0x004723E8: mov      ecx, ebx
  0x004723EA: shl      ecx, 6
  0x004723ED: sub      edx, ebp
  0x004723EF: add      ecx, esi
  0x004723F1: mov      dword ptr [0x3008b64], edx
  0x004723F7: movsx    edx, byte ptr [eax + 0x3008d78]
  0x004723FE: mov      dword ptr [esp + 0x10], edx
  0x00472402: lea      ecx, [ecx*4 + 0x3007064]
  0x00472409: fild     dword ptr [esp + 0x10]
  0x0047240D: fmul     dword ptr [ecx]
  0x0047240F: fstp     dword ptr [edi + esi*4]
  0x00472412: movsx    edx, byte ptr [eax + 0x3008d79]
  0x00472419: mov      dword ptr [esp + 0x10], edx
  0x0047241D: fild     dword ptr [esp + 0x10]
  0x00472421: fmul     dword ptr [ecx]
  0x00472423: fstp     dword ptr [edi + esi*4 + 0x100]
  0x0047242A: movsx    eax, byte ptr [eax + 0x3008d7a]
  0x00472431: mov      dword ptr [esp + 0x10], eax
  0x00472435: fild     dword ptr [esp + 0x10]
  0x00472439: fmul     dword ptr [ecx]
  0x0047243B: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472442: jmp      0x473ae7
  0x00473790: sub      eax, 0x1ff
  0x00473795: mov      ebp, ebx
  0x00473797: mov      dword ptr [esp + 0x14], eax
  0x0047379B: push     0xa
  0x0047379D: fild     dword ptr [esp + 0x18]
  0x004737A1: shl      ebp, 6
  0x004737A4: add      ebp, esi
  0x004737A6: shl      ebp, 2
  0x004737A9: fld      st(0)
  0x004737AB: fmul     dword ptr [ebp + 0x3007064]
  0x004737B1: fstp     dword ptr [edi + esi*4]
  0x004737B4: fmul     dword ptr [ebp + 0x3007068]
  0x004737BA: fstp     dword ptr [edi + esi*4 + 4]
  0x004737BE: call     0x471d10
  0x0047261C: cmp      ecx, 0x18
  0x0047261F: jg       0x472654
  0x00472654: mov      edx, dword ptr [0x3008b64]
  0x0047265A: sub      ecx, 4
  0x0047265D: mov      eax, edx
  0x0047265F: shr      eax, cl
  0x00472661: mov      dword ptr [0x3008d74], ecx
  0x00472667: mov      ebp, eax
  0x00472669: add      eax, -7
  0x0047266C: shl      ebp, cl
  0x0047266E: mov      ecx, ebx
  0x00472670: mov      dword ptr [esp + 0x10], eax
  0x00472674: fild     dword ptr [esp + 0x10]
  0x00472678: shl      ecx, 6
  0x0047267B: sub      edx, ebp
  0x0047267D: add      ecx, esi
  0x0047267F: mov      dword ptr [0x3008b64], edx
  0x00472685: fmul     dword ptr [ecx*4 + 0x3007064]
  0x0047268C: lea      edx, [ecx*4 + 0x3007064]
  0x00472693: fstp     dword ptr [edi + esi*4]
  0x00472696: mov      ecx, dword ptr [0x3008d74]
  0x0047269C: mov      eax, dword ptr [0x3008b64]
  0x004726A1: sub      ecx, 4
  0x004726A4: shr      eax, cl
  0x004726A6: mov      dword ptr [0x3008d74], ecx
  0x004726AC: mov      ebp, eax
  0x004726AE: add      eax, -7
  0x004726B1: mov      dword ptr [esp + 0x10], eax
  0x004726B5: fild     dword ptr [esp + 0x10]
  0x004726B9: shl      ebp, cl
  0x004726BB: mov      ecx, dword ptr [0x3008b64]
  0x004726C1: fmul     dword ptr [edx]
  0x004726C3: sub      ecx, ebp
  0x004726C5: mov      dword ptr [0x3008b64], ecx
  0x004726CB: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004726D2: mov      ecx, dword ptr [0x3008d74]
  0x004726D8: mov      eax, dword ptr [0x3008b64]
  0x004726DD: sub      ecx, 4
  0x004726E0: shr      eax, cl
  0x004726E2: mov      dword ptr [0x3008d74], ecx
  0x004726E8: mov      ebp, eax
  0x004726EA: mov      dword ptr [0x3008ef8], eax
  0x004726EF: shl      ebp, cl
  0x004726F1: mov      ecx, dword ptr [0x3008b64]
  0x004726F7: sub      ecx, ebp
  0x004726F9: add      eax, -7
  0x004726FC: mov      dword ptr [esp + 0x10], eax
  0x00472700: mov      dword ptr [0x3008b64], ecx
  0x00472706: fild     dword ptr [esp + 0x10]
  0x0047270A: fmul     dword ptr [edx]
  0x0047270C: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472713: jmp      0x473ae7
  0x00473719: sub      eax, 0xff
  0x0047371E: mov      ebp, ebx
  0x00473720: mov      dword ptr [esp + 0x14], eax
  0x00473724: push     9
  0x00473726: fild     dword ptr [esp + 0x18]
  0x0047372A: shl      ebp, 6
  0x0047372D: add      ebp, esi
  0x0047372F: shl      ebp, 2
  0x00473732: fld      st(0)
  0x00473734: fmul     dword ptr [ebp + 0x3007064]
  0x0047373A: fstp     dword ptr [edi + esi*4]
  0x0047373D: fmul     dword ptr [ebp + 0x3007068]
  0x00473743: fstp     dword ptr [edi + esi*4 + 4]
  0x00473747: call     0x471d10
  0x00472723: cmp      ecx, 0x18
  0x00472726: jg       0x47275b
  0x0047275B: mov      edx, dword ptr [0x3008b64]
  0x00472761: sub      ecx, 5
  0x00472764: mov      eax, edx
  0x00472766: shr      eax, cl
  0x00472768: mov      dword ptr [0x3008d74], ecx
  0x0047276E: mov      ebp, eax
  0x00472770: add      eax, -0xf
  0x00472773: shl      ebp, cl
  0x00472775: mov      ecx, ebx
  0x00472777: mov      dword ptr [esp + 0x10], eax
  0x0047277B: fild     dword ptr [esp + 0x10]
  0x0047277F: shl      ecx, 6
  0x00472782: sub      edx, ebp
  0x00472784: add      ecx, esi
  0x00472786: mov      dword ptr [0x3008b64], edx
  0x0047278C: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472793: lea      edx, [ecx*4 + 0x3007064]
  0x0047279A: fstp     dword ptr [edi + esi*4]
  0x0047279D: mov      ecx, dword ptr [0x3008d74]
  0x004727A3: mov      eax, dword ptr [0x3008b64]
  0x004727A8: sub      ecx, 5
  0x004727AB: shr      eax, cl
  0x004727AD: mov      dword ptr [0x3008d74], ecx
  0x004727B3: mov      ebp, eax
  0x004727B5: add      eax, -0xf
  0x004727B8: mov      dword ptr [esp + 0x10], eax
  0x004727BC: fild     dword ptr [esp + 0x10]
  0x004727C0: shl      ebp, cl
  0x004727C2: mov      ecx, dword ptr [0x3008b64]
  0x004727C8: fmul     dword ptr [edx]
  0x004727CA: sub      ecx, ebp
  0x004727CC: mov      dword ptr [0x3008b64], ecx
  0x004727D2: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004727D9: mov      ecx, dword ptr [0x3008d74]
  0x004727DF: mov      eax, dword ptr [0x3008b64]
  0x004727E4: sub      ecx, 5
  0x004727E7: shr      eax, cl
  0x004727E9: mov      dword ptr [0x3008d74], ecx
  0x004727EF: mov      ebp, eax
  0x004727F1: mov      dword ptr [0x3008ef8], eax
  0x004727F6: shl      ebp, cl
  0x004727F8: mov      ecx, dword ptr [0x3008b64]
  0x004727FE: sub      ecx, ebp
  0x00472800: add      eax, -0xf
  0x00472803: mov      dword ptr [esp + 0x10], eax
  0x00472807: mov      dword ptr [0x3008b64], ecx
  0x0047280D: fild     dword ptr [esp + 0x10]
  0x00472811: fmul     dword ptr [edx]
  0x00472813: fstp     dword ptr [edi + esi*4 + 0x200]
  0x0047281A: jmp      0x473ae7
  0x00473AE6: inc      esi
  0x00473AE7: mov      eax, dword ptr [esi*4 + 0x3008f90]
  0x00473AEE: inc      esi
  0x00473AEF: cmp      eax, 0x25
  0x00473AF2: jbe      0x4722a6
  0x0047282A: cmp      ecx, 0x18
  0x0047282D: jg       0x472862
  0x00472862: mov      edx, dword ptr [0x3008b64]
  0x00472868: sub      ecx, 6
  0x0047286B: mov      eax, edx
  0x0047286D: shr      eax, cl
  0x0047286F: mov      dword ptr [0x3008d74], ecx
  0x00472875: mov      ebp, eax
  0x00472877: add      eax, -0x1f
  0x0047287A: shl      ebp, cl
  0x0047287C: mov      ecx, ebx
  0x0047287E: mov      dword ptr [esp + 0x10], eax
  0x00472882: fild     dword ptr [esp + 0x10]
  0x00472886: shl      ecx, 6
  0x00472889: sub      edx, ebp
  0x0047288B: add      ecx, esi
  0x0047288D: mov      dword ptr [0x3008b64], edx
  0x00472893: fmul     dword ptr [ecx*4 + 0x3007064]
  0x0047289A: lea      edx, [ecx*4 + 0x3007064]
  0x004728A1: fstp     dword ptr [edi + esi*4]
  0x004728A4: mov      ecx, dword ptr [0x3008d74]
  0x004728AA: mov      eax, dword ptr [0x3008b64]
  0x004728AF: sub      ecx, 6
  0x004728B2: shr      eax, cl
  0x004728B4: mov      dword ptr [0x3008d74], ecx
  0x004728BA: mov      ebp, eax
  0x004728BC: add      eax, -0x1f
  0x004728BF: mov      dword ptr [esp + 0x10], eax
  0x004728C3: fild     dword ptr [esp + 0x10]
  0x004728C7: shl      ebp, cl
  0x004728C9: mov      ecx, dword ptr [0x3008b64]
  0x004728CF: fmul     dword ptr [edx]
  0x004728D1: sub      ecx, ebp
  0x004728D3: mov      dword ptr [0x3008b64], ecx
  0x004728D9: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004728E0: mov      ecx, dword ptr [0x3008d74]
  0x004728E6: mov      eax, dword ptr [0x3008b64]
  0x004728EB: sub      ecx, 6
  0x004728EE: shr      eax, cl
  0x004728F0: mov      dword ptr [0x3008d74], ecx
  0x004728F6: mov      ebp, eax
  0x004728F8: mov      dword ptr [0x3008ef8], eax
  0x004728FD: shl      ebp, cl
  0x004728FF: mov      ecx, dword ptr [0x3008b64]
  0x00472905: sub      ecx, ebp
  0x00472907: add      eax, -0x1f
  0x0047290A: mov      dword ptr [esp + 0x10], eax
  0x0047290E: mov      dword ptr [0x3008b64], ecx
  0x00472914: fild     dword ptr [esp + 0x10]
  0x00472918: fmul     dword ptr [edx]
  0x0047291A: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472921: jmp      0x473ae7
  0x004736A8: sub      eax, 0x7f
  0x004736AB: mov      ebp, ebx
  0x004736AD: mov      dword ptr [esp + 0x14], eax
  0x004736B1: push     8
  0x004736B3: fild     dword ptr [esp + 0x18]
  0x004736B7: shl      ebp, 6
  0x004736BA: add      ebp, esi
  0x004736BC: shl      ebp, 2
  0x004736BF: fld      st(0)
  0x004736C1: fmul     dword ptr [ebp + 0x3007064]
  0x004736C7: fstp     dword ptr [edi + esi*4]
  0x004736CA: fmul     dword ptr [ebp + 0x3007068]
  0x004736D0: fstp     dword ptr [edi + esi*4 + 4]
  0x004736D4: call     0x471d10
  0x0047342C: mov      ecx, ebx
  0x0047342E: lea      eax, [eax + eax*2]
  0x00473431: shl      ecx, 6
  0x00473434: add      ecx, esi
  0x00473436: add      esp, 4
  0x00473439: shl      ecx, 2
  0x0047343C: shl      eax, 1
  0x0047343E: movsx    edx, word ptr [eax + 0x3007364]
  0x00473445: mov      dword ptr [esp + 0x18], edx
  0x00473449: fild     dword ptr [esp + 0x18]
  0x0047344D: fmul     dword ptr [ecx + 0x3007064]
  0x00473453: fstp     dword ptr [edi + esi*4]
  0x00473456: movsx    edx, word ptr [eax + 0x3007364]
  0x0047345D: mov      dword ptr [esp + 0x18], edx
  0x00473461: fild     dword ptr [esp + 0x18]
  0x00473465: fmul     dword ptr [ecx + 0x3007068]
  0x0047346B: fstp     dword ptr [edi + esi*4 + 4]
  0x0047346F: movsx    edx, word ptr [eax + 0x3007366]
  0x00473476: mov      dword ptr [esp + 0x18], edx
  0x0047347A: fild     dword ptr [esp + 0x18]
  0x0047347E: fmul     dword ptr [ecx + 0x3007064]
  0x00473484: fstp     dword ptr [edi + esi*4 + 0x100]
  0x0047348B: movsx    edx, word ptr [eax + 0x3007366]
  0x00473492: mov      dword ptr [esp + 0x18], edx
  0x00473496: fild     dword ptr [esp + 0x18]
  0x0047349A: fmul     dword ptr [ecx + 0x3007068]
  0x004734A0: fstp     dword ptr [edi + esi*4 + 0x104]
  0x004734A7: movsx    edx, word ptr [eax + 0x3007368]
  0x004734AE: mov      dword ptr [esp + 0x18], edx
  0x004734B2: fild     dword ptr [esp + 0x18]
  0x004734B6: fmul     dword ptr [ecx + 0x3007064]
  0x004734BC: fstp     dword ptr [edi + esi*4 + 0x200]
  0x004734C3: movsx    eax, word ptr [eax + 0x3007368]
  0x004734CA: mov      dword ptr [esp + 0x18], eax
  0x004734CE: fild     dword ptr [esp + 0x18]
  0x004734D2: fmul     dword ptr [ecx + 0x3007068]
  0x004734D8: jmp      0x473adf
  0x00472931: cmp      ecx, 0x18
  0x00472934: jg       0x472969
  0x00472969: mov      edx, dword ptr [0x3008b64]
  0x0047296F: sub      ecx, 7
  0x00472972: mov      eax, edx
  0x00472974: shr      eax, cl
  0x00472976: mov      dword ptr [0x3008d74], ecx
  0x0047297C: mov      ebp, eax
  0x0047297E: add      eax, -0x3f
  0x00472981: shl      ebp, cl
  0x00472983: mov      ecx, ebx
  0x00472985: mov      dword ptr [esp + 0x10], eax
  0x00472989: fild     dword ptr [esp + 0x10]
  0x0047298D: shl      ecx, 6
  0x00472990: sub      edx, ebp
  0x00472992: add      ecx, esi
  0x00472994: mov      dword ptr [0x3008b64], edx
  0x0047299A: fmul     dword ptr [ecx*4 + 0x3007064]
  0x004729A1: lea      edx, [ecx*4 + 0x3007064]
  0x004729A8: fstp     dword ptr [edi + esi*4]
  0x004729AB: mov      ecx, dword ptr [0x3008d74]
  0x004729B1: mov      eax, dword ptr [0x3008b64]
  0x004729B6: sub      ecx, 7
  0x004729B9: shr      eax, cl
  0x004729BB: mov      dword ptr [0x3008d74], ecx
  0x004729C1: mov      ebp, eax
  0x004729C3: add      eax, -0x3f
  0x004729C6: mov      dword ptr [esp + 0x10], eax
  0x004729CA: fild     dword ptr [esp + 0x10]
  0x004729CE: shl      ebp, cl
  0x004729D0: mov      ecx, dword ptr [0x3008b64]
  0x004729D6: fmul     dword ptr [edx]
  0x004729D8: sub      ecx, ebp
  0x004729DA: mov      dword ptr [0x3008b64], ecx
  0x004729E0: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004729E7: mov      ecx, dword ptr [0x3008d74]
  0x004729ED: mov      eax, dword ptr [0x3008b64]
  0x004729F2: sub      ecx, 7
  0x004729F5: shr      eax, cl
  0x004729F7: mov      dword ptr [0x3008d74], ecx
  0x004729FD: mov      ebp, eax
  0x004729FF: mov      dword ptr [0x3008ef8], eax
  0x00472A04: shl      ebp, cl
  0x00472A06: mov      ecx, dword ptr [0x3008b64]
  0x00472A0C: sub      ecx, ebp
  0x00472A0E: add      eax, -0x3f
  0x00472A11: mov      dword ptr [esp + 0x10], eax
  0x00472A15: mov      dword ptr [0x3008b64], ecx
  0x00472A1B: fild     dword ptr [esp + 0x10]
  0x00472A1F: fmul     dword ptr [edx]
  0x00472A21: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472A28: jmp      0x473ae7
  0x00472B32: cmp      ecx, 0x18
  0x00472B35: jg       0x472b6a
  0x00472B6A: mov      edx, dword ptr [0x3008b64]
  0x00472B70: sub      ecx, 9
  0x00472B73: mov      eax, edx
  0x00472B75: shr      eax, cl
  0x00472B77: mov      dword ptr [0x3008d74], ecx
  0x00472B7D: mov      ebp, eax
  0x00472B7F: add      eax, 0xffffff01
  0x00472B84: shl      ebp, cl
  0x00472B86: mov      ecx, ebx
  0x00472B88: mov      dword ptr [esp + 0x18], eax
  0x00472B8C: fild     dword ptr [esp + 0x18]
  0x00472B90: shl      ecx, 6
  0x00472B93: sub      edx, ebp
  0x00472B95: add      ecx, esi
  0x00472B97: mov      dword ptr [0x3008b64], edx
  0x00472B9D: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472BA4: lea      edx, [ecx*4 + 0x3007064]
  0x00472BAB: mov      dword ptr [esp + 0x10], edx
  0x00472BAF: fstp     dword ptr [edi + esi*4]
  0x00472BB2: mov      ecx, dword ptr [0x3008d74]
  0x00472BB8: mov      eax, dword ptr [0x3008b64]
  0x00472BBD: sub      ecx, 9
  0x00472BC0: shr      eax, cl
  0x00472BC2: mov      dword ptr [0x3008d74], ecx
  0x00472BC8: mov      dword ptr [0x3008ef8], eax
  0x00472BCD: mov      ebp, eax
  0x00472BCF: add      eax, 0xffffff01
  0x00472BD4: mov      dword ptr [esp + 0x18], eax
  0x00472BD8: fild     dword ptr [esp + 0x18]
  0x00472BDC: shl      ebp, cl
  0x00472BDE: mov      ecx, dword ptr [0x3008b64]
  0x00472BE4: fmul     dword ptr [edx]
  0x00472BE6: sub      ecx, ebp
  0x00472BE8: mov      dword ptr [0x3008b64], ecx
  0x00472BEE: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472BF5: mov      ecx, dword ptr [0x3008d74]
  0x00472BFB: cmp      ecx, 9
  0x00472BFE: jge      0x472c75
  0x00472F37: mov      ebp, dword ptr [0x3006cf0]
  0x00472F3D: xor      eax, eax
  0x00472F3F: add      ecx, 8
  0x00472F42: mov      al, byte ptr [ebp]
  0x00472F45: mov      dword ptr [0x3008d74], ecx
  0x00472F4B: shl      edx, 8
  0x00472F4E: or       edx, eax
  0x00472F50: inc      ebp
  0x00472F51: cmp      ecx, 0x18
  0x00472F54: mov      dword ptr [0x3008b64], edx
  0x00472F5A: mov      dword ptr [0x3006cf0], ebp
  0x00472F60: jle      0x472f3d
  0x00472F62: sub      ecx, 0xc
  0x00472F65: mov      eax, edx
  0x00472F67: shr      eax, cl
  0x00472F69: mov      dword ptr [0x3008d74], ecx
  0x00472F6F: mov      ebp, eax
  0x00472F71: add      eax, 0xfffff801
  0x00472F76: shl      ebp, cl
  0x00472F78: mov      ecx, ebx
  0x00472F7A: mov      dword ptr [esp + 0x18], eax
  0x00472F7E: fild     dword ptr [esp + 0x18]
  0x00472F82: shl      ecx, 6
  0x00472F85: sub      edx, ebp
  0x00472F87: add      ecx, esi
  0x00472F89: mov      dword ptr [0x3008b64], edx
  0x00472F8F: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472F96: lea      edx, [ecx*4 + 0x3007064]
  0x00472F9D: mov      dword ptr [esp + 0x10], edx
  0x00472FA1: fstp     dword ptr [edi + esi*4]
  0x00472FA4: mov      ecx, dword ptr [0x3008d74]
  0x00472FAA: mov      eax, dword ptr [0x3008b64]
  0x00472FAF: sub      ecx, 0xc
  0x00472FB2: shr      eax, cl
  0x00472FB4: mov      dword ptr [0x3008d74], ecx
  0x00472FBA: mov      dword ptr [0x3008ef8], eax
  0x00472FBF: mov      ebp, eax
  0x00472FC1: add      eax, 0xfffff801
  0x00472FC6: mov      dword ptr [esp + 0x18], eax
  0x00472FCA: fild     dword ptr [esp + 0x18]
  0x00472FCE: shl      ebp, cl
  0x00472FD0: mov      ecx, dword ptr [0x3008b64]
  0x00472FD6: fmul     dword ptr [edx]
  0x00472FD8: sub      ecx, ebp
  0x00472FDA: mov      dword ptr [0x3008b64], ecx
  0x00472FE0: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472FE7: mov      ecx, dword ptr [0x3008d74]
  0x00472FED: cmp      ecx, 0xc
  0x00472FF0: jge      0x473067
  0x00473AE7: mov      eax, dword ptr [esi*4 + 0x3008f90]
  0x00473AEE: inc      esi
  0x00473AEF: cmp      eax, 0x25
  0x00473AF2: jbe      0x4722a6
  0x00472A3E: mov      ebp, dword ptr [0x3006cf0]
  0x00472A44: xor      eax, eax
  0x00472A46: add      ecx, 8
  0x00472A49: mov      al, byte ptr [ebp]
  0x00472A4C: mov      dword ptr [0x3008d74], ecx
  0x00472A52: shl      edx, 8
  0x00472A55: or       edx, eax
  0x00472A57: inc      ebp
  0x00472A58: cmp      ecx, 0x18
  0x00472A5B: mov      dword ptr [0x3008b64], edx
  0x00472A61: mov      dword ptr [0x3006cf0], ebp
  0x00472A67: jle      0x472a44
  0x00472A69: sub      ecx, 8
  0x00472A6C: mov      eax, edx
  0x00472A6E: shr      eax, cl
  0x00472A70: mov      dword ptr [0x3008d74], ecx
  0x00472A76: mov      ebp, eax
  0x00472A78: add      eax, -0x7f
  0x00472A7B: shl      ebp, cl
  0x00472A7D: mov      ecx, ebx
  0x00472A7F: mov      dword ptr [esp + 0x10], eax
  0x00472A83: fild     dword ptr [esp + 0x10]
  0x00472A87: shl      ecx, 6
  0x00472A8A: sub      edx, ebp
  0x00472A8C: add      ecx, esi
  0x00472A8E: mov      dword ptr [0x3008b64], edx
  0x00472A94: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472A9B: lea      edx, [ecx*4 + 0x3007064]
  0x00472AA2: fstp     dword ptr [edi + esi*4]
  0x00472AA5: mov      ecx, dword ptr [0x3008d74]
  0x00472AAB: mov      eax, dword ptr [0x3008b64]
  0x00472AB0: sub      ecx, 8
  0x00472AB3: shr      eax, cl
  0x00472AB5: mov      dword ptr [0x3008d74], ecx
  0x00472ABB: mov      ebp, eax
  0x00472ABD: add      eax, -0x7f
  0x00472AC0: mov      dword ptr [esp + 0x10], eax
  0x00472AC4: fild     dword ptr [esp + 0x10]
  0x00472AC8: shl      ebp, cl
  0x00472ACA: mov      ecx, dword ptr [0x3008b64]
  0x00472AD0: fmul     dword ptr [edx]
  0x00472AD2: sub      ecx, ebp
  0x00472AD4: mov      dword ptr [0x3008b64], ecx
  0x00472ADA: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472AE1: mov      ecx, dword ptr [0x3008d74]
  0x00472AE7: mov      eax, dword ptr [0x3008b64]
  0x00472AEC: sub      ecx, 8
  0x00472AEF: shr      eax, cl
  0x00472AF1: mov      dword ptr [0x3008d74], ecx
  0x00472AF7: mov      ebp, eax
  0x00472AF9: mov      dword ptr [0x3008ef8], eax
  0x00472AFE: shl      ebp, cl
  0x00472B00: mov      ecx, dword ptr [0x3008b64]
  0x00472B06: sub      ecx, ebp
  0x00472B08: add      eax, -0x7f
  0x00472B0B: mov      dword ptr [esp + 0x10], eax
  0x00472B0F: mov      dword ptr [0x3008b64], ecx
  0x00472B15: fild     dword ptr [esp + 0x10]
  0x00472B19: fmul     dword ptr [edx]
  0x00472B1B: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472B22: jmp      0x473ae7
  0x00473637: sub      eax, 0x3f
  0x0047363A: mov      ebp, ebx
  0x0047363C: mov      dword ptr [esp + 0x14], eax
  0x00473640: push     7
  0x00473642: fild     dword ptr [esp + 0x18]
  0x00473646: shl      ebp, 6
  0x00473649: add      ebp, esi
  0x0047364B: shl      ebp, 2
  0x0047364E: fld      st(0)
  0x00473650: fmul     dword ptr [ebp + 0x3007064]
  0x00473656: fstp     dword ptr [edi + esi*4]
  0x00473659: fmul     dword ptr [ebp + 0x3007068]
  0x0047365F: fstp     dword ptr [edi + esi*4 + 4]
  0x00473663: call     0x471d10
  0x004731C7: sub      eax, 0x7fff
  0x004731CC: push     0x10
  0x004731CE: mov      dword ptr [esp + 0x20], eax
  0x004731D2: fild     dword ptr [esp + 0x20]
  0x004731D6: fmul     dword ptr [ebp]
  0x004731D9: fstp     dword ptr [edi + esi*4]
  0x004731DC: call     0x471d10
  0x004733BB: sub      eax, 3
  0x004733BE: mov      ebp, ebx
  0x004733C0: mov      dword ptr [esp + 0x14], eax
  0x004733C4: push     3
  0x004733C6: fild     dword ptr [esp + 0x18]
  0x004733CA: shl      ebp, 6
  0x004733CD: add      ebp, esi
  0x004733CF: shl      ebp, 2
  0x004733D2: fld      st(0)
  0x004733D4: fmul     dword ptr [ebp + 0x3007064]
  0x004733DA: fstp     dword ptr [edi + esi*4]
  0x004733DD: fmul     dword ptr [ebp + 0x3007068]
  0x004733E3: fstp     dword ptr [edi + esi*4 + 4]
  0x004733E7: call     0x471d10
  0x004735C6: sub      eax, 0x1f
  0x004735C9: mov      ebp, ebx
  0x004735CB: mov      dword ptr [esp + 0x14], eax
  0x004735CF: push     6
  0x004735D1: fild     dword ptr [esp + 0x18]
  0x004735D5: shl      ebp, 6
  0x004735D8: add      ebp, esi
  0x004735DA: shl      ebp, 2
  0x004735DD: fld      st(0)
  0x004735DF: fmul     dword ptr [ebp + 0x3007064]
  0x004735E5: fstp     dword ptr [edi + esi*4]
  0x004735E8: fmul     dword ptr [ebp + 0x3007068]
  0x004735EE: fstp     dword ptr [edi + esi*4 + 4]
  0x004735F2: call     0x471d10
  0x004722D0: cmp      ecx, 0x18
  0x004722D3: jg       0x472308
  0x00472308: mov      edx, dword ptr [0x3008b64]
  0x0047230E: sub      ecx, 5
  0x00472311: mov      eax, edx
  0x00472313: shr      eax, cl
  0x00472315: mov      dword ptr [0x3008d74], ecx
  0x0047231B: mov      ebp, eax
  0x0047231D: mov      dword ptr [0x3008ef8], eax
  0x00472322: shl      ebp, cl
  0x00472324: lea      eax, [eax + eax*2]
  0x00472327: mov      ecx, ebx
  0x00472329: shl      ecx, 6
  0x0047232C: sub      edx, ebp
  0x0047232E: add      ecx, esi
  0x00472330: mov      dword ptr [0x3008b64], edx
  0x00472336: movsx    edx, byte ptr [eax + 0x3006ff8]
  0x0047233D: mov      dword ptr [esp + 0x10], edx
  0x00472341: lea      ecx, [ecx*4 + 0x3007064]
  0x00472348: fild     dword ptr [esp + 0x10]
  0x0047234C: fmul     dword ptr [ecx]
  0x0047234E: fstp     dword ptr [edi + esi*4]
  0x00472351: movsx    edx, byte ptr [eax + 0x3006ff9]
  0x00472358: mov      dword ptr [esp + 0x10], edx
  0x0047235C: fild     dword ptr [esp + 0x10]
  0x00472360: fmul     dword ptr [ecx]
  0x00472362: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472369: movsx    eax, byte ptr [eax + 0x3006ffa]
  0x00472370: mov      dword ptr [esp + 0x10], eax
  0x00472374: fild     dword ptr [esp + 0x10]
  0x00472378: fmul     dword ptr [ecx]
  0x0047237A: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472381: jmp      0x473ae7
  0x0047315B: sub      eax, 0x3fff
  0x00473160: push     0xf
  0x00473162: mov      dword ptr [esp + 0x20], eax
  0x00473166: fild     dword ptr [esp + 0x20]
  0x0047316A: fmul     dword ptr [ebp]
  0x0047316D: fstp     dword ptr [edi + esi*4]
  0x00473170: call     0x471d10
  0x00472452: cmp      ecx, 0x18
  0x00472455: jg       0x47248a
  0x0047248A: mov      edx, dword ptr [0x3008b64]
  0x00472490: sub      ecx, 3
  0x00472493: mov      eax, edx
  0x00472495: shr      eax, cl
  0x00472497: mov      dword ptr [0x3008d74], ecx
  0x0047249D: mov      ebp, eax
  0x0047249F: add      eax, -3
  0x004724A2: shl      ebp, cl
  0x004724A4: mov      ecx, ebx
  0x004724A6: mov      dword ptr [esp + 0x10], eax
  0x004724AA: fild     dword ptr [esp + 0x10]
  0x004724AE: shl      ecx, 6
  0x004724B1: sub      edx, ebp
  0x004724B3: add      ecx, esi
  0x004724B5: mov      dword ptr [0x3008b64], edx
  0x004724BB: fmul     dword ptr [ecx*4 + 0x3007064]
  0x004724C2: lea      edx, [ecx*4 + 0x3007064]
  0x004724C9: fstp     dword ptr [edi + esi*4]
  0x004724CC: mov      ecx, dword ptr [0x3008d74]
  0x004724D2: mov      eax, dword ptr [0x3008b64]
  0x004724D7: sub      ecx, 3
  0x004724DA: shr      eax, cl
  0x004724DC: mov      dword ptr [0x3008d74], ecx
  0x004724E2: mov      ebp, eax
  0x004724E4: add      eax, -3
  0x004724E7: mov      dword ptr [esp + 0x10], eax
  0x004724EB: fild     dword ptr [esp + 0x10]
  0x004724EF: shl      ebp, cl
  0x004724F1: mov      ecx, dword ptr [0x3008b64]
  0x004724F7: fmul     dword ptr [edx]
  0x004724F9: sub      ecx, ebp
  0x004724FB: mov      dword ptr [0x3008b64], ecx
  0x00472501: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472508: mov      ecx, dword ptr [0x3008d74]
  0x0047250E: mov      eax, dword ptr [0x3008b64]
  0x00472513: sub      ecx, 3
  0x00472516: shr      eax, cl
  0x00472518: mov      dword ptr [0x3008d74], ecx
  0x0047251E: mov      ebp, eax
  0x00472520: mov      dword ptr [0x3008ef8], eax
  0x00472525: shl      ebp, cl
  0x00472527: mov      ecx, dword ptr [0x3008b64]
  0x0047252D: sub      ecx, ebp
  0x0047252F: add      eax, -3
  0x00472532: mov      dword ptr [esp + 0x10], eax
  0x00472536: mov      dword ptr [0x3008b64], ecx
  0x0047253C: fild     dword ptr [esp + 0x10]
  0x00472540: fmul     dword ptr [edx]
  0x00472542: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472549: jmp      0x473ae7
  0x0047324F: movsx    edx, byte ptr [eax + eax*2 + 0x3006ff8]
  0x00473257: mov      ecx, ebx
  0x00473259: mov      dword ptr [esp + 0x1c], edx
  0x0047325D: fild     dword ptr [esp + 0x1c]
  0x00473261: shl      ecx, 6
  0x00473264: add      ecx, esi
  0x00473266: add      esp, 4
  0x00473269: shl      ecx, 2
  0x0047326C: fmul     dword ptr [ecx + 0x3007064]
  0x00473272: fstp     dword ptr [edi + esi*4]
  0x00473275: movsx    edx, byte ptr [eax + eax*2 + 0x3006ff8]
  0x0047327D: mov      dword ptr [esp + 0x18], edx
  0x00473281: fild     dword ptr [esp + 0x18]
  0x00473285: fmul     dword ptr [ecx + 0x3007068]
  0x0047328B: fstp     dword ptr [edi + esi*4 + 4]
  0x0047328F: movsx    edx, byte ptr [eax + eax*2 + 0x3006ff9]
  0x00473297: mov      dword ptr [esp + 0x18], edx
  0x0047329B: fild     dword ptr [esp + 0x18]
  0x0047329F: fmul     dword ptr [ecx + 0x3007064]
  0x004732A5: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004732AC: movsx    edx, byte ptr [eax + eax*2 + 0x3006ff9]
  0x004732B4: mov      dword ptr [esp + 0x18], edx
  0x004732B8: lea      eax, [eax + eax*2 + 0x3006ffa]
  0x004732BF: fild     dword ptr [esp + 0x18]
  0x004732C3: fmul     dword ptr [ecx + 0x3007068]
  0x004732C9: fstp     dword ptr [edi + esi*4 + 0x104]
  0x004732D0: movsx    edx, byte ptr [eax]
  0x004732D3: mov      dword ptr [esp + 0x18], edx
  0x004732D7: fild     dword ptr [esp + 0x18]
  0x004732DB: fmul     dword ptr [ecx + 0x3007064]
  0x004732E1: fstp     dword ptr [edi + esi*4 + 0x200]
  0x004732E8: movsx    eax, byte ptr [eax]
  0x004732EB: mov      dword ptr [esp + 0x18], eax
  0x004732EF: fild     dword ptr [esp + 0x18]
  0x004732F3: fmul     dword ptr [ecx + 0x3007068]
  0x004732F9: jmp      0x473adf
  0x00472559: cmp      ecx, 0x18
  0x0047255C: jg       0x472591
  0x00472591: mov      edx, dword ptr [0x3008b64]
  0x00472597: sub      ecx, 0xa
  0x0047259A: mov      eax, edx
  0x0047259C: shr      eax, cl
  0x0047259E: mov      dword ptr [0x3008d74], ecx
  0x004725A4: mov      ebp, eax
  0x004725A6: mov      dword ptr [0x3008ef8], eax
  0x004725AB: shl      ebp, cl
  0x004725AD: mov      ecx, ebx
  0x004725AF: lea      eax, [eax + eax*2]
  0x004725B2: shl      ecx, 6
  0x004725B5: add      ecx, esi
  0x004725B7: sub      edx, ebp
  0x004725B9: shl      eax, 1
  0x004725BB: mov      dword ptr [0x3008b64], edx
  0x004725C1: lea      ecx, [ecx*4 + 0x3007064]
  0x004725C8: movsx    edx, word ptr [eax + 0x3007364]
  0x004725CF: mov      dword ptr [esp + 0x10], edx
  0x004725D3: fild     dword ptr [esp + 0x10]
  0x004725D7: fmul     dword ptr [ecx]
  0x004725D9: fstp     dword ptr [edi + esi*4]
  0x004725DC: movsx    edx, word ptr [eax + 0x3007366]
  0x004725E3: mov      dword ptr [esp + 0x10], edx
  0x004725E7: fild     dword ptr [esp + 0x10]
  0x004725EB: fmul     dword ptr [ecx]
  0x004725ED: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004725F4: movsx    eax, word ptr [eax + 0x3007368]
  0x004725FB: mov      dword ptr [esp + 0x10], eax
  0x004725FF: fild     dword ptr [esp + 0x10]
  0x00472603: fmul     dword ptr [ecx]
  0x00472605: fstp     dword ptr [edi + esi*4 + 0x200]
  0x0047260C: jmp      0x473ae7
  0x00473555: sub      eax, 0xf
  0x00473558: mov      ebp, ebx
  0x0047355A: mov      dword ptr [esp + 0x14], eax
  0x0047355E: push     5
  0x00473560: fild     dword ptr [esp + 0x18]
  0x00473564: shl      ebp, 6
  0x00473567: add      ebp, esi
  0x00473569: shl      ebp, 2
  0x0047356C: fld      st(0)
  0x0047356E: fmul     dword ptr [ebp + 0x3007064]
  0x00473574: fstp     dword ptr [edi + esi*4]
  0x00473577: fmul     dword ptr [ebp + 0x3007068]
  0x0047357D: fstp     dword ptr [edi + esi*4 + 4]
  0x00473581: call     0x471d10
  0x00473A57: sub      eax, 0x7fff
  0x00473A5C: mov      ebp, ebx
  0x00473A5E: mov      dword ptr [esp + 0x14], eax
  0x00473A62: push     0x10
  0x00473A64: fild     dword ptr [esp + 0x18]
  0x00473A68: shl      ebp, 6
  0x00473A6B: add      ebp, esi
  0x00473A6D: shl      ebp, 2
  0x00473A70: fld      st(0)
  0x00473A72: fmul     dword ptr [ebp + 0x3007064]
  0x00473A78: fstp     dword ptr [edi + esi*4]
  0x00473A7B: fmul     dword ptr [ebp + 0x3007068]
  0x00473A81: fstp     dword ptr [edi + esi*4 + 4]
  0x00473A85: call     0x471d10
  0x00472DDC: cmp      ecx, 0x18
  0x00472DDF: jg       0x472e14
  0x00472E14: mov      edx, dword ptr [0x3008b64]
  0x00472E1A: sub      ecx, 0xb
  0x00472E1D: mov      eax, edx
  0x00472E1F: shr      eax, cl
  0x00472E21: mov      dword ptr [0x3008d74], ecx
  0x00472E27: mov      ebp, eax
  0x00472E29: add      eax, 0xfffffc01
  0x00472E2E: shl      ebp, cl
  0x00472E30: mov      ecx, ebx
  0x00472E32: mov      dword ptr [esp + 0x18], eax
  0x00472E36: fild     dword ptr [esp + 0x18]
  0x00472E3A: shl      ecx, 6
  0x00472E3D: sub      edx, ebp
  0x00472E3F: add      ecx, esi
  0x00472E41: mov      dword ptr [0x3008b64], edx
  0x00472E47: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472E4E: lea      edx, [ecx*4 + 0x3007064]
  0x00472E55: mov      dword ptr [esp + 0x10], edx
  0x00472E59: fstp     dword ptr [edi + esi*4]
  0x00472E5C: mov      ecx, dword ptr [0x3008d74]
  0x00472E62: mov      eax, dword ptr [0x3008b64]
  0x00472E67: sub      ecx, 0xb
  0x00472E6A: shr      eax, cl
  0x00472E6C: mov      dword ptr [0x3008d74], ecx
  0x00472E72: mov      dword ptr [0x3008ef8], eax
  0x00472E77: mov      ebp, eax
  0x00472E79: add      eax, 0xfffffc01
  0x00472E7E: mov      dword ptr [esp + 0x18], eax
  0x00472E82: fild     dword ptr [esp + 0x18]
  0x00472E86: shl      ebp, cl
  0x00472E88: mov      ecx, dword ptr [0x3008b64]
  0x00472E8E: fmul     dword ptr [edx]
  0x00472E90: sub      ecx, ebp
  0x00472E92: mov      dword ptr [0x3008b64], ecx
  0x00472E98: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472E9F: mov      ecx, dword ptr [0x3008d74]
  0x00472EA5: cmp      ecx, 0xb
  0x00472EA8: jge      0x472f1f
  0x004730EF: sub      eax, 0x1fff
  0x004730F4: push     0xe
  0x004730F6: mov      dword ptr [esp + 0x20], eax
  0x004730FA: fild     dword ptr [esp + 0x20]
  0x004730FE: fmul     dword ptr [ebp]
  0x00473101: fstp     dword ptr [edi + esi*4]
  0x00473104: call     0x471d10
  0x004739E3: sub      eax, 0x3fff
  0x004739E8: mov      ebp, ebx
  0x004739EA: mov      dword ptr [esp + 0x14], eax
  0x004739EE: push     0xf
  0x004739F0: fild     dword ptr [esp + 0x18]
  0x004739F4: shl      ebp, 6
  0x004739F7: add      ebp, esi
  0x004739F9: shl      ebp, 2
  0x004739FC: fld      st(0)
  0x004739FE: fmul     dword ptr [ebp + 0x3007064]
  0x00473A04: fstp     dword ptr [edi + esi*4]
  0x00473A07: fmul     dword ptr [ebp + 0x3007068]
  0x00473A0D: fstp     dword ptr [edi + esi*4 + 4]
  0x00473A11: call     0x471d10
  0x004734E4: sub      eax, 7
  0x004734E7: mov      ebp, ebx
  0x004734E9: mov      dword ptr [esp + 0x14], eax
  0x004734ED: push     4
  0x004734EF: fild     dword ptr [esp + 0x18]
  0x004734F3: shl      ebp, 6
  0x004734F6: add      ebp, esi
  0x004734F8: shl      ebp, 2
  0x004734FB: fld      st(0)
  0x004734FD: fmul     dword ptr [ebp + 0x3007064]
  0x00473503: fstp     dword ptr [edi + esi*4]
  0x00473506: fmul     dword ptr [ebp + 0x3007068]
  0x0047350C: fstp     dword ptr [edi + esi*4 + 4]
  0x00473510: call     0x471d10
  0x0047396C: sub      eax, 0x1fff
  0x00473971: mov      ebp, ebx
  0x00473973: mov      dword ptr [esp + 0x14], eax
  0x00473977: push     0xe
  0x00473979: fild     dword ptr [esp + 0x18]
  0x0047397D: shl      ebp, 6
  0x00473980: add      ebp, esi
  0x00473982: shl      ebp, 2
  0x00473985: fld      st(0)
  0x00473987: fmul     dword ptr [ebp + 0x3007064]
  0x0047398D: fstp     dword ptr [edi + esi*4]
  0x00473990: fmul     dword ptr [ebp + 0x3007068]
  0x00473996: fstp     dword ptr [edi + esi*4 + 4]
  0x0047399A: call     0x471d10
  0x00473083: sub      eax, 0xfff
  0x00473088: push     0xd
  0x0047308A: mov      dword ptr [esp + 0x20], eax
  0x0047308E: fild     dword ptr [esp + 0x20]
  0x00473092: fmul     dword ptr [ebp]
  0x00473095: fstp     dword ptr [edi + esi*4]
  0x00473098: call     0x471d10
  0x004738F5: sub      eax, 0xfff
  0x004738FA: mov      ebp, ebx
  0x004738FC: mov      dword ptr [esp + 0x14], eax
  0x00473900: push     0xd
  0x00473902: fild     dword ptr [esp + 0x18]
  0x00473906: shl      ebp, 6
  0x00473909: add      ebp, esi
  0x0047390B: shl      ebp, 2
  0x0047390E: fld      st(0)
  0x00473910: fmul     dword ptr [ebp + 0x3007064]
  0x00473916: fstp     dword ptr [edi + esi*4]
  0x00473919: fmul     dword ptr [ebp + 0x3007068]
  0x0047391F: fstp     dword ptr [edi + esi*4 + 4]
  0x00473923: call     0x471d10
  0x0047387E: sub      eax, 0x7ff
  0x00473883: mov      ebp, ebx
  0x00473885: mov      dword ptr [esp + 0x14], eax
  0x00473889: push     0xc
  0x0047388B: fild     dword ptr [esp + 0x18]
  0x0047388F: shl      ebp, 6
  0x00473892: add      ebp, esi
  0x00473894: shl      ebp, 2
  0x00473897: fld      st(0)
  0x00473899: fmul     dword ptr [ebp + 0x3007064]
  0x0047389F: fstp     dword ptr [edi + esi*4]
  0x004738A2: fmul     dword ptr [ebp + 0x3007068]
  0x004738A8: fstp     dword ptr [edi + esi*4 + 4]
  0x004738AC: call     0x471d10
  0x00473B06: add      esp, 4
  0x00473B09: add      edi, 0x300
  0x00473B0F: mov      eax, dword ptr [esp + 0x14]
  0x00473B13: inc      eax
  0x00473B14: cmp      eax, 4
  0x00473B17: mov      dword ptr [esp + 0x14], eax
  0x00473B1B: jl       0x472296
  0x00472C87: cmp      ecx, 0x18
  0x00472C8A: jg       0x472cbf
  0x00472CBF: mov      edx, dword ptr [0x3008b64]
  0x00472CC5: sub      ecx, 0xa
  0x00472CC8: mov      eax, edx
  0x00472CCA: shr      eax, cl
  0x00472CCC: mov      dword ptr [0x3008d74], ecx
  0x00472CD2: mov      ebp, eax
  0x00472CD4: add      eax, 0xfffffe01
  0x00472CD9: shl      ebp, cl
  0x00472CDB: mov      ecx, ebx
  0x00472CDD: mov      dword ptr [esp + 0x18], eax
  0x00472CE1: fild     dword ptr [esp + 0x18]
  0x00472CE5: shl      ecx, 6
  0x00472CE8: sub      edx, ebp
  0x00472CEA: add      ecx, esi
  0x00472CEC: mov      dword ptr [0x3008b64], edx
  0x00472CF2: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472CF9: lea      edx, [ecx*4 + 0x3007064]
  0x00472D00: mov      dword ptr [esp + 0x10], edx
  0x00472D04: fstp     dword ptr [edi + esi*4]
  0x00472D07: mov      ecx, dword ptr [0x3008d74]
  0x00472D0D: mov      eax, dword ptr [0x3008b64]
  0x00472D12: sub      ecx, 0xa
  0x00472D15: shr      eax, cl
  0x00472D17: mov      dword ptr [0x3008d74], ecx
  0x00472D1D: mov      dword ptr [0x3008ef8], eax
  0x00472D22: mov      ebp, eax
  0x00472D24: add      eax, 0xfffffe01
  0x00472D29: mov      dword ptr [esp + 0x18], eax
  0x00472D2D: fild     dword ptr [esp + 0x18]
  0x00472D31: shl      ebp, cl
  0x00472D33: mov      ecx, dword ptr [0x3008b64]
  0x00472D39: fmul     dword ptr [edx]
  0x00472D3B: sub      ecx, ebp
  0x00472D3D: mov      dword ptr [0x3008b64], ecx
  0x00472D43: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472D4A: mov      ecx, dword ptr [0x3008d74]
  0x00472D50: cmp      ecx, 0xa
  0x00472D53: jge      0x472dca
  0x00473305: movsx    edx, byte ptr [eax + eax*2 + 0x3008d78]
  0x0047330D: mov      ecx, ebx
  0x0047330F: mov      dword ptr [esp + 0x1c], edx
  0x00473313: fild     dword ptr [esp + 0x1c]
  0x00473317: shl      ecx, 6
  0x0047331A: add      ecx, esi
  0x0047331C: add      esp, 4
  0x0047331F: shl      ecx, 2
  0x00473322: fmul     dword ptr [ecx + 0x3007064]
  0x00473328: fstp     dword ptr [edi + esi*4]
  0x0047332B: movsx    edx, byte ptr [eax + eax*2 + 0x3008d78]
  0x00473333: mov      dword ptr [esp + 0x18], edx
  0x00473337: fild     dword ptr [esp + 0x18]
  0x0047333B: fmul     dword ptr [ecx + 0x3007068]
  0x00473341: fstp     dword ptr [edi + esi*4 + 4]
  0x00473345: movsx    edx, byte ptr [eax + eax*2 + 0x3008d79]
  0x0047334D: mov      dword ptr [esp + 0x18], edx
  0x00473351: fild     dword ptr [esp + 0x18]
  0x00473355: fmul     dword ptr [ecx + 0x3007064]
  0x0047335B: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473362: movsx    edx, byte ptr [eax + eax*2 + 0x3008d79]
  0x0047336A: mov      dword ptr [esp + 0x18], edx
  0x0047336E: lea      eax, [eax + eax*2 + 0x3008d7a]
  0x00473375: fild     dword ptr [esp + 0x18]
  0x00473379: fmul     dword ptr [ecx + 0x3007068]
  0x0047337F: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473386: movsx    edx, byte ptr [eax]
  0x00473389: mov      dword ptr [esp + 0x18], edx
  0x0047338D: fild     dword ptr [esp + 0x18]
  0x00473391: fmul     dword ptr [ecx + 0x3007064]
  0x00473397: fstp     dword ptr [edi + esi*4 + 0x200]
  0x0047339E: movsx    eax, byte ptr [eax]
  0x004733A1: mov      dword ptr [esp + 0x18], eax
  0x004733A5: fild     dword ptr [esp + 0x18]
  0x004733A9: fmul     dword ptr [ecx + 0x3007068]
  0x004733AF: jmp      0x473adf
  0x0047228E: mov      dword ptr [esp + 0x14], 0
  0x00472296: mov      eax, dword ptr [0x3008f8c]
  0x0047229B: xor      esi, esi
  0x0047229D: cmp      eax, 0x25
  0x004722A0: ja       0x473b0f
  0x00473B2B: pop      edi
  0x00473B2C: pop      esi
  0x00473B2D: pop      ebp
  0x00473B2E: pop      ebx
  0x00473B2F: add      esp, 0xc
  0x00473B32: ret      
  0x0047383A: sub      eax, 0x3ff
  0x0047383F: push     0xb
  0x00473841: mov      dword ptr [esp + 0x1c], eax
  0x00473845: fild     dword ptr [esp + 0x1c]
  0x00473849: fld      st(0)
  0x0047384B: fmul     dword ptr [ebp + 0x3007064]
  0x00473851: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473858: fmul     dword ptr [ebp + 0x3007068]
  0x0047385E: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473865: call     0x471d10
  0x00472396: mov      edx, dword ptr [0x3008b64]
  0x0047239C: mov      ebp, dword ptr [0x3006cf0]
  0x004723A2: xor      eax, eax
  0x004723A4: add      ecx, 8
  0x004723A7: mov      al, byte ptr [ebp]
  0x004723AA: mov      dword ptr [0x3008d74], ecx
  0x004723B0: shl      edx, 8
  0x004723B3: or       edx, eax
  0x004723B5: inc      ebp
  0x004723B6: cmp      ecx, 0x18
  0x004723B9: mov      dword ptr [0x3008b64], edx
  0x004723BF: mov      dword ptr [0x3006cf0], ebp
  0x004723C5: jle      0x4723a2
  0x004737C3: sub      eax, 0x1ff
  0x004737C8: push     0xa
  0x004737CA: mov      dword ptr [esp + 0x1c], eax
  0x004737CE: fild     dword ptr [esp + 0x1c]
  0x004737D2: fld      st(0)
  0x004737D4: fmul     dword ptr [ebp + 0x3007064]
  0x004737DA: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004737E1: fmul     dword ptr [ebp + 0x3007068]
  0x004737E7: fstp     dword ptr [edi + esi*4 + 0x104]
  0x004737EE: call     0x471d10
  0x00472621: mov      edx, dword ptr [0x3008b64]
  0x00472627: mov      ebp, dword ptr [0x3006cf0]
  0x0047262D: xor      eax, eax
  0x0047262F: add      ecx, 8
  0x00472632: mov      al, byte ptr [ebp]
  0x00472635: mov      dword ptr [0x3008d74], ecx
  0x0047263B: shl      edx, 8
  0x0047263E: or       edx, eax
  0x00472640: inc      ebp
  0x00472641: cmp      ecx, 0x18
  0x00472644: mov      dword ptr [0x3008b64], edx
  0x0047264A: mov      dword ptr [0x3006cf0], ebp
  0x00472650: jle      0x47262d
  0x0047374C: sub      eax, 0xff
  0x00473751: push     9
  0x00473753: mov      dword ptr [esp + 0x1c], eax
  0x00473757: fild     dword ptr [esp + 0x1c]
  0x0047375B: fld      st(0)
  0x0047375D: fmul     dword ptr [ebp + 0x3007064]
  0x00473763: fstp     dword ptr [edi + esi*4 + 0x100]
  0x0047376A: fmul     dword ptr [ebp + 0x3007068]
  0x00473770: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473777: call     0x471d10
  0x00472728: mov      edx, dword ptr [0x3008b64]
  0x0047272E: mov      ebp, dword ptr [0x3006cf0]
  0x00472734: xor      eax, eax
  0x00472736: add      ecx, 8
  0x00472739: mov      al, byte ptr [ebp]
  0x0047273C: mov      dword ptr [0x3008d74], ecx
  0x00472742: shl      edx, 8
  0x00472745: or       edx, eax
  0x00472747: inc      ebp
  0x00472748: cmp      ecx, 0x18
  0x0047274B: mov      dword ptr [0x3008b64], edx
  0x00472751: mov      dword ptr [0x3006cf0], ebp
  0x00472757: jle      0x472734
  0x00473AF8: jmp      0x473b0f
  0x0047282F: mov      edx, dword ptr [0x3008b64]
  0x00472835: mov      ebp, dword ptr [0x3006cf0]
  0x0047283B: xor      eax, eax
  0x0047283D: add      ecx, 8
  0x00472840: mov      al, byte ptr [ebp]
  0x00472843: mov      dword ptr [0x3008d74], ecx
  0x00472849: shl      edx, 8
  0x0047284C: or       edx, eax
  0x0047284E: inc      ebp
  0x0047284F: cmp      ecx, 0x18
  0x00472852: mov      dword ptr [0x3008b64], edx
  0x00472858: mov      dword ptr [0x3006cf0], ebp
  0x0047285E: jle      0x47283b
  0x004736D9: sub      eax, 0x7f
  0x004736DC: push     8
  0x004736DE: mov      dword ptr [esp + 0x1c], eax
  0x004736E2: fild     dword ptr [esp + 0x1c]
  0x004736E6: fld      st(0)
  0x004736E8: fmul     dword ptr [ebp + 0x3007064]
  0x004736EE: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004736F5: fmul     dword ptr [ebp + 0x3007068]
  0x004736FB: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473702: call     0x471d10
  0x00473ADF: fstp     dword ptr [edi + esi*4 + 0x204]
  0x00473AE6: inc      esi
  0x00473AE7: mov      eax, dword ptr [esi*4 + 0x3008f90]
  0x00473AEE: inc      esi
  0x00473AEF: cmp      eax, 0x25
  0x00473AF2: jbe      0x4722a6
  0x00472936: mov      edx, dword ptr [0x3008b64]
  0x0047293C: mov      ebp, dword ptr [0x3006cf0]
  0x00472942: xor      eax, eax
  0x00472944: add      ecx, 8
  0x00472947: mov      al, byte ptr [ebp]
  0x0047294A: mov      dword ptr [0x3008d74], ecx
  0x00472950: shl      edx, 8
  0x00472953: or       edx, eax
  0x00472955: inc      ebp
  0x00472956: cmp      ecx, 0x18
  0x00472959: mov      dword ptr [0x3008b64], edx
  0x0047295F: mov      dword ptr [0x3006cf0], ebp
  0x00472965: jle      0x472942
  0x00472B37: mov      edx, dword ptr [0x3008b64]
  0x00472B3D: mov      ebp, dword ptr [0x3006cf0]
  0x00472B43: xor      eax, eax
  0x00472B45: add      ecx, 8
  0x00472B48: mov      al, byte ptr [ebp]
  0x00472B4B: mov      dword ptr [0x3008d74], ecx
  0x00472B51: shl      edx, 8
  0x00472B54: or       edx, eax
  0x00472B56: inc      ebp
  0x00472B57: cmp      ecx, 0x18
  0x00472B5A: mov      dword ptr [0x3008b64], edx
  0x00472B60: mov      dword ptr [0x3006cf0], ebp
  0x00472B66: jle      0x472b43
  0x00472C00: cmp      ecx, 0x18
  0x00472C03: jg       0x472c75
  0x00472C75: mov      eax, dword ptr [0x3008b64]
  0x00472C7A: jmp      0x472c38
  0x00472F3D: xor      eax, eax
  0x00472F3F: add      ecx, 8
  0x00472F42: mov      al, byte ptr [ebp]
  0x00472F45: mov      dword ptr [0x3008d74], ecx
  0x00472F4B: shl      edx, 8
  0x00472F4E: or       edx, eax
  0x00472F50: inc      ebp
  0x00472F51: cmp      ecx, 0x18
  0x00472F54: mov      dword ptr [0x3008b64], edx
  0x00472F5A: mov      dword ptr [0x3006cf0], ebp
  0x00472F60: jle      0x472f3d
  0x00472FF2: cmp      ecx, 0x18
  0x00472FF5: jg       0x473067
  0x00473067: mov      eax, dword ptr [0x3008b64]
  0x0047306C: jmp      0x47302a
  0x00472A44: xor      eax, eax
  0x00472A46: add      ecx, 8
  0x00472A49: mov      al, byte ptr [ebp]
  0x00472A4C: mov      dword ptr [0x3008d74], ecx
  0x00472A52: shl      edx, 8
  0x00472A55: or       edx, eax
  0x00472A57: inc      ebp
  0x00472A58: cmp      ecx, 0x18
  0x00472A5B: mov      dword ptr [0x3008b64], edx
  0x00472A61: mov      dword ptr [0x3006cf0], ebp
  0x00472A67: jle      0x472a44
  0x00473668: sub      eax, 0x3f
  0x0047366B: push     7
  0x0047366D: mov      dword ptr [esp + 0x1c], eax
  0x00473671: fild     dword ptr [esp + 0x1c]
  0x00473675: fld      st(0)
  0x00473677: fmul     dword ptr [ebp + 0x3007064]
  0x0047367D: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473684: fmul     dword ptr [ebp + 0x3007068]
  0x0047368A: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473691: call     0x471d10
  0x004731E1: sub      eax, 0x7fff
  0x004731E6: push     0x10
  0x004731E8: mov      dword ptr [esp + 0x24], eax
  0x004731EC: fild     dword ptr [esp + 0x24]
  0x004731F0: fmul     dword ptr [ebp]
  0x004731F3: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004731FA: call     0x471d10
  0x004733EC: sub      eax, 3
  0x004733EF: push     3
  0x004733F1: mov      dword ptr [esp + 0x1c], eax
  0x004733F5: fild     dword ptr [esp + 0x1c]
  0x004733F9: fld      st(0)
  0x004733FB: fmul     dword ptr [ebp + 0x3007064]
  0x00473401: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473408: fmul     dword ptr [ebp + 0x3007068]
  0x0047340E: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473415: call     0x471d10
  0x004735F7: sub      eax, 0x1f
  0x004735FA: push     6
  0x004735FC: mov      dword ptr [esp + 0x1c], eax
  0x00473600: fild     dword ptr [esp + 0x1c]
  0x00473604: fld      st(0)
  0x00473606: fmul     dword ptr [ebp + 0x3007064]
  0x0047360C: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473613: fmul     dword ptr [ebp + 0x3007068]
  0x00473619: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473620: call     0x471d10
  0x004722D5: mov      edx, dword ptr [0x3008b64]
  0x004722DB: mov      ebp, dword ptr [0x3006cf0]
  0x004722E1: xor      eax, eax
  0x004722E3: add      ecx, 8
  0x004722E6: mov      al, byte ptr [ebp]
  0x004722E9: mov      dword ptr [0x3008d74], ecx
  0x004722EF: shl      edx, 8
  0x004722F2: or       edx, eax
  0x004722F4: inc      ebp
  0x004722F5: cmp      ecx, 0x18
  0x004722F8: mov      dword ptr [0x3008b64], edx
  0x004722FE: mov      dword ptr [0x3006cf0], ebp
  0x00472304: jle      0x4722e1
  0x00473175: sub      eax, 0x3fff
  0x0047317A: push     0xf
  0x0047317C: mov      dword ptr [esp + 0x24], eax
  0x00473180: fild     dword ptr [esp + 0x24]
  0x00473184: fmul     dword ptr [ebp]
  0x00473187: fstp     dword ptr [edi + esi*4 + 0x100]
  0x0047318E: call     0x471d10
  0x00472457: mov      edx, dword ptr [0x3008b64]
  0x0047245D: mov      ebp, dword ptr [0x3006cf0]
  0x00472463: xor      eax, eax
  0x00472465: add      ecx, 8
  0x00472468: mov      al, byte ptr [ebp]
  0x0047246B: mov      dword ptr [0x3008d74], ecx
  0x00472471: shl      edx, 8
  0x00472474: or       edx, eax
  0x00472476: inc      ebp
  0x00472477: cmp      ecx, 0x18
  0x0047247A: mov      dword ptr [0x3008b64], edx
  0x00472480: mov      dword ptr [0x3006cf0], ebp
  0x00472486: jle      0x472463
  0x0047255E: mov      edx, dword ptr [0x3008b64]
  0x00472564: mov      ebp, dword ptr [0x3006cf0]
  0x0047256A: xor      eax, eax
  0x0047256C: add      ecx, 8
  0x0047256F: mov      al, byte ptr [ebp]
  0x00472572: mov      dword ptr [0x3008d74], ecx
  0x00472578: shl      edx, 8
  0x0047257B: or       edx, eax
  0x0047257D: inc      ebp
  0x0047257E: cmp      ecx, 0x18
  0x00472581: mov      dword ptr [0x3008b64], edx
  0x00472587: mov      dword ptr [0x3006cf0], ebp
  0x0047258D: jle      0x47256a
  0x00473586: sub      eax, 0xf
  0x00473589: push     5
  0x0047358B: mov      dword ptr [esp + 0x1c], eax
  0x0047358F: fild     dword ptr [esp + 0x1c]
  0x00473593: fld      st(0)
  0x00473595: fmul     dword ptr [ebp + 0x3007064]
  0x0047359B: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004735A2: fmul     dword ptr [ebp + 0x3007068]
  0x004735A8: fstp     dword ptr [edi + esi*4 + 0x104]
  0x004735AF: call     0x471d10
  0x00473A8A: sub      eax, 0x7fff
  0x00473A8F: push     0x10
  0x00473A91: mov      dword ptr [esp + 0x1c], eax
  0x00473A95: fild     dword ptr [esp + 0x1c]
  0x00473A99: fld      st(0)
  0x00473A9B: fmul     dword ptr [ebp + 0x3007064]
  0x00473AA1: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473AA8: fmul     dword ptr [ebp + 0x3007068]
  0x00473AAE: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473AB5: call     0x471d10
  0x00472DE1: mov      edx, dword ptr [0x3008b64]
  0x00472DE7: mov      ebp, dword ptr [0x3006cf0]
  0x00472DED: xor      eax, eax
  0x00472DEF: add      ecx, 8
  0x00472DF2: mov      al, byte ptr [ebp]
  0x00472DF5: mov      dword ptr [0x3008d74], ecx
  0x00472DFB: shl      edx, 8
  0x00472DFE: or       edx, eax
  0x00472E00: inc      ebp
  0x00472E01: cmp      ecx, 0x18
  0x00472E04: mov      dword ptr [0x3008b64], edx
  0x00472E0A: mov      dword ptr [0x3006cf0], ebp
  0x00472E10: jle      0x472ded
  0x00472EAA: cmp      ecx, 0x18
  0x00472EAD: jg       0x472f1f
  0x00472F1F: mov      eax, dword ptr [0x3008b64]
  0x00472F24: jmp      0x472ee2
  0x00473109: sub      eax, 0x1fff
  0x0047310E: push     0xe
  0x00473110: mov      dword ptr [esp + 0x24], eax
  0x00473114: fild     dword ptr [esp + 0x24]
  0x00473118: fmul     dword ptr [ebp]
  0x0047311B: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473122: call     0x471d10
  0x00473A16: sub      eax, 0x3fff
  0x00473A1B: push     0xf
  0x00473A1D: mov      dword ptr [esp + 0x1c], eax
  0x00473A21: fild     dword ptr [esp + 0x1c]
  0x00473A25: fld      st(0)
  0x00473A27: fmul     dword ptr [ebp + 0x3007064]
  0x00473A2D: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473A34: fmul     dword ptr [ebp + 0x3007068]
  0x00473A3A: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473A41: call     0x471d10
  0x00473515: sub      eax, 7
  0x00473518: push     4
  0x0047351A: mov      dword ptr [esp + 0x1c], eax
  0x0047351E: fild     dword ptr [esp + 0x1c]
  0x00473522: fld      st(0)
  0x00473524: fmul     dword ptr [ebp + 0x3007064]
  0x0047352A: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473531: fmul     dword ptr [ebp + 0x3007068]
  0x00473537: fstp     dword ptr [edi + esi*4 + 0x104]
  0x0047353E: call     0x471d10
  0x0047399F: sub      eax, 0x1fff
  0x004739A4: push     0xe
  0x004739A6: mov      dword ptr [esp + 0x1c], eax
  0x004739AA: fild     dword ptr [esp + 0x1c]
  0x004739AE: fld      st(0)
  0x004739B0: fmul     dword ptr [ebp + 0x3007064]
  0x004739B6: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004739BD: fmul     dword ptr [ebp + 0x3007068]
  0x004739C3: fstp     dword ptr [edi + esi*4 + 0x104]
  0x004739CA: call     0x471d10
  0x0047309D: sub      eax, 0xfff
  0x004730A2: push     0xd
  0x004730A4: mov      dword ptr [esp + 0x24], eax
  0x004730A8: fild     dword ptr [esp + 0x24]
  0x004730AC: fmul     dword ptr [ebp]
  0x004730AF: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004730B6: call     0x471d10
  0x00473928: sub      eax, 0xfff
  0x0047392D: push     0xd
  0x0047392F: mov      dword ptr [esp + 0x1c], eax
  0x00473933: fild     dword ptr [esp + 0x1c]
  0x00473937: fld      st(0)
  0x00473939: fmul     dword ptr [ebp + 0x3007064]
  0x0047393F: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00473946: fmul     dword ptr [ebp + 0x3007068]
  0x0047394C: fstp     dword ptr [edi + esi*4 + 0x104]
  0x00473953: call     0x471d10
  0x004738B1: sub      eax, 0x7ff
  0x004738B6: push     0xc
  0x004738B8: mov      dword ptr [esp + 0x1c], eax
  0x004738BC: fild     dword ptr [esp + 0x1c]
  0x004738C0: fld      st(0)
  0x004738C2: fmul     dword ptr [ebp + 0x3007064]
  0x004738C8: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004738CF: fmul     dword ptr [ebp + 0x3007068]
  0x004738D5: fstp     dword ptr [edi + esi*4 + 0x104]
  0x004738DC: call     0x471d10
  0x00472C8C: mov      edx, dword ptr [0x3008b64]
  0x00472C92: mov      ebp, dword ptr [0x3006cf0]
  0x00472C98: xor      eax, eax
  0x00472C9A: add      ecx, 8
  0x00472C9D: mov      al, byte ptr [ebp]
  0x00472CA0: mov      dword ptr [0x3008d74], ecx
  0x00472CA6: shl      edx, 8
  0x00472CA9: or       edx, eax
  0x00472CAB: inc      ebp
  0x00472CAC: cmp      ecx, 0x18
  0x00472CAF: mov      dword ptr [0x3008b64], edx
  0x00472CB5: mov      dword ptr [0x3006cf0], ebp
  0x00472CBB: jle      0x472c98
  0x00472D55: cmp      ecx, 0x18
  0x00472D58: jg       0x472dca
  0x00472DCA: mov      eax, dword ptr [0x3008b64]
  0x00472DCF: jmp      0x472d8d
  0x0047386A: add      esp, 0xc
  0x0047386D: sub      eax, 0x3ff
  0x00473872: jmp      0x473ac2
  0x004723A2: xor      eax, eax
  0x004723A4: add      ecx, 8
  0x004723A7: mov      al, byte ptr [ebp]
  0x004723AA: mov      dword ptr [0x3008d74], ecx
  0x004723B0: shl      edx, 8
  0x004723B3: or       edx, eax
  0x004723B5: inc      ebp
  0x004723B6: cmp      ecx, 0x18
  0x004723B9: mov      dword ptr [0x3008b64], edx
  0x004723BF: mov      dword ptr [0x3006cf0], ebp
  0x004723C5: jle      0x4723a2
  0x004723C7: jmp      0x4723cf
  0x004737F3: add      esp, 0xc
  0x004737F6: sub      eax, 0x1ff
  0x004737FB: jmp      0x473ac2
  0x0047262D: xor      eax, eax
  0x0047262F: add      ecx, 8
  0x00472632: mov      al, byte ptr [ebp]
  0x00472635: mov      dword ptr [0x3008d74], ecx
  0x0047263B: shl      edx, 8
  0x0047263E: or       edx, eax
  0x00472640: inc      ebp
  0x00472641: cmp      ecx, 0x18
  0x00472644: mov      dword ptr [0x3008b64], edx
  0x0047264A: mov      dword ptr [0x3006cf0], ebp
  0x00472650: jle      0x47262d
  0x00472652: jmp      0x47265a
  0x0047377C: add      esp, 0xc
  0x0047377F: sub      eax, 0xff
  0x00473784: jmp      0x473ac2
  0x00472734: xor      eax, eax
  0x00472736: add      ecx, 8
  0x00472739: mov      al, byte ptr [ebp]
  0x0047273C: mov      dword ptr [0x3008d74], ecx
  0x00472742: shl      edx, 8
  0x00472745: or       edx, eax
  0x00472747: inc      ebp
  0x00472748: cmp      ecx, 0x18
  0x0047274B: mov      dword ptr [0x3008b64], edx
  0x00472751: mov      dword ptr [0x3006cf0], ebp
  0x00472757: jle      0x472734
  0x00472759: jmp      0x472761
  0x0047283B: xor      eax, eax
  0x0047283D: add      ecx, 8
  0x00472840: mov      al, byte ptr [ebp]
  0x00472843: mov      dword ptr [0x3008d74], ecx
  0x00472849: shl      edx, 8
  0x0047284C: or       edx, eax
  0x0047284E: inc      ebp
  0x0047284F: cmp      ecx, 0x18
  0x00472852: mov      dword ptr [0x3008b64], edx
  0x00472858: mov      dword ptr [0x3006cf0], ebp
  0x0047285E: jle      0x47283b
  0x00472860: jmp      0x472868
  0x00473707: add      esp, 0xc
  0x0047370A: sub      eax, 0x7f
  0x0047370D: jmp      0x473ac2
  0x00472942: xor      eax, eax
  0x00472944: add      ecx, 8
  0x00472947: mov      al, byte ptr [ebp]
  0x0047294A: mov      dword ptr [0x3008d74], ecx
  0x00472950: shl      edx, 8
  0x00472953: or       edx, eax
  0x00472955: inc      ebp
  0x00472956: cmp      ecx, 0x18
  0x00472959: mov      dword ptr [0x3008b64], edx
  0x0047295F: mov      dword ptr [0x3006cf0], ebp
  0x00472965: jle      0x472942
  0x00472967: jmp      0x47296f
  0x00472B43: xor      eax, eax
  0x00472B45: add      ecx, 8
  0x00472B48: mov      al, byte ptr [ebp]
  0x00472B4B: mov      dword ptr [0x3008d74], ecx
  0x00472B51: shl      edx, 8
  0x00472B54: or       edx, eax
  0x00472B56: inc      ebp
  0x00472B57: cmp      ecx, 0x18
  0x00472B5A: mov      dword ptr [0x3008b64], edx
  0x00472B60: mov      dword ptr [0x3006cf0], ebp
  0x00472B66: jle      0x472b43
  0x00472B68: jmp      0x472b70
  0x00472C05: mov      eax, dword ptr [0x3008b64]
  0x00472C0A: mov      ebp, dword ptr [0x3006cf0]
  0x00472C10: xor      edx, edx
  0x00472C12: add      ecx, 8
  0x00472C15: mov      dl, byte ptr [ebp]
  0x00472C18: mov      dword ptr [0x3008d74], ecx
  0x00472C1E: shl      eax, 8
  0x00472C21: or       eax, edx
  0x00472C23: inc      ebp
  0x00472C24: cmp      ecx, 0x18
  0x00472C27: mov      dword ptr [0x3008b64], eax
  0x00472C2C: mov      dword ptr [0x3006cf0], ebp
  0x00472C32: jle      0x472c10
  0x00472C38: sub      ecx, 9
  0x00472C3B: shr      eax, cl
  0x00472C3D: mov      dword ptr [0x3008d74], ecx
  0x00472C43: mov      ebp, eax
  0x00472C45: mov      dword ptr [0x3008ef8], eax
  0x00472C4A: shl      ebp, cl
  0x00472C4C: mov      ecx, dword ptr [0x3008b64]
  0x00472C52: sub      ecx, ebp
  0x00472C54: add      eax, 0xffffff01
  0x00472C59: mov      dword ptr [esp + 0x18], eax
  0x00472C5D: mov      dword ptr [0x3008b64], ecx
  0x00472C63: fild     dword ptr [esp + 0x18]
  0x00472C67: fmul     dword ptr [edx]
  0x00472C69: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472C70: jmp      0x473ae7
  0x00472FF7: mov      eax, dword ptr [0x3008b64]
  0x00472FFC: mov      ebp, dword ptr [0x3006cf0]
  0x00473002: xor      edx, edx
  0x00473004: add      ecx, 8
  0x00473007: mov      dl, byte ptr [ebp]
  0x0047300A: mov      dword ptr [0x3008d74], ecx
  0x00473010: shl      eax, 8
  0x00473013: or       eax, edx
  0x00473015: inc      ebp
  0x00473016: cmp      ecx, 0x18
  0x00473019: mov      dword ptr [0x3008b64], eax
  0x0047301E: mov      dword ptr [0x3006cf0], ebp
  0x00473024: jle      0x473002
  0x0047302A: sub      ecx, 0xc
  0x0047302D: shr      eax, cl
  0x0047302F: mov      dword ptr [0x3008d74], ecx
  0x00473035: mov      ebp, eax
  0x00473037: mov      dword ptr [0x3008ef8], eax
  0x0047303C: shl      ebp, cl
  0x0047303E: mov      ecx, dword ptr [0x3008b64]
  0x00473044: sub      ecx, ebp
  0x00473046: add      eax, 0xfffff801
  0x0047304B: mov      dword ptr [esp + 0x18], eax
  0x0047304F: mov      dword ptr [0x3008b64], ecx
  0x00473055: fild     dword ptr [esp + 0x18]
  0x00473059: fmul     dword ptr [edx]
  0x0047305B: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00473062: jmp      0x473ae7
  0x00473696: add      esp, 0xc
  0x00473699: sub      eax, 0x3f
  0x0047369C: jmp      0x473ac2
  0x004731FF: add      esp, 0xc
  0x00473202: sub      eax, 0x7fff
  0x00473207: mov      dword ptr [esp + 0x18], eax
  0x0047320B: fild     dword ptr [esp + 0x18]
  0x0047320F: fmul     dword ptr [ebp]
  0x00473212: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00473219: jmp      0x473ae7
  0x0047341A: add      esp, 0xc
  0x0047341D: sub      eax, 3
  0x00473420: jmp      0x473ac2
  0x00473625: add      esp, 0xc
  0x00473628: sub      eax, 0x1f
  0x0047362B: jmp      0x473ac2
  0x004722E1: xor      eax, eax
  0x004722E3: add      ecx, 8
  0x004722E6: mov      al, byte ptr [ebp]
  0x004722E9: mov      dword ptr [0x3008d74], ecx
  0x004722EF: shl      edx, 8
  0x004722F2: or       edx, eax
  0x004722F4: inc      ebp
  0x004722F5: cmp      ecx, 0x18
  0x004722F8: mov      dword ptr [0x3008b64], edx
  0x004722FE: mov      dword ptr [0x3006cf0], ebp
  0x00472304: jle      0x4722e1
  0x00472306: jmp      0x47230e
  0x00473193: add      esp, 0xc
  0x00473196: sub      eax, 0x3fff
  0x0047319B: mov      dword ptr [esp + 0x18], eax
  0x0047319F: fild     dword ptr [esp + 0x18]
  0x004731A3: fmul     dword ptr [ebp]
  0x004731A6: fstp     dword ptr [edi + esi*4 + 0x200]
  0x004731AD: jmp      0x473ae7
  0x00472463: xor      eax, eax
  0x00472465: add      ecx, 8
  0x00472468: mov      al, byte ptr [ebp]
  0x0047246B: mov      dword ptr [0x3008d74], ecx
  0x00472471: shl      edx, 8
  0x00472474: or       edx, eax
  0x00472476: inc      ebp
  0x00472477: cmp      ecx, 0x18
  0x0047247A: mov      dword ptr [0x3008b64], edx
  0x00472480: mov      dword ptr [0x3006cf0], ebp
  0x00472486: jle      0x472463
  0x00472488: jmp      0x472490
  0x0047256A: xor      eax, eax
  0x0047256C: add      ecx, 8
  0x0047256F: mov      al, byte ptr [ebp]
  0x00472572: mov      dword ptr [0x3008d74], ecx
  0x00472578: shl      edx, 8
  0x0047257B: or       edx, eax
  0x0047257D: inc      ebp
  0x0047257E: cmp      ecx, 0x18
  0x00472581: mov      dword ptr [0x3008b64], edx
  0x00472587: mov      dword ptr [0x3006cf0], ebp
  0x0047258D: jle      0x47256a
  0x0047258F: jmp      0x472597
  0x004735B4: add      esp, 0xc
  0x004735B7: sub      eax, 0xf
  0x004735BA: jmp      0x473ac2
  0x00473ABA: add      esp, 0xc
  0x00473ABD: sub      eax, 0x7fff
  0x00473AC2: mov      dword ptr [esp + 0x10], eax
  0x00473AC6: fild     dword ptr [esp + 0x10]
  0x00473ACA: fld      st(0)
  0x00473ACC: fmul     dword ptr [ebp + 0x3007064]
  0x00473AD2: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00473AD9: fmul     dword ptr [ebp + 0x3007068]
  0x00473ADF: fstp     dword ptr [edi + esi*4 + 0x204]
  0x00473AE6: inc      esi
  0x00473AE7: mov      eax, dword ptr [esi*4 + 0x3008f90]
  0x00473AEE: inc      esi
  0x00473AEF: cmp      eax, 0x25
  0x00473AF2: jbe      0x4722a6
  0x00472DED: xor      eax, eax
  0x00472DEF: add      ecx, 8
  0x00472DF2: mov      al, byte ptr [ebp]
  0x00472DF5: mov      dword ptr [0x3008d74], ecx
  0x00472DFB: shl      edx, 8
  0x00472DFE: or       edx, eax
  0x00472E00: inc      ebp
  0x00472E01: cmp      ecx, 0x18
  0x00472E04: mov      dword ptr [0x3008b64], edx
  0x00472E0A: mov      dword ptr [0x3006cf0], ebp
  0x00472E10: jle      0x472ded
  0x00472E12: jmp      0x472e1a
  0x00472EAF: mov      eax, dword ptr [0x3008b64]
  0x00472EB4: mov      ebp, dword ptr [0x3006cf0]
  0x00472EBA: xor      edx, edx
  0x00472EBC: add      ecx, 8
  0x00472EBF: mov      dl, byte ptr [ebp]
  0x00472EC2: mov      dword ptr [0x3008d74], ecx
  0x00472EC8: shl      eax, 8
  0x00472ECB: or       eax, edx
  0x00472ECD: inc      ebp
  0x00472ECE: cmp      ecx, 0x18
  0x00472ED1: mov      dword ptr [0x3008b64], eax
  0x00472ED6: mov      dword ptr [0x3006cf0], ebp
  0x00472EDC: jle      0x472eba
  0x00472EE2: sub      ecx, 0xb
  0x00472EE5: shr      eax, cl
  0x00472EE7: mov      dword ptr [0x3008d74], ecx
  0x00472EED: mov      ebp, eax
  0x00472EEF: mov      dword ptr [0x3008ef8], eax
  0x00472EF4: shl      ebp, cl
  0x00472EF6: mov      ecx, dword ptr [0x3008b64]
  0x00472EFC: sub      ecx, ebp
  0x00472EFE: add      eax, 0xfffffc01
  0x00472F03: mov      dword ptr [esp + 0x18], eax
  0x00472F07: mov      dword ptr [0x3008b64], ecx
  0x00472F0D: fild     dword ptr [esp + 0x18]
  0x00472F11: fmul     dword ptr [edx]
  0x00472F13: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472F1A: jmp      0x473ae7
  0x00473127: add      esp, 0xc
  0x0047312A: sub      eax, 0x1fff
  0x0047312F: mov      dword ptr [esp + 0x18], eax
  0x00473133: fild     dword ptr [esp + 0x18]
  0x00473137: fmul     dword ptr [ebp]
  0x0047313A: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00473141: jmp      0x473ae7
  0x00473A46: add      esp, 0xc
  0x00473A49: sub      eax, 0x3fff
  0x00473A4E: jmp      0x473ac2
  0x00473543: add      esp, 0xc
  0x00473546: sub      eax, 7
  0x00473549: jmp      0x473ac2
  0x004739CF: add      esp, 0xc
  0x004739D2: sub      eax, 0x1fff
  0x004739D7: jmp      0x473ac2
  0x004730BB: add      esp, 0xc
  0x004730BE: sub      eax, 0xfff
  0x004730C3: mov      dword ptr [esp + 0x18], eax
  0x004730C7: fild     dword ptr [esp + 0x18]
  0x004730CB: fmul     dword ptr [ebp]
  0x004730CE: fstp     dword ptr [edi + esi*4 + 0x200]
  0x004730D5: jmp      0x473ae7
  0x00473958: add      esp, 0xc
  0x0047395B: sub      eax, 0xfff
  0x00473960: jmp      0x473ac2
  0x004738E1: add      esp, 0xc
  0x004738E4: sub      eax, 0x7ff
  0x004738E9: jmp      0x473ac2
  0x00472C98: xor      eax, eax
  0x00472C9A: add      ecx, 8
  0x00472C9D: mov      al, byte ptr [ebp]
  0x00472CA0: mov      dword ptr [0x3008d74], ecx
  0x00472CA6: shl      edx, 8
  0x00472CA9: or       edx, eax
  0x00472CAB: inc      ebp
  0x00472CAC: cmp      ecx, 0x18
  0x00472CAF: mov      dword ptr [0x3008b64], edx
  0x00472CB5: mov      dword ptr [0x3006cf0], ebp
  0x00472CBB: jle      0x472c98
  0x00472CBD: jmp      0x472cc5
  0x00472D5A: mov      eax, dword ptr [0x3008b64]
  0x00472D5F: mov      ebp, dword ptr [0x3006cf0]
  0x00472D65: xor      edx, edx
  0x00472D67: add      ecx, 8
  0x00472D6A: mov      dl, byte ptr [ebp]
  0x00472D6D: mov      dword ptr [0x3008d74], ecx
  0x00472D73: shl      eax, 8
  0x00472D76: or       eax, edx
  0x00472D78: inc      ebp
  0x00472D79: cmp      ecx, 0x18
  0x00472D7C: mov      dword ptr [0x3008b64], eax
  0x00472D81: mov      dword ptr [0x3006cf0], ebp
  0x00472D87: jle      0x472d65
  0x00472D8D: sub      ecx, 0xa
  0x00472D90: shr      eax, cl
  0x00472D92: mov      dword ptr [0x3008d74], ecx
  0x00472D98: mov      ebp, eax
  0x00472D9A: mov      dword ptr [0x3008ef8], eax
  0x00472D9F: shl      ebp, cl
  0x00472DA1: mov      ecx, dword ptr [0x3008b64]
  0x00472DA7: sub      ecx, ebp
  0x00472DA9: add      eax, 0xfffffe01
  0x00472DAE: mov      dword ptr [esp + 0x18], eax
  0x00472DB2: mov      dword ptr [0x3008b64], ecx
  0x00472DB8: fild     dword ptr [esp + 0x18]
  0x00472DBC: fmul     dword ptr [edx]
  0x00472DBE: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472DC5: jmp      0x473ae7
  0x00473AC2: mov      dword ptr [esp + 0x10], eax
  0x00473AC6: fild     dword ptr [esp + 0x10]
  0x00473ACA: fld      st(0)
  0x00473ACC: fmul     dword ptr [ebp + 0x3007064]
  0x00473AD2: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00473AD9: fmul     dword ptr [ebp + 0x3007068]
  0x00473ADF: fstp     dword ptr [edi + esi*4 + 0x204]
  0x00473AE6: inc      esi
  0x00473AE7: mov      eax, dword ptr [esi*4 + 0x3008f90]
  0x00473AEE: inc      esi
  0x00473AEF: cmp      eax, 0x25
  0x00473AF2: jbe      0x4722a6
  0x004723CF: sub      ecx, 7
  0x004723D2: mov      eax, edx
  0x004723D4: shr      eax, cl
  0x004723D6: mov      dword ptr [0x3008d74], ecx
  0x004723DC: mov      ebp, eax
  0x004723DE: mov      dword ptr [0x3008ef8], eax
  0x004723E3: shl      ebp, cl
  0x004723E5: lea      eax, [eax + eax*2]
  0x004723E8: mov      ecx, ebx
  0x004723EA: shl      ecx, 6
  0x004723ED: sub      edx, ebp
  0x004723EF: add      ecx, esi
  0x004723F1: mov      dword ptr [0x3008b64], edx
  0x004723F7: movsx    edx, byte ptr [eax + 0x3008d78]
  0x004723FE: mov      dword ptr [esp + 0x10], edx
  0x00472402: lea      ecx, [ecx*4 + 0x3007064]
  0x00472409: fild     dword ptr [esp + 0x10]
  0x0047240D: fmul     dword ptr [ecx]
  0x0047240F: fstp     dword ptr [edi + esi*4]
  0x00472412: movsx    edx, byte ptr [eax + 0x3008d79]
  0x00472419: mov      dword ptr [esp + 0x10], edx
  0x0047241D: fild     dword ptr [esp + 0x10]
  0x00472421: fmul     dword ptr [ecx]
  0x00472423: fstp     dword ptr [edi + esi*4 + 0x100]
  0x0047242A: movsx    eax, byte ptr [eax + 0x3008d7a]
  0x00472431: mov      dword ptr [esp + 0x10], eax
  0x00472435: fild     dword ptr [esp + 0x10]
  0x00472439: fmul     dword ptr [ecx]
  0x0047243B: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472442: jmp      0x473ae7
  0x0047265A: sub      ecx, 4
  0x0047265D: mov      eax, edx
  0x0047265F: shr      eax, cl
  0x00472661: mov      dword ptr [0x3008d74], ecx
  0x00472667: mov      ebp, eax
  0x00472669: add      eax, -7
  0x0047266C: shl      ebp, cl
  0x0047266E: mov      ecx, ebx
  0x00472670: mov      dword ptr [esp + 0x10], eax
  0x00472674: fild     dword ptr [esp + 0x10]
  0x00472678: shl      ecx, 6
  0x0047267B: sub      edx, ebp
  0x0047267D: add      ecx, esi
  0x0047267F: mov      dword ptr [0x3008b64], edx
  0x00472685: fmul     dword ptr [ecx*4 + 0x3007064]
  0x0047268C: lea      edx, [ecx*4 + 0x3007064]
  0x00472693: fstp     dword ptr [edi + esi*4]
  0x00472696: mov      ecx, dword ptr [0x3008d74]
  0x0047269C: mov      eax, dword ptr [0x3008b64]
  0x004726A1: sub      ecx, 4
  0x004726A4: shr      eax, cl
  0x004726A6: mov      dword ptr [0x3008d74], ecx
  0x004726AC: mov      ebp, eax
  0x004726AE: add      eax, -7
  0x004726B1: mov      dword ptr [esp + 0x10], eax
  0x004726B5: fild     dword ptr [esp + 0x10]
  0x004726B9: shl      ebp, cl
  0x004726BB: mov      ecx, dword ptr [0x3008b64]
  0x004726C1: fmul     dword ptr [edx]
  0x004726C3: sub      ecx, ebp
  0x004726C5: mov      dword ptr [0x3008b64], ecx
  0x004726CB: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004726D2: mov      ecx, dword ptr [0x3008d74]
  0x004726D8: mov      eax, dword ptr [0x3008b64]
  0x004726DD: sub      ecx, 4
  0x004726E0: shr      eax, cl
  0x004726E2: mov      dword ptr [0x3008d74], ecx
  0x004726E8: mov      ebp, eax
  0x004726EA: mov      dword ptr [0x3008ef8], eax
  0x004726EF: shl      ebp, cl
  0x004726F1: mov      ecx, dword ptr [0x3008b64]
  0x004726F7: sub      ecx, ebp
  0x004726F9: add      eax, -7
  0x004726FC: mov      dword ptr [esp + 0x10], eax
  0x00472700: mov      dword ptr [0x3008b64], ecx
  0x00472706: fild     dword ptr [esp + 0x10]
  0x0047270A: fmul     dword ptr [edx]
  0x0047270C: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472713: jmp      0x473ae7
  0x00472761: sub      ecx, 5
  0x00472764: mov      eax, edx
  0x00472766: shr      eax, cl
  0x00472768: mov      dword ptr [0x3008d74], ecx
  0x0047276E: mov      ebp, eax
  0x00472770: add      eax, -0xf
  0x00472773: shl      ebp, cl
  0x00472775: mov      ecx, ebx
  0x00472777: mov      dword ptr [esp + 0x10], eax
  0x0047277B: fild     dword ptr [esp + 0x10]
  0x0047277F: shl      ecx, 6
  0x00472782: sub      edx, ebp
  0x00472784: add      ecx, esi
  0x00472786: mov      dword ptr [0x3008b64], edx
  0x0047278C: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472793: lea      edx, [ecx*4 + 0x3007064]
  0x0047279A: fstp     dword ptr [edi + esi*4]
  0x0047279D: mov      ecx, dword ptr [0x3008d74]
  0x004727A3: mov      eax, dword ptr [0x3008b64]
  0x004727A8: sub      ecx, 5
  0x004727AB: shr      eax, cl
  0x004727AD: mov      dword ptr [0x3008d74], ecx
  0x004727B3: mov      ebp, eax
  0x004727B5: add      eax, -0xf
  0x004727B8: mov      dword ptr [esp + 0x10], eax
  0x004727BC: fild     dword ptr [esp + 0x10]
  0x004727C0: shl      ebp, cl
  0x004727C2: mov      ecx, dword ptr [0x3008b64]
  0x004727C8: fmul     dword ptr [edx]
  0x004727CA: sub      ecx, ebp
  0x004727CC: mov      dword ptr [0x3008b64], ecx
  0x004727D2: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004727D9: mov      ecx, dword ptr [0x3008d74]
  0x004727DF: mov      eax, dword ptr [0x3008b64]
  0x004727E4: sub      ecx, 5
  0x004727E7: shr      eax, cl
  0x004727E9: mov      dword ptr [0x3008d74], ecx
  0x004727EF: mov      ebp, eax
  0x004727F1: mov      dword ptr [0x3008ef8], eax
  0x004727F6: shl      ebp, cl
  0x004727F8: mov      ecx, dword ptr [0x3008b64]
  0x004727FE: sub      ecx, ebp
  0x00472800: add      eax, -0xf
  0x00472803: mov      dword ptr [esp + 0x10], eax
  0x00472807: mov      dword ptr [0x3008b64], ecx
  0x0047280D: fild     dword ptr [esp + 0x10]
  0x00472811: fmul     dword ptr [edx]
  0x00472813: fstp     dword ptr [edi + esi*4 + 0x200]
  0x0047281A: jmp      0x473ae7
  0x00472868: sub      ecx, 6
  0x0047286B: mov      eax, edx
  0x0047286D: shr      eax, cl
  0x0047286F: mov      dword ptr [0x3008d74], ecx
  0x00472875: mov      ebp, eax
  0x00472877: add      eax, -0x1f
  0x0047287A: shl      ebp, cl
  0x0047287C: mov      ecx, ebx
  0x0047287E: mov      dword ptr [esp + 0x10], eax
  0x00472882: fild     dword ptr [esp + 0x10]
  0x00472886: shl      ecx, 6
  0x00472889: sub      edx, ebp
  0x0047288B: add      ecx, esi
  0x0047288D: mov      dword ptr [0x3008b64], edx
  0x00472893: fmul     dword ptr [ecx*4 + 0x3007064]
  0x0047289A: lea      edx, [ecx*4 + 0x3007064]
  0x004728A1: fstp     dword ptr [edi + esi*4]
  0x004728A4: mov      ecx, dword ptr [0x3008d74]
  0x004728AA: mov      eax, dword ptr [0x3008b64]
  0x004728AF: sub      ecx, 6
  0x004728B2: shr      eax, cl
  0x004728B4: mov      dword ptr [0x3008d74], ecx
  0x004728BA: mov      ebp, eax
  0x004728BC: add      eax, -0x1f
  0x004728BF: mov      dword ptr [esp + 0x10], eax
  0x004728C3: fild     dword ptr [esp + 0x10]
  0x004728C7: shl      ebp, cl
  0x004728C9: mov      ecx, dword ptr [0x3008b64]
  0x004728CF: fmul     dword ptr [edx]
  0x004728D1: sub      ecx, ebp
  0x004728D3: mov      dword ptr [0x3008b64], ecx
  0x004728D9: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004728E0: mov      ecx, dword ptr [0x3008d74]
  0x004728E6: mov      eax, dword ptr [0x3008b64]
  0x004728EB: sub      ecx, 6
  0x004728EE: shr      eax, cl
  0x004728F0: mov      dword ptr [0x3008d74], ecx
  0x004728F6: mov      ebp, eax
  0x004728F8: mov      dword ptr [0x3008ef8], eax
  0x004728FD: shl      ebp, cl
  0x004728FF: mov      ecx, dword ptr [0x3008b64]
  0x00472905: sub      ecx, ebp
  0x00472907: add      eax, -0x1f
  0x0047290A: mov      dword ptr [esp + 0x10], eax
  0x0047290E: mov      dword ptr [0x3008b64], ecx
  0x00472914: fild     dword ptr [esp + 0x10]
  0x00472918: fmul     dword ptr [edx]
  0x0047291A: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472921: jmp      0x473ae7
  0x0047296F: sub      ecx, 7
  0x00472972: mov      eax, edx
  0x00472974: shr      eax, cl
  0x00472976: mov      dword ptr [0x3008d74], ecx
  0x0047297C: mov      ebp, eax
  0x0047297E: add      eax, -0x3f
  0x00472981: shl      ebp, cl
  0x00472983: mov      ecx, ebx
  0x00472985: mov      dword ptr [esp + 0x10], eax
  0x00472989: fild     dword ptr [esp + 0x10]
  0x0047298D: shl      ecx, 6
  0x00472990: sub      edx, ebp
  0x00472992: add      ecx, esi
  0x00472994: mov      dword ptr [0x3008b64], edx
  0x0047299A: fmul     dword ptr [ecx*4 + 0x3007064]
  0x004729A1: lea      edx, [ecx*4 + 0x3007064]
  0x004729A8: fstp     dword ptr [edi + esi*4]
  0x004729AB: mov      ecx, dword ptr [0x3008d74]
  0x004729B1: mov      eax, dword ptr [0x3008b64]
  0x004729B6: sub      ecx, 7
  0x004729B9: shr      eax, cl
  0x004729BB: mov      dword ptr [0x3008d74], ecx
  0x004729C1: mov      ebp, eax
  0x004729C3: add      eax, -0x3f
  0x004729C6: mov      dword ptr [esp + 0x10], eax
  0x004729CA: fild     dword ptr [esp + 0x10]
  0x004729CE: shl      ebp, cl
  0x004729D0: mov      ecx, dword ptr [0x3008b64]
  0x004729D6: fmul     dword ptr [edx]
  0x004729D8: sub      ecx, ebp
  0x004729DA: mov      dword ptr [0x3008b64], ecx
  0x004729E0: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004729E7: mov      ecx, dword ptr [0x3008d74]
  0x004729ED: mov      eax, dword ptr [0x3008b64]
  0x004729F2: sub      ecx, 7
  0x004729F5: shr      eax, cl
  0x004729F7: mov      dword ptr [0x3008d74], ecx
  0x004729FD: mov      ebp, eax
  0x004729FF: mov      dword ptr [0x3008ef8], eax
  0x00472A04: shl      ebp, cl
  0x00472A06: mov      ecx, dword ptr [0x3008b64]
  0x00472A0C: sub      ecx, ebp
  0x00472A0E: add      eax, -0x3f
  0x00472A11: mov      dword ptr [esp + 0x10], eax
  0x00472A15: mov      dword ptr [0x3008b64], ecx
  0x00472A1B: fild     dword ptr [esp + 0x10]
  0x00472A1F: fmul     dword ptr [edx]
  0x00472A21: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472A28: jmp      0x473ae7
  0x00472B70: sub      ecx, 9
  0x00472B73: mov      eax, edx
  0x00472B75: shr      eax, cl
  0x00472B77: mov      dword ptr [0x3008d74], ecx
  0x00472B7D: mov      ebp, eax
  0x00472B7F: add      eax, 0xffffff01
  0x00472B84: shl      ebp, cl
  0x00472B86: mov      ecx, ebx
  0x00472B88: mov      dword ptr [esp + 0x18], eax
  0x00472B8C: fild     dword ptr [esp + 0x18]
  0x00472B90: shl      ecx, 6
  0x00472B93: sub      edx, ebp
  0x00472B95: add      ecx, esi
  0x00472B97: mov      dword ptr [0x3008b64], edx
  0x00472B9D: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472BA4: lea      edx, [ecx*4 + 0x3007064]
  0x00472BAB: mov      dword ptr [esp + 0x10], edx
  0x00472BAF: fstp     dword ptr [edi + esi*4]
  0x00472BB2: mov      ecx, dword ptr [0x3008d74]
  0x00472BB8: mov      eax, dword ptr [0x3008b64]
  0x00472BBD: sub      ecx, 9
  0x00472BC0: shr      eax, cl
  0x00472BC2: mov      dword ptr [0x3008d74], ecx
  0x00472BC8: mov      dword ptr [0x3008ef8], eax
  0x00472BCD: mov      ebp, eax
  0x00472BCF: add      eax, 0xffffff01
  0x00472BD4: mov      dword ptr [esp + 0x18], eax
  0x00472BD8: fild     dword ptr [esp + 0x18]
  0x00472BDC: shl      ebp, cl
  0x00472BDE: mov      ecx, dword ptr [0x3008b64]
  0x00472BE4: fmul     dword ptr [edx]
  0x00472BE6: sub      ecx, ebp
  0x00472BE8: mov      dword ptr [0x3008b64], ecx
  0x00472BEE: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472BF5: mov      ecx, dword ptr [0x3008d74]
  0x00472BFB: cmp      ecx, 9
  0x00472BFE: jge      0x472c75
  0x00472C10: xor      edx, edx
  0x00472C12: add      ecx, 8
  0x00472C15: mov      dl, byte ptr [ebp]
  0x00472C18: mov      dword ptr [0x3008d74], ecx
  0x00472C1E: shl      eax, 8
  0x00472C21: or       eax, edx
  0x00472C23: inc      ebp
  0x00472C24: cmp      ecx, 0x18
  0x00472C27: mov      dword ptr [0x3008b64], eax
  0x00472C2C: mov      dword ptr [0x3006cf0], ebp
  0x00472C32: jle      0x472c10
  0x00472C34: mov      edx, dword ptr [esp + 0x10]
  0x00472C38: sub      ecx, 9
  0x00472C3B: shr      eax, cl
  0x00472C3D: mov      dword ptr [0x3008d74], ecx
  0x00472C43: mov      ebp, eax
  0x00472C45: mov      dword ptr [0x3008ef8], eax
  0x00472C4A: shl      ebp, cl
  0x00472C4C: mov      ecx, dword ptr [0x3008b64]
  0x00472C52: sub      ecx, ebp
  0x00472C54: add      eax, 0xffffff01
  0x00472C59: mov      dword ptr [esp + 0x18], eax
  0x00472C5D: mov      dword ptr [0x3008b64], ecx
  0x00472C63: fild     dword ptr [esp + 0x18]
  0x00472C67: fmul     dword ptr [edx]
  0x00472C69: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472C70: jmp      0x473ae7
  0x00473002: xor      edx, edx
  0x00473004: add      ecx, 8
  0x00473007: mov      dl, byte ptr [ebp]
  0x0047300A: mov      dword ptr [0x3008d74], ecx
  0x00473010: shl      eax, 8
  0x00473013: or       eax, edx
  0x00473015: inc      ebp
  0x00473016: cmp      ecx, 0x18
  0x00473019: mov      dword ptr [0x3008b64], eax
  0x0047301E: mov      dword ptr [0x3006cf0], ebp
  0x00473024: jle      0x473002
  0x00473026: mov      edx, dword ptr [esp + 0x10]
  0x0047302A: sub      ecx, 0xc
  0x0047302D: shr      eax, cl
  0x0047302F: mov      dword ptr [0x3008d74], ecx
  0x00473035: mov      ebp, eax
  0x00473037: mov      dword ptr [0x3008ef8], eax
  0x0047303C: shl      ebp, cl
  0x0047303E: mov      ecx, dword ptr [0x3008b64]
  0x00473044: sub      ecx, ebp
  0x00473046: add      eax, 0xfffff801
  0x0047304B: mov      dword ptr [esp + 0x18], eax
  0x0047304F: mov      dword ptr [0x3008b64], ecx
  0x00473055: fild     dword ptr [esp + 0x18]
  0x00473059: fmul     dword ptr [edx]
  0x0047305B: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00473062: jmp      0x473ae7
  0x0047230E: sub      ecx, 5
  0x00472311: mov      eax, edx
  0x00472313: shr      eax, cl
  0x00472315: mov      dword ptr [0x3008d74], ecx
  0x0047231B: mov      ebp, eax
  0x0047231D: mov      dword ptr [0x3008ef8], eax
  0x00472322: shl      ebp, cl
  0x00472324: lea      eax, [eax + eax*2]
  0x00472327: mov      ecx, ebx
  0x00472329: shl      ecx, 6
  0x0047232C: sub      edx, ebp
  0x0047232E: add      ecx, esi
  0x00472330: mov      dword ptr [0x3008b64], edx
  0x00472336: movsx    edx, byte ptr [eax + 0x3006ff8]
  0x0047233D: mov      dword ptr [esp + 0x10], edx
  0x00472341: lea      ecx, [ecx*4 + 0x3007064]
  0x00472348: fild     dword ptr [esp + 0x10]
  0x0047234C: fmul     dword ptr [ecx]
  0x0047234E: fstp     dword ptr [edi + esi*4]
  0x00472351: movsx    edx, byte ptr [eax + 0x3006ff9]
  0x00472358: mov      dword ptr [esp + 0x10], edx
  0x0047235C: fild     dword ptr [esp + 0x10]
  0x00472360: fmul     dword ptr [ecx]
  0x00472362: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472369: movsx    eax, byte ptr [eax + 0x3006ffa]
  0x00472370: mov      dword ptr [esp + 0x10], eax
  0x00472374: fild     dword ptr [esp + 0x10]
  0x00472378: fmul     dword ptr [ecx]
  0x0047237A: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472381: jmp      0x473ae7
  0x00472490: sub      ecx, 3
  0x00472493: mov      eax, edx
  0x00472495: shr      eax, cl
  0x00472497: mov      dword ptr [0x3008d74], ecx
  0x0047249D: mov      ebp, eax
  0x0047249F: add      eax, -3
  0x004724A2: shl      ebp, cl
  0x004724A4: mov      ecx, ebx
  0x004724A6: mov      dword ptr [esp + 0x10], eax
  0x004724AA: fild     dword ptr [esp + 0x10]
  0x004724AE: shl      ecx, 6
  0x004724B1: sub      edx, ebp
  0x004724B3: add      ecx, esi
  0x004724B5: mov      dword ptr [0x3008b64], edx
  0x004724BB: fmul     dword ptr [ecx*4 + 0x3007064]
  0x004724C2: lea      edx, [ecx*4 + 0x3007064]
  0x004724C9: fstp     dword ptr [edi + esi*4]
  0x004724CC: mov      ecx, dword ptr [0x3008d74]
  0x004724D2: mov      eax, dword ptr [0x3008b64]
  0x004724D7: sub      ecx, 3
  0x004724DA: shr      eax, cl
  0x004724DC: mov      dword ptr [0x3008d74], ecx
  0x004724E2: mov      ebp, eax
  0x004724E4: add      eax, -3
  0x004724E7: mov      dword ptr [esp + 0x10], eax
  0x004724EB: fild     dword ptr [esp + 0x10]
  0x004724EF: shl      ebp, cl
  0x004724F1: mov      ecx, dword ptr [0x3008b64]
  0x004724F7: fmul     dword ptr [edx]
  0x004724F9: sub      ecx, ebp
  0x004724FB: mov      dword ptr [0x3008b64], ecx
  0x00472501: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472508: mov      ecx, dword ptr [0x3008d74]
  0x0047250E: mov      eax, dword ptr [0x3008b64]
  0x00472513: sub      ecx, 3
  0x00472516: shr      eax, cl
  0x00472518: mov      dword ptr [0x3008d74], ecx
  0x0047251E: mov      ebp, eax
  0x00472520: mov      dword ptr [0x3008ef8], eax
  0x00472525: shl      ebp, cl
  0x00472527: mov      ecx, dword ptr [0x3008b64]
  0x0047252D: sub      ecx, ebp
  0x0047252F: add      eax, -3
  0x00472532: mov      dword ptr [esp + 0x10], eax
  0x00472536: mov      dword ptr [0x3008b64], ecx
  0x0047253C: fild     dword ptr [esp + 0x10]
  0x00472540: fmul     dword ptr [edx]
  0x00472542: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472549: jmp      0x473ae7
  0x00472597: sub      ecx, 0xa
  0x0047259A: mov      eax, edx
  0x0047259C: shr      eax, cl
  0x0047259E: mov      dword ptr [0x3008d74], ecx
  0x004725A4: mov      ebp, eax
  0x004725A6: mov      dword ptr [0x3008ef8], eax
  0x004725AB: shl      ebp, cl
  0x004725AD: mov      ecx, ebx
  0x004725AF: lea      eax, [eax + eax*2]
  0x004725B2: shl      ecx, 6
  0x004725B5: add      ecx, esi
  0x004725B7: sub      edx, ebp
  0x004725B9: shl      eax, 1
  0x004725BB: mov      dword ptr [0x3008b64], edx
  0x004725C1: lea      ecx, [ecx*4 + 0x3007064]
  0x004725C8: movsx    edx, word ptr [eax + 0x3007364]
  0x004725CF: mov      dword ptr [esp + 0x10], edx
  0x004725D3: fild     dword ptr [esp + 0x10]
  0x004725D7: fmul     dword ptr [ecx]
  0x004725D9: fstp     dword ptr [edi + esi*4]
  0x004725DC: movsx    edx, word ptr [eax + 0x3007366]
  0x004725E3: mov      dword ptr [esp + 0x10], edx
  0x004725E7: fild     dword ptr [esp + 0x10]
  0x004725EB: fmul     dword ptr [ecx]
  0x004725ED: fstp     dword ptr [edi + esi*4 + 0x100]
  0x004725F4: movsx    eax, word ptr [eax + 0x3007368]
  0x004725FB: mov      dword ptr [esp + 0x10], eax
  0x004725FF: fild     dword ptr [esp + 0x10]
  0x00472603: fmul     dword ptr [ecx]
  0x00472605: fstp     dword ptr [edi + esi*4 + 0x200]
  0x0047260C: jmp      0x473ae7
  0x00472E1A: sub      ecx, 0xb
  0x00472E1D: mov      eax, edx
  0x00472E1F: shr      eax, cl
  0x00472E21: mov      dword ptr [0x3008d74], ecx
  0x00472E27: mov      ebp, eax
  0x00472E29: add      eax, 0xfffffc01
  0x00472E2E: shl      ebp, cl
  0x00472E30: mov      ecx, ebx
  0x00472E32: mov      dword ptr [esp + 0x18], eax
  0x00472E36: fild     dword ptr [esp + 0x18]
  0x00472E3A: shl      ecx, 6
  0x00472E3D: sub      edx, ebp
  0x00472E3F: add      ecx, esi
  0x00472E41: mov      dword ptr [0x3008b64], edx
  0x00472E47: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472E4E: lea      edx, [ecx*4 + 0x3007064]
  0x00472E55: mov      dword ptr [esp + 0x10], edx
  0x00472E59: fstp     dword ptr [edi + esi*4]
  0x00472E5C: mov      ecx, dword ptr [0x3008d74]
  0x00472E62: mov      eax, dword ptr [0x3008b64]
  0x00472E67: sub      ecx, 0xb
  0x00472E6A: shr      eax, cl
  0x00472E6C: mov      dword ptr [0x3008d74], ecx
  0x00472E72: mov      dword ptr [0x3008ef8], eax
  0x00472E77: mov      ebp, eax
  0x00472E79: add      eax, 0xfffffc01
  0x00472E7E: mov      dword ptr [esp + 0x18], eax
  0x00472E82: fild     dword ptr [esp + 0x18]
  0x00472E86: shl      ebp, cl
  0x00472E88: mov      ecx, dword ptr [0x3008b64]
  0x00472E8E: fmul     dword ptr [edx]
  0x00472E90: sub      ecx, ebp
  0x00472E92: mov      dword ptr [0x3008b64], ecx
  0x00472E98: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472E9F: mov      ecx, dword ptr [0x3008d74]
  0x00472EA5: cmp      ecx, 0xb
  0x00472EA8: jge      0x472f1f
  0x00472EBA: xor      edx, edx
  0x00472EBC: add      ecx, 8
  0x00472EBF: mov      dl, byte ptr [ebp]
  0x00472EC2: mov      dword ptr [0x3008d74], ecx
  0x00472EC8: shl      eax, 8
  0x00472ECB: or       eax, edx
  0x00472ECD: inc      ebp
  0x00472ECE: cmp      ecx, 0x18
  0x00472ED1: mov      dword ptr [0x3008b64], eax
  0x00472ED6: mov      dword ptr [0x3006cf0], ebp
  0x00472EDC: jle      0x472eba
  0x00472EDE: mov      edx, dword ptr [esp + 0x10]
  0x00472EE2: sub      ecx, 0xb
  0x00472EE5: shr      eax, cl
  0x00472EE7: mov      dword ptr [0x3008d74], ecx
  0x00472EED: mov      ebp, eax
  0x00472EEF: mov      dword ptr [0x3008ef8], eax
  0x00472EF4: shl      ebp, cl
  0x00472EF6: mov      ecx, dword ptr [0x3008b64]
  0x00472EFC: sub      ecx, ebp
  0x00472EFE: add      eax, 0xfffffc01
  0x00472F03: mov      dword ptr [esp + 0x18], eax
  0x00472F07: mov      dword ptr [0x3008b64], ecx
  0x00472F0D: fild     dword ptr [esp + 0x18]
  0x00472F11: fmul     dword ptr [edx]
  0x00472F13: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472F1A: jmp      0x473ae7
  0x00472CC5: sub      ecx, 0xa
  0x00472CC8: mov      eax, edx
  0x00472CCA: shr      eax, cl
  0x00472CCC: mov      dword ptr [0x3008d74], ecx
  0x00472CD2: mov      ebp, eax
  0x00472CD4: add      eax, 0xfffffe01
  0x00472CD9: shl      ebp, cl
  0x00472CDB: mov      ecx, ebx
  0x00472CDD: mov      dword ptr [esp + 0x18], eax
  0x00472CE1: fild     dword ptr [esp + 0x18]
  0x00472CE5: shl      ecx, 6
  0x00472CE8: sub      edx, ebp
  0x00472CEA: add      ecx, esi
  0x00472CEC: mov      dword ptr [0x3008b64], edx
  0x00472CF2: fmul     dword ptr [ecx*4 + 0x3007064]
  0x00472CF9: lea      edx, [ecx*4 + 0x3007064]
  0x00472D00: mov      dword ptr [esp + 0x10], edx
  0x00472D04: fstp     dword ptr [edi + esi*4]
  0x00472D07: mov      ecx, dword ptr [0x3008d74]
  0x00472D0D: mov      eax, dword ptr [0x3008b64]
  0x00472D12: sub      ecx, 0xa
  0x00472D15: shr      eax, cl
  0x00472D17: mov      dword ptr [0x3008d74], ecx
  0x00472D1D: mov      dword ptr [0x3008ef8], eax
  0x00472D22: mov      ebp, eax
  0x00472D24: add      eax, 0xfffffe01
  0x00472D29: mov      dword ptr [esp + 0x18], eax
  0x00472D2D: fild     dword ptr [esp + 0x18]
  0x00472D31: shl      ebp, cl
  0x00472D33: mov      ecx, dword ptr [0x3008b64]
  0x00472D39: fmul     dword ptr [edx]
  0x00472D3B: sub      ecx, ebp
  0x00472D3D: mov      dword ptr [0x3008b64], ecx
  0x00472D43: fstp     dword ptr [edi + esi*4 + 0x100]
  0x00472D4A: mov      ecx, dword ptr [0x3008d74]
  0x00472D50: cmp      ecx, 0xa
  0x00472D53: jge      0x472dca
  0x00472D65: xor      edx, edx
  0x00472D67: add      ecx, 8
  0x00472D6A: mov      dl, byte ptr [ebp]
  0x00472D6D: mov      dword ptr [0x3008d74], ecx
  0x00472D73: shl      eax, 8
  0x00472D76: or       eax, edx
  0x00472D78: inc      ebp
  0x00472D79: cmp      ecx, 0x18
  0x00472D7C: mov      dword ptr [0x3008b64], eax
  0x00472D81: mov      dword ptr [0x3006cf0], ebp
  0x00472D87: jle      0x472d65
  0x00472D89: mov      edx, dword ptr [esp + 0x10]
  0x00472D8D: sub      ecx, 0xa
  0x00472D90: shr      eax, cl
  0x00472D92: mov      dword ptr [0x3008d74], ecx
  0x00472D98: mov      ebp, eax
  0x00472D9A: mov      dword ptr [0x3008ef8], eax
  0x00472D9F: shl      ebp, cl
  0x00472DA1: mov      ecx, dword ptr [0x3008b64]
  0x00472DA7: sub      ecx, ebp
  0x00472DA9: add      eax, 0xfffffe01
  0x00472DAE: mov      dword ptr [esp + 0x18], eax
  0x00472DB2: mov      dword ptr [0x3008b64], ecx
  0x00472DB8: fild     dword ptr [esp + 0x18]
  0x00472DBC: fmul     dword ptr [edx]
  0x00472DBE: fstp     dword ptr [edi + esi*4 + 0x200]
  0x00472DC5: jmp      0x473ae7

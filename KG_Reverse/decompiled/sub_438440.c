
/*
 * ============================================================
 * KG.exe 反编译分析 - sub_438440
 * ============================================================
 *
 * 函数地址: 0x00438440
 * 基本块数: 188
 * 指令数:   1311
 * 复杂度:   中复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_438440(void) {

  /* 代码块 1 @ 0x00438440 */
  // 分配 0x34 字节栈空间
  // 保存寄存器 ebx
  // 保存寄存器 ebp
  // 保存寄存器 esi
  // mov esi, ecx
  // ecx 清零
  // edx 清零
  // 读取全局变量值 [esi + 0xb4]
  // mov ebp, dword ptr [esi + 0x94]
  // 保存寄存器 edi
  // add ebp, 9
  // mov cx, word ptr [eax]
  // add eax, 2
  // mov dword ptr [esi + 0x60], ecx
  // mov dword ptr [esi + 0xb4], eax
  // mov dx, word ptr [eax]
  // add eax, 2
  // ecx 清零
  // mov dword ptr [esi + 0x5c], edx
  // mov dword ptr [esi + 0xb4], eax
  // mov cx, word ptr [eax]
  // mov edx, ecx
  // add eax, 2
  // dec edx
  // mov dword ptr [esi + 0x54], ecx
  // or edx, 3
  // mov dword ptr [esi + 0xb4], eax
  // add eax, 2
  // lea ecx, [edx + 1]
  // edx 清零
  // mov dword ptr [esi + 0x6c], ecx
  // mov dx, word ptr [eax - 2]
  // mov dword ptr [esi + 0x58], edx
  // mov dword ptr [esi + 0xb4], eax
  // mov dl, byte ptr [eax]
  // inc eax
  // mov dword ptr [esi + 0xb4], eax
  // 读取全局变量值 [esi + 0x58]
  // imul eax, ecx
  // mov dword ptr [esi + 0x98], eax
  // add eax, 0x6428
  // 保存寄存器 eax
  // mov byte ptr [esi + 0x3d], dl
  // mov dword ptr [esi + 0x94], ebp
  // 直接调用函数 0x00492F17
  call(0x00492F17);
  /* 代码块 2 @ 0x004384D2 */
  // mov edx, dword ptr [esi + 0x98]
  // mov edi, eax
  // add esp, 4
  // 写入栈变量 [esp+0x24] = edi
  // lea eax, [edi + 0x28]
  // lea ecx, [eax + 0x400]
  // mov dword ptr [esi + 0xac], ecx
  // add ecx, edx
  // 写入栈变量 [esp+0x30] = ecx
  // add ecx, 2
  // mov edx, 0x1000
  // xor ebx, ebx
  // mov word ptr [ecx + 2], bx
  // mov word ptr [ecx], bx
  // add ecx, 6
  // dec edx
  // 如果不相等则跳转到 0x438500
  /* 代码块 3 @ 0x0043850D */
  // mov dword ptr [edi], 0x28
  // mov ecx, dword ptr [esi + 0x54]
  // mov dword ptr [edi + 4], ecx
  // mov edx, dword ptr [esi + 0x58]
  // neg edx
  // 加载常量 0x100
  // mov dword ptr [edi + 8], edx
  // mov word ptr [edi + 0xc], 1
  // mov word ptr [edi + 0xe], 8
  // mov dword ptr [edi + 0x10], ebx
  // mov dword ptr [edi + 0x14], ebx
  // mov dword ptr [edi + 0x18], ebx
  // mov dword ptr [edi + 0x1c], ebx
  // mov dword ptr [edi + 0x20], ecx
  // mov dword ptr [edi + 0x24], ecx
  // mov cl, byte ptr [esi + 0x3d]
  // TEST cl, 0x80 (set flags)
  // 如果相等则跳转到 0x4385f0
  // mov word ptr [ecx + 2], bx
  // mov word ptr [ecx], bx
  // add ecx, 6
  // dec edx
  // 如果不相等则跳转到 0x438500
  /* 代码块 4 @ 0x004385F0 */
  // mov ecx, dword ptr [esi + 0x88]
  // mov edi, dword ptr [esi + 0xa8]
  // CMP ecx, ebx (set flags)
  // 如果相等则跳转到 0x438623
  /* 代码块 5 @ 0x00438550 */
  // and ecx, 7
  // mov edi, 1
  // inc ecx
  // shl edi, cl
  // CMP dword ptr [esi + 0x88], ebx (set flags)
  // 如果相等则跳转到 0x43858d
  /* 代码块 6 @ 0x00438623 */
  // mov edx, dword ptr [esi + 0x80]
  // ecx 清零
  // CMP edx, ebx (set flags)
  // if (less or equal) goto 0x438653
  /* 代码块 7 @ 0x00438600 */
  // mov ebp, dword ptr [esi + 0x8c]
  // ecx 清零
  // lea edx, [edi + ebp*2]
  // add ebp, edx
  // edx 清零
  // mov ch, byte ptr [ebp + 2]
  // mov dl, byte ptr [ebp]
  // mov cl, byte ptr [ebp + 1]
  // shl ecx, 8
  // or ecx, edx
  // mov dword ptr [esi + 0xa0], ecx
  // mov edx, dword ptr [esi + 0x80]
  // ecx 清零
  // CMP edx, ebx (set flags)
  // if (less or equal) goto 0x438653
  /* 代码块 8 @ 0x0043858D */
  // mov edx, dword ptr [esi + 0x94]
  // lea ecx, [edi + edi*2]
  // add edx, ecx
  // CMP edi, ebx (set flags)
  // mov dword ptr [esi + 0x94], edx
  // if (below or equal) goto 0x438653
  /* 代码块 9 @ 0x00438563 */
  // mov ecx, dword ptr [esi + 0x8c]
  // mov edx, dword ptr [esi + 0xb4]
  // lea ecx, [ecx + ecx*2]
  // lea ebp, [ecx + edx]
  // ecx 清零
  // edx 清零
  // mov ch, byte ptr [ebp + 2]
  // mov dl, byte ptr [ebp]
  // mov cl, byte ptr [ebp + 1]
  // shl ecx, 8
  // or ecx, edx
  // mov dword ptr [esi + 0xa0], ecx
  // mov edx, dword ptr [esi + 0x94]
  // lea ecx, [edi + edi*2]
  // add edx, ecx
  // CMP edi, ebx (set flags)
  // mov dword ptr [esi + 0x94], edx
  // if (below or equal) goto 0x438653
  /* 代码块 10 @ 0x00438653 */
  // 读取全局变量值 [esi + 0xb4]
  // ecx 清零
  // mov edx, 1
  // mov cl, byte ptr [eax]
  // inc eax
  // mov dword ptr [esi + 0xb4], eax
  // 读取全局变量值 [esi + 0x94]
  // inc eax
  // mov dword ptr [esi + 0x40], ecx
  // mov dword ptr [esi + 0x94], eax
  // mov eax, edx
  // shl eax, cl
  // mov dword ptr [esi + 0x44], ecx
  // mov dword ptr [esi + 0x48], ebx
  // mov byte ptr [esi + 0x3c], 0
  // mov dword ptr [esi + 0x50], ebx
  // mov dword ptr [esi + 0x4c], edx
  // mov dword ptr [esi + 0x7c], ebx
  // add eax, 2
  // mov dword ptr [esi + 0x78], ebx
  // 写入栈变量 [esp+0x18] = eax
  // 写入栈变量 [esp+0x14] = eax
  // dec eax
  // inc ecx
  // 写入栈变量 [esp+0x40] = eax
  // 读取全局变量值 [esi + 0x40]
  // inc eax
  // mov dword ptr [esi + 0x44], ecx
  // mov dword ptr [esi + 0x40], eax
  // mov dword ptr [esi + 0x64], edx
  // mov dword ptr [esi + 0x68], ebx
  // 读取全局变量值 [esi + 0x48]
  // mov ecx, dword ptr [esi + 0x40]
  // CMP eax, ecx (set flags)
  // if (below) goto 0x4386ef
  /* 代码块 11 @ 0x0043862F */
  // mov dl, byte ptr [edi]
  // inc edi
  // mov byte ptr [eax + 2], dl
  // add eax, 4
  // mov dl, byte ptr [edi]
  // inc edi
  // mov byte ptr [eax - 3], dl
  // mov dl, byte ptr [edi]
  // mov byte ptr [eax - 1], 0
  // mov byte ptr [eax - 4], dl
  // mov edx, dword ptr [esi + 0x80]
  // inc edi
  // inc ecx
  // CMP ecx, edx (set flags)
  // if (less) goto 0x43862f
  /* 代码块 12 @ 0x004385A6 */
  // mov edx, dword ptr [esi + 0xb4]
  // add eax, 4
  // mov cl, byte ptr [edx]
  // mov byte ptr [eax - 2], cl
  // mov edx, dword ptr [esi + 0xb4]
  // inc edx
  // mov ecx, edx
  // mov dword ptr [esi + 0xb4], edx
  // mov dl, byte ptr [ecx]
  // mov byte ptr [eax - 3], dl
  // mov ecx, dword ptr [esi + 0xb4]
  // inc ecx
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00438440: sub      esp, 0x34
  0x00438443: push     ebx
  0x00438444: push     ebp
  0x00438445: push     esi
  0x00438446: mov      esi, ecx
  0x00438448: xor      ecx, ecx
  0x0043844A: xor      edx, edx
  0x0043844C: mov      eax, dword ptr [esi + 0xb4]
  0x00438452: mov      ebp, dword ptr [esi + 0x94]
  0x00438458: push     edi
  0x00438459: add      ebp, 9
  0x0043845C: mov      cx, word ptr [eax]
  0x0043845F: add      eax, 2
  0x00438462: mov      dword ptr [esi + 0x60], ecx
  0x00438465: mov      dword ptr [esi + 0xb4], eax
  0x0043846B: mov      dx, word ptr [eax]
  0x0043846E: add      eax, 2
  0x00438471: xor      ecx, ecx
  0x00438473: mov      dword ptr [esi + 0x5c], edx
  0x00438476: mov      dword ptr [esi + 0xb4], eax
  0x0043847C: mov      cx, word ptr [eax]
  0x0043847F: mov      edx, ecx
  0x00438481: add      eax, 2
  0x00438484: dec      edx
  0x00438485: mov      dword ptr [esi + 0x54], ecx
  0x00438488: or       edx, 3
  0x0043848B: mov      dword ptr [esi + 0xb4], eax
  0x00438491: add      eax, 2
  0x00438494: lea      ecx, [edx + 1]
  0x00438497: xor      edx, edx
  0x00438499: mov      dword ptr [esi + 0x6c], ecx
  0x0043849C: mov      dx, word ptr [eax - 2]
  0x004384A0: mov      dword ptr [esi + 0x58], edx
  0x004384A3: mov      dword ptr [esi + 0xb4], eax
  0x004384A9: mov      dl, byte ptr [eax]
  0x004384AB: inc      eax
  0x004384AC: mov      dword ptr [esi + 0xb4], eax
  0x004384B2: mov      eax, dword ptr [esi + 0x58]
  0x004384B5: imul     eax, ecx
  0x004384B8: mov      dword ptr [esi + 0x98], eax
  0x004384BE: add      eax, 0x6428
  0x004384C3: push     eax
  0x004384C4: mov      byte ptr [esi + 0x3d], dl
  0x004384C7: mov      dword ptr [esi + 0x94], ebp
  0x004384CD: call     0x492f17
  0x004384D2: mov      edx, dword ptr [esi + 0x98]
  0x004384D8: mov      edi, eax
  0x004384DA: add      esp, 4
  0x004384DD: mov      dword ptr [esp + 0x24], edi
  0x004384E1: lea      eax, [edi + 0x28]
  0x004384E4: lea      ecx, [eax + 0x400]
  0x004384EA: mov      dword ptr [esi + 0xac], ecx
  0x004384F0: add      ecx, edx
  0x004384F2: mov      dword ptr [esp + 0x30], ecx
  0x004384F6: add      ecx, 2
  0x004384F9: mov      edx, 0x1000
  0x004384FE: xor      ebx, ebx
  0x00438500: mov      word ptr [ecx + 2], bx
  0x00438504: mov      word ptr [ecx], bx
  0x00438507: add      ecx, 6
  0x0043850A: dec      edx
  0x0043850B: jne      0x438500
  0x0043850D: mov      dword ptr [edi], 0x28
  0x00438513: mov      ecx, dword ptr [esi + 0x54]
  0x00438516: mov      dword ptr [edi + 4], ecx
  0x00438519: mov      edx, dword ptr [esi + 0x58]
  0x0043851C: neg      edx
  0x0043851E: mov      ecx, 0x100
  0x00438523: mov      dword ptr [edi + 8], edx
  0x00438526: mov      word ptr [edi + 0xc], 1
  0x0043852C: mov      word ptr [edi + 0xe], 8
  0x00438532: mov      dword ptr [edi + 0x10], ebx
  0x00438535: mov      dword ptr [edi + 0x14], ebx
  0x00438538: mov      dword ptr [edi + 0x18], ebx
  0x0043853B: mov      dword ptr [edi + 0x1c], ebx
  0x0043853E: mov      dword ptr [edi + 0x20], ecx
  0x00438541: mov      dword ptr [edi + 0x24], ecx
  0x00438544: mov      cl, byte ptr [esi + 0x3d]
  0x00438547: test     cl, 0x80
  0x0043854A: je       0x4385f0
  0x00438500: mov      word ptr [ecx + 2], bx
  0x00438504: mov      word ptr [ecx], bx
  0x00438507: add      ecx, 6
  0x0043850A: dec      edx
  0x0043850B: jne      0x438500
  0x004385F0: mov      ecx, dword ptr [esi + 0x88]
  0x004385F6: mov      edi, dword ptr [esi + 0xa8]
  0x004385FC: cmp      ecx, ebx
  0x004385FE: je       0x438623
  0x00438550: and      ecx, 7
  0x00438553: mov      edi, 1
  0x00438558: inc      ecx
  0x00438559: shl      edi, cl
  0x0043855B: cmp      dword ptr [esi + 0x88], ebx
  0x00438561: je       0x43858d
  0x00438623: mov      edx, dword ptr [esi + 0x80]
  0x00438629: xor      ecx, ecx
  0x0043862B: cmp      edx, ebx
  0x0043862D: jle      0x438653
  0x00438600: mov      ebp, dword ptr [esi + 0x8c]
  0x00438606: xor      ecx, ecx
  0x00438608: lea      edx, [edi + ebp*2]
  0x0043860B: add      ebp, edx
  0x0043860D: xor      edx, edx
  0x0043860F: mov      ch, byte ptr [ebp + 2]
  0x00438612: mov      dl, byte ptr [ebp]
  0x00438615: mov      cl, byte ptr [ebp + 1]
  0x00438618: shl      ecx, 8
  0x0043861B: or       ecx, edx
  0x0043861D: mov      dword ptr [esi + 0xa0], ecx
  0x00438623: mov      edx, dword ptr [esi + 0x80]
  0x00438629: xor      ecx, ecx
  0x0043862B: cmp      edx, ebx
  0x0043862D: jle      0x438653
  0x0043858D: mov      edx, dword ptr [esi + 0x94]
  0x00438593: lea      ecx, [edi + edi*2]
  0x00438596: add      edx, ecx
  0x00438598: cmp      edi, ebx
  0x0043859A: mov      dword ptr [esi + 0x94], edx
  0x004385A0: jbe      0x438653
  0x00438563: mov      ecx, dword ptr [esi + 0x8c]
  0x00438569: mov      edx, dword ptr [esi + 0xb4]
  0x0043856F: lea      ecx, [ecx + ecx*2]
  0x00438572: lea      ebp, [ecx + edx]
  0x00438575: xor      ecx, ecx
  0x00438577: xor      edx, edx
  0x00438579: mov      ch, byte ptr [ebp + 2]
  0x0043857C: mov      dl, byte ptr [ebp]
  0x0043857F: mov      cl, byte ptr [ebp + 1]
  0x00438582: shl      ecx, 8
  0x00438585: or       ecx, edx
  0x00438587: mov      dword ptr [esi + 0xa0], ecx
  0x0043858D: mov      edx, dword ptr [esi + 0x94]
  0x00438593: lea      ecx, [edi + edi*2]
  0x00438596: add      edx, ecx
  0x00438598: cmp      edi, ebx
  0x0043859A: mov      dword ptr [esi + 0x94], edx
  0x004385A0: jbe      0x438653
  0x00438653: mov      eax, dword ptr [esi + 0xb4]
  0x00438659: xor      ecx, ecx
  0x0043865B: mov      edx, 1
  0x00438660: mov      cl, byte ptr [eax]
  0x00438662: inc      eax
  0x00438663: mov      dword ptr [esi + 0xb4], eax
  0x00438669: mov      eax, dword ptr [esi + 0x94]
  0x0043866F: inc      eax
  0x00438670: mov      dword ptr [esi + 0x40], ecx
  0x00438673: mov      dword ptr [esi + 0x94], eax
  0x00438679: mov      eax, edx
  0x0043867B: shl      eax, cl
  0x0043867D: mov      dword ptr [esi + 0x44], ecx
  0x00438680: mov      dword ptr [esi + 0x48], ebx
  0x00438683: mov      byte ptr [esi + 0x3c], 0
  0x00438687: mov      dword ptr [esi + 0x50], ebx
  0x0043868A: mov      dword ptr [esi + 0x4c], edx
  0x0043868D: mov      dword ptr [esi + 0x7c], ebx
  0x00438690: add      eax, 2
  0x00438693: mov      dword ptr [esi + 0x78], ebx
  0x00438696: mov      dword ptr [esp + 0x18], eax
  0x0043869A: mov      dword ptr [esp + 0x14], eax
  0x0043869E: dec      eax
  0x0043869F: inc      ecx
  0x004386A0: mov      dword ptr [esp + 0x40], eax
  0x004386A4: mov      eax, dword ptr [esi + 0x40]
  0x004386A7: inc      eax
  0x004386A8: mov      dword ptr [esi + 0x44], ecx
  0x004386AB: mov      dword ptr [esi + 0x40], eax
  0x004386AE: mov      dword ptr [esi + 0x64], edx
  0x004386B1: mov      dword ptr [esi + 0x68], ebx
  0x004386B4: mov      eax, dword ptr [esi + 0x48]
  0x004386B7: mov      ecx, dword ptr [esi + 0x40]
  0x004386BA: cmp      eax, ecx
  0x004386BC: jb       0x4386ef
  0x0043862F: mov      dl, byte ptr [edi]
  0x00438631: inc      edi
  0x00438632: mov      byte ptr [eax + 2], dl
  0x00438635: add      eax, 4
  0x00438638: mov      dl, byte ptr [edi]
  0x0043863A: inc      edi
  0x0043863B: mov      byte ptr [eax - 3], dl
  0x0043863E: mov      dl, byte ptr [edi]
  0x00438640: mov      byte ptr [eax - 1], 0
  0x00438644: mov      byte ptr [eax - 4], dl
  0x00438647: mov      edx, dword ptr [esi + 0x80]
  0x0043864D: inc      edi
  0x0043864E: inc      ecx
  0x0043864F: cmp      ecx, edx
  0x00438651: jl       0x43862f
  0x004385A6: mov      edx, dword ptr [esi + 0xb4]
  0x004385AC: add      eax, 4
  0x004385AF: mov      cl, byte ptr [edx]
  0x004385B1: mov      byte ptr [eax - 2], cl
  0x004385B4: mov      edx, dword ptr [esi + 0xb4]
  0x004385BA: inc      edx
  0x004385BB: mov      ecx, edx
  0x004385BD: mov      dword ptr [esi + 0xb4], edx
  0x004385C3: mov      dl, byte ptr [ecx]
  0x004385C5: mov      byte ptr [eax - 3], dl
  0x004385C8: mov      ecx, dword ptr [esi + 0xb4]
  0x004385CE: inc      ecx
  0x004385CF: mov      dword ptr [esi + 0xb4], ecx
  0x004385D5: mov      cl, byte ptr [ecx]
  0x004385D7: mov      byte ptr [eax - 4], cl
  0x004385DA: mov      ebp, dword ptr [esi + 0xb4]
  0x004385E0: inc      ebp
  0x004385E1: dec      edi
  0x004385E2: mov      dword ptr [esi + 0xb4], ebp
  0x004385E8: mov      byte ptr [eax - 1], 0
  0x004385EC: jne      0x4385a6
  0x004386EF: mov      edi, dword ptr [esi + 0x50]
  0x004386F2: mov      ecx, dword ptr [esi + 0x4c]
  0x004386F5: xor      edx, edx
  0x004386F7: cmp      ecx, edi
  0x004386F9: mov      dl, byte ptr [esi + 0x3c]
  0x004386FC: mov      ebp, edx
  0x004386FE: jb       0x438765
  0x004386BE: mov      dl, byte ptr [esi + 0x3c]
  0x004386C1: mov      bl, 1
  0x004386C3: shl      bl, cl
  0x004386C5: mov      ecx, edx
  0x004386C7: and      ecx, 0xff
  0x004386CD: dec      bl
  0x004386CF: and      ebx, 0xff
  0x004386D5: and      ebx, ecx
  0x004386D7: mov      cl, byte ptr [esi + 0x40]
  0x004386DA: shr      dl, cl
  0x004386DC: mov      ecx, dword ptr [esi + 0x40]
  0x004386DF: mov      ebp, ebx
  0x004386E1: mov      dword ptr [esp + 0x38], ebp
  0x004386E5: sub      eax, ecx
  0x004386E7: mov      byte ptr [esi + 0x3c], dl
  0x004386EA: jmp      0x4388a2
  0x004385EE: jmp      0x438653
  0x00438765: mov      ecx, dword ptr [esi + 0x4c]
  0x00438768: inc      ecx
  0x00438769: mov      dword ptr [esi + 0x4c], ecx
  0x0043876C: mov      ecx, dword ptr [esi + 0xb4]
  0x00438772: mov      dl, byte ptr [ecx]
  0x00438774: inc      ecx
  0x00438775: mov      byte ptr [esp + 0x28], dl
  0x00438779: mov      dword ptr [esi + 0xb4], ecx
  0x0043877F: mov      ecx, dword ptr [esi + 0x40]
  0x00438782: mov      byte ptr [esi + 0x3c], dl
  0x00438785: sub      ecx, eax
  0x00438787: cmp      ecx, 8
  0x0043878A: ja       0x4387d0
  0x00438700: mov      ecx, dword ptr [esi + 0xb4]
  0x00438706: xor      edx, edx
  0x00438708: mov      ebx, dword ptr [esi + 0x94]
  0x0043870E: mov      dl, byte ptr [ecx]
  0x00438710: mov      dword ptr [esi + 0x4c], 0
  0x00438717: mov      dword ptr [esi + 0x50], edx
  0x0043871A: mov      edi, dword ptr [esi + 0x50]
  0x0043871D: lea      edx, [ecx + 1]
  0x00438720: lea      ecx, [edi + 1]
  0x00438723: mov      dword ptr [esi + 0xb4], edx
  0x00438729: add      ebx, ecx
  0x0043872B: mov      dword ptr [esi + 0x94], ebx
  0x00438731: mov      ecx, ebx
  0x00438733: cmp      ecx, dword ptr [esi + 0x74]
  0x00438736: jle      0x43874a
  0x004388A2: mov      ecx, ebp
  0x004388A4: mov      dword ptr [esi + 0x48], eax
  0x004388A7: mov      eax, dword ptr [esp + 0x40]
  0x004388AB: and      ecx, 0xffff
  0x004388B1: cmp      ecx, eax
  0x004388B3: je       0x43901a
  0x0043878C: mov      cl, byte ptr [esi + 0x40]
  0x0043878F: mov      bl, byte ptr [esi + 0x48]
  0x00438792: sub      cl, bl
  0x00438794: mov      bl, 1
  0x00438796: shl      bl, cl
  0x00438798: mov      byte ptr [esp + 0x13], cl
  0x0043879C: mov      ecx, dword ptr [esp + 0x28]
  0x004387A0: and      ecx, 0xff
  0x004387A6: dec      bl
  0x004387A8: and      ebx, 0xff
  0x004387AE: and      ebx, ecx
  0x004387B0: mov      ecx, eax
  0x004387B2: shl      ebx, cl
  0x004387B4: mov      cl, byte ptr [esp + 0x13]
  0x004387B8: shr      dl, cl
  0x004387BA: add      ebp, ebx
  0x004387BC: mov      dword ptr [esp + 0x38], ebp
  0x004387C0: mov      byte ptr [esi + 0x3c], dl
  0x004387C3: mov      edx, dword ptr [esi + 0x40]
  0x004387C6: sub      eax, edx
  0x004387C8: add      eax, 8
  0x004387CB: jmp      0x4388a2
  0x004387D0: mov      edx, dword ptr [esp + 0x28]
  0x004387D4: mov      ecx, eax
  0x004387D6: and      edx, 0xff
  0x004387DC: shl      edx, cl
  0x004387DE: mov      ecx, dword ptr [esi + 0x4c]
  0x004387E1: add      ebp, edx
  0x004387E3: cmp      ecx, edi
  0x004387E5: jb       0x438845
  0x0043874A: test     edi, edi
  0x0043874C: jne      0x438765
  0x00438738: sub      ecx, edi
  0x0043873A: dec      ecx
  0x0043873B: or       dl, 0xff
  0x0043873E: mov      dword ptr [esi + 0x94], ecx
  0x00438744: mov      byte ptr [esp + 0x28], dl
  0x00438748: jmp      0x43877f
  0x0043901A: cmp      dword ptr [esi + 0xe8], 1
  0x00439021: jne      0x43904a
  0x004388B9: dec      eax
  0x004388BA: cmp      ecx, eax
  0x004388BC: jne      0x438b05
  0x00438845: mov      ecx, dword ptr [esi + 0x4c]
  0x00438848: inc      ecx
  0x00438849: mov      dword ptr [esi + 0x4c], ecx
  0x0043884C: mov      ecx, dword ptr [esi + 0xb4]
  0x00438852: mov      dl, byte ptr [ecx]
  0x00438854: inc      ecx
  0x00438855: mov      byte ptr [esp + 0x2c], dl
  0x00438859: mov      dword ptr [esi + 0xb4], ecx
  0x0043885F: mov      dl, byte ptr [esi + 0x40]
  0x00438862: mov      cl, byte ptr [esi + 0x48]
  0x00438865: sub      dl, cl
  0x00438867: mov      bl, 1
  0x00438869: sub      dl, 8
  0x0043886C: mov      cl, dl
  0x0043886E: shl      bl, cl
  0x00438870: mov      ecx, dword ptr [esp + 0x2c]
  0x00438874: and      ecx, 0xff
  0x0043887A: dec      bl
  0x0043887C: and      ebx, 0xff
  0x00438882: and      ebx, ecx
  0x00438884: lea      ecx, [eax + 8]
  0x00438887: shl      ebx, cl
  0x00438889: mov      cl, dl
  0x0043888B: mov      dl, byte ptr [esp + 0x2c]
  0x0043888F: shr      dl, cl
  0x00438891: add      ebp, ebx
  0x00438893: mov      dword ptr [esp + 0x38], ebp
  0x00438897: mov      byte ptr [esi + 0x3c], dl
  0x0043889A: mov      edx, dword ptr [esi + 0x40]
  0x0043889D: sub      eax, edx
  0x0043889F: add      eax, 0x10
  0x004388A2: mov      ecx, ebp
  0x004388A4: mov      dword ptr [esi + 0x48], eax
  0x004388A7: mov      eax, dword ptr [esp + 0x40]
  0x004388AB: and      ecx, 0xffff
  0x004388B1: cmp      ecx, eax
  0x004388B3: je       0x43901a
  0x004387E7: mov      ecx, dword ptr [esi + 0xb4]
  0x004387ED: mov      ebx, dword ptr [esi + 0x94]
  0x004387F3: xor      edx, edx
  0x004387F5: mov      dl, byte ptr [ecx]
  0x004387F7: lea      edi, [ecx + 1]
  0x004387FA: mov      dword ptr [esi + 0x50], edx
  0x004387FD: mov      dword ptr [esi + 0xb4], edi
  0x00438803: lea      ecx, [edx + 1]
  0x00438806: mov      dword ptr [esi + 0x4c], 0
  0x0043880D: add      ebx, ecx
  0x0043880F: mov      dword ptr [esi + 0x94], ebx
  0x00438815: mov      ecx, ebx
  0x00438817: cmp      ecx, dword ptr [esi + 0x74]
  0x0043881A: jle      0x43882c
  0x0043874E: dec      edx
  0x0043874F: dec      ecx
  0x00438750: mov      dword ptr [esi + 0xb4], edx
  0x00438756: or       dl, 0xff
  0x00438759: mov      dword ptr [esi + 0x94], ecx
  0x0043875F: mov      byte ptr [esp + 0x28], dl
  0x00438763: jmp      0x43877f
  0x0043877F: mov      ecx, dword ptr [esi + 0x40]
  0x00438782: mov      byte ptr [esi + 0x3c], dl
  0x00438785: sub      ecx, eax
  0x00438787: cmp      ecx, 8
  0x0043878A: ja       0x4387d0
  0x00439023: mov      eax, dword ptr [esi + 0x98]
  0x00439029: mov      edx, dword ptr [esp + 0x24]
  0x0043902D: add      eax, 0x6428
  0x00439032: xor      edi, edi
  0x00439034: mov      dword ptr [esi + 0xf0], eax
  0x0043903A: mov      eax, edi
  0x0043903C: mov      dword ptr [esi + 0xec], edx
  0x00439042: pop      edi
  0x00439043: pop      esi
  0x00439044: pop      ebp
  0x00439045: pop      ebx
  0x00439046: add      esp, 0x34
  0x00439049: ret      
  0x0043904A: mov      ebx, dword ptr [esp + 0x24]
  0x0043904E: mov      ecx, dword ptr [esi + 0xac]
  0x00439054: mov      edx, dword ptr [esi + 0xa4]
  0x0043905A: push     0
  0x0043905C: push     ebx
  0x0043905D: push     ecx
  0x0043905E: push     4
  0x00439060: push     ebx
  0x00439061: push     edx
  0x00439062: call     dword ptr [0x4a2084]
  0x004388C2: mov      ecx, dword ptr [esi + 0x44]
  0x004388C5: mov      eax, dword ptr [esi + 0x48]
  0x004388C8: mov      edx, dword ptr [esp + 0x14]
  0x004388CC: cmp      eax, ecx
  0x004388CE: mov      dword ptr [esi + 0x40], ecx
  0x004388D1: mov      dword ptr [esp + 0x18], edx
  0x004388D5: jb       0x4388ff
  0x00438B05: cmp      ecx, dword ptr [esp + 0x18]
  0x00438B09: jge      0x438d16
  0x0043882C: test     edx, edx
  0x0043882E: jne      0x438845
  0x0043881C: sub      ecx, edx
  0x0043881E: mov      byte ptr [esp + 0x2c], 0xff
  0x00438823: dec      ecx
  0x00438824: mov      dword ptr [esi + 0x94], ecx
  0x0043882A: jmp      0x43885f
  0x00439068: mov      ebp, dword ptr [esi + 0xb4]
  0x0043906E: mov      edx, dword ptr [esi + 0x94]
  0x00439074: inc      ebp
  0x00439075: inc      edx
  0x00439076: push     ebx
  0x00439077: mov      edi, eax
  0x00439079: mov      dword ptr [esi + 0xb4], ebp
  0x0043907F: mov      dword ptr [esi + 0x94], edx
  0x00439085: call     0x492f40
  0x004388FF: mov      ecx, dword ptr [esi + 0x4c]
  0x00438902: mov      edx, dword ptr [esi + 0x50]
  0x00438905: xor      ebx, ebx
  0x00438907: cmp      ecx, edx
  0x00438909: mov      bl, byte ptr [esi + 0x3c]
  0x0043890C: jb       0x43896e
  0x004388D7: mov      dl, byte ptr [esi + 0x3c]
  0x004388DA: mov      bl, 1
  0x004388DC: shl      bl, cl
  0x004388DE: mov      edi, edx
  0x004388E0: and      edi, 0xff
  0x004388E6: shr      dl, cl
  0x004388E8: dec      bl
  0x004388EA: and      ebx, 0xff
  0x004388F0: and      ebx, edi
  0x004388F2: sub      eax, ecx
  0x004388F4: mov      byte ptr [esi + 0x3c], dl
  0x004388F7: mov      dword ptr [esi + 0x48], eax
  0x004388FA: jmp      0x438a37
  0x00438B0F: mov      edx, dword ptr [esp + 0x14]
  0x00438B13: xor      eax, eax
  0x00438B15: mov      ebx, ebp
  0x00438B17: mov      ebp, dword ptr [esp + 0x30]
  0x00438B1B: cmp      ecx, edx
  0x00438B1D: jl       0x438b51
  0x00438D16: mov      ecx, dword ptr [esp + 0x20]
  0x00438D1A: mov      edx, dword ptr [esp + 0x14]
  0x00438D1E: mov      ebp, dword ptr [esp + 0x30]
  0x00438D22: mov      ebx, ecx
  0x00438D24: and      ecx, 0xffff
  0x00438D2A: xor      eax, eax
  0x00438D2C: cmp      ecx, edx
  0x00438D2E: mov      dword ptr [esp + 0x34], ebx
  0x00438D32: jl       0x438d60
  0x00438830: dec      edi
  0x00438831: dec      ecx
  0x00438832: mov      dword ptr [esi + 0xb4], edi
  0x00438838: mov      dword ptr [esi + 0x94], ecx
  0x0043883E: mov      byte ptr [esp + 0x2c], 0xff
  0x00438843: jmp      0x43885f
  0x0043885F: mov      dl, byte ptr [esi + 0x40]
  0x00438862: mov      cl, byte ptr [esi + 0x48]
  0x00438865: sub      dl, cl
  0x00438867: mov      bl, 1
  0x00438869: sub      dl, 8
  0x0043886C: mov      cl, dl
  0x0043886E: shl      bl, cl
  0x00438870: mov      ecx, dword ptr [esp + 0x2c]
  0x00438874: and      ecx, 0xff
  0x0043887A: dec      bl
  0x0043887C: and      ebx, 0xff
  0x00438882: and      ebx, ecx
  0x00438884: lea      ecx, [eax + 8]
  0x00438887: shl      ebx, cl
  0x00438889: mov      cl, dl
  0x0043888B: mov      dl, byte ptr [esp + 0x2c]
  0x0043888F: shr      dl, cl
  0x00438891: add      ebp, ebx
  0x00438893: mov      dword ptr [esp + 0x38], ebp
  0x00438897: mov      byte ptr [esi + 0x3c], dl
  0x0043889A: mov      edx, dword ptr [esi + 0x40]
  0x0043889D: sub      eax, edx
  0x0043889F: add      eax, 0x10
  0x004388A2: mov      ecx, ebp
  0x004388A4: mov      dword ptr [esi + 0x48], eax
  0x004388A7: mov      eax, dword ptr [esp + 0x40]
  0x004388AB: and      ecx, 0xffff
  0x004388B1: cmp      ecx, eax
  0x004388B3: je       0x43901a
  0x0043908A: add      esp, 4
  0x0043908D: mov      eax, edi
  0x0043908F: pop      edi
  0x00439090: pop      esi
  0x00439091: pop      ebp
  0x00439092: pop      ebx
  0x00439093: add      esp, 0x34
  0x00439096: ret      
  0x0043896E: mov      ecx, dword ptr [esi + 0x4c]
  0x00438971: mov      edx, dword ptr [esi + 0xb4]
  0x00438977: inc      ecx
  0x00438978: inc      edx
  0x00438979: mov      dword ptr [esi + 0x4c], ecx
  0x0043897C: mov      cl, byte ptr [edx - 1]
  0x0043897F: mov      byte ptr [esp + 0x1c], cl
  0x00438983: mov      dword ptr [esi + 0xb4], edx
  0x00438989: mov      edx, dword ptr [esi + 0x40]
  0x0043898C: mov      byte ptr [esi + 0x3c], cl
  0x0043898F: sub      edx, eax
  0x00438991: cmp      edx, 8
  0x00438994: ja       0x4389da
  0x0043890E: mov      edi, dword ptr [esi + 0xb4]
  0x00438914: mov      ebp, dword ptr [esi + 0x94]
  0x0043891A: xor      edx, edx
  0x0043891C: mov      dl, byte ptr [edi]
  0x0043891E: inc      edi
  0x0043891F: mov      dword ptr [esi + 0x50], edx
  0x00438922: mov      dword ptr [esi + 0xb4], edi
  0x00438928: lea      ecx, [edx + 1]
  0x0043892B: mov      dword ptr [esi + 0x4c], 0
  0x00438932: add      ebp, ecx
  0x00438934: mov      dword ptr [esi + 0x94], ebp
  0x0043893A: mov      ecx, ebp
  0x0043893C: cmp      ecx, dword ptr [esi + 0x74]
  0x0043893F: jle      0x438953
  0x00438A37: mov      eax, dword ptr [esp + 0x14]
  0x00438A3B: mov      edx, ebx
  0x00438A3D: and      edx, 0xffff
  0x00438A43: mov      dword ptr [esp + 0x20], ebx
  0x00438A47: cmp      edx, eax
  0x00438A49: jg       0x438fd5
  0x00438B51: test     byte ptr [esi + 0x3d], 0x40
  0x00438B55: je       0x438bc1
  0x00438B1F: mov      ecx, ebx
  0x00438B21: and      ecx, 0xffff
  0x00438B27: lea      edx, [ecx + ecx*2]
  0x00438B2A: lea      ecx, [ebp + edx*2]
  0x00438B2E: mov      word ptr [ecx + 4], ax
  0x00438B32: mov      eax, ebx
  0x00438B34: mov      bx, word ptr [ecx + 2]
  0x00438B38: cmp      bx, ax
  0x00438B3B: jae      0x438fec
  0x00438D60: test     byte ptr [esi + 0x3d], 0x40
  0x00438D64: je       0x438ddc
  0x00438D34: lea      ecx, [ecx + ecx*2]
  0x00438D37: lea      ecx, [ebp + ecx*2]
  0x00438D3B: mov      word ptr [ecx + 4], ax
  0x00438D3F: mov      cx, word ptr [ecx + 2]
  0x00438D43: mov      eax, ebx
  0x00438D45: mov      dword ptr [esp + 0x34], ecx
  0x00438D49: cmp      cx, ax
  0x00438D4C: jae      0x439003
  0x00438996: mov      cl, byte ptr [esi + 0x40]
  0x00438999: mov      dl, byte ptr [esi + 0x48]
  0x0043899C: sub      cl, dl
  0x0043899E: mov      dl, 1
  0x004389A0: shl      dl, cl
  0x004389A2: mov      byte ptr [esp + 0x13], cl
  0x004389A6: mov      ecx, dword ptr [esp + 0x1c]
  0x004389AA: and      ecx, 0xff
  0x004389B0: dec      dl
  0x004389B2: and      edx, 0xff
  0x004389B8: and      edx, ecx
  0x004389BA: mov      ecx, eax
  0x004389BC: shl      edx, cl
  0x004389BE: mov      cl, byte ptr [esp + 0x13]
  0x004389C2: add      ebx, edx
  0x004389C4: mov      dl, byte ptr [esp + 0x1c]
  0x004389C8: shr      dl, cl
  0x004389CA: mov      byte ptr [esi + 0x3c], dl
  0x004389CD: mov      edx, dword ptr [esi + 0x40]
  0x004389D0: sub      eax, edx
  0x004389D2: add      eax, 8
  0x004389D5: mov      dword ptr [esi + 0x48], eax
  0x004389D8: jmp      0x438a37
  0x004389DA: mov      edx, dword ptr [esp + 0x1c]
  0x004389DE: mov      ecx, eax
  0x004389E0: and      edx, 0xff
  0x004389E6: shl      edx, cl
  0x004389E8: mov      ecx, esi
  0x004389EA: add      ebx, edx
  0x004389EC: call     0x439220
  0x00438953: test     edx, edx
  0x00438955: jne      0x43896e
  0x00438941: sub      ecx, edx
  0x00438943: dec      ecx
  0x00438944: mov      dword ptr [esi + 0x94], ecx
  0x0043894A: or       cl, 0xff
  0x0043894D: mov      byte ptr [esp + 0x1c], cl
  0x00438951: jmp      0x438989
  0x00438A4F: test     byte ptr [esi + 0x3d], 0x40
  0x00438A53: je       0x438ac1
  0x00438FD5: mov      edx, dword ptr [esp + 0x24]
  0x00438FD9: push     edx
  0x00438FDA: call     0x492f40
  0x00438BC1: mov      ecx, dword ptr [esi + 0x78]
  0x00438BC4: mov      edx, dword ptr [esi + 0x54]
  0x00438BC7: cmp      ecx, edx
  0x00438BC9: jne      0x438bd9
  0x00438B57: mov      edx, dword ptr [esi + 0x78]
  0x00438B5A: mov      ecx, dword ptr [esi + 0x54]
  0x00438B5D: cmp      edx, ecx
  0x00438B5F: jne      0x438ba7
  0x00438B41: mov      edx, dword ptr [esp + 0x14]
  0x00438B45: mov      ecx, ebx
  0x00438B47: and      ecx, 0xffff
  0x00438B4D: cmp      ecx, edx
  0x00438B4F: jge      0x438b1f
  0x00438FEC: mov      eax, dword ptr [esp + 0x24]
  0x00438FF0: push     eax
  0x00438FF1: call     0x492f40
  0x00438DDC: mov      ecx, dword ptr [esi + 0x78]
  0x00438DDF: mov      edx, dword ptr [esi + 0x54]
  0x00438DE2: cmp      ecx, edx
  0x00438DE4: jne      0x438df4
  0x00438D66: mov      edx, dword ptr [esi + 0x78]
  0x00438D69: mov      ecx, dword ptr [esi + 0x54]
  0x00438D6C: cmp      edx, ecx
  0x00438D6E: jne      0x438db9
  0x00438D52: mov      ebx, dword ptr [esp + 0x34]
  0x00438D56: and      ecx, 0xffff
  0x00438D5C: cmp      ecx, edx
  0x00438D5E: jge      0x438d34
  0x00439003: mov      ecx, dword ptr [esp + 0x24]
  0x00439007: push     ecx
  0x00439008: call     0x492f40
  0x004389F1: mov      dl, byte ptr [esi + 0x40]
  0x004389F4: mov      cl, byte ptr [esi + 0x48]
  0x004389F7: sub      dl, cl
  0x004389F9: mov      byte ptr [esp + 0x3c], al
  0x004389FD: sub      dl, 8
  0x00438A00: mov      al, 1
  0x00438A02: mov      cl, dl
  0x00438A04: mov      edi, dword ptr [esi + 0x48]
  0x00438A07: shl      al, cl
  0x00438A09: mov      ecx, dword ptr [esp + 0x3c]
  0x00438A0D: and      ecx, 0xff
  0x00438A13: dec      al
  0x00438A15: and      eax, 0xff
  0x00438A1A: and      eax, ecx
  0x00438A1C: lea      ecx, [edi + 8]
  0x00438A1F: shl      eax, cl
  0x00438A21: mov      cl, dl
  0x00438A23: add      ebx, eax
  0x00438A25: mov      al, byte ptr [esp + 0x3c]
  0x00438A29: shr      al, cl
  0x00438A2B: sub      edi, dword ptr [esi + 0x40]
  0x00438A2E: add      edi, 0x10
  0x00438A31: mov      byte ptr [esi + 0x3c], al
  0x00438A34: mov      dword ptr [esi + 0x48], edi
  0x00438A37: mov      eax, dword ptr [esp + 0x14]
  0x00438A3B: mov      edx, ebx
  0x00438A3D: and      edx, 0xffff
  0x00438A43: mov      dword ptr [esp + 0x20], ebx
  0x00438A47: cmp      edx, eax
  0x00438A49: jg       0x438fd5
  0x00438957: dec      edi
  0x00438958: dec      ecx
  0x00438959: mov      dword ptr [esi + 0x94], ecx
  0x0043895F: or       cl, 0xff
  0x00438962: mov      dword ptr [esi + 0xb4], edi
  0x00438968: mov      byte ptr [esp + 0x1c], cl
  0x0043896C: jmp      0x438989
  0x00438989: mov      edx, dword ptr [esi + 0x40]
  0x0043898C: mov      byte ptr [esi + 0x3c], cl
  0x0043898F: sub      edx, eax
  0x00438991: cmp      edx, 8
  0x00438994: ja       0x4389da
  0x00438AC1: mov      edx, dword ptr [esi + 0x78]
  0x00438AC4: mov      eax, dword ptr [esi + 0x54]
  0x00438AC7: cmp      edx, eax
  0x00438AC9: jne      0x438ad9
  0x00438A55: mov      eax, dword ptr [esi + 0x78]
  0x00438A58: mov      ecx, dword ptr [esi + 0x54]
  0x00438A5B: cmp      eax, ecx
  0x00438A5D: jne      0x438aa7
  0x00438FDF: add      esp, 4
  0x00438FE2: xor      eax, eax
  0x00438FE4: pop      edi
  0x00438FE5: pop      esi
  0x00438FE6: pop      ebp
  0x00438FE7: pop      ebx
  0x00438FE8: add      esp, 0x34
  0x00438FEB: ret      
  0x00438BCB: mov      ecx, dword ptr [esi + 0x7c]
  0x00438BCE: mov      dword ptr [esi + 0x78], 0
  0x00438BD5: inc      ecx
  0x00438BD6: mov      dword ptr [esi + 0x7c], ecx
  0x00438BD9: mov      ecx, dword ptr [esi + 0x7c]
  0x00438BDC: mov      edx, dword ptr [esi + 0x78]
  0x00438BDF: imul     ecx, dword ptr [esi + 0x6c]
  0x00438BE3: add      ecx, edx
  0x00438BE5: inc      edx
  0x00438BE6: mov      dword ptr [esi + 0x78], edx
  0x00438BE9: mov      edx, dword ptr [esi + 0x98]
  0x00438BEF: cmp      ecx, edx
  0x00438BF1: jg       0x438bfc
  0x00438BD9: mov      ecx, dword ptr [esi + 0x7c]
  0x00438BDC: mov      edx, dword ptr [esi + 0x78]
  0x00438BDF: imul     ecx, dword ptr [esi + 0x6c]
  0x00438BE3: add      ecx, edx
  0x00438BE5: inc      edx
  0x00438BE6: mov      dword ptr [esi + 0x78], edx
  0x00438BE9: mov      edx, dword ptr [esi + 0x98]
  0x00438BEF: cmp      ecx, edx
  0x00438BF1: jg       0x438bfc
  0x00438B61: mov      ecx, dword ptr [esi + 0x64]
  0x00438B64: mov      dword ptr [esi + 0x78], 0
  0x00438B6B: cmp      ecx, 1
  0x00438B6E: jne      0x438b74
  0x00438BA7: mov      ecx, dword ptr [esi + 0x6c]
  0x00438BAA: mov      edi, dword ptr [esi + 0x78]
  0x00438BAD: imul     ecx, dword ptr [esi + 0x68]
  0x00438BB1: mov      edx, dword ptr [esi + 0xac]
  0x00438BB7: add      ecx, edi
  0x00438BB9: mov      byte ptr [edx + ecx], bl
  0x00438BBC: mov      edx, dword ptr [esi + 0x78]
  0x00438BBF: jmp      0x438be5
  0x00438FF6: add      esp, 4
  0x00438FF9: xor      eax, eax
  0x00438FFB: pop      edi
  0x00438FFC: pop      esi
  0x00438FFD: pop      ebp
  0x00438FFE: pop      ebx
  0x00438FFF: add      esp, 0x34
  0x00439002: ret      
  0x00438DE6: mov      ecx, dword ptr [esi + 0x7c]
  0x00438DE9: mov      dword ptr [esi + 0x78], 0
  0x00438DF0: inc      ecx
  0x00438DF1: mov      dword ptr [esi + 0x7c], ecx
  0x00438DF4: mov      ecx, dword ptr [esi + 0x7c]
  0x00438DF7: mov      edx, dword ptr [esi + 0x78]
  0x00438DFA: imul     ecx, dword ptr [esi + 0x6c]
  0x00438DFE: add      ecx, edx
  0x00438E00: inc      edx
  0x00438E01: mov      dword ptr [esi + 0x78], edx
  0x00438E04: mov      edi, 8
  0x00438E09: cmp      ecx, dword ptr [esi + 0x98]
  0x00438E0F: jg       0x438e1a
  0x00438DF4: mov      ecx, dword ptr [esi + 0x7c]
  0x00438DF7: mov      edx, dword ptr [esi + 0x78]
  0x00438DFA: imul     ecx, dword ptr [esi + 0x6c]
  0x00438DFE: add      ecx, edx
  0x00438E00: inc      edx
  0x00438E01: mov      dword ptr [esi + 0x78], edx
  0x00438E04: mov      edi, 8
  0x00438E09: cmp      ecx, dword ptr [esi + 0x98]
  0x00438E0F: jg       0x438e1a
  0x00438D70: mov      ecx, dword ptr [esi + 0x64]
  0x00438D73: mov      dword ptr [esi + 0x78], 0
  0x00438D7A: cmp      ecx, 1
  0x00438D7D: mov      edi, 8
  0x00438D82: jne      0x438d87
  0x00438DB9: mov      edi, 8
  0x00438DBE: mov      ecx, dword ptr [esi + 0x6c]
  0x00438DC1: mov      edx, dword ptr [esi + 0x78]
  0x00438DC4: imul     ecx, dword ptr [esi + 0x68]
  0x00438DC8: add      ecx, edx
  0x00438DCA: mov      edx, dword ptr [esi + 0xac]
  0x00438DD0: mov      byte ptr [edx + ecx], bl
  0x00438DD3: mov      edx, dword ptr [esi + 0x78]
  0x00438DD6: inc      edx
  0x00438DD7: mov      dword ptr [esi + 0x78], edx
  0x00438DDA: jmp      0x438e09
  0x0043900D: add      esp, 4
  0x00439010: xor      eax, eax
  0x00439012: pop      edi
  0x00439013: pop      esi
  0x00439014: pop      ebp
  0x00439015: pop      ebx
  0x00439016: add      esp, 0x34
  0x00439019: ret      
  0x00438ACB: mov      eax, dword ptr [esi + 0x7c]
  0x00438ACE: mov      dword ptr [esi + 0x78], 0
  0x00438AD5: inc      eax
  0x00438AD6: mov      dword ptr [esi + 0x7c], eax
  0x00438AD9: mov      eax, dword ptr [esi + 0x7c]
  0x00438ADC: mov      ecx, dword ptr [esi + 0x78]
  0x00438ADF: imul     eax, dword ptr [esi + 0x6c]
  0x00438AE3: add      eax, ecx
  0x00438AE5: inc      ecx
  0x00438AE6: mov      dword ptr [esi + 0x78], ecx
  0x00438AE9: mov      ecx, dword ptr [esi + 0x98]
  0x00438AEF: cmp      eax, ecx
  0x00438AF1: jg       0x4386b4
  0x00438AD9: mov      eax, dword ptr [esi + 0x7c]
  0x00438ADC: mov      ecx, dword ptr [esi + 0x78]
  0x00438ADF: imul     eax, dword ptr [esi + 0x6c]
  0x00438AE3: add      eax, ecx
  0x00438AE5: inc      ecx
  0x00438AE6: mov      dword ptr [esi + 0x78], ecx
  0x00438AE9: mov      ecx, dword ptr [esi + 0x98]
  0x00438AEF: cmp      eax, ecx
  0x00438AF1: jg       0x4386b4
  0x00438A5F: mov      eax, dword ptr [esi + 0x64]
  0x00438A62: mov      dword ptr [esi + 0x78], 0
  0x00438A69: cmp      eax, 1
  0x00438A6C: jne      0x438a72
  0x00438AA7: mov      eax, dword ptr [esi + 0x6c]
  0x00438AAA: mov      edx, dword ptr [esi + 0x78]
  0x00438AAD: imul     eax, dword ptr [esi + 0x68]
  0x00438AB1: mov      ecx, dword ptr [esi + 0xac]
  0x00438AB7: add      eax, edx
  0x00438AB9: mov      byte ptr [ecx + eax], bl
  0x00438ABC: mov      ecx, dword ptr [esi + 0x78]
  0x00438ABF: jmp      0x438ae5
  0x00438BF3: mov      edx, dword ptr [esi + 0xac]
  0x00438BF9: mov      byte ptr [edx + ecx], bl
  0x00438BFC: test     ax, ax
  0x00438BFF: je       0x438ccd
  0x00438BFC: test     ax, ax
  0x00438BFF: je       0x438ccd
  0x00438B70: add      dword ptr [esi + 0x68], 8
  0x00438B74: cmp      ecx, 2
  0x00438B77: jne      0x438b7d
  0x00438B74: cmp      ecx, 2
  0x00438B77: jne      0x438b7d
  0x00438BE5: inc      edx
  0x00438BE6: mov      dword ptr [esi + 0x78], edx
  0x00438BE9: mov      edx, dword ptr [esi + 0x98]
  0x00438BEF: cmp      ecx, edx
  0x00438BF1: jg       0x438bfc
  0x00438E11: mov      edx, dword ptr [esi + 0xac]
  0x00438E17: mov      byte ptr [edx + ecx], bl
  0x00438E1A: test     ax, ax
  0x00438E1D: je       0x438ee2
  0x00438E1A: test     ax, ax
  0x00438E1D: je       0x438ee2
  0x00438D84: add      dword ptr [esi + 0x68], edi
  0x00438D87: cmp      ecx, 2
  0x00438D8A: jne      0x438d8f
  0x00438D87: cmp      ecx, 2
  0x00438D8A: jne      0x438d8f
  0x00438E09: cmp      ecx, dword ptr [esi + 0x98]
  0x00438E0F: jg       0x438e1a
  0x00438AF7: mov      ecx, dword ptr [esi + 0xac]
  0x00438AFD: mov      byte ptr [ecx + eax], bl
  0x00438B00: jmp      0x4386b4
  0x004386B4: mov      eax, dword ptr [esi + 0x48]
  0x004386B7: mov      ecx, dword ptr [esi + 0x40]
  0x004386BA: cmp      eax, ecx
  0x004386BC: jb       0x4386ef
  0x00438A6E: add      dword ptr [esi + 0x68], 8
  0x00438A72: cmp      eax, 2
  0x00438A75: jne      0x438a7b
  0x00438A72: cmp      eax, 2
  0x00438A75: jne      0x438a7b
  0x00438AE5: inc      ecx
  0x00438AE6: mov      dword ptr [esi + 0x78], ecx
  0x00438AE9: mov      ecx, dword ptr [esi + 0x98]
  0x00438AEF: cmp      eax, ecx
  0x00438AF1: jg       0x4386b4
  0x00438CCD: mov      edx, dword ptr [esp + 0x18]
  0x00438CD1: mov      cx, word ptr [esp + 0x20]
  0x00438CD6: lea      eax, [edx + edx*2]
  0x00438CD9: inc      edx
  0x00438CDA: mov      dword ptr [esp + 0x18], edx
  0x00438CDE: lea      eax, [ebp + eax*2]
  0x00438CE2: mov      byte ptr [eax], bl
  0x00438CE4: mov      word ptr [eax + 2], cx
  0x00438CE8: mov      ecx, dword ptr [esi + 0x40]
  0x00438CEB: mov      eax, 1
  0x00438CF0: shl      eax, cl
  0x00438CF2: cmp      edx, eax
  0x00438CF4: jne      0x438cfa
  0x00438C05: and      eax, 0xffff
  0x00438C0A: lea      eax, [eax + eax*2]
  0x00438C0D: mov      dl, byte ptr [ebp + eax*2]
  0x00438C11: lea      edi, [ebp + eax*2]
  0x00438C15: test     byte ptr [esi + 0x3d], 0x40
  0x00438C19: je       0x438c85
  0x00438B79: add      dword ptr [esi + 0x68], 8
  0x00438B7D: cmp      ecx, 3
  0x00438B80: jne      0x438b86
  0x00438B7D: cmp      ecx, 3
  0x00438B80: jne      0x438b86
  0x00438EE2: mov      al, byte ptr [esi + 0x3d]
  0x00438EE5: mov      edx, dword ptr [esi + 0x78]
  0x00438EE8: test     al, 0x40
  0x00438EEA: mov      eax, dword ptr [esi + 0x54]
  0x00438EED: je       0x438f53
  0x00438E23: xor      ecx, ecx
  0x00438E25: and      eax, 0xffff
  0x00438E2A: lea      eax, [eax + eax*2]
  0x00438E2D: mov      bl, byte ptr [ebp + eax*2]
  0x00438E31: lea      edx, [ebp + eax*2]
  0x00438E35: test     byte ptr [esi + 0x3d], 0x40
  0x00438E39: mov      eax, dword ptr [esi + 0x78]
  0x00438E3C: je       0x438e9d
  0x00438D8C: add      dword ptr [esi + 0x68], edi
  0x00438D8F: cmp      ecx, 3
  0x00438D92: jne      0x438d98
  0x00438D8F: cmp      ecx, 3
  0x00438D92: jne      0x438d98
  0x00438A77: add      dword ptr [esi + 0x68], 8
  0x00438A7B: cmp      eax, 3
  0x00438A7E: jne      0x438a84
  0x00438A7B: cmp      eax, 3
  0x00438A7E: jne      0x438a84
  0x00438CF6: inc      ecx
  0x00438CF7: mov      dword ptr [esi + 0x40], ecx
  0x00438CFA: mov      ecx, dword ptr [esi + 0x40]
  0x00438CFD: mov      eax, 0xc
  0x00438D02: cmp      ecx, eax
  0x00438D04: jbe      0x438d09
  0x00438CFA: mov      ecx, dword ptr [esi + 0x40]
  0x00438CFD: mov      eax, 0xc
  0x00438D02: cmp      ecx, eax
  0x00438D04: jbe      0x438d09
  0x00438C85: mov      eax, dword ptr [esi + 0x78]
  0x00438C88: mov      ecx, dword ptr [esi + 0x54]
  0x00438C8B: cmp      eax, ecx
  0x00438C8D: jne      0x438c9d
  0x00438C1B: mov      ecx, dword ptr [esi + 0x78]
  0x00438C1E: mov      eax, dword ptr [esi + 0x54]
  0x00438C21: cmp      ecx, eax
  0x00438C23: jne      0x438c6b
  0x00438B82: add      dword ptr [esi + 0x68], 4
  0x00438B86: cmp      ecx, 4
  0x00438B89: jne      0x438b8f
  0x00438B86: cmp      ecx, 4
  0x00438B89: jne      0x438b8f
  0x00438F53: cmp      edx, eax
  0x00438F55: jne      0x438f65
  0x00438EEF: cmp      edx, eax
  0x00438EF1: jne      0x438f39
  0x00438E9D: cmp      eax, dword ptr [esi + 0x54]
  0x00438EA0: jne      0x438eac
  0x00438E3E: cmp      eax, dword ptr [esi + 0x54]
  0x00438E41: jne      0x438e83
  0x00438D94: add      dword ptr [esi + 0x68], 4
  0x00438D98: cmp      ecx, 4
  0x00438D9B: jne      0x438da1
  0x00438D98: cmp      ecx, 4
  0x00438D9B: jne      0x438da1
  0x00438A80: add      dword ptr [esi + 0x68], 4
  0x00438A84: cmp      eax, 4
  0x00438A87: jne      0x438a8d
  0x00438A84: cmp      eax, 4
  0x00438A87: jne      0x438a8d
  0x00438D09: mov      ecx, dword ptr [esp + 0x38]
  0x00438D0D: mov      dword ptr [esp + 0x20], ecx
  0x00438D11: jmp      0x4386b4
  0x00438D06: mov      dword ptr [esi + 0x40], eax
  0x00438D09: mov      ecx, dword ptr [esp + 0x38]
  0x00438D0D: mov      dword ptr [esp + 0x20], ecx
  0x00438D11: jmp      0x4386b4
  0x00438C8F: mov      eax, dword ptr [esi + 0x7c]
  0x00438C92: mov      dword ptr [esi + 0x78], 0
  0x00438C99: inc      eax
  0x00438C9A: mov      dword ptr [esi + 0x7c], eax
  0x00438C9D: mov      eax, dword ptr [esi + 0x7c]
  0x00438CA0: mov      ecx, dword ptr [esi + 0x78]
  0x00438CA3: imul     eax, dword ptr [esi + 0x6c]
  0x00438CA7: add      eax, ecx
  0x00438CA9: inc      ecx
  0x00438CAA: mov      dword ptr [esi + 0x78], ecx
  0x00438CAD: mov      ecx, dword ptr [esi + 0x98]
  0x00438CB3: cmp      eax, ecx
  0x00438CB5: jg       0x438cc0
  0x00438C9D: mov      eax, dword ptr [esi + 0x7c]
  0x00438CA0: mov      ecx, dword ptr [esi + 0x78]
  0x00438CA3: imul     eax, dword ptr [esi + 0x6c]
  0x00438CA7: add      eax, ecx
  0x00438CA9: inc      ecx
  0x00438CAA: mov      dword ptr [esi + 0x78], ecx
  0x00438CAD: mov      ecx, dword ptr [esi + 0x98]
  0x00438CB3: cmp      eax, ecx
  0x00438CB5: jg       0x438cc0
  0x00438C25: mov      eax, dword ptr [esi + 0x64]
  0x00438C28: mov      dword ptr [esi + 0x78], 0
  0x00438C2F: cmp      eax, 1
  0x00438C32: jne      0x438c38
  0x00438C6B: mov      eax, dword ptr [esi + 0x6c]
  0x00438C6E: mov      ecx, dword ptr [esi + 0x78]
  0x00438C71: imul     eax, dword ptr [esi + 0x68]
  0x00438C75: add      eax, ecx
  0x00438C77: mov      ecx, dword ptr [esi + 0xac]
  0x00438C7D: mov      byte ptr [ecx + eax], dl
  0x00438C80: mov      ecx, dword ptr [esi + 0x78]
  0x00438C83: jmp      0x438ca9
  0x00438B8B: add      dword ptr [esi + 0x68], 2
  0x00438B8F: mov      edx, dword ptr [esi + 0x68]
  0x00438B92: mov      edi, dword ptr [esi + 0x58]
  0x00438B95: cmp      edx, edi
  0x00438B97: jl       0x438ba7
  0x00438B8F: mov      edx, dword ptr [esi + 0x68]
  0x00438B92: mov      edi, dword ptr [esi + 0x58]
  0x00438B95: cmp      edx, edi
  0x00438B97: jl       0x438ba7
  0x00438F57: mov      eax, dword ptr [esi + 0x7c]
  0x00438F5A: mov      dword ptr [esi + 0x78], 0
  0x00438F61: inc      eax
  0x00438F62: mov      dword ptr [esi + 0x7c], eax
  0x00438F65: mov      eax, dword ptr [esi + 0x7c]
  0x00438F68: mov      ecx, dword ptr [esi + 0x78]
  0x00438F6B: imul     eax, dword ptr [esi + 0x6c]
  0x00438F6F: add      eax, ecx
  0x00438F71: inc      ecx
  0x00438F72: mov      dword ptr [esi + 0x78], ecx
  0x00438F75: mov      ecx, dword ptr [esi + 0x98]
  0x00438F7B: cmp      eax, ecx
  0x00438F7D: jg       0x438f88
  0x00438F65: mov      eax, dword ptr [esi + 0x7c]
  0x00438F68: mov      ecx, dword ptr [esi + 0x78]
  0x00438F6B: imul     eax, dword ptr [esi + 0x6c]
  0x00438F6F: add      eax, ecx
  0x00438F71: inc      ecx
  0x00438F72: mov      dword ptr [esi + 0x78], ecx
  0x00438F75: mov      ecx, dword ptr [esi + 0x98]
  0x00438F7B: cmp      eax, ecx
  0x00438F7D: jg       0x438f88
  0x00438EF3: mov      eax, dword ptr [esi + 0x64]
  0x00438EF6: mov      dword ptr [esi + 0x78], 0
  0x00438EFD: cmp      eax, 1
  0x00438F00: jne      0x438f05
  0x00438F39: mov      eax, dword ptr [esi + 0x6c]
  0x00438F3C: mov      edx, dword ptr [esi + 0x78]
  0x00438F3F: imul     eax, dword ptr [esi + 0x68]
  0x00438F43: mov      ecx, dword ptr [esi + 0xac]
  0x00438F49: add      eax, edx
  0x00438F4B: mov      byte ptr [ecx + eax], bl
  0x00438F4E: mov      ecx, dword ptr [esi + 0x78]
  0x00438F51: jmp      0x438f71
  0x00438EA2: mov      eax, dword ptr [esi + 0x7c]
  0x00438EA5: mov      dword ptr [esi + 0x78], ecx
  0x00438EA8: inc      eax
  0x00438EA9: mov      dword ptr [esi + 0x7c], eax
  0x00438EAC: mov      eax, dword ptr [esi + 0x7c]
  0x00438EAF: mov      ecx, dword ptr [esi + 0x78]
  0x00438EB2: imul     eax, dword ptr [esi + 0x6c]
  0x00438EB6: add      eax, ecx
  0x00438EB8: inc      ecx
  0x00438EB9: mov      dword ptr [esi + 0x78], ecx
  0x00438EBC: mov      ecx, dword ptr [esi + 0x98]
  0x00438EC2: cmp      eax, ecx
  0x00438EC4: jg       0x438ecf
  0x00438EAC: mov      eax, dword ptr [esi + 0x7c]
  0x00438EAF: mov      ecx, dword ptr [esi + 0x78]
  0x00438EB2: imul     eax, dword ptr [esi + 0x6c]
  0x00438EB6: add      eax, ecx
  0x00438EB8: inc      ecx
  0x00438EB9: mov      dword ptr [esi + 0x78], ecx
  0x00438EBC: mov      ecx, dword ptr [esi + 0x98]
  0x00438EC2: cmp      eax, ecx
  0x00438EC4: jg       0x438ecf
  0x00438E43: mov      eax, dword ptr [esi + 0x64]
  0x00438E46: mov      dword ptr [esi + 0x78], ecx
  0x00438E49: cmp      eax, 1
  0x00438E4C: jne      0x438e51
  0x00438E83: mov      eax, dword ptr [esi + 0x6c]
  0x00438E86: mov      ecx, dword ptr [esi + 0x78]
  0x00438E89: imul     eax, dword ptr [esi + 0x68]
  0x00438E8D: add      eax, ecx
  0x00438E8F: mov      ecx, dword ptr [esi + 0xac]
  0x00438E95: mov      byte ptr [ecx + eax], bl
  0x00438E98: mov      ecx, dword ptr [esi + 0x78]
  0x00438E9B: jmp      0x438eb8
  0x00438D9D: add      dword ptr [esi + 0x68], 2
  0x00438DA1: mov      edx, dword ptr [esi + 0x68]
  0x00438DA4: cmp      edx, dword ptr [esi + 0x58]
  0x00438DA7: jl       0x438dbe
  0x00438DA1: mov      edx, dword ptr [esi + 0x68]
  0x00438DA4: cmp      edx, dword ptr [esi + 0x58]
  0x00438DA7: jl       0x438dbe
  0x00438A89: add      dword ptr [esi + 0x68], 2
  0x00438A8D: mov      ecx, dword ptr [esi + 0x68]
  0x00438A90: mov      edx, dword ptr [esi + 0x58]
  0x00438A93: cmp      ecx, edx
  0x00438A95: jl       0x438aa7
  0x00438A8D: mov      ecx, dword ptr [esi + 0x68]
  0x00438A90: mov      edx, dword ptr [esi + 0x58]
  0x00438A93: cmp      ecx, edx
  0x00438A95: jl       0x438aa7
  0x00438CB7: mov      ecx, dword ptr [esi + 0xac]
  0x00438CBD: mov      byte ptr [ecx + eax], dl
  0x00438CC0: mov      ax, word ptr [edi + 4]
  0x00438CC4: test     ax, ax
  0x00438CC7: jne      0x438c05
  0x00438CC0: mov      ax, word ptr [edi + 4]
  0x00438CC4: test     ax, ax
  0x00438CC7: jne      0x438c05
  0x00438C34: add      dword ptr [esi + 0x68], 8
  0x00438C38: cmp      eax, 2
  0x00438C3B: jne      0x438c41
  0x00438C38: cmp      eax, 2
  0x00438C3B: jne      0x438c41
  0x00438CA9: inc      ecx
  0x00438CAA: mov      dword ptr [esi + 0x78], ecx
  0x00438CAD: mov      ecx, dword ptr [esi + 0x98]
  0x00438CB3: cmp      eax, ecx
  0x00438CB5: jg       0x438cc0
  0x00438B99: inc      ecx
  0x00438B9A: mov      edx, 0x10
  0x00438B9F: sar      edx, cl
  0x00438BA1: mov      dword ptr [esi + 0x64], ecx
  0x00438BA4: mov      dword ptr [esi + 0x68], edx
  0x00438BA7: mov      ecx, dword ptr [esi + 0x6c]
  0x00438BAA: mov      edi, dword ptr [esi + 0x78]
  0x00438BAD: imul     ecx, dword ptr [esi + 0x68]
  0x00438BB1: mov      edx, dword ptr [esi + 0xac]
  0x00438BB7: add      ecx, edi
  0x00438BB9: mov      byte ptr [edx + ecx], bl
  0x00438BBC: mov      edx, dword ptr [esi + 0x78]
  0x00438BBF: jmp      0x438be5
  0x00438F7F: mov      ecx, dword ptr [esi + 0xac]
  0x00438F85: mov      byte ptr [ecx + eax], bl
  0x00438F88: mov      edx, dword ptr [esp + 0x18]
  0x00438F8C: mov      cx, word ptr [esp + 0x20]
  0x00438F91: lea      eax, [edx + edx*2]
  0x00438F94: inc      edx
  0x00438F95: mov      dword ptr [esp + 0x18], edx
  0x00438F99: lea      eax, [ebp + eax*2]
  0x00438F9D: mov      byte ptr [eax], bl
  0x00438F9F: mov      word ptr [eax + 2], cx
  0x00438FA3: mov      ecx, dword ptr [esi + 0x40]
  0x00438FA6: mov      eax, 1
  0x00438FAB: shl      eax, cl
  0x00438FAD: cmp      edx, eax
  0x00438FAF: jne      0x438fb5
  0x00438F88: mov      edx, dword ptr [esp + 0x18]
  0x00438F8C: mov      cx, word ptr [esp + 0x20]
  0x00438F91: lea      eax, [edx + edx*2]
  0x00438F94: inc      edx
  0x00438F95: mov      dword ptr [esp + 0x18], edx
  0x00438F99: lea      eax, [ebp + eax*2]
  0x00438F9D: mov      byte ptr [eax], bl
  0x00438F9F: mov      word ptr [eax + 2], cx
  0x00438FA3: mov      ecx, dword ptr [esi + 0x40]
  0x00438FA6: mov      eax, 1
  0x00438FAB: shl      eax, cl
  0x00438FAD: cmp      edx, eax
  0x00438FAF: jne      0x438fb5
  0x00438F02: add      dword ptr [esi + 0x68], edi
  0x00438F05: cmp      eax, 2
  0x00438F08: jne      0x438f0d
  0x00438F05: cmp      eax, 2
  0x00438F08: jne      0x438f0d
  0x00438F71: inc      ecx
  0x00438F72: mov      dword ptr [esi + 0x78], ecx
  0x00438F75: mov      ecx, dword ptr [esi + 0x98]
  0x00438F7B: cmp      eax, ecx
  0x00438F7D: jg       0x438f88
  0x00438EC6: mov      ecx, dword ptr [esi + 0xac]
  0x00438ECC: mov      byte ptr [ecx + eax], bl
  0x00438ECF: mov      ax, word ptr [edx + 4]
  0x00438ED3: xor      ecx, ecx
  0x00438ED5: cmp      ax, cx
  0x00438ED8: jne      0x438e25
  0x00438ECF: mov      ax, word ptr [edx + 4]
  0x00438ED3: xor      ecx, ecx
  0x00438ED5: cmp      ax, cx
  0x00438ED8: jne      0x438e25
  0x00438E4E: add      dword ptr [esi + 0x68], edi
  0x00438E51: cmp      eax, 2
  0x00438E54: jne      0x438e59
  0x00438E51: cmp      eax, 2
  0x00438E54: jne      0x438e59
  0x00438EB8: inc      ecx
  0x00438EB9: mov      dword ptr [esi + 0x78], ecx
  0x00438EBC: mov      ecx, dword ptr [esi + 0x98]
  0x00438EC2: cmp      eax, ecx
  0x00438EC4: jg       0x438ecf
  0x00438DBE: mov      ecx, dword ptr [esi + 0x6c]
  0x00438DC1: mov      edx, dword ptr [esi + 0x78]
  0x00438DC4: imul     ecx, dword ptr [esi + 0x68]
  0x00438DC8: add      ecx, edx
  0x00438DCA: mov      edx, dword ptr [esi + 0xac]
  0x00438DD0: mov      byte ptr [edx + ecx], bl
  0x00438DD3: mov      edx, dword ptr [esi + 0x78]
  0x00438DD6: inc      edx
  0x00438DD7: mov      dword ptr [esi + 0x78], edx
  0x00438DDA: jmp      0x438e09
  0x00438DA9: inc      ecx
  0x00438DAA: mov      edx, 0x10
  0x00438DAF: sar      edx, cl
  0x00438DB1: mov      dword ptr [esi + 0x64], ecx
  0x00438DB4: mov      dword ptr [esi + 0x68], edx
  0x00438DB7: jmp      0x438dbe
  0x00438A97: lea      ecx, [eax + 1]
  0x00438A9A: mov      edx, 0x10
  0x00438A9F: sar      edx, cl
  0x00438AA1: mov      dword ptr [esi + 0x64], ecx
  0x00438AA4: mov      dword ptr [esi + 0x68], edx
  0x00438AA7: mov      eax, dword ptr [esi + 0x6c]
  0x00438AAA: mov      edx, dword ptr [esi + 0x78]
  0x00438AAD: imul     eax, dword ptr [esi + 0x68]
  0x00438AB1: mov      ecx, dword ptr [esi + 0xac]
  0x00438AB7: add      eax, edx
  0x00438AB9: mov      byte ptr [ecx + eax], bl
  0x00438ABC: mov      ecx, dword ptr [esi + 0x78]
  0x00438ABF: jmp      0x438ae5
  0x00438C3D: add      dword ptr [esi + 0x68], 8
  0x00438C41: cmp      eax, 3
  0x00438C44: jne      0x438c4a
  0x00438C41: cmp      eax, 3
  0x00438C44: jne      0x438c4a
  0x00438FB1: inc      ecx
  0x00438FB2: mov      dword ptr [esi + 0x40], ecx
  0x00438FB5: mov      ecx, dword ptr [esi + 0x40]
  0x00438FB8: mov      eax, 0xc
  0x00438FBD: cmp      ecx, eax
  0x00438FBF: jbe      0x438d09
  0x00438FB5: mov      ecx, dword ptr [esi + 0x40]
  0x00438FB8: mov      eax, 0xc
  0x00438FBD: cmp      ecx, eax
  0x00438FBF: jbe      0x438d09
  0x00438F0A: add      dword ptr [esi + 0x68], edi
  0x00438F0D: cmp      eax, 3
  0x00438F10: jne      0x438f16
  0x00438F0D: cmp      eax, 3
  0x00438F10: jne      0x438f16
  0x00438EDE: mov      ebx, dword ptr [esp + 0x34]
  0x00438EE2: mov      al, byte ptr [esi + 0x3d]
  0x00438EE5: mov      edx, dword ptr [esi + 0x78]
  0x00438EE8: test     al, 0x40
  0x00438EEA: mov      eax, dword ptr [esi + 0x54]
  0x00438EED: je       0x438f53
  0x00438E25: and      eax, 0xffff
  0x00438E2A: lea      eax, [eax + eax*2]
  0x00438E2D: mov      bl, byte ptr [ebp + eax*2]
  0x00438E31: lea      edx, [ebp + eax*2]
  0x00438E35: test     byte ptr [esi + 0x3d], 0x40
  0x00438E39: mov      eax, dword ptr [esi + 0x78]
  0x00438E3C: je       0x438e9d
  0x00438E56: add      dword ptr [esi + 0x68], edi
  0x00438E59: cmp      eax, 3
  0x00438E5C: jne      0x438e62
  0x00438E59: cmp      eax, 3
  0x00438E5C: jne      0x438e62
  0x00438C46: add      dword ptr [esi + 0x68], 4
  0x00438C4A: cmp      eax, 4
  0x00438C4D: jne      0x438c53
  0x00438C4A: cmp      eax, 4
  0x00438C4D: jne      0x438c53
  0x00438FC5: mov      ecx, dword ptr [esp + 0x38]
  0x00438FC9: mov      dword ptr [esi + 0x40], eax
  0x00438FCC: mov      dword ptr [esp + 0x20], ecx
  0x00438FD0: jmp      0x4386b4
  0x00438F12: add      dword ptr [esi + 0x68], 4
  0x00438F16: cmp      eax, 4
  0x00438F19: jne      0x438f1f
  0x00438F16: cmp      eax, 4
  0x00438F19: jne      0x438f1f
  0x00438E5E: add      dword ptr [esi + 0x68], 4
  0x00438E62: cmp      eax, 4
  0x00438E65: jne      0x438e6b
  0x00438E62: cmp      eax, 4
  0x00438E65: jne      0x438e6b
  0x00438C4F: add      dword ptr [esi + 0x68], 2
  0x00438C53: mov      ecx, dword ptr [esi + 0x68]
  0x00438C56: cmp      ecx, dword ptr [esi + 0x58]
  0x00438C59: jl       0x438c6b
  0x00438C53: mov      ecx, dword ptr [esi + 0x68]
  0x00438C56: cmp      ecx, dword ptr [esi + 0x58]
  0x00438C59: jl       0x438c6b
  0x00438F1B: add      dword ptr [esi + 0x68], 2
  0x00438F1F: mov      ecx, dword ptr [esi + 0x68]
  0x00438F22: mov      edx, dword ptr [esi + 0x58]
  0x00438F25: cmp      ecx, edx
  0x00438F27: jl       0x438f39
  0x00438F1F: mov      ecx, dword ptr [esi + 0x68]
  0x00438F22: mov      edx, dword ptr [esi + 0x58]
  0x00438F25: cmp      ecx, edx
  0x00438F27: jl       0x438f39
  0x00438E67: add      dword ptr [esi + 0x68], 2
  0x00438E6B: mov      ecx, dword ptr [esi + 0x68]
  0x00438E6E: cmp      ecx, dword ptr [esi + 0x58]
  0x00438E71: jl       0x438e83
  0x00438E6B: mov      ecx, dword ptr [esi + 0x68]
  0x00438E6E: cmp      ecx, dword ptr [esi + 0x58]
  0x00438E71: jl       0x438e83
  0x00438C5B: lea      ecx, [eax + 1]
  0x00438C5E: mov      eax, 0x10
  0x00438C63: sar      eax, cl
  0x00438C65: mov      dword ptr [esi + 0x64], ecx
  0x00438C68: mov      dword ptr [esi + 0x68], eax
  0x00438C6B: mov      eax, dword ptr [esi + 0x6c]
  0x00438C6E: mov      ecx, dword ptr [esi + 0x78]
  0x00438C71: imul     eax, dword ptr [esi + 0x68]
  0x00438C75: add      eax, ecx
  0x00438C77: mov      ecx, dword ptr [esi + 0xac]
  0x00438C7D: mov      byte ptr [ecx + eax], dl
  0x00438C80: mov      ecx, dword ptr [esi + 0x78]
  0x00438C83: jmp      0x438ca9
  0x00438F29: lea      ecx, [eax + 1]
  0x00438F2C: mov      edx, 0x10
  0x00438F31: sar      edx, cl
  0x00438F33: mov      dword ptr [esi + 0x64], ecx
  0x00438F36: mov      dword ptr [esi + 0x68], edx
  0x00438F39: mov      eax, dword ptr [esi + 0x6c]
  0x00438F3C: mov      edx, dword ptr [esi + 0x78]
  0x00438F3F: imul     eax, dword ptr [esi + 0x68]
  0x00438F43: mov      ecx, dword ptr [esi + 0xac]
  0x00438F49: add      eax, edx
  0x00438F4B: mov      byte ptr [ecx + eax], bl
  0x00438F4E: mov      ecx, dword ptr [esi + 0x78]
  0x00438F51: jmp      0x438f71
  0x00438E73: lea      ecx, [eax + 1]
  0x00438E76: mov      eax, 0x10
  0x00438E7B: sar      eax, cl
  0x00438E7D: mov      dword ptr [esi + 0x64], ecx
  0x00438E80: mov      dword ptr [esi + 0x68], eax
  0x00438E83: mov      eax, dword ptr [esi + 0x6c]
  0x00438E86: mov      ecx, dword ptr [esi + 0x78]
  0x00438E89: imul     eax, dword ptr [esi + 0x68]
  0x00438E8D: add      eax, ecx
  0x00438E8F: mov      ecx, dword ptr [esi + 0xac]
  0x00438E95: mov      byte ptr [ecx + eax], bl
  0x00438E98: mov      ecx, dword ptr [esi + 0x78]
  0x00438E9B: jmp      0x438eb8

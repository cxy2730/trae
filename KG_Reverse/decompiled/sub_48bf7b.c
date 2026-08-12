
/*
 * ============================================================
 * KG.exe 反编译分析 - sub_48bf7b
 * ============================================================
 *
 * 函数地址: 0x0048BF7B
 * 基本块数: 223
 * 指令数:   785
 * 复杂度:   高复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_48bf7b(void) {

  /* 代码块 1 @ 0x0048BF7B */
  // 保存寄存器 ebp
  // mov ebp, esp
  // 分配 0x24c 字节栈空间
  // 保存寄存器 ebx
  // 保存寄存器 esi
  // mov esi, dword ptr [ebp + 0xc]
  // ecx 清零
  // 保存寄存器 edi
  // mov dword ptr [ebp - 0x10], ecx
  // mov bl, byte ptr [esi]
  // inc esi
  // TEST bl, bl (set flags)
  // mov dword ptr [ebp - 0x14], ecx
  // mov dword ptr [ebp - 0x30], ecx
  // mov dword ptr [ebp + 0xc], esi
  // 如果相等则跳转到 0x48c6f1
  /* 代码块 2 @ 0x0048C6F1 */
  // 读取全局变量值 [ebp - 0x14]
  // 恢复寄存器 edi
  // 恢复寄存器 esi
  // 恢复寄存器 ebx
  // leave 
  return;
  /* 代码块 3 @ 0x0048BFA3 */
  // mov edi, 0x800
  // mov edx, 0x200
  goto 0x48bfbc;
  /* 代码块 4 @ 0x0048BFBC */
  // CMP dword ptr [ebp - 0x14], 0 (set flags)
  // if (less) goto 0x48c6f1
  /* 代码块 5 @ 0x0048BFC6 */
  // CMP bl, 0x20 (set flags)
  // if (less) goto 0x48bfde
  /* 代码块 6 @ 0x0048BFDE */
  // eax 清零（准备返回值）
  // movsx eax, byte ptr [ecx + eax*8 + 0x2f9d118]
  // sar eax, 4
  // CMP eax, 7 (set flags)
  // mov dword ptr [ebp - 0x3c], eax
  // if (above) goto 0x48c6e0
  /* 代码块 7 @ 0x0048BFCB */
  // CMP bl, 0x78 (set flags)
  // if (greater) goto 0x48bfde
  /* 代码块 8 @ 0x0048BFF7 */
  goto dword ptr [eax*4 + 0x48c6f9];
  /* 代码块 9 @ 0x0048C6E0 */
  // mov esi, dword ptr [ebp + 0xc]
  // mov bl, byte ptr [esi]
  // inc esi
  // TEST bl, bl (set flags)
  // mov dword ptr [ebp + 0xc], esi
  // 如果不相等则跳转到 0x48bfaf
  /* 代码块 10 @ 0x0048BFD0 */
  // movsx eax, bl
  // mov al, byte ptr [eax + 0x2f9d0f8]
  // and eax, 0xf
  goto 0x48bfe0;
  /* 代码块 11 @ 0x0048C067 */
  // CMP bl, 0x2a (set flags)
  // 如果不相等则跳转到 0x48c08f
  /* 代码块 12 @ 0x0048C01B */
  // movsx eax, bl
  // sub eax, 0x20
  // 如果相等则跳转到 0x48c05e
  /* 代码块 13 @ 0x0048C0A7 */
  // CMP bl, 0x2a (set flags)
  // 如果不相等则跳转到 0x48c0ca
  /* 代码块 14 @ 0x0048C12E */
  // mov ecx, dword ptr [0x2fd98b4]
  // and dword ptr [ebp - 0x2c], 0
  // movzx eax, bl
  // TEST byte ptr [ecx + eax*2 + 1], 0x80 (set flags)
  // 如果相等则跳转到 0x48c15b
  /* 代码块 15 @ 0x0048C173 */
  // movsx eax, bl
  // CMP eax, 0x67 (set flags)
  // if (greater) goto 0x48c3b7
  /* 代码块 16 @ 0x0048C09E */
  // and dword ptr [ebp - 8], 0
  goto 0x48c6e0;
  /* 代码块 17 @ 0x0048BFFE */
  // eax 清零（准备返回值）
  // or dword ptr [ebp - 8], 0xffffffff
  // mov dword ptr [ebp - 0x40], eax
  // mov dword ptr [ebp - 0x38], eax
  // mov dword ptr [ebp - 0x28], eax
  // mov dword ptr [ebp - 0x24], eax
  // mov dword ptr [ebp - 4], eax
  // mov dword ptr [ebp - 0x2c], eax
  goto 0x48c6e0;
  /* 代码块 18 @ 0x0048C0DF */
  // CMP bl, 0x49 (set flags)
  // 如果相等则跳转到 0x48c111
  /* 代码块 19 @ 0x0048BFAF */
  // mov ecx, dword ptr [ebp - 0x3c]
  // mov edx, 0x200
  // mov edi, 0x800
  // CMP dword ptr [ebp - 0x14], 0 (set flags)
  // if (less) goto 0x48c6f1
  // movsx eax, byte ptr [ecx + eax*8 + 0x2f9d118]
  // sar eax, 4
  // CMP eax, 7 (set flags)
  // mov dword ptr [ebp - 0x3c], eax
  // if (above) goto 0x48c6e0
  /* 代码块 20 @ 0x0048C06C */
  // lea eax, [ebp + 0x10]
  // 保存寄存器 eax
  // 直接调用函数 0x0048C7B7
  call(0x0048C7B7);
  /* 代码块 21 @ 0x0048C08F */
  // 读取全局变量值 [ebp - 0x28]
  // movsx ecx, bl
  // lea eax, [eax + eax*4]
  // lea eax, [ecx + eax*2 - 0x30]
  goto 0x48c087;
  /* 代码块 22 @ 0x0048C05E */
  // or dword ptr [ebp - 4], 2
  goto 0x48c6e0;
  /* 代码块 23 @ 0x0048C023 */
  // sub eax, 3
  // 如果相等则跳转到 0x48c055
  /* 代码块 24 @ 0x0048C0AC */
  // lea eax, [ebp + 0x10]
  // 保存寄存器 eax
  // 直接调用函数 0x0048C7B7
  call(0x0048C7B7);
  /* 代码块 25 @ 0x0048C0CA */
  // 读取全局变量值 [ebp - 8]
  // movsx ecx, bl
  // lea eax, [eax + eax*4]
  // lea eax, [ecx + eax*2 - 0x30]
  // mov dword ptr [ebp - 8], eax
  goto 0x48c6e0;
  /* 代码块 26 @ 0x0048C15B */
  // lea eax, [ebp - 0x14]
  // 保存寄存器 eax
  // 保存寄存器 dword ptr [ebp + 8]
  // movsx eax, bl
  // 保存寄存器 eax
  // 直接调用函数 0x0048C719
  call(0x0048C719);
  /* 代码块 27 @ 0x0048C142 */
  // lea eax, [ebp - 0x14]
  // 保存寄存器 eax
  // 保存寄存器 dword ptr [ebp + 8]
  // movsx eax, bl
  // 保存寄存器 eax
  // 直接调用函数 0x0048C719
  call(0x0048C719);
  /* 代码块 28 @ 0x0048C17F */
  // CMP eax, 0x65 (set flags)
  // if (greater or equal) goto 0x48c21e
  /* 代码块 29 @ 0x0048C3B7 */
  // sub eax, 0x69
  // 如果相等则跳转到 0x48c490
  /* 代码块 30 @ 0x0048C111 */
  // CMP byte ptr [esi], 0x36 (set flags)
  // 如果不相等则跳转到 0x48c12a
  /* 代码块 31 @ 0x0048C0E4 */
  // CMP bl, 0x68 (set flags)
  // 如果相等则跳转到 0x48c108
  /* 代码块 32 @ 0x0048C075 */
  // 测试 eax 是否为零（设置标志位）
  // 恢复寄存器 ecx
  // mov dword ptr [ebp - 0x28], eax
  // if (greater or equal) goto 0x48c6e0
  /* 代码块 33 @ 0x0048C087 */
  // mov dword ptr [ebp - 0x28], eax
  goto 0x48c6e0;
  /* 代码块 34 @ 0x0048C055 */
  // or byte ptr [ebp - 4], 0x80
  goto 0x48c6e0;
  /* 代码块 35 @ 0x0048C028 */
  // sub eax, 8
  // 如果相等则跳转到 0x48c04c
  /* 代码块 36 @ 0x0048C0B5 */
  // 测试 eax 是否为零（设置标志位）
  // 恢复寄存器 ecx
  // mov dword ptr [ebp - 8], eax
  // if (greater or equal) goto 0x48c6e0
  /* 代码块 37 @ 0x0048C16B */
  // 释放 0xc 字节栈空间
  goto 0x48c6e0;
  /* 代码块 38 @ 0x0048C152 */
  // mov bl, byte ptr [esi]
  // 释放 0xc 字节栈空间
  // inc esi
  // mov dword ptr [ebp + 0xc], esi
  // lea eax, [ebp - 0x14]
  // 保存寄存器 eax
  // 保存寄存器 dword ptr [ebp + 8]
  // movsx eax, bl
  // 保存寄存器 eax
  // 直接调用函数 0x0048C719
  call(0x0048C719);
  /* 代码块 39 @ 0x0048C188 */
  // CMP eax, 0x58 (set flags)
  // if (greater) goto 0x48c27d
  /* 代码块 40 @ 0x0048C21E */
  // or dword ptr [ebp - 4], 0x40
  // CMP dword ptr [ebp - 8], 0 (set flags)
  // lea edi, [ebp - 0x24c]
  // mov dword ptr [ebp - 0xc], edi
  // if (greater or equal) goto 0x48c302
  /* 代码块 41 @ 0x0048C490 */
  // or dword ptr [ebp - 4], 0x40
  // mov dword ptr [ebp - 0x10], 0xa
  // TEST byte ptr [ebp - 3], 0x80 (set flags)
  // 如果相等则跳转到 0x48c4ad
  /* 代码块 42 @ 0x0048C3C0 */
  // sub eax, 5
  // 如果相等则跳转到 0x48c466
  /* 代码块 43 @ 0x0048C116 */
  // CMP byte ptr [esi + 1], 0x34 (set flags)
  // 如果不相等则跳转到 0x48c12a
  /* 代码块 44 @ 0x0048C12A */
  // and dword ptr [ebp - 0x3c], 0
  // mov ecx, dword ptr [0x2fd98b4]
  // and dword ptr [ebp - 0x2c], 0
  // movzx eax, bl
  // TEST byte ptr [ecx + eax*2 + 1], 0x80 (set flags)
  // 如果相等则跳转到 0x48c15b
  /* 代码块 45 @ 0x0048C108 */
  // or dword ptr [ebp - 4], 0x20
  goto 0x48c6e0;
  /* 代码块 46 @ 0x0048C0E9 */
  // CMP bl, 0x6c (set flags)
  // 如果相等则跳转到 0x48c0ff
  /* 代码块 47 @ 0x0048C081 */
  // or dword ptr [ebp - 4], 4
  // mov dword ptr [ebp - 0x28], eax
  goto 0x48c6e0;
  /* 代码块 48 @ 0x0048C04C */
  // or dword ptr [ebp - 4], 1
  goto 0x48c6e0;
  /* 代码块 49 @ 0x0048C02D */
  // dec eax
  // dec eax
  // 如果相等则跳转到 0x48c043
  /* 代码块 50 @ 0x0048C0C1 */
  // or dword ptr [ebp - 8], 0xffffffff
  goto 0x48c6e0;
  /* 代码块 51 @ 0x0048C191 */
  // 如果相等则跳转到 0x48c42b
  /* 代码块 52 @ 0x0048C27D */
  // sub eax, 0x5a
  // 如果相等则跳转到 0x48c2b4
  /* 代码块 53 @ 0x0048C235 */
  // mov dword ptr [ebp - 8], 6
  goto 0x48c347;
  /* 代码块 54 @ 0x0048C302 */
  // 如果不相等则跳转到 0x48c312
  /* 代码块 55 @ 0x0048C4AD */
  // TEST byte ptr [ebp - 4], 0x20 (set flags)
  // 如果相等则跳转到 0x48c4d4
  /* 代码块 56 @ 0x0048C4A1 */
  // lea eax, [ebp + 0x10]
  // 保存寄存器 eax
  // 直接调用函数 0x0048C7C4
  call(0x0048C7C4);
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0048BF7B: push     ebp
  0x0048BF7C: mov      ebp, esp
  0x0048BF7E: sub      esp, 0x24c
  0x0048BF84: push     ebx
  0x0048BF85: push     esi
  0x0048BF86: mov      esi, dword ptr [ebp + 0xc]
  0x0048BF89: xor      ecx, ecx
  0x0048BF8B: push     edi
  0x0048BF8C: mov      dword ptr [ebp - 0x10], ecx
  0x0048BF8F: mov      bl, byte ptr [esi]
  0x0048BF91: inc      esi
  0x0048BF92: test     bl, bl
  0x0048BF94: mov      dword ptr [ebp - 0x14], ecx
  0x0048BF97: mov      dword ptr [ebp - 0x30], ecx
  0x0048BF9A: mov      dword ptr [ebp + 0xc], esi
  0x0048BF9D: je       0x48c6f1
  0x0048C6F1: mov      eax, dword ptr [ebp - 0x14]
  0x0048C6F4: pop      edi
  0x0048C6F5: pop      esi
  0x0048C6F6: pop      ebx
  0x0048C6F7: leave    
  0x0048C6F8: ret      
  0x0048BFA3: mov      edi, 0x800
  0x0048BFA8: mov      edx, 0x200
  0x0048BFAD: jmp      0x48bfbc
  0x0048BFBC: cmp      dword ptr [ebp - 0x14], 0
  0x0048BFC0: jl       0x48c6f1
  0x0048BFC6: cmp      bl, 0x20
  0x0048BFC9: jl       0x48bfde
  0x0048BFDE: xor      eax, eax
  0x0048BFE0: movsx    eax, byte ptr [ecx + eax*8 + 0x2f9d118]
  0x0048BFE8: sar      eax, 4
  0x0048BFEB: cmp      eax, 7
  0x0048BFEE: mov      dword ptr [ebp - 0x3c], eax
  0x0048BFF1: ja       0x48c6e0
  0x0048BFCB: cmp      bl, 0x78
  0x0048BFCE: jg       0x48bfde
  0x0048BFF7: jmp      dword ptr [eax*4 + 0x48c6f9]
  0x0048C6E0: mov      esi, dword ptr [ebp + 0xc]
  0x0048C6E3: mov      bl, byte ptr [esi]
  0x0048C6E5: inc      esi
  0x0048C6E6: test     bl, bl
  0x0048C6E8: mov      dword ptr [ebp + 0xc], esi
  0x0048C6EB: jne      0x48bfaf
  0x0048BFD0: movsx    eax, bl
  0x0048BFD3: mov      al, byte ptr [eax + 0x2f9d0f8]
  0x0048BFD9: and      eax, 0xf
  0x0048BFDC: jmp      0x48bfe0
  0x0048C067: cmp      bl, 0x2a
  0x0048C06A: jne      0x48c08f
  0x0048C01B: movsx    eax, bl
  0x0048C01E: sub      eax, 0x20
  0x0048C021: je       0x48c05e
  0x0048C0A7: cmp      bl, 0x2a
  0x0048C0AA: jne      0x48c0ca
  0x0048C12E: mov      ecx, dword ptr [0x2fd98b4]
  0x0048C134: and      dword ptr [ebp - 0x2c], 0
  0x0048C138: movzx    eax, bl
  0x0048C13B: test     byte ptr [ecx + eax*2 + 1], 0x80
  0x0048C140: je       0x48c15b
  0x0048C173: movsx    eax, bl
  0x0048C176: cmp      eax, 0x67
  0x0048C179: jg       0x48c3b7
  0x0048C09E: and      dword ptr [ebp - 8], 0
  0x0048C0A2: jmp      0x48c6e0
  0x0048BFFE: xor      eax, eax
  0x0048C000: or       dword ptr [ebp - 8], 0xffffffff
  0x0048C004: mov      dword ptr [ebp - 0x40], eax
  0x0048C007: mov      dword ptr [ebp - 0x38], eax
  0x0048C00A: mov      dword ptr [ebp - 0x28], eax
  0x0048C00D: mov      dword ptr [ebp - 0x24], eax
  0x0048C010: mov      dword ptr [ebp - 4], eax
  0x0048C013: mov      dword ptr [ebp - 0x2c], eax
  0x0048C016: jmp      0x48c6e0
  0x0048C0DF: cmp      bl, 0x49
  0x0048C0E2: je       0x48c111
  0x0048BFAF: mov      ecx, dword ptr [ebp - 0x3c]
  0x0048BFB2: mov      edx, 0x200
  0x0048BFB7: mov      edi, 0x800
  0x0048BFBC: cmp      dword ptr [ebp - 0x14], 0
  0x0048BFC0: jl       0x48c6f1
  0x0048BFE0: movsx    eax, byte ptr [ecx + eax*8 + 0x2f9d118]
  0x0048BFE8: sar      eax, 4
  0x0048BFEB: cmp      eax, 7
  0x0048BFEE: mov      dword ptr [ebp - 0x3c], eax
  0x0048BFF1: ja       0x48c6e0
  0x0048C06C: lea      eax, [ebp + 0x10]
  0x0048C06F: push     eax
  0x0048C070: call     0x48c7b7
  0x0048C08F: mov      eax, dword ptr [ebp - 0x28]
  0x0048C092: movsx    ecx, bl
  0x0048C095: lea      eax, [eax + eax*4]
  0x0048C098: lea      eax, [ecx + eax*2 - 0x30]
  0x0048C09C: jmp      0x48c087
  0x0048C05E: or       dword ptr [ebp - 4], 2
  0x0048C062: jmp      0x48c6e0
  0x0048C023: sub      eax, 3
  0x0048C026: je       0x48c055
  0x0048C0AC: lea      eax, [ebp + 0x10]
  0x0048C0AF: push     eax
  0x0048C0B0: call     0x48c7b7
  0x0048C0CA: mov      eax, dword ptr [ebp - 8]
  0x0048C0CD: movsx    ecx, bl
  0x0048C0D0: lea      eax, [eax + eax*4]
  0x0048C0D3: lea      eax, [ecx + eax*2 - 0x30]
  0x0048C0D7: mov      dword ptr [ebp - 8], eax
  0x0048C0DA: jmp      0x48c6e0
  0x0048C15B: lea      eax, [ebp - 0x14]
  0x0048C15E: push     eax
  0x0048C15F: push     dword ptr [ebp + 8]
  0x0048C162: movsx    eax, bl
  0x0048C165: push     eax
  0x0048C166: call     0x48c719
  0x0048C142: lea      eax, [ebp - 0x14]
  0x0048C145: push     eax
  0x0048C146: push     dword ptr [ebp + 8]
  0x0048C149: movsx    eax, bl
  0x0048C14C: push     eax
  0x0048C14D: call     0x48c719
  0x0048C17F: cmp      eax, 0x65
  0x0048C182: jge      0x48c21e
  0x0048C3B7: sub      eax, 0x69
  0x0048C3BA: je       0x48c490
  0x0048C111: cmp      byte ptr [esi], 0x36
  0x0048C114: jne      0x48c12a
  0x0048C0E4: cmp      bl, 0x68
  0x0048C0E7: je       0x48c108
  0x0048C075: test     eax, eax
  0x0048C077: pop      ecx
  0x0048C078: mov      dword ptr [ebp - 0x28], eax
  0x0048C07B: jge      0x48c6e0
  0x0048C087: mov      dword ptr [ebp - 0x28], eax
  0x0048C08A: jmp      0x48c6e0
  0x0048C055: or       byte ptr [ebp - 4], 0x80
  0x0048C059: jmp      0x48c6e0
  0x0048C028: sub      eax, 8
  0x0048C02B: je       0x48c04c
  0x0048C0B5: test     eax, eax
  0x0048C0B7: pop      ecx
  0x0048C0B8: mov      dword ptr [ebp - 8], eax
  0x0048C0BB: jge      0x48c6e0
  0x0048C16B: add      esp, 0xc
  0x0048C16E: jmp      0x48c6e0
  0x0048C152: mov      bl, byte ptr [esi]
  0x0048C154: add      esp, 0xc
  0x0048C157: inc      esi
  0x0048C158: mov      dword ptr [ebp + 0xc], esi
  0x0048C15B: lea      eax, [ebp - 0x14]
  0x0048C15E: push     eax
  0x0048C15F: push     dword ptr [ebp + 8]
  0x0048C162: movsx    eax, bl
  0x0048C165: push     eax
  0x0048C166: call     0x48c719
  0x0048C188: cmp      eax, 0x58
  0x0048C18B: jg       0x48c27d
  0x0048C21E: or       dword ptr [ebp - 4], 0x40
  0x0048C222: cmp      dword ptr [ebp - 8], 0
  0x0048C226: lea      edi, [ebp - 0x24c]
  0x0048C22C: mov      dword ptr [ebp - 0xc], edi
  0x0048C22F: jge      0x48c302
  0x0048C490: or       dword ptr [ebp - 4], 0x40
  0x0048C494: mov      dword ptr [ebp - 0x10], 0xa
  0x0048C49B: test     byte ptr [ebp - 3], 0x80
  0x0048C49F: je       0x48c4ad
  0x0048C3C0: sub      eax, 5
  0x0048C3C3: je       0x48c466
  0x0048C116: cmp      byte ptr [esi + 1], 0x34
  0x0048C11A: jne      0x48c12a
  0x0048C12A: and      dword ptr [ebp - 0x3c], 0
  0x0048C12E: mov      ecx, dword ptr [0x2fd98b4]
  0x0048C134: and      dword ptr [ebp - 0x2c], 0
  0x0048C138: movzx    eax, bl
  0x0048C13B: test     byte ptr [ecx + eax*2 + 1], 0x80
  0x0048C140: je       0x48c15b
  0x0048C108: or       dword ptr [ebp - 4], 0x20
  0x0048C10C: jmp      0x48c6e0
  0x0048C0E9: cmp      bl, 0x6c
  0x0048C0EC: je       0x48c0ff
  0x0048C081: or       dword ptr [ebp - 4], 4
  0x0048C085: neg      eax
  0x0048C087: mov      dword ptr [ebp - 0x28], eax
  0x0048C08A: jmp      0x48c6e0
  0x0048C04C: or       dword ptr [ebp - 4], 1
  0x0048C050: jmp      0x48c6e0
  0x0048C02D: dec      eax
  0x0048C02E: dec      eax
  0x0048C02F: je       0x48c043
  0x0048C0C1: or       dword ptr [ebp - 8], 0xffffffff
  0x0048C0C5: jmp      0x48c6e0
  0x0048C191: je       0x48c42b
  0x0048C27D: sub      eax, 0x5a
  0x0048C280: je       0x48c2b4
  0x0048C235: mov      dword ptr [ebp - 8], 6
  0x0048C23C: jmp      0x48c347
  0x0048C302: jne      0x48c312
  0x0048C4AD: test     byte ptr [ebp - 4], 0x20
  0x0048C4B1: je       0x48c4d4
  0x0048C4A1: lea      eax, [ebp + 0x10]
  0x0048C4A4: push     eax
  0x0048C4A5: call     0x48c7c4
  0x0048C466: lea      eax, [ebp + 0x10]
  0x0048C469: push     eax
  0x0048C46A: call     0x48c7b7
  0x0048C3C9: dec      eax
  0x0048C3CA: je       0x48c454
  0x0048C11C: inc      esi
  0x0048C11D: inc      esi
  0x0048C11E: or       byte ptr [ebp - 3], 0x80
  0x0048C122: mov      dword ptr [ebp + 0xc], esi
  0x0048C125: jmp      0x48c6e0
  0x0048C0FF: or       dword ptr [ebp - 4], 0x10
  0x0048C103: jmp      0x48c6e0
  0x0048C0EE: cmp      bl, 0x77
  0x0048C0F1: jne      0x48c6e0
  0x0048C043: or       dword ptr [ebp - 4], 4
  0x0048C047: jmp      0x48c6e0
  0x0048C031: sub      eax, 3
  0x0048C034: jne      0x48c6e0
  0x0048C42B: mov      dword ptr [ebp - 0x34], 7
  0x0048C432: test     byte ptr [ebp - 4], 0x80
  0x0048C436: mov      dword ptr [ebp - 0x10], 0x10
  0x0048C43D: je       0x48c49b
  0x0048C197: sub      eax, 0x43
  0x0048C19A: je       0x48c241
  0x0048C2B4: lea      eax, [ebp + 0x10]
  0x0048C2B7: push     eax
  0x0048C2B8: call     0x48c7b7
  0x0048C282: sub      eax, 9
  0x0048C285: je       0x48c24c
  0x0048C347: mov      eax, dword ptr [ebp + 0x10]
  0x0048C34A: push     dword ptr [ebp - 0x40]
  0x0048C34D: add      eax, 8
  0x0048C350: mov      dword ptr [ebp + 0x10], eax
  0x0048C353: push     dword ptr [ebp - 8]
  0x0048C356: mov      ecx, dword ptr [eax - 8]
  0x0048C359: mov      dword ptr [ebp - 0x4c], ecx
  0x0048C35C: mov      eax, dword ptr [eax - 4]
  0x0048C35F: mov      dword ptr [ebp - 0x48], eax
  0x0048C362: movsx    eax, bl
  0x0048C365: push     eax
  0x0048C366: lea      eax, [ebp - 0x4c]
  0x0048C369: push     edi
  0x0048C36A: push     eax
  0x0048C36B: call     dword ptr [0x2fd94b8]
  0x0048C304: cmp      bl, 0x67
  0x0048C307: jne      0x48c347
  0x0048C312: cmp      dword ptr [ebp - 8], edx
  0x0048C315: jle      0x48c31a
  0x0048C4D4: test     byte ptr [ebp - 4], 0x40
  0x0048C4D8: lea      eax, [ebp + 0x10]
  0x0048C4DB: push     eax
  0x0048C4DC: je       0x48c4e6
  0x0048C4B3: test     byte ptr [ebp - 4], 0x40
  0x0048C4B7: lea      eax, [ebp + 0x10]
  0x0048C4BA: push     eax
  0x0048C4BB: je       0x48c4c9
  0x0048C4AA: pop      ecx
  0x0048C4AB: jmp      0x48c4ee
  0x0048C46F: test     byte ptr [ebp - 4], 0x20
  0x0048C473: pop      ecx
  0x0048C474: je       0x48c47f
  0x0048C454: test     byte ptr [ebp - 4], 0x80
  0x0048C458: mov      dword ptr [ebp - 0x10], 8
  0x0048C45F: je       0x48c49b
  0x0048C3D0: dec      eax
  0x0048C3D1: je       0x48c424
  0x0048C0F7: or       dword ptr [ebp - 4], edi
  0x0048C0FA: jmp      0x48c6e0
  0x0048C03A: or       dword ptr [ebp - 4], 8
  0x0048C03E: jmp      0x48c6e0
  0x0048C49B: test     byte ptr [ebp - 3], 0x80
  0x0048C49F: je       0x48c4ad
  0x0048C43F: mov      al, byte ptr [ebp - 0x34]
  0x0048C442: mov      byte ptr [ebp - 0x16], 0x30
  0x0048C446: add      al, 0x51
  0x0048C448: mov      dword ptr [ebp - 0x24], 2
  0x0048C44F: mov      byte ptr [ebp - 0x15], al
  0x0048C452: jmp      0x48c49b
  0x0048C241: test     word ptr [ebp - 4], 0x830
  0x0048C247: jne      0x48c24c
  0x0048C1A0: dec      eax
  0x0048C1A1: dec      eax
  0x0048C1A2: je       0x48c214
  0x0048C2BD: test     eax, eax
  0x0048C2BF: pop      ecx
  0x0048C2C0: je       0x48c2f4
  0x0048C24C: test     word ptr [ebp - 4], 0x810
  0x0048C252: lea      eax, [ebp + 0x10]
  0x0048C255: push     eax
  0x0048C256: je       0x48c293
  0x0048C287: dec      eax
  0x0048C288: je       0x48c490
  0x0048C371: mov      esi, dword ptr [ebp - 4]
  0x0048C374: add      esp, 0x14
  0x0048C377: and      esi, 0x80
  0x0048C37D: je       0x48c38d
  0x0048C309: mov      dword ptr [ebp - 8], 1
  0x0048C310: jmp      0x48c347
  0x0048C31A: cmp      dword ptr [ebp - 8], 0xa3
  0x0048C321: jle      0x48c347
  0x0048C317: mov      dword ptr [ebp - 8], edx
  0x0048C31A: cmp      dword ptr [ebp - 8], 0xa3
  0x0048C321: jle      0x48c347
  0x0048C4E6: call     0x48c7b7
  0x0048C4DE: call     0x48c7b7
  0x0048C4C9: call     0x48c7b7
  0x0048C4BD: call     0x48c7b7
  0x0048C4EE: test     byte ptr [ebp - 4], 0x40
  0x0048C4F2: je       0x48c511
  0x0048C47F: mov      ecx, dword ptr [ebp - 0x14]
  0x0048C482: mov      dword ptr [eax], ecx
  0x0048C484: mov      dword ptr [ebp - 0x38], 1
  0x0048C48B: jmp      0x48c6cd
  0x0048C476: mov      cx, word ptr [ebp - 0x14]
  0x0048C47A: mov      word ptr [eax], cx
  0x0048C47D: jmp      0x48c484
  0x0048C461: or       dword ptr [ebp - 4], edx
  0x0048C464: jmp      0x48c49b
  0x0048C424: mov      dword ptr [ebp - 8], 8
  0x0048C42B: mov      dword ptr [ebp - 0x34], 7
  0x0048C432: test     byte ptr [ebp - 4], 0x80
  0x0048C436: mov      dword ptr [ebp - 0x10], 0x10
  0x0048C43D: je       0x48c49b
  0x0048C3D3: sub      eax, 3
  0x0048C3D6: je       0x48c1bc
  0x0048C249: or       dword ptr [ebp - 4], edi
  0x0048C24C: test     word ptr [ebp - 4], 0x810
  0x0048C252: lea      eax, [ebp + 0x10]
  0x0048C255: push     eax
  0x0048C256: je       0x48c293
  0x0048C214: mov      dword ptr [ebp - 0x40], 1
  0x0048C21B: add      bl, 0x20
  0x0048C21E: or       dword ptr [ebp - 4], 0x40
  0x0048C222: cmp      dword ptr [ebp - 8], 0
  0x0048C226: lea      edi, [ebp - 0x24c]
  0x0048C22C: mov      dword ptr [ebp - 0xc], edi
  0x0048C22F: jge      0x48c302
  0x0048C1A4: dec      eax
  0x0048C1A5: dec      eax
  0x0048C1A6: je       0x48c214
  0x0048C2F4: mov      eax, dword ptr [0x2fdbaf8]
  0x0048C2F9: mov      dword ptr [ebp - 0xc], eax
  0x0048C2FC: push     eax
  0x0048C2FD: jmp      0x48c3ac
  0x0048C2C2: mov      ecx, dword ptr [eax + 4]
  0x0048C2C5: test     ecx, ecx
  0x0048C2C7: je       0x48c2f4
  0x0048C293: call     0x48c7b7
  0x0048C258: call     0x48c7d4
  0x0048C28E: jmp      0x48c5cf
  0x0048C38D: cmp      bl, 0x67
  0x0048C390: jne      0x48c39e
  0x0048C37F: cmp      dword ptr [ebp - 8], 0
  0x0048C383: jne      0x48c38d
  0x0048C323: mov      eax, dword ptr [ebp - 8]
  0x0048C326: add      eax, 0x15d
  0x0048C32B: push     eax
  0x0048C32C: call     0x4838e7
  0x0048C4EB: pop      ecx
  0x0048C4EC: xor      edx, edx
  0x0048C4EE: test     byte ptr [ebp - 4], 0x40
  0x0048C4F2: je       0x48c511
  0x0048C4E3: pop      ecx
  0x0048C4E4: jmp      0x48c4c6
  0x0048C4CE: pop      ecx
  0x0048C4CF: movzx    eax, ax
  0x0048C4D2: jmp      0x48c4c6
  0x0048C4C2: pop      ecx
  0x0048C4C3: movsx    eax, ax
  0x0048C4C6: cdq      
  0x0048C4C7: jmp      0x48c4ee
  0x0048C511: mov      dword ptr [ebp - 0x20], eax
  0x0048C514: mov      dword ptr [ebp - 0x1c], edx
  0x0048C517: test     byte ptr [ebp - 3], 0x80
  0x0048C51B: jne      0x48c521
  0x0048C4F4: test     edx, edx
  0x0048C4F6: jg       0x48c511
  0x0048C6CD: cmp      dword ptr [ebp - 0x30], 0
  0x0048C6D1: je       0x48c6e0
  0x0048C484: mov      dword ptr [ebp - 0x38], 1
  0x0048C48B: jmp      0x48c6cd
  0x0048C1BC: cmp      dword ptr [ebp - 8], -1
  0x0048C1C0: mov      esi, 0x7fffffff
  0x0048C1C5: je       0x48c1ca
  0x0048C3DC: dec      eax
  0x0048C3DD: dec      eax
  0x0048C3DE: je       0x48c494
  0x0048C1A8: sub      eax, 0xc
  0x0048C1AB: jne      0x48c5cf
  0x0048C3AC: call     0x485a00
  0x0048C2C9: test     dword ptr [ebp - 4], edi
  0x0048C2CC: je       0x48c2e5
  0x0048C298: pop      ecx
  0x0048C299: mov      byte ptr [ebp - 0x24c], al
  0x0048C29F: mov      dword ptr [ebp - 0x10], 1
  0x0048C2A6: lea      eax, [ebp - 0x24c]
  0x0048C2AC: mov      dword ptr [ebp - 0xc], eax
  0x0048C2AF: jmp      0x48c5cf
  0x0048C25D: push     eax
  0x0048C25E: lea      eax, [ebp - 0x24c]
  0x0048C264: push     eax
  0x0048C265: call     0x48fa69
  0x0048C5CF: cmp      dword ptr [ebp - 0x38], 0
  0x0048C5D3: jne      0x48c6cd
  0x0048C392: test     esi, esi
  0x0048C394: jne      0x48c39e
  0x0048C39E: cmp      byte ptr [edi], 0x2d
  0x0048C3A1: jne      0x48c3ab
  0x0048C385: push     edi
  0x0048C386: call     dword ptr [0x2fd94c4]
  0x0048C331: test     eax, eax
  0x0048C333: pop      ecx
  0x0048C334: mov      dword ptr [ebp - 0x30], eax
  0x0048C337: je       0x48c340
  0x0048C4C6: cdq      
  0x0048C4C7: jmp      0x48c4ee
  0x0048C51D: and      dword ptr [ebp - 0x1c], 0
  0x0048C521: cmp      dword ptr [ebp - 8], 0
  0x0048C525: jge      0x48c530
  0x0048C521: cmp      dword ptr [ebp - 8], 0
  0x0048C525: jge      0x48c530
  0x0048C4F8: jl       0x48c4fe
  0x0048C6D3: push     dword ptr [ebp - 0x30]
  0x0048C6D6: call     0x4837fe
  0x0048C1CA: lea      eax, [ebp + 0x10]
  0x0048C1CD: push     eax
  0x0048C1CE: call     0x48c7b7
  0x0048C1C7: mov      esi, dword ptr [ebp - 8]
  0x0048C1CA: lea      eax, [ebp + 0x10]
  0x0048C1CD: push     eax
  0x0048C1CE: call     0x48c7b7
  0x0048C494: mov      dword ptr [ebp - 0x10], 0xa
  0x0048C49B: test     byte ptr [ebp - 3], 0x80
  0x0048C49F: je       0x48c4ad
  0x0048C3E4: sub      eax, 3
  0x0048C3E7: jne      0x48c5cf
  0x0048C1B1: test     word ptr [ebp - 4], 0x830
  0x0048C1B7: jne      0x48c1bc
  0x0048C3B1: pop      ecx
  0x0048C3B2: jmp      0x48c5cc
  0x0048C2E5: and      dword ptr [ebp - 0x2c], 0
  0x0048C2E9: mov      dword ptr [ebp - 0xc], ecx
  0x0048C2EC: movsx    eax, word ptr [eax]
  0x0048C2EF: jmp      0x48c5cc
  0x0048C2CE: movsx    eax, word ptr [eax]
  0x0048C2D1: shr      eax, 1
  0x0048C2D3: mov      dword ptr [ebp - 0xc], ecx
  0x0048C2D6: mov      dword ptr [ebp - 0x10], eax
  0x0048C2D9: mov      dword ptr [ebp - 0x2c], 1
  0x0048C2E0: jmp      0x48c5cf
  0x0048C26A: add      esp, 0xc
  0x0048C26D: mov      dword ptr [ebp - 0x10], eax
  0x0048C270: test     eax, eax
  0x0048C272: jge      0x48c2a6
  0x0048C5D9: mov      ebx, dword ptr [ebp - 4]
  0x0048C5DC: test     bl, 0x40
  0x0048C5DF: je       0x48c607
  0x0048C396: push     edi
  0x0048C397: call     dword ptr [0x2fd94bc]
  0x0048C3A3: or       byte ptr [ebp - 3], 1
  0x0048C3A7: inc      edi
  0x0048C3A8: mov      dword ptr [ebp - 0xc], edi
  0x0048C3AB: push     edi
  0x0048C3AC: call     0x485a00
  0x0048C3AB: push     edi
  0x0048C3AC: call     0x485a00
  0x0048C38C: pop      ecx
  0x0048C38D: cmp      bl, 0x67
  0x0048C390: jne      0x48c39e
  0x0048C340: mov      dword ptr [ebp - 8], 0xa3
  0x0048C347: mov      eax, dword ptr [ebp + 0x10]
  0x0048C34A: push     dword ptr [ebp - 0x40]
  0x0048C34D: add      eax, 8
  0x0048C350: mov      dword ptr [ebp + 0x10], eax
  0x0048C353: push     dword ptr [ebp - 8]
  0x0048C356: mov      ecx, dword ptr [eax - 8]
  0x0048C359: mov      dword ptr [ebp - 0x4c], ecx
  0x0048C35C: mov      eax, dword ptr [eax - 4]
  0x0048C35F: mov      dword ptr [ebp - 0x48], eax
  0x0048C362: movsx    eax, bl
  0x0048C365: push     eax
  0x0048C366: lea      eax, [ebp - 0x4c]
  0x0048C369: push     edi
  0x0048C36A: push     eax
  0x0048C36B: call     dword ptr [0x2fd94b8]
  0x0048C339: mov      edi, eax
  0x0048C33B: mov      dword ptr [ebp - 0xc], edi
  0x0048C33E: jmp      0x48c347
  0x0048C527: mov      dword ptr [ebp - 8], 1
  0x0048C52E: jmp      0x48c541
  0x0048C530: and      dword ptr [ebp - 4], 0xfffffff7
  0x0048C534: mov      eax, 0x200
  0x0048C539: cmp      dword ptr [ebp - 8], eax
  0x0048C53C: jle      0x48c541
  0x0048C4FE: neg      eax
  0x0048C500: adc      edx, 0
  0x0048C503: mov      dword ptr [ebp - 0x20], eax
  0x0048C506: neg      edx
  0x0048C508: or       byte ptr [ebp - 3], 1
  0x0048C50C: mov      dword ptr [ebp - 0x1c], edx
  0x0048C50F: jmp      0x48c517
  0x0048C4FA: test     eax, eax
  0x0048C4FC: jae      0x48c511
  0x0048C6DB: and      dword ptr [ebp - 0x30], 0
  0x0048C6DF: pop      ecx
  0x0048C6E0: mov      esi, dword ptr [ebp + 0xc]
  0x0048C6E3: mov      bl, byte ptr [esi]
  0x0048C6E5: inc      esi
  0x0048C6E6: test     bl, bl
  0x0048C6E8: mov      dword ptr [ebp + 0xc], esi
  0x0048C6EB: jne      0x48bfaf
  0x0048C1D3: test     word ptr [ebp - 4], 0x810
  0x0048C1D9: pop      ecx
  0x0048C1DA: mov      ecx, eax
  0x0048C1DC: mov      dword ptr [ebp - 0xc], ecx
  0x0048C1DF: je       0x48c3ff
  0x0048C3ED: mov      dword ptr [ebp - 0x34], 0x27
  0x0048C3F4: jmp      0x48c432
  0x0048C1B9: or       dword ptr [ebp - 4], edi
  0x0048C1BC: cmp      dword ptr [ebp - 8], -1
  0x0048C1C0: mov      esi, 0x7fffffff
  0x0048C1C5: je       0x48c1ca
  0x0048C5CC: mov      dword ptr [ebp - 0x10], eax
  0x0048C5CF: cmp      dword ptr [ebp - 0x38], 0
  0x0048C5D3: jne      0x48c6cd
  0x0048C274: mov      dword ptr [ebp - 0x38], 1
  0x0048C27B: jmp      0x48c2a6
  0x0048C2A6: lea      eax, [ebp - 0x24c]
  0x0048C2AC: mov      dword ptr [ebp - 0xc], eax
  0x0048C2AF: jmp      0x48c5cf
  0x0048C607: mov      esi, dword ptr [ebp - 0x28]
  0x0048C60A: sub      esi, dword ptr [ebp - 0x24]
  0x0048C60D: sub      esi, dword ptr [ebp - 0x10]
  0x0048C610: test     bl, 0xc
  0x0048C613: jne      0x48c627
  0x0048C5E1: test     bh, 1
  0x0048C5E4: je       0x48c5ec
  0x0048C39D: pop      ecx
  0x0048C39E: cmp      byte ptr [edi], 0x2d
  0x0048C3A1: jne      0x48c3ab
  0x0048C541: mov      eax, dword ptr [ebp - 0x20]
  0x0048C544: or       eax, dword ptr [ebp - 0x1c]
  0x0048C547: jne      0x48c54d
  0x0048C53E: mov      dword ptr [ebp - 8], eax
  0x0048C541: mov      eax, dword ptr [ebp - 0x20]
  0x0048C544: or       eax, dword ptr [ebp - 0x1c]
  0x0048C547: jne      0x48c54d
  0x0048C517: test     byte ptr [ebp - 3], 0x80
  0x0048C51B: jne      0x48c521
  0x0048C3FF: test     ecx, ecx
  0x0048C401: jne      0x48c40c
  0x0048C1E5: test     ecx, ecx
  0x0048C1E7: jne      0x48c1f2
  0x0048C432: test     byte ptr [ebp - 4], 0x80
  0x0048C436: mov      dword ptr [ebp - 0x10], 0x10
  0x0048C43D: je       0x48c49b
  0x0048C615: lea      eax, [ebp - 0x14]
  0x0048C618: push     eax
  0x0048C619: push     dword ptr [ebp + 8]
  0x0048C61C: push     esi
  0x0048C61D: push     0x20
  0x0048C61F: call     0x48c74e
  0x0048C627: lea      eax, [ebp - 0x14]
  0x0048C62A: push     eax
  0x0048C62B: lea      eax, [ebp - 0x16]
  0x0048C62E: push     dword ptr [ebp + 8]
  0x0048C631: push     dword ptr [ebp - 0x24]
  0x0048C634: push     eax
  0x0048C635: call     0x48c77f
  0x0048C5EC: test     bl, 1
  0x0048C5EF: je       0x48c5f7
  0x0048C5E6: mov      byte ptr [ebp - 0x16], 0x2d
  0x0048C5EA: jmp      0x48c600
  0x0048C549: and      dword ptr [ebp - 0x24], 0
  0x0048C54D: lea      eax, [ebp - 0x4d]
  0x0048C550: mov      dword ptr [ebp - 0xc], eax
  0x0048C553: mov      eax, dword ptr [ebp - 8]
  0x0048C556: dec      dword ptr [ebp - 8]
  0x0048C559: test     eax, eax
  0x0048C55B: jg       0x48c565
  0x0048C54D: lea      eax, [ebp - 0x4d]
  0x0048C550: mov      dword ptr [ebp - 0xc], eax
  0x0048C553: mov      eax, dword ptr [ebp - 8]
  0x0048C556: dec      dword ptr [ebp - 8]
  0x0048C559: test     eax, eax
  0x0048C55B: jg       0x48c565
  0x0048C403: mov      ecx, dword ptr [0x2fdbaf8]
  0x0048C409: mov      dword ptr [ebp - 0xc], ecx
  0x0048C40C: mov      eax, ecx
  0x0048C40E: mov      edx, esi
  0x0048C410: dec      esi
  0x0048C411: test     edx, edx
  0x0048C413: je       0x48c41d
  0x0048C40C: mov      eax, ecx
  0x0048C40E: mov      edx, esi
  0x0048C410: dec      esi
  0x0048C411: test     edx, edx
  0x0048C413: je       0x48c41d
  0x0048C1E9: mov      ecx, dword ptr [0x2fdbafc]
  0x0048C1EF: mov      dword ptr [ebp - 0xc], ecx
  0x0048C1F2: mov      dword ptr [ebp - 0x2c], 1
  0x0048C1F9: mov      eax, ecx
  0x0048C1FB: mov      edx, esi
  0x0048C1FD: dec      esi
  0x0048C1FE: test     edx, edx
  0x0048C200: je       0x48c3f6
  0x0048C1F2: mov      dword ptr [ebp - 0x2c], 1
  0x0048C1F9: mov      eax, ecx
  0x0048C1FB: mov      edx, esi
  0x0048C1FD: dec      esi
  0x0048C1FE: test     edx, edx
  0x0048C200: je       0x48c3f6
  0x0048C624: add      esp, 0x10
  0x0048C627: lea      eax, [ebp - 0x14]
  0x0048C62A: push     eax
  0x0048C62B: lea      eax, [ebp - 0x16]
  0x0048C62E: push     dword ptr [ebp + 8]
  0x0048C631: push     dword ptr [ebp - 0x24]
  0x0048C634: push     eax
  0x0048C635: call     0x48c77f
  0x0048C63A: add      esp, 0x10
  0x0048C63D: test     bl, 8
  0x0048C640: je       0x48c659
  0x0048C5F7: test     bl, 2
  0x0048C5FA: je       0x48c607
  0x0048C5F1: mov      byte ptr [ebp - 0x16], 0x2b
  0x0048C5F5: jmp      0x48c600
  0x0048C600: mov      dword ptr [ebp - 0x24], 1
  0x0048C607: mov      esi, dword ptr [ebp - 0x28]
  0x0048C60A: sub      esi, dword ptr [ebp - 0x24]
  0x0048C60D: sub      esi, dword ptr [ebp - 0x10]
  0x0048C610: test     bl, 0xc
  0x0048C613: jne      0x48c627
  0x0048C55D: mov      eax, dword ptr [ebp - 0x20]
  0x0048C560: or       eax, dword ptr [ebp - 0x1c]
  0x0048C563: je       0x48c5a4
  0x0048C565: mov      eax, dword ptr [ebp - 0x10]
  0x0048C568: cdq      
  0x0048C569: mov      edi, edx
  0x0048C56B: mov      esi, eax
  0x0048C56D: push     edi
  0x0048C56E: push     esi
  0x0048C56F: push     dword ptr [ebp - 0x1c]
  0x0048C572: push     dword ptr [ebp - 0x20]
  0x0048C575: call     0x48ac20
  0x0048C41D: sub      eax, ecx
  0x0048C41F: jmp      0x48c5cc
  0x0048C415: cmp      byte ptr [eax], 0
  0x0048C418: je       0x48c41d
  0x0048C3F6: sub      eax, ecx
  0x0048C3F8: sar      eax, 1
  0x0048C3FA: jmp      0x48c5cc
  0x0048C206: cmp      word ptr [eax], 0
  0x0048C20A: je       0x48c3f6
  0x0048C659: cmp      dword ptr [ebp - 0x2c], 0
  0x0048C65D: je       0x48c6a0
  0x0048C642: test     bl, 4
  0x0048C645: jne      0x48c659
  0x0048C5FC: mov      byte ptr [ebp - 0x16], 0x20
  0x0048C600: mov      dword ptr [ebp - 0x24], 1
  0x0048C607: mov      esi, dword ptr [ebp - 0x28]
  0x0048C60A: sub      esi, dword ptr [ebp - 0x24]
  0x0048C60D: sub      esi, dword ptr [ebp - 0x10]
  0x0048C610: test     bl, 0xc
  0x0048C613: jne      0x48c627
  0x0048C5A4: lea      eax, [ebp - 0x4d]
  0x0048C5A7: sub      eax, dword ptr [ebp - 0xc]
  0x0048C5AA: inc      dword ptr [ebp - 0xc]
  0x0048C5AD: test     byte ptr [ebp - 3], 2
  0x0048C5B1: mov      dword ptr [ebp - 0x10], eax
  0x0048C5B4: je       0x48c5cf
  0x0048C57A: push     edi
  0x0048C57B: push     esi
  0x0048C57C: push     dword ptr [ebp - 0x1c]
  0x0048C57F: mov      ebx, eax
  0x0048C581: add      ebx, 0x30
  0x0048C584: push     dword ptr [ebp - 0x20]
  0x0048C587: call     0x48abb0
  0x0048C41A: inc      eax
  0x0048C41B: jmp      0x48c40e
  0x0048C210: inc      eax
  0x0048C211: inc      eax
  0x0048C212: jmp      0x48c1fb
  0x0048C6A0: lea      eax, [ebp - 0x14]
  0x0048C6A3: push     eax
  0x0048C6A4: push     dword ptr [ebp + 8]
  0x0048C6A7: push     dword ptr [ebp - 0x10]
  0x0048C6AA: push     dword ptr [ebp - 0xc]
  0x0048C6AD: call     0x48c77f
  0x0048C65F: cmp      dword ptr [ebp - 0x10], 0
  0x0048C663: jle      0x48c6a0
  0x0048C647: lea      eax, [ebp - 0x14]
  0x0048C64A: push     eax
  0x0048C64B: push     dword ptr [ebp + 8]
  0x0048C64E: push     esi
  0x0048C64F: push     0x30
  0x0048C651: call     0x48c74e
  0x0048C5B6: mov      ecx, dword ptr [ebp - 0xc]
  0x0048C5B9: cmp      byte ptr [ecx], 0x30
  0x0048C5BC: jne      0x48c5c2
  0x0048C58C: cmp      ebx, 0x39
  0x0048C58F: mov      dword ptr [ebp - 0x20], eax
  0x0048C592: mov      dword ptr [ebp - 0x1c], edx
  0x0048C595: jle      0x48c59a
  0x0048C40E: mov      edx, esi
  0x0048C410: dec      esi
  0x0048C411: test     edx, edx
  0x0048C413: je       0x48c41d
  0x0048C1FB: mov      edx, esi
  0x0048C1FD: dec      esi
  0x0048C1FE: test     edx, edx
  0x0048C200: je       0x48c3f6
  0x0048C6B2: add      esp, 0x10
  0x0048C6B5: test     byte ptr [ebp - 4], 4
  0x0048C6B9: je       0x48c6cd
  0x0048C665: mov      eax, dword ptr [ebp - 0x10]
  0x0048C668: mov      ebx, dword ptr [ebp - 0xc]
  0x0048C66B: lea      edi, [eax - 1]
  0x0048C66E: mov      ax, word ptr [ebx]
  0x0048C671: inc      ebx
  0x0048C672: push     eax
  0x0048C673: lea      eax, [ebp - 0x44]
  0x0048C676: push     eax
  0x0048C677: inc      ebx
  0x0048C678: call     0x48fa69
  0x0048C656: add      esp, 0x10
  0x0048C659: cmp      dword ptr [ebp - 0x2c], 0
  0x0048C65D: je       0x48c6a0
  0x0048C5BE: test     eax, eax
  0x0048C5C0: jne      0x48c5cf
  0x0048C5C2: dec      dword ptr [ebp - 0xc]
  0x0048C5C5: inc      eax
  0x0048C5C6: mov      ecx, dword ptr [ebp - 0xc]
  0x0048C5C9: mov      byte ptr [ecx], 0x30
  0x0048C5CC: mov      dword ptr [ebp - 0x10], eax
  0x0048C5CF: cmp      dword ptr [ebp - 0x38], 0
  0x0048C5D3: jne      0x48c6cd
  0x0048C59A: mov      eax, dword ptr [ebp - 0xc]
  0x0048C59D: dec      dword ptr [ebp - 0xc]
  0x0048C5A0: mov      byte ptr [eax], bl
  0x0048C5A2: jmp      0x48c553
  0x0048C597: add      ebx, dword ptr [ebp - 0x34]
  0x0048C59A: mov      eax, dword ptr [ebp - 0xc]
  0x0048C59D: dec      dword ptr [ebp - 0xc]
  0x0048C5A0: mov      byte ptr [eax], bl
  0x0048C5A2: jmp      0x48c553
  0x0048C6BB: lea      eax, [ebp - 0x14]
  0x0048C6BE: push     eax
  0x0048C6BF: push     dword ptr [ebp + 8]
  0x0048C6C2: push     esi
  0x0048C6C3: push     0x20
  0x0048C6C5: call     0x48c74e
  0x0048C67D: pop      ecx
  0x0048C67E: test     eax, eax
  0x0048C680: pop      ecx
  0x0048C681: jle      0x48c6b5
  0x0048C553: mov      eax, dword ptr [ebp - 8]
  0x0048C556: dec      dword ptr [ebp - 8]
  0x0048C559: test     eax, eax
  0x0048C55B: jg       0x48c565
  0x0048C6CA: add      esp, 0x10
  0x0048C6CD: cmp      dword ptr [ebp - 0x30], 0
  0x0048C6D1: je       0x48c6e0
  0x0048C6B5: test     byte ptr [ebp - 4], 4
  0x0048C6B9: je       0x48c6cd
  0x0048C683: lea      ecx, [ebp - 0x14]
  0x0048C686: push     ecx
  0x0048C687: push     dword ptr [ebp + 8]
  0x0048C68A: push     eax
  0x0048C68B: lea      eax, [ebp - 0x44]
  0x0048C68E: push     eax
  0x0048C68F: call     0x48c77f
  0x0048C694: add      esp, 0x10
  0x0048C697: mov      eax, edi
  0x0048C699: dec      edi
  0x0048C69A: test     eax, eax
  0x0048C69C: jne      0x48c66e
  0x0048C69E: jmp      0x48c6b5
  0x0048C66E: mov      ax, word ptr [ebx]
  0x0048C671: inc      ebx
  0x0048C672: push     eax
  0x0048C673: lea      eax, [ebp - 0x44]
  0x0048C676: push     eax
  0x0048C677: inc      ebx
  0x0048C678: call     0x48fa69


/*
 * ============================================================
 * KG.exe 反编译分析 - sub_44bf60
 * ============================================================
 *
 * 函数地址: 0x0044BF60
 * 基本块数: 178
 * 指令数:   915
 * 复杂度:   中复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_44bf60(void) {

  /* 代码块 1 @ 0x0044BF60 */
  // 分配 0xc 字节栈空间
  // 加载常量 0x186a0
  // 保存寄存器 ebx
  // 保存寄存器 ebp
  // 保存寄存器 esi
  // 从栈读取参数 0x1c 到 esi
  // 保存寄存器 edi
  // edi 清零
  // 读取全局变量值 [esi + 0x2dc]
  // 测试 eax 是否为零（设置标志位）
  // 如果相等则跳转到 0x44bfa5
  /* 代码块 2 @ 0x0044BFA5 */
  // 读取全局变量值 [esi + 0x18c]
  // 测试 eax 是否为零（设置标志位）
  // 如果相等则跳转到 0x44bfc0
  /* 代码块 3 @ 0x0044BF7C */
  // mov ecx, dword ptr [esi + 0x18c]
  // TEST ecx, ecx (set flags)
  // 如果相等则跳转到 0x44bf94
  /* 代码块 4 @ 0x0044BFC0 */
  // mov dword ptr [esi + 0x2dc], ecx
  // mov dword ptr [esi + 0x18c], ecx
  // or byte ptr [esi + 0x326], 1
  // 读取全局变量值 [esi + 0x7c]
  // TEST edi, edi (set flags)
  // mov ebp, 0xffffdfff
  // 如果相等则跳转到 0x44bfe4
  /* 代码块 5 @ 0x0044BFAF */
  // 保存寄存器 eax
  // 直接调用函数 0x0043E540
  call(0x0043E540);
  /* 代码块 6 @ 0x0044BF94 */
  // 保存寄存器 eax
  // 直接调用函数 0x0043E540
  call(0x0043E540);
  /* 代码块 7 @ 0x0044BF86 */
  // 保存寄存器 ecx
  // 保存寄存器 eax
  // 直接调用函数 0x0044CA80
  call(0x0044CA80);
  /* 代码块 8 @ 0x0044BFE4 */
  // and eax, ebp
  // TEST eax, 0x40000 (set flags)
  // mov dword ptr [esi + 0x7c], eax
  // mov bl, 0x80
  // 如果相等则跳转到 0x44c00f
  /* 代码块 9 @ 0x0044BFDF */
  // or ah, 0x20
  goto 0x44bfe6;
  /* 代码块 10 @ 0x0044BFB5 */
  // add esp, 4
  // mov dword ptr [esi + 0x2dc], eax
  goto 0x44bfcc;
  /* 代码块 11 @ 0x0044BF9A */
  // add esp, 4
  // mov dword ptr [esi + 0x18c], eax
  goto 0x44bfcc;
  /* 代码块 12 @ 0x0044BF8D */
  // add esp, 8
  // mov edi, eax
  goto 0x44bfcc;
  /* 代码块 13 @ 0x0044C00F */
  // 读取全局变量值 [esi + 0x18c]
  // 保存寄存器 eax
  // 直接调用函数 0x0043E590
  call(0x0043E590);
  /* 代码块 14 @ 0x0044BFF2 */
  // TEST bl, al (set flags)
  // 如果不相等则跳转到 0x44c00f
  // TEST eax, 0x40000 (set flags)
  // mov dword ptr [esi + 0x7c], eax
  // mov bl, 0x80
  // 如果相等则跳转到 0x44c00f
  // or byte ptr [esi + 0x326], 1
  // 读取全局变量值 [esi + 0x7c]
  // TEST edi, edi (set flags)
  // mov ebp, 0xffffdfff
  // 如果相等则跳转到 0x44bfe4
  /* 代码块 15 @ 0x0044C01B */
  // add esp, 4
  // 测试 eax 是否为零（设置标志位）
  // 如果不相等则跳转到 0x44c036
  /* 代码块 16 @ 0x0044BFF6 */
  // and eax, 0xfd7ffeff
  // mov word ptr [esi + 0x150], 0
  // mov dword ptr [esi + 0x7c], eax
  // 读取全局变量值 [esi + 0x78]
  // and eax, ebp
  // mov dword ptr [esi + 0x78], eax
  // 读取全局变量值 [esi + 0x18c]
  // 保存寄存器 eax
  // 直接调用函数 0x0043E590
  call(0x0043E590);
  /* 代码块 17 @ 0x0044C022 */
  // mov ecx, dword ptr [esi + 0x7c]
  // 读取全局变量值 [esi + 0x78]
  // and ecx, 0xff7fffff
  // and eax, ebp
  // mov dword ptr [esi + 0x7c], ecx
  // mov dword ptr [esi + 0x78], eax
  // TEST dword ptr [esi + 0x7c], 0x600000 (set flags)
  // 如果相等则跳转到 0x44c048
  // TEST dword ptr [esi + 0x7c], 0x600000 (set flags)
  // 如果相等则跳转到 0x44c048
  /* 代码块 18 @ 0x0044C048 */
  // 读取全局变量值 [esi + 0x7c]
  // TEST ah, 1 (set flags)
  // 如果相等则跳转到 0x44c064
  /* 代码块 19 @ 0x0044C03F */
  // 保存寄存器 esi
  // 直接调用函数 0x0043DF20
  call(0x0043DF20);
  /* 代码块 20 @ 0x0044C064 */
  // TEST bl, al (set flags)
  // 如果相等则跳转到 0x44c096
  /* 代码块 21 @ 0x0044C050 */
  // TEST byte ptr [esi + 0x157], 2 (set flags)
  // 如果不相等则跳转到 0x44c096
  /* 代码块 22 @ 0x0044C045 */
  // add esp, 4
  // 读取全局变量值 [esi + 0x7c]
  // TEST ah, 1 (set flags)
  // 如果相等则跳转到 0x44c064
  /* 代码块 23 @ 0x0044C096 */
  // mov al, byte ptr [esi + 0x157]
  // 保存寄存器 esi
  // CMP al, 3 (set flags)
  // 如果不相等则跳转到 0x44c0a8
  /* 代码块 24 @ 0x0044C068 */
  // TEST ah, 0x40 (set flags)
  // 如果相等则跳转到 0x44c096
  /* 代码块 25 @ 0x0044C059 */
  // 读取全局变量值 [esi + 0x74]
  // or ah, 8
  // mov dword ptr [esi + 0x74], eax
  goto 0x44c096;
  /* 代码块 26 @ 0x0044C0A1 */
  // 直接调用函数 0x0044CAC0
  call(0x0044CAC0);
  /* 代码块 27 @ 0x0044C0A8 */
  // 直接调用函数 0x0044CBB0
  call(0x0044CBB0);
  /* 代码块 28 @ 0x0044C06D */
  // mov ax, word ptr [esi + 0x16a]
  // CMP ax, word ptr [esi + 0x16c] (set flags)
  // 如果不相等则跳转到 0x44c096
  /* 代码块 29 @ 0x0044C0A6 */
  goto 0x44c0ad;
  /* 代码块 30 @ 0x0044C0AD */
  // mov ecx, dword ptr [esi + 0x7c]
  // add esp, 4
  // TEST ch, 2 (set flags)
  // mov dl, 0x10
  // 如果相等则跳转到 0x44c153
  /* 代码块 31 @ 0x0044C07D */
  // CMP ax, word ptr [esi + 0x16e] (set flags)
  // 如果不相等则跳转到 0x44c096
  /* 代码块 32 @ 0x0044C153 */
  // TEST ecx, 0x4000400 (set flags)
  // 如果相等则跳转到 0x44c1b8
  /* 代码块 33 @ 0x0044C0BE */
  // TEST bl, cl (set flags)
  // 如果相等则跳转到 0x44c153
  /* 代码块 34 @ 0x0044C086 */
  // mov ecx, dword ptr [esi + 0x74]
  // mov word ptr [esi + 0x170], ax
  // or ch, 8
  // mov dword ptr [esi + 0x74], ecx
  // mov al, byte ptr [esi + 0x157]
  // 保存寄存器 esi
  // CMP al, 3 (set flags)
  // 如果不相等则跳转到 0x44c0a8
  /* 代码块 35 @ 0x0044C1B8 */
  // lea edx, [esi + 0x168]
  // lea eax, [esi + 0x172]
  // TEST ch, 0x20 (set flags)
  // mov edi, dword ptr [edx]
  // mov dword ptr [eax], edi
  // mov edi, dword ptr [edx + 4]
  // mov dword ptr [eax + 4], edi
  // mov dx, word ptr [edx + 8]
  // mov word ptr [eax + 8], dx
  // 如果不相等则跳转到 0x44c3c8
  /* 代码块 36 @ 0x0044C15B */
  // TEST bl, cl (set flags)
  // 如果相等则跳转到 0x44c1b8
  /* 代码块 37 @ 0x0044C0C6 */
  // TEST ch, 1 (set flags)
  // 如果不相等则跳转到 0x44c153
  /* 代码块 38 @ 0x0044C1DF */
  // TEST ecx, 0x600000 (set flags)
  // 如果相等则跳转到 0x44c215
  /* 代码块 39 @ 0x0044C3C8 */
  // edx 清零
  // mov dl, byte ptr [esi + 0x158]
  // 保存寄存器 edx
  // 保存寄存器 esi
  // 直接调用函数 0x0043E850
  call(0x0043E850);
  /* 代码块 40 @ 0x0044C15F */
  // TEST ch, 1 (set flags)
  // 如果不相等则跳转到 0x44c1b8
  /* 代码块 41 @ 0x0044C0CF */
  // CMP byte ptr [esi + 0x158], dl (set flags)
  // 如果相等则跳转到 0x44c153
  /* 代码块 42 @ 0x0044C215 */
  // TEST byte ptr [esi + 0x7c], bl (set flags)
  // 如果相等则跳转到 0x44c268
  /* 代码块 43 @ 0x0044C1E7 */
  // 读取全局变量值 [esi + 0x2dc]
  // 保存寄存器 eax
  // 直接调用函数 0x0043E590
  call(0x0043E590);
  /* 代码块 44 @ 0x0044C3D7 */
  // 读取全局变量值 [esi + 0x7c]
  // add esp, 8
  // TEST bl, al (set flags)
  // 如果相等则跳转到 0x44c932
  /* 代码块 45 @ 0x0044C164 */
  // CMP byte ptr [esi + 0x158], dl (set flags)
  // 如果不相等则跳转到 0x44c1b8
  /* 代码块 46 @ 0x0044C0D7 */
  // eax 清零（准备返回值）
  // mov ax, word ptr [esi + 0x16a]
  // add eax, 0x81
  // mov edi, eax
  // shl edi, 8
  // sub edi, eax
  // eax 清零（准备返回值）
  // mov ax, word ptr [esi + 0x16c]
  // shr edi, 0x10
  // add eax, 0x81
  // mov word ptr [esi + 0x16a], di
  // mov edi, eax
  // shl edi, 8
  // sub edi, eax
  // eax 清零（准备返回值）
  // mov ax, word ptr [esi + 0x16e]
  // shr edi, 0x10
  // add eax, 0x81
  // mov word ptr [esi + 0x16c], di
  // mov edi, eax
  // shl edi, 8
  // sub edi, eax
  // eax 清零（准备返回值）
  // mov ax, word ptr [esi + 0x170]
  // shr edi, 0x10
  // add eax, 0x81
  // mov word ptr [esi + 0x16e], di
  // mov edi, eax
  // shl edi, 8
  // sub edi, eax
  // shr edi, 0x10
  // mov word ptr [esi + 0x170], di
  // TEST ecx, 0x4000400 (set flags)
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0044BF60: sub      esp, 0xc
  0x0044BF63: mov      ecx, 0x186a0
  0x0044BF68: push     ebx
  0x0044BF69: push     ebp
  0x0044BF6A: push     esi
  0x0044BF6B: mov      esi, dword ptr [esp + 0x1c]
  0x0044BF6F: push     edi
  0x0044BF70: xor      edi, edi
  0x0044BF72: mov      eax, dword ptr [esi + 0x2dc]
  0x0044BF78: test     eax, eax
  0x0044BF7A: je       0x44bfa5
  0x0044BFA5: mov      eax, dword ptr [esi + 0x18c]
  0x0044BFAB: test     eax, eax
  0x0044BFAD: je       0x44bfc0
  0x0044BF7C: mov      ecx, dword ptr [esi + 0x18c]
  0x0044BF82: test     ecx, ecx
  0x0044BF84: je       0x44bf94
  0x0044BFC0: mov      dword ptr [esi + 0x2dc], ecx
  0x0044BFC6: mov      dword ptr [esi + 0x18c], ecx
  0x0044BFCC: or       byte ptr [esi + 0x326], 1
  0x0044BFD3: mov      eax, dword ptr [esi + 0x7c]
  0x0044BFD6: test     edi, edi
  0x0044BFD8: mov      ebp, 0xffffdfff
  0x0044BFDD: je       0x44bfe4
  0x0044BFAF: push     eax
  0x0044BFB0: call     0x43e540
  0x0044BF94: push     eax
  0x0044BF95: call     0x43e540
  0x0044BF86: push     ecx
  0x0044BF87: push     eax
  0x0044BF88: call     0x44ca80
  0x0044BFE4: and      eax, ebp
  0x0044BFE6: test     eax, 0x40000
  0x0044BFEB: mov      dword ptr [esi + 0x7c], eax
  0x0044BFEE: mov      bl, 0x80
  0x0044BFF0: je       0x44c00f
  0x0044BFDF: or       ah, 0x20
  0x0044BFE2: jmp      0x44bfe6
  0x0044BFB5: add      esp, 4
  0x0044BFB8: mov      dword ptr [esi + 0x2dc], eax
  0x0044BFBE: jmp      0x44bfcc
  0x0044BF9A: add      esp, 4
  0x0044BF9D: mov      dword ptr [esi + 0x18c], eax
  0x0044BFA3: jmp      0x44bfcc
  0x0044BF8D: add      esp, 8
  0x0044BF90: mov      edi, eax
  0x0044BF92: jmp      0x44bfcc
  0x0044C00F: mov      eax, dword ptr [esi + 0x18c]
  0x0044C015: push     eax
  0x0044C016: call     0x43e590
  0x0044BFF2: test     bl, al
  0x0044BFF4: jne      0x44c00f
  0x0044BFE6: test     eax, 0x40000
  0x0044BFEB: mov      dword ptr [esi + 0x7c], eax
  0x0044BFEE: mov      bl, 0x80
  0x0044BFF0: je       0x44c00f
  0x0044BFCC: or       byte ptr [esi + 0x326], 1
  0x0044BFD3: mov      eax, dword ptr [esi + 0x7c]
  0x0044BFD6: test     edi, edi
  0x0044BFD8: mov      ebp, 0xffffdfff
  0x0044BFDD: je       0x44bfe4
  0x0044C01B: add      esp, 4
  0x0044C01E: test     eax, eax
  0x0044C020: jne      0x44c036
  0x0044BFF6: and      eax, 0xfd7ffeff
  0x0044BFFB: mov      word ptr [esi + 0x150], 0
  0x0044C004: mov      dword ptr [esi + 0x7c], eax
  0x0044C007: mov      eax, dword ptr [esi + 0x78]
  0x0044C00A: and      eax, ebp
  0x0044C00C: mov      dword ptr [esi + 0x78], eax
  0x0044C00F: mov      eax, dword ptr [esi + 0x18c]
  0x0044C015: push     eax
  0x0044C016: call     0x43e590
  0x0044C022: mov      ecx, dword ptr [esi + 0x7c]
  0x0044C025: mov      eax, dword ptr [esi + 0x78]
  0x0044C028: and      ecx, 0xff7fffff
  0x0044C02E: and      eax, ebp
  0x0044C030: mov      dword ptr [esi + 0x7c], ecx
  0x0044C033: mov      dword ptr [esi + 0x78], eax
  0x0044C036: test     dword ptr [esi + 0x7c], 0x600000
  0x0044C03D: je       0x44c048
  0x0044C036: test     dword ptr [esi + 0x7c], 0x600000
  0x0044C03D: je       0x44c048
  0x0044C048: mov      eax, dword ptr [esi + 0x7c]
  0x0044C04B: test     ah, 1
  0x0044C04E: je       0x44c064
  0x0044C03F: push     esi
  0x0044C040: call     0x43df20
  0x0044C064: test     bl, al
  0x0044C066: je       0x44c096
  0x0044C050: test     byte ptr [esi + 0x157], 2
  0x0044C057: jne      0x44c096
  0x0044C045: add      esp, 4
  0x0044C048: mov      eax, dword ptr [esi + 0x7c]
  0x0044C04B: test     ah, 1
  0x0044C04E: je       0x44c064
  0x0044C096: mov      al, byte ptr [esi + 0x157]
  0x0044C09C: push     esi
  0x0044C09D: cmp      al, 3
  0x0044C09F: jne      0x44c0a8
  0x0044C068: test     ah, 0x40
  0x0044C06B: je       0x44c096
  0x0044C059: mov      eax, dword ptr [esi + 0x74]
  0x0044C05C: or       ah, 8
  0x0044C05F: mov      dword ptr [esi + 0x74], eax
  0x0044C062: jmp      0x44c096
  0x0044C0A1: call     0x44cac0
  0x0044C0A8: call     0x44cbb0
  0x0044C06D: mov      ax, word ptr [esi + 0x16a]
  0x0044C074: cmp      ax, word ptr [esi + 0x16c]
  0x0044C07B: jne      0x44c096
  0x0044C0A6: jmp      0x44c0ad
  0x0044C0AD: mov      ecx, dword ptr [esi + 0x7c]
  0x0044C0B0: add      esp, 4
  0x0044C0B3: test     ch, 2
  0x0044C0B6: mov      dl, 0x10
  0x0044C0B8: je       0x44c153
  0x0044C07D: cmp      ax, word ptr [esi + 0x16e]
  0x0044C084: jne      0x44c096
  0x0044C153: test     ecx, 0x4000400
  0x0044C159: je       0x44c1b8
  0x0044C0BE: test     bl, cl
  0x0044C0C0: je       0x44c153
  0x0044C086: mov      ecx, dword ptr [esi + 0x74]
  0x0044C089: mov      word ptr [esi + 0x170], ax
  0x0044C090: or       ch, 8
  0x0044C093: mov      dword ptr [esi + 0x74], ecx
  0x0044C096: mov      al, byte ptr [esi + 0x157]
  0x0044C09C: push     esi
  0x0044C09D: cmp      al, 3
  0x0044C09F: jne      0x44c0a8
  0x0044C1B8: lea      edx, [esi + 0x168]
  0x0044C1BE: lea      eax, [esi + 0x172]
  0x0044C1C4: test     ch, 0x20
  0x0044C1C7: mov      edi, dword ptr [edx]
  0x0044C1C9: mov      dword ptr [eax], edi
  0x0044C1CB: mov      edi, dword ptr [edx + 4]
  0x0044C1CE: mov      dword ptr [eax + 4], edi
  0x0044C1D1: mov      dx, word ptr [edx + 8]
  0x0044C1D5: mov      word ptr [eax + 8], dx
  0x0044C1D9: jne      0x44c3c8
  0x0044C15B: test     bl, cl
  0x0044C15D: je       0x44c1b8
  0x0044C0C6: test     ch, 1
  0x0044C0C9: jne      0x44c153
  0x0044C1DF: test     ecx, 0x600000
  0x0044C1E5: je       0x44c215
  0x0044C3C8: xor      edx, edx
  0x0044C3CA: mov      dl, byte ptr [esi + 0x158]
  0x0044C3D0: push     edx
  0x0044C3D1: push     esi
  0x0044C3D2: call     0x43e850
  0x0044C15F: test     ch, 1
  0x0044C162: jne      0x44c1b8
  0x0044C0CF: cmp      byte ptr [esi + 0x158], dl
  0x0044C0D5: je       0x44c153
  0x0044C215: test     byte ptr [esi + 0x7c], bl
  0x0044C218: je       0x44c268
  0x0044C1E7: mov      eax, dword ptr [esi + 0x2dc]
  0x0044C1ED: push     eax
  0x0044C1EE: call     0x43e590
  0x0044C3D7: mov      eax, dword ptr [esi + 0x7c]
  0x0044C3DA: add      esp, 8
  0x0044C3DD: test     bl, al
  0x0044C3DF: je       0x44c932
  0x0044C164: cmp      byte ptr [esi + 0x158], dl
  0x0044C16A: jne      0x44c1b8
  0x0044C0D7: xor      eax, eax
  0x0044C0D9: mov      ax, word ptr [esi + 0x16a]
  0x0044C0E0: add      eax, 0x81
  0x0044C0E5: mov      edi, eax
  0x0044C0E7: shl      edi, 8
  0x0044C0EA: sub      edi, eax
  0x0044C0EC: xor      eax, eax
  0x0044C0EE: mov      ax, word ptr [esi + 0x16c]
  0x0044C0F5: shr      edi, 0x10
  0x0044C0F8: add      eax, 0x81
  0x0044C0FD: mov      word ptr [esi + 0x16a], di
  0x0044C104: mov      edi, eax
  0x0044C106: shl      edi, 8
  0x0044C109: sub      edi, eax
  0x0044C10B: xor      eax, eax
  0x0044C10D: mov      ax, word ptr [esi + 0x16e]
  0x0044C114: shr      edi, 0x10
  0x0044C117: add      eax, 0x81
  0x0044C11C: mov      word ptr [esi + 0x16c], di
  0x0044C123: mov      edi, eax
  0x0044C125: shl      edi, 8
  0x0044C128: sub      edi, eax
  0x0044C12A: xor      eax, eax
  0x0044C12C: mov      ax, word ptr [esi + 0x170]
  0x0044C133: shr      edi, 0x10
  0x0044C136: add      eax, 0x81
  0x0044C13B: mov      word ptr [esi + 0x16e], di
  0x0044C142: mov      edi, eax
  0x0044C144: shl      edi, 8
  0x0044C147: sub      edi, eax
  0x0044C149: shr      edi, 0x10
  0x0044C14C: mov      word ptr [esi + 0x170], di
  0x0044C153: test     ecx, 0x4000400
  0x0044C159: je       0x44c1b8
  0x0044C268: test     dword ptr [esi + 0x7c], 0x800000
  0x0044C26F: je       0x44c288
  0x0044C21A: mov      edx, dword ptr [esi + 0x2dc]
  0x0044C220: push     edx
  0x0044C221: call     0x43e590
  0x0044C1F3: add      esp, 4
  0x0044C1F6: test     eax, eax
  0x0044C1F8: jne      0x44c3c8
  0x0044C932: cmp      byte ptr [esi + 0x157], 3
  0x0044C939: jne      0x44c99e
  0x0044C3E5: test     eax, 0x600000
  0x0044C3EA: je       0x44c3fa
  0x0044C16C: mov      dx, word ptr [esi + 0x16a]
  0x0044C173: mov      ax, word ptr [esi + 0x16c]
  0x0044C17A: imul     dx, dx, 0x101
  0x0044C17F: imul     ax, ax, 0x101
  0x0044C184: mov      word ptr [esi + 0x16a], dx
  0x0044C18B: mov      dx, word ptr [esi + 0x16e]
  0x0044C192: mov      word ptr [esi + 0x16c], ax
  0x0044C199: mov      ax, word ptr [esi + 0x170]
  0x0044C1A0: imul     dx, dx, 0x101
  0x0044C1A5: imul     ax, ax, 0x101
  0x0044C1AA: mov      word ptr [esi + 0x16e], dx
  0x0044C1B1: mov      word ptr [esi + 0x170], ax
  0x0044C1B8: lea      edx, [esi + 0x168]
  0x0044C1BE: lea      eax, [esi + 0x172]
  0x0044C1C4: test     ch, 0x20
  0x0044C1C7: mov      edi, dword ptr [edx]
  0x0044C1C9: mov      dword ptr [eax], edi
  0x0044C1CB: mov      edi, dword ptr [edx + 4]
  0x0044C1CE: mov      dword ptr [eax + 4], edi
  0x0044C1D1: mov      dx, word ptr [edx + 8]
  0x0044C1D5: mov      word ptr [eax + 8], dx
  0x0044C1D9: jne      0x44c3c8
  0x0044C288: test     byte ptr [esi + 0x7c], bl
  0x0044C28B: je       0x44c99e
  0x0044C271: mov      edx, dword ptr [esi + 0x18c]
  0x0044C277: push     edx
  0x0044C278: call     0x43e590
  0x0044C226: add      esp, 4
  0x0044C229: test     eax, eax
  0x0044C22B: jne      0x44c3c8
  0x0044C1FE: mov      ecx, dword ptr [esi + 0x18c]
  0x0044C204: push     ecx
  0x0044C205: call     0x43e590
  0x0044C93B: test     ah, 0x10
  0x0044C93E: je       0x44c947
  0x0044C99E: mov      eax, dword ptr [esi + 0x7c]
  0x0044C9A1: test     al, 8
  0x0044C9A3: je       0x44ca6a
  0x0044C3FA: cmp      byte ptr [esi + 0x157], 3
  0x0044C401: jne      0x44c754
  0x0044C3EC: push     0x2fb2c5c
  0x0044C3F1: push     esi
  0x0044C3F2: call     0x446560
  0x0044C291: cmp      byte ptr [esi + 0x157], 3
  0x0044C298: jne      0x44c99e
  0x0044C27D: add      esp, 4
  0x0044C280: test     eax, eax
  0x0044C282: jne      0x44c3c8
  0x0044C231: mov      eax, dword ptr [esi + 0x18c]
  0x0044C237: push     eax
  0x0044C238: call     0x43e590
  0x0044C20A: add      esp, 4
  0x0044C20D: test     eax, eax
  0x0044C20F: jne      0x44c3c8
  0x0044C947: mov      eax, dword ptr [esi + 0x144]
  0x0044C94D: xor      ecx, ecx
  0x0044C94F: mov      cx, word ptr [esi + 0x148]
  0x0044C956: test     ecx, ecx
  0x0044C958: jle      0x44c996
  0x0044C940: test     eax, 0x600000
  0x0044C945: jne      0x44c99e
  0x0044CA6A: pop      edi
  0x0044CA6B: pop      esi
  0x0044CA6C: pop      ebp
  0x0044CA6D: pop      ebx
  0x0044CA6E: add      esp, 0xc
  0x0044CA71: ret      
  0x0044C9A9: test     ah, 0x10
  0x0044C9AC: jne      0x44ca6a
  0x0044C407: mov      eax, dword ptr [esi + 0x144]
  0x0044C40D: mov      dword ptr [esp + 0x18], eax
  0x0044C411: xor      eax, eax
  0x0044C413: mov      ax, word ptr [esi + 0x148]
  0x0044C41A: mov      dword ptr [esp + 0x14], eax
  0x0044C41E: mov      al, byte ptr [esi + 0x162]
  0x0044C424: cmp      al, 2
  0x0044C426: jne      0x44c47a
  0x0044C754: xor      eax, eax
  0x0044C756: mov      edi, 0x186a0
  0x0044C75B: mov      al, byte ptr [esi + 0x162]
  0x0044C761: mov      ebp, edi
  0x0044C763: dec      eax
  0x0044C764: je       0x44c7cc
  0x0044C3F7: add      esp, 8
  0x0044C3FA: cmp      byte ptr [esi + 0x157], 3
  0x0044C401: jne      0x44c754
  0x0044C29E: mov      dl, byte ptr [esi + 0x16c]
  0x0044C2A4: mov      cl, byte ptr [esi + 0x16a]
  0x0044C2AA: mov      eax, dword ptr [esi + 0x144]
  0x0044C2B0: xor      ebp, ebp
  0x0044C2B2: mov      bp, word ptr [esi + 0x150]
  0x0044C2B9: xor      edi, edi
  0x0044C2BB: mov      byte ptr [esp + 0x21], dl
  0x0044C2BF: mov      dl, byte ptr [esi + 0x16e]
  0x0044C2C5: test     ebp, ebp
  0x0044C2C7: mov      dword ptr [esp + 0x14], ebp
  0x0044C2CB: mov      byte ptr [esp + 0x20], cl
  0x0044C2CF: jle      0x44c3be
  0x0044C23D: add      esp, 4
  0x0044C240: test     eax, eax
  0x0044C242: jne      0x44c3c8
  0x0044C996: mov      eax, dword ptr [esi + 0x7c]
  0x0044C999: and      eax, ebp
  0x0044C99B: mov      dword ptr [esi + 0x7c], eax
  0x0044C99E: mov      eax, dword ptr [esi + 0x7c]
  0x0044C9A1: test     al, 8
  0x0044C9A3: je       0x44ca6a
  0x0044C95A: add      eax, 2
  0x0044C95D: mov      edi, dword ptr [esi + 0x190]
  0x0044C963: xor      edx, edx
  0x0044C965: mov      dl, byte ptr [eax - 2]
  0x0044C968: add      eax, 3
  0x0044C96B: mov      dl, byte ptr [edx + edi]
  0x0044C96E: mov      byte ptr [eax - 5], dl
  0x0044C971: mov      edi, dword ptr [esi + 0x190]
  0x0044C977: xor      edx, edx
  0x0044C979: mov      dl, byte ptr [eax - 4]
  0x0044C97C: mov      dl, byte ptr [edx + edi]
  0x0044C97F: mov      byte ptr [eax - 4], dl
  0x0044C982: mov      edi, dword ptr [esi + 0x190]
  0x0044C988: xor      edx, edx
  0x0044C98A: dec      ecx
  0x0044C98B: mov      dl, byte ptr [eax - 3]
  0x0044C98E: mov      dl, byte ptr [edx + edi]
  0x0044C991: mov      byte ptr [eax - 3], dl
  0x0044C994: jne      0x44c95d
  0x0044C9B2: cmp      byte ptr [esi + 0x157], 3
  0x0044C9B9: jne      0x44ca6a
  0x0044C428: mov      ebp, dword ptr [esi + 0x190]
  0x0044C42E: xor      eax, eax
  0x0044C430: mov      ax, word ptr [esi + 0x16a]
  0x0044C437: mov      cl, byte ptr [eax + ebp]
  0x0044C43A: mov      byte ptr [esp + 0x20], cl
  0x0044C43E: xor      ecx, ecx
  0x0044C440: mov      cx, word ptr [esi + 0x16c]
  0x0044C447: xor      edi, edi
  0x0044C449: mov      di, word ptr [esi + 0x16e]
  0x0044C450: mov      dl, byte ptr [ecx + ebp]
  0x0044C453: mov      byte ptr [esp + 0x21], dl
  0x0044C457: mov      dl, byte ptr [edi + ebp]
  0x0044C45A: mov      byte ptr [esp + 0x22], dl
  0x0044C45E: mov      edx, dword ptr [esi + 0x19c]
  0x0044C464: mov      bl, byte ptr [edx + eax]
  0x0044C467: mov      al, byte ptr [edx + ecx]
  0x0044C46A: mov      cl, byte ptr [edx + edi]
  0x0044C46D: mov      byte ptr [esp + 0x11], al
  0x0044C471: mov      byte ptr [esp + 0x12], cl
  0x0044C475: jmp      0x44c5b8
  0x0044C47A: and      eax, 0xff
  0x0044C47F: dec      eax
  0x0044C480: je       0x44c4df
  0x0044C7CC: mov      edi, dword ptr [esi + 0x18c]
  0x0044C7D2: push     edi
  0x0044C7D3: call     0x43e590
  0x0044C766: dec      eax
  0x0044C767: je       0x44c7a4
  0x0044C3BE: mov      eax, dword ptr [esi + 0x7c]
  0x0044C3C1: and      al, 0x7f
  0x0044C3C3: jmp      0x44c99b
  0x0044C2D5: add      eax, 2
  0x0044C2D8: mov      ecx, dword ptr [esi + 0x1b4]
  0x0044C2DE: mov      cl, byte ptr [ecx + edi]
  0x0044C2E1: test     cl, cl
  0x0044C2E3: jne      0x44c2f9
  0x0044C248: cmp      byte ptr [esi + 0x162], 3
  0x0044C24F: jne      0x44c268
  0x0044C95D: mov      edi, dword ptr [esi + 0x190]
  0x0044C963: xor      edx, edx
  0x0044C965: mov      dl, byte ptr [eax - 2]
  0x0044C968: add      eax, 3
  0x0044C96B: mov      dl, byte ptr [edx + edi]
  0x0044C96E: mov      byte ptr [eax - 5], dl
  0x0044C971: mov      edi, dword ptr [esi + 0x190]
  0x0044C977: xor      edx, edx
  0x0044C979: mov      dl, byte ptr [eax - 4]
  0x0044C97C: mov      dl, byte ptr [edx + edi]
  0x0044C97F: mov      byte ptr [eax - 4], dl
  0x0044C982: mov      edi, dword ptr [esi + 0x190]
  0x0044C988: xor      edx, edx
  0x0044C98A: dec      ecx
  0x0044C98B: mov      dl, byte ptr [eax - 3]
  0x0044C98E: mov      dl, byte ptr [edx + edi]
  0x0044C991: mov      byte ptr [eax - 3], dl
  0x0044C994: jne      0x44c95d
  0x0044C9BF: xor      ecx, ecx
  0x0044C9C1: mov      edx, 8
  0x0044C9C6: mov      cl, byte ptr [esi + 0x1a8]
  0x0044C9CC: xor      ebp, ebp
  0x0044C9CE: mov      bp, word ptr [esi + 0x148]
  0x0044C9D5: sub      edx, ecx
  0x0044C9D7: and      al, 0xf7
  0x0044C9D9: test     edx, edx
  0x0044C9DB: mov      dword ptr [esi + 0x7c], eax
  0x0044C9DE: jle      0x44ca00
  0x0044C5B8: mov      eax, dword ptr [esp + 0x14]
  0x0044C5BC: xor      edi, edi
  0x0044C5BE: test     eax, eax
  0x0044C5C0: jle      0x44c747
  0x0044C4DF: mov      edi, dword ptr [esi + 0x18c]
  0x0044C4E5: mov      ebx, 0x186a0
  0x0044C4EA: push     ebx
  0x0044C4EB: call     0x43e590
  0x0044C482: dec      eax
  0x0044C483: je       0x44c4b7
  0x0044C7D8: push     ebp
  0x0044C7D9: mov      ebx, eax
  0x0044C7DB: call     0x43e590
  0x0044C7A4: mov      eax, dword ptr [esi + 0x2dc]
  0x0044C7AA: push     eax
  0x0044C7AB: call     0x43e540
  0x0044C769: dec      eax
  0x0044C76A: je       0x44c77c
  0x0044C99B: mov      dword ptr [esi + 0x7c], eax
  0x0044C99E: mov      eax, dword ptr [esi + 0x7c]
  0x0044C9A1: test     al, 8
  0x0044C9A3: je       0x44ca6a
  0x0044C2E5: mov      bx, word ptr [esp + 0x20]
  0x0044C2EA: lea      ecx, [eax - 2]
  0x0044C2ED: mov      word ptr [eax - 2], bx
  0x0044C2F1: mov      byte ptr [ecx + 2], dl
  0x0044C2F4: jmp      0x44c3b2
  0x0044C2F9: cmp      cl, 0xff
  0x0044C2FC: je       0x44c3b2
  0x0044C251: mov      ecx, dword ptr [esi + 0x164]
  0x0044C257: push     ecx
  0x0044C258: call     0x43e590
  0x0044CA00: xor      ecx, ecx
  0x0044CA02: mov      ebx, 8
  0x0044CA07: mov      cl, byte ptr [esi + 0x1a9]
  0x0044CA0D: sub      ebx, ecx
  0x0044CA0F: test     ebx, ebx
  0x0044CA11: jle      0x44ca36
  0x0044C9E0: cmp      edx, 8
  0x0044C9E3: jge      0x44ca00
  0x0044C747: mov      eax, dword ptr [esi + 0x7c]
  0x0044C74A: and      eax, 0xffffdf7f
  0x0044C74F: jmp      0x44c99b
  0x0044C5C6: mov      ecx, dword ptr [esp + 0x18]
  0x0044C5CA: add      ecx, 2
  0x0044C5CD: xor      edx, edx
  0x0044C5CF: mov      dx, word ptr [esi + 0x150]
  0x0044C5D6: cmp      edi, edx
  0x0044C5D8: jge      0x44c706
  0x0044C4F0: add      esp, 4
  0x0044C4F3: test     eax, eax
  0x0044C4F5: je       0x44c538
  0x0044C4B7: mov      edx, dword ptr [esi + 0x2dc]
  0x0044C4BD: push     edx
  0x0044C4BE: call     0x43e540
  0x0044C485: dec      eax
  0x0044C486: je       0x44c48f
  0x0044C7E0: add      esp, 8
  0x0044C7E3: mov      dword ptr [esp + 0x20], eax
  0x0044C7E7: test     ebx, ebx
  0x0044C7E9: je       0x44c806
  0x0044C7B0: mov      ecx, dword ptr [esi + 0x18c]
  0x0044C7B6: mov      edx, dword ptr [esi + 0x2dc]
  0x0044C7BC: push     ecx
  0x0044C7BD: push     edx
  0x0044C7BE: mov      edi, eax
  0x0044C7C0: call     0x43e5b0
  0x0044C77C: mov      eax, dword ptr [esi + 0x164]
  0x0044C782: push     eax
  0x0044C783: call     0x43e540
  0x0044C76C: push     0x2fb2c3c
  0x0044C771: push     esi
  0x0044C772: call     0x4463d0
  0x0044C3B2: inc      edi
  0x0044C3B3: add      eax, 3
  0x0044C3B6: cmp      edi, ebp
  0x0044C3B8: jl       0x44c2d8
  0x0044C302: movzx    bp, byte ptr [esp + 0x20]
  0x0044C308: movzx    cx, cl
  0x0044C30C: mov      ebx, 0xff
  0x0044C311: sub      ebx, ecx
  0x0044C313: imul     ebx, ebp
  0x0044C316: movzx    bp, byte ptr [eax - 2]
  0x0044C31B: imul     ebp, ecx
  0x0044C31E: lea      ecx, [ebx + ebp + 0x80]
  0x0044C325: and      ecx, 0xffff
  0x0044C32B: mov      ebx, ecx
  0x0044C32D: shr      ebx, 8
  0x0044C330: add      ebx, ecx
  0x0044C332: sar      ebx, 8
  0x0044C335: movzx    bp, byte ptr [esp + 0x21]
  0x0044C33B: mov      byte ptr [eax - 2], bl
  0x0044C33E: mov      ecx, dword ptr [esi + 0x1b4]
  0x0044C344: mov      ebx, 0xff
  0x0044C349: movzx    cx, byte ptr [ecx + edi]
  0x0044C34E: sub      ebx, ecx
  0x0044C350: imul     ebx, ebp
  0x0044C353: movzx    bp, byte ptr [eax - 1]
  0x0044C358: imul     ebp, ecx
  0x0044C35B: lea      ecx, [ebx + ebp + 0x80]
  0x0044C362: and      ecx, 0xffff
  0x0044C368: mov      ebx, ecx
  0x0044C36A: shr      ebx, 8
  0x0044C36D: add      ebx, ecx
  0x0044C36F: sar      ebx, 8
  0x0044C372: mov      byte ptr [eax - 1], bl
  0x0044C375: mov      ecx, dword ptr [esi + 0x1b4]
  0x0044C37B: mov      ebx, 0xff
  0x0044C380: movzx    cx, byte ptr [ecx + edi]
  0x0044C385: movzx    bp, dl
  0x0044C389: sub      ebx, ecx
  0x0044C38B: imul     ebx, ebp
  0x0044C38E: movzx    bp, byte ptr [eax]
  0x0044C392: imul     ebp, ecx
  0x0044C395: lea      ecx, [ebx + ebp + 0x80]
  0x0044C39C: mov      ebp, dword ptr [esp + 0x14]
  0x0044C3A0: and      ecx, 0xffff
  0x0044C3A6: mov      ebx, ecx
  0x0044C3A8: shr      ebx, 8
  0x0044C3AB: add      ebx, ecx
  0x0044C3AD: sar      ebx, 8
  0x0044C3B0: mov      byte ptr [eax], bl
  0x0044C3B2: inc      edi
  0x0044C3B3: add      eax, 3
  0x0044C3B6: cmp      edi, ebp
  0x0044C3B8: jl       0x44c2d8
  0x0044C25D: add      esp, 4
  0x0044C260: test     eax, eax
  0x0044C262: jne      0x44c3c8
  0x0044CA36: xor      ecx, ecx
  0x0044CA38: mov      ebx, 8
  0x0044CA3D: mov      cl, byte ptr [esi + 0x1aa]
  0x0044CA43: sub      ebx, ecx
  0x0044CA45: test     ebx, ebx
  0x0044CA47: jle      0x44ca6a
  0x0044CA13: cmp      ebx, 8
  0x0044CA16: jge      0x44ca36
  0x0044C9E5: test     ebp, ebp
  0x0044C9E7: jle      0x44ca00
  0x0044C5DE: mov      eax, dword ptr [esi + 0x1b4]
  0x0044C5E4: mov      dl, byte ptr [eax + edi]
  0x0044C5E7: cmp      dl, 0xff
  0x0044C5EA: je       0x44c706
  0x0044C706: mov      eax, dword ptr [esi + 0x190]
  0x0044C70C: xor      edx, edx
  0x0044C70E: mov      dl, byte ptr [ecx - 2]
  0x0044C711: mov      dl, byte ptr [edx + eax]
  0x0044C714: xor      eax, eax
  0x0044C716: mov      byte ptr [ecx - 2], dl
  0x0044C719: mov      al, byte ptr [ecx - 1]
  0x0044C71C: mov      edx, dword ptr [esi + 0x190]
  0x0044C722: mov      al, byte ptr [eax + edx]
  0x0044C725: xor      edx, edx
  0x0044C727: mov      byte ptr [ecx - 1], al
  0x0044C72A: mov      dl, byte ptr [ecx]
  0x0044C72C: mov      eax, dword ptr [esi + 0x190]
  0x0044C732: mov      dl, byte ptr [edx + eax]
  0x0044C735: mov      byte ptr [ecx], dl
  0x0044C737: mov      eax, dword ptr [esp + 0x14]
  0x0044C73B: inc      edi
  0x0044C73C: add      ecx, 3
  0x0044C73F: cmp      edi, eax
  0x0044C741: jl       0x44c5cd
  0x0044C538: mov      dl, byte ptr [esi + 0x16a]
  0x0044C53E: mov      al, byte ptr [esi + 0x16c]
  0x0044C544: mov      cl, byte ptr [esi + 0x16e]
  0x0044C54A: mov      byte ptr [esp + 0x20], dl
  0x0044C54E: mov      byte ptr [esp + 0x21], al
  0x0044C552: mov      byte ptr [esp + 0x22], cl
  0x0044C556: push     edi
  0x0044C557: call     0x43e590
  0x0044C4F7: xor      edx, edx
  0x0044C4F9: push     ebx
  0x0044C4FA: mov      dx, word ptr [esi + 0x16a]
  0x0044C501: push     edx
  0x0044C502: call     0x43e600
  0x0044C4C3: mov      ecx, dword ptr [esi + 0x2dc]
  0x0044C4C9: mov      edi, eax
  0x0044C4CB: mov      eax, dword ptr [esi + 0x18c]
  0x0044C4D1: push     eax
  0x0044C4D2: push     ecx
  0x0044C4D3: call     0x43e5b0
  0x0044C48F: mov      edx, dword ptr [esi + 0x164]
  0x0044C495: push     edx
  0x0044C496: call     0x43e540
  0x0044C488: mov      edi, 0x186a0
  0x0044C48D: jmp      0x44c4e5
  0x0044C806: mov      eax, dword ptr [esp + 0x20]
  0x0044C80A: test     eax, eax
  0x0044C80C: je       0x44c829
  0x0044C7EB: xor      eax, eax
  0x0044C7ED: push     edi
  0x0044C7EE: mov      ax, word ptr [esi + 0x170]
  0x0044C7F5: push     eax
  0x0044C7F6: push     esi
  0x0044C7F7: call     0x43e6c0
  0x0044C7C5: add      esp, 0xc
  0x0044C7C8: mov      ebp, eax
  0x0044C7CA: jmp      0x44c7d2
  0x0044C788: mov      ecx, dword ptr [esi + 0x18c]
  0x0044C78E: mov      edx, dword ptr [esi + 0x164]
  0x0044C794: push     ecx
  0x0044C795: push     edx
  0x0044C796: mov      edi, eax
  0x0044C798: call     0x43e5b0
  0x0044C777: add      esp, 8
  0x0044C77A: jmp      0x44c7d2
  0x0044C2D8: mov      ecx, dword ptr [esi + 0x1b4]
  0x0044C2DE: mov      cl, byte ptr [ecx + edi]
  0x0044C2E1: test     cl, cl
  0x0044C2E3: jne      0x44c2f9
  0x0044CA49: cmp      ebx, 8
  0x0044CA4C: jge      0x44ca6a
  0x0044CA18: test     ebp, ebp
  0x0044CA1A: jle      0x44ca36
  0x0044C9E9: xor      edi, edi
  0x0044C9EB: mov      ebx, ebp
  0x0044C9ED: mov      eax, dword ptr [esi + 0x144]
  0x0044C9F3: mov      cl, dl
  0x0044C9F5: shr      byte ptr [eax + edi], cl
  0x0044C9F8: add      eax, edi
  0x0044C9FA: add      edi, 3
  0x0044C9FD: dec      ebx
  0x0044C9FE: jne      0x44c9ed
  0x0044C5F0: test     dl, dl
  0x0044C5F2: jne      0x44c60c
  0x0044C5CD: xor      edx, edx
  0x0044C5CF: mov      dx, word ptr [esi + 0x150]
  0x0044C5D6: cmp      edi, edx
  0x0044C5D8: jge      0x44c706
  0x0044C55C: add      esp, 4
  0x0044C55F: test     eax, eax
  0x0044C561: je       0x44c59e
  0x0044C507: mov      byte ptr [esp + 0x28], al
  0x0044C50B: xor      eax, eax
  0x0044C50D: mov      ax, word ptr [esi + 0x16c]
  0x0044C514: push     ebx
  0x0044C515: push     eax
  0x0044C516: call     0x43e600
  0x0044C4D8: add      esp, 0xc
  0x0044C4DB: mov      ebx, eax
  0x0044C4DD: jmp      0x44c4ea
  0x0044C49B: mov      ecx, dword ptr [esi + 0x164]
  0x0044C4A1: mov      edi, eax
  0x0044C4A3: mov      eax, dword ptr [esi + 0x18c]
  0x0044C4A9: push     eax
  0x0044C4AA: push     ecx
  0x0044C4AB: call     0x43e5b0
  0x0044C4E5: mov      ebx, 0x186a0
  0x0044C4EA: push     ebx
  0x0044C4EB: call     0x43e590
  0x0044C829: mov      ax, word ptr [esi + 0x16a]
  0x0044C830: cmp      ax, word ptr [esi + 0x16c]
  0x0044C837: jne      0x44c88b
  0x0044C80E: xor      ecx, ecx
  0x0044C810: push     ebp
  0x0044C811: mov      cx, word ptr [esi + 0x170]
  0x0044C818: push     ecx
  0x0044C819: push     esi
  0x0044C81A: call     0x43e6c0
  0x0044C7FC: add      esp, 0xc
  0x0044C7FF: mov      word ptr [esi + 0x17a], ax
  0x0044C806: mov      eax, dword ptr [esp + 0x20]
  0x0044C80A: test     eax, eax
  0x0044C80C: je       0x44c829
  0x0044C7D2: push     edi
  0x0044C7D3: call     0x43e590
  0x0044C79D: add      esp, 0xc
  0x0044C7A0: mov      ebp, eax
  0x0044C7A2: jmp      0x44c7d2
  0x0044CA4E: test     ebp, ebp
  0x0044CA50: jle      0x44ca6a
  0x0044CA1C: xor      edx, edx
  0x0044CA1E: mov      edi, ebp
  0x0044CA20: mov      eax, dword ptr [esi + 0x144]
  0x0044CA26: mov      cl, bl
  0x0044CA28: shr      byte ptr [edx + eax + 1], cl
  0x0044CA2C: lea      eax, [edx + eax + 1]
  0x0044CA30: add      edx, 3
  0x0044CA33: dec      edi
  0x0044CA34: jne      0x44ca20
  0x0044C9ED: mov      eax, dword ptr [esi + 0x144]
  0x0044C9F3: mov      cl, dl
  0x0044C9F5: shr      byte ptr [eax + edi], cl
  0x0044C9F8: add      eax, edi
  0x0044C9FA: add      edi, 3
  0x0044C9FD: dec      ebx
  0x0044C9FE: jne      0x44c9ed
  0x0044C5F4: mov      ax, word ptr [esp + 0x20]
  0x0044C5F9: lea      edx, [ecx - 2]
  0x0044C5FC: mov      word ptr [ecx - 2], ax
  0x0044C600: mov      al, byte ptr [esp + 0x22]
  0x0044C604: mov      byte ptr [edx + 2], al
  0x0044C607: jmp      0x44c737
  0x0044C60C: mov      ebp, dword ptr [esi + 0x19c]
  0x0044C612: xor      eax, eax
  0x0044C614: mov      al, byte ptr [ecx - 2]
  0x0044C617: movzx    dx, dl
  0x0044C61B: movzx    ax, byte ptr [eax + ebp]
  0x0044C620: mov      ebp, 0xff
  0x0044C625: imul     eax, edx
  0x0044C628: sub      ebp, edx
  0x0044C62A: xor      dx, dx
  0x0044C62D: mov      dl, bl
  0x0044C62F: imul     ebp, edx
  0x0044C632: lea      edx, [eax + ebp + 0x80]
  0x0044C639: and      edx, 0xffff
  0x0044C63F: mov      eax, edx
  0x0044C641: shr      eax, 8
  0x0044C644: add      eax, edx
  0x0044C646: mov      edx, dword ptr [esi + 0x198]
  0x0044C64C: sar      eax, 8
  0x0044C64F: and      eax, 0xff
  0x0044C654: mov      al, byte ptr [eax + edx]
  0x0044C657: mov      byte ptr [ecx - 2], al
  0x0044C65A: mov      edx, dword ptr [esi + 0x1b4]
  0x0044C660: mov      ebp, dword ptr [esi + 0x19c]
  0x0044C666: xor      eax, eax
  0x0044C668: mov      al, byte ptr [ecx - 1]
  0x0044C66B: movzx    dx, byte ptr [edx + edi]
  0x0044C670: movzx    ax, byte ptr [eax + ebp]
  0x0044C675: mov      ebp, 0xff
  0x0044C67A: imul     eax, edx
  0x0044C67D: sub      ebp, edx
  0x0044C67F: movzx    dx, byte ptr [esp + 0x11]
  0x0044C685: imul     ebp, edx
  0x0044C688: lea      edx, [eax + ebp + 0x80]
  0x0044C68F: and      edx, 0xffff
  0x0044C695: mov      eax, edx
  0x0044C697: shr      eax, 8
  0x0044C69A: add      eax, edx
  0x0044C69C: mov      edx, dword ptr [esi + 0x198]
  0x0044C6A2: sar      eax, 8
  0x0044C6A5: and      eax, 0xff
  0x0044C6AA: mov      al, byte ptr [eax + edx]
  0x0044C6AD: mov      byte ptr [ecx - 1], al
  0x0044C6B0: mov      edx, dword ptr [esi + 0x1b4]
  0x0044C6B6: mov      ebp, dword ptr [esi + 0x19c]
  0x0044C6BC: xor      eax, eax
  0x0044C6BE: mov      al, byte ptr [ecx]
  0x0044C6C0: movzx    dx, byte ptr [edx + edi]
  0x0044C6C5: movzx    ax, byte ptr [eax + ebp]
  0x0044C6CA: mov      ebp, 0xff
  0x0044C6CF: imul     eax, edx
  0x0044C6D2: sub      ebp, edx
  0x0044C6D4: movzx    dx, byte ptr [esp + 0x12]
  0x0044C6DA: imul     ebp, edx
  0x0044C6DD: lea      edx, [eax + ebp + 0x80]
  0x0044C6E4: and      edx, 0xffff
  0x0044C6EA: mov      eax, edx
  0x0044C6EC: shr      eax, 8
  0x0044C6EF: add      eax, edx
  0x0044C6F1: mov      edx, dword ptr [esi + 0x198]
  0x0044C6F7: sar      eax, 8
  0x0044C6FA: and      eax, 0xff
  0x0044C6FF: mov      al, byte ptr [eax + edx]
  0x0044C702: mov      byte ptr [ecx], al
  0x0044C704: jmp      0x44c737
  0x0044C59E: mov      dl, byte ptr [esi + 0x16c]
  0x0044C5A4: mov      bl, byte ptr [esi + 0x16a]
  0x0044C5AA: mov      al, byte ptr [esi + 0x16e]
  0x0044C5B0: mov      byte ptr [esp + 0x11], dl
  0x0044C5B4: mov      byte ptr [esp + 0x12], al
  0x0044C5B8: mov      eax, dword ptr [esp + 0x14]
  0x0044C5BC: xor      edi, edi
  0x0044C5BE: test     eax, eax
  0x0044C5C0: jle      0x44c747
  0x0044C563: xor      edx, edx
  0x0044C565: push     edi
  0x0044C566: mov      dx, word ptr [esi + 0x16a]
  0x0044C56D: push     edx
  0x0044C56E: call     0x43e600
  0x0044C51B: xor      ecx, ecx
  0x0044C51D: push     ebx
  0x0044C51E: mov      cx, word ptr [esi + 0x16e]
  0x0044C525: mov      byte ptr [esp + 0x35], al
  0x0044C529: push     ecx
  0x0044C52A: call     0x43e600
  0x0044C4EA: push     ebx
  0x0044C4EB: call     0x43e590
  0x0044C4B0: add      esp, 0xc
  0x0044C4B3: mov      ebx, eax
  0x0044C4B5: jmp      0x44c4ea
  0x0044C839: cmp      ax, word ptr [esi + 0x16e]
  0x0044C840: jne      0x44c88b
  0x0044C88B: test     ebx, ebx
  0x0044C88D: je       0x44c8d6
  0x0044C81F: add      esp, 0xc
  0x0044C822: mov      word ptr [esi + 0x170], ax
  0x0044C829: mov      ax, word ptr [esi + 0x16a]
  0x0044C830: cmp      ax, word ptr [esi + 0x16c]
  0x0044C837: jne      0x44c88b
  0x0044CA52: xor      edx, edx
  0x0044CA54: mov      eax, dword ptr [esi + 0x144]
  0x0044CA5A: mov      cl, bl
  0x0044CA5C: shr      byte ptr [edx + eax + 2], cl
  0x0044CA60: lea      eax, [edx + eax + 2]
  0x0044CA64: add      edx, 3
  0x0044CA67: dec      ebp
  0x0044CA68: jne      0x44ca54
  0x0044CA20: mov      eax, dword ptr [esi + 0x144]
  0x0044CA26: mov      cl, bl
  0x0044CA28: shr      byte ptr [edx + eax + 1], cl
  0x0044CA2C: lea      eax, [edx + eax + 1]
  0x0044CA30: add      edx, 3
  0x0044CA33: dec      edi
  0x0044CA34: jne      0x44ca20
  0x0044C737: mov      eax, dword ptr [esp + 0x14]
  0x0044C73B: inc      edi
  0x0044C73C: add      ecx, 3
  0x0044C73F: cmp      edi, eax
  0x0044C741: jl       0x44c5cd
  0x0044C573: mov      bl, al
  0x0044C575: xor      eax, eax
  0x0044C577: mov      ax, word ptr [esi + 0x16c]
  0x0044C57E: push     edi
  0x0044C57F: push     eax
  0x0044C580: call     0x43e600
  0x0044C52F: add      esp, 0x18
  0x0044C532: mov      byte ptr [esp + 0x22], al
  0x0044C536: jmp      0x44c556
  0x0044C842: mov      cx, word ptr [esi + 0x170]
  0x0044C849: cmp      ax, cx
  0x0044C84C: jne      0x44c88b
  0x0044C8D6: mov      eax, dword ptr [esp + 0x20]
  0x0044C8DA: test     eax, eax
  0x0044C8DC: je       0x44c929
  0x0044C88F: and      eax, 0xffff
  0x0044C894: push     edi
  0x0044C895: push     eax
  0x0044C896: push     esi
  0x0044C897: call     0x43e6c0
  0x0044CA54: mov      eax, dword ptr [esi + 0x144]
  0x0044CA5A: mov      cl, bl
  0x0044CA5C: shr      byte ptr [edx + eax + 2], cl
  0x0044CA60: lea      eax, [edx + eax + 2]
  0x0044CA64: add      edx, 3
  0x0044CA67: dec      ebp
  0x0044CA68: jne      0x44ca54
  0x0044C585: xor      ecx, ecx
  0x0044C587: push     edi
  0x0044C588: mov      cx, word ptr [esi + 0x16e]
  0x0044C58F: mov      byte ptr [esp + 0x25], al
  0x0044C593: push     ecx
  0x0044C594: call     0x43e600
  0x0044C556: push     edi
  0x0044C557: call     0x43e590
  0x0044C84E: mov      ax, word ptr [esi + 0x17a]
  0x0044C855: mov      word ptr [esi + 0x16e], cx
  0x0044C85C: mov      word ptr [esi + 0x178], ax
  0x0044C863: mov      word ptr [esi + 0x176], ax
  0x0044C86A: mov      word ptr [esi + 0x174], ax
  0x0044C871: mov      word ptr [esi + 0x16c], cx
  0x0044C878: mov      word ptr [esi + 0x16a], cx
  0x0044C87F: mov      byte ptr [esi + 0x162], 1
  0x0044C886: jmp      0x44c99e
  0x0044C929: mov      byte ptr [esi + 0x162], 1
  0x0044C930: jmp      0x44c99e
  0x0044C8DE: xor      ecx, ecx
  0x0044C8E0: push     ebp
  0x0044C8E1: mov      cx, word ptr [esi + 0x16a]
  0x0044C8E8: push     ecx
  0x0044C8E9: push     esi
  0x0044C8EA: call     0x43e6c0
  0x0044C89C: xor      edx, edx
  0x0044C89E: push     edi
  0x0044C89F: mov      dx, word ptr [esi + 0x16c]
  0x0044C8A6: mov      word ptr [esi + 0x174], ax
  0x0044C8AD: push     edx
  0x0044C8AE: push     esi
  0x0044C8AF: call     0x43e6c0
  0x0044C599: add      esp, 0x18
  0x0044C59C: jmp      0x44c5b4
  0x0044C8EF: xor      edx, edx
  0x0044C8F1: push     ebp
  0x0044C8F2: mov      dx, word ptr [esi + 0x16c]
  0x0044C8F9: mov      word ptr [esi + 0x16a], ax
  0x0044C900: push     edx
  0x0044C901: push     esi
  0x0044C902: call     0x43e6c0
  0x0044C8B4: mov      word ptr [esi + 0x176], ax
  0x0044C8BB: xor      eax, eax
  0x0044C8BD: mov      ax, word ptr [esi + 0x16e]
  0x0044C8C4: push     edi
  0x0044C8C5: push     eax
  0x0044C8C6: push     esi
  0x0044C8C7: call     0x43e6c0
  0x0044C5B4: mov      byte ptr [esp + 0x12], al
  0x0044C5B8: mov      eax, dword ptr [esp + 0x14]
  0x0044C5BC: xor      edi, edi
  0x0044C5BE: test     eax, eax
  0x0044C5C0: jle      0x44c747
  0x0044C907: mov      word ptr [esi + 0x16c], ax
  0x0044C90E: xor      eax, eax
  0x0044C910: mov      ax, word ptr [esi + 0x16e]
  0x0044C917: push     ebp
  0x0044C918: push     eax
  0x0044C919: push     esi
  0x0044C91A: call     0x43e6c0
  0x0044C8CC: add      esp, 0x24
  0x0044C8CF: mov      word ptr [esi + 0x178], ax
  0x0044C8D6: mov      eax, dword ptr [esp + 0x20]
  0x0044C8DA: test     eax, eax
  0x0044C8DC: je       0x44c929
  0x0044C91F: add      esp, 0x24
  0x0044C922: mov      word ptr [esi + 0x16e], ax
  0x0044C929: mov      byte ptr [esi + 0x162], 1
  0x0044C930: jmp      0x44c99e

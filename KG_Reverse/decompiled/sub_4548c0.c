
/*
 * ============================================================
 * KG.exe 反编译分析 - sub_4548c0
 * ============================================================
 *
 * 函数地址: 0x004548C0
 * 基本块数: 163
 * 指令数:   1329
 * 复杂度:   中复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_4548c0(void) {

  /* 代码块 1 @ 0x004548C0 */
  // 分配 0x30 字节栈空间
  // 读取全局变量值 [esp + 0x38]
  // 保存寄存器 ebx
  // 从栈读取参数 0x38 到 ebx
  // 保存寄存器 ebp
  // mov ecx, dword ptr [eax]
  // mov edx, dword ptr [eax + 4]
  // 读取全局变量值 [ebx + 0x20]
  // mov ebp, dword ptr [ebx + 0x1c]
  // mov dword ptr [esp + 8], ecx
  // mov ecx, dword ptr [ebx + 0x34]
  // 写入栈变量 [esp+0x10] = eax
  // 读取全局变量值 [ebx + 0x30]
  // 保存寄存器 esi
  // CMP ecx, eax (set flags)
  // 保存寄存器 edi
  // 写入栈变量 [esp+0x14] = edx
  // 写入栈变量 [esp+0x44] = ecx
  // if (above or equal) goto 0x4548f9
  /* 代码块 2 @ 0x004548F4 */
  // sub eax, ecx
  // dec eax
  goto 0x4548fe;
  /* 代码块 3 @ 0x004548F9 */
  // 读取全局变量值 [ebx + 0x2c]
  // sub eax, ecx
  // 写入栈变量 [esp+0x1c] = eax
  // 读取全局变量值 [ebx]
  // CMP eax, 9 (set flags)
  // if (above) goto 0x45553b
  // 写入栈变量 [esp+0x1c] = eax
  // 读取全局变量值 [ebx]
  // CMP eax, 9 (set flags)
  // if (above) goto 0x45553b
  /* 代码块 4 @ 0x0045490D */
  goto dword ptr [eax*4 + 0x455580];
  /* 代码块 5 @ 0x0045553B */
  // 从栈读取参数 0x18 到 edx
  // 读取全局变量值 [esp + 0x48]
  // 从栈读取参数 0x14 到 ecx
  // mov dword ptr [ebx + 0x20], edx
  // mov dword ptr [ebx + 0x1c], ebp
  // mov esi, dword ptr [eax]
  // mov ebp, dword ptr [eax + 8]
  // mov dword ptr [eax + 4], ecx
  // 从栈读取参数 0x10 到 ecx
  // push -2
  // mov edx, ecx
  // mov dword ptr [eax], ecx
  // 从栈读取参数 0x48 到 ecx
  // sub edx, esi
  // add ebp, edx
  // 保存寄存器 eax
  // mov dword ptr [eax + 8], ebp
  // 保存寄存器 ebx
  // mov dword ptr [ebx + 0x34], ecx
  // 直接调用函数 0x0045DAF0
  call(0x0045DAF0);
  /* 代码块 6 @ 0x00454A0A */
  // 从栈读取参数 0x18 到 esi
  // 从栈读取参数 0x14 到 edi
  // 读取全局变量值 [esp + 0x10]
  // CMP ebp, 0x20 (set flags)
  // if (above or equal) goto 0x454a47
  /* 代码块 7 @ 0x00454BAC */
  // 从栈读取参数 0x18 到 edi
  // CMP ebp, 0xe (set flags)
  // if (above or equal) goto 0x454beb
  /* 代码块 8 @ 0x0045544C */
  // 从栈读取参数 0x44 到 ecx
  // 从栈读取参数 0x48 到 esi
  // 从栈读取参数 0x10 到 edi
  // 读取全局变量值 [esp + 0x4c]
  // mov dword ptr [ebx + 0x34], ecx
  // 保存寄存器 eax
  // 保存寄存器 esi
  // 保存寄存器 ebx
  // 直接调用函数 0x0045DAF0
  call(0x0045DAF0);
  /* 代码块 9 @ 0x00454F8E */
  // 从栈读取参数 0x18 到 edi
  // 从栈读取参数 0x48 到 esi
  // 读取全局变量值 [esp + 0x10]
  // 从栈读取参数 0x14 到 edx
  // mov dword ptr [ebx + 0x20], edi
  // mov dword ptr [ebx + 0x1c], ebp
  // mov edi, dword ptr [esi]
  // mov ecx, eax
  // mov dword ptr [esi + 4], edx
  // mov edx, dword ptr [esi + 8]
  // sub ecx, edi
  // mov dword ptr [esi], eax
  // 读取全局变量值 [esp + 0x4c]
  // add edx, ecx
  // mov dword ptr [esi + 8], edx
  // 从栈读取参数 0x44 到 edx
  // 保存寄存器 eax
  // 保存寄存器 esi
  // 保存寄存器 ebx
  // mov dword ptr [ebx + 0x34], edx
  // 直接调用函数 0x0045CBE0
  call(0x0045CBE0);
  /* 代码块 10 @ 0x004554B3 */
  // 从栈读取参数 0x44 到 ecx
  // 从栈读取参数 0x48 到 esi
  // 从栈读取参数 0x10 到 edi
  // 读取全局变量值 [esp + 0x18]
  // 从栈读取参数 0x14 到 edx
  // mov dword ptr [ebx + 0x20], eax
  // mov dword ptr [ebx + 0x1c], ebp
  // mov ebp, dword ptr [esi]
  // mov eax, edi
  // mov dword ptr [esi + 4], edx
  // mov edx, dword ptr [esi + 8]
  // sub eax, ebp
  // 保存寄存器 1
  // add edx, eax
  // 保存寄存器 esi
  // mov dword ptr [esi + 8], edx
  // mov dword ptr [esi], edi
  // 保存寄存器 ebx
  // mov dword ptr [ebx + 0x34], ecx
  // 直接调用函数 0x0045DAF0
  call(0x0045DAF0);
  /* 代码块 11 @ 0x00454914 */
  // 从栈读取参数 0x18 到 esi
  // CMP ebp, 3 (set flags)
  // if (above or equal) goto 0x454959
  /* 代码块 12 @ 0x00454C55 */
  // 从栈读取参数 0x18 到 edi
  // 从栈读取参数 0x48 到 esi
  // mov edx, dword ptr [ebx + 4]
  // 读取全局变量值 [ebx + 8]
  // shr edx, 0xa
  // add edx, 4
  // CMP eax, edx (set flags)
  // if (above or equal) goto 0x454cdb
  /* 代码块 13 @ 0x004554F7 */
  // 从栈读取参数 0x18 到 ecx
  // 读取全局变量值 [esp + 0x48]
  // 从栈读取参数 0x14 到 edx
  // mov dword ptr [ebx + 0x20], ecx
  // 从栈读取参数 0x10 到 ecx
  // mov dword ptr [ebx + 0x1c], ebp
  // mov esi, dword ptr [eax]
  // mov ebp, dword ptr [eax + 8]
  // mov dword ptr [eax + 4], edx
  // mov edx, ecx
  // sub edx, esi
  // mov dword ptr [eax], ecx
  // 从栈读取参数 0x44 到 ecx
  // add ebp, edx
  // push -3
  // 保存寄存器 eax
  // mov dword ptr [eax + 8], ebp
  // 保存寄存器 ebx
  // mov dword ptr [ebx + 0x34], ecx
  // 直接调用函数 0x0045DAF0
  call(0x0045DAF0);
  /* 代码块 14 @ 0x00454A7D */
  // 从栈读取参数 0x14 到 edi
  // TEST edi, edi (set flags)
  // 如果相等则跳转到 0x45517e
  /* 代码块 15 @ 0x00454D3E */
  // 从栈读取参数 0x18 到 edi
  // 从栈读取参数 0x48 到 esi
  // 读取全局变量值 [ebx + 4]
  // mov ecx, dword ptr [ebx + 8]
  // mov edx, eax
  // and eax, 0x1f
  // shr edx, 5
  // and edx, 0x1f
  // lea eax, [edx + eax + 0x102]
  // CMP ecx, eax (set flags)
  // if (above or equal) goto 0x454ef1
  /* 代码块 16 @ 0x00455574 */
  // 释放 0xc 字节栈空间
  // 恢复寄存器 edi
  // 恢复寄存器 esi
  // 恢复寄存器 ebp
  // 恢复寄存器 ebx
  // 释放 0x30 字节栈空间
  return;
  /* 代码块 17 @ 0x00454A1B */
  // edx 清零
  // CMP edi, edx (set flags)
  // 如果相等则跳转到 0x4550fe
  /* 代码块 18 @ 0x00454A47 */
  // mov edx, esi
  // mov ecx, esi
  // not edx
  // and ecx, 0xffff
  // shr edx, 0x10
  // xor edx, ecx
  // 如果不相等则跳转到 0x455139
  /* 代码块 19 @ 0x00454BB5 */
  // 从栈读取参数 0x14 到 esi
  // 读取全局变量值 [esp + 0x10]
  // TEST esi, esi (set flags)
  // 如果相等则跳转到 0x455204
  /* 代码块 20 @ 0x00454BEB */
  // mov eax, edi
  // and eax, 0x3fff
  // mov ecx, eax
  // mov dword ptr [ebx + 4], eax
  // and ecx, 0x1f
  // CMP ecx, 0x1d (set flags)
  // if (above) goto 0x455283
  /* 代码块 21 @ 0x00455467 */
  // mov ecx, dword ptr [ebx + 0x34]
  // mov edx, dword ptr [ebx + 0x30]
  // 释放 0xc 字节栈空间
  // CMP edx, ecx (set flags)
  // 如果相等则跳转到 0x4554ab
  /* 代码块 22 @ 0x00454FCA */
  // 释放 0xc 字节栈空间
  // CMP eax, 1 (set flags)
  // 如果不相等则跳转到 0x455498
  /* 代码块 23 @ 0x004554EC */
  // 释放 0xc 字节栈空间
  // 恢复寄存器 edi
  // 恢复寄存器 esi
  // 恢复寄存器 ebp
  // 恢复寄存器 ebx
  // 释放 0x30 字节栈空间
  return;
  /* 代码块 24 @ 0x0045491D */
  // 读取全局变量值 [esp + 0x14]
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x004548C0: sub      esp, 0x30
  0x004548C3: mov      eax, dword ptr [esp + 0x38]
  0x004548C7: push     ebx
  0x004548C8: mov      ebx, dword ptr [esp + 0x38]
  0x004548CC: push     ebp
  0x004548CD: mov      ecx, dword ptr [eax]
  0x004548CF: mov      edx, dword ptr [eax + 4]
  0x004548D2: mov      eax, dword ptr [ebx + 0x20]
  0x004548D5: mov      ebp, dword ptr [ebx + 0x1c]
  0x004548D8: mov      dword ptr [esp + 8], ecx
  0x004548DC: mov      ecx, dword ptr [ebx + 0x34]
  0x004548DF: mov      dword ptr [esp + 0x10], eax
  0x004548E3: mov      eax, dword ptr [ebx + 0x30]
  0x004548E6: push     esi
  0x004548E7: cmp      ecx, eax
  0x004548E9: push     edi
  0x004548EA: mov      dword ptr [esp + 0x14], edx
  0x004548EE: mov      dword ptr [esp + 0x44], ecx
  0x004548F2: jae      0x4548f9
  0x004548F4: sub      eax, ecx
  0x004548F6: dec      eax
  0x004548F7: jmp      0x4548fe
  0x004548F9: mov      eax, dword ptr [ebx + 0x2c]
  0x004548FC: sub      eax, ecx
  0x004548FE: mov      dword ptr [esp + 0x1c], eax
  0x00454902: mov      eax, dword ptr [ebx]
  0x00454904: cmp      eax, 9
  0x00454907: ja       0x45553b
  0x004548FE: mov      dword ptr [esp + 0x1c], eax
  0x00454902: mov      eax, dword ptr [ebx]
  0x00454904: cmp      eax, 9
  0x00454907: ja       0x45553b
  0x0045490D: jmp      dword ptr [eax*4 + 0x455580]
  0x0045553B: mov      edx, dword ptr [esp + 0x18]
  0x0045553F: mov      eax, dword ptr [esp + 0x48]
  0x00455543: mov      ecx, dword ptr [esp + 0x14]
  0x00455547: mov      dword ptr [ebx + 0x20], edx
  0x0045554A: mov      dword ptr [ebx + 0x1c], ebp
  0x0045554D: mov      esi, dword ptr [eax]
  0x0045554F: mov      ebp, dword ptr [eax + 8]
  0x00455552: mov      dword ptr [eax + 4], ecx
  0x00455555: mov      ecx, dword ptr [esp + 0x10]
  0x00455559: push     -2
  0x0045555B: mov      edx, ecx
  0x0045555D: mov      dword ptr [eax], ecx
  0x0045555F: mov      ecx, dword ptr [esp + 0x48]
  0x00455563: sub      edx, esi
  0x00455565: add      ebp, edx
  0x00455567: push     eax
  0x00455568: mov      dword ptr [eax + 8], ebp
  0x0045556B: push     ebx
  0x0045556C: mov      dword ptr [ebx + 0x34], ecx
  0x0045556F: call     0x45daf0
  0x00454A0A: mov      esi, dword ptr [esp + 0x18]
  0x00454A0E: mov      edi, dword ptr [esp + 0x14]
  0x00454A12: mov      eax, dword ptr [esp + 0x10]
  0x00454A16: cmp      ebp, 0x20
  0x00454A19: jae      0x454a47
  0x00454BAC: mov      edi, dword ptr [esp + 0x18]
  0x00454BB0: cmp      ebp, 0xe
  0x00454BB3: jae      0x454beb
  0x0045544C: mov      ecx, dword ptr [esp + 0x44]
  0x00455450: mov      esi, dword ptr [esp + 0x48]
  0x00455454: mov      edi, dword ptr [esp + 0x10]
  0x00455458: mov      eax, dword ptr [esp + 0x4c]
  0x0045545C: mov      dword ptr [ebx + 0x34], ecx
  0x0045545F: push     eax
  0x00455460: push     esi
  0x00455461: push     ebx
  0x00455462: call     0x45daf0
  0x00454F8E: mov      edi, dword ptr [esp + 0x18]
  0x00454F92: mov      esi, dword ptr [esp + 0x48]
  0x00454F96: mov      eax, dword ptr [esp + 0x10]
  0x00454F9A: mov      edx, dword ptr [esp + 0x14]
  0x00454F9E: mov      dword ptr [ebx + 0x20], edi
  0x00454FA1: mov      dword ptr [ebx + 0x1c], ebp
  0x00454FA4: mov      edi, dword ptr [esi]
  0x00454FA6: mov      ecx, eax
  0x00454FA8: mov      dword ptr [esi + 4], edx
  0x00454FAB: mov      edx, dword ptr [esi + 8]
  0x00454FAE: sub      ecx, edi
  0x00454FB0: mov      dword ptr [esi], eax
  0x00454FB2: mov      eax, dword ptr [esp + 0x4c]
  0x00454FB6: add      edx, ecx
  0x00454FB8: mov      dword ptr [esi + 8], edx
  0x00454FBB: mov      edx, dword ptr [esp + 0x44]
  0x00454FBF: push     eax
  0x00454FC0: push     esi
  0x00454FC1: push     ebx
  0x00454FC2: mov      dword ptr [ebx + 0x34], edx
  0x00454FC5: call     0x45cbe0
  0x004554B3: mov      ecx, dword ptr [esp + 0x44]
  0x004554B7: mov      esi, dword ptr [esp + 0x48]
  0x004554BB: mov      edi, dword ptr [esp + 0x10]
  0x004554BF: mov      eax, dword ptr [esp + 0x18]
  0x004554C3: mov      edx, dword ptr [esp + 0x14]
  0x004554C7: mov      dword ptr [ebx + 0x20], eax
  0x004554CA: mov      dword ptr [ebx + 0x1c], ebp
  0x004554CD: mov      ebp, dword ptr [esi]
  0x004554CF: mov      eax, edi
  0x004554D1: mov      dword ptr [esi + 4], edx
  0x004554D4: mov      edx, dword ptr [esi + 8]
  0x004554D7: sub      eax, ebp
  0x004554D9: push     1
  0x004554DB: add      edx, eax
  0x004554DD: push     esi
  0x004554DE: mov      dword ptr [esi + 8], edx
  0x004554E1: mov      dword ptr [esi], edi
  0x004554E3: push     ebx
  0x004554E4: mov      dword ptr [ebx + 0x34], ecx
  0x004554E7: call     0x45daf0
  0x00454914: mov      esi, dword ptr [esp + 0x18]
  0x00454918: cmp      ebp, 3
  0x0045491B: jae      0x454959
  0x00454C55: mov      edi, dword ptr [esp + 0x18]
  0x00454C59: mov      esi, dword ptr [esp + 0x48]
  0x00454C5D: mov      edx, dword ptr [ebx + 4]
  0x00454C60: mov      eax, dword ptr [ebx + 8]
  0x00454C63: shr      edx, 0xa
  0x00454C66: add      edx, 4
  0x00454C69: cmp      eax, edx
  0x00454C6B: jae      0x454cdb
  0x004554F7: mov      ecx, dword ptr [esp + 0x18]
  0x004554FB: mov      eax, dword ptr [esp + 0x48]
  0x004554FF: mov      edx, dword ptr [esp + 0x14]
  0x00455503: mov      dword ptr [ebx + 0x20], ecx
  0x00455506: mov      ecx, dword ptr [esp + 0x10]
  0x0045550A: mov      dword ptr [ebx + 0x1c], ebp
  0x0045550D: mov      esi, dword ptr [eax]
  0x0045550F: mov      ebp, dword ptr [eax + 8]
  0x00455512: mov      dword ptr [eax + 4], edx
  0x00455515: mov      edx, ecx
  0x00455517: sub      edx, esi
  0x00455519: mov      dword ptr [eax], ecx
  0x0045551B: mov      ecx, dword ptr [esp + 0x44]
  0x0045551F: add      ebp, edx
  0x00455521: push     -3
  0x00455523: push     eax
  0x00455524: mov      dword ptr [eax + 8], ebp
  0x00455527: push     ebx
  0x00455528: mov      dword ptr [ebx + 0x34], ecx
  0x0045552B: call     0x45daf0
  0x00454A7D: mov      edi, dword ptr [esp + 0x14]
  0x00454A81: test     edi, edi
  0x00454A83: je       0x45517e
  0x00454D3E: mov      edi, dword ptr [esp + 0x18]
  0x00454D42: mov      esi, dword ptr [esp + 0x48]
  0x00454D46: mov      eax, dword ptr [ebx + 4]
  0x00454D49: mov      ecx, dword ptr [ebx + 8]
  0x00454D4C: mov      edx, eax
  0x00454D4E: and      eax, 0x1f
  0x00454D51: shr      edx, 5
  0x00454D54: and      edx, 0x1f
  0x00454D57: lea      eax, [edx + eax + 0x102]
  0x00454D5E: cmp      ecx, eax
  0x00454D60: jae      0x454ef1
  0x00455574: add      esp, 0xc
  0x00455577: pop      edi
  0x00455578: pop      esi
  0x00455579: pop      ebp
  0x0045557A: pop      ebx
  0x0045557B: add      esp, 0x30
  0x0045557E: ret      
  0x00454A1B: xor      edx, edx
  0x00454A1D: cmp      edi, edx
  0x00454A1F: je       0x4550fe
  0x00454A47: mov      edx, esi
  0x00454A49: mov      ecx, esi
  0x00454A4B: not      edx
  0x00454A4D: and      ecx, 0xffff
  0x00454A53: shr      edx, 0x10
  0x00454A56: xor      edx, ecx
  0x00454A58: jne      0x455139
  0x00454BB5: mov      esi, dword ptr [esp + 0x14]
  0x00454BB9: mov      eax, dword ptr [esp + 0x10]
  0x00454BBD: test     esi, esi
  0x00454BBF: je       0x455204
  0x00454BEB: mov      eax, edi
  0x00454BED: and      eax, 0x3fff
  0x00454BF2: mov      ecx, eax
  0x00454BF4: mov      dword ptr [ebx + 4], eax
  0x00454BF7: and      ecx, 0x1f
  0x00454BFA: cmp      ecx, 0x1d
  0x00454BFD: ja       0x455283
  0x00455467: mov      ecx, dword ptr [ebx + 0x34]
  0x0045546A: mov      edx, dword ptr [ebx + 0x30]
  0x0045546D: add      esp, 0xc
  0x00455470: cmp      edx, ecx
  0x00455472: je       0x4554ab
  0x00454FCA: add      esp, 0xc
  0x00454FCD: cmp      eax, 1
  0x00454FD0: jne      0x455498
  0x004554EC: add      esp, 0xc
  0x004554EF: pop      edi
  0x004554F0: pop      esi
  0x004554F1: pop      ebp
  0x004554F2: pop      ebx
  0x004554F3: add      esp, 0x30
  0x004554F6: ret      
  0x0045491D: mov      eax, dword ptr [esp + 0x14]
  0x00454921: mov      edi, dword ptr [esp + 0x10]
  0x00454925: test     eax, eax
  0x00454927: je       0x455034
  0x00454959: mov      edi, dword ptr [esp + 0x10]
  0x0045495D: mov      eax, esi
  0x0045495F: and      eax, 7
  0x00454962: mov      ecx, eax
  0x00454964: shr      eax, 1
  0x00454966: and      ecx, 1
  0x00454969: cmp      eax, 3
  0x0045496C: mov      dword ptr [ebx + 0x18], ecx
  0x0045496F: ja       0x454902
  0x00454C6D: cmp      ebp, 3
  0x00454C70: jae      0x454caa
  0x00454CDB: mov      ecx, dword ptr [ebx + 8]
  0x00454CDE: mov      eax, 0x13
  0x00454CE3: cmp      ecx, eax
  0x00454CE5: jae      0x454d08
  0x00455530: add      esp, 0xc
  0x00455533: pop      edi
  0x00455534: pop      esi
  0x00455535: pop      ebp
  0x00455536: pop      ebx
  0x00455537: add      esp, 0x30
  0x0045553A: ret      
  0x0045517E: mov      ecx, dword ptr [esp + 0x18]
  0x00455182: mov      eax, dword ptr [esp + 0x48]
  0x00455186: mov      dword ptr [ebx + 0x20], ecx
  0x00455189: mov      ecx, dword ptr [esp + 0x10]
  0x0045518D: mov      dword ptr [ebx + 0x1c], ebp
  0x00455190: mov      esi, dword ptr [eax]
  0x00455192: mov      ebp, dword ptr [eax + 8]
  0x00455195: mov      edx, ecx
  0x00455197: sub      edx, esi
  0x00455199: mov      dword ptr [eax], ecx
  0x0045519B: mov      ecx, dword ptr [esp + 0x44]
  0x0045519F: add      ebp, edx
  0x004551A1: mov      edx, dword ptr [esp + 0x4c]
  0x004551A5: mov      dword ptr [eax + 4], 0
  0x004551AC: push     edx
  0x004551AD: push     eax
  0x004551AE: mov      dword ptr [eax + 8], ebp
  0x004551B1: push     ebx
  0x004551B2: mov      dword ptr [ebx + 0x34], ecx
  0x004551B5: call     0x45daf0
  0x00454A89: mov      ecx, dword ptr [esp + 0x1c]
  0x00454A8D: test     ecx, ecx
  0x00454A8F: jne      0x454b36
  0x00454D66: mov      eax, dword ptr [ebx + 0x10]
  0x00454D69: cmp      ebp, eax
  0x00454D6B: jae      0x454da8
  0x00454EF1: mov      ecx, dword ptr [ebx + 0x24]
  0x00454EF4: mov      eax, dword ptr [ebx + 4]
  0x00454EF7: push     esi
  0x00454EF8: push     ecx
  0x00454EF9: lea      edx, [esp + 0x40]
  0x00454EFD: lea      ecx, [esp + 0x44]
  0x00454F01: push     edx
  0x00454F02: push     ecx
  0x00454F03: lea      edx, [esp + 0x2c]
  0x00454F07: lea      ecx, [esp + 0x30]
  0x00454F0B: push     edx
  0x00454F0C: mov      edx, dword ptr [ebx + 0xc]
  0x00454F0F: push     ecx
  0x00454F10: mov      ecx, eax
  0x00454F12: shr      ecx, 5
  0x00454F15: and      ecx, 0x1f
  0x00454F18: and      eax, 0x1f
  0x00454F1B: inc      ecx
  0x00454F1C: push     edx
  0x00454F1D: add      eax, 0x101
  0x00454F22: push     ecx
  0x00454F23: push     eax
  0x00454F24: mov      dword ptr [ebx + 0x14], 0
  0x00454F2B: mov      dword ptr [esp + 0x44], 9
  0x00454F33: mov      dword ptr [esp + 0x40], 6
  0x00454F3B: call     0x45d930
  0x004550FE: mov      ecx, dword ptr [esp + 0x48]
  0x00455102: mov      dword ptr [ebx + 0x20], esi
  0x00455105: mov      dword ptr [ebx + 0x1c], ebp
  0x00455108: mov      esi, dword ptr [ecx]
  0x0045510A: mov      ebp, dword ptr [ecx + 8]
  0x0045510D: mov      dword ptr [ecx + 4], edx
  0x00455110: mov      edx, eax
  0x00455112: sub      edx, esi
  0x00455114: mov      dword ptr [ecx], eax
  0x00455116: mov      eax, dword ptr [esp + 0x44]
  0x0045511A: add      ebp, edx
  0x0045511C: mov      edx, dword ptr [esp + 0x4c]
  0x00455120: mov      dword ptr [ecx + 8], ebp
  0x00455123: push     edx
  0x00455124: push     ecx
  0x00455125: push     ebx
  0x00455126: mov      dword ptr [ebx + 0x34], eax
  0x00455129: call     0x45daf0
  0x00454A25: xor      ecx, ecx
  0x00454A27: mov      dword ptr [esp + 0x4c], edx
  0x00454A2B: mov      cl, byte ptr [eax]
  0x00454A2D: dec      edi
  0x00454A2E: mov      edx, ecx
  0x00454A30: mov      ecx, ebp
  0x00454A32: shl      edx, cl
  0x00454A34: add      ebp, 8
  0x00454A37: mov      dword ptr [esp + 0x14], edi
  0x00454A3B: or       esi, edx
  0x00454A3D: inc      eax
  0x00454A3E: cmp      ebp, 0x20
  0x00454A41: mov      dword ptr [esp + 0x10], eax
  0x00454A45: jb       0x454a1b
  0x00454A5E: xor      ebp, ebp
  0x00454A60: mov      eax, ecx
  0x00454A62: cmp      eax, ebp
  0x00454A64: mov      dword ptr [ebx + 4], ecx
  0x00454A67: mov      dword ptr [esp + 0x18], ebp
  0x00454A6B: je       0x454b9b
  0x00455139: mov      ecx, dword ptr [esp + 0x48]
  0x0045513D: mov      dword ptr [ebx], 9
  0x00455143: mov      edx, eax
  0x00455145: push     -3
  0x00455147: mov      dword ptr [ecx + 0x18], 0x2fb3218
  0x0045514E: mov      dword ptr [ebx + 0x20], esi
  0x00455151: mov      dword ptr [ebx + 0x1c], ebp
  0x00455154: mov      esi, dword ptr [ecx]
  0x00455156: mov      ebp, dword ptr [ecx + 8]
  0x00455159: sub      edx, esi
  0x0045515B: add      ebp, edx
  0x0045515D: mov      dword ptr [ecx], eax
  0x0045515F: mov      eax, dword ptr [esp + 0x48]
  0x00455163: push     ecx
  0x00455164: mov      dword ptr [ecx + 4], edi
  0x00455167: mov      dword ptr [ecx + 8], ebp
  0x0045516A: push     ebx
  0x0045516B: mov      dword ptr [ebx + 0x34], eax
  0x0045516E: call     0x45daf0
  0x00455204: mov      eax, dword ptr [esp + 0x48]
  0x00455208: mov      ecx, dword ptr [esp + 0x10]
  0x0045520C: mov      dword ptr [ebx + 0x20], edi
  0x0045520F: mov      dword ptr [ebx + 0x1c], ebp
  0x00455212: mov      esi, dword ptr [eax]
  0x00455214: mov      ebp, dword ptr [eax + 8]
  0x00455217: mov      edx, ecx
  0x00455219: mov      dword ptr [eax], ecx
  0x0045521B: mov      ecx, dword ptr [esp + 0x44]
  0x0045521F: sub      edx, esi
  0x00455221: add      ebp, edx
  0x00455223: mov      edx, dword ptr [esp + 0x4c]
  0x00455227: push     edx
  0x00455228: push     eax
  0x00455229: mov      dword ptr [eax + 4], 0
  0x00455230: mov      dword ptr [eax + 8], ebp
  0x00455233: push     ebx
  0x00455234: mov      dword ptr [ebx + 0x34], ecx
  0x00455237: call     0x45daf0
  0x00454BC5: xor      ecx, ecx
  0x00454BC7: dec      esi
  0x00454BC8: mov      cl, byte ptr [eax]
  0x00454BCA: mov      dword ptr [esp + 0x4c], 0
  0x00454BD2: mov      edx, ecx
  0x00454BD4: mov      ecx, ebp
  0x00454BD6: shl      edx, cl
  0x00454BD8: add      ebp, 8
  0x00454BDB: mov      dword ptr [esp + 0x14], esi
  0x00454BDF: or       edi, edx
  0x00454BE1: inc      eax
  0x00454BE2: cmp      ebp, 0xe
  0x00454BE5: mov      dword ptr [esp + 0x10], eax
  0x00454BE9: jb       0x454bbd
  0x00454C03: mov      edx, eax
  0x00454C05: and      edx, 0x3e0
  0x00454C0B: cmp      edx, 0x3a0
  0x00454C11: ja       0x455283
  0x00455283: mov      eax, dword ptr [esp + 0x48]
  0x00455287: mov      ecx, dword ptr [esp + 0x14]
  0x0045528B: mov      dword ptr [ebx], 9
  0x00455291: push     -3
  0x00455293: mov      dword ptr [eax + 0x18], 0x2fb31f4
  0x0045529A: mov      dword ptr [ebx + 0x20], edi
  0x0045529D: mov      dword ptr [ebx + 0x1c], ebp
  0x004552A0: mov      esi, dword ptr [eax]
  0x004552A2: mov      ebp, dword ptr [eax + 8]
  0x004552A5: mov      dword ptr [eax + 4], ecx
  0x004552A8: mov      ecx, dword ptr [esp + 0x14]
  0x004552AC: push     eax
  0x004552AD: mov      edx, ecx
  0x004552AF: mov      dword ptr [eax], ecx
  0x004552B1: mov      ecx, dword ptr [esp + 0x4c]
  0x004552B5: sub      edx, esi
  0x004552B7: add      ebp, edx
  0x004552B9: push     ebx
  0x004552BA: mov      dword ptr [eax + 8], ebp
  0x004552BD: mov      dword ptr [ebx + 0x34], ecx
  0x004552C0: call     0x45daf0
  0x004554AB: mov      dword ptr [ebx], 8
  0x004554B1: jmp      0x4554bf
  0x00455474: mov      edx, dword ptr [esp + 0x18]
  0x00455478: mov      dword ptr [ebx + 0x1c], ebp
  0x0045547B: mov      dword ptr [ebx + 0x20], edx
  0x0045547E: mov      edx, dword ptr [esp + 0x14]
  0x00455482: mov      ebp, dword ptr [esi]
  0x00455484: mov      dword ptr [esi + 4], edx
  0x00455487: mov      edx, edi
  0x00455489: mov      dword ptr [esi], edi
  0x0045548B: sub      edx, ebp
  0x0045548D: mov      ebp, dword ptr [esi + 8]
  0x00455490: add      ebp, edx
  0x00455492: mov      dword ptr [esi + 8], ebp
  0x00455495: mov      dword ptr [ebx + 0x34], ecx
  0x00455498: push     eax
  0x00455499: push     esi
  0x0045549A: push     ebx
  0x0045549B: call     0x45daf0
  0x00454FD6: mov      ecx, dword ptr [ebx + 4]
  0x00454FD9: push     esi
  0x00454FDA: push     ecx
  0x00454FDB: mov      dword ptr [esp + 0x54], 0
  0x00454FE3: call     0x45d390
  0x00455498: push     eax
  0x00455499: push     esi
  0x0045549A: push     ebx
  0x0045549B: call     0x45daf0
  0x00455034: mov      eax, dword ptr [esp + 0x48]
  0x00455038: mov      dword ptr [ebx + 0x20], esi
  0x0045503B: mov      dword ptr [ebx + 0x1c], ebp
  0x0045503E: mov      ecx, edi
  0x00455040: mov      edx, dword ptr [eax]
  0x00455042: mov      ebp, dword ptr [eax + 8]
  0x00455045: sub      ecx, edx
  0x00455047: mov      edx, dword ptr [esp + 0x44]
  0x0045504B: add      ebp, ecx
  0x0045504D: mov      ecx, dword ptr [esp + 0x4c]
  0x00455051: push     ecx
  0x00455052: push     eax
  0x00455053: mov      dword ptr [eax + 4], 0
  0x0045505A: mov      dword ptr [eax + 8], ebp
  0x0045505D: mov      dword ptr [eax], edi
  0x0045505F: push     ebx
  0x00455060: mov      dword ptr [ebx + 0x34], edx
  0x00455063: call     0x45daf0
  0x0045492D: xor      ecx, ecx
  0x0045492F: dec      eax
  0x00454930: mov      cl, byte ptr [edi]
  0x00454932: mov      dword ptr [esp + 0x4c], 0
  0x0045493A: mov      edx, ecx
  0x0045493C: mov      ecx, ebp
  0x0045493E: shl      edx, cl
  0x00454940: add      ebp, 8
  0x00454943: mov      dword ptr [esp + 0x14], eax
  0x00454947: or       esi, edx
  0x00454949: inc      edi
  0x0045494A: cmp      ebp, 3
  0x0045494D: mov      dword ptr [esp + 0x18], esi
  0x00454951: mov      dword ptr [esp + 0x10], edi
  0x00454955: jb       0x454925
  0x00454971: jmp      dword ptr [eax*4 + 0x4555a8]
  0x00454902: mov      eax, dword ptr [ebx]
  0x00454904: cmp      eax, 9
  0x00454907: ja       0x45553b
  0x00454C72: mov      eax, dword ptr [esp + 0x10]
  0x00454C76: mov      ecx, dword ptr [esp + 0x14]
  0x00454C7A: test     ecx, ecx
  0x00454C7C: je       0x4552d0
  0x00454CAA: mov      ecx, dword ptr [ebx + 8]
  0x00454CAD: mov      eax, edi
  0x00454CAF: and      eax, 7
  0x00454CB2: sub      ebp, 3
  0x00454CB5: mov      edx, dword ptr [ecx*4 + 0x2f98c20]
  0x00454CBC: mov      ecx, dword ptr [ebx + 0xc]
  0x00454CBF: shr      edi, 3
  0x00454CC2: mov      dword ptr [ecx + edx*4], eax
  0x00454CC5: mov      edx, dword ptr [ebx + 8]
  0x00454CC8: inc      edx
  0x00454CC9: mov      dword ptr [ebx + 8], edx
  0x00454CCC: mov      eax, edx
  0x00454CCE: mov      edx, dword ptr [ebx + 4]
  0x00454CD1: shr      edx, 0xa
  0x00454CD4: add      edx, 4
  0x00454CD7: cmp      eax, edx
  0x00454CD9: jb       0x454c6d
  0x00454CE7: mov      ecx, dword ptr [ebx + 8]
  0x00454CEA: mov      edx, dword ptr [ecx*4 + 0x2f98c20]
  0x00454CF1: mov      ecx, dword ptr [ebx + 0xc]
  0x00454CF4: mov      dword ptr [ecx + edx*4], 0
  0x00454CFB: mov      edx, dword ptr [ebx + 8]
  0x00454CFE: inc      edx
  0x00454CFF: mov      ecx, edx
  0x00454D01: mov      dword ptr [ebx + 8], edx
  0x00454D04: cmp      ecx, eax
  0x00454D06: jb       0x454ce7
  0x00454D08: mov      edx, dword ptr [ebx + 0x24]
  0x00454D0B: push     esi
  0x00454D0C: lea      ecx, [ebx + 0x14]
  0x00454D0F: lea      eax, [ebx + 0x10]
  0x00454D12: push     edx
  0x00454D13: mov      edx, dword ptr [ebx + 0xc]
  0x00454D16: push     ecx
  0x00454D17: push     eax
  0x00454D18: push     edx
  0x00454D19: mov      dword ptr [eax], 7
  0x00454D1F: call     0x45d3b0
  0x004551BA: add      esp, 0xc
  0x004551BD: pop      edi
  0x004551BE: pop      esi
  0x004551BF: pop      ebp
  0x004551C0: pop      ebx
  0x004551C1: add      esp, 0x30
  0x004551C4: ret      
  0x00454A95: mov      ecx, dword ptr [ebx + 0x2c]
  0x00454A98: mov      edx, dword ptr [esp + 0x44]
  0x00454A9C: cmp      edx, ecx
  0x00454A9E: jne      0x454ac5
  0x00454B36: mov      eax, dword ptr [ebx + 4]
  0x00454B39: mov      dword ptr [esp + 0x4c], 0
  0x00454B41: cmp      eax, edi
  0x00454B43: jbe      0x454b47
  0x00454D6D: mov      ecx, dword ptr [esp + 0x14]
  0x00454D71: test     ecx, ecx
  0x00454D73: je       0x455329
  0x00454DA8: mov      eax, dword ptr [eax*4 + 0x2fb4530]
  0x00454DAF: mov      ecx, dword ptr [ebx + 0x14]
  0x00454DB2: and      eax, edi
  0x00454DB4: xor      edx, edx
  0x00454DB6: mov      dl, byte ptr [ecx + eax*8 + 1]
  0x00454DBA: lea      eax, [ecx + eax*8]
  0x00454DBD: mov      dword ptr [esp + 0x18], edx
  0x00454DC1: mov      eax, dword ptr [eax + 4]
  0x00454DC4: cmp      eax, 0x10
  0x00454DC7: mov      dword ptr [esp + 0x34], eax
  0x00454DCB: jae      0x454de5
  0x00454F40: mov      edx, dword ptr [ebx + 0xc]
  0x00454F43: mov      dword ptr [esp + 0x3c], eax
  0x00454F47: mov      eax, dword ptr [esi + 0x28]
  0x00454F4A: push     edx
  0x00454F4B: push     eax
  0x00454F4C: call     dword ptr [esi + 0x24]
  0x0045512E: add      esp, 0xc
  0x00455131: pop      edi
  0x00455132: pop      esi
  0x00455133: pop      ebp
  0x00455134: pop      ebx
  0x00455135: add      esp, 0x30
  0x00455138: ret      
  0x00454B9B: mov      eax, dword ptr [ebx + 0x18]
  0x00454B9E: neg      eax
  0x00454BA0: sbb      eax, eax
  0x00454BA2: and      eax, 7
  0x00454BA5: mov      dword ptr [ebx], eax
  0x00454BA7: jmp      0x454902
  0x00454A71: mov      eax, 2
  0x00454A76: mov      dword ptr [ebx], eax
  0x00454A78: jmp      0x454902
  0x00455173: add      esp, 0xc
  0x00455176: pop      edi
  0x00455177: pop      esi
  0x00455178: pop      ebp
  0x00455179: pop      ebx
  0x0045517A: add      esp, 0x30
  0x0045517D: ret      
  0x0045523C: add      esp, 0xc
  0x0045523F: pop      edi
  0x00455240: pop      esi
  0x00455241: pop      ebp
  0x00455242: pop      ebx
  0x00455243: add      esp, 0x30
  0x00455246: ret      
  0x00454BBD: test     esi, esi
  0x00454BBF: je       0x455204
  0x00454C17: mov      esi, dword ptr [esp + 0x48]
  0x00454C1B: push     4
  0x00454C1D: shr      eax, 5
  0x00454C20: and      eax, 0x1f
  0x00454C23: lea      eax, [eax + ecx + 0x102]
  0x00454C2A: mov      ecx, dword ptr [esi + 0x28]
  0x00454C2D: push     eax
  0x00454C2E: push     ecx
  0x00454C2F: call     dword ptr [esi + 0x20]
  0x004552C5: add      esp, 0xc
  0x004552C8: pop      edi
  0x004552C9: pop      esi
  0x004552CA: pop      ebp
  0x004552CB: pop      ebx
  0x004552CC: add      esp, 0x30
  0x004552CF: ret      
  0x004554BF: mov      eax, dword ptr [esp + 0x18]
  0x004554C3: mov      edx, dword ptr [esp + 0x14]
  0x004554C7: mov      dword ptr [ebx + 0x20], eax
  0x004554CA: mov      dword ptr [ebx + 0x1c], ebp
  0x004554CD: mov      ebp, dword ptr [esi]
  0x004554CF: mov      eax, edi
  0x004554D1: mov      dword ptr [esi + 4], edx
  0x004554D4: mov      edx, dword ptr [esi + 8]
  0x004554D7: sub      eax, ebp
  0x004554D9: push     1
  0x004554DB: add      edx, eax
  0x004554DD: push     esi
  0x004554DE: mov      dword ptr [esi + 8], edx
  0x004554E1: mov      dword ptr [esi], edi
  0x004554E3: push     ebx
  0x004554E4: mov      dword ptr [ebx + 0x34], ecx
  0x004554E7: call     0x45daf0
  0x004554A0: add      esp, 0xc
  0x004554A3: pop      edi
  0x004554A4: pop      esi
  0x004554A5: pop      ebp
  0x004554A6: pop      ebx
  0x004554A7: add      esp, 0x30
  0x004554AA: ret      
  0x00454FE8: mov      eax, dword ptr [ebx + 0x20]
  0x00454FEB: mov      ecx, dword ptr [ebx + 0x34]
  0x00454FEE: mov      edi, dword ptr [esi]
  0x00454FF0: mov      edx, dword ptr [esi + 4]
  0x00454FF3: mov      ebp, dword ptr [ebx + 0x1c]
  0x00454FF6: mov      dword ptr [esp + 0x20], eax
  0x00454FFA: mov      eax, dword ptr [ebx + 0x30]
  0x00454FFD: add      esp, 8
  0x00455000: cmp      ecx, eax
  0x00455002: mov      dword ptr [esp + 0x10], edi
  0x00455006: mov      dword ptr [esp + 0x14], edx
  0x0045500A: mov      dword ptr [esp + 0x44], ecx
  0x0045500E: jae      0x455015
  0x00455068: add      esp, 0xc
  0x0045506B: pop      edi
  0x0045506C: pop      esi
  0x0045506D: pop      ebp
  0x0045506E: pop      ebx
  0x0045506F: add      esp, 0x30
  0x00455072: ret      
  0x00454925: test     eax, eax
  0x00454927: je       0x455034
  0x00454957: jmp      0x45495d
  0x00454978: sub      ebp, 3
  0x0045497B: mov      dword ptr [ebx], 1
  0x00454981: mov      ecx, ebp
  0x00454983: and      ecx, 7
  0x00454986: shr      esi, 3
  0x00454989: shr      esi, cl
  0x0045498B: sub      ebp, ecx
  0x0045498D: mov      dword ptr [esp + 0x18], esi
  0x00454991: jmp      0x454902
  0x004549F5: shr      esi, 3
  0x004549F8: mov      dword ptr [esp + 0x18], esi
  0x004549FC: sub      ebp, 3
  0x004549FF: mov      dword ptr [ebx], 3
  0x00454A05: jmp      0x454902
  0x00454996: mov      edx, dword ptr [esp + 0x48]
  0x0045499A: lea      eax, [esp + 0x24]
  0x0045499E: push     edx
  0x0045499F: lea      ecx, [esp + 0x2c]
  0x004549A3: push     eax
  0x004549A4: lea      edx, [esp + 0x34]
  0x004549A8: push     ecx
  0x004549A9: lea      eax, [esp + 0x3c]
  0x004549AD: push     edx
  0x004549AE: push     eax
  0x004549AF: call     0x45dac0
  0x004550AF: mov      eax, dword ptr [esp + 0x48]
  0x004550B3: mov      ecx, dword ptr [esp + 0x14]
  0x004550B7: mov      dword ptr [ebx], 9
  0x004550BD: add      ebp, -3
  0x004550C0: shr      esi, 3
  0x004550C3: mov      dword ptr [eax + 0x18], 0x2fb3238
  0x004550CA: mov      dword ptr [ebx + 0x20], esi
  0x004550CD: mov      dword ptr [ebx + 0x1c], ebp
  0x004550D0: mov      ebp, dword ptr [eax + 8]
  0x004550D3: mov      dword ptr [eax + 4], ecx
  0x004550D6: mov      ecx, dword ptr [eax]
  0x004550D8: mov      edx, edi
  0x004550DA: push     -3
  0x004550DC: sub      edx, ecx
  0x004550DE: mov      ecx, dword ptr [esp + 0x48]
  0x004550E2: add      ebp, edx
  0x004550E4: push     eax
  0x004550E5: mov      dword ptr [eax + 8], ebp
  0x004550E8: mov      dword ptr [eax], edi
  0x004550EA: push     ebx
  0x004550EB: mov      dword ptr [ebx + 0x34], ecx
  0x004550EE: call     0x45daf0
  0x004552D0: mov      eax, dword ptr [esp + 0x10]
  0x004552D4: mov      dword ptr [ebx + 0x20], edi
  0x004552D7: mov      dword ptr [ebx + 0x1c], ebp
  0x004552DA: mov      edi, dword ptr [esi]
  0x004552DC: mov      ecx, dword ptr [esi + 8]
  0x004552DF: mov      edx, eax
  0x004552E1: sub      edx, edi
  0x004552E3: mov      dword ptr [esi], eax
  0x004552E5: mov      eax, dword ptr [esp + 0x44]
  0x004552E9: add      ecx, edx
  0x004552EB: mov      dword ptr [esi + 8], ecx
  0x004552EE: mov      ecx, dword ptr [esp + 0x4c]
  0x004552F2: push     ecx
  0x004552F3: push     esi
  0x004552F4: mov      dword ptr [esi + 4], 0
  0x004552FB: push     ebx
  0x004552FC: mov      dword ptr [ebx + 0x34], eax
  0x004552FF: call     0x45daf0
  0x00454C82: mov      edx, ecx
  0x00454C84: xor      ecx, ecx
  0x00454C86: mov      cl, byte ptr [eax]
  0x00454C88: dec      edx
  0x00454C89: mov      dword ptr [esp + 0x14], edx
  0x00454C8D: mov      edx, ecx
  0x00454C8F: mov      ecx, ebp
  0x00454C91: add      ebp, 8
  0x00454C94: shl      edx, cl
  0x00454C96: mov      dword ptr [esp + 0x4c], 0
  0x00454C9E: or       edi, edx
  0x00454CA0: inc      eax
  0x00454CA1: cmp      ebp, 3
  0x00454CA4: mov      dword ptr [esp + 0x10], eax
  0x00454CA8: jb       0x454c76
  0x00454D24: add      esp, 0x14
  0x00454D27: mov      dword ptr [esp + 0x18], eax
  0x00454D2B: test     eax, eax
  0x00454D2D: jne      0x45530f
  0x00454AA0: mov      eax, dword ptr [ebx + 0x30]
  0x00454AA3: mov      esi, dword ptr [ebx + 0x28]
  0x00454AA6: cmp      eax, esi
  0x00454AA8: je       0x454ac5
  0x00454AC5: mov      eax, dword ptr [esp + 0x4c]
  0x00454AC9: mov      edi, dword ptr [esp + 0x48]
  0x00454ACD: push     eax
  0x00454ACE: push     edi
  0x00454ACF: push     ebx
  0x00454AD0: mov      dword ptr [ebx + 0x34], edx
  0x00454AD3: call     0x45daf0
  0x00454B47: cmp      eax, ecx
  0x00454B49: jbe      0x454b4d
  0x00454B45: mov      eax, edi
  0x00454B47: cmp      eax, ecx
  0x00454B49: jbe      0x454b4d
  0x00455329: mov      eax, dword ptr [esp + 0x10]
  0x0045532D: mov      dword ptr [ebx + 0x20], edi
  0x00455330: mov      dword ptr [ebx + 0x1c], ebp
  0x00455333: mov      edi, dword ptr [esi]
  0x00455335: mov      ecx, dword ptr [esi + 8]
  0x00455338: mov      edx, eax
  0x0045533A: sub      edx, edi
  0x0045533C: mov      dword ptr [esi], eax
  0x0045533E: mov      eax, dword ptr [esp + 0x44]
  0x00455342: add      ecx, edx
  0x00455344: mov      dword ptr [esi + 8], ecx
  0x00455347: mov      ecx, dword ptr [esp + 0x4c]
  0x0045534B: push     ecx
  0x0045534C: push     esi
  0x0045534D: mov      dword ptr [esi + 4], 0
  0x00455354: push     ebx
  0x00455355: mov      dword ptr [ebx + 0x34], eax
  0x00455358: call     0x45daf0
  0x00454D79: mov      edx, ecx
  0x00454D7B: xor      ecx, ecx
  0x00454D7D: dec      edx
  0x00454D7E: mov      dword ptr [esp + 0x4c], 0
  0x00454D86: mov      dword ptr [esp + 0x14], edx
  0x00454D8A: mov      edx, dword ptr [esp + 0x10]
  0x00454D8E: mov      cl, byte ptr [edx]
  0x00454D90: mov      edx, ecx
  0x00454D92: mov      ecx, ebp
  0x00454D94: shl      edx, cl
  0x00454D96: mov      ecx, dword ptr [esp + 0x10]
  0x00454D9A: add      ebp, 8
  0x00454D9D: or       edi, edx
  0x00454D9F: inc      ecx
  0x00454DA0: cmp      ebp, eax
  0x00454DA2: mov      dword ptr [esp + 0x10], ecx
  0x00454DA6: jb       0x454d6d
  0x00454DCD: mov      ecx, edx
  0x00454DCF: sub      ebp, edx
  0x00454DD1: mov      edx, dword ptr [ebx + 0xc]
  0x00454DD4: shr      edi, cl
  0x00454DD6: mov      ecx, dword ptr [ebx + 8]
  0x00454DD9: mov      dword ptr [edx + ecx*4], eax
  0x00454DDC: mov      eax, dword ptr [ebx + 8]
  0x00454DDF: inc      eax
  0x00454DE0: jmp      0x454ece
  0x00454DE5: cmp      eax, 0x12
  0x00454DE8: mov      ecx, 7
  0x00454DED: je       0x454df2
  0x00454F4F: mov      eax, dword ptr [esp + 0x44]
  0x00454F53: add      esp, 0x2c
  0x00454F56: test     eax, eax
  0x00454F58: jne      0x4553bc
  0x00454C32: add      esp, 0xc
  0x00454C35: mov      dword ptr [ebx + 0xc], eax
  0x00454C38: test     eax, eax
  0x00454C3A: je       0x455247
  0x00455010: sub      eax, ecx
  0x00455012: dec      eax
  0x00455013: jmp      0x45501a
  0x00455015: mov      eax, dword ptr [ebx + 0x2c]
  0x00455018: sub      eax, ecx
  0x0045501A: mov      dword ptr [esp + 0x1c], eax
  0x0045501E: mov      eax, dword ptr [ebx + 0x18]
  0x00455021: test     eax, eax
  0x00455023: jne      0x455444
  0x0045495D: mov      eax, esi
  0x0045495F: and      eax, 7
  0x00454962: mov      ecx, eax
  0x00454964: shr      eax, 1
  0x00454966: and      ecx, 1
  0x00454969: cmp      eax, 3
  0x0045496C: mov      dword ptr [ebx + 0x18], ecx
  0x0045496F: ja       0x454902
  0x004549B4: mov      ecx, dword ptr [esp + 0x5c]
  0x004549B8: mov      edx, dword ptr [esp + 0x38]
  0x004549BC: mov      eax, dword ptr [esp + 0x3c]
  0x004549C0: push     ecx
  0x004549C1: mov      ecx, dword ptr [esp + 0x44]
  0x004549C5: push     edx
  0x004549C6: mov      edx, dword ptr [esp + 0x4c]
  0x004549CA: push     eax
  0x004549CB: push     ecx
  0x004549CC: push     edx
  0x004549CD: call     0x45cba0
  0x004550F3: add      esp, 0xc
  0x004550F6: pop      edi
  0x004550F7: pop      esi
  0x004550F8: pop      ebp
  0x004550F9: pop      ebx
  0x004550FA: add      esp, 0x30
  0x004550FD: ret      
  0x00455304: add      esp, 0xc
  0x00455307: pop      edi
  0x00455308: pop      esi
  0x00455309: pop      ebp
  0x0045530A: pop      ebx
  0x0045530B: add      esp, 0x30
  0x0045530E: ret      
  0x00454C76: mov      ecx, dword ptr [esp + 0x14]
  0x00454C7A: test     ecx, ecx
  0x00454C7C: je       0x4552d0
  0x00454D33: mov      dword ptr [ebx + 8], eax
  0x00454D36: mov      dword ptr [ebx], 5
  0x00454D3C: jmp      0x454d46
  0x0045530F: mov      edx, dword ptr [ebx + 0xc]
  0x00455312: mov      eax, dword ptr [esi + 0x28]
  0x00455315: push     edx
  0x00455316: push     eax
  0x00455317: call     dword ptr [esi + 0x24]
  0x00454AAA: mov      edx, esi
  0x00454AAC: cmp      edx, eax
  0x00454AAE: mov      dword ptr [esp + 0x44], edx
  0x00454AB2: jae      0x454abb
  0x00454AD8: mov      edx, dword ptr [ebx + 0x34]
  0x00454ADB: mov      esi, dword ptr [ebx + 0x30]
  0x00454ADE: add      esp, 0xc
  0x00454AE1: cmp      edx, esi
  0x00454AE3: mov      dword ptr [esp + 0x4c], eax
  0x00454AE7: mov      dword ptr [esp + 0x44], edx
  0x00454AEB: jae      0x454af4
  0x00454B4D: mov      esi, dword ptr [esp + 0x10]
  0x00454B51: mov      edi, dword ptr [esp + 0x44]
  0x00454B55: mov      ecx, eax
  0x00454B57: mov      edx, ecx
  0x00454B59: shr      ecx, 2
  0x00454B5C: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00454B4B: mov      eax, ecx
  0x00454B4D: mov      esi, dword ptr [esp + 0x10]
  0x00454B51: mov      edi, dword ptr [esp + 0x44]
  0x00454B55: mov      ecx, eax
  0x00454B57: mov      edx, ecx
  0x00454B59: shr      ecx, 2
  0x00454B5C: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0045535D: add      esp, 0xc
  0x00455360: pop      edi
  0x00455361: pop      esi
  0x00455362: pop      ebp
  0x00455363: pop      ebx
  0x00455364: add      esp, 0x30
  0x00455367: ret      
  0x00454ECE: mov      dword ptr [ebx + 8], eax
  0x00454ED1: mov      eax, dword ptr [ebx + 4]
  0x00454ED4: mov      ecx, dword ptr [ebx + 8]
  0x00454ED7: mov      edx, eax
  0x00454ED9: shr      edx, 5
  0x00454EDC: and      edx, 0x1f
  0x00454EDF: and      eax, 0x1f
  0x00454EE2: lea      eax, [edx + eax + 0x102]
  0x00454EE9: cmp      ecx, eax
  0x00454EEB: jb       0x454d66
  0x00454DF2: sub      eax, 0x12
  0x00454DF5: mov      dword ptr [esp + 0x1c], ecx
  0x00454DF9: neg      eax
  0x00454DFB: sbb      eax, eax
  0x00454DFD: add      ecx, edx
  0x00454DFF: and      al, 0xf8
  0x00454E01: mov      dword ptr [esp + 0x20], ecx
  0x00454E05: add      eax, 0xb
  0x00454E08: cmp      ebp, ecx
  0x00454E0A: jae      0x454e4f
  0x00454DEF: lea      ecx, [eax - 0xe]
  0x00454DF2: sub      eax, 0x12
  0x00454DF5: mov      dword ptr [esp + 0x1c], ecx
  0x00454DF9: neg      eax
  0x00454DFB: sbb      eax, eax
  0x00454DFD: add      ecx, edx
  0x00454DFF: and      al, 0xf8
  0x00454E01: mov      dword ptr [esp + 0x20], ecx
  0x00454E05: add      eax, 0xb
  0x00454E08: cmp      ebp, ecx
  0x00454E0A: jae      0x454e4f
  0x00454F5E: mov      ecx, dword ptr [esp + 0x38]
  0x00454F62: mov      edx, dword ptr [esp + 0x3c]
  0x00454F66: mov      eax, dword ptr [esp + 0x1c]
  0x00454F6A: push     esi
  0x00454F6B: push     ecx
  0x00454F6C: mov      ecx, dword ptr [esp + 0x28]
  0x00454F70: push     edx
  0x00454F71: push     eax
  0x00454F72: push     ecx
  0x00454F73: call     0x45cba0
  0x004553BC: cmp      dword ptr [esp + 0x18], -3
  0x004553C1: jne      0x4553c9
  0x00455247: mov      eax, dword ptr [esp + 0x14]
  0x0045524B: mov      dword ptr [ebx + 0x20], edi
  0x0045524E: mov      dword ptr [ebx + 0x1c], ebp
  0x00455251: mov      edi, dword ptr [esi]
  0x00455253: mov      edx, dword ptr [esi + 8]
  0x00455256: mov      dword ptr [esi + 4], eax
  0x00455259: mov      eax, dword ptr [esp + 0x10]
  0x0045525D: push     -4
  0x0045525F: mov      ecx, eax
  0x00455261: push     esi
  0x00455262: sub      ecx, edi
  0x00455264: mov      dword ptr [esi], eax
  0x00455266: add      edx, ecx
  0x00455268: push     ebx
  0x00455269: mov      dword ptr [esi + 8], edx
  0x0045526C: mov      edx, dword ptr [esp + 0x50]
  0x00455270: mov      dword ptr [ebx + 0x34], edx
  0x00455273: call     0x45daf0
  0x00454C40: shr      edi, 0xe
  0x00454C43: sub      ebp, 0xe
  0x00454C46: mov      dword ptr [ebx + 8], 0
  0x00454C4D: mov      dword ptr [ebx], 4
  0x00454C53: jmp      0x454c5d
  0x0045501A: mov      dword ptr [esp + 0x1c], eax
  0x0045501E: mov      eax, dword ptr [ebx + 0x18]
  0x00455021: test     eax, eax
  0x00455023: jne      0x455444
  0x00455029: mov      dword ptr [ebx], 0
  0x0045502F: jmp      0x454902
  0x00455444: mov      dword ptr [ebx], 7
  0x0045544A: jmp      0x455458
  0x004549D2: add      esp, 0x28
  0x004549D5: mov      dword ptr [ebx + 4], eax
  0x004549D8: test     eax, eax
  0x004549DA: je       0x455073
  0x00454D46: mov      eax, dword ptr [ebx + 4]
  0x00454D49: mov      ecx, dword ptr [ebx + 8]
  0x00454D4C: mov      edx, eax
  0x00454D4E: and      eax, 0x1f
  0x00454D51: shr      edx, 5
  0x00454D54: and      edx, 0x1f
  0x00454D57: lea      eax, [edx + eax + 0x102]
  0x00454D5E: cmp      ecx, eax
  0x00454D60: jae      0x454ef1
  0x0045531A: mov      eax, dword ptr [esp + 0x20]
  0x0045531E: add      esp, 8
  0x00455321: cmp      eax, -3
  0x00455324: jmp      0x4553c1
  0x00454AB4: sub      eax, edx
  0x00454AB6: dec      eax
  0x00454AB7: mov      ecx, eax
  0x00454AB9: jmp      0x454abd
  0x00454ABB: sub      ecx, edx
  0x00454ABD: test     ecx, ecx
  0x00454ABF: mov      dword ptr [esp + 0x1c], ecx
  0x00454AC3: jne      0x454b36
  0x00454AED: mov      ecx, esi
  0x00454AEF: sub      ecx, edx
  0x00454AF1: dec      ecx
  0x00454AF2: jmp      0x454af9
  0x00454AF4: mov      ecx, dword ptr [ebx + 0x2c]
  0x00454AF7: sub      ecx, edx
  0x00454AF9: mov      eax, dword ptr [ebx + 0x2c]
  0x00454AFC: mov      dword ptr [esp + 0x1c], ecx
  0x00454B00: cmp      edx, eax
  0x00454B02: mov      dword ptr [esp + 0x20], eax
  0x00454B06: jne      0x454b2a
  0x00454B5E: mov      ecx, edx
  0x00454B60: mov      edx, dword ptr [esp + 0x1c]
  0x00454B64: and      ecx, 3
  0x00454B67: sub      edx, eax
  0x00454B69: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00454B5C: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00454E0C: mov      ecx, dword ptr [esp + 0x14]
  0x00454E10: test     ecx, ecx
  0x00454E12: je       0x455329
  0x00454E4F: mov      ecx, edx
  0x00454E51: shr      edi, cl
  0x00454E53: mov      ecx, dword ptr [esp + 0x1c]
  0x00454E57: mov      ecx, dword ptr [ecx*4 + 0x2fb4530]
  0x00454E5E: and      ecx, edi
  0x00454E60: add      eax, ecx
  0x00454E62: mov      ecx, dword ptr [esp + 0x1c]
  0x00454E66: shr      edi, cl
  0x00454E68: add      ecx, edx
  0x00454E6A: mov      dword ptr [esp + 0x18], eax
  0x00454E6E: sub      ebp, ecx
  0x00454E70: mov      ecx, dword ptr [ebx + 8]
  0x00454E73: mov      dword ptr [esp + 0x1c], ecx
  0x00454E77: mov      ecx, dword ptr [ebx + 4]
  0x00454E7A: mov      edx, ecx
  0x00454E7C: and      ecx, 0x1f
  0x00454E7F: shr      edx, 5
  0x00454E82: and      edx, 0x1f
  0x00454E85: lea      ecx, [edx + ecx + 0x102]
  0x00454E8C: mov      edx, dword ptr [esp + 0x1c]
  0x00454E90: add      eax, edx
  0x00454E92: cmp      eax, ecx
  0x00454E94: ja       0x455368
  0x00454F78: add      esp, 0x14
  0x00454F7B: test     eax, eax
  0x00454F7D: je       0x455408
  0x004553C3: mov      dword ptr [ebx], 9
  0x004553C9: mov      eax, dword ptr [esp + 0x10]
  0x004553CD: mov      ecx, dword ptr [esp + 0x14]
  0x004553D1: mov      dword ptr [ebx + 0x20], edi
  0x004553D4: mov      dword ptr [ebx + 0x1c], ebp
  0x004553D7: mov      edi, dword ptr [esi]
  0x004553D9: mov      edx, eax
  0x004553DB: mov      dword ptr [esi + 4], ecx
  0x004553DE: mov      ecx, dword ptr [esi + 8]
  0x004553E1: sub      edx, edi
  0x004553E3: mov      dword ptr [esi], eax
  0x004553E5: mov      eax, dword ptr [esp + 0x44]
  0x004553E9: add      ecx, edx
  0x004553EB: mov      dword ptr [esi + 8], ecx
  0x004553EE: mov      ecx, dword ptr [esp + 0x18]
  0x004553F2: push     ecx
  0x004553F3: push     esi
  0x004553F4: push     ebx
  0x004553F5: mov      dword ptr [ebx + 0x34], eax
  0x004553F8: call     0x45daf0
  0x004553C9: mov      eax, dword ptr [esp + 0x10]
  0x004553CD: mov      ecx, dword ptr [esp + 0x14]
  0x004553D1: mov      dword ptr [ebx + 0x20], edi
  0x004553D4: mov      dword ptr [ebx + 0x1c], ebp
  0x004553D7: mov      edi, dword ptr [esi]
  0x004553D9: mov      edx, eax
  0x004553DB: mov      dword ptr [esi + 4], ecx
  0x004553DE: mov      ecx, dword ptr [esi + 8]
  0x004553E1: sub      edx, edi
  0x004553E3: mov      dword ptr [esi], eax
  0x004553E5: mov      eax, dword ptr [esp + 0x44]
  0x004553E9: add      ecx, edx
  0x004553EB: mov      dword ptr [esi + 8], ecx
  0x004553EE: mov      ecx, dword ptr [esp + 0x18]
  0x004553F2: push     ecx
  0x004553F3: push     esi
  0x004553F4: push     ebx
  0x004553F5: mov      dword ptr [ebx + 0x34], eax
  0x004553F8: call     0x45daf0
  0x00455278: add      esp, 0xc
  0x0045527B: pop      edi
  0x0045527C: pop      esi
  0x0045527D: pop      ebp
  0x0045527E: pop      ebx
  0x0045527F: add      esp, 0x30
  0x00455282: ret      
  0x00454C5D: mov      edx, dword ptr [ebx + 4]
  0x00454C60: mov      eax, dword ptr [ebx + 8]
  0x00454C63: shr      edx, 0xa
  0x00454C66: add      edx, 4
  0x00454C69: cmp      eax, edx
  0x00454C6B: jae      0x454cdb
  0x00455458: mov      eax, dword ptr [esp + 0x4c]
  0x0045545C: mov      dword ptr [ebx + 0x34], ecx
  0x0045545F: push     eax
  0x00455460: push     esi
  0x00455461: push     ebx
  0x00455462: call     0x45daf0
  0x00455073: mov      eax, dword ptr [esp + 0x48]
  0x00455077: mov      edx, dword ptr [esp + 0x14]
  0x0045507B: mov      dword ptr [ebx + 0x20], esi
  0x0045507E: mov      dword ptr [ebx + 0x1c], ebp
  0x00455081: mov      ebp, dword ptr [eax + 8]
  0x00455084: mov      dword ptr [eax + 4], edx
  0x00455087: mov      edx, dword ptr [eax]
  0x00455089: mov      ecx, edi
  0x0045508B: sub      ecx, edx
  0x0045508D: mov      edx, dword ptr [esp + 0x44]
  0x00455091: add      ebp, ecx
  0x00455093: push     -4
  0x00455095: push     eax
  0x00455096: mov      dword ptr [eax + 8], ebp
  0x00455099: mov      dword ptr [eax], edi
  0x0045509B: push     ebx
  0x0045509C: mov      dword ptr [ebx + 0x34], edx
  0x0045509F: call     0x45daf0
  0x004549E0: shr      esi, 3
  0x004549E3: mov      dword ptr [esp + 0x18], esi
  0x004549E7: sub      ebp, 3
  0x004549EA: mov      dword ptr [ebx], 6
  0x004549F0: jmp      0x454902
  0x004553C1: jne      0x4553c9
  0x00454ABD: test     ecx, ecx
  0x00454ABF: mov      dword ptr [esp + 0x1c], ecx
  0x00454AC3: jne      0x454b36
  0x00454AF9: mov      eax, dword ptr [ebx + 0x2c]
  0x00454AFC: mov      dword ptr [esp + 0x1c], ecx
  0x00454B00: cmp      edx, eax
  0x00454B02: mov      dword ptr [esp + 0x20], eax
  0x00454B06: jne      0x454b2a
  0x00454B08: mov      eax, dword ptr [ebx + 0x28]
  0x00454B0B: cmp      esi, eax
  0x00454B0D: je       0x454b2a
  0x00454B2A: test     ecx, ecx
  0x00454B2C: je       0x4551c5
  0x00454B6B: mov      ecx, dword ptr [esp + 0x10]
  0x00454B6F: mov      edi, dword ptr [esp + 0x14]
  0x00454B73: mov      esi, dword ptr [esp + 0x44]
  0x00454B77: add      ecx, eax
  0x00454B79: mov      dword ptr [esp + 0x10], ecx
  0x00454B7D: mov      ecx, dword ptr [ebx + 4]
  0x00454B80: sub      edi, eax
  0x00454B82: add      esi, eax
  0x00454B84: sub      ecx, eax
  0x00454B86: mov      dword ptr [esp + 0x14], edi
  0x00454B8A: mov      dword ptr [esp + 0x44], esi
  0x00454B8E: mov      dword ptr [esp + 0x1c], edx
  0x00454B92: mov      dword ptr [ebx + 4], ecx
  0x00454B95: jne      0x454902
  0x00454B69: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00454E18: mov      edx, ecx
  0x00454E1A: xor      ecx, ecx
  0x00454E1C: dec      edx
  0x00454E1D: mov      dword ptr [esp + 0x4c], 0
  0x00454E25: mov      dword ptr [esp + 0x14], edx
  0x00454E29: mov      edx, dword ptr [esp + 0x10]
  0x00454E2D: mov      cl, byte ptr [edx]
  0x00454E2F: mov      edx, ecx
  0x00454E31: mov      ecx, ebp
  0x00454E33: shl      edx, cl
  0x00454E35: mov      ecx, dword ptr [esp + 0x10]
  0x00454E39: add      ebp, 8
  0x00454E3C: or       edi, edx
  0x00454E3E: inc      ecx
  0x00454E3F: mov      dword ptr [esp + 0x10], ecx
  0x00454E43: mov      ecx, dword ptr [esp + 0x20]
  0x00454E47: cmp      ebp, ecx
  0x00454E49: jb       0x454e0c
  0x00454E9A: cmp      dword ptr [esp + 0x34], 0x10
  0x00454E9F: jne      0x454eb5
  0x00455368: mov      edx, dword ptr [ebx + 0xc]
  0x0045536B: mov      eax, dword ptr [esi + 0x28]
  0x0045536E: push     edx
  0x0045536F: push     eax
  0x00455370: call     dword ptr [esi + 0x24]
  0x00455408: mov      eax, dword ptr [esp + 0x10]
  0x0045540C: mov      edx, dword ptr [esp + 0x14]
  0x00455410: mov      dword ptr [ebx + 0x20], edi
  0x00455413: mov      dword ptr [ebx + 0x1c], ebp
  0x00455416: mov      edi, dword ptr [esi]
  0x00455418: mov      ecx, eax
  0x0045541A: mov      dword ptr [esi + 4], edx
  0x0045541D: mov      edx, dword ptr [esi + 8]
  0x00455420: sub      ecx, edi
  0x00455422: push     -4
  0x00455424: add      edx, ecx
  0x00455426: push     esi
  0x00455427: mov      dword ptr [esi + 8], edx
  0x0045542A: mov      edx, dword ptr [esp + 0x4c]
  0x0045542E: mov      dword ptr [esi], eax
  0x00455430: push     ebx
  0x00455431: mov      dword ptr [ebx + 0x34], edx
  0x00455434: call     0x45daf0
  0x00454F83: mov      dword ptr [ebx + 4], eax
  0x00454F86: mov      dword ptr [ebx], 6
  0x00454F8C: jmp      0x454f96
  0x004553FD: add      esp, 0xc
  0x00455400: pop      edi
  0x00455401: pop      esi
  0x00455402: pop      ebp
  0x00455403: pop      ebx
  0x00455404: add      esp, 0x30
  0x00455407: ret      
  0x004550A4: add      esp, 0xc
  0x004550A7: pop      edi
  0x004550A8: pop      esi
  0x004550A9: pop      ebp
  0x004550AA: pop      ebx
  0x004550AB: add      esp, 0x30
  0x004550AE: ret      
  0x00454B0F: mov      edx, eax
  0x00454B11: cmp      edx, esi
  0x00454B13: mov      dword ptr [esp + 0x44], edx
  0x00454B17: jae      0x454b20
  0x004551C5: mov      eax, dword ptr [esp + 0x18]
  0x004551C9: mov      ecx, dword ptr [esp + 0x14]
  0x004551CD: mov      dword ptr [ebx + 0x20], eax
  0x004551D0: mov      eax, dword ptr [esp + 0x10]
  0x004551D4: mov      dword ptr [ebx + 0x1c], ebp
  0x004551D7: mov      ebp, dword ptr [edi]
  0x004551D9: mov      esi, dword ptr [edi + 8]
  0x004551DC: mov      dword ptr [edi + 4], ecx
  0x004551DF: mov      ecx, eax
  0x004551E1: mov      dword ptr [edi], eax
  0x004551E3: sub      ecx, ebp
  0x004551E5: add      esi, ecx
  0x004551E7: mov      dword ptr [edi + 8], esi
  0x004551EA: mov      dword ptr [ebx + 0x34], edx
  0x004551ED: mov      edx, dword ptr [esp + 0x4c]
  0x004551F1: push     edx
  0x004551F2: push     edi
  0x004551F3: push     ebx
  0x004551F4: call     0x45daf0
  0x00454B32: mov      edi, dword ptr [esp + 0x14]
  0x00454B36: mov      eax, dword ptr [ebx + 4]
  0x00454B39: mov      dword ptr [esp + 0x4c], 0
  0x00454B41: cmp      eax, edi
  0x00454B43: jbe      0x454b47
  0x00454E4B: mov      edx, dword ptr [esp + 0x18]
  0x00454E4F: mov      ecx, edx
  0x00454E51: shr      edi, cl
  0x00454E53: mov      ecx, dword ptr [esp + 0x1c]
  0x00454E57: mov      ecx, dword ptr [ecx*4 + 0x2fb4530]
  0x00454E5E: and      ecx, edi
  0x00454E60: add      eax, ecx
  0x00454E62: mov      ecx, dword ptr [esp + 0x1c]
  0x00454E66: shr      edi, cl
  0x00454E68: add      ecx, edx
  0x00454E6A: mov      dword ptr [esp + 0x18], eax
  0x00454E6E: sub      ebp, ecx
  0x00454E70: mov      ecx, dword ptr [ebx + 8]
  0x00454E73: mov      dword ptr [esp + 0x1c], ecx
  0x00454E77: mov      ecx, dword ptr [ebx + 4]
  0x00454E7A: mov      edx, ecx
  0x00454E7C: and      ecx, 0x1f
  0x00454E7F: shr      edx, 5
  0x00454E82: and      edx, 0x1f
  0x00454E85: lea      ecx, [edx + ecx + 0x102]
  0x00454E8C: mov      edx, dword ptr [esp + 0x1c]
  0x00454E90: add      eax, edx
  0x00454E92: cmp      eax, ecx
  0x00454E94: ja       0x455368
  0x00454EA1: mov      eax, edx
  0x00454EA3: cmp      eax, 1
  0x00454EA6: jb       0x455368
  0x00454EB5: mov      eax, dword ptr [esp + 0x1c]
  0x00454EB9: xor      ecx, ecx
  0x00454EBB: mov      edx, dword ptr [ebx + 0xc]
  0x00454EBE: inc      eax
  0x00454EBF: mov      dword ptr [edx + eax*4 - 4], ecx
  0x00454EC3: mov      edx, dword ptr [esp + 0x18]
  0x00454EC7: dec      edx
  0x00454EC8: mov      dword ptr [esp + 0x18], edx
  0x00454ECC: jne      0x454ebb
  0x00455373: mov      eax, dword ptr [esp + 0x18]
  0x00455377: mov      ecx, dword ptr [esp + 0x1c]
  0x0045537B: mov      dword ptr [ebx], 9
  0x00455381: mov      dword ptr [esi + 0x18], 0x2fb31d8
  0x00455388: mov      dword ptr [ebx + 0x20], edi
  0x0045538B: mov      dword ptr [ebx + 0x1c], ebp
  0x0045538E: mov      edi, dword ptr [esi]
  0x00455390: mov      edx, eax
  0x00455392: mov      dword ptr [esi + 4], ecx
  0x00455395: mov      ecx, dword ptr [esi + 8]
  0x00455398: sub      edx, edi
  0x0045539A: mov      dword ptr [esi], eax
  0x0045539C: mov      eax, dword ptr [esp + 0x4c]
  0x004553A0: add      ecx, edx
  0x004553A2: push     -3
  0x004553A4: push     esi
  0x004553A5: mov      dword ptr [esi + 8], ecx
  0x004553A8: push     ebx
  0x004553A9: mov      dword ptr [ebx + 0x34], eax
  0x004553AC: call     0x45daf0
  0x00455439: add      esp, 0xc
  0x0045543C: pop      edi
  0x0045543D: pop      esi
  0x0045543E: pop      ebp
  0x0045543F: pop      ebx
  0x00455440: add      esp, 0x30
  0x00455443: ret      
  0x00454F96: mov      eax, dword ptr [esp + 0x10]
  0x00454F9A: mov      edx, dword ptr [esp + 0x14]
  0x00454F9E: mov      dword ptr [ebx + 0x20], edi
  0x00454FA1: mov      dword ptr [ebx + 0x1c], ebp
  0x00454FA4: mov      edi, dword ptr [esi]
  0x00454FA6: mov      ecx, eax
  0x00454FA8: mov      dword ptr [esi + 4], edx
  0x00454FAB: mov      edx, dword ptr [esi + 8]
  0x00454FAE: sub      ecx, edi
  0x00454FB0: mov      dword ptr [esi], eax
  0x00454FB2: mov      eax, dword ptr [esp + 0x4c]
  0x00454FB6: add      edx, ecx
  0x00454FB8: mov      dword ptr [esi + 8], edx
  0x00454FBB: mov      edx, dword ptr [esp + 0x44]
  0x00454FBF: push     eax
  0x00454FC0: push     esi
  0x00454FC1: push     ebx
  0x00454FC2: mov      dword ptr [ebx + 0x34], edx
  0x00454FC5: call     0x45cbe0
  0x00454B19: sub      esi, edx
  0x00454B1B: dec      esi
  0x00454B1C: mov      ecx, esi
  0x00454B1E: jmp      0x454b26
  0x00454B20: mov      ecx, dword ptr [esp + 0x20]
  0x00454B24: sub      ecx, edx
  0x00454B26: mov      dword ptr [esp + 0x1c], ecx
  0x00454B2A: test     ecx, ecx
  0x00454B2C: je       0x4551c5
  0x004551F9: add      esp, 0xc
  0x004551FC: pop      edi
  0x004551FD: pop      esi
  0x004551FE: pop      ebp
  0x004551FF: pop      ebx
  0x00455200: add      esp, 0x30
  0x00455203: ret      
  0x00454EAC: mov      ecx, dword ptr [ebx + 0xc]
  0x00454EAF: mov      ecx, dword ptr [ecx + eax*4 - 4]
  0x00454EB3: jmp      0x454ebb
  0x00454EBB: mov      edx, dword ptr [ebx + 0xc]
  0x00454EBE: inc      eax
  0x00454EBF: mov      dword ptr [edx + eax*4 - 4], ecx
  0x00454EC3: mov      edx, dword ptr [esp + 0x18]
  0x00454EC7: dec      edx
  0x00454EC8: mov      dword ptr [esp + 0x18], edx
  0x00454ECC: jne      0x454ebb
  0x004553B1: add      esp, 0x14
  0x004553B4: pop      edi
  0x004553B5: pop      esi
  0x004553B6: pop      ebp
  0x004553B7: pop      ebx
  0x004553B8: add      esp, 0x30
  0x004553BB: ret      
  0x00454B26: mov      dword ptr [esp + 0x1c], ecx
  0x00454B2A: test     ecx, ecx
  0x00454B2C: je       0x4551c5

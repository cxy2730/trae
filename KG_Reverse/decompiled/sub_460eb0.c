
/*
 * ============================================================
 * KG.exe 反编译分析 - sub_460eb0
 * ============================================================
 *
 * 函数地址: 0x00460EB0
 * 基本块数: 128
 * 指令数:   298
 * 复杂度:   中复杂度
 *
 * 功能推测: 系统核心逻辑/调度函数
 * 技术分析: 使用 angr 符号执行 + capstone 反汇编
 *
 * 注: 本文件为自动反编译结果, 可能包含不准确的变量名和类型
 *     实际逻辑需结合上下文和运行时分析验证
 * ============================================================
 */

void* sub_460eb0(void) {

  /* 代码块 1 @ 0x00460EB0 */
  // mov ecx, dword ptr [esp + 4]
  // 读取全局变量值 [ecx + 8]
  // CMP eax, 0xed8 (set flags)
  // if (greater) goto 0x461426
  /* 代码块 2 @ 0x00460EC2 */
  // 如果相等则跳转到 0x461400
  /* 代码块 3 @ 0x00461426 */
  // CMP eax, 0x1450 (set flags)
  // if (greater) goto 0x4616c8
  /* 代码块 4 @ 0x00461400 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9d88]
  // 读取全局变量值 [eax*4 + 0x2fb9dec]
  /* 代码块 5 @ 0x00460EC8 */
  // CMP eax, 0x960 (set flags)
  // if (greater) goto 0x461195
  /* 代码块 6 @ 0x00461431 */
  // 如果相等则跳转到 0x4616a2
  /* 代码块 7 @ 0x004616C8 */
  // CMP eax, 0x170c (set flags)
  // if (greater) goto 0x461819
  /* 代码块 8 @ 0x00460ED3 */
  // 如果相等则跳转到 0x46116f
  /* 代码块 9 @ 0x00461195 */
  // CMP eax, 0xc1c (set flags)
  // if (greater) goto 0x4612e6
  /* 代码块 10 @ 0x004616A2 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba738]
  // 读取全局变量值 [eax*4 + 0x2fba788]
  /* 代码块 11 @ 0x00461437 */
  // CMP eax, 0x1194 (set flags)
  // if (greater) goto 0x461588
  /* 代码块 12 @ 0x004616D3 */
  // 如果相等则跳转到 0x4617f3
  /* 代码块 13 @ 0x00461819 */
  // CMP eax, 0x189c (set flags)
  // if (greater) goto 0x4618d7
  /* 代码块 14 @ 0x0046116F */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9310]
  // 读取全局变量值 [eax*4 + 0x2fb935c]
  /* 代码块 15 @ 0x00460ED9 */
  // CMP eax, 0x6a4 (set flags)
  // if (greater) goto 0x461055
  /* 代码块 16 @ 0x004611A0 */
  // 如果相等则跳转到 0x4612c0
  /* 代码块 17 @ 0x004612E6 */
  // CMP eax, 0xdac (set flags)
  // if (greater) goto 0x4613a4
  /* 代码块 18 @ 0x00461442 */
  // 如果相等则跳转到 0x461562
  /* 代码块 19 @ 0x00461588 */
  // CMP eax, 0x1324 (set flags)
  // if (greater) goto 0x461646
  /* 代码块 20 @ 0x004617F3 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbab20]
  // 读取全局变量值 [eax*4 + 0x2fbab4c]
  /* 代码块 21 @ 0x004616D9 */
  // CMP eax, 0x15e0 (set flags)
  // if (greater) goto 0x461797
  /* 代码块 22 @ 0x00461824 */
  // 如果相等则跳转到 0x4618b1
  /* 代码块 23 @ 0x004618D7 */
  // sub eax, 0x1900
  // 如果相等则跳转到 0x461909
  /* 代码块 24 @ 0x00460EE4 */
  // 如果相等则跳转到 0x46102f
  /* 代码块 25 @ 0x00461055 */
  // CMP eax, 0x834 (set flags)
  // if (greater) goto 0x461113
  /* 代码块 26 @ 0x004612C0 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9880]
  // 读取全局变量值 [eax*4 + 0x2fb98e0]
  /* 代码块 27 @ 0x004611A6 */
  // CMP eax, 0xaf0 (set flags)
  // if (greater) goto 0x461264
  /* 代码块 28 @ 0x004612F1 */
  // 如果相等则跳转到 0x46137e
  /* 代码块 29 @ 0x004613A4 */
  // sub eax, 0xe10
  // 如果相等则跳转到 0x4613da
  /* 代码块 30 @ 0x00461562 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba2e8]
  // 读取全局变量值 [eax*4 + 0x2fba340]
  /* 代码块 31 @ 0x00461448 */
  // CMP eax, 0x1068 (set flags)
  // if (greater) goto 0x461506
  /* 代码块 32 @ 0x00461593 */
  // 如果相等则跳转到 0x461620
  /* 代码块 33 @ 0x00461646 */
  // sub eax, 0x1388
  // 如果相等则跳转到 0x46167c
  /* 代码块 34 @ 0x004616E4 */
  // 如果相等则跳转到 0x461771
  /* 代码块 35 @ 0x00461797 */
  // sub eax, 0x1644
  // 如果相等则跳转到 0x4617cd
  /* 代码块 36 @ 0x004618B1 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbac80]
  // 读取全局变量值 [eax*4 + 0x2fbacac]
  /* 代码块 37 @ 0x0046182A */
  // sub eax, 0x1770
  // 如果相等则跳转到 0x46188b
  /* 代码块 38 @ 0x00461909 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbacd8]
  // 读取全局变量值 [eax*4 + 0x2fbad04]
  /* 代码块 39 @ 0x004618DE */
  // sub eax, 0x64
  // 如果不相等则跳转到 0x46192e
  /* 代码块 40 @ 0x0046102F */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb8f50]
  // 读取全局变量值 [eax*4 + 0x2fb8f80]
  /* 代码块 41 @ 0x00460EEA */
  // CMP eax, 0x514 (set flags)
  // if (greater) goto 0x460fa8
  /* 代码块 42 @ 0x00461060 */
  // 如果相等则跳转到 0x4610ed
  /* 代码块 43 @ 0x00461113 */
  // sub eax, 0x898
  // 如果相等则跳转到 0x461149
  /* 代码块 44 @ 0x004611B1 */
  // 如果相等则跳转到 0x46123e
  /* 代码块 45 @ 0x00461264 */
  // sub eax, 0xb54
  // 如果相等则跳转到 0x46129a
  /* 代码块 46 @ 0x0046137E */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9ba0]
  // 读取全局变量值 [eax*4 + 0x2fb9c20]
  /* 代码块 47 @ 0x004612F7 */
  // sub eax, 0xc80
  // 如果相等则跳转到 0x461358
  /* 代码块 48 @ 0x004613DA */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9ca0]
  // 读取全局变量值 [eax*4 + 0x2fb9cc8]
  /* 代码块 49 @ 0x004613AB */
  // sub eax, 0x64
  // 如果不相等则跳转到 0x46192e
  /* 代码块 50 @ 0x00461453 */
  // 如果相等则跳转到 0x4614e0
  /* 代码块 51 @ 0x00461506 */
  // sub eax, 0x10cc
  // 如果相等则跳转到 0x46153c
  /* 代码块 52 @ 0x00461620 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba5b8]
  // 读取全局变量值 [eax*4 + 0x2fba5f8]
  /* 代码块 53 @ 0x00461599 */
  // sub eax, 0x11f8
  // 如果相等则跳转到 0x4615fa
  /* 代码块 54 @ 0x0046167C */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba638]
  // 读取全局变量值 [eax*4 + 0x2fba678]
  /* 代码块 55 @ 0x0046164D */
  // sub eax, 0x64
  // 如果不相等则跳转到 0x46192e
  /* 代码块 56 @ 0x00461771 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbaa18]
  // 读取全局变量值 [eax*4 + 0x2fbaa44]
  /* 代码块 57 @ 0x004616EA */
  // sub eax, 0x14b4
  // 如果相等则跳转到 0x46174b
  /* 代码块 58 @ 0x004617CD */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbaa70]
  // 读取全局变量值 [eax*4 + 0x2fbaa9c]
  /* 代码块 59 @ 0x0046179E */
  // sub eax, 0x64
  // 如果不相等则跳转到 0x46192e
  /* 代码块 60 @ 0x0046188B */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbab78]
  // 读取全局变量值 [eax*4 + 0x2fbaba4]
  /* 代码块 61 @ 0x00461831 */
  // sub eax, 0x64
  // 如果相等则跳转到 0x461865
  /* 代码块 62 @ 0x004618E3 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbad30]
  // 读取全局变量值 [eax*4 + 0x2fbad5c]
  /* 代码块 63 @ 0x0046192E */
  return;
  /* 代码块 64 @ 0x00460EF5 */
  // 如果相等则跳转到 0x460f82
  /* 代码块 65 @ 0x00460FA8 */
  // sub eax, 0x578
  // 如果相等则跳转到 0x461009
  /* 代码块 66 @ 0x004610ED */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9178]
  // 读取全局变量值 [eax*4 + 0x2fb91c0]
  /* 代码块 67 @ 0x00461066 */
  // sub eax, 0x708
  // 如果相等则跳转到 0x4610c7
  /* 代码块 68 @ 0x00461149 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9208]
  // 读取全局变量值 [eax*4 + 0x2fb9244]
  /* 代码块 69 @ 0x0046111A */
  // sub eax, 0x64
  // 如果不相等则跳转到 0x46192e
  /* 代码块 70 @ 0x0046123E */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9688]
  // 读取全局变量值 [eax*4 + 0x2fb96d0]
  /* 代码块 71 @ 0x004611B7 */
  // sub eax, 0x9c4
  // 如果相等则跳转到 0x461218
  /* 代码块 72 @ 0x0046129A */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9718]
  // 读取全局变量值 [eax*4 + 0x2fb9774]
  /* 代码块 73 @ 0x0046126B */
  // sub eax, 0x64
  // 如果不相等则跳转到 0x46192e
  /* 代码块 74 @ 0x00461358 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9940]
  // 读取全局变量值 [eax*4 + 0x2fb9990]
  /* 代码块 75 @ 0x004612FE */
  // sub eax, 0x64
  // 如果相等则跳转到 0x461332
  /* 代码块 76 @ 0x004613B4 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9cf0]
  // 读取全局变量值 [eax*4 + 0x2fb9d3c]
  /* 代码块 77 @ 0x004614E0 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba058]
  // 读取全局变量值 [eax*4 + 0x2fba0dc]
  /* 代码块 78 @ 0x00461459 */
  // sub eax, 0xf3c
  // 如果相等则跳转到 0x4614ba
  /* 代码块 79 @ 0x0046153C */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba160]
  // 读取全局变量值 [eax*4 + 0x2fba1f8]
  /* 代码块 80 @ 0x0046150D */
  // sub eax, 0x64
  // 如果不相等则跳转到 0x46192e
  /* 代码块 81 @ 0x004615FA */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba398]
  // 读取全局变量值 [eax*4 + 0x2fba408]
  /* 代码块 82 @ 0x004615A0 */
  // sub eax, 0x64
  // 如果相等则跳转到 0x4615d4
  /* 代码块 83 @ 0x00461656 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba6b8]
  // 读取全局变量值 [eax*4 + 0x2fba6f8]
  /* 代码块 84 @ 0x0046174B */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba7d8]
  // 读取全局变量值 [eax*4 + 0x2fba824]
  /* 代码块 85 @ 0x004616F1 */
  // sub eax, 0x64
  // 如果相等则跳转到 0x461725
  /* 代码块 86 @ 0x004617A7 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbaac8]
  // 读取全局变量值 [eax*4 + 0x2fbaaf4]
  /* 代码块 87 @ 0x00461865 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbabd0]
  // 读取全局变量值 [eax*4 + 0x2fbabfc]
  /* 代码块 88 @ 0x00461836 */
  // sub eax, 0x64
  // 如果不相等则跳转到 0x46192e
  /* 代码块 89 @ 0x00460F82 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb8d30]
  // 读取全局变量值 [eax*4 + 0x2fb8d80]
  /* 代码块 90 @ 0x00460EFB */
  // sub eax, 0x3e8
  // 如果相等则跳转到 0x460f5c
  /* 代码块 91 @ 0x00461009 */
  // 读取全局变量值 [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb8dd0]
  // 读取全局变量值 [eax*4 + 0x2fb8e14]
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00460EB0: mov      ecx, dword ptr [esp + 4]
  0x00460EB4: mov      eax, dword ptr [ecx + 8]
  0x00460EB7: cmp      eax, 0xed8
  0x00460EBC: jg       0x461426
  0x00460EC2: je       0x461400
  0x00461426: cmp      eax, 0x1450
  0x0046142B: jg       0x4616c8
  0x00461400: mov      eax, dword ptr [esp + 8]
  0x00461404: mov      edx, dword ptr [eax*4 + 0x2fb9d88]
  0x0046140B: mov      eax, dword ptr [eax*4 + 0x2fb9dec]
  0x00460EC8: cmp      eax, 0x960
  0x00460ECD: jg       0x461195
  0x00461431: je       0x4616a2
  0x004616C8: cmp      eax, 0x170c
  0x004616CD: jg       0x461819
  0x00460ED3: je       0x46116f
  0x00461195: cmp      eax, 0xc1c
  0x0046119A: jg       0x4612e6
  0x004616A2: mov      eax, dword ptr [esp + 8]
  0x004616A6: mov      edx, dword ptr [eax*4 + 0x2fba738]
  0x004616AD: mov      eax, dword ptr [eax*4 + 0x2fba788]
  0x00461437: cmp      eax, 0x1194
  0x0046143C: jg       0x461588
  0x004616D3: je       0x4617f3
  0x00461819: cmp      eax, 0x189c
  0x0046181E: jg       0x4618d7
  0x0046116F: mov      eax, dword ptr [esp + 8]
  0x00461173: mov      edx, dword ptr [eax*4 + 0x2fb9310]
  0x0046117A: mov      eax, dword ptr [eax*4 + 0x2fb935c]
  0x00460ED9: cmp      eax, 0x6a4
  0x00460EDE: jg       0x461055
  0x004611A0: je       0x4612c0
  0x004612E6: cmp      eax, 0xdac
  0x004612EB: jg       0x4613a4
  0x00461442: je       0x461562
  0x00461588: cmp      eax, 0x1324
  0x0046158D: jg       0x461646
  0x004617F3: mov      eax, dword ptr [esp + 8]
  0x004617F7: mov      edx, dword ptr [eax*4 + 0x2fbab20]
  0x004617FE: mov      eax, dword ptr [eax*4 + 0x2fbab4c]
  0x004616D9: cmp      eax, 0x15e0
  0x004616DE: jg       0x461797
  0x00461824: je       0x4618b1
  0x004618D7: sub      eax, 0x1900
  0x004618DC: je       0x461909
  0x00460EE4: je       0x46102f
  0x00461055: cmp      eax, 0x834
  0x0046105A: jg       0x461113
  0x004612C0: mov      eax, dword ptr [esp + 8]
  0x004612C4: mov      edx, dword ptr [eax*4 + 0x2fb9880]
  0x004612CB: mov      eax, dword ptr [eax*4 + 0x2fb98e0]
  0x004611A6: cmp      eax, 0xaf0
  0x004611AB: jg       0x461264
  0x004612F1: je       0x46137e
  0x004613A4: sub      eax, 0xe10
  0x004613A9: je       0x4613da
  0x00461562: mov      eax, dword ptr [esp + 8]
  0x00461566: mov      edx, dword ptr [eax*4 + 0x2fba2e8]
  0x0046156D: mov      eax, dword ptr [eax*4 + 0x2fba340]
  0x00461448: cmp      eax, 0x1068
  0x0046144D: jg       0x461506
  0x00461593: je       0x461620
  0x00461646: sub      eax, 0x1388
  0x0046164B: je       0x46167c
  0x004616E4: je       0x461771
  0x00461797: sub      eax, 0x1644
  0x0046179C: je       0x4617cd
  0x004618B1: mov      eax, dword ptr [esp + 8]
  0x004618B5: mov      edx, dword ptr [eax*4 + 0x2fbac80]
  0x004618BC: mov      eax, dword ptr [eax*4 + 0x2fbacac]
  0x0046182A: sub      eax, 0x1770
  0x0046182F: je       0x46188b
  0x00461909: mov      eax, dword ptr [esp + 8]
  0x0046190D: mov      edx, dword ptr [eax*4 + 0x2fbacd8]
  0x00461914: mov      eax, dword ptr [eax*4 + 0x2fbad04]
  0x004618DE: sub      eax, 0x64
  0x004618E1: jne      0x46192e
  0x0046102F: mov      eax, dword ptr [esp + 8]
  0x00461033: mov      edx, dword ptr [eax*4 + 0x2fb8f50]
  0x0046103A: mov      eax, dword ptr [eax*4 + 0x2fb8f80]
  0x00460EEA: cmp      eax, 0x514
  0x00460EEF: jg       0x460fa8
  0x00461060: je       0x4610ed
  0x00461113: sub      eax, 0x898
  0x00461118: je       0x461149
  0x004611B1: je       0x46123e
  0x00461264: sub      eax, 0xb54
  0x00461269: je       0x46129a
  0x0046137E: mov      eax, dword ptr [esp + 8]
  0x00461382: mov      edx, dword ptr [eax*4 + 0x2fb9ba0]
  0x00461389: mov      eax, dword ptr [eax*4 + 0x2fb9c20]
  0x004612F7: sub      eax, 0xc80
  0x004612FC: je       0x461358
  0x004613DA: mov      eax, dword ptr [esp + 8]
  0x004613DE: mov      edx, dword ptr [eax*4 + 0x2fb9ca0]
  0x004613E5: mov      eax, dword ptr [eax*4 + 0x2fb9cc8]
  0x004613AB: sub      eax, 0x64
  0x004613AE: jne      0x46192e
  0x00461453: je       0x4614e0
  0x00461506: sub      eax, 0x10cc
  0x0046150B: je       0x46153c
  0x00461620: mov      eax, dword ptr [esp + 8]
  0x00461624: mov      edx, dword ptr [eax*4 + 0x2fba5b8]
  0x0046162B: mov      eax, dword ptr [eax*4 + 0x2fba5f8]
  0x00461599: sub      eax, 0x11f8
  0x0046159E: je       0x4615fa
  0x0046167C: mov      eax, dword ptr [esp + 8]
  0x00461680: mov      edx, dword ptr [eax*4 + 0x2fba638]
  0x00461687: mov      eax, dword ptr [eax*4 + 0x2fba678]
  0x0046164D: sub      eax, 0x64
  0x00461650: jne      0x46192e
  0x00461771: mov      eax, dword ptr [esp + 8]
  0x00461775: mov      edx, dword ptr [eax*4 + 0x2fbaa18]
  0x0046177C: mov      eax, dword ptr [eax*4 + 0x2fbaa44]
  0x004616EA: sub      eax, 0x14b4
  0x004616EF: je       0x46174b
  0x004617CD: mov      eax, dword ptr [esp + 8]
  0x004617D1: mov      edx, dword ptr [eax*4 + 0x2fbaa70]
  0x004617D8: mov      eax, dword ptr [eax*4 + 0x2fbaa9c]
  0x0046179E: sub      eax, 0x64
  0x004617A1: jne      0x46192e
  0x0046188B: mov      eax, dword ptr [esp + 8]
  0x0046188F: mov      edx, dword ptr [eax*4 + 0x2fbab78]
  0x00461896: mov      eax, dword ptr [eax*4 + 0x2fbaba4]
  0x00461831: sub      eax, 0x64
  0x00461834: je       0x461865
  0x004618E3: mov      eax, dword ptr [esp + 8]
  0x004618E7: mov      edx, dword ptr [eax*4 + 0x2fbad30]
  0x004618EE: mov      eax, dword ptr [eax*4 + 0x2fbad5c]
  0x0046192E: ret      
  0x00460EF5: je       0x460f82
  0x00460FA8: sub      eax, 0x578
  0x00460FAD: je       0x461009
  0x004610ED: mov      eax, dword ptr [esp + 8]
  0x004610F1: mov      edx, dword ptr [eax*4 + 0x2fb9178]
  0x004610F8: mov      eax, dword ptr [eax*4 + 0x2fb91c0]
  0x00461066: sub      eax, 0x708
  0x0046106B: je       0x4610c7
  0x00461149: mov      eax, dword ptr [esp + 8]
  0x0046114D: mov      edx, dword ptr [eax*4 + 0x2fb9208]
  0x00461154: mov      eax, dword ptr [eax*4 + 0x2fb9244]
  0x0046111A: sub      eax, 0x64
  0x0046111D: jne      0x46192e
  0x0046123E: mov      eax, dword ptr [esp + 8]
  0x00461242: mov      edx, dword ptr [eax*4 + 0x2fb9688]
  0x00461249: mov      eax, dword ptr [eax*4 + 0x2fb96d0]
  0x004611B7: sub      eax, 0x9c4
  0x004611BC: je       0x461218
  0x0046129A: mov      eax, dword ptr [esp + 8]
  0x0046129E: mov      edx, dword ptr [eax*4 + 0x2fb9718]
  0x004612A5: mov      eax, dword ptr [eax*4 + 0x2fb9774]
  0x0046126B: sub      eax, 0x64
  0x0046126E: jne      0x46192e
  0x00461358: mov      eax, dword ptr [esp + 8]
  0x0046135C: mov      edx, dword ptr [eax*4 + 0x2fb9940]
  0x00461363: mov      eax, dword ptr [eax*4 + 0x2fb9990]
  0x004612FE: sub      eax, 0x64
  0x00461301: je       0x461332
  0x004613B4: mov      eax, dword ptr [esp + 8]
  0x004613B8: mov      edx, dword ptr [eax*4 + 0x2fb9cf0]
  0x004613BF: mov      eax, dword ptr [eax*4 + 0x2fb9d3c]
  0x004614E0: mov      eax, dword ptr [esp + 8]
  0x004614E4: mov      edx, dword ptr [eax*4 + 0x2fba058]
  0x004614EB: mov      eax, dword ptr [eax*4 + 0x2fba0dc]
  0x00461459: sub      eax, 0xf3c
  0x0046145E: je       0x4614ba
  0x0046153C: mov      eax, dword ptr [esp + 8]
  0x00461540: mov      edx, dword ptr [eax*4 + 0x2fba160]
  0x00461547: mov      eax, dword ptr [eax*4 + 0x2fba1f8]
  0x0046150D: sub      eax, 0x64
  0x00461510: jne      0x46192e
  0x004615FA: mov      eax, dword ptr [esp + 8]
  0x004615FE: mov      edx, dword ptr [eax*4 + 0x2fba398]
  0x00461605: mov      eax, dword ptr [eax*4 + 0x2fba408]
  0x004615A0: sub      eax, 0x64
  0x004615A3: je       0x4615d4
  0x00461656: mov      eax, dword ptr [esp + 8]
  0x0046165A: mov      edx, dword ptr [eax*4 + 0x2fba6b8]
  0x00461661: mov      eax, dword ptr [eax*4 + 0x2fba6f8]
  0x0046174B: mov      eax, dword ptr [esp + 8]
  0x0046174F: mov      edx, dword ptr [eax*4 + 0x2fba7d8]
  0x00461756: mov      eax, dword ptr [eax*4 + 0x2fba824]
  0x004616F1: sub      eax, 0x64
  0x004616F4: je       0x461725
  0x004617A7: mov      eax, dword ptr [esp + 8]
  0x004617AB: mov      edx, dword ptr [eax*4 + 0x2fbaac8]
  0x004617B2: mov      eax, dword ptr [eax*4 + 0x2fbaaf4]
  0x00461865: mov      eax, dword ptr [esp + 8]
  0x00461869: mov      edx, dword ptr [eax*4 + 0x2fbabd0]
  0x00461870: mov      eax, dword ptr [eax*4 + 0x2fbabfc]
  0x00461836: sub      eax, 0x64
  0x00461839: jne      0x46192e
  0x00460F82: mov      eax, dword ptr [esp + 8]
  0x00460F86: mov      edx, dword ptr [eax*4 + 0x2fb8d30]
  0x00460F8D: mov      eax, dword ptr [eax*4 + 0x2fb8d80]
  0x00460EFB: sub      eax, 0x3e8
  0x00460F00: je       0x460f5c
  0x00461009: mov      eax, dword ptr [esp + 8]
  0x0046100D: mov      edx, dword ptr [eax*4 + 0x2fb8dd0]
  0x00461014: mov      eax, dword ptr [eax*4 + 0x2fb8e14]
  0x00460FAF: sub      eax, 0x64
  0x00460FB2: je       0x460fe3
  0x004610C7: mov      eax, dword ptr [esp + 8]
  0x004610CB: mov      edx, dword ptr [eax*4 + 0x2fb8fb0]
  0x004610D2: mov      eax, dword ptr [eax*4 + 0x2fb9000]
  0x0046106D: sub      eax, 0x64
  0x00461070: je       0x4610a1
  0x00461123: mov      eax, dword ptr [esp + 8]
  0x00461127: mov      edx, dword ptr [eax*4 + 0x2fb9280]
  0x0046112E: mov      eax, dword ptr [eax*4 + 0x2fb92c8]
  0x00461218: mov      eax, dword ptr [esp + 8]
  0x0046121C: mov      edx, dword ptr [eax*4 + 0x2fb93a8]
  0x00461223: mov      eax, dword ptr [eax*4 + 0x2fb9430]
  0x004611BE: sub      eax, 0x64
  0x004611C1: je       0x4611f2
  0x00461274: mov      eax, dword ptr [esp + 8]
  0x00461278: mov      edx, dword ptr [eax*4 + 0x2fb97d0]
  0x0046127F: mov      eax, dword ptr [eax*4 + 0x2fb9828]
  0x00461332: mov      eax, dword ptr [esp + 8]
  0x00461336: mov      edx, dword ptr [eax*4 + 0x2fb99e0]
  0x0046133D: mov      eax, dword ptr [eax*4 + 0x2fb9a70]
  0x00461303: sub      eax, 0x64
  0x00461306: jne      0x46192e
  0x004614BA: mov      eax, dword ptr [esp + 8]
  0x004614BE: mov      edx, dword ptr [eax*4 + 0x2fb9e50]
  0x004614C5: mov      eax, dword ptr [eax*4 + 0x2fb9e7c]
  0x00461460: sub      eax, 0x64
  0x00461463: je       0x461494
  0x00461516: mov      eax, dword ptr [esp + 8]
  0x0046151A: mov      edx, dword ptr [eax*4 + 0x2fba290]
  0x00461521: mov      eax, dword ptr [eax*4 + 0x2fba2bc]
  0x004615D4: mov      eax, dword ptr [esp + 8]
  0x004615D8: mov      edx, dword ptr [eax*4 + 0x2fba478]
  0x004615DF: mov      eax, dword ptr [eax*4 + 0x2fba4d8]
  0x004615A5: sub      eax, 0x64
  0x004615A8: jne      0x46192e
  0x00461725: mov      eax, dword ptr [esp + 8]
  0x00461729: mov      edx, dword ptr [eax*4 + 0x2fba870]
  0x00461730: mov      eax, dword ptr [eax*4 + 0x2fba8d4]
  0x004616F6: sub      eax, 0x64
  0x004616F9: jne      0x46192e
  0x0046183F: mov      eax, dword ptr [esp + 8]
  0x00461843: mov      edx, dword ptr [eax*4 + 0x2fbac28]
  0x0046184A: mov      eax, dword ptr [eax*4 + 0x2fbac54]
  0x00460F5C: mov      eax, dword ptr [esp + 8]
  0x00460F60: mov      edx, dword ptr [eax*4 + 0x2fb8b88]
  0x00460F67: mov      eax, dword ptr [eax*4 + 0x2fb8bdc]
  0x00460F02: sub      eax, 0x64
  0x00460F05: je       0x460f36
  0x00460FE3: mov      eax, dword ptr [esp + 8]
  0x00460FE7: mov      edx, dword ptr [eax*4 + 0x2fb8e58]
  0x00460FEE: mov      eax, dword ptr [eax*4 + 0x2fb8e98]
  0x00460FB4: sub      eax, 0x64
  0x00460FB7: jne      0x46192e
  0x004610A1: mov      eax, dword ptr [esp + 8]
  0x004610A5: mov      edx, dword ptr [eax*4 + 0x2fb9050]
  0x004610AC: mov      eax, dword ptr [eax*4 + 0x2fb90a4]
  0x00461072: sub      eax, 0x64
  0x00461075: jne      0x46192e
  0x004611F2: mov      eax, dword ptr [esp + 8]
  0x004611F6: mov      edx, dword ptr [eax*4 + 0x2fb94b8]
  0x004611FD: mov      eax, dword ptr [eax*4 + 0x2fb955c]
  0x004611C3: sub      eax, 0x64
  0x004611C6: jne      0x46192e
  0x0046130C: mov      eax, dword ptr [esp + 8]
  0x00461310: mov      edx, dword ptr [eax*4 + 0x2fb9b00]
  0x00461317: mov      eax, dword ptr [eax*4 + 0x2fb9b50]
  0x00461494: mov      eax, dword ptr [esp + 8]
  0x00461498: mov      edx, dword ptr [eax*4 + 0x2fb9ea8]
  0x0046149F: mov      eax, dword ptr [eax*4 + 0x2fb9ef4]
  0x00461465: sub      eax, 0x64
  0x00461468: jne      0x46192e
  0x004615AE: mov      eax, dword ptr [esp + 8]
  0x004615B2: mov      edx, dword ptr [eax*4 + 0x2fba538]
  0x004615B9: mov      eax, dword ptr [eax*4 + 0x2fba578]
  0x004616FF: mov      eax, dword ptr [esp + 8]
  0x00461703: mov      edx, dword ptr [eax*4 + 0x2fba938]
  0x0046170A: mov      eax, dword ptr [eax*4 + 0x2fba9a8]
  0x00460F36: mov      eax, dword ptr [esp + 8]
  0x00460F3A: mov      edx, dword ptr [eax*4 + 0x2fb8c30]
  0x00460F41: mov      eax, dword ptr [eax*4 + 0x2fb8c68]
  0x00460F07: sub      eax, 0x64
  0x00460F0A: jne      0x46192e
  0x00460FBD: mov      eax, dword ptr [esp + 8]
  0x00460FC1: mov      edx, dword ptr [eax*4 + 0x2fb8ed8]
  0x00460FC8: mov      eax, dword ptr [eax*4 + 0x2fb8f14]
  0x0046107B: mov      eax, dword ptr [esp + 8]
  0x0046107F: mov      edx, dword ptr [eax*4 + 0x2fb90f8]
  0x00461086: mov      eax, dword ptr [eax*4 + 0x2fb9138]
  0x004611CC: mov      eax, dword ptr [esp + 8]
  0x004611D0: mov      edx, dword ptr [eax*4 + 0x2fb9600]
  0x004611D7: mov      eax, dword ptr [eax*4 + 0x2fb9644]
  0x0046146E: mov      eax, dword ptr [esp + 8]
  0x00461472: mov      edx, dword ptr [eax*4 + 0x2fb9f40]
  0x00461479: mov      eax, dword ptr [eax*4 + 0x2fb9fcc]
  0x00460F10: mov      eax, dword ptr [esp + 8]
  0x00460F14: mov      edx, dword ptr [eax*4 + 0x2fb8ca0]
  0x00460F1B: mov      eax, dword ptr [eax*4 + 0x2fb8ce8]

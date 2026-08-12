/**
 * Function: sub_460eb0
 * Address: 0x00460EB0
 * Blocks: 128
 * Instructions: 298
 * Analyzed with angr + capstone
 */
void* sub_460eb0(void) {

  /* Block 1 @ 0x00460EB0 */
  // mov ecx, dword ptr [esp + 4]
  // mov eax, dword ptr [ecx + 8]
  // CMP eax, 0xed8 (set flags)
  // if (greater) goto 0x461426
  /* Block 2 @ 0x00460EC2 */
  // if (equal) goto 0x461400
  /* Block 3 @ 0x00461426 */
  // CMP eax, 0x1450 (set flags)
  // if (greater) goto 0x4616c8
  /* Block 4 @ 0x00461400 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9d88]
  // mov eax, dword ptr [eax*4 + 0x2fb9dec]
  /* Block 5 @ 0x00460EC8 */
  // CMP eax, 0x960 (set flags)
  // if (greater) goto 0x461195
  /* Block 6 @ 0x00461431 */
  // if (equal) goto 0x4616a2
  /* Block 7 @ 0x004616C8 */
  // CMP eax, 0x170c (set flags)
  // if (greater) goto 0x461819
  /* Block 8 @ 0x00460ED3 */
  // if (equal) goto 0x46116f
  /* Block 9 @ 0x00461195 */
  // CMP eax, 0xc1c (set flags)
  // if (greater) goto 0x4612e6
  /* Block 10 @ 0x004616A2 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba738]
  // mov eax, dword ptr [eax*4 + 0x2fba788]
  /* Block 11 @ 0x00461437 */
  // CMP eax, 0x1194 (set flags)
  // if (greater) goto 0x461588
  /* Block 12 @ 0x004616D3 */
  // if (equal) goto 0x4617f3
  /* Block 13 @ 0x00461819 */
  // CMP eax, 0x189c (set flags)
  // if (greater) goto 0x4618d7
  /* Block 14 @ 0x0046116F */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9310]
  // mov eax, dword ptr [eax*4 + 0x2fb935c]
  /* Block 15 @ 0x00460ED9 */
  // CMP eax, 0x6a4 (set flags)
  // if (greater) goto 0x461055
  /* Block 16 @ 0x004611A0 */
  // if (equal) goto 0x4612c0
  /* Block 17 @ 0x004612E6 */
  // CMP eax, 0xdac (set flags)
  // if (greater) goto 0x4613a4
  /* Block 18 @ 0x00461442 */
  // if (equal) goto 0x461562
  /* Block 19 @ 0x00461588 */
  // CMP eax, 0x1324 (set flags)
  // if (greater) goto 0x461646
  /* Block 20 @ 0x004617F3 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbab20]
  // mov eax, dword ptr [eax*4 + 0x2fbab4c]
  /* Block 21 @ 0x004616D9 */
  // CMP eax, 0x15e0 (set flags)
  // if (greater) goto 0x461797
  /* Block 22 @ 0x00461824 */
  // if (equal) goto 0x4618b1
  /* Block 23 @ 0x004618D7 */
  // sub eax, 0x1900
  // if (equal) goto 0x461909
  /* Block 24 @ 0x00460EE4 */
  // if (equal) goto 0x46102f
  /* Block 25 @ 0x00461055 */
  // CMP eax, 0x834 (set flags)
  // if (greater) goto 0x461113
  /* Block 26 @ 0x004612C0 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9880]
  // mov eax, dword ptr [eax*4 + 0x2fb98e0]
  /* Block 27 @ 0x004611A6 */
  // CMP eax, 0xaf0 (set flags)
  // if (greater) goto 0x461264
  /* Block 28 @ 0x004612F1 */
  // if (equal) goto 0x46137e
  /* Block 29 @ 0x004613A4 */
  // sub eax, 0xe10
  // if (equal) goto 0x4613da
  /* Block 30 @ 0x00461562 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba2e8]
  // mov eax, dword ptr [eax*4 + 0x2fba340]
  /* Block 31 @ 0x00461448 */
  // CMP eax, 0x1068 (set flags)
  // if (greater) goto 0x461506
  /* Block 32 @ 0x00461593 */
  // if (equal) goto 0x461620
  /* Block 33 @ 0x00461646 */
  // sub eax, 0x1388
  // if (equal) goto 0x46167c
  /* Block 34 @ 0x004616E4 */
  // if (equal) goto 0x461771
  /* Block 35 @ 0x00461797 */
  // sub eax, 0x1644
  // if (equal) goto 0x4617cd
  /* Block 36 @ 0x004618B1 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbac80]
  // mov eax, dword ptr [eax*4 + 0x2fbacac]
  /* Block 37 @ 0x0046182A */
  // sub eax, 0x1770
  // if (equal) goto 0x46188b
  /* Block 38 @ 0x00461909 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbacd8]
  // mov eax, dword ptr [eax*4 + 0x2fbad04]
  /* Block 39 @ 0x004618DE */
  // sub eax, 0x64
  // if (not equal) goto 0x46192e
  /* Block 40 @ 0x0046102F */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb8f50]
  // mov eax, dword ptr [eax*4 + 0x2fb8f80]
  /* Block 41 @ 0x00460EEA */
  // CMP eax, 0x514 (set flags)
  // if (greater) goto 0x460fa8
  /* Block 42 @ 0x00461060 */
  // if (equal) goto 0x4610ed
  /* Block 43 @ 0x00461113 */
  // sub eax, 0x898
  // if (equal) goto 0x461149
  /* Block 44 @ 0x004611B1 */
  // if (equal) goto 0x46123e
  /* Block 45 @ 0x00461264 */
  // sub eax, 0xb54
  // if (equal) goto 0x46129a
  /* Block 46 @ 0x0046137E */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9ba0]
  // mov eax, dword ptr [eax*4 + 0x2fb9c20]
  /* Block 47 @ 0x004612F7 */
  // sub eax, 0xc80
  // if (equal) goto 0x461358
  /* Block 48 @ 0x004613DA */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9ca0]
  // mov eax, dword ptr [eax*4 + 0x2fb9cc8]
  /* Block 49 @ 0x004613AB */
  // sub eax, 0x64
  // if (not equal) goto 0x46192e
  /* Block 50 @ 0x00461453 */
  // if (equal) goto 0x4614e0
  /* Block 51 @ 0x00461506 */
  // sub eax, 0x10cc
  // if (equal) goto 0x46153c
  /* Block 52 @ 0x00461620 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba5b8]
  // mov eax, dword ptr [eax*4 + 0x2fba5f8]
  /* Block 53 @ 0x00461599 */
  // sub eax, 0x11f8
  // if (equal) goto 0x4615fa
  /* Block 54 @ 0x0046167C */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba638]
  // mov eax, dword ptr [eax*4 + 0x2fba678]
  /* Block 55 @ 0x0046164D */
  // sub eax, 0x64
  // if (not equal) goto 0x46192e
  /* Block 56 @ 0x00461771 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbaa18]
  // mov eax, dword ptr [eax*4 + 0x2fbaa44]
  /* Block 57 @ 0x004616EA */
  // sub eax, 0x14b4
  // if (equal) goto 0x46174b
  /* Block 58 @ 0x004617CD */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbaa70]
  // mov eax, dword ptr [eax*4 + 0x2fbaa9c]
  /* Block 59 @ 0x0046179E */
  // sub eax, 0x64
  // if (not equal) goto 0x46192e
  /* Block 60 @ 0x0046188B */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbab78]
  // mov eax, dword ptr [eax*4 + 0x2fbaba4]
  /* Block 61 @ 0x00461831 */
  // sub eax, 0x64
  // if (equal) goto 0x461865
  /* Block 62 @ 0x004618E3 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbad30]
  // mov eax, dword ptr [eax*4 + 0x2fbad5c]
  /* Block 63 @ 0x0046192E */
  return;
  /* Block 64 @ 0x00460EF5 */
  // if (equal) goto 0x460f82
  /* Block 65 @ 0x00460FA8 */
  // sub eax, 0x578
  // if (equal) goto 0x461009
  /* Block 66 @ 0x004610ED */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9178]
  // mov eax, dword ptr [eax*4 + 0x2fb91c0]
  /* Block 67 @ 0x00461066 */
  // sub eax, 0x708
  // if (equal) goto 0x4610c7
  /* Block 68 @ 0x00461149 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9208]
  // mov eax, dword ptr [eax*4 + 0x2fb9244]
  /* Block 69 @ 0x0046111A */
  // sub eax, 0x64
  // if (not equal) goto 0x46192e
  /* Block 70 @ 0x0046123E */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9688]
  // mov eax, dword ptr [eax*4 + 0x2fb96d0]
  /* Block 71 @ 0x004611B7 */
  // sub eax, 0x9c4
  // if (equal) goto 0x461218
  /* Block 72 @ 0x0046129A */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9718]
  // mov eax, dword ptr [eax*4 + 0x2fb9774]
  /* Block 73 @ 0x0046126B */
  // sub eax, 0x64
  // if (not equal) goto 0x46192e
  /* Block 74 @ 0x00461358 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9940]
  // mov eax, dword ptr [eax*4 + 0x2fb9990]
  /* Block 75 @ 0x004612FE */
  // sub eax, 0x64
  // if (equal) goto 0x461332
  /* Block 76 @ 0x004613B4 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9cf0]
  // mov eax, dword ptr [eax*4 + 0x2fb9d3c]
  /* Block 77 @ 0x004614E0 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba058]
  // mov eax, dword ptr [eax*4 + 0x2fba0dc]
  /* Block 78 @ 0x00461459 */
  // sub eax, 0xf3c
  // if (equal) goto 0x4614ba
  /* Block 79 @ 0x0046153C */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba160]
  // mov eax, dword ptr [eax*4 + 0x2fba1f8]
  /* Block 80 @ 0x0046150D */
  // sub eax, 0x64
  // if (not equal) goto 0x46192e
  /* Block 81 @ 0x004615FA */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba398]
  // mov eax, dword ptr [eax*4 + 0x2fba408]
  /* Block 82 @ 0x004615A0 */
  // sub eax, 0x64
  // if (equal) goto 0x4615d4
  /* Block 83 @ 0x00461656 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba6b8]
  // mov eax, dword ptr [eax*4 + 0x2fba6f8]
  /* Block 84 @ 0x0046174B */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba7d8]
  // mov eax, dword ptr [eax*4 + 0x2fba824]
  /* Block 85 @ 0x004616F1 */
  // sub eax, 0x64
  // if (equal) goto 0x461725
  /* Block 86 @ 0x004617A7 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbaac8]
  // mov eax, dword ptr [eax*4 + 0x2fbaaf4]
  /* Block 87 @ 0x00461865 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbabd0]
  // mov eax, dword ptr [eax*4 + 0x2fbabfc]
  /* Block 88 @ 0x00461836 */
  // sub eax, 0x64
  // if (not equal) goto 0x46192e
  /* Block 89 @ 0x00460F82 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb8d30]
  // mov eax, dword ptr [eax*4 + 0x2fb8d80]
  /* Block 90 @ 0x00460EFB */
  // sub eax, 0x3e8
  // if (equal) goto 0x460f5c
  /* Block 91 @ 0x00461009 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb8dd0]
  // mov eax, dword ptr [eax*4 + 0x2fb8e14]
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

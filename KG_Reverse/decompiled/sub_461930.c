/**
 * Function: sub_461930
 * Address: 0x00461930
 * Blocks: 128
 * Instructions: 298
 * Analyzed with angr + capstone
 */
void* sub_461930(void) {

  /* Block 1 @ 0x00461930 */
  // mov ecx, dword ptr [esp + 4]
  // mov eax, dword ptr [ecx + 8]
  // CMP eax, 0xed8 (set flags)
  // if (greater) goto 0x461ea6
  /* Block 2 @ 0x00461942 */
  // if (equal) goto 0x461e80
  /* Block 3 @ 0x00461EA6 */
  // CMP eax, 0x1450 (set flags)
  // if (greater) goto 0x462148
  /* Block 4 @ 0x00461E80 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9d88]
  // mov eax, dword ptr [eax*4 + 0x2fb9dec]
  /* Block 5 @ 0x00461948 */
  // CMP eax, 0x960 (set flags)
  // if (greater) goto 0x461c15
  /* Block 6 @ 0x00461EB1 */
  // if (equal) goto 0x462122
  /* Block 7 @ 0x00462148 */
  // CMP eax, 0x170c (set flags)
  // if (greater) goto 0x462299
  /* Block 8 @ 0x00461953 */
  // if (equal) goto 0x461bef
  /* Block 9 @ 0x00461C15 */
  // CMP eax, 0xc1c (set flags)
  // if (greater) goto 0x461d66
  /* Block 10 @ 0x00462122 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba738]
  // mov eax, dword ptr [eax*4 + 0x2fba788]
  /* Block 11 @ 0x00461EB7 */
  // CMP eax, 0x1194 (set flags)
  // if (greater) goto 0x462008
  /* Block 12 @ 0x00462153 */
  // if (equal) goto 0x462273
  /* Block 13 @ 0x00462299 */
  // CMP eax, 0x189c (set flags)
  // if (greater) goto 0x462357
  /* Block 14 @ 0x00461BEF */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9310]
  // mov eax, dword ptr [eax*4 + 0x2fb935c]
  /* Block 15 @ 0x00461959 */
  // CMP eax, 0x6a4 (set flags)
  // if (greater) goto 0x461ad5
  /* Block 16 @ 0x00461C20 */
  // if (equal) goto 0x461d40
  /* Block 17 @ 0x00461D66 */
  // CMP eax, 0xdac (set flags)
  // if (greater) goto 0x461e24
  /* Block 18 @ 0x00461EC2 */
  // if (equal) goto 0x461fe2
  /* Block 19 @ 0x00462008 */
  // CMP eax, 0x1324 (set flags)
  // if (greater) goto 0x4620c6
  /* Block 20 @ 0x00462273 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbab20]
  // mov eax, dword ptr [eax*4 + 0x2fbab4c]
  /* Block 21 @ 0x00462159 */
  // CMP eax, 0x15e0 (set flags)
  // if (greater) goto 0x462217
  /* Block 22 @ 0x004622A4 */
  // if (equal) goto 0x462331
  /* Block 23 @ 0x00462357 */
  // sub eax, 0x1900
  // if (equal) goto 0x462389
  /* Block 24 @ 0x00461964 */
  // if (equal) goto 0x461aaf
  /* Block 25 @ 0x00461AD5 */
  // CMP eax, 0x834 (set flags)
  // if (greater) goto 0x461b93
  /* Block 26 @ 0x00461D40 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9880]
  // mov eax, dword ptr [eax*4 + 0x2fb98e0]
  /* Block 27 @ 0x00461C26 */
  // CMP eax, 0xaf0 (set flags)
  // if (greater) goto 0x461ce4
  /* Block 28 @ 0x00461D71 */
  // if (equal) goto 0x461dfe
  /* Block 29 @ 0x00461E24 */
  // sub eax, 0xe10
  // if (equal) goto 0x461e5a
  /* Block 30 @ 0x00461FE2 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba2e8]
  // mov eax, dword ptr [eax*4 + 0x2fba340]
  /* Block 31 @ 0x00461EC8 */
  // CMP eax, 0x1068 (set flags)
  // if (greater) goto 0x461f86
  /* Block 32 @ 0x00462013 */
  // if (equal) goto 0x4620a0
  /* Block 33 @ 0x004620C6 */
  // sub eax, 0x1388
  // if (equal) goto 0x4620fc
  /* Block 34 @ 0x00462164 */
  // if (equal) goto 0x4621f1
  /* Block 35 @ 0x00462217 */
  // sub eax, 0x1644
  // if (equal) goto 0x46224d
  /* Block 36 @ 0x00462331 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbac80]
  // mov eax, dword ptr [eax*4 + 0x2fbacac]
  /* Block 37 @ 0x004622AA */
  // sub eax, 0x1770
  // if (equal) goto 0x46230b
  /* Block 38 @ 0x00462389 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbacd8]
  // mov eax, dword ptr [eax*4 + 0x2fbad04]
  /* Block 39 @ 0x0046235E */
  // sub eax, 0x64
  // if (not equal) goto 0x4623ae
  /* Block 40 @ 0x00461AAF */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb8f50]
  // mov eax, dword ptr [eax*4 + 0x2fb8f80]
  /* Block 41 @ 0x0046196A */
  // CMP eax, 0x514 (set flags)
  // if (greater) goto 0x461a28
  /* Block 42 @ 0x00461AE0 */
  // if (equal) goto 0x461b6d
  /* Block 43 @ 0x00461B93 */
  // sub eax, 0x898
  // if (equal) goto 0x461bc9
  /* Block 44 @ 0x00461C31 */
  // if (equal) goto 0x461cbe
  /* Block 45 @ 0x00461CE4 */
  // sub eax, 0xb54
  // if (equal) goto 0x461d1a
  /* Block 46 @ 0x00461DFE */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9ba0]
  // mov eax, dword ptr [eax*4 + 0x2fb9c20]
  /* Block 47 @ 0x00461D77 */
  // sub eax, 0xc80
  // if (equal) goto 0x461dd8
  /* Block 48 @ 0x00461E5A */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9ca0]
  // mov eax, dword ptr [eax*4 + 0x2fb9cc8]
  /* Block 49 @ 0x00461E2B */
  // sub eax, 0x64
  // if (not equal) goto 0x4623ae
  /* Block 50 @ 0x00461ED3 */
  // if (equal) goto 0x461f60
  /* Block 51 @ 0x00461F86 */
  // sub eax, 0x10cc
  // if (equal) goto 0x461fbc
  /* Block 52 @ 0x004620A0 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba5b8]
  // mov eax, dword ptr [eax*4 + 0x2fba5f8]
  /* Block 53 @ 0x00462019 */
  // sub eax, 0x11f8
  // if (equal) goto 0x46207a
  /* Block 54 @ 0x004620FC */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba638]
  // mov eax, dword ptr [eax*4 + 0x2fba678]
  /* Block 55 @ 0x004620CD */
  // sub eax, 0x64
  // if (not equal) goto 0x4623ae
  /* Block 56 @ 0x004621F1 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbaa18]
  // mov eax, dword ptr [eax*4 + 0x2fbaa44]
  /* Block 57 @ 0x0046216A */
  // sub eax, 0x14b4
  // if (equal) goto 0x4621cb
  /* Block 58 @ 0x0046224D */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbaa70]
  // mov eax, dword ptr [eax*4 + 0x2fbaa9c]
  /* Block 59 @ 0x0046221E */
  // sub eax, 0x64
  // if (not equal) goto 0x4623ae
  /* Block 60 @ 0x0046230B */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbab78]
  // mov eax, dword ptr [eax*4 + 0x2fbaba4]
  /* Block 61 @ 0x004622B1 */
  // sub eax, 0x64
  // if (equal) goto 0x4622e5
  /* Block 62 @ 0x00462363 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbad30]
  // mov eax, dword ptr [eax*4 + 0x2fbad5c]
  /* Block 63 @ 0x004623AE */
  return;
  /* Block 64 @ 0x00461975 */
  // if (equal) goto 0x461a02
  /* Block 65 @ 0x00461A28 */
  // sub eax, 0x578
  // if (equal) goto 0x461a89
  /* Block 66 @ 0x00461B6D */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9178]
  // mov eax, dword ptr [eax*4 + 0x2fb91c0]
  /* Block 67 @ 0x00461AE6 */
  // sub eax, 0x708
  // if (equal) goto 0x461b47
  /* Block 68 @ 0x00461BC9 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9208]
  // mov eax, dword ptr [eax*4 + 0x2fb9244]
  /* Block 69 @ 0x00461B9A */
  // sub eax, 0x64
  // if (not equal) goto 0x4623ae
  /* Block 70 @ 0x00461CBE */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9688]
  // mov eax, dword ptr [eax*4 + 0x2fb96d0]
  /* Block 71 @ 0x00461C37 */
  // sub eax, 0x9c4
  // if (equal) goto 0x461c98
  /* Block 72 @ 0x00461D1A */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9718]
  // mov eax, dword ptr [eax*4 + 0x2fb9774]
  /* Block 73 @ 0x00461CEB */
  // sub eax, 0x64
  // if (not equal) goto 0x4623ae
  /* Block 74 @ 0x00461DD8 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9940]
  // mov eax, dword ptr [eax*4 + 0x2fb9990]
  /* Block 75 @ 0x00461D7E */
  // sub eax, 0x64
  // if (equal) goto 0x461db2
  /* Block 76 @ 0x00461E34 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb9cf0]
  // mov eax, dword ptr [eax*4 + 0x2fb9d3c]
  /* Block 77 @ 0x00461F60 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba058]
  // mov eax, dword ptr [eax*4 + 0x2fba0dc]
  /* Block 78 @ 0x00461ED9 */
  // sub eax, 0xf3c
  // if (equal) goto 0x461f3a
  /* Block 79 @ 0x00461FBC */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba160]
  // mov eax, dword ptr [eax*4 + 0x2fba1f8]
  /* Block 80 @ 0x00461F8D */
  // sub eax, 0x64
  // if (not equal) goto 0x4623ae
  /* Block 81 @ 0x0046207A */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba398]
  // mov eax, dword ptr [eax*4 + 0x2fba408]
  /* Block 82 @ 0x00462020 */
  // sub eax, 0x64
  // if (equal) goto 0x462054
  /* Block 83 @ 0x004620D6 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba6b8]
  // mov eax, dword ptr [eax*4 + 0x2fba6f8]
  /* Block 84 @ 0x004621CB */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fba7d8]
  // mov eax, dword ptr [eax*4 + 0x2fba824]
  /* Block 85 @ 0x00462171 */
  // sub eax, 0x64
  // if (equal) goto 0x4621a5
  /* Block 86 @ 0x00462227 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbaac8]
  // mov eax, dword ptr [eax*4 + 0x2fbaaf4]
  /* Block 87 @ 0x004622E5 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fbabd0]
  // mov eax, dword ptr [eax*4 + 0x2fbabfc]
  /* Block 88 @ 0x004622B6 */
  // sub eax, 0x64
  // if (not equal) goto 0x4623ae
  /* Block 89 @ 0x00461A02 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb8d30]
  // mov eax, dword ptr [eax*4 + 0x2fb8d80]
  /* Block 90 @ 0x0046197B */
  // sub eax, 0x3e8
  // if (equal) goto 0x4619dc
  /* Block 91 @ 0x00461A89 */
  // mov eax, dword ptr [esp + 8]
  // mov edx, dword ptr [eax*4 + 0x2fb8dd0]
  // mov eax, dword ptr [eax*4 + 0x2fb8e14]
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00461930: mov      ecx, dword ptr [esp + 4]
  0x00461934: mov      eax, dword ptr [ecx + 8]
  0x00461937: cmp      eax, 0xed8
  0x0046193C: jg       0x461ea6
  0x00461942: je       0x461e80
  0x00461EA6: cmp      eax, 0x1450
  0x00461EAB: jg       0x462148
  0x00461E80: mov      eax, dword ptr [esp + 8]
  0x00461E84: mov      edx, dword ptr [eax*4 + 0x2fb9d88]
  0x00461E8B: mov      eax, dword ptr [eax*4 + 0x2fb9dec]
  0x00461948: cmp      eax, 0x960
  0x0046194D: jg       0x461c15
  0x00461EB1: je       0x462122
  0x00462148: cmp      eax, 0x170c
  0x0046214D: jg       0x462299
  0x00461953: je       0x461bef
  0x00461C15: cmp      eax, 0xc1c
  0x00461C1A: jg       0x461d66
  0x00462122: mov      eax, dword ptr [esp + 8]
  0x00462126: mov      edx, dword ptr [eax*4 + 0x2fba738]
  0x0046212D: mov      eax, dword ptr [eax*4 + 0x2fba788]
  0x00461EB7: cmp      eax, 0x1194
  0x00461EBC: jg       0x462008
  0x00462153: je       0x462273
  0x00462299: cmp      eax, 0x189c
  0x0046229E: jg       0x462357
  0x00461BEF: mov      eax, dword ptr [esp + 8]
  0x00461BF3: mov      edx, dword ptr [eax*4 + 0x2fb9310]
  0x00461BFA: mov      eax, dword ptr [eax*4 + 0x2fb935c]
  0x00461959: cmp      eax, 0x6a4
  0x0046195E: jg       0x461ad5
  0x00461C20: je       0x461d40
  0x00461D66: cmp      eax, 0xdac
  0x00461D6B: jg       0x461e24
  0x00461EC2: je       0x461fe2
  0x00462008: cmp      eax, 0x1324
  0x0046200D: jg       0x4620c6
  0x00462273: mov      eax, dword ptr [esp + 8]
  0x00462277: mov      edx, dword ptr [eax*4 + 0x2fbab20]
  0x0046227E: mov      eax, dword ptr [eax*4 + 0x2fbab4c]
  0x00462159: cmp      eax, 0x15e0
  0x0046215E: jg       0x462217
  0x004622A4: je       0x462331
  0x00462357: sub      eax, 0x1900
  0x0046235C: je       0x462389
  0x00461964: je       0x461aaf
  0x00461AD5: cmp      eax, 0x834
  0x00461ADA: jg       0x461b93
  0x00461D40: mov      eax, dword ptr [esp + 8]
  0x00461D44: mov      edx, dword ptr [eax*4 + 0x2fb9880]
  0x00461D4B: mov      eax, dword ptr [eax*4 + 0x2fb98e0]
  0x00461C26: cmp      eax, 0xaf0
  0x00461C2B: jg       0x461ce4
  0x00461D71: je       0x461dfe
  0x00461E24: sub      eax, 0xe10
  0x00461E29: je       0x461e5a
  0x00461FE2: mov      eax, dword ptr [esp + 8]
  0x00461FE6: mov      edx, dword ptr [eax*4 + 0x2fba2e8]
  0x00461FED: mov      eax, dword ptr [eax*4 + 0x2fba340]
  0x00461EC8: cmp      eax, 0x1068
  0x00461ECD: jg       0x461f86
  0x00462013: je       0x4620a0
  0x004620C6: sub      eax, 0x1388
  0x004620CB: je       0x4620fc
  0x00462164: je       0x4621f1
  0x00462217: sub      eax, 0x1644
  0x0046221C: je       0x46224d
  0x00462331: mov      eax, dword ptr [esp + 8]
  0x00462335: mov      edx, dword ptr [eax*4 + 0x2fbac80]
  0x0046233C: mov      eax, dword ptr [eax*4 + 0x2fbacac]
  0x004622AA: sub      eax, 0x1770
  0x004622AF: je       0x46230b
  0x00462389: mov      eax, dword ptr [esp + 8]
  0x0046238D: mov      edx, dword ptr [eax*4 + 0x2fbacd8]
  0x00462394: mov      eax, dword ptr [eax*4 + 0x2fbad04]
  0x0046235E: sub      eax, 0x64
  0x00462361: jne      0x4623ae
  0x00461AAF: mov      eax, dword ptr [esp + 8]
  0x00461AB3: mov      edx, dword ptr [eax*4 + 0x2fb8f50]
  0x00461ABA: mov      eax, dword ptr [eax*4 + 0x2fb8f80]
  0x0046196A: cmp      eax, 0x514
  0x0046196F: jg       0x461a28
  0x00461AE0: je       0x461b6d
  0x00461B93: sub      eax, 0x898
  0x00461B98: je       0x461bc9
  0x00461C31: je       0x461cbe
  0x00461CE4: sub      eax, 0xb54
  0x00461CE9: je       0x461d1a
  0x00461DFE: mov      eax, dword ptr [esp + 8]
  0x00461E02: mov      edx, dword ptr [eax*4 + 0x2fb9ba0]
  0x00461E09: mov      eax, dword ptr [eax*4 + 0x2fb9c20]
  0x00461D77: sub      eax, 0xc80
  0x00461D7C: je       0x461dd8
  0x00461E5A: mov      eax, dword ptr [esp + 8]
  0x00461E5E: mov      edx, dword ptr [eax*4 + 0x2fb9ca0]
  0x00461E65: mov      eax, dword ptr [eax*4 + 0x2fb9cc8]
  0x00461E2B: sub      eax, 0x64
  0x00461E2E: jne      0x4623ae
  0x00461ED3: je       0x461f60
  0x00461F86: sub      eax, 0x10cc
  0x00461F8B: je       0x461fbc
  0x004620A0: mov      eax, dword ptr [esp + 8]
  0x004620A4: mov      edx, dword ptr [eax*4 + 0x2fba5b8]
  0x004620AB: mov      eax, dword ptr [eax*4 + 0x2fba5f8]
  0x00462019: sub      eax, 0x11f8
  0x0046201E: je       0x46207a
  0x004620FC: mov      eax, dword ptr [esp + 8]
  0x00462100: mov      edx, dword ptr [eax*4 + 0x2fba638]
  0x00462107: mov      eax, dword ptr [eax*4 + 0x2fba678]
  0x004620CD: sub      eax, 0x64
  0x004620D0: jne      0x4623ae
  0x004621F1: mov      eax, dword ptr [esp + 8]
  0x004621F5: mov      edx, dword ptr [eax*4 + 0x2fbaa18]
  0x004621FC: mov      eax, dword ptr [eax*4 + 0x2fbaa44]
  0x0046216A: sub      eax, 0x14b4
  0x0046216F: je       0x4621cb
  0x0046224D: mov      eax, dword ptr [esp + 8]
  0x00462251: mov      edx, dword ptr [eax*4 + 0x2fbaa70]
  0x00462258: mov      eax, dword ptr [eax*4 + 0x2fbaa9c]
  0x0046221E: sub      eax, 0x64
  0x00462221: jne      0x4623ae
  0x0046230B: mov      eax, dword ptr [esp + 8]
  0x0046230F: mov      edx, dword ptr [eax*4 + 0x2fbab78]
  0x00462316: mov      eax, dword ptr [eax*4 + 0x2fbaba4]
  0x004622B1: sub      eax, 0x64
  0x004622B4: je       0x4622e5
  0x00462363: mov      eax, dword ptr [esp + 8]
  0x00462367: mov      edx, dword ptr [eax*4 + 0x2fbad30]
  0x0046236E: mov      eax, dword ptr [eax*4 + 0x2fbad5c]
  0x004623AE: ret      
  0x00461975: je       0x461a02
  0x00461A28: sub      eax, 0x578
  0x00461A2D: je       0x461a89
  0x00461B6D: mov      eax, dword ptr [esp + 8]
  0x00461B71: mov      edx, dword ptr [eax*4 + 0x2fb9178]
  0x00461B78: mov      eax, dword ptr [eax*4 + 0x2fb91c0]
  0x00461AE6: sub      eax, 0x708
  0x00461AEB: je       0x461b47
  0x00461BC9: mov      eax, dword ptr [esp + 8]
  0x00461BCD: mov      edx, dword ptr [eax*4 + 0x2fb9208]
  0x00461BD4: mov      eax, dword ptr [eax*4 + 0x2fb9244]
  0x00461B9A: sub      eax, 0x64
  0x00461B9D: jne      0x4623ae
  0x00461CBE: mov      eax, dword ptr [esp + 8]
  0x00461CC2: mov      edx, dword ptr [eax*4 + 0x2fb9688]
  0x00461CC9: mov      eax, dword ptr [eax*4 + 0x2fb96d0]
  0x00461C37: sub      eax, 0x9c4
  0x00461C3C: je       0x461c98
  0x00461D1A: mov      eax, dword ptr [esp + 8]
  0x00461D1E: mov      edx, dword ptr [eax*4 + 0x2fb9718]
  0x00461D25: mov      eax, dword ptr [eax*4 + 0x2fb9774]
  0x00461CEB: sub      eax, 0x64
  0x00461CEE: jne      0x4623ae
  0x00461DD8: mov      eax, dword ptr [esp + 8]
  0x00461DDC: mov      edx, dword ptr [eax*4 + 0x2fb9940]
  0x00461DE3: mov      eax, dword ptr [eax*4 + 0x2fb9990]
  0x00461D7E: sub      eax, 0x64
  0x00461D81: je       0x461db2
  0x00461E34: mov      eax, dword ptr [esp + 8]
  0x00461E38: mov      edx, dword ptr [eax*4 + 0x2fb9cf0]
  0x00461E3F: mov      eax, dword ptr [eax*4 + 0x2fb9d3c]
  0x00461F60: mov      eax, dword ptr [esp + 8]
  0x00461F64: mov      edx, dword ptr [eax*4 + 0x2fba058]
  0x00461F6B: mov      eax, dword ptr [eax*4 + 0x2fba0dc]
  0x00461ED9: sub      eax, 0xf3c
  0x00461EDE: je       0x461f3a
  0x00461FBC: mov      eax, dword ptr [esp + 8]
  0x00461FC0: mov      edx, dword ptr [eax*4 + 0x2fba160]
  0x00461FC7: mov      eax, dword ptr [eax*4 + 0x2fba1f8]
  0x00461F8D: sub      eax, 0x64
  0x00461F90: jne      0x4623ae
  0x0046207A: mov      eax, dword ptr [esp + 8]
  0x0046207E: mov      edx, dword ptr [eax*4 + 0x2fba398]
  0x00462085: mov      eax, dword ptr [eax*4 + 0x2fba408]
  0x00462020: sub      eax, 0x64
  0x00462023: je       0x462054
  0x004620D6: mov      eax, dword ptr [esp + 8]
  0x004620DA: mov      edx, dword ptr [eax*4 + 0x2fba6b8]
  0x004620E1: mov      eax, dword ptr [eax*4 + 0x2fba6f8]
  0x004621CB: mov      eax, dword ptr [esp + 8]
  0x004621CF: mov      edx, dword ptr [eax*4 + 0x2fba7d8]
  0x004621D6: mov      eax, dword ptr [eax*4 + 0x2fba824]
  0x00462171: sub      eax, 0x64
  0x00462174: je       0x4621a5
  0x00462227: mov      eax, dword ptr [esp + 8]
  0x0046222B: mov      edx, dword ptr [eax*4 + 0x2fbaac8]
  0x00462232: mov      eax, dword ptr [eax*4 + 0x2fbaaf4]
  0x004622E5: mov      eax, dword ptr [esp + 8]
  0x004622E9: mov      edx, dword ptr [eax*4 + 0x2fbabd0]
  0x004622F0: mov      eax, dword ptr [eax*4 + 0x2fbabfc]
  0x004622B6: sub      eax, 0x64
  0x004622B9: jne      0x4623ae
  0x00461A02: mov      eax, dword ptr [esp + 8]
  0x00461A06: mov      edx, dword ptr [eax*4 + 0x2fb8d30]
  0x00461A0D: mov      eax, dword ptr [eax*4 + 0x2fb8d80]
  0x0046197B: sub      eax, 0x3e8
  0x00461980: je       0x4619dc
  0x00461A89: mov      eax, dword ptr [esp + 8]
  0x00461A8D: mov      edx, dword ptr [eax*4 + 0x2fb8dd0]
  0x00461A94: mov      eax, dword ptr [eax*4 + 0x2fb8e14]
  0x00461A2F: sub      eax, 0x64
  0x00461A32: je       0x461a63
  0x00461B47: mov      eax, dword ptr [esp + 8]
  0x00461B4B: mov      edx, dword ptr [eax*4 + 0x2fb8fb0]
  0x00461B52: mov      eax, dword ptr [eax*4 + 0x2fb9000]
  0x00461AED: sub      eax, 0x64
  0x00461AF0: je       0x461b21
  0x00461BA3: mov      eax, dword ptr [esp + 8]
  0x00461BA7: mov      edx, dword ptr [eax*4 + 0x2fb9280]
  0x00461BAE: mov      eax, dword ptr [eax*4 + 0x2fb92c8]
  0x00461C98: mov      eax, dword ptr [esp + 8]
  0x00461C9C: mov      edx, dword ptr [eax*4 + 0x2fb93a8]
  0x00461CA3: mov      eax, dword ptr [eax*4 + 0x2fb9430]
  0x00461C3E: sub      eax, 0x64
  0x00461C41: je       0x461c72
  0x00461CF4: mov      eax, dword ptr [esp + 8]
  0x00461CF8: mov      edx, dword ptr [eax*4 + 0x2fb97d0]
  0x00461CFF: mov      eax, dword ptr [eax*4 + 0x2fb9828]
  0x00461DB2: mov      eax, dword ptr [esp + 8]
  0x00461DB6: mov      edx, dword ptr [eax*4 + 0x2fb99e0]
  0x00461DBD: mov      eax, dword ptr [eax*4 + 0x2fb9a70]
  0x00461D83: sub      eax, 0x64
  0x00461D86: jne      0x4623ae
  0x00461F3A: mov      eax, dword ptr [esp + 8]
  0x00461F3E: mov      edx, dword ptr [eax*4 + 0x2fb9e50]
  0x00461F45: mov      eax, dword ptr [eax*4 + 0x2fb9e7c]
  0x00461EE0: sub      eax, 0x64
  0x00461EE3: je       0x461f14
  0x00461F96: mov      eax, dword ptr [esp + 8]
  0x00461F9A: mov      edx, dword ptr [eax*4 + 0x2fba290]
  0x00461FA1: mov      eax, dword ptr [eax*4 + 0x2fba2bc]
  0x00462054: mov      eax, dword ptr [esp + 8]
  0x00462058: mov      edx, dword ptr [eax*4 + 0x2fba478]
  0x0046205F: mov      eax, dword ptr [eax*4 + 0x2fba4d8]
  0x00462025: sub      eax, 0x64
  0x00462028: jne      0x4623ae
  0x004621A5: mov      eax, dword ptr [esp + 8]
  0x004621A9: mov      edx, dword ptr [eax*4 + 0x2fba870]
  0x004621B0: mov      eax, dword ptr [eax*4 + 0x2fba8d4]
  0x00462176: sub      eax, 0x64
  0x00462179: jne      0x4623ae
  0x004622BF: mov      eax, dword ptr [esp + 8]
  0x004622C3: mov      edx, dword ptr [eax*4 + 0x2fbac28]
  0x004622CA: mov      eax, dword ptr [eax*4 + 0x2fbac54]
  0x004619DC: mov      eax, dword ptr [esp + 8]
  0x004619E0: mov      edx, dword ptr [eax*4 + 0x2fb8b88]
  0x004619E7: mov      eax, dword ptr [eax*4 + 0x2fb8bdc]
  0x00461982: sub      eax, 0x64
  0x00461985: je       0x4619b6
  0x00461A63: mov      eax, dword ptr [esp + 8]
  0x00461A67: mov      edx, dword ptr [eax*4 + 0x2fb8e58]
  0x00461A6E: mov      eax, dword ptr [eax*4 + 0x2fb8e98]
  0x00461A34: sub      eax, 0x64
  0x00461A37: jne      0x4623ae
  0x00461B21: mov      eax, dword ptr [esp + 8]
  0x00461B25: mov      edx, dword ptr [eax*4 + 0x2fb9050]
  0x00461B2C: mov      eax, dword ptr [eax*4 + 0x2fb90a4]
  0x00461AF2: sub      eax, 0x64
  0x00461AF5: jne      0x4623ae
  0x00461C72: mov      eax, dword ptr [esp + 8]
  0x00461C76: mov      edx, dword ptr [eax*4 + 0x2fb94b8]
  0x00461C7D: mov      eax, dword ptr [eax*4 + 0x2fb955c]
  0x00461C43: sub      eax, 0x64
  0x00461C46: jne      0x4623ae
  0x00461D8C: mov      eax, dword ptr [esp + 8]
  0x00461D90: mov      edx, dword ptr [eax*4 + 0x2fb9b00]
  0x00461D97: mov      eax, dword ptr [eax*4 + 0x2fb9b50]
  0x00461F14: mov      eax, dword ptr [esp + 8]
  0x00461F18: mov      edx, dword ptr [eax*4 + 0x2fb9ea8]
  0x00461F1F: mov      eax, dword ptr [eax*4 + 0x2fb9ef4]
  0x00461EE5: sub      eax, 0x64
  0x00461EE8: jne      0x4623ae
  0x0046202E: mov      eax, dword ptr [esp + 8]
  0x00462032: mov      edx, dword ptr [eax*4 + 0x2fba538]
  0x00462039: mov      eax, dword ptr [eax*4 + 0x2fba578]
  0x0046217F: mov      eax, dword ptr [esp + 8]
  0x00462183: mov      edx, dword ptr [eax*4 + 0x2fba938]
  0x0046218A: mov      eax, dword ptr [eax*4 + 0x2fba9a8]
  0x004619B6: mov      eax, dword ptr [esp + 8]
  0x004619BA: mov      edx, dword ptr [eax*4 + 0x2fb8c30]
  0x004619C1: mov      eax, dword ptr [eax*4 + 0x2fb8c68]
  0x00461987: sub      eax, 0x64
  0x0046198A: jne      0x4623ae
  0x00461A3D: mov      eax, dword ptr [esp + 8]
  0x00461A41: mov      edx, dword ptr [eax*4 + 0x2fb8ed8]
  0x00461A48: mov      eax, dword ptr [eax*4 + 0x2fb8f14]
  0x00461AFB: mov      eax, dword ptr [esp + 8]
  0x00461AFF: mov      edx, dword ptr [eax*4 + 0x2fb90f8]
  0x00461B06: mov      eax, dword ptr [eax*4 + 0x2fb9138]
  0x00461C4C: mov      eax, dword ptr [esp + 8]
  0x00461C50: mov      edx, dword ptr [eax*4 + 0x2fb9600]
  0x00461C57: mov      eax, dword ptr [eax*4 + 0x2fb9644]
  0x00461EEE: mov      eax, dword ptr [esp + 8]
  0x00461EF2: mov      edx, dword ptr [eax*4 + 0x2fb9f40]
  0x00461EF9: mov      eax, dword ptr [eax*4 + 0x2fb9fcc]
  0x00461990: mov      eax, dword ptr [esp + 8]
  0x00461994: mov      edx, dword ptr [eax*4 + 0x2fb8ca0]
  0x0046199B: mov      eax, dword ptr [eax*4 + 0x2fb8ce8]

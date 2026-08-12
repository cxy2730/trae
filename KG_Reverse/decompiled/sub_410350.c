/**
 * Function: sub_410350
 * Address: 0x00410350
 * Blocks: 301
 * Instructions: 1021
 * Analyzed with angr + capstone
 */
void* sub_410350(void) {

  /* Block 1 @ 0x00410350 */
  // mov eax, dword ptr fs:[0]
  // push -1
  // push 0x49e7e2
  // push eax
  // mov dword ptr fs:[0], esp
  // sub esp, 0x10
  // push ebx
  // push ebp
  // push esi
  // push edi
  // mov edi, dword ptr [esp + 0x30]
  // mov esi, ecx
  // CMP edi, 0x7d0 (set flags)
  // if (greater) goto 0x4106b1
  /* Block 2 @ 0x0041037E */
  // if (equal) goto 0x4105cc
  /* Block 3 @ 0x004106B1 */
  // lea eax, [edi - 0x7d1]
  // CMP eax, 0x27 (set flags)
  // if (above) goto 0x411004
  /* Block 4 @ 0x004105CC */
  // mov eax, dword ptr [esi + 0x1d8]
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x411004
  /* Block 5 @ 0x00410384 */
  // lea eax, [edi - 0x3e8]
  // CMP eax, 0xe (set flags)
  // if (above) goto 0x411004
  /* Block 6 @ 0x004106C0 */
  goto dword ptr [eax*4 + 0x411058];
  /* Block 7 @ 0x00411004 */
  // xor eax, eax
  // mov ecx, dword ptr [esp + 0x20]
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // mov dword ptr fs:[0], ecx
  // add esp, 0x1c
  return;
  /* Block 8 @ 0x004105DA */
  // mov ebx, dword ptr [esp + 0x34]
  // lea edx, [esp + 0x34]
  // push 0
  // push edx
  // push ebx
  // lea ecx, [esi + 0x104]
  // call 0x0040EC30
  call(0x0040EC30);
  /* Block 9 @ 0x00410393 */
  goto dword ptr [eax*4 + 0x41101c];
  /* Block 10 @ 0x00410C80 */
  // mov eax, dword ptr [esp + 0x34]
  // push eax
  // call 0x0041B6A0
  call(0x0041B6A0);
  /* Block 11 @ 0x00410A04 */
  // push 0
  // mov ecx, esi
  // call 0x00415C00
  call(0x00415C00);
  /* Block 12 @ 0x00410A12 */
  // mov ecx, dword ptr [esp + 0x34]
  // TEST ecx, ecx (set flags)
  // if (equal) goto 0x411004
  /* Block 13 @ 0x00410C92 */
  // mov ecx, dword ptr [esp + 0x34]
  // push 0
  // push ecx
  // mov ecx, esi
  // call 0x00413290
  call(0x00413290);
  /* Block 14 @ 0x00410F93 */
  // mov eax, dword ptr [esp + 0x34]
  // lea edx, [esp + 0x34]
  // push 0
  // push edx
  // push eax
  // lea ecx, [esi + 0x104]
  // call 0x0040EC30
  call(0x0040EC30);
  /* Block 15 @ 0x00410A97 */
  // mov ecx, esi
  // call 0x00412670
  call(0x00412670);
  /* Block 16 @ 0x00410918 */
  // mov eax, dword ptr [esi + 0x23c]
  // mov ebx, dword ptr [esp + 0x34]
  // lea edi, [esi + 0x22c]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x41094a
  /* Block 17 @ 0x00410899 */
  // mov eax, dword ptr [esp + 0x34]
  // mov ecx, esi
  // push eax
  // call 0x0041B250
  call(0x0041B250);
  /* Block 18 @ 0x00410D18 */
  // mov ecx, dword ptr [esp + 0x34]
  // push ecx
  // call 0x00420A60
  call(0x00420A60);
  /* Block 19 @ 0x00410AA3 */
  // mov eax, dword ptr [esi + 0x264]
  // mov edi, dword ptr [esp + 0x34]
  // add esi, 0x254
  // TEST eax, eax (set flags)
  // if (equal) goto 0x410ad5
  /* Block 20 @ 0x004107A4 */
  // mov eax, dword ptr [esi + 0xd0]
  goto 0x411006;
  /* Block 21 @ 0x004108AA */
  // mov ecx, dword ptr [esp + 0x34]
  // push ecx
  // mov ecx, esi
  // call 0x0041B300
  call(0x0041B300);
  /* Block 22 @ 0x00410C2B */
  // mov eax, dword ptr [esp + 0x38]
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x410c45
  /* Block 23 @ 0x00410D2A */
  // mov edx, dword ptr [esp + 0x34]
  // push edx
  // call 0x00430A20
  call(0x00430A20);
  /* Block 24 @ 0x004107AF */
  // mov eax, dword ptr [esi + 0xd4]
  goto 0x411006;
  /* Block 25 @ 0x00410BB5 */
  // mov eax, dword ptr [esp + 0x34]
  // push 0
  // push 0
  // push 0
  // push eax
  // mov ecx, esi
  // call 0x00412F90
  call(0x00412F90);
  /* Block 26 @ 0x004107BA */
  // mov ebx, dword ptr [esp + 0x34]
  // TEST ebx, ebx (set flags)
  // if (equal) goto 0x410910
  /* Block 27 @ 0x004108BB */
  // mov eax, dword ptr [esi + 0x23c]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x410910
  /* Block 28 @ 0x00410D3C */
  // mov edi, dword ptr [esp + 0x34]
  // CMP edi, 0x10030 (set flags)
  // if (not equal) goto 0x410d78
  /* Block 29 @ 0x00410A41 */
  // mov ecx, dword ptr [esp + 0x34]
  // lea eax, [esp + 0x34]
  // push 0
  // push eax
  // push ecx
  // lea ecx, [esi + 0x104]
  // call 0x0040EC30
  call(0x0040EC30);
  /* Block 30 @ 0x004106C7 */
  // mov eax, dword ptr [esp + 0x34]
  // mov ecx, esi
  // push eax
  // call 0x00415B50
  call(0x00415B50);
  /* Block 31 @ 0x00410CCB */
  // mov eax, dword ptr [esi + 0xc4]
  goto 0x411006;
  /* Block 32 @ 0x004109CC */
  // mov ecx, esi
  // call 0x00411300
  call(0x00411300);
  /* Block 33 @ 0x00410BCC */
  // mov ebx, dword ptr [esp + 0x38]
  // TEST ebx, ebx (set flags)
  // if (equal) goto 0x411004
  /* Block 34 @ 0x00410E55 */
  // mov ebp, dword ptr [esp + 0x34]
  // lea eax, [esp + 0x38]
  // push 0
  // push eax
  // mov ecx, dword ptr [ebp]
  // push ecx
  // lea ecx, [esi + 0x104]
  // call 0x0040EC30
  call(0x0040EC30);
  /* Block 35 @ 0x00410CD6 */
  // mov eax, dword ptr [esi + 0x11c]
  // shr eax, 3
  goto 0x411006;
  /* Block 36 @ 0x00410C57 */
  // mov eax, dword ptr [esp + 0x34]
  // push eax
  // call 0x0041B7C0
  call(0x0041B7C0);
  /* Block 37 @ 0x004109D8 */
  // mov eax, dword ptr [esp + 0x34]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x411004
  /* Block 38 @ 0x004106D8 */
  // mov ebp, dword ptr [esp + 0x34]
  // TEST ebp, ebp (set flags)
  // if (equal) goto 0x410779
  /* Block 39 @ 0x00410FDD */
  // mov edx, dword ptr [esp + 0x34]
  // lea ecx, [esp + 0x1c]
  // push 0
  // push ecx
  // push edx
  // lea ecx, [esi + 0x104]
  // call 0x0040EC30
  call(0x0040EC30);
  /* Block 40 @ 0x00410DE1 */
  // mov ecx, dword ptr [esp + 0x34]
  // lea eax, [esp + 0x34]
  // push 0
  // push eax
  // push ecx
  // lea ecx, [esi + 0x104]
  // call 0x0040EC30
  call(0x0040EC30);
  /* Block 41 @ 0x00410AE2 */
  // mov edi, dword ptr [esp + 0x34]
  // xor ebx, ebx
  // CMP edi, ebx (set flags)
  // if (equal) goto 0x411004
  /* Block 42 @ 0x00410CE4 */
  // mov edx, dword ptr [esp + 0x34]
  // lea ecx, [esi + 0x104]
  // push edx
  // call 0x0040F8C0
  call(0x0040F8C0);
  /* Block 43 @ 0x00410866 */
  // mov ecx, esi
  // call 0x00412670
  call(0x00412670);
  /* Block 44 @ 0x00410967 */
  // mov eax, dword ptr [esi + 0x23c]
  // lea ebx, [esi + 0x22c]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x411004
  /* Block 45 @ 0x00410C69 */
  // mov ecx, dword ptr [esp + 0x38]
  // mov edx, dword ptr [esp + 0x34]
  // push ecx
  // push edx
  // call 0x0041B700
  call(0x0041B700);
  /* Block 46 @ 0x00410B74 */
  // mov eax, dword ptr [esi + 0x264]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x411004
  /* Block 47 @ 0x00410878 */
  // mov ecx, esi
  // call 0x00412670
  call(0x00412670);
  /* Block 48 @ 0x004105F1 */
  // CMP eax, 1 (set flags)
  // if (not equal) goto 0x411004
  /* Block 49 @ 0x004103C0 */
  // lea eax, [esi + 0x104]
  goto 0x411006;
  /* Block 50 @ 0x00410543 */
  // mov eax, dword ptr [esp + 0x34]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x411004
  /* Block 51 @ 0x004103AB */
  // mov eax, dword ptr [esp + 0x34]
  // lea ecx, [eax + 4]
  // push ecx
  // push eax
  // mov ecx, esi
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00410350: mov      eax, dword ptr fs:[0]
  0x00410356: push     -1
  0x00410358: push     0x49e7e2
  0x0041035D: push     eax
  0x0041035E: mov      dword ptr fs:[0], esp
  0x00410365: sub      esp, 0x10
  0x00410368: push     ebx
  0x00410369: push     ebp
  0x0041036A: push     esi
  0x0041036B: push     edi
  0x0041036C: mov      edi, dword ptr [esp + 0x30]
  0x00410370: mov      esi, ecx
  0x00410372: cmp      edi, 0x7d0
  0x00410378: jg       0x4106b1
  0x0041037E: je       0x4105cc
  0x004106B1: lea      eax, [edi - 0x7d1]
  0x004106B7: cmp      eax, 0x27
  0x004106BA: ja       0x411004
  0x004105CC: mov      eax, dword ptr [esi + 0x1d8]
  0x004105D2: test     eax, eax
  0x004105D4: jne      0x411004
  0x00410384: lea      eax, [edi - 0x3e8]
  0x0041038A: cmp      eax, 0xe
  0x0041038D: ja       0x411004
  0x004106C0: jmp      dword ptr [eax*4 + 0x411058]
  0x00411004: xor      eax, eax
  0x00411006: mov      ecx, dword ptr [esp + 0x20]
  0x0041100A: pop      edi
  0x0041100B: pop      esi
  0x0041100C: pop      ebp
  0x0041100D: pop      ebx
  0x0041100E: mov      dword ptr fs:[0], ecx
  0x00411015: add      esp, 0x1c
  0x00411018: ret      0xc
  0x004105DA: mov      ebx, dword ptr [esp + 0x34]
  0x004105DE: lea      edx, [esp + 0x34]
  0x004105E2: push     0
  0x004105E4: push     edx
  0x004105E5: push     ebx
  0x004105E6: lea      ecx, [esi + 0x104]
  0x004105EC: call     0x40ec30
  0x00410393: jmp      dword ptr [eax*4 + 0x41101c]
  0x00410C80: mov      eax, dword ptr [esp + 0x34]
  0x00410C84: push     eax
  0x00410C85: call     0x41b6a0
  0x00410A04: push     0
  0x00410A06: mov      ecx, esi
  0x00410A08: call     0x415c00
  0x00410A12: mov      ecx, dword ptr [esp + 0x34]
  0x00410A16: test     ecx, ecx
  0x00410A18: je       0x411004
  0x00410C92: mov      ecx, dword ptr [esp + 0x34]
  0x00410C96: push     0
  0x00410C98: push     ecx
  0x00410C99: mov      ecx, esi
  0x00410C9B: call     0x413290
  0x00410F93: mov      eax, dword ptr [esp + 0x34]
  0x00410F97: lea      edx, [esp + 0x34]
  0x00410F9B: push     0
  0x00410F9D: push     edx
  0x00410F9E: push     eax
  0x00410F9F: lea      ecx, [esi + 0x104]
  0x00410FA5: call     0x40ec30
  0x00410A97: mov      ecx, esi
  0x00410A99: call     0x412670
  0x00410918: mov      eax, dword ptr [esi + 0x23c]
  0x0041091E: mov      ebx, dword ptr [esp + 0x34]
  0x00410922: lea      edi, [esi + 0x22c]
  0x00410928: test     eax, eax
  0x0041092A: je       0x41094a
  0x00410899: mov      eax, dword ptr [esp + 0x34]
  0x0041089D: mov      ecx, esi
  0x0041089F: push     eax
  0x004108A0: call     0x41b250
  0x00410D18: mov      ecx, dword ptr [esp + 0x34]
  0x00410D1C: push     ecx
  0x00410D1D: call     0x420a60
  0x00410AA3: mov      eax, dword ptr [esi + 0x264]
  0x00410AA9: mov      edi, dword ptr [esp + 0x34]
  0x00410AAD: add      esi, 0x254
  0x00410AB3: test     eax, eax
  0x00410AB5: je       0x410ad5
  0x004107A4: mov      eax, dword ptr [esi + 0xd0]
  0x004107AA: jmp      0x411006
  0x004108AA: mov      ecx, dword ptr [esp + 0x34]
  0x004108AE: push     ecx
  0x004108AF: mov      ecx, esi
  0x004108B1: call     0x41b300
  0x00410C2B: mov      eax, dword ptr [esp + 0x38]
  0x00410C2F: test     eax, eax
  0x00410C31: jne      0x410c45
  0x00410D2A: mov      edx, dword ptr [esp + 0x34]
  0x00410D2E: push     edx
  0x00410D2F: call     0x430a20
  0x004107AF: mov      eax, dword ptr [esi + 0xd4]
  0x004107B5: jmp      0x411006
  0x00410BB5: mov      eax, dword ptr [esp + 0x34]
  0x00410BB9: push     0
  0x00410BBB: push     0
  0x00410BBD: push     0
  0x00410BBF: push     eax
  0x00410BC0: mov      ecx, esi
  0x00410BC2: call     0x412f90
  0x004107BA: mov      ebx, dword ptr [esp + 0x34]
  0x004107BE: test     ebx, ebx
  0x004107C0: je       0x410910
  0x004108BB: mov      eax, dword ptr [esi + 0x23c]
  0x004108C1: test     eax, eax
  0x004108C3: je       0x410910
  0x00410D3C: mov      edi, dword ptr [esp + 0x34]
  0x00410D40: cmp      edi, 0x10030
  0x00410D46: jne      0x410d78
  0x00410A41: mov      ecx, dword ptr [esp + 0x34]
  0x00410A45: lea      eax, [esp + 0x34]
  0x00410A49: push     0
  0x00410A4B: push     eax
  0x00410A4C: push     ecx
  0x00410A4D: lea      ecx, [esi + 0x104]
  0x00410A53: call     0x40ec30
  0x004106C7: mov      eax, dword ptr [esp + 0x34]
  0x004106CB: mov      ecx, esi
  0x004106CD: push     eax
  0x004106CE: call     0x415b50
  0x00410CCB: mov      eax, dword ptr [esi + 0xc4]
  0x00410CD1: jmp      0x411006
  0x004109CC: mov      ecx, esi
  0x004109CE: call     0x411300
  0x00410BCC: mov      ebx, dword ptr [esp + 0x38]
  0x00410BD0: test     ebx, ebx
  0x00410BD2: je       0x411004
  0x00410E55: mov      ebp, dword ptr [esp + 0x34]
  0x00410E59: lea      eax, [esp + 0x38]
  0x00410E5D: push     0
  0x00410E5F: push     eax
  0x00410E60: mov      ecx, dword ptr [ebp]
  0x00410E63: push     ecx
  0x00410E64: lea      ecx, [esi + 0x104]
  0x00410E6A: call     0x40ec30
  0x00410CD6: mov      eax, dword ptr [esi + 0x11c]
  0x00410CDC: shr      eax, 3
  0x00410CDF: jmp      0x411006
  0x00410C57: mov      eax, dword ptr [esp + 0x34]
  0x00410C5B: push     eax
  0x00410C5C: call     0x41b7c0
  0x004109D8: mov      eax, dword ptr [esp + 0x34]
  0x004109DC: test     eax, eax
  0x004109DE: je       0x411004
  0x004106D8: mov      ebp, dword ptr [esp + 0x34]
  0x004106DC: test     ebp, ebp
  0x004106DE: je       0x410779
  0x00410FDD: mov      edx, dword ptr [esp + 0x34]
  0x00410FE1: lea      ecx, [esp + 0x1c]
  0x00410FE5: push     0
  0x00410FE7: push     ecx
  0x00410FE8: push     edx
  0x00410FE9: lea      ecx, [esi + 0x104]
  0x00410FEF: call     0x40ec30
  0x00410DE1: mov      ecx, dword ptr [esp + 0x34]
  0x00410DE5: lea      eax, [esp + 0x34]
  0x00410DE9: push     0
  0x00410DEB: push     eax
  0x00410DEC: push     ecx
  0x00410DED: lea      ecx, [esi + 0x104]
  0x00410DF3: call     0x40ec30
  0x00410AE2: mov      edi, dword ptr [esp + 0x34]
  0x00410AE6: xor      ebx, ebx
  0x00410AE8: cmp      edi, ebx
  0x00410AEA: je       0x411004
  0x00410CE4: mov      edx, dword ptr [esp + 0x34]
  0x00410CE8: lea      ecx, [esi + 0x104]
  0x00410CEE: push     edx
  0x00410CEF: call     0x40f8c0
  0x00410866: mov      ecx, esi
  0x00410868: call     0x412670
  0x00410967: mov      eax, dword ptr [esi + 0x23c]
  0x0041096D: lea      ebx, [esi + 0x22c]
  0x00410973: test     eax, eax
  0x00410975: je       0x411004
  0x00410C69: mov      ecx, dword ptr [esp + 0x38]
  0x00410C6D: mov      edx, dword ptr [esp + 0x34]
  0x00410C71: push     ecx
  0x00410C72: push     edx
  0x00410C73: call     0x41b700
  0x00410B74: mov      eax, dword ptr [esi + 0x264]
  0x00410B7A: test     eax, eax
  0x00410B7C: je       0x411004
  0x00410878: mov      ecx, esi
  0x0041087A: call     0x412670
  0x004105F1: cmp      eax, 1
  0x004105F4: jne      0x411004
  0x004103C0: lea      eax, [esi + 0x104]
  0x004103C6: jmp      0x411006
  0x00410543: mov      eax, dword ptr [esp + 0x34]
  0x00410547: test     eax, eax
  0x00410549: je       0x411004
  0x004103AB: mov      eax, dword ptr [esp + 0x34]
  0x004103AF: lea      ecx, [eax + 4]
  0x004103B2: push     ecx
  0x004103B3: push     eax
  0x004103B4: mov      ecx, esi
  0x004103B6: call     0x4138e0
  0x00410F8C: mov      eax, 1
  0x00410F91: jmp      0x411006
  0x004103CB: mov      edx, dword ptr [esp + 0x34]
  0x004103CF: push     0
  0x004103D1: push     edx
  0x004103D2: mov      ecx, esi
  0x004103D4: call     0x413290
  0x0041052D: mov      ecx, dword ptr [esp + 0x34]
  0x00410531: test     ecx, ecx
  0x00410533: je       0x411004
  0x004104D1: mov      edi, dword ptr [esp + 0x34]
  0x004104D5: xor      esi, esi
  0x004104D7: cmp      edi, esi
  0x004104D9: je       0x411004
  0x004103F2: mov      eax, 0x70005
  0x004103F7: jmp      0x411006
  0x00410515: mov      ecx, dword ptr [esp + 0x34]
  0x00410519: test     ecx, ecx
  0x0041051B: je       0x411004
  0x00410557: mov      esi, dword ptr [esp + 0x34]
  0x0041055B: test     esi, esi
  0x0041055D: je       0x411004
  0x00410598: mov      eax, dword ptr [esp + 0x34]
  0x0041059C: test     eax, eax
  0x0041059E: je       0x411004
  0x0041039A: mov      eax, dword ptr [esp + 0x34]
  0x0041039E: mov      ecx, esi
  0x004103A0: push     eax
  0x004103A1: call     0x4102a0
  0x004105BB: mov      ecx, dword ptr [esp + 0x34]
  0x004105BF: push     ecx
  0x004105C0: mov      ecx, esi
  0x004105C2: call     0x412490
  0x004103FC: mov      eax, dword ptr [esp + 0x34]
  0x00410400: dec      eax
  0x00410401: je       0x41048c
  0x004103DE: mov      eax, dword ptr [esp + 0x38]
  0x004103E2: mov      ecx, dword ptr [esp + 0x34]
  0x004103E6: push     eax
  0x004103E7: push     ecx
  0x004103E8: call     0x422f50
  0x00410A0D: jmp      0x411004
  0x00410A1E: mov      eax, dword ptr [esi + 0x1e4]
  0x00410A24: test     eax, eax
  0x00410A26: je       0x411004
  0x00410CA0: test     eax, eax
  0x00410CA2: je       0x411004
  0x00410FAA: test     eax, eax
  0x00410FAC: je       0x411004
  0x00410A9E: jmp      0x411004
  0x0041094A: push     ebx
  0x0041094B: mov      ecx, edi
  0x0041094D: call     0x4065a0
  0x0041092C: mov      ecx, dword ptr [edi + 8]
  0x0041092F: test     ecx, ecx
  0x00410931: je       0x41094a
  0x004108A5: jmp      0x411006
  0x00410D22: add      esp, 4
  0x00410D25: jmp      0x411006
  0x00410AD5: push     edi
  0x00410AD6: mov      ecx, esi
  0x00410AD8: call     0x4065a0
  0x00410AB7: mov      ecx, dword ptr [esi + 8]
  0x00410ABA: test     ecx, ecx
  0x00410ABC: je       0x410ad5
  0x00411006: mov      ecx, dword ptr [esp + 0x20]
  0x0041100A: pop      edi
  0x0041100B: pop      esi
  0x0041100C: pop      ebp
  0x0041100D: pop      ebx
  0x0041100E: mov      dword ptr fs:[0], ecx
  0x00411015: add      esp, 0x1c
  0x00411018: ret      0xc
  0x004108B6: jmp      0x411006
  0x00410C33: mov      ecx, dword ptr [esp + 0x34]
  0x00410C37: push     ecx
  0x00410C38: call     0x41b6c0
  0x00410C45: mov      edx, dword ptr [esp + 0x34]
  0x00410C49: push     edx
  0x00410C4A: call     0x41b610
  0x00410D34: add      esp, 4
  0x00410D37: jmp      0x411004
  0x00410910: or       eax, 0xffffffff
  0x00410913: jmp      0x411006
  0x004107C6: mov      ecx, dword ptr [ebx]
  0x004107C8: lea      eax, [esp + 0x34]
  0x004107CC: push     0
  0x004107CE: push     eax
  0x004107CF: push     ecx
  0x004107D0: lea      ecx, [esi + 0x104]
  0x004107D6: call     0x40ec30
  0x004108C5: mov      ecx, dword ptr [esi + 0x234]
  0x004108CB: test     ecx, ecx
  0x004108CD: je       0x410910
  0x00410D48: mov      edi, dword ptr [esp + 0x38]
  0x00410D4C: mov      eax, dword ptr [0x2f9a8e0]
  0x00410D51: mov      ecx, dword ptr [0x2f9a8e4]
  0x00410D57: mov      edx, dword ptr [0x2f9a8e8]
  0x00410D5D: mov      esi, dword ptr [0x2f9a8ec]
  0x00410D63: mov      dword ptr [edi], eax
  0x00410D65: mov      eax, 1
  0x00410D6A: mov      dword ptr [edi + 4], ecx
  0x00410D6D: mov      dword ptr [edi + 8], edx
  0x00410D70: mov      dword ptr [edi + 0xc], esi
  0x00410D73: jmp      0x411006
  0x00410D78: mov      ebx, edi
  0x00410D7A: shr      ebx, 0x10
  0x00410D7D: test     bx, bx
  0x00410D80: je       0x411004
  0x00410A58: cmp      eax, 1
  0x00410A5B: jne      0x411004
  0x004106D3: jmp      0x411006
  0x004109D3: jmp      0x411004
  0x00410BD8: mov      eax, dword ptr [esp + 0x34]
  0x00410BDC: and      eax, 0xdfffffff
  0x00410BE1: cmp      eax, 0x80000004
  0x00410BE6: je       0x410bef
  0x00410E6F: test     eax, eax
  0x00410E71: je       0x411004
  0x00410C61: add      esp, 4
  0x00410C64: jmp      0x411004
  0x004109E4: mov      ecx, dword ptr [eax + 8]
  0x004109E7: mov      edx, dword ptr [eax + 4]
  0x004109EA: mov      eax, dword ptr [eax]
  0x004109EC: push     ecx
  0x004109ED: push     edx
  0x004109EE: push     eax
  0x004109EF: mov      ecx, esi
  0x004109F1: call     0x411400
  0x00410779: mov      ebx, dword ptr [esp + 0x38]
  0x0041077D: jmp      0x410783
  0x004106E4: lea      ecx, [esp + 0x34]
  0x004106E8: push     0
  0x004106EA: push     ecx
  0x004106EB: push     ebp
  0x004106EC: lea      ecx, [esi + 0x104]
  0x004106F2: call     0x40ec30
  0x00410FF4: test     eax, eax
  0x00410FF6: je       0x411004
  0x00410DF8: test     eax, eax
  0x00410DFA: je       0x411004
  0x00410AF0: mov      eax, dword ptr [esi + 0x264]
  0x00410AF6: add      esi, 0x254
  0x00410AFC: cmp      eax, ebx
  0x00410AFE: je       0x411004
  0x00410CF4: mov      esi, eax
  0x00410CF6: test     esi, esi
  0x00410CF8: je       0x411004
  0x0041086D: inc      dword ptr [esi + 0x1d4]
  0x00410873: jmp      0x411004
  0x0041097B: mov      ecx, dword ptr [ebx + 8]
  0x0041097E: test     ecx, ecx
  0x00410980: je       0x411004
  0x00410C78: add      esp, 8
  0x00410C7B: jmp      0x411006
  0x00410B82: mov      esi, dword ptr [esi + 0x25c]
  0x00410B88: test     esi, esi
  0x00410B8A: je       0x411004
  0x0041087F: mov      eax, dword ptr [esi + 0x1d4]
  0x00410885: test     eax, eax
  0x00410887: jle      0x411004
  0x004105FA: mov      edi, dword ptr [esp + 0x38]
  0x004105FE: test     edi, edi
  0x00410600: je       0x410679
  0x0041054F: mov      eax, dword ptr [eax + 0x1c]
  0x00410552: jmp      0x411006
  0x004103BB: jmp      0x411004
  0x004103D9: jmp      0x411006
  0x00410539: call     0x494c30
  0x004104DF: push     0x3c
  0x004104E1: call     0x492f17
  0x00410521: mov      eax, dword ptr [ecx]
  0x00410523: push     1
  0x00410525: call     dword ptr [eax + 4]
  0x00410563: push     esi
  0x00410564: call     0x494bd9
  0x004105A4: mov      ecx, dword ptr [eax + 8]
  0x004105A7: mov      edx, dword ptr [eax + 4]
  0x004105AA: mov      eax, dword ptr [eax]
  0x004105AC: push     ecx
  0x004105AD: push     edx
  0x004105AE: push     eax
  0x004105AF: mov      ecx, esi
  0x004105B1: call     0x412410
  0x004103A6: jmp      0x411006
  0x004105C7: jmp      0x411004
  0x0041048C: add      esi, 0xd0
  0x00410492: push     0x2faaca8
  0x00410497: lea      eax, [esp + 0x18]
  0x0041049B: push     esi
  0x0041049C: push     eax
  0x0041049D: call     0x49341f
  0x00410407: sub      eax, 0x7d0
  0x0041040C: je       0x410447
  0x004103ED: jmp      0x411006
  0x00410A2C: mov      dword ptr [ecx], eax
  0x00410A2E: mov      edx, dword ptr [esi + 0x1e8]
  0x00410A34: mov      dword ptr [ecx + 4], edx
  0x00410A37: mov      eax, 1
  0x00410A3C: jmp      0x411006
  0x00410CA8: mov      eax, dword ptr [eax + 0x14]
  0x00410CAB: test     al, 4
  0x00410CAD: je       0x410cb9
  0x00410FAE: mov      ecx, dword ptr [esp + 0x38]
  0x00410FB2: mov      edx, dword ptr [esp + 0x34]
  0x00410FB6: push     0
  0x00410FB8: push     0
  0x00410FBA: push     ecx
  0x00410FBB: lea      ecx, [edx + 0x14]
  0x00410FBE: call     0x40e7b0
  0x00410952: mov      edx, dword ptr [esp + 0x38]
  0x00410956: lea      ecx, [esi + 0x240]
  0x0041095C: push     edx
  0x0041095D: call     0x406570
  0x00410933: shr      eax, 2
  0x00410936: push     ebx
  0x00410937: push     eax
  0x00410938: push     ecx
  0x00410939: call     0x406d80
  0x00410ADD: jmp      0x411004
  0x00410ABE: shr      eax, 2
  0x00410AC1: push     edi
  0x00410AC2: push     eax
  0x00410AC3: push     ecx
  0x00410AC4: call     0x406d80
  0x00410C3D: add      esp, 4
  0x00410C40: jmp      0x411006
  0x00410C4F: add      esp, 4
  0x00410C52: jmp      0x411006
  0x004107DB: test     eax, eax
  0x004107DD: je       0x410910
  0x004108CF: mov      edx, dword ptr [esp + 0x34]
  0x004108D3: shr      eax, 2
  0x004108D6: push     edx
  0x004108D7: push     eax
  0x004108D8: push     ecx
  0x004108D9: call     0x406d80
  0x00410D86: push     edi
  0x00410D87: call     0x41b960
  0x00410A61: mov      eax, dword ptr [esp + 0x38]
  0x00410A65: push     0
  0x00410A67: test     eax, eax
  0x00410A69: push     0
  0x00410A6B: jne      0x410a7b
  0x00410BEF: mov      ecx, dword ptr [ebx]
  0x00410BF1: lea      esi, [ebx + 4]
  0x00410BF4: test     ecx, ecx
  0x00410BF6: mov      eax, 1
  0x00410BFB: jle      0x410c06
  0x00410BE8: cmp      eax, 0x80000005
  0x00410BED: jne      0x410c1d
  0x00410E77: mov      eax, dword ptr [esp + 0x38]
  0x00410E7B: mov      ebx, dword ptr [ebp + 4]
  0x00410E7E: lea      edx, [esp + 0x30]
  0x00410E82: sub      ebx, 0x4e20
  0x00410E88: push     edx
  0x00410E89: lea      ecx, [eax + 0x14]
  0x00410E8C: call     0x40f200
  0x004109F6: cmp      eax, 1
  0x004109F9: jne      0x411004
  0x00410783: cmp      edi, 0x7d7
  0x00410789: jne      0x411004
  0x004106F7: test     eax, eax
  0x004106F9: je       0x410779
  0x00410FF8: mov      eax, dword ptr [esp + 0x1c]
  0x00410FFC: push     eax
  0x00410FFD: mov      ecx, esi
  0x00410FFF: call     0x414d20
  0x00410E00: mov      edx, dword ptr [esp + 0x34]
  0x00410E04: push     0
  0x00410E06: push     0
  0x00410E08: lea      ecx, [edx + 0x14]
  0x00410E0B: call     0x40e730
  0x00410B04: mov      ecx, dword ptr [esi + 8]
  0x00410B07: cmp      ecx, ebx
  0x00410B09: je       0x411004
  0x00410CFE: mov      eax, dword ptr [esi + 0x1c]
  0x00410D01: push     eax
  0x00410D02: call     dword ptr [0x4a2558]
  0x00410986: mov      edx, dword ptr [esp + 0x34]
  0x0041098A: shr      eax, 2
  0x0041098D: push     edx
  0x0041098E: push     eax
  0x0041098F: push     ecx
  0x00410990: call     0x406d80
  0x00410B90: mov      edx, dword ptr [esp + 0x34]
  0x00410B94: shr      eax, 2
  0x00410B97: push     edx
  0x00410B98: push     eax
  0x00410B99: push     esi
  0x00410B9A: call     0x406d80
  0x0041088D: dec      eax
  0x0041088E: mov      dword ptr [esi + 0x1d4], eax
  0x00410894: jmp      0x411004
  0x00410679: mov      eax, dword ptr [esp + 0x34]
  0x0041067D: lea      edx, [eax + 0x34]
  0x00410680: lea      ecx, [eax + 0x14]
  0x00410683: push     edx
  0x00410684: call     0x40e700
  0x00410602: mov      eax, dword ptr [esp + 0x34]
  0x00410606: push     0
  0x00410608: lea      ecx, [eax + 0x14]
  0x0041060B: call     0x40e780
  0x0041053E: jmp      0x411006
  0x004104E6: add      esp, 4
  0x004104E9: mov      dword ptr [esp + 0x34], eax
  0x004104ED: cmp      eax, esi
  0x004104EF: mov      dword ptr [esp + 0x28], esi
  0x004104F3: je       0x4104fe
  0x00410528: jmp      0x411004
  0x00410569: test     eax, eax
  0x0041056B: jne      0x411004
  0x004105B6: jmp      0x411004
  0x004104A2: mov      edi, dword ptr [eax]
  0x004104A4: or       ecx, 0xffffffff
  0x004104A7: xor      eax, eax
  0x004104A9: repne scasb al, byte ptr es:[edi]
  0x00410447: add      esi, 0xd0
  0x0041044D: push     0x2faaca8
  0x00410452: lea      ecx, [esp + 0x14]
  0x00410456: push     esi
  0x00410457: push     ecx
  0x00410458: call     0x49341f
  0x0041040E: dec      eax
  0x0041040F: je       0x41041d
  0x00410CB9: test     al, 0x40
  0x00410CBB: je       0x411004
  0x00410CAF: mov      eax, 2
  0x00410CB4: jmp      0x411006
  0x00410FC3: test     eax, eax
  0x00410FC5: je       0x411004
  0x00410962: jmp      0x411004
  0x0041093E: add      esp, 0xc
  0x00410941: cmp      eax, -1
  0x00410944: jne      0x411004
  0x00410AC9: add      esp, 0xc
  0x00410ACC: cmp      eax, -1
  0x00410ACF: jne      0x411004
  0x004107E3: mov      eax, dword ptr [ebx + 4]
  0x004107E6: test     eax, eax
  0x004107E8: je       0x4107ed
  0x004108DE: add      esp, 0xc
  0x004108E1: cmp      eax, -1
  0x004108E4: je       0x410910
  0x00410D8C: add      esp, 4
  0x00410D8F: cmp      eax, 3
  0x00410D92: jne      0x411004
  0x00410A6D: mov      edx, dword ptr [esp + 0x3c]
  0x00410A71: lea      ecx, [edx + 0x14]
  0x00410A74: call     0x40e730
  0x00410A7B: push     eax
  0x00410A7C: mov      eax, dword ptr [esp + 0x40]
  0x00410A80: lea      ecx, [eax + 0x14]
  0x00410A83: call     0x40e7b0
  0x00410C06: test     eax, eax
  0x00410C08: jle      0x410c1d
  0x00410BFD: imul     eax, dword ptr [esi]
  0x00410C00: add      esi, 4
  0x00410C03: dec      ecx
  0x00410C04: jne      0x410bfd
  0x00410C1D: push     ebx
  0x00410C1E: call     0x41b7c0
  0x00410E91: test     ebx, ebx
  0x00410E93: jl       0x411004
  0x004109FF: jmp      0x411006
  0x0041078F: push     ebx
  0x00410790: push     ebp
  0x00410791: push     0
  0x00410793: push     0x2faad6c
  0x00410798: mov      ecx, esi
  0x0041079A: call     0x412f90
  0x004106FB: mov      ebx, dword ptr [esp + 0x38]
  0x004106FF: push     0
  0x00410701: test     ebx, ebx
  0x00410703: push     0
  0x00410705: jne      0x410727
  0x00410E10: mov      edi, eax
  0x00410E12: add      edi, 0x18
  0x00410E15: push     edi
  0x00410E16: call     0x406cf0
  0x00410B0F: shr      eax, 2
  0x00410B12: push     edi
  0x00410B13: push     eax
  0x00410B14: push     ecx
  0x00410B15: call     0x406d80
  0x00410D08: test     eax, eax
  0x00410D0A: je       0x411004
  0x00410995: mov      edi, eax
  0x00410997: add      esp, 0xc
  0x0041099A: cmp      edi, -1
  0x0041099D: je       0x411004
  0x00410B9F: add      esp, 0xc
  0x00410BA2: cmp      eax, -1
  0x00410BA5: je       0x411004
  0x00410689: mov      eax, dword ptr [esp + 0x34]
  0x0041068D: mov      edx, dword ptr [eax + 0x34]
  0x00410690: lea      ecx, [eax + 0x34]
  0x00410693: call     dword ptr [edx + 8]
  0x00410610: cmp      edi, eax
  0x00410612: je       0x410679
  0x004104FE: push     edi
  0x004104FF: mov      ecx, esi
  0x00410501: mov      dword ptr [esp + 0x2c], 0xffffffff
  0x00410509: call     0x494bf7
  0x004104F5: mov      ecx, eax
  0x004104F7: call     0x494787
  0x00410571: mov      ecx, dword ptr [esp + 0x38]
  0x00410575: test     ecx, ecx
  0x00410577: je       0x411004
  0x004104AB: not      ecx
  0x004104AD: sub      edi, ecx
  0x004104AF: mov      edx, ecx
  0x004104B1: mov      esi, edi
  0x004104B3: mov      edi, dword ptr [esp + 0x38]
  0x004104B7: shr      ecx, 2
  0x004104BA: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004104A9: repne scasb al, byte ptr es:[edi]
  0x0041045D: mov      edi, dword ptr [eax]
  0x0041045F: or       ecx, 0xffffffff
  0x00410462: xor      eax, eax
  0x00410464: repne scasb al, byte ptr es:[edi]
  0x0041041D: mov      edi, dword ptr [esi + 0xd4]
  0x00410423: or       ecx, 0xffffffff
  0x00410426: xor      eax, eax
  0x00410428: repne scasb al, byte ptr es:[edi]
  0x00410411: mov      edx, dword ptr [esp + 0x38]
  0x00410415: mov      byte ptr [edx], 0
  0x00410418: jmp      0x411004
  0x00410CC1: mov      eax, 1
  0x00410CC6: jmp      0x411006
  0x00410FC7: push     0x7fffffff
  0x00410FCC: push     1
  0x00410FCE: push     eax
  0x00410FCF: mov      eax, dword ptr [esp + 0x40]
  0x00410FD3: lea      ecx, [eax + 0x14]
  0x00410FD6: call     0x40eeb0
  0x004107ED: mov      edx, dword ptr [ebx + 8]
  0x004107F0: push     eax
  0x004107F1: mov      eax, dword ptr [esp + 0x38]
  0x004107F5: push     edx
  0x004107F6: push     0
  0x004107F8: push     0
  0x004107FA: push     eax
  0x004107FB: call     0x4115c0
  0x004107EA: mov      eax, dword ptr [eax + 0x1c]
  0x004107ED: mov      edx, dword ptr [ebx + 8]
  0x004107F0: push     eax
  0x004107F1: mov      eax, dword ptr [esp + 0x38]
  0x004107F5: push     edx
  0x004107F6: push     0
  0x004107F8: push     0
  0x004107FA: push     eax
  0x004107FB: call     0x4115c0
  0x004108E6: mov      ecx, dword ptr [esi + 0x250]
  0x004108EC: test     ecx, ecx
  0x004108EE: jne      0x4108fe
  0x00410D98: mov      eax, dword ptr [esi + 0x130]
  0x00410D9E: and      ebx, 0xffff
  0x00410DA4: dec      ebx
  0x00410DA5: shr      eax, 2
  0x00410DA8: cmp      ebx, eax
  0x00410DAA: jge      0x411004
  0x00410A79: jmp      0x410a88
  0x00410A88: test     eax, eax
  0x00410A8A: je       0x411004
  0x00410C0A: mov      edi, eax
  0x00410C0C: mov      eax, dword ptr [esi]
  0x00410C0E: add      esi, 4
  0x00410C11: push     eax
  0x00410C12: call     0x41b7c0
  0x00410C23: add      esp, 4
  0x00410C26: jmp      0x411004
  0x00410E99: cmp      ebx, eax
  0x00410E9B: jge      0x411004
  0x00410707: mov      edx, dword ptr [esp + 0x3c]
  0x0041070B: lea      ecx, [edx + 0x14]
  0x0041070E: call     0x40e730
  0x00410727: mov      ecx, dword ptr [esp + 0x3c]
  0x0041072B: push     ebx
  0x0041072C: add      ecx, 0x14
  0x0041072F: call     0x40e7b0
  0x00410E1B: add      edi, eax
  0x00410E1D: push     edi
  0x00410E1E: call     0x406cf0
  0x00410B1A: add      esp, 0xc
  0x00410B1D: cmp      eax, -1
  0x00410B20: je       0x411004
  0x00410D10: mov      eax, dword ptr [esi + 0x1c]
  0x00410D13: jmp      0x411006
  0x004109A3: lea      eax, [edi*4]
  0x004109AA: push     4
  0x004109AC: push     eax
  0x004109AD: mov      ecx, ebx
  0x004109AF: call     0x406b50
  0x00410BAB: mov      eax, 1
  0x00410BB0: jmp      0x411006
  0x00410696: cmp      dword ptr [esi + 0x1e0], ebx
  0x0041069C: jne      0x411004
  0x00410614: mov      ecx, dword ptr [esp + 0x34]
  0x00410618: push     0
  0x0041061A: push     0
  0x0041061C: push     edi
  0x0041061D: add      ecx, 0x14
  0x00410620: call     0x40e7b0
  0x0041050E: mov      eax, esi
  0x00410510: jmp      0x411006
  0x004104FC: mov      esi, eax
  0x004104FE: push     edi
  0x004104FF: mov      ecx, esi
  0x00410501: mov      dword ptr [esp + 0x2c], 0xffffffff
  0x00410509: call     0x494bf7
  0x0041057D: mov      eax, dword ptr [ecx + 0x1c]
  0x00410580: test     eax, eax
  0x00410582: jne      0x411004
  0x004104BC: mov      ecx, edx
  0x004104BE: and      ecx, 3
  0x004104C1: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004104BA: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00410466: not      ecx
  0x00410468: sub      edi, ecx
  0x0041046A: mov      edx, ecx
  0x0041046C: mov      esi, edi
  0x0041046E: mov      edi, dword ptr [esp + 0x38]
  0x00410472: shr      ecx, 2
  0x00410475: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00410464: repne scasb al, byte ptr es:[edi]
  0x0041042A: not      ecx
  0x0041042C: sub      edi, ecx
  0x0041042E: mov      eax, ecx
  0x00410430: mov      esi, edi
  0x00410432: mov      edi, dword ptr [esp + 0x38]
  0x00410436: shr      ecx, 2
  0x00410439: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00410428: repne scasb al, byte ptr es:[edi]
  0x00410FDB: jmp      0x411004
  0x00410800: test     eax, eax
  0x00410802: je       0x410910
  0x004108F0: xor      esi, esi
  0x004108F2: xor      ecx, ecx
  0x004108F4: mov      cl, byte ptr [esi + eax]
  0x004108F7: mov      eax, ecx
  0x004108F9: jmp      0x411006
  0x004108FE: mov      esi, dword ptr [esi + 0x248]
  0x00410904: xor      ecx, ecx
  0x00410906: mov      cl, byte ptr [esi + eax]
  0x00410909: mov      eax, ecx
  0x0041090B: jmp      0x411006
  0x00410DB0: mov      ecx, dword ptr [esi + 0x128]
  0x00410DB6: and      edi, 0xffff
  0x00410DBC: dec      edi
  0x00410DBD: mov      eax, dword ptr [ecx + ebx*4]
  0x00410DC0: test     eax, eax
  0x00410DC2: je       0x411004
  0x00410A90: mov      eax, dword ptr [eax]
  0x00410A92: jmp      0x411006
  0x00410C17: add      esp, 4
  0x00410C1A: dec      edi
  0x00410C1B: jne      0x410c0c
  0x00410EA1: mov      esi, dword ptr [esp + 0x30]
  0x00410EA5: mov      ecx, dword ptr [esp + 0x38]
  0x00410EA9: add      ebx, esi
  0x00410EAB: push     0
  0x00410EAD: push     ebx
  0x00410EAE: add      ecx, 0x14
  0x00410EB1: call     0x40e730
  0x00410713: mov      edi, eax
  0x00410715: mov      eax, dword ptr [esp + 0x34]
  0x00410719: push     0
  0x0041071B: lea      ecx, [eax + 0x14]
  0x0041071E: call     0x40e780
  0x00410734: mov      edi, eax
  0x00410736: test     edi, edi
  0x00410738: je       0x41077f
  0x00410E23: lea      edi, [edi + eax + 0x1c]
  0x00410E27: mov      eax, dword ptr [edi]
  0x00410E29: mov      ecx, dword ptr [edi + eax*4 + 4]
  0x00410E2D: lea      eax, [edi + eax*4 + 4]
  0x00410E31: lea      edi, [ecx + eax + 4]
  0x00410E35: push     edi
  0x00410E36: call     0x406cf0
  0x00410B26: lea      ecx, [eax*4]
  0x00410B2D: push     4
  0x00410B2F: push     ecx
  0x00410B30: mov      ecx, esi
  0x00410B32: call     0x406b50
  0x004109B4: push     1
  0x004109B6: push     edi
  0x004109B7: lea      ecx, [esi + 0x240]
  0x004109BD: call     0x406b50
  0x004106A2: mov      dword ptr [esi + 0x1e0], 0
  0x004106AC: jmp      0x411004
  0x00410625: test     eax, eax
  0x00410627: je       0x411004
  0x00410588: push     esi
  0x00410589: call     0x494bf7
  0x004104C3: lea      ecx, [esp + 0x14]
  0x004104C7: call     0x4931d6
  0x004104C1: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00410477: mov      ecx, edx
  0x00410479: and      ecx, 3
  0x0041047C: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00410475: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0041043B: mov      ecx, eax
  0x0041043D: and      ecx, 3
  0x00410440: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00410439: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00410808: mov      ecx, dword ptr [esp + 0x34]
  0x0041080C: push     0
  0x0041080E: push     0
  0x00410810: add      ecx, 0x14
  0x00410813: call     0x40e730
  0x00410DC8: cmp      edi, dword ptr [eax + 0x54]
  0x00410DCB: jge      0x411004
  0x00410C0C: mov      eax, dword ptr [esi]
  0x00410C0E: add      esi, 4
  0x00410C11: push     eax
  0x00410C12: call     0x41b7c0
  0x00410EB6: mov      esi, eax
  0x00410EB8: add      esi, 0x18
  0x00410EBB: push     esi
  0x00410EBC: call     0x406cf0
  0x00410723: mov      ebx, eax
  0x00410725: jmp      0x410736
  0x0041077F: mov      edi, dword ptr [esp + 0x30]
  0x00410783: cmp      edi, 0x7d7
  0x00410789: jne      0x411004
  0x0041073A: push     ebx
  0x0041073B: call     0x40ede0
  0x00410E3B: mov      ecx, dword ptr [eax + edi + 4]
  0x00410E3F: lea      eax, [eax + edi + 4]
  0x00410E43: add      esp, 0xc
  0x00410E46: or       ecx, 8
  0x00410E49: mov      dword ptr [eax], ecx
  0x00410E4B: mov      edx, dword ptr [esp + 0x34]
  0x00410E4F: push     edx
  0x00410E50: jmp      0x410ffd
  0x00410B37: mov      eax, dword ptr [edi + 0xc]
  0x00410B3A: mov      dword ptr [edi], ebx
  0x00410B3C: cmp      eax, ebx
  0x00410B3E: mov      dword ptr [edi + 4], ebx
  0x00410B41: mov      dword ptr [edi + 8], ebx
  0x00410B44: mov      dword ptr [edi + 0x14], ebx
  0x00410B47: je       0x410b53
  0x004109C2: mov      eax, 1
  0x004109C7: jmp      0x411006
  0x0041062D: lea      edi, [eax + 0x18]
  0x00410630: mov      esi, edi
  0x00410632: push     esi
  0x00410633: call     0x406cf0
  0x0041058E: mov      eax, 1
  0x00410593: jmp      0x411006
  0x004104CC: jmp      0x411004
  0x0041047E: lea      ecx, [esp + 0x10]
  0x00410482: call     0x4931d6
  0x0041047C: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00410442: jmp      0x411004
  0x00410440: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00410818: mov      edi, eax
  0x0041081A: add      edi, 0x18
  0x0041081D: push     edi
  0x0041081E: call     0x406cf0
  0x00410DD1: mov      edx, dword ptr [esp + 0x38]
  0x00410DD5: push     edx
  0x00410DD6: push     edi
  0x00410DD7: push     8
  0x00410DD9: call     dword ptr [eax + 0x78]
  0x00410EC1: add      esi, eax
  0x00410EC3: push     esi
  0x00410EC4: call     0x406cf0
  0x00410736: test     edi, edi
  0x00410738: je       0x41077f
  0x00410740: add      esp, 4
  0x00410743: cmp      eax, 1
  0x00410746: je       0x41077f
  0x00410FFD: mov      ecx, esi
  0x00410FFF: call     0x414d20
  0x00410B53: mov      eax, dword ptr [edi + 0x10]
  0x00410B56: cmp      eax, ebx
  0x00410B58: je       0x410b66
  0x00410B49: push     eax
  0x00410B4A: call     dword ptr [0x4a24e0]
  0x00410638: add      esi, eax
  0x0041063A: push     esi
  0x0041063B: call     0x406cf0
  0x00410487: jmp      0x411004
  0x00410823: add      edi, eax
  0x00410825: push     edi
  0x00410826: call     0x406cf0
  0x00410DDC: jmp      0x411006
  0x00410EC9: mov      edi, dword ptr [esi + eax]
  0x00410ECC: add      esi, eax
  0x00410ECE: add      esi, 4
  0x00410ED1: add      esp, 8
  0x00410ED4: lea      ecx, [esp + 0x34]
  0x00410ED8: mov      edx, dword ptr [esi]
  0x00410EDA: add      esi, 4
  0x00410EDD: mov      dword ptr [ebp + 0x10c], edx
  0x00410EE3: mov      eax, dword ptr [esi]
  0x00410EE5: add      esi, 4
  0x00410EE8: not      eax
  0x00410EEA: and      eax, 1
  0x00410EED: push     esi
  0x00410EEE: mov      dword ptr [ebp + 0x110], eax
  0x00410EF4: call     0x493244
  0x00410748: add      edi, 0x18
  0x0041074B: push     edi
  0x0041074C: call     0x406cf0
  0x00410B66: push     edi
  0x00410B67: call     0x492f40
  0x00410B5A: push     eax
  0x00410B5B: call     0x492f40
  0x00410B50: mov      dword ptr [edi + 0xc], ebx
  0x00410B53: mov      eax, dword ptr [edi + 0x10]
  0x00410B56: cmp      eax, ebx
  0x00410B58: je       0x410b66
  0x00410640: lea      esi, [eax + esi + 0x14]
  0x00410644: add      esp, 8
  0x00410647: mov      eax, dword ptr [esi]
  0x00410649: test     eax, eax
  0x0041064B: je       0x41065a
  0x0041082B: mov      edx, dword ptr [edi + eax + 0x1c]
  0x0041082F: lea      edi, [edi + eax + 0x1c]
  0x00410833: mov      ecx, dword ptr [edi + edx*4 + 4]
  0x00410837: lea      eax, [edi + edx*4 + 4]
  0x0041083B: lea      edi, [eax + ecx + 4]
  0x0041083F: push     edi
  0x00410840: call     0x406cf0
  0x00410EF9: push     edi
  0x00410EFA: mov      dword ptr [esp + 0x2c], 1
  0x00410F02: call     0x41fe60
  0x00410751: add      edi, eax
  0x00410753: push     edi
  0x00410754: call     0x406cf0
  0x00410B6C: add      esp, 4
  0x00410B6F: jmp      0x411004
  0x00410B60: add      esp, 4
  0x00410B63: mov      dword ptr [edi + 0x10], ebx
  0x00410B66: push     edi
  0x00410B67: call     0x492f40
  0x0041065A: mov      esi, edi
  0x0041065C: push     esi
  0x0041065D: call     0x406cf0
  0x0041064D: push     eax
  0x0041064E: call     dword ptr [0x4a2560]
  0x00410845: mov      cl, byte ptr [eax + edi + 4]
  0x00410849: add      esp, 0xc
  0x0041084C: test     cl, 1
  0x0041084F: je       0x411004
  0x00410F07: mov      esi, eax
  0x00410F09: add      esp, 4
  0x00410F0C: test     esi, esi
  0x00410F0E: je       0x410f28
  0x00410759: add      edi, eax
  0x0041075B: add      esp, 8
  0x0041075E: mov      edi, dword ptr [edi]
  0x00410760: test     edi, edi
  0x00410762: je       0x41077f
  0x00410662: add      esi, eax
  0x00410664: push     esi
  0x00410665: call     0x406cf0
  0x00410654: mov      dword ptr [esi], 0
  0x0041065A: mov      esi, edi
  0x0041065C: push     esi
  0x0041065D: call     0x406cf0
  0x00410855: mov      edx, dword ptr [ebx]
  0x00410857: push     0
  0x00410859: push     edx
  0x0041085A: mov      ecx, esi
  0x0041085C: call     0x411100
  0x00410F28: lea      ecx, [esp + 0x18]
  0x00410F2C: push     0xfa
  0x00410F31: push     ecx
  0x00410F32: lea      ecx, [esp + 0x3c]
  0x00410F36: call     0x490ead
  0x00410F10: push     0x2faad68
  0x00410F15: lea      ecx, [esp + 0x38]
  0x00410F19: call     0x493566
  0x00410764: mov      edx, dword ptr [edi + 0x1c]
  0x00410767: push     edx
  0x00410768: call     dword ptr [0x4a2558]
  0x0041066A: add      esp, 8
  0x0041066D: mov      dword ptr [eax + esi], 0
  0x00410674: jmp      0x411004
  0x00410861: jmp      0x411004
  0x00410F3B: mov      eax, dword ptr [eax]
  0x00410F3D: or       ecx, 0xffffffff
  0x00410F40: mov      edi, eax
  0x00410F42: xor      eax, eax
  0x00410F44: repne scasb al, byte ptr es:[edi]
  0x00410F1E: push     esi
  0x00410F1F: lea      ecx, [esp + 0x38]
  0x00410F23: call     0x493566
  0x0041076E: test     eax, eax
  0x00410770: je       0x41077f
  0x00410F46: not      ecx
  0x00410F48: sub      edi, ecx
  0x00410F4A: lea      edx, [ebp + 8]
  0x00410F4D: mov      eax, ecx
  0x00410F4F: mov      esi, edi
  0x00410F51: mov      edi, edx
  0x00410F53: shr      ecx, 2
  0x00410F56: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00410F44: repne scasb al, byte ptr es:[edi]
  0x00410772: mov      eax, edi
  0x00410774: jmp      0x411006
  0x00410F58: mov      ecx, eax
  0x00410F5A: and      ecx, 3
  0x00410F5D: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00410F56: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00410F5F: lea      ecx, [esp + 0x18]
  0x00410F63: call     0x4931d6
  0x00410F5D: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00410F68: mov      ecx, dword ptr [esp + 0x38]
  0x00410F6C: push     ebx
  0x00410F6D: add      ecx, 0x14
  0x00410F70: call     0x40e780
  0x00410F75: lea      ecx, [esp + 0x34]
  0x00410F79: mov      dword ptr [ebp + 0x108], eax
  0x00410F7F: mov      dword ptr [esp + 0x28], 0xffffffff
  0x00410F87: call     0x4931d6

/**
 * Function: sub_42aa70
 * Address: 0x0042AA70
 * Blocks: 317
 * Instructions: 1608
 * Analyzed with angr + capstone
 */
void* sub_42aa70(void) {

  /* Block 1 @ 0x0042AA70 */
  // push -1
  // push 0x49fedf
  // mov eax, dword ptr fs:[0]
  // push eax
  // mov dword ptr fs:[0], esp
  // sub esp, 0x26c
  // push ebp
  // push esi
  // mov esi, ecx
  // push edi
  // push esi
  // lea ecx, [esp + 0xbc]
  // call 0x00499CDD
  call(0x00499CDD);
  /* Block 2 @ 0x0042AA9D */
  // lea eax, [esp + 0x1b0]
  // xor ebp, ebp
  // push eax
  // lea ecx, [esp + 0xbc]
  // mov dword ptr [esp + 0x284], ebp
  // call 0x0049988E
  call(0x0049988E);
  /* Block 3 @ 0x0042AABA */
  // mov ecx, esi
  // call 0x0042A650
  call(0x0042A650);
  /* Block 4 @ 0x0042AAC1 */
  // mov edi, eax
  // CMP edi, ebp (set flags)
  // mov dword ptr [esp + 0x4c], edi
  // if (equal) goto 0x42c07d
  /* Block 5 @ 0x0042C07D */
  // mov eax, dword ptr [esi + 0x40]
  // lea ecx, [esp + 0xb0]
  // push eax
  // call 0x00499EDA
  call(0x00499EDA);
  /* Block 6 @ 0x0042AACF */
  // mov ecx, edi
  // call 0x00427920
  call(0x00427920);
  /* Block 7 @ 0x0042C08D */
  // CMP eax, ebp (set flags)
  // if (not equal) goto 0x42c095
  /* Block 8 @ 0x0042AAD6 */
  // TEST eax, eax (set flags)
  // if (equal) goto 0x42c07d
  /* Block 9 @ 0x0042C091 */
  // xor eax, eax
  goto 0x42c098;
  /* Block 10 @ 0x0042C095 */
  // mov eax, dword ptr [eax + 4]
  // mov edx, dword ptr [esp + 0xbc]
  // lea ecx, [esp + 0x1b0]
  // push eax
  // push ecx
  // push edx
  // call dword ptr [0x4a2518]
  call(dword ptr [0x4a2518]);
  /* Block 11 @ 0x0042AADE */
  // mov ecx, edi
  // call 0x00427960
  call(0x00427960);
  // mov edx, dword ptr [esp + 0xbc]
  // lea ecx, [esp + 0x1b0]
  // push eax
  // push ecx
  // push edx
  // call dword ptr [0x4a2518]
  call(dword ptr [0x4a2518]);
  /* Block 12 @ 0x0042C0AF */
  // mov dword ptr [esp + 0xb0], 0x2f96400
  // lea ecx, [esp + 0xb0]
  // mov byte ptr [esp + 0x280], 1
  // call 0x00499E74
  call(0x00499E74);
  /* Block 13 @ 0x0042AAE5 */
  // TEST eax, eax (set flags)
  // if (equal) goto 0x42c07d
  /* Block 14 @ 0x0042C0CE */
  // lea ecx, [esp + 0xb8]
  // mov dword ptr [esp + 0x280], 0xffffffff
  // call 0x00499D4F
  call(0x00499D4F);
  /* Block 15 @ 0x0042AAED */
  // CMP dword ptr [esi + 0x44c], ebp (set flags)
  // if (equal) goto 0x42aafc
  /* Block 16 @ 0x0042C0E5 */
  // mov ecx, dword ptr [esp + 0x278]
  // pop edi
  // pop esi
  // pop ebp
  // mov dword ptr fs:[0], ecx
  // add esp, 0x278
  return;
  /* Block 17 @ 0x0042AAFC */
  // push ebx
  // mov ecx, esi
  // call 0x0042A5E0
  call(0x0042A5E0);
  /* Block 18 @ 0x0042AAF5 */
  // mov ecx, esi
  // call 0x0042C270
  call(0x0042C270);
  /* Block 19 @ 0x0042AB04 */
  // push ebp
  // mov ecx, esi
  // mov dword ptr [esp + 0x190], eax
  // call 0x0042A5F0
  call(0x0042A5F0);
  /* Block 20 @ 0x0042AB13 */
  // mov ecx, dword ptr [esi + 0x5c]
  // mov edx, dword ptr [esi + 0x58]
  // push ecx
  // lea eax, [esp + 0xc0]
  // push edx
  // push eax
  // call 0x00442C00
  call(0x00442C00);
  /* Block 21 @ 0x0042AB28 */
  // add esp, 0xc
  // lea ecx, [esp + 0xbc]
  // push ecx
  // lea ecx, [esp + 0x1ac]
  // call 0x0042A070
  call(0x0042A070);
  /* Block 22 @ 0x0042AB3F */
  // mov eax, dword ptr [esp + 0x1b8]
  // mov ecx, dword ptr [esp + 0x1bc]
  // mov edx, dword ptr [esp + 0x1b4]
  // mov edi, dword ptr [0x4a204c]
  // mov dword ptr [esp + 0x78], eax
  // mov dword ptr [esp + 0x7c], ecx
  // mov ecx, dword ptr [esp + 0xc4]
  // lea eax, [esp + 0x74]
  // mov dword ptr [esp + 0x74], edx
  // mov edx, dword ptr [esp + 0x1c0]
  // push 2
  // push eax
  // push ecx
  // mov byte ptr [esp + 0x290], 2
  // mov dword ptr [esp + 0x8c], edx
  // call edi
  call(edi);
  /* Block 23 @ 0x0042AB8D */
  // mov eax, dword ptr [esi + 0x1c]
  // lea edx, [esp + 0x98]
  // push edx
  // push eax
  // call dword ptr [0x4a2544]
  call(dword ptr [0x4a2544]);
  /* Block 24 @ 0x0042AB9F */
  // mov edx, dword ptr [esp + 0xc4]
  // lea ecx, [esp + 0x98]
  // push 2
  // push ecx
  // push edx
  // call edi
  call(edi);
  /* Block 25 @ 0x0042ABB3 */
  // mov eax, dword ptr [esp + 0x98]
  // mov ecx, dword ptr [esp + 0x9c]
  // mov edx, dword ptr [esp + 0xa0]
  // mov edi, dword ptr [esp + 0xa4]
  // mov dword ptr [esp + 0x118], eax
  // mov dword ptr [esp + 0x128], eax
  // lea eax, [esp + 0xb4]
  // mov dword ptr [esp + 0x11c], ecx
  // mov dword ptr [esp + 0x12c], ecx
  // push eax
  // mov ecx, esi
  // mov dword ptr [esp + 0x124], edx
  // mov dword ptr [esp + 0x128], edi
  // mov dword ptr [esp + 0x134], edx
  // mov dword ptr [esp + 0x138], edi
  // call 0x0042C1C0
  call(0x0042C1C0);
  /* Block 26 @ 0x0042AC16 */
  // mov edi, dword ptr [eax]
  // mov ecx, dword ptr [esp + 0x98]
  // add ecx, edi
  // lea edx, [esp + 0x98]
  // mov ebx, dword ptr [eax + 4]
  // mov eax, dword ptr [esp + 0x9c]
  // mov dword ptr [esp + 0x98], ecx
  // add eax, ebx
  // lea ecx, [esp + 0x74]
  // mov dword ptr [esp + 0x9c], eax
  // push ecx
  // lea eax, [esp + 0x9c]
  // push edx
  // push eax
  // call dword ptr [0x4a24c8]
  call(dword ptr [0x4a24c8]);
  /* Block 27 @ 0x0042AC56 */
  // mov ecx, dword ptr [esp + 0x98]
  // mov edx, dword ptr [esp + 0x9c]
  // mov dword ptr [esp + 0x14], ecx
  // mov eax, dword ptr [esp + 0xa0]
  // mov ecx, dword ptr [esp + 0xa4]
  // mov dword ptr [esp + 0x18], edx
  // mov dword ptr [esp + 0x1c], eax
  // mov eax, dword ptr [esp + 0xc4]
  // lea edx, [esp + 0x14]
  // push 2
  // push edx
  // push eax
  // mov dword ptr [esp + 0x2c], ecx
  // call dword ptr [0x4a2048]
  call(dword ptr [0x4a2048]);
  /* Block 28 @ 0x0042AC97 */
  // mov dword ptr [esp + 0x14c], ebp
  // mov dword ptr [esp + 0x148], 0x2f96418
  // lea ecx, [esp + 0x14]
  // mov byte ptr [esp + 0x284], 3
  // push ecx
  // call dword ptr [0x4a209c]
  call(dword ptr [0x4a209c]);
  /* Block 29 @ 0x0042ACBC */
  // push eax
  // lea ecx, [esp + 0x14c]
  // call 0x00499E1D
  call(0x00499E1D);
  /* Block 30 @ 0x0042ACC9 */
  // mov eax, dword ptr [esp + 0x118]
  // lea edx, [esp + 0x74]
  // add eax, edi
  // push edx
  // mov dword ptr [esp + 0x11c], eax
  // lea eax, [esp + 0x11c]
  // lea ecx, [esp + 0x11c]
  // push eax
  // push ecx
  // call dword ptr [0x4a24c8]
  call(dword ptr [0x4a24c8]);
  /* Block 31 @ 0x0042ACF4 */
  // mov eax, dword ptr [esp + 0x11c]
  // mov ecx, dword ptr [esp + 0x120]
  // mov edx, dword ptr [esp + 0x118]
  // mov dword ptr [esp + 0x18], eax
  // mov dword ptr [esp + 0x1c], ecx
  // mov ecx, dword ptr [esp + 0xc4]
  // lea eax, [esp + 0x14]
  // mov dword ptr [esp + 0x14], edx
  // mov edx, dword ptr [esp + 0x124]
  // push 2
  // push eax
  // push ecx
  // mov dword ptr [esp + 0x2c], edx
  // call dword ptr [0x4a2048]
  call(dword ptr [0x4a2048]);
  /* Block 32 @ 0x0042AD35 */
  // mov dword ptr [esp + 0x154], ebp
  // mov dword ptr [esp + 0x150], 0x2f96418
  // mov edi, dword ptr [0x4a209c]
  // lea edx, [esp + 0x14]
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0042AA70: push     -1
  0x0042AA72: push     0x49fedf
  0x0042AA77: mov      eax, dword ptr fs:[0]
  0x0042AA7D: push     eax
  0x0042AA7E: mov      dword ptr fs:[0], esp
  0x0042AA85: sub      esp, 0x26c
  0x0042AA8B: push     ebp
  0x0042AA8C: push     esi
  0x0042AA8D: mov      esi, ecx
  0x0042AA8F: push     edi
  0x0042AA90: push     esi
  0x0042AA91: lea      ecx, [esp + 0xbc]
  0x0042AA98: call     0x499cdd
  0x0042AA9D: lea      eax, [esp + 0x1b0]
  0x0042AAA4: xor      ebp, ebp
  0x0042AAA6: push     eax
  0x0042AAA7: lea      ecx, [esp + 0xbc]
  0x0042AAAE: mov      dword ptr [esp + 0x284], ebp
  0x0042AAB5: call     0x49988e
  0x0042AABA: mov      ecx, esi
  0x0042AABC: call     0x42a650
  0x0042AAC1: mov      edi, eax
  0x0042AAC3: cmp      edi, ebp
  0x0042AAC5: mov      dword ptr [esp + 0x4c], edi
  0x0042AAC9: je       0x42c07d
  0x0042C07D: mov      eax, dword ptr [esi + 0x40]
  0x0042C080: lea      ecx, [esp + 0xb0]
  0x0042C087: push     eax
  0x0042C088: call     0x499eda
  0x0042AACF: mov      ecx, edi
  0x0042AAD1: call     0x427920
  0x0042C08D: cmp      eax, ebp
  0x0042C08F: jne      0x42c095
  0x0042AAD6: test     eax, eax
  0x0042AAD8: je       0x42c07d
  0x0042C091: xor      eax, eax
  0x0042C093: jmp      0x42c098
  0x0042C095: mov      eax, dword ptr [eax + 4]
  0x0042C098: mov      edx, dword ptr [esp + 0xbc]
  0x0042C09F: lea      ecx, [esp + 0x1b0]
  0x0042C0A6: push     eax
  0x0042C0A7: push     ecx
  0x0042C0A8: push     edx
  0x0042C0A9: call     dword ptr [0x4a2518]
  0x0042AADE: mov      ecx, edi
  0x0042AAE0: call     0x427960
  0x0042C098: mov      edx, dword ptr [esp + 0xbc]
  0x0042C09F: lea      ecx, [esp + 0x1b0]
  0x0042C0A6: push     eax
  0x0042C0A7: push     ecx
  0x0042C0A8: push     edx
  0x0042C0A9: call     dword ptr [0x4a2518]
  0x0042C0AF: mov      dword ptr [esp + 0xb0], 0x2f96400
  0x0042C0BA: lea      ecx, [esp + 0xb0]
  0x0042C0C1: mov      byte ptr [esp + 0x280], 1
  0x0042C0C9: call     0x499e74
  0x0042AAE5: test     eax, eax
  0x0042AAE7: je       0x42c07d
  0x0042C0CE: lea      ecx, [esp + 0xb8]
  0x0042C0D5: mov      dword ptr [esp + 0x280], 0xffffffff
  0x0042C0E0: call     0x499d4f
  0x0042AAED: cmp      dword ptr [esi + 0x44c], ebp
  0x0042AAF3: je       0x42aafc
  0x0042C0E5: mov      ecx, dword ptr [esp + 0x278]
  0x0042C0EC: pop      edi
  0x0042C0ED: pop      esi
  0x0042C0EE: pop      ebp
  0x0042C0EF: mov      dword ptr fs:[0], ecx
  0x0042C0F6: add      esp, 0x278
  0x0042C0FC: ret      
  0x0042AAFC: push     ebx
  0x0042AAFD: mov      ecx, esi
  0x0042AAFF: call     0x42a5e0
  0x0042AAF5: mov      ecx, esi
  0x0042AAF7: call     0x42c270
  0x0042AB04: push     ebp
  0x0042AB05: mov      ecx, esi
  0x0042AB07: mov      dword ptr [esp + 0x190], eax
  0x0042AB0E: call     0x42a5f0
  0x0042AB13: mov      ecx, dword ptr [esi + 0x5c]
  0x0042AB16: mov      edx, dword ptr [esi + 0x58]
  0x0042AB19: push     ecx
  0x0042AB1A: lea      eax, [esp + 0xc0]
  0x0042AB21: push     edx
  0x0042AB22: push     eax
  0x0042AB23: call     0x442c00
  0x0042AB28: add      esp, 0xc
  0x0042AB2B: lea      ecx, [esp + 0xbc]
  0x0042AB32: push     ecx
  0x0042AB33: lea      ecx, [esp + 0x1ac]
  0x0042AB3A: call     0x42a070
  0x0042AB3F: mov      eax, dword ptr [esp + 0x1b8]
  0x0042AB46: mov      ecx, dword ptr [esp + 0x1bc]
  0x0042AB4D: mov      edx, dword ptr [esp + 0x1b4]
  0x0042AB54: mov      edi, dword ptr [0x4a204c]
  0x0042AB5A: mov      dword ptr [esp + 0x78], eax
  0x0042AB5E: mov      dword ptr [esp + 0x7c], ecx
  0x0042AB62: mov      ecx, dword ptr [esp + 0xc4]
  0x0042AB69: lea      eax, [esp + 0x74]
  0x0042AB6D: mov      dword ptr [esp + 0x74], edx
  0x0042AB71: mov      edx, dword ptr [esp + 0x1c0]
  0x0042AB78: push     2
  0x0042AB7A: push     eax
  0x0042AB7B: push     ecx
  0x0042AB7C: mov      byte ptr [esp + 0x290], 2
  0x0042AB84: mov      dword ptr [esp + 0x8c], edx
  0x0042AB8B: call     edi
  0x0042AB8D: mov      eax, dword ptr [esi + 0x1c]
  0x0042AB90: lea      edx, [esp + 0x98]
  0x0042AB97: push     edx
  0x0042AB98: push     eax
  0x0042AB99: call     dword ptr [0x4a2544]
  0x0042AB9F: mov      edx, dword ptr [esp + 0xc4]
  0x0042ABA6: lea      ecx, [esp + 0x98]
  0x0042ABAD: push     2
  0x0042ABAF: push     ecx
  0x0042ABB0: push     edx
  0x0042ABB1: call     edi
  0x0042ABB3: mov      eax, dword ptr [esp + 0x98]
  0x0042ABBA: mov      ecx, dword ptr [esp + 0x9c]
  0x0042ABC1: mov      edx, dword ptr [esp + 0xa0]
  0x0042ABC8: mov      edi, dword ptr [esp + 0xa4]
  0x0042ABCF: mov      dword ptr [esp + 0x118], eax
  0x0042ABD6: mov      dword ptr [esp + 0x128], eax
  0x0042ABDD: lea      eax, [esp + 0xb4]
  0x0042ABE4: mov      dword ptr [esp + 0x11c], ecx
  0x0042ABEB: mov      dword ptr [esp + 0x12c], ecx
  0x0042ABF2: push     eax
  0x0042ABF3: mov      ecx, esi
  0x0042ABF5: mov      dword ptr [esp + 0x124], edx
  0x0042ABFC: mov      dword ptr [esp + 0x128], edi
  0x0042AC03: mov      dword ptr [esp + 0x134], edx
  0x0042AC0A: mov      dword ptr [esp + 0x138], edi
  0x0042AC11: call     0x42c1c0
  0x0042AC16: mov      edi, dword ptr [eax]
  0x0042AC18: mov      ecx, dword ptr [esp + 0x98]
  0x0042AC1F: add      ecx, edi
  0x0042AC21: lea      edx, [esp + 0x98]
  0x0042AC28: mov      ebx, dword ptr [eax + 4]
  0x0042AC2B: mov      eax, dword ptr [esp + 0x9c]
  0x0042AC32: mov      dword ptr [esp + 0x98], ecx
  0x0042AC39: add      eax, ebx
  0x0042AC3B: lea      ecx, [esp + 0x74]
  0x0042AC3F: mov      dword ptr [esp + 0x9c], eax
  0x0042AC46: push     ecx
  0x0042AC47: lea      eax, [esp + 0x9c]
  0x0042AC4E: push     edx
  0x0042AC4F: push     eax
  0x0042AC50: call     dword ptr [0x4a24c8]
  0x0042AC56: mov      ecx, dword ptr [esp + 0x98]
  0x0042AC5D: mov      edx, dword ptr [esp + 0x9c]
  0x0042AC64: mov      dword ptr [esp + 0x14], ecx
  0x0042AC68: mov      eax, dword ptr [esp + 0xa0]
  0x0042AC6F: mov      ecx, dword ptr [esp + 0xa4]
  0x0042AC76: mov      dword ptr [esp + 0x18], edx
  0x0042AC7A: mov      dword ptr [esp + 0x1c], eax
  0x0042AC7E: mov      eax, dword ptr [esp + 0xc4]
  0x0042AC85: lea      edx, [esp + 0x14]
  0x0042AC89: push     2
  0x0042AC8B: push     edx
  0x0042AC8C: push     eax
  0x0042AC8D: mov      dword ptr [esp + 0x2c], ecx
  0x0042AC91: call     dword ptr [0x4a2048]
  0x0042AC97: mov      dword ptr [esp + 0x14c], ebp
  0x0042AC9E: mov      dword ptr [esp + 0x148], 0x2f96418
  0x0042ACA9: lea      ecx, [esp + 0x14]
  0x0042ACAD: mov      byte ptr [esp + 0x284], 3
  0x0042ACB5: push     ecx
  0x0042ACB6: call     dword ptr [0x4a209c]
  0x0042ACBC: push     eax
  0x0042ACBD: lea      ecx, [esp + 0x14c]
  0x0042ACC4: call     0x499e1d
  0x0042ACC9: mov      eax, dword ptr [esp + 0x118]
  0x0042ACD0: lea      edx, [esp + 0x74]
  0x0042ACD4: add      eax, edi
  0x0042ACD6: push     edx
  0x0042ACD7: mov      dword ptr [esp + 0x11c], eax
  0x0042ACDE: lea      eax, [esp + 0x11c]
  0x0042ACE5: lea      ecx, [esp + 0x11c]
  0x0042ACEC: push     eax
  0x0042ACED: push     ecx
  0x0042ACEE: call     dword ptr [0x4a24c8]
  0x0042ACF4: mov      eax, dword ptr [esp + 0x11c]
  0x0042ACFB: mov      ecx, dword ptr [esp + 0x120]
  0x0042AD02: mov      edx, dword ptr [esp + 0x118]
  0x0042AD09: mov      dword ptr [esp + 0x18], eax
  0x0042AD0D: mov      dword ptr [esp + 0x1c], ecx
  0x0042AD11: mov      ecx, dword ptr [esp + 0xc4]
  0x0042AD18: lea      eax, [esp + 0x14]
  0x0042AD1C: mov      dword ptr [esp + 0x14], edx
  0x0042AD20: mov      edx, dword ptr [esp + 0x124]
  0x0042AD27: push     2
  0x0042AD29: push     eax
  0x0042AD2A: push     ecx
  0x0042AD2B: mov      dword ptr [esp + 0x2c], edx
  0x0042AD2F: call     dword ptr [0x4a2048]
  0x0042AD35: mov      dword ptr [esp + 0x154], ebp
  0x0042AD3C: mov      dword ptr [esp + 0x150], 0x2f96418
  0x0042AD47: mov      edi, dword ptr [0x4a209c]
  0x0042AD4D: lea      edx, [esp + 0x14]
  0x0042AD51: push     edx
  0x0042AD52: mov      byte ptr [esp + 0x288], 4
  0x0042AD5A: call     edi
  0x0042AD5C: push     eax
  0x0042AD5D: lea      ecx, [esp + 0x154]
  0x0042AD64: call     0x499e1d
  0x0042AD69: mov      edx, dword ptr [esp + 0x12c]
  0x0042AD70: lea      eax, [esp + 0x74]
  0x0042AD74: add      edx, ebx
  0x0042AD76: lea      ecx, [esp + 0x128]
  0x0042AD7D: mov      dword ptr [esp + 0x12c], edx
  0x0042AD84: push     eax
  0x0042AD85: lea      edx, [esp + 0x12c]
  0x0042AD8C: push     ecx
  0x0042AD8D: push     edx
  0x0042AD8E: call     dword ptr [0x4a24c8]
  0x0042AD94: mov      ecx, dword ptr [esp + 0x12c]
  0x0042AD9B: mov      edx, dword ptr [esp + 0x130]
  0x0042ADA2: mov      eax, dword ptr [esp + 0x128]
  0x0042ADA9: mov      dword ptr [esp + 0x18], ecx
  0x0042ADAD: mov      dword ptr [esp + 0x1c], edx
  0x0042ADB1: mov      edx, dword ptr [esp + 0xc4]
  0x0042ADB8: lea      ecx, [esp + 0x14]
  0x0042ADBC: mov      dword ptr [esp + 0x14], eax
  0x0042ADC0: mov      eax, dword ptr [esp + 0x134]
  0x0042ADC7: push     2
  0x0042ADC9: push     ecx
  0x0042ADCA: push     edx
  0x0042ADCB: mov      dword ptr [esp + 0x2c], eax
  0x0042ADCF: call     dword ptr [0x4a2048]
  0x0042ADD5: mov      dword ptr [esp + 0x160], ebp
  0x0042ADDC: mov      ebx, 0x2f96418
  0x0042ADE1: mov      dword ptr [esp + 0x15c], ebx
  0x0042ADE8: lea      eax, [esp + 0x14]
  0x0042ADEC: mov      byte ptr [esp + 0x284], 5
  0x0042ADF4: push     eax
  0x0042ADF5: call     edi
  0x0042ADF7: push     eax
  0x0042ADF8: lea      ecx, [esp + 0x160]
  0x0042ADFF: call     0x499e1d
  0x0042AE04: mov      dword ptr [esp + 0x6c], ebp
  0x0042AE08: mov      dword ptr [esp + 0x68], ebx
  0x0042AE0C: mov      dword ptr [esp + 0x4c], ebp
  0x0042AE10: mov      dword ptr [esp + 0x48], ebx
  0x0042AE14: lea      ecx, [esp + 0x1b4]
  0x0042AE1B: mov      byte ptr [esp + 0x284], 7
  0x0042AE23: push     ecx
  0x0042AE24: call     edi
  0x0042AE26: push     eax
  0x0042AE27: lea      ecx, [esp + 0x6c]
  0x0042AE2B: call     0x499e1d
  0x0042AE30: mov      edx, dword ptr [esp + 0xc4]
  0x0042AE37: mov      edi, dword ptr [0x4a2050]
  0x0042AE3D: push     6
  0x0042AE3F: push     edx
  0x0042AE40: call     edi
  0x0042AE42: push     eax
  0x0042AE43: call     0x499e08
  0x0042AE48: mov      dword ptr [esp + 0x190], eax
  0x0042AE4F: mov      eax, dword ptr [esp + 0xc4]
  0x0042AE56: push     1
  0x0042AE58: push     eax
  0x0042AE59: call     edi
  0x0042AE5B: push     eax
  0x0042AE5C: call     0x499e08
  0x0042AE61: mov      ecx, dword ptr [esp + 0xc4]
  0x0042AE68: push     2
  0x0042AE6A: push     ecx
  0x0042AE6B: mov      dword ptr [esp + 0x19c], eax
  0x0042AE72: call     edi
  0x0042AE74: push     eax
  0x0042AE75: call     0x499e08
  0x0042AE7A: push     1
  0x0042AE7C: lea      ecx, [esp + 0xc0]
  0x0042AE83: mov      dword ptr [esp + 0x1b4], eax
  0x0042AE8A: call     0x49954d
  0x0042AE8F: mov      eax, dword ptr [esi + 0x44]
  0x0042AE92: mov      edi, dword ptr [esp + 0x50]
  0x0042AE96: shr      eax, 1
  0x0042AE98: and      eax, 1
  0x0042AE9B: mov      ecx, edi
  0x0042AE9D: mov      dword ptr [esp + 0x144], eax
  0x0042AEA4: call     0x427920
  0x0042AEA9: mov      ecx, edi
  0x0042AEAB: mov      dword ptr [esp + 0x64], eax
  0x0042AEAF: call     0x4279e0
  0x0042AEB4: mov      ebx, eax
  0x0042AEB6: mov      ecx, edi
  0x0042AEB8: mov      dword ptr [esp + 0x58], ebx
  0x0042AEBC: call     0x427960
  0x0042AEC1: mov      ecx, edi
  0x0042AEC3: mov      dword ptr [esp + 0x44], eax
  0x0042AEC7: call     0x4279f0
  0x0042AECC: mov      edi, eax
  0x0042AECE: push     1
  0x0042AED0: mov      ecx, esi
  0x0042AED2: mov      dword ptr [esp + 0x3c], edi
  0x0042AED6: call     0x49633f
  0x0042AEDB: add      eax, ebx
  0x0042AEDD: push     ebp
  0x0042AEDE: mov      ecx, esi
  0x0042AEE0: mov      dword ptr [esp + 0x2c], eax
  0x0042AEE4: call     0x49633f
  0x0042AEE9: lea      edx, [esp + 0xb4]
  0x0042AEF0: add      eax, edi
  0x0042AEF2: push     edx
  0x0042AEF3: mov      ecx, esi
  0x0042AEF5: mov      dword ptr [esp + 0x14], eax
  0x0042AEF9: call     0x42a260
  0x0042AEFE: mov      ecx, dword ptr [eax]
  0x0042AF00: mov      dword ptr [esp + 0x3c], ecx
  0x0042AF04: mov      edx, dword ptr [eax + 4]
  0x0042AF07: mov      dword ptr [esp + 0x94], ebp
  0x0042AF0E: mov      dword ptr [esp + 0x40], edx
  0x0042AF12: mov      dword ptr [esp + 0x90], 0x2f9640c
  0x0042AF1D: lea      eax, [esp + 0x90]
  0x0042AF24: mov      ecx, esi
  0x0042AF26: push     eax
  0x0042AF27: mov      byte ptr [esp + 0x288], 8
  0x0042AF2F: call     0x42a6a0
  0x0042AF34: push     0xf
  0x0042AF36: call     dword ptr [0x4a2500]
  0x0042AF3C: push     eax
  0x0042AF3D: lea      ecx, [esp + 0x178]
  0x0042AF44: call     0x499eda
  0x0042AF49: push     0xffffff
  0x0042AF4E: push     ebp
  0x0042AF4F: push     ebp
  0x0042AF50: lea      ecx, [esp + 0x144]
  0x0042AF57: mov      byte ptr [esp + 0x290], 9
  0x0042AF5F: call     0x499e8a
  0x0042AF64: push     0x808080
  0x0042AF69: push     ebp
  0x0042AF6A: push     ebp
  0x0042AF6B: lea      ecx, [esp + 0x11c]
  0x0042AF72: mov      byte ptr [esp + 0x290], 0xa
  0x0042AF7A: call     0x499e8a
  0x0042AF7F: push     ebp
  0x0042AF80: push     ebp
  0x0042AF81: push     ebp
  0x0042AF82: lea      ecx, [esp + 0x1d0]
  0x0042AF89: mov      byte ptr [esp + 0x290], 0xb
  0x0042AF91: call     0x499e8a
  0x0042AF96: mov      eax, 5
  0x0042AF9B: mov      dword ptr [esp + 0x164], ebp
  0x0042AFA2: mov      dword ptr [esp + 0x16c], ebp
  0x0042AFA9: mov      dword ptr [esp + 0x168], ebp
  0x0042AFB0: mov      dword ptr [esp + 0x170], eax
  0x0042AFB7: mov      dword ptr [esp + 0x17c], ebp
  0x0042AFBE: mov      dword ptr [esp + 0x184], ebp
  0x0042AFC5: mov      dword ptr [esp + 0x180], ebp
  0x0042AFCC: mov      dword ptr [esp + 0x188], eax
  0x0042AFD3: lea      ecx, [esp + 0x1ec]
  0x0042AFDA: mov      byte ptr [esp + 0x284], 0xe
  0x0042AFE2: call     0x429700
  0x0042AFE7: mov      ecx, dword ptr [0x2fd8088]
  0x0042AFED: mov      dword ptr [esp + 0xb0], ecx
  0x0042AFF4: mov      byte ptr [esp + 0x284], 0x10
  0x0042AFFC: mov      dword ptr [esp + 0x54], 1
  0x0042B004: mov      edi, dword ptr [esp + 0x54]
  0x0042B008: cmp      edi, 2
  0x0042B00B: jne      0x42b097
  0x0042B011: push     1
  0x0042B013: lea      ecx, [esp + 0xc0]
  0x0042B01A: call     0x499634
  0x0042B097: cmp      dword ptr [esp + 0x144], 1
  0x0042B09F: jne      0x42b865
  0x0042B01F: mov      edx, dword ptr [esi + 0x40]
  0x0042B022: lea      ecx, [esp + 0xb4]
  0x0042B029: push     edx
  0x0042B02A: call     0x499eda
  0x0042B0A5: mov      ecx, dword ptr [esp + 0x78]
  0x0042B0A9: mov      eax, dword ptr [esp + 0x40]
  0x0042B0AD: cmp      ecx, eax
  0x0042B0AF: jg       0x42b57c
  0x0042B865: cmp      edi, 2
  0x0042B868: jne      0x42b9d8
  0x0042B02F: cmp      eax, ebp
  0x0042B031: jne      0x42b037
  0x0042B0B5: cmp      edi, 1
  0x0042B0B8: jne      0x42b203
  0x0042B57C: mov      edx, dword ptr [esp + 0x74]
  0x0042B580: mov      eax, dword ptr [esp + 0x3c]
  0x0042B584: cmp      edx, eax
  0x0042B586: jg       0x42b85c
  0x0042B86E: cmp      dword ptr [esp + 0x78], 4
  0x0042B873: jg       0x42b923
  0x0042B9D8: xor      ebx, ebx
  0x0042B9DA: push     -1
  0x0042B9DC: push     ebp
  0x0042B9DD: lea      ecx, [esp + 0x16c]
  0x0042B9E4: mov      dword ptr [esp + 0x90], ebx
  0x0042B9EB: call     0x415c70
  0x0042B033: xor      ecx, ecx
  0x0042B035: jmp      0x42b03a
  0x0042B037: mov      ecx, dword ptr [eax + 4]
  0x0042B03A: mov      edx, dword ptr [esp + 0x6c]
  0x0042B03E: lea      eax, [esp + 0x68]
  0x0042B042: neg      eax
  0x0042B044: sbb      eax, eax
  0x0042B046: push     ecx
  0x0042B047: and      eax, edx
  0x0042B049: push     eax
  0x0042B04A: mov      eax, dword ptr [esp + 0xc8]
  0x0042B051: push     eax
  0x0042B052: call     dword ptr [0x4a2108]
  0x0042B0BE: mov      eax, dword ptr [esp + 0x38]
  0x0042B0C2: xor      edi, edi
  0x0042B0C4: xor      ebx, ebx
  0x0042B0C6: cmp      eax, ebp
  0x0042B0C8: jle      0x42b0e6
  0x0042B203: mov      eax, dword ptr [esp + 0x10]
  0x0042B207: mov      edx, dword ptr [esp + 0x38]
  0x0042B20B: mov      ecx, dword ptr [esp + 0x44]
  0x0042B20F: sub      eax, edx
  0x0042B211: xor      ebx, ebx
  0x0042B213: mov      dword ptr [esp + 0x2c], eax
  0x0042B217: lea      edi, [eax - 1]
  0x0042B21A: cmp      edi, ecx
  0x0042B21C: mov      dword ptr [esp + 0x24], edi
  0x0042B220: jge      0x42b57c
  0x0042B58C: mov      ebx, dword ptr [esp + 0x28]
  0x0042B590: mov      ecx, dword ptr [esp + 0x58]
  0x0042B594: mov      eax, dword ptr [esp + 0x64]
  0x0042B598: mov      edi, dword ptr [esp + 0x40]
  0x0042B59C: sub      ebx, ecx
  0x0042B59E: cmp      ebx, eax
  0x0042B5A0: mov      dword ptr [esp + 0x24], ebx
  0x0042B5A4: jge      0x42b85c
  0x0042B85C: mov      ebx, dword ptr [esp + 0x40]
  0x0042B860: jmp      0x42b9da
  0x0042B879: cmp      dword ptr [esp + 0x58], ebp
  0x0042B87D: jne      0x42b923
  0x0042B923: cmp      dword ptr [esp + 0x74], 4
  0x0042B928: jg       0x42b9d8
  0x0042B9F0: push     -1
  0x0042B9F2: push     ebp
  0x0042B9F3: lea      ecx, [esp + 0x184]
  0x0042B9FA: call     0x415c70
  0x0042B03A: mov      edx, dword ptr [esp + 0x6c]
  0x0042B03E: lea      eax, [esp + 0x68]
  0x0042B042: neg      eax
  0x0042B044: sbb      eax, eax
  0x0042B046: push     ecx
  0x0042B047: and      eax, edx
  0x0042B049: push     eax
  0x0042B04A: mov      eax, dword ptr [esp + 0xc8]
  0x0042B051: push     eax
  0x0042B052: call     dword ptr [0x4a2108]
  0x0042B058: mov      dword ptr [esp + 0xb4], 0x2f96400
  0x0042B063: lea      ecx, [esp + 0xb4]
  0x0042B06A: mov      byte ptr [esp + 0x284], 0x11
  0x0042B072: call     0x499e74
  0x0042B0E6: mov      ebx, dword ptr [esp + 0x10]
  0x0042B0EA: mov      eax, dword ptr [esp + 0x44]
  0x0042B0EE: cmp      ebx, eax
  0x0042B0F0: jge      0x42b10e
  0x0042B0CA: push     ebx
  0x0042B0CB: mov      ecx, esi
  0x0042B0CD: call     0x42a180
  0x0042B226: jmp      0x42b22c
  0x0042B5AA: jmp      0x42b5b2
  0x0042B9DA: push     -1
  0x0042B9DC: push     ebp
  0x0042B9DD: lea      ecx, [esp + 0x16c]
  0x0042B9E4: mov      dword ptr [esp + 0x90], ebx
  0x0042B9EB: call     0x415c70
  0x0042B883: cmp      dword ptr [esp + 0x28], ebp
  0x0042B887: jle      0x42b923
  0x0042B92E: cmp      dword ptr [esp + 0x38], ebp
  0x0042B932: jne      0x42b9d8
  0x0042B9FF: mov      edi, dword ptr [esp + 0x28]
  0x0042BA03: mov      ecx, dword ptr [esp + 0x58]
  0x0042BA07: mov      eax, dword ptr [esp + 0x64]
  0x0042BA0B: sub      edi, ecx
  0x0042BA0D: cmp      edi, eax
  0x0042BA0F: mov      dword ptr [esp + 0x24], edi
  0x0042BA13: jge      0x42be8f
  0x0042B077: mov      ecx, dword ptr [esi + 0x5c]
  0x0042B07A: mov      edx, dword ptr [esi + 0x58]
  0x0042B07D: push     ecx
  0x0042B07E: lea      eax, [esp + 0xc0]
  0x0042B085: push     edx
  0x0042B086: push     eax
  0x0042B087: mov      byte ptr [esp + 0x290], 0x10
  0x0042B08F: call     0x442c00
  0x0042B0F2: push     ebx
  0x0042B0F3: mov      ecx, esi
  0x0042B0F5: call     0x42a180
  0x0042B10E: mov      edx, dword ptr [esp + 0x3c]
  0x0042B112: mov      eax, dword ptr [esp + 0x40]
  0x0042B116: add      edi, edx
  0x0042B118: lea      ecx, [esp + 0x74]
  0x0042B11C: mov      dword ptr [esp + 0x20], eax
  0x0042B120: lea      edx, [esp + 0x14]
  0x0042B124: push     ecx
  0x0042B125: lea      eax, [esp + 0x18]
  0x0042B129: push     edx
  0x0042B12A: push     eax
  0x0042B12B: mov      dword ptr [esp + 0x20], ebp
  0x0042B12F: mov      dword ptr [esp + 0x28], edi
  0x0042B133: mov      dword ptr [esp + 0x24], ebp
  0x0042B137: call     dword ptr [0x4a24c8]
  0x0042B0D2: push     eax
  0x0042B0D3: push     edi
  0x0042B0D4: mov      ecx, esi
  0x0042B0D6: call     0x42a340
  0x0042B22C: cmp      ebx, dword ptr [esp + 0x7c]
  0x0042B230: jg       0x42b57c
  0x0042B5B2: cmp      edi, dword ptr [esp + 0x80]
  0x0042B5B9: jg       0x42b85c
  0x0042B88D: mov      ebx, dword ptr [esp + 0x10]
  0x0042B891: mov      ecx, dword ptr [esp + 0x38]
  0x0042B895: mov      eax, dword ptr [esp + 0x44]
  0x0042B899: sub      ebx, ecx
  0x0042B89B: cmp      ebx, eax
  0x0042B89D: mov      dword ptr [esp + 0x2c], ebp
  0x0042B8A1: mov      dword ptr [esp + 0xac], ebp
  0x0042B8A8: jge      0x42b923
  0x0042B938: cmp      dword ptr [esp + 0x10], ebp
  0x0042B93C: jle      0x42b9d8
  0x0042BA19: jmp      0x42ba1d
  0x0042BE8F: push     ebp
  0x0042BE90: lea      ecx, [esp + 0xc0]
  0x0042BE97: call     0x49989e
  0x0042B094: add      esp, 0xc
  0x0042B097: cmp      dword ptr [esp + 0x144], 1
  0x0042B09F: jne      0x42b865
  0x0042B0FA: push     eax
  0x0042B0FB: push     edi
  0x0042B0FC: mov      ecx, esi
  0x0042B0FE: call     0x42a340
  0x0042B13D: lea      ecx, [esp + 0x14]
  0x0042B141: push     ecx
  0x0042B142: call     dword ptr [0x4a251c]
  0x0042B0DB: mov      edi, eax
  0x0042B0DD: mov      eax, dword ptr [esp + 0x38]
  0x0042B0E1: inc      ebx
  0x0042B0E2: cmp      ebx, eax
  0x0042B0E4: jl       0x42b0ca
  0x0042B236: cmp      edi, eax
  0x0042B238: jl       0x42b34a
  0x0042B5BF: mov      eax, dword ptr [esp + 0x28]
  0x0042B5C3: cmp      ebx, eax
  0x0042B5C5: jge      0x42b5cf
  0x0042B8AA: mov      eax, dword ptr [esp + 0x10]
  0x0042B8AE: mov      edi, ebx
  0x0042B8B0: cmp      ebx, eax
  0x0042B8B2: jge      0x42b8be
  0x0042B942: mov      ebx, dword ptr [esp + 0x28]
  0x0042B946: mov      ecx, dword ptr [esp + 0x58]
  0x0042B94A: mov      eax, dword ptr [esp + 0x64]
  0x0042B94E: sub      ebx, ecx
  0x0042B950: cmp      ebx, eax
  0x0042B952: mov      dword ptr [esp + 0x2c], ebp
  0x0042B956: mov      dword ptr [esp + 0xa8], ebp
  0x0042B95D: jge      0x42b9d8
  0x0042BA1D: cmp      ebx, dword ptr [esp + 0x80]
  0x0042BA24: jg       0x42be8f
  0x0042BE9C: mov      eax, dword ptr [esp + 0x54]
  0x0042BEA0: inc      eax
  0x0042BEA1: cmp      eax, 2
  0x0042BEA4: mov      dword ptr [esp + 0x54], eax
  0x0042BEA8: jle      0x42b004
  0x0042B103: mov      edi, eax
  0x0042B105: mov      eax, dword ptr [esp + 0x44]
  0x0042B109: inc      ebx
  0x0042B10A: cmp      ebx, eax
  0x0042B10C: jl       0x42b0f2
  0x0042B148: test     eax, eax
  0x0042B14A: jne      0x42b57c
  0x0042B34A: lea      ecx, [esp + 0x110]
  0x0042B351: push     ecx
  0x0042B352: lea      ecx, [esp + 0xc0]
  0x0042B359: call     0x499471
  0x0042B23E: mov      eax, dword ptr [esp + 0x10]
  0x0042B242: cmp      edi, eax
  0x0042B244: mov      edi, dword ptr [esp + 0x24]
  0x0042B248: jge      0x42b254
  0x0042B5C7: sub      ebx, eax
  0x0042B5C9: mov      eax, dword ptr [esp + 0x58]
  0x0042B5CD: add      ebx, eax
  0x0042B5CF: push     ebx
  0x0042B5D0: mov      ecx, esi
  0x0042B5D2: call     0x42a0a0
  0x0042B5CF: push     ebx
  0x0042B5D0: mov      ecx, esi
  0x0042B5D2: call     0x42a0a0
  0x0042B8B4: mov      ecx, eax
  0x0042B8B6: mov      eax, dword ptr [esp + 0x38]
  0x0042B8BA: sub      edi, ecx
  0x0042B8BC: add      edi, eax
  0x0042B8BE: push     edi
  0x0042B8BF: mov      ecx, esi
  0x0042B8C1: call     0x42a180
  0x0042B8BE: push     edi
  0x0042B8BF: mov      ecx, esi
  0x0042B8C1: call     0x42a180
  0x0042B95F: mov      eax, dword ptr [esp + 0x28]
  0x0042B963: mov      edi, ebx
  0x0042B965: cmp      ebx, eax
  0x0042B967: jge      0x42b973
  0x0042BA2A: mov      eax, dword ptr [esp + 0x28]
  0x0042BA2E: mov      ebp, edi
  0x0042BA30: cmp      edi, eax
  0x0042BA32: jge      0x42ba3c
  0x0042B004: mov      edi, dword ptr [esp + 0x54]
  0x0042B008: cmp      edi, 2
  0x0042B00B: jne      0x42b097
  0x0042BEAE: mov      eax, dword ptr [esi + 0x44c]
  0x0042BEB4: pop      ebx
  0x0042BEB5: cmp      eax, ebp
  0x0042BEB7: je       0x42bec0
  0x0042B150: mov      eax, dword ptr [esp + 0xc4]
  0x0042B157: lea      edx, [esp + 0x14]
  0x0042B15B: push     2
  0x0042B15D: push     edx
  0x0042B15E: push     eax
  0x0042B15F: call     dword ptr [0x4a2048]
  0x0042B35E: mov      edx, dword ptr [esp + 0x2c]
  0x0042B362: lea      eax, [edx - 1]
  0x0042B365: cmp      edi, eax
  0x0042B367: jne      0x42b46f
  0x0042B24A: mov      ecx, eax
  0x0042B24C: mov      eax, dword ptr [esp + 0x38]
  0x0042B250: sub      edi, ecx
  0x0042B252: add      edi, eax
  0x0042B254: push     edi
  0x0042B255: mov      ecx, esi
  0x0042B257: mov      dword ptr [esp + 0x18], ebx
  0x0042B25B: call     0x42a180
  0x0042B254: push     edi
  0x0042B255: mov      ecx, esi
  0x0042B257: mov      dword ptr [esp + 0x18], ebx
  0x0042B25B: call     0x42a180
  0x0042B5D7: push     eax
  0x0042B5D8: push     edi
  0x0042B5D9: mov      ecx, esi
  0x0042B5DB: call     0x42a470
  0x0042B8C6: mov      ecx, dword ptr [esp + 0x28]
  0x0042B8CA: mov      dword ptr [esp + 0xa8], eax
  0x0042B8D1: push     edi
  0x0042B8D2: lea      eax, [ecx - 1]
  0x0042B8D5: mov      ecx, dword ptr [esp + 0x54]
  0x0042B8D9: push     eax
  0x0042B8DA: call     0x427a40
  0x0042B969: mov      ecx, eax
  0x0042B96B: mov      eax, dword ptr [esp + 0x58]
  0x0042B96F: sub      edi, ecx
  0x0042B971: add      edi, eax
  0x0042B973: push     edi
  0x0042B974: mov      ecx, esi
  0x0042B976: call     0x42a0a0
  0x0042B973: push     edi
  0x0042B974: mov      ecx, esi
  0x0042B976: call     0x42a0a0
  0x0042BA34: sub      ebp, eax
  0x0042BA36: mov      eax, dword ptr [esp + 0x58]
  0x0042BA3A: add      ebp, eax
  0x0042BA3C: push     ebp
  0x0042BA3D: mov      ecx, esi
  0x0042BA3F: mov      dword ptr [esp + 0x60], ebp
  0x0042BA43: call     0x42a0a0
  0x0042BA3C: push     ebp
  0x0042BA3D: mov      ecx, esi
  0x0042BA3F: mov      dword ptr [esp + 0x60], ebp
  0x0042BA43: call     0x42a0a0
  0x0042BEC0: push     ebp
  0x0042BEC1: lea      ecx, [esp + 0xbc]
  0x0042BEC8: call     0x49989e
  0x0042BEB9: mov      ecx, esi
  0x0042BEBB: call     0x42c270
  0x0042B165: lea      ecx, [esp + 0x14]
  0x0042B169: push     ecx
  0x0042B16A: call     dword ptr [0x4a209c]
  0x0042B36D: mov      eax, dword ptr [esp + 0x3c]
  0x0042B371: mov      ecx, dword ptr [esp + 0x74]
  0x0042B375: cmp      eax, ecx
  0x0042B377: jl       0x42b466
  0x0042B46F: mov      ecx, dword ptr [esp + 0x10]
  0x0042B473: mov      eax, edi
  0x0042B475: cmp      edi, ecx
  0x0042B477: jge      0x42b481
  0x0042B260: push     eax
  0x0042B261: push     ebx
  0x0042B262: mov      ecx, esi
  0x0042B264: call     0x42a340
  0x0042B5E0: mov      ebp, eax
  0x0042B5E2: mov      eax, dword ptr [esp + 0x78]
  0x0042B5E6: cmp      ebp, eax
  0x0042B5E8: jl       0x42b843
  0x0042B8DF: push     eax
  0x0042B8E0: mov      eax, dword ptr [esp + 0x2c]
  0x0042B8E4: lea      edx, [esp + 0xac]
  0x0042B8EB: push     0x10
  0x0042B8ED: push     edx
  0x0042B8EE: dec      eax
  0x0042B8EF: push     edi
  0x0042B8F0: mov      edi, dword ptr [esp + 0x3c]
  0x0042B8F4: push     eax
  0x0042B8F5: push     ebp
  0x0042B8F6: lea      ecx, [esp + 0xd4]
  0x0042B8FD: push     edi
  0x0042B8FE: push     ecx
  0x0042B8FF: mov      ecx, esi
  0x0042B901: call     0x42dd60
  0x0042B97B: mov      ecx, dword ptr [esp + 0x50]
  0x0042B97F: mov      dword ptr [esp + 0xac], eax
  0x0042B986: mov      eax, dword ptr [esp + 0x10]
  0x0042B98A: dec      eax
  0x0042B98B: push     eax
  0x0042B98C: push     edi
  0x0042B98D: call     0x427a40
  0x0042BA48: push     eax
  0x0042BA49: push     ebx
  0x0042BA4A: mov      ecx, esi
  0x0042BA4C: call     0x42a470
  0x0042BECD: mov      edx, dword ptr [esp + 0x18c]
  0x0042BED4: lea      ecx, [esp + 0xb8]
  0x0042BEDB: push     edx
  0x0042BEDC: call     0x499471
  0x0042B170: push     eax
  0x0042B171: lea      ecx, [esp + 0x4c]
  0x0042B175: call     0x499e1d
  0x0042B466: mov      ebx, dword ptr [esp + 0x3c]
  0x0042B46A: jmp      0x42b56b
  0x0042B37D: mov      edx, dword ptr [esp + 0xc4]
  0x0042B384: mov      eax, 1
  0x0042B389: lea      ecx, [esp + 0x30]
  0x0042B38D: push     eax
  0x0042B38E: push     ecx
  0x0042B38F: push     edx
  0x0042B390: mov      dword ptr [esp + 0x3c], eax
  0x0042B394: mov      dword ptr [esp + 0x40], eax
  0x0042B398: call     dword ptr [0x4a204c]
  0x0042B479: sub      eax, ecx
  0x0042B47B: mov      ecx, dword ptr [esp + 0x38]
  0x0042B47F: add      eax, ecx
  0x0042B481: push     eax
  0x0042B482: mov      ecx, esi
  0x0042B484: call     0x42a180
  0x0042B481: push     eax
  0x0042B482: mov      ecx, esi
  0x0042B484: call     0x42a180
  0x0042B269: mov      dword ptr [esp + 0x1c], eax
  0x0042B26D: mov      eax, dword ptr [esp + 0x40]
  0x0042B271: lea      ecx, [esp + 0x74]
  0x0042B275: mov      dword ptr [esp + 0x20], eax
  0x0042B279: lea      edx, [esp + 0x14]
  0x0042B27D: push     ecx
  0x0042B27E: lea      eax, [esp + 0x1d0]
  0x0042B285: push     edx
  0x0042B286: push     eax
  0x0042B287: mov      dword ptr [esp + 0x24], ebp
  0x0042B28B: call     dword ptr [0x4a24c8]
  0x0042B843: mov      eax, dword ptr [esp + 0x24]
  0x0042B847: mov      ecx, dword ptr [esp + 0x64]
  0x0042B84B: inc      eax
  0x0042B84C: mov      edi, ebp
  0x0042B84E: cmp      eax, ecx
  0x0042B850: mov      dword ptr [esp + 0x24], eax
  0x0042B854: jl       0x42b5ac
  0x0042B5EE: mov      eax, dword ptr [esp + 0x3c]
  0x0042B5F2: mov      dword ptr [esp + 0x14], 0
  0x0042B5FA: mov      dword ptr [esp + 0x1c], eax
  0x0042B5FE: mov      eax, dword ptr [esp + 0x54]
  0x0042B602: cmp      eax, 1
  0x0042B605: mov      dword ptr [esp + 0x18], edi
  0x0042B609: mov      dword ptr [esp + 0x20], ebp
  0x0042B60D: jne      0x42b6d9
  0x0042B906: mov      edx, dword ptr [esp + 0xa8]
  0x0042B90D: mov      ecx, esi
  0x0042B90F: push     edx
  0x0042B910: push     edi
  0x0042B911: call     0x42a340
  0x0042B992: mov      edx, dword ptr [esp + 0x10]
  0x0042B996: push     eax
  0x0042B997: lea      ecx, [esp + 0xac]
  0x0042B99E: push     8
  0x0042B9A0: lea      eax, [edx - 1]
  0x0042B9A3: push     ecx
  0x0042B9A4: push     eax
  0x0042B9A5: push     edi
  0x0042B9A6: mov      edi, dword ptr [esp + 0x40]
  0x0042B9AA: lea      eax, [esp + 0xd0]
  0x0042B9B1: push     edi
  0x0042B9B2: push     ebp
  0x0042B9B3: push     eax
  0x0042B9B4: mov      ecx, esi
  0x0042B9B6: call     0x42dd60
  0x0042BA51: mov      ecx, eax
  0x0042BA53: mov      eax, dword ptr [esp + 0x78]
  0x0042BA57: cmp      ecx, eax
  0x0042BA59: mov      dword ptr [esp + 0x1ac], ecx
  0x0042BA60: jl       0x42be73
  0x0042BEE1: mov      eax, dword ptr [esp + 0x190]
  0x0042BEE8: lea      ecx, [esp + 0xb8]
  0x0042BEEF: push     eax
  0x0042BEF0: call     0x499471
  0x0042B17A: mov      edi, dword ptr [esp + 0x4c]
  0x0042B17E: lea      eax, [esp + 0x48]
  0x0042B182: mov      edx, dword ptr [esp + 0x6c]
  0x0042B186: lea      ecx, [esp + 0x68]
  0x0042B18A: neg      eax
  0x0042B18C: sbb      eax, eax
  0x0042B18E: push     4
  0x0042B190: and      eax, edi
  0x0042B192: neg      ecx
  0x0042B194: sbb      ecx, ecx
  0x0042B196: push     eax
  0x0042B197: and      ecx, edx
  0x0042B199: push     ecx
  0x0042B19A: push     edx
  0x0042B19B: call     dword ptr [0x4a2110]
  0x0042B56B: mov      eax, dword ptr [esp + 0x44]
  0x0042B56F: inc      edi
  0x0042B570: cmp      edi, eax
  0x0042B572: mov      dword ptr [esp + 0x24], edi
  0x0042B576: jl       0x42b228
  0x0042B39E: lea      eax, [esp + 0x138]
  0x0042B3A5: lea      ecx, [esp + 0xbc]
  0x0042B3AC: push     eax
  0x0042B3AD: call     0x499471
  0x0042B489: push     eax
  0x0042B48A: push     ebx
  0x0042B48B: mov      ecx, esi
  0x0042B48D: call     0x42a340
  0x0042B291: mov      edx, dword ptr [esp + 0x1d0]
  0x0042B298: mov      ecx, dword ptr [esp + 0x1cc]
  0x0042B29F: mov      eax, dword ptr [esp + 0x1d4]
  0x0042B2A6: mov      dword ptr [esp + 0x1e0], edx
  0x0042B2AD: mov      dword ptr [esp + 0x1dc], ecx
  0x0042B2B4: mov      ecx, dword ptr [esp + 0x1d8]
  0x0042B2BB: lea      edx, [esp + 0x1dc]
  0x0042B2C2: mov      dword ptr [esp + 0x1e4], eax
  0x0042B2C9: push     edx
  0x0042B2CA: mov      dword ptr [esp + 0x1ec], ecx
  0x0042B2D1: call     dword ptr [0x4a251c]
  0x0042B5AC: mov      ebx, dword ptr [esp + 0x24]
  0x0042B5B0: xor      ebp, ebp
  0x0042B5B2: cmp      edi, dword ptr [esp + 0x80]
  0x0042B5B9: jg       0x42b85c
  0x0042B85A: xor      ebp, ebp
  0x0042B85C: mov      ebx, dword ptr [esp + 0x40]
  0x0042B860: jmp      0x42b9da
  0x0042B613: lea      ecx, [esp + 0x74]
  0x0042B617: lea      edx, [esp + 0x14]
  0x0042B61B: push     ecx
  0x0042B61C: lea      eax, [esp + 0x18]
  0x0042B620: push     edx
  0x0042B621: push     eax
  0x0042B622: call     dword ptr [0x4a24c8]
  0x0042B6D9: mov      edx, dword ptr [esp + 0xc4]
  0x0042B6E0: lea      ecx, [esp + 0x30]
  0x0042B6E4: push     1
  0x0042B6E6: push     ecx
  0x0042B6E7: push     edx
  0x0042B6E8: mov      dword ptr [esp + 0x3c], 0
  0x0042B6F0: mov      dword ptr [esp + 0x40], edi
  0x0042B6F4: call     dword ptr [0x4a2048]
  0x0042B916: mov      dword ptr [esp + 0x2c], eax
  0x0042B91A: mov      eax, dword ptr [esp + 0x44]
  0x0042B91E: inc      ebx
  0x0042B91F: cmp      ebx, eax
  0x0042B921: jl       0x42b8aa
  0x0042B9BB: mov      ecx, dword ptr [esp + 0xac]
  0x0042B9C2: push     ecx
  0x0042B9C3: push     edi
  0x0042B9C4: mov      ecx, esi
  0x0042B9C6: call     0x42a470
  0x0042BE73: mov      eax, dword ptr [esp + 0x64]
  0x0042BE77: inc      edi
  0x0042BE78: mov      ebx, ecx
  0x0042BE7A: cmp      edi, eax
  0x0042BE7C: mov      dword ptr [esp + 0x88], ebx
  0x0042BE83: mov      dword ptr [esp + 0x24], edi
  0x0042BE87: jl       0x42ba1b
  0x0042BA66: mov      edx, dword ptr [esp + 0x3c]
  0x0042BA6A: mov      eax, dword ptr [esp + 0x10]
  0x0042BA6E: mov      ebx, dword ptr [esp + 0x38]
  0x0042BA72: mov      dword ptr [esp + 0x8c], edx
  0x0042BA79: mov      edx, dword ptr [esp + 0x44]
  0x0042BA7D: sub      eax, ebx
  0x0042BA7F: cmp      eax, edx
  0x0042BA81: mov      dword ptr [esp + 0x2c], eax
  0x0042BA85: jge      0x42be73
  0x0042BEF5: mov      ecx, dword ptr [esp + 0x1ac]
  0x0042BEFC: push     ecx
  0x0042BEFD: lea      ecx, [esp + 0xbc]
  0x0042BF04: call     0x499471
  0x0042B1A1: lea      ecx, [esp + 0x48]
  0x0042B1A5: call     0x499e74
  0x0042B228: mov      eax, dword ptr [esp + 0x2c]
  0x0042B22C: cmp      ebx, dword ptr [esp + 0x7c]
  0x0042B230: jg       0x42b57c
  0x0042B3B2: mov      ebx, dword ptr [esp + 0x40]
  0x0042B3B6: mov      ecx, dword ptr [esp + 0x30]
  0x0042B3BA: push     ebx
  0x0042B3BB: lea      edx, [esp + 0x22c]
  0x0042B3C2: push     ecx
  0x0042B3C3: push     edx
  0x0042B3C4: lea      ecx, [esp + 0xc8]
  0x0042B3CB: call     0x499962
  0x0042B492: mov      edi, eax
  0x0042B494: mov      eax, dword ptr [esp + 0x74]
  0x0042B498: cmp      edi, eax
  0x0042B49A: jl       0x42b565
  0x0042B2D7: test     eax, eax
  0x0042B2D9: jne      0x42b346
  0x0042B628: lea      ecx, [esp + 0x14]
  0x0042B62C: push     ecx
  0x0042B62D: call     dword ptr [0x4a251c]
  0x0042B6FA: mov      eax, dword ptr [esp + 0x34]
  0x0042B6FE: mov      ecx, dword ptr [esp + 0xc4]
  0x0042B705: inc      eax
  0x0042B706: push     1
  0x0042B708: mov      dword ptr [esp + 0x38], eax
  0x0042B70C: lea      eax, [esp + 0x34]
  0x0042B710: push     eax
  0x0042B711: push     ecx
  0x0042B712: call     dword ptr [0x4a204c]
  0x0042B9CB: mov      dword ptr [esp + 0x2c], eax
  0x0042B9CF: mov      eax, dword ptr [esp + 0x64]
  0x0042B9D3: inc      ebx
  0x0042B9D4: cmp      ebx, eax
  0x0042B9D6: jl       0x42b95f
  0x0042BA1B: xor      ebp, ebp
  0x0042BA1D: cmp      ebx, dword ptr [esp + 0x80]
  0x0042BA24: jg       0x42be8f
  0x0042BE8D: xor      ebp, ebp
  0x0042BE8F: push     ebp
  0x0042BE90: lea      ecx, [esp + 0xc0]
  0x0042BE97: call     0x49989e
  0x0042BA8B: mov      ecx, dword ptr [esp + 0x10]
  0x0042BA8F: jmp      0x42ba9d
  0x0042BF09: mov      edx, dword ptr [esp + 0x188]
  0x0042BF10: mov      ecx, esi
  0x0042BF12: push     edx
  0x0042BF13: call     0x42a5f0
  0x0042B1AA: mov      eax, dword ptr [esp + 0xc4]
  0x0042B1B1: lea      edx, [esp + 0x14]
  0x0042B1B5: push     2
  0x0042B1B7: push     edx
  0x0042B1B8: push     eax
  0x0042B1B9: call     dword ptr [0x4a204c]
  0x0042B3D0: mov      eax, dword ptr [esp + 0x34]
  0x0042B3D4: mov      ecx, dword ptr [esp + 0x30]
  0x0042B3D8: push     eax
  0x0042B3D9: push     ecx
  0x0042B3DA: lea      ecx, [esp + 0xc4]
  0x0042B3E1: call     0x4999ae
  0x0042B565: mov      ebx, edi
  0x0042B567: mov      edi, dword ptr [esp + 0x24]
  0x0042B56B: mov      eax, dword ptr [esp + 0x44]
  0x0042B56F: inc      edi
  0x0042B570: cmp      edi, eax
  0x0042B572: mov      dword ptr [esp + 0x24], edi
  0x0042B576: jl       0x42b228
  0x0042B4A0: mov      eax, dword ptr [esp + 0xc4]
  0x0042B4A7: lea      edx, [esp + 0x30]
  0x0042B4AB: push     1
  0x0042B4AD: push     edx
  0x0042B4AE: push     eax
  0x0042B4AF: mov      dword ptr [esp + 0x3c], ebx
  0x0042B4B3: mov      dword ptr [esp + 0x40], ebp
  0x0042B4B7: call     dword ptr [0x4a2048]
  0x0042B2DB: mov      ecx, dword ptr [esp + 0x50]
  0x0042B2DF: lea      eax, [esp + 0xb0]
  0x0042B2E6: push     eax
  0x0042B2E7: push     edi
  0x0042B2E8: call     0x4279a0
  0x0042B346: mov      edi, dword ptr [esp + 0x24]
  0x0042B34A: lea      ecx, [esp + 0x110]
  0x0042B351: push     ecx
  0x0042B352: lea      ecx, [esp + 0xc0]
  0x0042B359: call     0x499471
  0x0042B633: test     eax, eax
  0x0042B635: jne      0x42b843
  0x0042B718: lea      edx, [esp + 0x138]
  0x0042B71F: lea      ecx, [esp + 0xbc]
  0x0042B726: push     edx
  0x0042B727: call     0x499471
  0x0042BA9D: cmp      eax, ecx
  0x0042BA9F: jge      0x42baa9
  0x0042BF18: lea      ecx, [esp + 0xac]
  0x0042BF1F: mov      byte ptr [esp + 0x280], 0xf
  0x0042BF27: call     0x4931d6
  0x0042B1BF: lea      ecx, [esp + 0x174]
  0x0042B1C6: push     ecx
  0x0042B1C7: lea      ecx, [esp + 0xc0]
  0x0042B1CE: call     0x499471
  0x0042B3E6: mov      edx, dword ptr [esp + 0x34]
  0x0042B3EA: mov      eax, dword ptr [esp + 0x3c]
  0x0042B3EE: push     edx
  0x0042B3EF: push     eax
  0x0042B3F0: lea      ecx, [esp + 0xc4]
  0x0042B3F7: call     0x4999ae
  0x0042B4BD: mov      ecx, dword ptr [esp + 0x30]
  0x0042B4C1: mov      edx, dword ptr [esp + 0xc4]
  0x0042B4C8: inc      ecx
  0x0042B4C9: push     1
  0x0042B4CB: mov      dword ptr [esp + 0x34], ecx
  0x0042B4CF: lea      ecx, [esp + 0x34]
  0x0042B4D3: push     ecx
  0x0042B4D4: push     edx
  0x0042B4D5: call     dword ptr [0x4a204c]
  0x0042B2ED: lea      ecx, [esp + 0x90]
  0x0042B2F4: test     ecx, ecx
  0x0042B2F6: je       0x42b312
  0x0042B63B: lea      edx, [esp + 0x174]
  0x0042B642: lea      ecx, [esp + 0xbc]
  0x0042B649: push     edx
  0x0042B64A: call     0x499471
  0x0042B72C: mov      eax, dword ptr [esp + 0x34]
  0x0042B730: lea      ecx, [esp + 0x230]
  0x0042B737: push     eax
  0x0042B738: push     0
  0x0042B73A: push     ecx
  0x0042B73B: lea      ecx, [esp + 0xc8]
  0x0042B742: call     0x499962
  0x0042BAA1: mov      edx, dword ptr [esp + 0x38]
  0x0042BAA5: sub      eax, ecx
  0x0042BAA7: add      eax, edx
  0x0042BAA9: mov      edx, dword ptr [esp + 0x28]
  0x0042BAAD: mov      dword ptr [esp + 0x60], eax
  0x0042BAB1: cmp      ebp, edx
  0x0042BAB3: jge      0x42bac8
  0x0042BAA9: mov      edx, dword ptr [esp + 0x28]
  0x0042BAAD: mov      dword ptr [esp + 0x60], eax
  0x0042BAB1: cmp      ebp, edx
  0x0042BAB3: jge      0x42bac8
  0x0042BF2C: lea      ecx, [esp + 0x1e8]
  0x0042BF33: mov      byte ptr [esp + 0x280], 0xe
  0x0042BF3B: call     0x429730
  0x0042B1D3: mov      eax, dword ptr [esp + 0x20]
  0x0042B1D7: mov      edx, dword ptr [esp + 0x18]
  0x0042B1DB: mov      ecx, dword ptr [esp + 0x1c]
  0x0042B1DF: mov      edi, dword ptr [esp + 0x14]
  0x0042B1E3: sub      eax, edx
  0x0042B1E5: sub      ecx, edi
  0x0042B1E7: push     0xf00021
  0x0042B1EC: push     eax
  0x0042B1ED: push     ecx
  0x0042B1EE: push     edx
  0x0042B1EF: mov      edx, dword ptr [esp + 0xd0]
  0x0042B1F6: push     edi
  0x0042B1F7: push     edx
  0x0042B1F8: call     dword ptr [0x4a2114]
  0x0042B3FC: lea      ecx, [esp + 0x110]
  0x0042B403: push     ecx
  0x0042B404: lea      ecx, [esp + 0xc0]
  0x0042B40B: call     0x499471
  0x0042B4DB: lea      eax, [esp + 0x138]
  0x0042B4E2: lea      ecx, [esp + 0xbc]
  0x0042B4E9: push     eax
  0x0042B4EA: call     0x499471
  0x0042B312: push     ebp
  0x0042B313: lea      ecx, [esp + 0xc0]
  0x0042B31A: call     0x499605
  0x0042B2F8: mov      eax, dword ptr [esp + 0x94]
  0x0042B2FF: cmp      eax, ebp
  0x0042B301: je       0x42b312
  0x0042B64F: mov      eax, dword ptr [esp + 0x20]
  0x0042B653: mov      edx, dword ptr [esp + 0x18]
  0x0042B657: mov      ecx, dword ptr [esp + 0x1c]
  0x0042B65B: mov      edi, dword ptr [esp + 0x14]
  0x0042B65F: sub      eax, edx
  0x0042B661: sub      ecx, edi
  0x0042B663: push     0xf00021
  0x0042B668: push     eax
  0x0042B669: mov      eax, dword ptr [esp + 0xc8]
  0x0042B670: push     ecx
  0x0042B671: push     edx
  0x0042B672: push     edi
  0x0042B673: push     eax
  0x0042B674: call     dword ptr [0x4a2114]
  0x0042B747: mov      edx, dword ptr [esp + 0x34]
  0x0042B74B: mov      eax, dword ptr [esp + 0x3c]
  0x0042B74F: push     edx
  0x0042B750: push     eax
  0x0042B751: lea      ecx, [esp + 0xc4]
  0x0042B758: call     0x4999ae
  0x0042BAB5: cmp      eax, ecx
  0x0042BAB7: jge      0x42babf
  0x0042BAC8: cmp      eax, ecx
  0x0042BACA: lea      eax, [esp + 0x128]
  0x0042BAD1: jl       0x42bada
  0x0042BF40: mov      eax, dword ptr [esp + 0x178]
  0x0042BF47: cmp      eax, ebp
  0x0042BF49: je       0x42bf54
  0x0042B1FE: jmp      0x42b57c
  0x0042B410: push     ebx
  0x0042B411: lea      edx, [esp + 0x23c]
  0x0042B418: push     ebp
  0x0042B419: push     edx
  0x0042B41A: lea      ecx, [esp + 0xc8]
  0x0042B421: call     0x499962
  0x0042B4EF: mov      ecx, dword ptr [esp + 0x40]
  0x0042B4F3: mov      edx, dword ptr [esp + 0x30]
  0x0042B4F7: push     ecx
  0x0042B4F8: lea      eax, [esp + 0x244]
  0x0042B4FF: push     edx
  0x0042B500: push     eax
  0x0042B501: lea      ecx, [esp + 0xc8]
  0x0042B508: call     0x499962
  0x0042B31F: mov      eax, dword ptr [esp + 0xb0]
  0x0042B326: lea      edx, [esp + 0x14]
  0x0042B32A: push     0x825
  0x0042B32F: push     edx
  0x0042B330: mov      ecx, dword ptr [eax - 8]
  0x0042B333: push     ecx
  0x0042B334: push     eax
  0x0042B335: mov      eax, dword ptr [esp + 0xcc]
  0x0042B33C: lea      ecx, [esp + 0xcc]
  0x0042B343: call     dword ptr [eax + 0x68]
  0x0042B303: mov      edx, dword ptr [esp + 0xc0]
  0x0042B30A: push     eax
  0x0042B30B: push     edx
  0x0042B30C: call     dword ptr [0x4a2120]
  0x0042B67A: mov      edx, dword ptr [esp + 0xc4]
  0x0042B681: lea      ecx, [esp + 0x14]
  0x0042B685: push     2
  0x0042B687: push     ecx
  0x0042B688: push     edx
  0x0042B689: call     dword ptr [0x4a2048]
  0x0042B75D: lea      ecx, [esp + 0x110]
  0x0042B764: push     ecx
  0x0042B765: lea      ecx, [esp + 0xc0]
  0x0042B76C: call     0x499471
  0x0042BAB9: lea      eax, [esp + 0x74]
  0x0042BABD: jmp      0x42bada
  0x0042BABF: lea      eax, [esp + 0x118]
  0x0042BAC6: jmp      0x42bada
  0x0042BADA: mov      ecx, dword ptr [eax]
  0x0042BADC: mov      edx, dword ptr [eax + 4]
  0x0042BADF: mov      edi, dword ptr [esp + 0x60]
  0x0042BAE3: mov      ebp, dword ptr [esp + 0x5c]
  0x0042BAE7: mov      dword ptr [esp + 0x198], ecx
  0x0042BAEE: mov      ecx, dword ptr [eax + 8]
  0x0042BAF1: mov      ebx, dword ptr [esp + 0x88]
  0x0042BAF8: mov      dword ptr [esp + 0x1a0], ecx
  0x0042BAFF: push     0
  0x0042BB01: mov      dword ptr [esp + 0x1a0], edx
  0x0042BB08: mov      edx, dword ptr [eax + 0xc]
  0x0042BB0B: mov      eax, dword ptr [esp + 0x90]
  0x0042BB12: push     edi
  0x0042BB13: lea      ecx, [esp + 0x1f4]
  0x0042BB1A: push     ebp
  0x0042BB1B: push     ecx
  0x0042BB1C: mov      ecx, dword ptr [esp + 0x60]
  0x0042BB20: mov      dword ptr [esp + 0x1b4], edx
  0x0042BB27: mov      dword ptr [esp + 0x94], eax
  0x0042BB2E: call     0x427a00
  0x0042BAD3: lea      eax, [esp + 0x98]
  0x0042BADA: mov      ecx, dword ptr [eax]
  0x0042BADC: mov      edx, dword ptr [eax + 4]
  0x0042BADF: mov      edi, dword ptr [esp + 0x60]
  0x0042BAE3: mov      ebp, dword ptr [esp + 0x5c]
  0x0042BAE7: mov      dword ptr [esp + 0x198], ecx
  0x0042BAEE: mov      ecx, dword ptr [eax + 8]
  0x0042BAF1: mov      ebx, dword ptr [esp + 0x88]
  0x0042BAF8: mov      dword ptr [esp + 0x1a0], ecx
  0x0042BAFF: push     0
  0x0042BB01: mov      dword ptr [esp + 0x1a0], edx
  0x0042BB08: mov      edx, dword ptr [eax + 0xc]
  0x0042BB0B: mov      eax, dword ptr [esp + 0x90]
  0x0042BB12: push     edi
  0x0042BB13: lea      ecx, [esp + 0x1f4]
  0x0042BB1A: push     ebp
  0x0042BB1B: push     ecx
  0x0042BB1C: mov      ecx, dword ptr [esp + 0x60]
  0x0042BB20: mov      dword ptr [esp + 0x1b4], edx
  0x0042BB27: mov      dword ptr [esp + 0x94], eax
  0x0042BB2E: call     0x427a00
  0x0042BF54: mov      eax, dword ptr [esp + 0x160]
  0x0042BF5B: cmp      eax, ebp
  0x0042BF5D: je       0x42bf68
  0x0042BF4B: push     eax
  0x0042BF4C: call     0x492f40
  0x0042B426: push     ebp
  0x0042B427: push     ebp
  0x0042B428: lea      ecx, [esp + 0xc4]
  0x0042B42F: call     0x4999ae
  0x0042B50D: mov      ecx, dword ptr [esp + 0x30]
  0x0042B511: push     ebp
  0x0042B512: push     ecx
  0x0042B513: lea      ecx, [esp + 0xc4]
  0x0042B51A: call     0x4999ae
  0x0042B68F: lea      eax, [esp + 0x14]
  0x0042B693: push     eax
  0x0042B694: call     dword ptr [0x4a209c]
  0x0042B771: mov      edx, dword ptr [esp + 0x3c]
  0x0042B775: push     ebp
  0x0042B776: push     edx
  0x0042B777: lea      ecx, [esp + 0xc4]
  0x0042B77E: call     0x4999ae
  0x0042BB33: lea      ecx, [esp + 0x1ec]
  0x0042BB3A: call     0x4297e0
  0x0042BF68: mov      esi, 0x2f96400
  0x0042BF6D: mov      dword ptr [esp + 0x1c0], esi
  0x0042BF74: lea      ecx, [esp + 0x1c0]
  0x0042BF7B: mov      byte ptr [esp + 0x280], 0x13
  0x0042BF83: call     0x499e74
  0x0042BF5F: push     eax
  0x0042BF60: call     0x492f40
  0x0042BF51: add      esp, 4
  0x0042BF54: mov      eax, dword ptr [esp + 0x160]
  0x0042BF5B: cmp      eax, ebp
  0x0042BF5D: je       0x42bf68
  0x0042B434: mov      eax, dword ptr [esp + 0x3c]
  0x0042B438: push     ebp
  0x0042B439: push     eax
  0x0042B43A: lea      ecx, [esp + 0xc4]
  0x0042B441: call     0x4999ae
  0x0042B51F: lea      edx, [esp + 0x110]
  0x0042B526: lea      ecx, [esp + 0xbc]
  0x0042B52D: push     edx
  0x0042B52E: call     0x499471
  0x0042B69A: push     eax
  0x0042B69B: lea      ecx, [esp + 0x4c]
  0x0042B69F: call     0x499e1d
  0x0042B783: push     ebp
  0x0042B784: push     0
  0x0042B786: lea      ecx, [esp + 0xc4]
  0x0042B78D: call     0x4999ae
  0x0042BB3F: test     eax, 0x3c0000
  0x0042BB44: je       0x42bc9f
  0x0042BF88: mov      dword ptr [esp + 0x10c], esi
  0x0042BF8F: lea      ecx, [esp + 0x10c]
  0x0042BF96: mov      byte ptr [esp + 0x280], 0x14
  0x0042BF9E: call     0x499e74
  0x0042BF65: add      esp, 4
  0x0042BF68: mov      esi, 0x2f96400
  0x0042BF6D: mov      dword ptr [esp + 0x1c0], esi
  0x0042BF74: lea      ecx, [esp + 0x1c0]
  0x0042BF7B: mov      byte ptr [esp + 0x280], 0x13
  0x0042BF83: call     0x499e74
  0x0042B446: mov      ecx, dword ptr [esp + 0x3c]
  0x0042B44A: push     ebx
  0x0042B44B: push     ecx
  0x0042B44C: lea      ecx, [esp + 0xc4]
  0x0042B453: call     0x4999ae
  0x0042B533: push     ebp
  0x0042B534: push     edi
  0x0042B535: lea      ecx, [esp + 0xc4]
  0x0042B53C: call     0x4999ae
  0x0042B6A4: mov      edi, dword ptr [esp + 0x4c]
  0x0042B6A8: lea      eax, [esp + 0x48]
  0x0042B6AC: mov      edx, dword ptr [esp + 0x6c]
  0x0042B6B0: lea      ecx, [esp + 0x68]
  0x0042B6B4: neg      eax
  0x0042B6B6: sbb      eax, eax
  0x0042B6B8: push     4
  0x0042B6BA: and      eax, edi
  0x0042B6BC: neg      ecx
  0x0042B6BE: sbb      ecx, ecx
  0x0042B6C0: push     eax
  0x0042B6C1: and      ecx, edx
  0x0042B6C3: push     ecx
  0x0042B6C4: push     edx
  0x0042B6C5: call     dword ptr [0x4a2110]
  0x0042B792: push     edi
  0x0042B793: push     0
  0x0042B795: lea      ecx, [esp + 0xc4]
  0x0042B79C: call     0x4999ae
  0x0042BC9F: cmp      dword ptr [esp + 0x54], 2
  0x0042BCA4: jne      0x42bcf9
  0x0042BB4A: lea      ecx, [esp + 0x1ec]
  0x0042BB51: call     0x4297e0
  0x0042BFA3: mov      dword ptr [esp + 0x134], esi
  0x0042BFAA: lea      ecx, [esp + 0x134]
  0x0042BFB1: mov      byte ptr [esp + 0x280], 0x15
  0x0042BFB9: call     0x499e74
  0x0042B458: push     ebx
  0x0042B459: push     ebp
  0x0042B45A: lea      ecx, [esp + 0xc4]
  0x0042B461: call     0x4999ae
  0x0042B541: mov      eax, dword ptr [esp + 0x40]
  0x0042B545: lea      ecx, [esp + 0xbc]
  0x0042B54C: push     eax
  0x0042B54D: push     edi
  0x0042B54E: call     0x4999ae
  0x0042B6CB: lea      ecx, [esp + 0x48]
  0x0042B6CF: call     0x499e74
  0x0042B7A1: inc      ebx
  0x0042B7A2: lea      eax, [esp + 0x248]
  0x0042B7A9: push     ebx
  0x0042B7AA: push     0x2fb0400
  0x0042B7AF: push     eax
  0x0042B7B0: call     dword ptr [0x4a258c]
  0x0042BCA6: mov      ecx, dword ptr [esp + 0x28]
  0x0042BCAA: mov      eax, dword ptr [esp + 0x5c]
  0x0042BCAE: cmp      eax, ecx
  0x0042BCB0: jge      0x42bcd2
  0x0042BCF9: cmp      ebp, -1
  0x0042BCFC: je       0x42bde3
  0x0042BB56: test     eax, 0x40000
  0x0042BB5B: je       0x42bbab
  0x0042BFBE: mov      dword ptr [esp + 0x170], esi
  0x0042BFC5: lea      ecx, [esp + 0x170]
  0x0042BFCC: mov      byte ptr [esp + 0x280], 0x16
  0x0042BFD4: call     0x499e74
  0x0042B553: mov      ecx, dword ptr [esp + 0x40]
  0x0042B557: push     ecx
  0x0042B558: push     ebx
  0x0042B559: lea      ecx, [esp + 0xc4]
  0x0042B560: call     0x4999ae
  0x0042B6D4: jmp      0x42b843
  0x0042B7B6: lea      ecx, [esp + 0x9c]
  0x0042B7BD: add      esp, 0xc
  0x0042B7C0: test     ecx, ecx
  0x0042B7C2: je       0x42b7de
  0x0042BCB2: mov      edx, dword ptr [esp + 0x10]
  0x0042BCB6: mov      ecx, dword ptr [esp + 0x60]
  0x0042BCBA: xor      eax, eax
  0x0042BCBC: cmp      ecx, edx
  0x0042BCBE: setl     al
  0x0042BCC1: dec      eax
  0x0042BCC2: lea      ecx, [esp + 0x150]
  0x0042BCC9: and      eax, ecx
  0x0042BCCB: jmp      0x42bcec
  0x0042BCD2: mov      edx, dword ptr [esp + 0x10]
  0x0042BCD6: mov      eax, dword ptr [esp + 0x60]
  0x0042BCDA: cmp      eax, edx
  0x0042BCDC: lea      eax, [esp + 0x15c]
  0x0042BCE3: jl       0x42bcec
  0x0042BDE3: cmp      dword ptr [esp + 0x54], 2
  0x0042BDE8: jne      0x42be30
  0x0042BD02: cmp      dword ptr [esp + 0x54], 1
  0x0042BD07: jne      0x42bdbd
  0x0042BBAB: lea      ecx, [esp + 0x1ec]
  0x0042BBB2: call     0x4297e0
  0x0042BB5D: mov      edx, dword ptr [esp + 0x5c]
  0x0042BB61: mov      ecx, dword ptr [esp + 0x50]
  0x0042BB65: dec      edi
  0x0042BB66: push     0
  0x0042BB68: push     edi
  0x0042BB69: lea      eax, [esp + 0x1f4]
  0x0042BB70: push     edx
  0x0042BB71: push     eax
  0x0042BB72: call     0x427a00
  0x0042BFD9: mov      dword ptr [esp + 0x8c], esi
  0x0042BFE0: lea      ecx, [esp + 0x8c]
  0x0042BFE7: mov      byte ptr [esp + 0x280], 0x17
  0x0042BFEF: call     0x499e74
  0x0042B7DE: push     0
  0x0042B7E0: lea      ecx, [esp + 0xc0]
  0x0042B7E7: call     0x499605
  0x0042B7C4: mov      eax, dword ptr [esp + 0x94]
  0x0042B7CB: test     eax, eax
  0x0042B7CD: je       0x42b7de
  0x0042BCEC: push     eax
  0x0042BCED: lea      ecx, [esp + 0xc0]
  0x0042BCF4: call     0x49989e
  0x0042BCE5: lea      eax, [esp + 0x148]
  0x0042BCEC: push     eax
  0x0042BCED: lea      ecx, [esp + 0xc0]
  0x0042BCF4: call     0x49989e
  0x0042BDEA: mov      eax, dword ptr [esp + 0x144]
  0x0042BDF1: mov      ecx, dword ptr [esp + 0x60]
  0x0042BDF5: dec      eax
  0x0042BDF6: lea      edx, [esp + 0x198]
  0x0042BDFD: neg      eax
  0x0042BDFF: sbb      eax, eax
  0x0042BE01: push     0
  0x0042BE03: and      eax, 6
  0x0042BE06: push     edx
  0x0042BE07: mov      edx, dword ptr [esp + 0x64]
  0x0042BE0B: add      eax, 0x18
  0x0042BE0E: push     eax
  0x0042BE0F: mov      eax, dword ptr [esp + 0x94]
  0x0042BE16: push     ecx
  0x0042BE17: mov      ecx, dword ptr [esp + 0x9c]
  0x0042BE1E: push     edx
  0x0042BE1F: push     eax
  0x0042BE20: lea      edx, [esp + 0xd4]
  0x0042BE27: push     ecx
  0x0042BE28: push     edx
  0x0042BE29: mov      ecx, esi
  0x0042BE2B: call     0x42d420
  0x0042BE30: mov      eax, dword ptr [esp + 0x60]
  0x0042BE34: mov      ecx, esi
  0x0042BE36: push     eax
  0x0042BE37: call     0x42a180
  0x0042BD0D: mov      edx, dword ptr [esp + 0x84]
  0x0042BD14: lea      eax, [esp + 0x14]
  0x0042BD18: lea      ecx, [esp + 0x198]
  0x0042BD1F: push     eax
  0x0042BD20: push     ecx
  0x0042BD21: push     0x20
  0x0042BD23: push     edi
  0x0042BD24: push     ebp
  0x0042BD25: push     ebx
  0x0042BD26: lea      eax, [esp + 0xd4]
  0x0042BD2D: push     edx
  0x0042BD2E: push     eax
  0x0042BD2F: mov      ecx, esi
  0x0042BD31: call     0x42d420
  0x0042BDBD: mov      eax, dword ptr [esp + 0x84]
  0x0042BDC4: lea      edx, [esp + 0x198]
  0x0042BDCB: push     0
  0x0042BDCD: push     edx
  0x0042BDCE: push     1
  0x0042BDD0: push     edi
  0x0042BDD1: push     ebp
  0x0042BDD2: push     ebx
  0x0042BDD3: lea      ecx, [esp + 0xd4]
  0x0042BDDA: push     eax
  0x0042BDDB: push     ecx
  0x0042BDDC: mov      ecx, esi
  0x0042BDDE: call     0x42d420
  0x0042BBB7: test     eax, 0x80000
  0x0042BBBC: je       0x42bbfc
  0x0042BB77: push     edi
  0x0042BB78: mov      ecx, esi
  0x0042BB7A: call     0x42a180
  0x0042BFF4: mov      dword ptr [esp + 0x44], esi
  0x0042BFF8: lea      ecx, [esp + 0x44]
  0x0042BFFC: mov      byte ptr [esp + 0x280], 0x18
  0x0042C004: call     0x499e74
  0x0042B7EC: lea      eax, [esp + 0x248]
  0x0042B7F3: lea      ecx, [esp + 0x158]
  0x0042B7FA: push     eax
  0x0042B7FB: call     0x493244
  0x0042B7CF: mov      edx, dword ptr [esp + 0xc0]
  0x0042B7D6: push     eax
  0x0042B7D7: push     edx
  0x0042B7D8: call     dword ptr [0x4a2120]
  0x0042BE3C: mov      ecx, dword ptr [esp + 0x8c]
  0x0042BE43: push     eax
  0x0042BE44: push     ecx
  0x0042BE45: mov      ecx, esi
  0x0042BE47: call     0x42a340
  0x0042BD36: lea      ecx, [esp + 0x198]
  0x0042BD3D: lea      edx, [esp + 0x14]
  0x0042BD41: push     ecx
  0x0042BD42: lea      eax, [esp + 0x18]
  0x0042BD46: push     edx
  0x0042BD47: push     eax
  0x0042BD48: call     dword ptr [0x4a24c8]
  0x0042BBFC: mov      edx, dword ptr [esp + 0x168]
  0x0042BC03: mov      dword ptr [esp + 0x140], 0
  0x0042BC0E: test     edx, edx
  0x0042BC10: jle      0x42bc4f
  0x0042BBBE: mov      ecx, dword ptr [esp + 0x50]
  0x0042BBC2: dec      ebp
  0x0042BBC3: push     0
  0x0042BBC5: push     edi
  0x0042BBC6: lea      edx, [esp + 0x1f4]
  0x0042BBCD: push     ebp
  0x0042BBCE: push     edx
  0x0042BBCF: call     0x427a00
  0x0042BB7F: mov      ecx, dword ptr [esp + 0x84]
  0x0042BB86: neg      eax
  0x0042BB88: push     eax
  0x0042BB89: push     ecx
  0x0042BB8A: mov      ecx, esi
  0x0042BB8C: call     0x42a340
  0x0042C009: mov      dword ptr [esp + 0x64], esi
  0x0042C00D: lea      ecx, [esp + 0x64]
  0x0042C011: mov      byte ptr [esp + 0x280], 0x19
  0x0042C019: call     0x499e74
  0x0042B800: mov      eax, dword ptr [esp + 0x158]
  0x0042B807: lea      edx, [esp + 0x14]
  0x0042B80B: push     0x825
  0x0042B810: push     edx
  0x0042B811: mov      ecx, dword ptr [eax - 8]
  0x0042B814: mov      byte ptr [esp + 0x28c], 0x12
  0x0042B81C: push     ecx
  0x0042B81D: push     eax
  0x0042B81E: mov      eax, dword ptr [esp + 0xcc]
  0x0042B825: lea      ecx, [esp + 0xcc]
  0x0042B82C: call     dword ptr [eax + 0x68]
  0x0042BE4C: mov      ecx, dword ptr [esp + 0x44]
  0x0042BE50: mov      dword ptr [esp + 0x8c], eax
  0x0042BE57: mov      eax, dword ptr [esp + 0x2c]
  0x0042BE5B: inc      eax
  0x0042BE5C: cmp      eax, ecx
  0x0042BE5E: mov      dword ptr [esp + 0x2c], eax
  0x0042BE62: jl       0x42ba91
  0x0042BD4E: lea      ecx, [esp + 0x14]
  0x0042BD52: push     ecx
  0x0042BD53: call     dword ptr [0x4a251c]
  0x0042BC4F: cmp      ebp, -1
  0x0042BC52: je       0x42bc9f
  0x0042BC12: mov      eax, dword ptr [esp + 0x17c]
  0x0042BC19: mov      ecx, dword ptr [esp + 0x164]
  0x0042BC20: sub      ecx, eax
  0x0042BC22: mov      dword ptr [esp + 0x70], ecx
  0x0042BC26: jmp      0x42bc2c
  0x0042BBD4: push     ebp
  0x0042BBD5: mov      ecx, esi
  0x0042BBD7: call     0x42a0a0
  0x0042BB91: lea      ecx, [esp + 0x1ec]
  0x0042BB98: mov      dword ptr [esp + 0x84], eax
  0x0042BB9F: call     0x4297e0
  0x0042C01E: mov      dword ptr [esp + 0x158], esi
  0x0042C025: lea      ecx, [esp + 0x158]
  0x0042C02C: mov      byte ptr [esp + 0x280], 0x1a
  0x0042C034: call     0x499e74
  0x0042B82F: lea      ecx, [esp + 0x158]
  0x0042B836: mov      byte ptr [esp + 0x284], 0x10
  0x0042B83E: call     0x4931d6
  0x0042BA91: mov      ecx, dword ptr [esp + 0x10]
  0x0042BA95: mov      ebp, dword ptr [esp + 0x5c]
  0x0042BA99: mov      eax, dword ptr [esp + 0x2c]
  0x0042BA9D: cmp      eax, ecx
  0x0042BA9F: jge      0x42baa9
  0x0042BE68: mov      edi, dword ptr [esp + 0x24]
  0x0042BE6C: mov      ecx, dword ptr [esp + 0x1ac]
  0x0042BE73: mov      eax, dword ptr [esp + 0x64]
  0x0042BE77: inc      edi
  0x0042BE78: mov      ebx, ecx
  0x0042BE7A: cmp      edi, eax
  0x0042BE7C: mov      dword ptr [esp + 0x88], ebx
  0x0042BE83: mov      dword ptr [esp + 0x24], edi
  0x0042BE87: jl       0x42ba1b
  0x0042BD59: test     eax, eax
  0x0042BD5B: jne      0x42be30
  0x0042BC54: mov      dword ptr [esp + 0x70], edx
  0x0042BC58: inc      edx
  0x0042BC59: push     -1
  0x0042BC5B: push     edx
  0x0042BC5C: lea      ecx, [esp + 0x16c]
  0x0042BC63: call     0x415c70
  0x0042BC2C: cmp      dword ptr [ecx + eax], ebp
  0x0042BC2F: jne      0x42bc39
  0x0042BBDC: neg      eax
  0x0042BBDE: push     eax
  0x0042BBDF: push     ebx
  0x0042BBE0: mov      ecx, esi
  0x0042BBE2: call     0x42a470
  0x0042BBA4: test     eax, 0x40000
  0x0042BBA9: jne      0x42bb5d
  0x0042C039: mov      dword ptr [esp + 0x14c], esi
  0x0042C040: lea      ecx, [esp + 0x14c]
  0x0042C047: mov      byte ptr [esp + 0x280], 0x1b
  0x0042C04F: call     0x499e74
  0x0042BD61: mov      eax, dword ptr [esp + 0xc4]
  0x0042BD68: lea      edx, [esp + 0x14]
  0x0042BD6C: push     2
  0x0042BD6E: push     edx
  0x0042BD6F: push     eax
  0x0042BD70: call     dword ptr [0x4a2048]
  0x0042BC68: mov      eax, dword ptr [esp + 0x164]
  0x0042BC6F: mov      ecx, dword ptr [esp + 0x70]
  0x0042BC73: push     -1
  0x0042BC75: mov      dword ptr [eax + ecx*4], ebp
  0x0042BC78: mov      eax, dword ptr [esp + 0x184]
  0x0042BC7F: mov      dword ptr [esp + 0x74], eax
  0x0042BC83: inc      eax
  0x0042BC84: push     eax
  0x0042BC85: lea      ecx, [esp + 0x184]
  0x0042BC8C: call     0x415c70
  0x0042BC31: cmp      dword ptr [eax], edi
  0x0042BC33: je       0x42bccd
  0x0042BC39: mov      ecx, dword ptr [esp + 0x140]
  0x0042BC40: add      eax, 4
  0x0042BC43: inc      ecx
  0x0042BC44: cmp      ecx, edx
  0x0042BC46: mov      dword ptr [esp + 0x140], ecx
  0x0042BC4D: jl       0x42bc28
  0x0042BBE7: lea      ecx, [esp + 0x1ec]
  0x0042BBEE: mov      ebx, eax
  0x0042BBF0: call     0x4297e0
  0x0042C054: mov      dword ptr [esp + 0x144], esi
  0x0042C05B: lea      ecx, [esp + 0x144]
  0x0042C062: mov      byte ptr [esp + 0x280], 0x1c
  0x0042C06A: call     0x499e74
  0x0042BD76: lea      ecx, [esp + 0x14]
  0x0042BD7A: push     ecx
  0x0042BD7B: call     dword ptr [0x4a209c]
  0x0042BC91: mov      edx, dword ptr [esp + 0x17c]
  0x0042BC98: mov      eax, dword ptr [esp + 0x70]
  0x0042BC9C: mov      dword ptr [edx + eax*4], edi
  0x0042BC9F: cmp      dword ptr [esp + 0x54], 2
  0x0042BCA4: jne      0x42bcf9
  0x0042BCCD: or       ebp, 0xffffffff
  0x0042BCD0: jmp      0x42bc9f
  0x0042BC28: mov      ecx, dword ptr [esp + 0x70]
  0x0042BC2C: cmp      dword ptr [ecx + eax], ebp
  0x0042BC2F: jne      0x42bc39
  0x0042BBF5: test     eax, 0x80000
  0x0042BBFA: jne      0x42bbbe
  0x0042C06F: lea      ecx, [esp + 0x1a4]
  0x0042C076: call     0x42a090
  0x0042BD81: push     eax
  0x0042BD82: lea      ecx, [esp + 0x4c]
  0x0042BD86: call     0x499e1d
  0x0042C07B: jmp      0x42c0ce
  0x0042BD8B: mov      ebp, dword ptr [esp + 0x4c]
  0x0042BD8F: lea      eax, [esp + 0x48]
  0x0042BD93: mov      edx, dword ptr [esp + 0x6c]
  0x0042BD97: lea      ecx, [esp + 0x68]
  0x0042BD9B: neg      eax
  0x0042BD9D: sbb      eax, eax
  0x0042BD9F: push     4
  0x0042BDA1: and      eax, ebp
  0x0042BDA3: neg      ecx
  0x0042BDA5: sbb      ecx, ecx
  0x0042BDA7: push     eax
  0x0042BDA8: and      ecx, edx
  0x0042BDAA: push     ecx
  0x0042BDAB: push     edx
  0x0042BDAC: call     dword ptr [0x4a2110]
  0x0042BDB2: lea      ecx, [esp + 0x48]
  0x0042BDB6: call     0x499e74
  0x0042BDBB: jmp      0x42be30

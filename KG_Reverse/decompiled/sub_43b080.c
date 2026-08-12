/**
 * Function: sub_43b080
 * Address: 0x0043B080
 * Blocks: 130
 * Instructions: 645
 * Analyzed with angr + capstone
 */
void* sub_43b080(void) {

  /* Block 1 @ 0x0043B080 */
  // mov eax, dword ptr fs:[0]
  // push -1
  // push 0x4a0c72
  // push eax
  // mov dword ptr fs:[0], esp
  // sub esp, 0x114
  // push ebx
  // push ebp
  // push esi
  // push edi
  // mov esi, ecx
  // call 0x00494512
  call(0x00494512);
  /* Block 2 @ 0x0043B0A6 */
  // xor ebp, ebp
  // mov dword ptr [0x2fe8d28], ebp
  // mov eax, dword ptr [esi + 0xdc]
  // CMP eax, 1 (set flags)
  // if (not equal) goto 0x43b0c2
  /* Block 3 @ 0x0043B0B9 */
  // push 5
  // mov ecx, esi
  // call 0x00497580
  call(0x00497580);
  /* Block 4 @ 0x0043B0C2 */
  // mov eax, dword ptr [esi + 0xb4]
  // push 0x640000
  // push ebp
  // push 0x401
  // push eax
  // call dword ptr [0x4a2564]
  call(dword ptr [0x4a2564]);
  /* Block 5 @ 0x0043B0DA */
  // lea edi, [esi + 0xe0]
  // mov ecx, edi
  // call 0x00493161
  call(0x00493161);
  /* Block 6 @ 0x0043B0E7 */
  // mov ecx, dword ptr [esi + 0xd4]
  // call 0x0042A650
  call(0x0042A650);
  /* Block 7 @ 0x0043B0F2 */
  // lea ecx, [esp + 0xa4]
  // mov ebx, eax
  // call 0x00429460
  call(0x00429460);
  /* Block 8 @ 0x0043B100 */
  // mov ecx, ebx
  // mov dword ptr [esp + 0x12c], ebp
  // call 0x00428970
  call(0x00428970);
  /* Block 9 @ 0x0043B10E */
  // CMP eax, ebp (set flags)
  // if (equal) goto 0x43b11f
  /* Block 10 @ 0x0043B11F */
  // mov eax, dword ptr [esi + 0xd8]
  // xor ecx, ecx
  // mov dword ptr [esp + 0x58], ecx
  // CMP eax, ebp (set flags)
  // mov dword ptr [esp + 0x5c], ecx
  // mov dword ptr [esp + 0x58], 0x14
  // mov dword ptr [esp + 0x60], ecx
  // mov dword ptr [esp + 0x5c], 0x2fb1204
  // mov dword ptr [esp + 0x64], ecx
  // mov dword ptr [esp + 0x68], ecx
  // if (equal) goto 0x43b153
  /* Block 11 @ 0x0043B112 */
  // push eax
  // lea ecx, [esp + 0xa8]
  // call 0x00429600
  call(0x00429600);
  /* Block 12 @ 0x0043B153 */
  // mov edx, dword ptr [0x2fd8088]
  // mov dword ptr [esp + 0x10], edx
  // mov eax, dword ptr [esp + 0xc0]
  // mov byte ptr [esp + 0x12c], 1
  // CMP eax, 1 (set flags)
  // if (not equal) goto 0x43b1c4
  /* Block 13 @ 0x0043B14F */
  // mov dword ptr [esp + 0x5c], eax
  // mov edx, dword ptr [0x2fd8088]
  // mov dword ptr [esp + 0x10], edx
  // mov eax, dword ptr [esp + 0xc0]
  // mov byte ptr [esp + 0x12c], 1
  // CMP eax, 1 (set flags)
  // if (not equal) goto 0x43b1c4
  /* Block 14 @ 0x0043B171 */
  // mov eax, dword ptr [esp + 0xc4]
  // CMP dword ptr [eax - 8], ebp (set flags)
  // if (not equal) goto 0x43b184
  /* Block 15 @ 0x0043B1C4 */
  // push 0x2fb11d8
  // lea ecx, [esp + 0x14]
  // mov dword ptr [esp + 0x64], ebp
  // call 0x00493313
  call(0x00493313);
  /* Block 16 @ 0x0043B17D */
  // push 0x2fb11e8
  goto 0x43b1ea;
  /* Block 17 @ 0x0043B184 */
  // mov dword ptr [esp + 0x60], eax
  // lea eax, [esp + 0xc4]
  // push eax
  // lea ecx, [esp + 0x24]
  // push 0x2fb11e0
  // push ecx
  // call 0x00493493
  call(0x00493493);
  /* Block 18 @ 0x0043B1D6 */
  // mov ecx, ebx
  // call 0x00428980
  call(0x00428980);
  /* Block 19 @ 0x0043B1EA */
  // mov ecx, edi
  // call 0x00493313
  call(0x00493313);
  /* Block 20 @ 0x0043B19F */
  // push eax
  // lea ecx, [esp + 0x14]
  // mov byte ptr [esp + 0x130], 2
  // call 0x004932C3
  call(0x004932C3);
  /* Block 21 @ 0x0043B1DD */
  // CMP eax, ebp (set flags)
  // mov dword ptr [esp + 0x24], eax
  // if (not equal) goto 0x43b1ff
  /* Block 22 @ 0x0043B1F1 */
  // push -1
  // mov ecx, esi
  // call 0x004943EA
  call(0x004943EA);
  /* Block 23 @ 0x0043B1B1 */
  // lea ecx, [esp + 0x20]
  // mov byte ptr [esp + 0x12c], 1
  // call 0x004931D6
  call(0x004931D6);
  /* Block 24 @ 0x0043B1E5 */
  // push 0x2fb11c4
  // mov ecx, edi
  // call 0x00493313
  call(0x00493313);
  /* Block 25 @ 0x0043B1FF */
  // lea edx, [esp + 0x7c]
  // lea ecx, [esp + 0x6c]
  // push edx
  // push ecx
  // lea edx, [esp + 0xa0]
  // lea ecx, [esp + 0x88]
  // push edx
  // push ecx
  // lea edx, [esp + 0x80]
  // lea ecx, [esp + 0xac]
  // push edx
  // push ecx
  // lea edx, [esp + 0x8c]
  // lea ecx, [esp + 0x90]
  // push edx
  // push ecx
  // push eax
  // call 0x00442A30
  call(0x00442A30);
  /* Block 26 @ 0x0043B1FA */
  goto 0x43b7ba;
  /* Block 27 @ 0x0043B1C2 */
  goto 0x43b1d6;
  /* Block 28 @ 0x0043B23F */
  // mov ebp, dword ptr [esp + 0xc0]
  // mov eax, dword ptr [esp + 0xd0]
  // mov edi, dword ptr [esp + 0xc8]
  // mov edx, dword ptr [esp + 0xd4]
  // mov ecx, dword ptr [esp + 0xcc]
  // sub ebp, eax
  // sub ebp, edi
  // mov edi, dword ptr [esp + 0x94]
  // sub edi, edx
  // xor eax, eax
  // add esp, 0x24
  // sub edi, ecx
  // mov dword ptr [esp + 0x40], eax
  // mov dword ptr [esp + 0x48], eax
  // mov dword ptr [esp + 0x44], eax
  // mov dword ptr [esp + 0x4c], 5
  // lea edx, [esp + 0x40]
  // lea eax, [esp + 0xa4]
  // push edx
  // push eax
  // push edi
  // push ebp
  // mov ecx, ebx
  // mov byte ptr [esp + 0x13c], 3
  // call 0x00428DA0
  call(0x00428DA0);
  /* Block 29 @ 0x0043B7BA */
  // lea ecx, [esp + 0x10]
  // mov byte ptr [esp + 0x12c], 0
  // call 0x004931D6
  call(0x004931D6);
  /* Block 30 @ 0x0043B2A8 */
  // mov ecx, ebx
  // call 0x00427960
  call(0x00427960);
  /* Block 31 @ 0x0043B7CB */
  // lea ecx, [esp + 0xa4]
  // mov dword ptr [esp + 0x12c], 0xffffffff
  // call 0x004294E0
  call(0x004294E0);
  /* Block 32 @ 0x0043B2AF */
  // xor ecx, ecx
  // mov dword ptr [esp + 0x20], eax
  // CMP eax, ecx (set flags)
  // mov dword ptr [esp + 0x14], ecx
  // mov dword ptr [esp + 0x18], ecx
  // if (less or equal) goto 0x43b2e8
  /* Block 33 @ 0x0043B7E2 */
  // mov eax, 1
  // mov ecx, dword ptr [esp + 0x124]
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // mov dword ptr fs:[0], ecx
  // add esp, 0x120
  return;
  /* Block 34 @ 0x0043B2E8 */
  // lea ecx, [esp + 0xa4]
  // call 0x004295C0
  call(0x004295C0);
  /* Block 35 @ 0x0043B2C1 */
  // mov ecx, dword ptr [esp + 0x18]
  // push ecx
  // mov ecx, ebx
  // call 0x00427970
  call(0x00427970);
  /* Block 36 @ 0x0043B2F4 */
  // mov ecx, eax
  // CMP ecx, -1 (set flags)
  // if (equal) goto 0x43b306
  /* Block 37 @ 0x0043B2CD */
  // mov ecx, dword ptr [esp + 0x14]
  // add ecx, eax
  // mov eax, dword ptr [esp + 0x18]
  // mov dword ptr [esp + 0x14], ecx
  // mov ecx, dword ptr [esp + 0x20]
  // inc eax
  // CMP eax, ecx (set flags)
  // mov dword ptr [esp + 0x18], eax
  // if (less) goto 0x43b2c1
  /* Block 38 @ 0x0043B306 */
  // mov edx, dword ptr [esp + 0x14]
  // push edx
  // push 0x64
  // push ebp
  // call dword ptr [0x4a234c]
  call(dword ptr [0x4a234c]);
  /* Block 39 @ 0x0043B2FB */
  // CMP ecx, -2 (set flags)
  // if (not equal) goto 0x43b320
  /* Block 40 @ 0x0043B314 */
  // mov ecx, eax
  // CMP ecx, -2 (set flags)
  // if (not equal) goto 0x43b320
  /* Block 41 @ 0x0043B300 */
  // CMP dword ptr [esp + 0x14], ebp (set flags)
  // if (less or equal) goto 0x43b31b
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0043B080: mov      eax, dword ptr fs:[0]
  0x0043B086: push     -1
  0x0043B088: push     0x4a0c72
  0x0043B08D: push     eax
  0x0043B08E: mov      dword ptr fs:[0], esp
  0x0043B095: sub      esp, 0x114
  0x0043B09B: push     ebx
  0x0043B09C: push     ebp
  0x0043B09D: push     esi
  0x0043B09E: push     edi
  0x0043B09F: mov      esi, ecx
  0x0043B0A1: call     0x494512
  0x0043B0A6: xor      ebp, ebp
  0x0043B0A8: mov      dword ptr [0x2fe8d28], ebp
  0x0043B0AE: mov      eax, dword ptr [esi + 0xdc]
  0x0043B0B4: cmp      eax, 1
  0x0043B0B7: jne      0x43b0c2
  0x0043B0B9: push     5
  0x0043B0BB: mov      ecx, esi
  0x0043B0BD: call     0x497580
  0x0043B0C2: mov      eax, dword ptr [esi + 0xb4]
  0x0043B0C8: push     0x640000
  0x0043B0CD: push     ebp
  0x0043B0CE: push     0x401
  0x0043B0D3: push     eax
  0x0043B0D4: call     dword ptr [0x4a2564]
  0x0043B0DA: lea      edi, [esi + 0xe0]
  0x0043B0E0: mov      ecx, edi
  0x0043B0E2: call     0x493161
  0x0043B0E7: mov      ecx, dword ptr [esi + 0xd4]
  0x0043B0ED: call     0x42a650
  0x0043B0F2: lea      ecx, [esp + 0xa4]
  0x0043B0F9: mov      ebx, eax
  0x0043B0FB: call     0x429460
  0x0043B100: mov      ecx, ebx
  0x0043B102: mov      dword ptr [esp + 0x12c], ebp
  0x0043B109: call     0x428970
  0x0043B10E: cmp      eax, ebp
  0x0043B110: je       0x43b11f
  0x0043B11F: mov      eax, dword ptr [esi + 0xd8]
  0x0043B125: xor      ecx, ecx
  0x0043B127: mov      dword ptr [esp + 0x58], ecx
  0x0043B12B: cmp      eax, ebp
  0x0043B12D: mov      dword ptr [esp + 0x5c], ecx
  0x0043B131: mov      dword ptr [esp + 0x58], 0x14
  0x0043B139: mov      dword ptr [esp + 0x60], ecx
  0x0043B13D: mov      dword ptr [esp + 0x5c], 0x2fb1204
  0x0043B145: mov      dword ptr [esp + 0x64], ecx
  0x0043B149: mov      dword ptr [esp + 0x68], ecx
  0x0043B14D: je       0x43b153
  0x0043B112: push     eax
  0x0043B113: lea      ecx, [esp + 0xa8]
  0x0043B11A: call     0x429600
  0x0043B153: mov      edx, dword ptr [0x2fd8088]
  0x0043B159: mov      dword ptr [esp + 0x10], edx
  0x0043B15D: mov      eax, dword ptr [esp + 0xc0]
  0x0043B164: mov      byte ptr [esp + 0x12c], 1
  0x0043B16C: cmp      eax, 1
  0x0043B16F: jne      0x43b1c4
  0x0043B14F: mov      dword ptr [esp + 0x5c], eax
  0x0043B153: mov      edx, dword ptr [0x2fd8088]
  0x0043B159: mov      dword ptr [esp + 0x10], edx
  0x0043B15D: mov      eax, dword ptr [esp + 0xc0]
  0x0043B164: mov      byte ptr [esp + 0x12c], 1
  0x0043B16C: cmp      eax, 1
  0x0043B16F: jne      0x43b1c4
  0x0043B171: mov      eax, dword ptr [esp + 0xc4]
  0x0043B178: cmp      dword ptr [eax - 8], ebp
  0x0043B17B: jne      0x43b184
  0x0043B1C4: push     0x2fb11d8
  0x0043B1C9: lea      ecx, [esp + 0x14]
  0x0043B1CD: mov      dword ptr [esp + 0x64], ebp
  0x0043B1D1: call     0x493313
  0x0043B17D: push     0x2fb11e8
  0x0043B182: jmp      0x43b1ea
  0x0043B184: mov      dword ptr [esp + 0x60], eax
  0x0043B188: lea      eax, [esp + 0xc4]
  0x0043B18F: push     eax
  0x0043B190: lea      ecx, [esp + 0x24]
  0x0043B194: push     0x2fb11e0
  0x0043B199: push     ecx
  0x0043B19A: call     0x493493
  0x0043B1D6: mov      ecx, ebx
  0x0043B1D8: call     0x428980
  0x0043B1EA: mov      ecx, edi
  0x0043B1EC: call     0x493313
  0x0043B19F: push     eax
  0x0043B1A0: lea      ecx, [esp + 0x14]
  0x0043B1A4: mov      byte ptr [esp + 0x130], 2
  0x0043B1AC: call     0x4932c3
  0x0043B1DD: cmp      eax, ebp
  0x0043B1DF: mov      dword ptr [esp + 0x24], eax
  0x0043B1E3: jne      0x43b1ff
  0x0043B1F1: push     -1
  0x0043B1F3: mov      ecx, esi
  0x0043B1F5: call     0x4943ea
  0x0043B1B1: lea      ecx, [esp + 0x20]
  0x0043B1B5: mov      byte ptr [esp + 0x12c], 1
  0x0043B1BD: call     0x4931d6
  0x0043B1E5: push     0x2fb11c4
  0x0043B1EA: mov      ecx, edi
  0x0043B1EC: call     0x493313
  0x0043B1FF: lea      edx, [esp + 0x7c]
  0x0043B203: lea      ecx, [esp + 0x6c]
  0x0043B207: push     edx
  0x0043B208: push     ecx
  0x0043B209: lea      edx, [esp + 0xa0]
  0x0043B210: lea      ecx, [esp + 0x88]
  0x0043B217: push     edx
  0x0043B218: push     ecx
  0x0043B219: lea      edx, [esp + 0x80]
  0x0043B220: lea      ecx, [esp + 0xac]
  0x0043B227: push     edx
  0x0043B228: push     ecx
  0x0043B229: lea      edx, [esp + 0x8c]
  0x0043B230: lea      ecx, [esp + 0x90]
  0x0043B237: push     edx
  0x0043B238: push     ecx
  0x0043B239: push     eax
  0x0043B23A: call     0x442a30
  0x0043B1FA: jmp      0x43b7ba
  0x0043B1C2: jmp      0x43b1d6
  0x0043B23F: mov      ebp, dword ptr [esp + 0xc0]
  0x0043B246: mov      eax, dword ptr [esp + 0xd0]
  0x0043B24D: mov      edi, dword ptr [esp + 0xc8]
  0x0043B254: mov      edx, dword ptr [esp + 0xd4]
  0x0043B25B: mov      ecx, dword ptr [esp + 0xcc]
  0x0043B262: sub      ebp, eax
  0x0043B264: sub      ebp, edi
  0x0043B266: mov      edi, dword ptr [esp + 0x94]
  0x0043B26D: sub      edi, edx
  0x0043B26F: xor      eax, eax
  0x0043B271: add      esp, 0x24
  0x0043B274: sub      edi, ecx
  0x0043B276: mov      dword ptr [esp + 0x40], eax
  0x0043B27A: mov      dword ptr [esp + 0x48], eax
  0x0043B27E: mov      dword ptr [esp + 0x44], eax
  0x0043B282: mov      dword ptr [esp + 0x4c], 5
  0x0043B28A: lea      edx, [esp + 0x40]
  0x0043B28E: lea      eax, [esp + 0xa4]
  0x0043B295: push     edx
  0x0043B296: push     eax
  0x0043B297: push     edi
  0x0043B298: push     ebp
  0x0043B299: mov      ecx, ebx
  0x0043B29B: mov      byte ptr [esp + 0x13c], 3
  0x0043B2A3: call     0x428da0
  0x0043B7BA: lea      ecx, [esp + 0x10]
  0x0043B7BE: mov      byte ptr [esp + 0x12c], 0
  0x0043B7C6: call     0x4931d6
  0x0043B2A8: mov      ecx, ebx
  0x0043B2AA: call     0x427960
  0x0043B7CB: lea      ecx, [esp + 0xa4]
  0x0043B7D2: mov      dword ptr [esp + 0x12c], 0xffffffff
  0x0043B7DD: call     0x4294e0
  0x0043B2AF: xor      ecx, ecx
  0x0043B2B1: mov      dword ptr [esp + 0x20], eax
  0x0043B2B5: cmp      eax, ecx
  0x0043B2B7: mov      dword ptr [esp + 0x14], ecx
  0x0043B2BB: mov      dword ptr [esp + 0x18], ecx
  0x0043B2BF: jle      0x43b2e8
  0x0043B7E2: mov      eax, 1
  0x0043B7E7: mov      ecx, dword ptr [esp + 0x124]
  0x0043B7EE: pop      edi
  0x0043B7EF: pop      esi
  0x0043B7F0: pop      ebp
  0x0043B7F1: pop      ebx
  0x0043B7F2: mov      dword ptr fs:[0], ecx
  0x0043B7F9: add      esp, 0x120
  0x0043B7FF: ret      
  0x0043B2E8: lea      ecx, [esp + 0xa4]
  0x0043B2EF: call     0x4295c0
  0x0043B2C1: mov      ecx, dword ptr [esp + 0x18]
  0x0043B2C5: push     ecx
  0x0043B2C6: mov      ecx, ebx
  0x0043B2C8: call     0x427970
  0x0043B2F4: mov      ecx, eax
  0x0043B2F6: cmp      ecx, -1
  0x0043B2F9: je       0x43b306
  0x0043B2CD: mov      ecx, dword ptr [esp + 0x14]
  0x0043B2D1: add      ecx, eax
  0x0043B2D3: mov      eax, dword ptr [esp + 0x18]
  0x0043B2D7: mov      dword ptr [esp + 0x14], ecx
  0x0043B2DB: mov      ecx, dword ptr [esp + 0x20]
  0x0043B2DF: inc      eax
  0x0043B2E0: cmp      eax, ecx
  0x0043B2E2: mov      dword ptr [esp + 0x18], eax
  0x0043B2E6: jl       0x43b2c1
  0x0043B306: mov      edx, dword ptr [esp + 0x14]
  0x0043B30A: push     edx
  0x0043B30B: push     0x64
  0x0043B30D: push     ebp
  0x0043B30E: call     dword ptr [0x4a234c]
  0x0043B2FB: cmp      ecx, -2
  0x0043B2FE: jne      0x43b320
  0x0043B314: mov      ecx, eax
  0x0043B316: cmp      ecx, -2
  0x0043B319: jne      0x43b320
  0x0043B300: cmp      dword ptr [esp + 0x14], ebp
  0x0043B304: jle      0x43b31b
  0x0043B320: lea      edi, [edi + edi*4]
  0x0043B323: lea      eax, [edi + edi*4]
  0x0043B326: shl      eax, 2
  0x0043B329: cdq      
  0x0043B32A: idiv     ecx
  0x0043B32C: lea      ecx, [ecx + ecx*4]
  0x0043B32F: shl      ecx, 1
  0x0043B331: mov      dword ptr [esp + 0x20], ecx
  0x0043B335: lea      ecx, [esp + 0x28]
  0x0043B339: mov      dword ptr [esp + 0x84], eax
  0x0043B340: call     0x499226
  0x0043B31B: mov      ecx, 0x64
  0x0043B320: lea      edi, [edi + edi*4]
  0x0043B323: lea      eax, [edi + edi*4]
  0x0043B326: shl      eax, 2
  0x0043B329: cdq      
  0x0043B32A: idiv     ecx
  0x0043B32C: lea      ecx, [ecx + ecx*4]
  0x0043B32F: shl      ecx, 1
  0x0043B331: mov      dword ptr [esp + 0x20], ecx
  0x0043B335: lea      ecx, [esp + 0x28]
  0x0043B339: mov      dword ptr [esp + 0x84], eax
  0x0043B340: call     0x499226
  0x0043B345: mov      eax, dword ptr [esp + 0x24]
  0x0043B349: lea      ecx, [esp + 0x28]
  0x0043B34D: push     eax
  0x0043B34E: mov      byte ptr [esp + 0x130], 4
  0x0043B356: call     0x4992dd
  0x0043B35B: push     0x3e8
  0x0043B360: lea      ecx, [esp + 0x2c]
  0x0043B364: mov      edi, 1
  0x0043B369: push     0x3e8
  0x0043B36E: push     ecx
  0x0043B36F: mov      dword ptr [esp + 0x40], edi
  0x0043B373: call     0x442c00
  0x0043B378: mov      eax, dword ptr [esp + 0x38]
  0x0043B37C: add      esp, 0xc
  0x0043B37F: lea      edx, [esp + 0x58]
  0x0043B383: push     edx
  0x0043B384: push     eax
  0x0043B385: call     dword ptr [0x4a20ec]
  0x0043B38B: cmp      eax, -1
  0x0043B38E: jne      0x43b3fa
  0x0043B390: push     0x2fb11b0
  0x0043B395: lea      ecx, [esi + 0xe0]
  0x0043B39B: call     0x493313
  0x0043B3FA: mov      ecx, dword ptr [esp + 0xa4]
  0x0043B401: mov      edx, dword ptr [esp + 0x78]
  0x0043B405: mov      ebx, dword ptr [esp + 0xac]
  0x0043B40C: mov      eax, dword ptr [esp + 0x6c]
  0x0043B410: mov      ebp, dword ptr [esp + 0xb0]
  0x0043B417: mov      dword ptr [esp + 0x88], ecx
  0x0043B41E: mov      ecx, dword ptr [esp + 0x80]
  0x0043B425: sub      edx, ebx
  0x0043B427: mov      ebx, dword ptr [esp + 0x98]
  0x0043B42E: sub      edx, ecx
  0x0043B430: mov      ecx, dword ptr [esp + 0x74]
  0x0043B434: sub      edx, eax
  0x0043B436: mov      eax, dword ptr [esp + 0xa8]
  0x0043B43D: sub      ecx, ebp
  0x0043B43F: mov      dword ptr [esp + 0x90], edx
  0x0043B446: mov      edx, dword ptr [esp + 0x7c]
  0x0043B44A: sub      ecx, ebx
  0x0043B44C: mov      dword ptr [esp + 0x8c], eax
  0x0043B453: sub      ecx, edx
  0x0043B455: mov      edx, dword ptr [0x2fd8088]
  0x0043B45B: mov      dword ptr [esp + 0x94], ecx
  0x0043B462: mov      dword ptr [esp + 0x1c], edx
  0x0043B466: mov      eax, dword ptr [esp + 0x44]
  0x0043B46A: mov      edx, dword ptr [esp + 0xb8]
  0x0043B471: dec      eax
  0x0043B472: mov      byte ptr [esp + 0x12c], 5
  0x0043B47A: mov      dword ptr [esp + 0x14], eax
  0x0043B47E: mov      dword ptr [esp + 0x38], 0
  0x0043B486: lea      ecx, [eax + 1]
  0x0043B489: imul     ecx, edx
  0x0043B48C: test     edx, edx
  0x0043B48E: mov      dword ptr [esp + 0xa0], ecx
  0x0043B495: jle      0x43b773
  0x0043B3A0: push     -1
  0x0043B3A2: mov      ecx, esi
  0x0043B3A4: call     0x4943ea
  0x0043B773: mov      edx, dword ptr [esp + 0x2c]
  0x0043B777: push     edx
  0x0043B778: call     dword ptr [0x4a20f4]
  0x0043B49B: mov      dword ptr [esp + 0x24], edi
  0x0043B49F: xor      edi, edi
  0x0043B4A1: cmp      eax, edi
  0x0043B4A3: jl       0x43b74e
  0x0043B3A9: lea      ecx, [esp + 0x28]
  0x0043B3AD: mov      byte ptr [esp + 0x12c], 3
  0x0043B3B5: call     0x49935b
  0x0043B77E: push     0
  0x0043B780: mov      ecx, esi
  0x0043B782: call     0x4943ea
  0x0043B74E: mov      edi, dword ptr [esp + 0x24]
  0x0043B752: mov      edx, dword ptr [esp + 0x38]
  0x0043B756: lea      ecx, [eax + 1]
  0x0043B759: inc      edx
  0x0043B75A: add      edi, ecx
  0x0043B75C: mov      ecx, dword ptr [esp + 0xb8]
  0x0043B763: cmp      edx, ecx
  0x0043B765: mov      dword ptr [esp + 0x38], edx
  0x0043B769: mov      dword ptr [esp + 0x24], edi
  0x0043B76D: jl       0x43b49f
  0x0043B4A9: mov      ecx, dword ptr [esp + 0x24]
  0x0043B4AD: mov      dword ptr [esp + 0x3c], edi
  0x0043B4B1: mov      dword ptr [esp + 0x18], ecx
  0x0043B4B5: mov      edx, dword ptr [esp + 0x10]
  0x0043B4B9: mov      ecx, dword ptr [esp + 0x38]
  0x0043B4BD: inc      eax
  0x0043B4BE: push     edx
  0x0043B4BF: lea      ebp, [edi + 1]
  0x0043B4C2: push     eax
  0x0043B4C3: mov      eax, dword ptr [esp + 0xc0]
  0x0043B4CA: push     ebp
  0x0043B4CB: push     eax
  0x0043B4CC: lea      eax, [ecx + 1]
  0x0043B4CF: push     eax
  0x0043B4D0: lea      edx, [esp + 0x30]
  0x0043B4D4: push     0x2fb118c
  0x0043B4D9: push     edx
  0x0043B4DA: call     0x4912ab
  0x0043B3BA: mov      eax, dword ptr [esp + 0x40]
  0x0043B3BE: test     eax, eax
  0x0043B3C0: je       0x43b3cb
  0x0043B787: lea      ecx, [esp + 0x1c]
  0x0043B78B: mov      byte ptr [esp + 0x12c], 4
  0x0043B793: call     0x4931d6
  0x0043B49F: xor      edi, edi
  0x0043B4A1: cmp      eax, edi
  0x0043B4A3: jl       0x43b74e
  0x0043B4DF: mov      eax, dword ptr [esp + 0x38]
  0x0043B4E3: add      esp, 0x1c
  0x0043B4E6: lea      ecx, [esi + 0x5c]
  0x0043B4E9: push     eax
  0x0043B4EA: call     0x4974ae
  0x0043B3CB: lea      ecx, [esp + 0x10]
  0x0043B3CF: mov      byte ptr [esp + 0x12c], 0
  0x0043B3D7: call     0x4931d6
  0x0043B3C2: push     eax
  0x0043B3C3: call     0x492f40
  0x0043B798: lea      ecx, [esp + 0x28]
  0x0043B79C: mov      byte ptr [esp + 0x12c], 3
  0x0043B7A4: call     0x49935b
  0x0043B4EF: mov      ecx, dword ptr [esi + 0x78]
  0x0043B4F2: mov      ebx, dword ptr [0x4a2538]
  0x0043B4F8: push     ecx
  0x0043B4F9: call     ebx
  0x0043B3DC: lea      ecx, [esp + 0xa4]
  0x0043B3E3: mov      dword ptr [esp + 0x12c], 0xffffffff
  0x0043B3EE: call     0x4294e0
  0x0043B3C8: add      esp, 4
  0x0043B3CB: lea      ecx, [esp + 0x10]
  0x0043B3CF: mov      byte ptr [esp + 0x12c], 0
  0x0043B3D7: call     0x4931d6
  0x0043B7A9: mov      eax, dword ptr [esp + 0x40]
  0x0043B7AD: test     eax, eax
  0x0043B7AF: je       0x43b7ba
  0x0043B4FB: mov      edx, dword ptr [esp + 0xa0]
  0x0043B502: mov      eax, dword ptr [esp + 0x18]
  0x0043B506: push     edx
  0x0043B507: push     0x64
  0x0043B509: push     eax
  0x0043B50A: call     dword ptr [0x4a234c]
  0x0043B3F3: mov      eax, edi
  0x0043B3F5: jmp      0x43b7e7
  0x0043B7B1: push     eax
  0x0043B7B2: call     0x492f40
  0x0043B510: mov      ecx, dword ptr [esi + 0xb4]
  0x0043B516: push     0
  0x0043B518: push     eax
  0x0043B519: push     0x402
  0x0043B51E: push     ecx
  0x0043B51F: call     dword ptr [0x4a2564]
  0x0043B7E7: mov      ecx, dword ptr [esp + 0x124]
  0x0043B7EE: pop      edi
  0x0043B7EF: pop      esi
  0x0043B7F0: pop      ebp
  0x0043B7F1: pop      ebx
  0x0043B7F2: mov      dword ptr fs:[0], ecx
  0x0043B7F9: add      esp, 0x120
  0x0043B7FF: ret      
  0x0043B7B7: add      esp, 4
  0x0043B7BA: lea      ecx, [esp + 0x10]
  0x0043B7BE: mov      byte ptr [esp + 0x12c], 0
  0x0043B7C6: call     0x4931d6
  0x0043B525: mov      edx, dword ptr [esi + 0xb4]
  0x0043B52B: push     edx
  0x0043B52C: call     ebx
  0x0043B52E: mov      eax, dword ptr [0x2fe8d28]
  0x0043B533: mov      ebx, 1
  0x0043B538: cmp      eax, ebx
  0x0043B53A: je       0x43b800
  0x0043B800: mov      edx, dword ptr [esp + 0x2c]
  0x0043B804: push     edx
  0x0043B805: call     dword ptr [0x4a20f4]
  0x0043B540: mov      eax, dword ptr [esp + 0x2c]
  0x0043B544: push     eax
  0x0043B545: call     dword ptr [0x4a20e8]
  0x0043B80B: lea      ecx, [esp + 0x1c]
  0x0043B80F: mov      byte ptr [esp + 0x12c], 4
  0x0043B817: call     0x4931d6
  0x0043B54B: test     eax, eax
  0x0043B54D: jl       0x43b837
  0x0043B81C: lea      ecx, [esp + 0x28]
  0x0043B820: mov      byte ptr [esp + 0x12c], 3
  0x0043B828: call     0x49935b
  0x0043B837: push     0x2fb1180
  0x0043B83C: lea      ecx, [esi + 0xe0]
  0x0043B842: call     0x493313
  0x0043B553: push     0x3e8
  0x0043B558: lea      ecx, [esp + 0x2c]
  0x0043B55C: push     0x3e8
  0x0043B561: push     ecx
  0x0043B562: call     0x442c00
  0x0043B82D: mov      eax, dword ptr [esp + 0x40]
  0x0043B831: test     eax, eax
  0x0043B833: je       0x43b89b
  0x0043B847: mov      eax, dword ptr [esp + 0x2c]
  0x0043B84B: push     eax
  0x0043B84C: call     dword ptr [0x4a20f4]
  0x0043B567: add      esp, 0xc
  0x0043B56A: lea      edx, [esp + 0x88]
  0x0043B571: push     edx
  0x0043B572: call     dword ptr [0x4a251c]
  0x0043B89B: lea      ecx, [esp + 0x10]
  0x0043B89F: mov      byte ptr [esp + 0x12c], 0
  0x0043B8A7: call     0x4931d6
  0x0043B835: jmp      0x43b892
  0x0043B852: push     -1
  0x0043B854: mov      ecx, esi
  0x0043B856: call     0x4943ea
  0x0043B578: neg      eax
  0x0043B57A: sbb      eax, eax
  0x0043B57C: inc      eax
  0x0043B57D: mov      dword ptr [esp + 0x104], eax
  0x0043B584: je       0x43b681
  0x0043B8AC: lea      ecx, [esp + 0xa4]
  0x0043B8B3: mov      dword ptr [esp + 0x12c], 0xffffffff
  0x0043B8BE: call     0x4294e0
  0x0043B892: push     eax
  0x0043B893: call     0x492f40
  0x0043B85B: jmp      0x43b80b
  0x0043B681: mov      ecx, dword ptr [esp + 0x2c]
  0x0043B685: push     ecx
  0x0043B686: call     dword ptr [0x4a20f8]
  0x0043B58A: mov      ebx, dword ptr [esp + 0x20]
  0x0043B58E: mov      eax, dword ptr [esp + 0x88]
  0x0043B595: mov      ecx, dword ptr [esp + 0x8c]
  0x0043B59C: cmp      ebx, 0x3e8
  0x0043B5A2: mov      dword ptr [esp + 0x50], eax
  0x0043B5A6: mov      dword ptr [esp + 0x54], ecx
  0x0043B5AA: je       0x43b5df
  0x0043B8C3: mov      eax, ebx
  0x0043B8C5: jmp      0x43b7e7
  0x0043B898: add      esp, 4
  0x0043B89B: lea      ecx, [esp + 0x10]
  0x0043B89F: mov      byte ptr [esp + 0x12c], 0
  0x0043B8A7: call     0x4931d6
  0x0043B68C: test     eax, eax
  0x0043B68E: jl       0x43b726
  0x0043B5DF: mov      ecx, dword ptr [esp + 0x40]
  0x0043B5E3: mov      edx, dword ptr [esp + 0x3c]
  0x0043B5E7: add      edx, ecx
  0x0043B5E9: mov      ebx, dword ptr [edx]
  0x0043B5EB: mov      ecx, dword ptr [edx + 4]
  0x0043B5EE: mov      eax, dword ptr [edx + 8]
  0x0043B5F1: mov      edx, dword ptr [esp + 0x44]
  0x0043B5F5: dec      edx
  0x0043B5F6: cmp      edi, edx
  0x0043B5F8: jne      0x43b618
  0x0043B5AC: mov      eax, dword ptr [esp + 0x30]
  0x0043B5B0: lea      edx, [esp + 0x50]
  0x0043B5B4: push     1
  0x0043B5B6: push     edx
  0x0043B5B7: push     eax
  0x0043B5B8: call     dword ptr [0x4a2048]
  0x0043B726: push     0x2fb1180
  0x0043B72B: lea      ecx, [esi + 0xe0]
  0x0043B731: call     0x493313
  0x0043B694: mov      edi, dword ptr [0x4a2410]
  0x0043B69A: push     0
  0x0043B69C: push     0
  0x0043B69E: push     0
  0x0043B6A0: lea      edx, [esp + 0x114]
  0x0043B6A7: push     0
  0x0043B6A9: push     edx
  0x0043B6AA: call     edi
  0x0043B5FA: cmp      dword ptr [esp + 0xc8], 1
  0x0043B602: jne      0x43b618
  0x0043B618: xor      edx, edx
  0x0043B61A: sub      eax, ecx
  0x0043B61C: push     edx
  0x0043B61D: inc      eax
  0x0043B61E: lea      edx, [esp + 0x2c]
  0x0043B622: push     eax
  0x0043B623: mov      eax, dword ptr [esp + 0x5c]
  0x0043B627: push     ecx
  0x0043B628: mov      ecx, dword ptr [esp + 0x5c]
  0x0043B62C: push     eax
  0x0043B62D: push     ecx
  0x0043B62E: mov      ecx, dword ptr [esi + 0xd4]
  0x0043B634: push     edx
  0x0043B635: call     0x430570
  0x0043B5BE: push     ebx
  0x0043B5BF: lea      ecx, [esp + 0x2c]
  0x0043B5C3: push     ebx
  0x0043B5C4: push     ecx
  0x0043B5C5: call     0x442c00
  0x0043B736: mov      ecx, dword ptr [esp + 0x2c]
  0x0043B73A: push     ecx
  0x0043B73B: call     dword ptr [0x4a20f4]
  0x0043B6AC: test     eax, eax
  0x0043B6AE: je       0x43b702
  0x0043B604: mov      edx, dword ptr [esp + 0xfc]
  0x0043B60B: test     edx, edx
  0x0043B60D: jg       0x43b618
  0x0043B63A: cmp      dword ptr [esp + 0x20], 0x3e8
  0x0043B642: je       0x43b65b
  0x0043B5CA: mov      eax, dword ptr [esp + 0x3c]
  0x0043B5CE: add      esp, 0xc
  0x0043B5D1: lea      edx, [esp + 0x50]
  0x0043B5D5: push     1
  0x0043B5D7: push     edx
  0x0043B5D8: push     eax
  0x0043B5D9: call     dword ptr [0x4a204c]
  0x0043B741: push     -1
  0x0043B743: mov      ecx, esi
  0x0043B745: call     0x4943ea
  0x0043B702: mov      edx, dword ptr [esp + 0x18]
  0x0043B706: mov      ecx, dword ptr [esp + 0x3c]
  0x0043B70A: mov      eax, dword ptr [esp + 0x14]
  0x0043B70E: mov      edi, ebp
  0x0043B710: inc      edx
  0x0043B711: add      ecx, 0xc
  0x0043B714: cmp      edi, eax
  0x0043B716: mov      dword ptr [esp + 0x18], edx
  0x0043B71A: mov      dword ptr [esp + 0x3c], ecx
  0x0043B71E: jle      0x43b4b5
  0x0043B6B0: push     0
  0x0043B6B2: push     0
  0x0043B6B4: lea      eax, [esp + 0x110]
  0x0043B6BB: push     0
  0x0043B6BD: push     eax
  0x0043B6BE: call     dword ptr [0x4a2484]
  0x0043B60F: mov      edx, dword ptr [esp + 0x84]
  0x0043B616: jmp      0x43b61a
  0x0043B65B: mov      ecx, dword ptr [esp + 0xb4]
  0x0043B662: push     ebx
  0x0043B663: lea      edx, [esp + 0x8c]
  0x0043B66A: push     ecx
  0x0043B66B: mov      ecx, dword ptr [esi + 0xd4]
  0x0043B671: lea      eax, [esp + 0x30]
  0x0043B675: push     edx
  0x0043B676: push     eax
  0x0043B677: call     0x430380
  0x0043B644: push     0x3e8
  0x0043B649: lea      eax, [esp + 0x2c]
  0x0043B64D: push     0x3e8
  0x0043B652: push     eax
  0x0043B653: call     0x442c00
  0x0043B74A: mov      eax, dword ptr [esp + 0x14]
  0x0043B74E: mov      edi, dword ptr [esp + 0x24]
  0x0043B752: mov      edx, dword ptr [esp + 0x38]
  0x0043B756: lea      ecx, [eax + 1]
  0x0043B759: inc      edx
  0x0043B75A: add      edi, ecx
  0x0043B75C: mov      ecx, dword ptr [esp + 0xb8]
  0x0043B763: cmp      edx, ecx
  0x0043B765: mov      dword ptr [esp + 0x38], edx
  0x0043B769: mov      dword ptr [esp + 0x24], edi
  0x0043B76D: jl       0x43b49f
  0x0043B4B5: mov      edx, dword ptr [esp + 0x10]
  0x0043B4B9: mov      ecx, dword ptr [esp + 0x38]
  0x0043B4BD: inc      eax
  0x0043B4BE: push     edx
  0x0043B4BF: lea      ebp, [edi + 1]
  0x0043B4C2: push     eax
  0x0043B4C3: mov      eax, dword ptr [esp + 0xc0]
  0x0043B4CA: push     ebp
  0x0043B4CB: push     eax
  0x0043B4CC: lea      eax, [ecx + 1]
  0x0043B4CF: push     eax
  0x0043B4D0: lea      edx, [esp + 0x30]
  0x0043B4D4: push     0x2fb118c
  0x0043B4D9: push     edx
  0x0043B4DA: call     0x4912ab
  0x0043B724: jmp      0x43b74e
  0x0043B6C4: lea      ecx, [esp + 0x108]
  0x0043B6CB: push     ecx
  0x0043B6CC: call     dword ptr [0x4a2498]
  0x0043B61A: sub      eax, ecx
  0x0043B61C: push     edx
  0x0043B61D: inc      eax
  0x0043B61E: lea      edx, [esp + 0x2c]
  0x0043B622: push     eax
  0x0043B623: mov      eax, dword ptr [esp + 0x5c]
  0x0043B627: push     ecx
  0x0043B628: mov      ecx, dword ptr [esp + 0x5c]
  0x0043B62C: push     eax
  0x0043B62D: push     ecx
  0x0043B62E: mov      ecx, dword ptr [esi + 0xd4]
  0x0043B634: push     edx
  0x0043B635: call     0x430570
  0x0043B67C: mov      ebx, 1
  0x0043B681: mov      ecx, dword ptr [esp + 0x2c]
  0x0043B685: push     ecx
  0x0043B686: call     dword ptr [0x4a20f8]
  0x0043B658: add      esp, 0xc
  0x0043B65B: mov      ecx, dword ptr [esp + 0xb4]
  0x0043B662: push     ebx
  0x0043B663: lea      edx, [esp + 0x8c]
  0x0043B66A: push     ecx
  0x0043B66B: mov      ecx, dword ptr [esi + 0xd4]
  0x0043B671: lea      eax, [esp + 0x30]
  0x0043B675: push     edx
  0x0043B676: push     eax
  0x0043B677: call     0x430380
  0x0043B6D2: lea      edx, [esp + 0x108]
  0x0043B6D9: push     edx
  0x0043B6DA: call     dword ptr [0x4a2480]
  0x0043B6E0: cmp      dword ptr [0x2fe8d28], ebx
  0x0043B6E6: je       0x43b85d
  0x0043B85D: mov      ecx, dword ptr [esp + 0x2c]
  0x0043B861: push     ecx
  0x0043B862: call     dword ptr [0x4a20f4]
  0x0043B6EC: push     0
  0x0043B6EE: push     0
  0x0043B6F0: push     0
  0x0043B6F2: lea      eax, [esp + 0x114]
  0x0043B6F9: push     0
  0x0043B6FB: push     eax
  0x0043B6FC: call     edi
  0x0043B868: lea      ecx, [esp + 0x1c]
  0x0043B86C: mov      byte ptr [esp + 0x12c], 4
  0x0043B874: call     0x4931d6
  0x0043B6FE: test     eax, eax
  0x0043B700: jne      0x43b6b0
  0x0043B879: lea      ecx, [esp + 0x28]
  0x0043B87D: mov      byte ptr [esp + 0x12c], 3
  0x0043B885: call     0x49935b
  0x0043B88A: mov      eax, dword ptr [esp + 0x40]
  0x0043B88E: test     eax, eax
  0x0043B890: je       0x43b89b

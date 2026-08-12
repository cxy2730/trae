/**
 * Function: sub_495a63
 * Address: 0x00495A63
 * Blocks: 147
 * Instructions: 509
 * Analyzed with angr + capstone
 */
void* sub_495a63(void) {

  /* Block 1 @ 0x00495A63 */
  // sub esp, 0x54
  // and dword ptr [ebp - 0x10], 0
  // push ebx
  // mov ebx, dword ptr [ebp + 8]
  // push esi
  // push edi
  // CMP ebx, 0x111 (set flags)
  // mov edi, ecx
  // if (not equal) goto 0x495a92
  /* Block 2 @ 0x00495A7A */
  // push dword ptr [ebp + 0x10]
  // mov eax, dword ptr [edi]
  // push dword ptr [ebp + 0xc]
  // call dword ptr [eax + 0x78]
  call(dword ptr [eax + 0x78]);
  /* Block 3 @ 0x00495A92 */
  // CMP ebx, 0x4e (set flags)
  // if (not equal) goto 0x495abf
  /* Block 4 @ 0x00495A85 */
  // TEST eax, eax (set flags)
  // if (equal) goto 0x495be2
  /* Block 5 @ 0x00495A97 */
  // mov eax, dword ptr [ebp + 0x10]
  // CMP dword ptr [eax], 0 (set flags)
  // if (equal) goto 0x495be2
  /* Block 6 @ 0x00495ABF */
  // mov esi, dword ptr [ebp + 0x10]
  // CMP ebx, 6 (set flags)
  // if (not equal) goto 0x495ad7
  /* Block 7 @ 0x00495BE2 */
  // xor eax, eax
  // mov ecx, dword ptr [ebp - 0xc]
  // pop edi
  // pop esi
  // pop ebx
  // mov dword ptr fs:[0], ecx
  // leave 
  return;
  /* Block 8 @ 0x00495A8D */
  goto 0x495eaf;
  /* Block 9 @ 0x00495AA3 */
  // mov edx, dword ptr [edi]
  // lea ecx, [ebp - 0x10]
  // push ecx
  // push eax
  // push dword ptr [ebp + 0xc]
  // mov ecx, edi
  // call dword ptr [edx + 0x7c]
  call(dword ptr [edx + 0x7c]);
  /* Block 10 @ 0x00495AC7 */
  // push esi
  // call 0x00494BB2
  call(0x00494BB2);
  /* Block 11 @ 0x00495AD7 */
  // CMP ebx, 0x20 (set flags)
  // if (not equal) goto 0x495af4
  /* Block 12 @ 0x00495EAF */
  // mov dword ptr [ebp - 0x10], 1
  goto 0x495ef3;
  /* Block 13 @ 0x00495AB2 */
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x495ef3
  /* Block 14 @ 0x00495ACD */
  // push eax
  // push dword ptr [ebp + 0xc]
  // push edi
  // call 0x00494910
  call(0x00494910);
  /* Block 15 @ 0x00495ADC */
  // mov eax, esi
  // shr eax, 0x10
  // push eax
  // movsx eax, si
  // push eax
  // push edi
  // call 0x00494971
  call(0x00494971);
  /* Block 16 @ 0x00495AF4 */
  // mov eax, dword ptr [edi]
  // mov ecx, edi
  // call dword ptr [eax + 0x28]
  call(dword ptr [eax + 0x28]);
  /* Block 17 @ 0x00495EF3 */
  // mov eax, dword ptr [ebp + 0x14]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x495eff
  /* Block 18 @ 0x00495ABA */
  goto 0x495be2;
  /* Block 19 @ 0x00495AEC */
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x495eaf
  /* Block 20 @ 0x00495AFB */
  // mov ecx, dword ptr [ebp + 8]
  // mov dword ptr [ebp - 0x14], eax
  // mov ebx, eax
  // mov eax, 0x1ff
  // and ebx, eax
  // and ecx, eax
  // push 7
  // xor ebx, ecx
  // call 0x0049D98A
  call(0x0049D98A);
  /* Block 21 @ 0x00495EFF */
  // push 1
  // pop eax
  goto 0x495be4;
  /* Block 22 @ 0x00495EFA */
  // mov ecx, dword ptr [ebp - 0x10]
  // mov dword ptr [eax], ecx
  // push 1
  // pop eax
  goto 0x495be4;
  /* Block 23 @ 0x00495B15 */
  // mov ecx, dword ptr [ebp + 8]
  // lea eax, [ebx + ebx*2]
  // CMP ecx, dword ptr [eax*4 + 0x300f280] (set flags)
  // lea ebx, [eax*4 + 0x300f280]
  // mov eax, dword ptr [ebp - 0x14]
  // if (not equal) goto 0x495b5a
  // mov ecx, dword ptr [ebp - 0xc]
  // pop edi
  // pop esi
  // pop ebx
  // mov dword ptr fs:[0], ecx
  return;
  /* Block 24 @ 0x00495B2E */
  // CMP eax, dword ptr [ebx + 8] (set flags)
  // if (not equal) goto 0x495b5a
  /* Block 25 @ 0x00495B5A */
  // TEST eax, eax (set flags)
  // mov dword ptr [ebx], ecx
  // mov dword ptr [ebx + 8], eax
  // if (equal) goto 0x495bd7
  /* Block 26 @ 0x00495B33 */
  // mov ebx, dword ptr [ebx + 4]
  // push 7
  // mov dword ptr [ebp + 0x10], ebx
  // call 0x0049D9FA
  call(0x0049D9FA);
  /* Block 27 @ 0x00495BD7 */
  // and dword ptr [ebx + 4], 0
  // push 7
  // call 0x0049D9FA
  call(0x0049D9FA);
  /* Block 28 @ 0x00495B63 */
  goto 0x495b6b;
  /* Block 29 @ 0x00495B40 */
  // TEST ebx, ebx (set flags)
  // if (equal) goto 0x495be2
  /* Block 30 @ 0x00495B6B */
  // mov edx, 0xc000
  // CMP ecx, edx (set flags)
  // if (above or equal) goto 0x495b8a
  /* Block 31 @ 0x00495B48 */
  // CMP dword ptr [ebp + 8], 0xc000 (set flags)
  // if (below) goto 0x495c02
  /* Block 32 @ 0x00495B74 */
  // push 0
  // push 0
  // push ecx
  // push dword ptr [eax + 4]
  // call 0x004959D5
  call(0x004959D5);
  /* Block 33 @ 0x00495B8A */
  // mov eax, dword ptr [eax + 4]
  // push 0
  // push 0
  // push edx
  // push eax
  // call 0x004959D5
  call(0x004959D5);
  /* Block 34 @ 0x00495C02 */
  // mov ecx, dword ptr [ebp + 0x10]
  // mov ebx, dword ptr [ebx + 0x14]
  // CMP dword ptr [ecx + 8], 0x1a (set flags)
  // mov eax, dword ptr [ecx + 0x10]
  // if (not equal) goto 0x495c23
  /* Block 35 @ 0x00495B55 */
  goto 0x495ee5;
  /* Block 36 @ 0x00495B81 */
  // TEST eax, eax (set flags)
  // mov dword ptr [ebp + 0x10], eax
  // if (not equal) goto 0x495bf5
  /* Block 37 @ 0x00495B98 */
  // TEST eax, eax (set flags)
  // mov dword ptr [ebp + 0x10], eax
  // if (equal) goto 0x495bcb
  /* Block 38 @ 0x00495C11 */
  // call dword ptr [0x4a21b0]
  call(dword ptr [0x4a21b0]);
  /* Block 39 @ 0x00495C23 */
  // dec eax
  // CMP eax, 0x30 (set flags)
  // if (above) goto 0x495ef3
  /* Block 40 @ 0x00495EE5 */
  // mov ebx, dword ptr [ebx + 0x14]
  // push esi
  // push dword ptr [ebp + 0xc]
  // mov ecx, edi
  // call ebx
  call(ebx);
  /* Block 41 @ 0x00495B88 */
  goto 0x495bcb;
  /* Block 42 @ 0x00495BF5 */
  // push 7
  // mov dword ptr [ebx + 4], eax
  // call 0x0049D9FA
  call(0x0049D9FA);
  /* Block 43 @ 0x00495BCB */
  // mov eax, dword ptr [ebp - 0x14]
  // mov eax, dword ptr [eax]
  // TEST eax, eax (set flags)
  // mov dword ptr [ebp - 0x14], eax
  // if (not equal) goto 0x495b65
  /* Block 44 @ 0x00495B9F */
  goto 0x495ba4;
  /* Block 45 @ 0x00495C17 */
  // mov ecx, dword ptr [ebp + 0x10]
  // CMP al, 4 (set flags)
  // and al, 0xf0
  // add eax, 0x2f
  // dec eax
  // CMP eax, 0x30 (set flags)
  // if (above) goto 0x495ef3
  /* Block 46 @ 0x00495C2D */
  goto dword ptr [eax*4 + 0x495f07];
  /* Block 47 @ 0x00495EF0 */
  // mov dword ptr [ebp - 0x10], eax
  // mov eax, dword ptr [ebp + 0x14]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x495eff
  /* Block 48 @ 0x00495BFF */
  // mov ebx, dword ptr [ebp + 0x10]
  // mov ecx, dword ptr [ebp + 0x10]
  // mov ebx, dword ptr [ebx + 0x14]
  // CMP dword ptr [ecx + 8], 0x1a (set flags)
  // mov eax, dword ptr [ecx + 0x10]
  // if (not equal) goto 0x495c23
  /* Block 49 @ 0x00495B65 */
  // mov eax, dword ptr [ebp - 0x14]
  // mov ecx, dword ptr [ebp + 8]
  // mov edx, 0xc000
  // CMP ecx, edx (set flags)
  // if (above or equal) goto 0x495b8a
  /* Block 50 @ 0x00495BA4 */
  // mov ecx, dword ptr [eax + 0x10]
  // mov edx, dword ptr [ebp + 8]
  // CMP dword ptr [ecx], edx (set flags)
  // if (equal) goto 0x495ed8
  /* Block 51 @ 0x00495E82 */
  // mov eax, dword ptr [ebp + 0xc]
  // push esi
  // shr eax, 0x10
  // push eax
  // movzx eax, word ptr [ebp + 0xc]
  goto 0x495dab;
  /* Block 52 @ 0x00495D85 */
  // mov eax, esi
  // shr eax, 0x10
  // push eax
  // movzx eax, si
  goto 0x495e9d;
  /* Block 53 @ 0x00495E0A */
  // push esi
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00495A63: sub      esp, 0x54
  0x00495A66: and      dword ptr [ebp - 0x10], 0
  0x00495A6A: push     ebx
  0x00495A6B: mov      ebx, dword ptr [ebp + 8]
  0x00495A6E: push     esi
  0x00495A6F: push     edi
  0x00495A70: cmp      ebx, 0x111
  0x00495A76: mov      edi, ecx
  0x00495A78: jne      0x495a92
  0x00495A7A: push     dword ptr [ebp + 0x10]
  0x00495A7D: mov      eax, dword ptr [edi]
  0x00495A7F: push     dword ptr [ebp + 0xc]
  0x00495A82: call     dword ptr [eax + 0x78]
  0x00495A92: cmp      ebx, 0x4e
  0x00495A95: jne      0x495abf
  0x00495A85: test     eax, eax
  0x00495A87: je       0x495be2
  0x00495A97: mov      eax, dword ptr [ebp + 0x10]
  0x00495A9A: cmp      dword ptr [eax], 0
  0x00495A9D: je       0x495be2
  0x00495ABF: mov      esi, dword ptr [ebp + 0x10]
  0x00495AC2: cmp      ebx, 6
  0x00495AC5: jne      0x495ad7
  0x00495BE2: xor      eax, eax
  0x00495BE4: mov      ecx, dword ptr [ebp - 0xc]
  0x00495BE7: pop      edi
  0x00495BE8: pop      esi
  0x00495BE9: pop      ebx
  0x00495BEA: mov      dword ptr fs:[0], ecx
  0x00495BF1: leave    
  0x00495BF2: ret      0x10
  0x00495A8D: jmp      0x495eaf
  0x00495AA3: mov      edx, dword ptr [edi]
  0x00495AA5: lea      ecx, [ebp - 0x10]
  0x00495AA8: push     ecx
  0x00495AA9: push     eax
  0x00495AAA: push     dword ptr [ebp + 0xc]
  0x00495AAD: mov      ecx, edi
  0x00495AAF: call     dword ptr [edx + 0x7c]
  0x00495AC7: push     esi
  0x00495AC8: call     0x494bb2
  0x00495AD7: cmp      ebx, 0x20
  0x00495ADA: jne      0x495af4
  0x00495EAF: mov      dword ptr [ebp - 0x10], 1
  0x00495EB6: jmp      0x495ef3
  0x00495AB2: test     eax, eax
  0x00495AB4: jne      0x495ef3
  0x00495ACD: push     eax
  0x00495ACE: push     dword ptr [ebp + 0xc]
  0x00495AD1: push     edi
  0x00495AD2: call     0x494910
  0x00495ADC: mov      eax, esi
  0x00495ADE: shr      eax, 0x10
  0x00495AE1: push     eax
  0x00495AE2: movsx    eax, si
  0x00495AE5: push     eax
  0x00495AE6: push     edi
  0x00495AE7: call     0x494971
  0x00495AF4: mov      eax, dword ptr [edi]
  0x00495AF6: mov      ecx, edi
  0x00495AF8: call     dword ptr [eax + 0x28]
  0x00495EF3: mov      eax, dword ptr [ebp + 0x14]
  0x00495EF6: test     eax, eax
  0x00495EF8: je       0x495eff
  0x00495ABA: jmp      0x495be2
  0x00495AEC: test     eax, eax
  0x00495AEE: jne      0x495eaf
  0x00495AFB: mov      ecx, dword ptr [ebp + 8]
  0x00495AFE: mov      dword ptr [ebp - 0x14], eax
  0x00495B01: mov      ebx, eax
  0x00495B03: mov      eax, 0x1ff
  0x00495B08: and      ebx, eax
  0x00495B0A: and      ecx, eax
  0x00495B0C: push     7
  0x00495B0E: xor      ebx, ecx
  0x00495B10: call     0x49d98a
  0x00495EFF: push     1
  0x00495F01: pop      eax
  0x00495F02: jmp      0x495be4
  0x00495EFA: mov      ecx, dword ptr [ebp - 0x10]
  0x00495EFD: mov      dword ptr [eax], ecx
  0x00495EFF: push     1
  0x00495F01: pop      eax
  0x00495F02: jmp      0x495be4
  0x00495B15: mov      ecx, dword ptr [ebp + 8]
  0x00495B18: lea      eax, [ebx + ebx*2]
  0x00495B1B: cmp      ecx, dword ptr [eax*4 + 0x300f280]
  0x00495B22: lea      ebx, [eax*4 + 0x300f280]
  0x00495B29: mov      eax, dword ptr [ebp - 0x14]
  0x00495B2C: jne      0x495b5a
  0x00495BE4: mov      ecx, dword ptr [ebp - 0xc]
  0x00495BE7: pop      edi
  0x00495BE8: pop      esi
  0x00495BE9: pop      ebx
  0x00495BEA: mov      dword ptr fs:[0], ecx
  0x00495BF1: leave    
  0x00495BF2: ret      0x10
  0x00495B2E: cmp      eax, dword ptr [ebx + 8]
  0x00495B31: jne      0x495b5a
  0x00495B5A: test     eax, eax
  0x00495B5C: mov      dword ptr [ebx], ecx
  0x00495B5E: mov      dword ptr [ebx + 8], eax
  0x00495B61: je       0x495bd7
  0x00495B33: mov      ebx, dword ptr [ebx + 4]
  0x00495B36: push     7
  0x00495B38: mov      dword ptr [ebp + 0x10], ebx
  0x00495B3B: call     0x49d9fa
  0x00495BD7: and      dword ptr [ebx + 4], 0
  0x00495BDB: push     7
  0x00495BDD: call     0x49d9fa
  0x00495B63: jmp      0x495b6b
  0x00495B40: test     ebx, ebx
  0x00495B42: je       0x495be2
  0x00495B6B: mov      edx, 0xc000
  0x00495B70: cmp      ecx, edx
  0x00495B72: jae      0x495b8a
  0x00495B48: cmp      dword ptr [ebp + 8], 0xc000
  0x00495B4F: jb       0x495c02
  0x00495B74: push     0
  0x00495B76: push     0
  0x00495B78: push     ecx
  0x00495B79: push     dword ptr [eax + 4]
  0x00495B7C: call     0x4959d5
  0x00495B8A: mov      eax, dword ptr [eax + 4]
  0x00495B8D: push     0
  0x00495B8F: push     0
  0x00495B91: push     edx
  0x00495B92: push     eax
  0x00495B93: call     0x4959d5
  0x00495C02: mov      ecx, dword ptr [ebp + 0x10]
  0x00495C05: mov      ebx, dword ptr [ebx + 0x14]
  0x00495C08: cmp      dword ptr [ecx + 8], 0x1a
  0x00495C0C: mov      eax, dword ptr [ecx + 0x10]
  0x00495C0F: jne      0x495c23
  0x00495B55: jmp      0x495ee5
  0x00495B81: test     eax, eax
  0x00495B83: mov      dword ptr [ebp + 0x10], eax
  0x00495B86: jne      0x495bf5
  0x00495B98: test     eax, eax
  0x00495B9A: mov      dword ptr [ebp + 0x10], eax
  0x00495B9D: je       0x495bcb
  0x00495C11: call     dword ptr [0x4a21b0]
  0x00495C23: dec      eax
  0x00495C24: cmp      eax, 0x30
  0x00495C27: ja       0x495ef3
  0x00495EE5: mov      ebx, dword ptr [ebx + 0x14]
  0x00495EE8: push     esi
  0x00495EE9: push     dword ptr [ebp + 0xc]
  0x00495EEC: mov      ecx, edi
  0x00495EEE: call     ebx
  0x00495B88: jmp      0x495bcb
  0x00495BF5: push     7
  0x00495BF7: mov      dword ptr [ebx + 4], eax
  0x00495BFA: call     0x49d9fa
  0x00495BCB: mov      eax, dword ptr [ebp - 0x14]
  0x00495BCE: mov      eax, dword ptr [eax]
  0x00495BD0: test     eax, eax
  0x00495BD2: mov      dword ptr [ebp - 0x14], eax
  0x00495BD5: jne      0x495b65
  0x00495B9F: jmp      0x495ba4
  0x00495C17: mov      ecx, dword ptr [ebp + 0x10]
  0x00495C1A: cmp      al, 4
  0x00495C1C: sbb      eax, eax
  0x00495C1E: and      al, 0xf0
  0x00495C20: add      eax, 0x2f
  0x00495C23: dec      eax
  0x00495C24: cmp      eax, 0x30
  0x00495C27: ja       0x495ef3
  0x00495C2D: jmp      dword ptr [eax*4 + 0x495f07]
  0x00495EF0: mov      dword ptr [ebp - 0x10], eax
  0x00495EF3: mov      eax, dword ptr [ebp + 0x14]
  0x00495EF6: test     eax, eax
  0x00495EF8: je       0x495eff
  0x00495BFF: mov      ebx, dword ptr [ebp + 0x10]
  0x00495C02: mov      ecx, dword ptr [ebp + 0x10]
  0x00495C05: mov      ebx, dword ptr [ebx + 0x14]
  0x00495C08: cmp      dword ptr [ecx + 8], 0x1a
  0x00495C0C: mov      eax, dword ptr [ecx + 0x10]
  0x00495C0F: jne      0x495c23
  0x00495B65: mov      eax, dword ptr [ebp - 0x14]
  0x00495B68: mov      ecx, dword ptr [ebp + 8]
  0x00495B6B: mov      edx, 0xc000
  0x00495B70: cmp      ecx, edx
  0x00495B72: jae      0x495b8a
  0x00495BA4: mov      ecx, dword ptr [eax + 0x10]
  0x00495BA7: mov      edx, dword ptr [ebp + 8]
  0x00495BAA: cmp      dword ptr [ecx], edx
  0x00495BAC: je       0x495ed8
  0x00495E82: mov      eax, dword ptr [ebp + 0xc]
  0x00495E85: push     esi
  0x00495E86: shr      eax, 0x10
  0x00495E89: push     eax
  0x00495E8A: movzx    eax, word ptr [ebp + 0xc]
  0x00495E8E: jmp      0x495dab
  0x00495D85: mov      eax, esi
  0x00495D87: shr      eax, 0x10
  0x00495D8A: push     eax
  0x00495D8B: movzx    eax, si
  0x00495D8E: jmp      0x495e9d
  0x00495E0A: push     esi
  0x00495E0B: push     dword ptr [ebp + 0xc]
  0x00495E0E: call     0x494bb2
  0x00495D93: push     dword ptr [ebp + 0xc]
  0x00495D96: call     0x494bb2
  0x00495E93: movsx    eax, si
  0x00495E96: shr      esi, 0x10
  0x00495E99: movsx    ecx, si
  0x00495E9C: push     ecx
  0x00495E9D: push     eax
  0x00495E9E: push     dword ptr [ebp + 0xc]
  0x00495EA1: mov      ecx, edi
  0x00495EA3: call     ebx
  0x00495E18: push     esi
  0x00495E19: call     0x494bb2
  0x00495D1D: mov      eax, dword ptr [ebp + 0xc]
  0x00495D20: shr      eax, 0x10
  0x00495D23: push     eax
  0x00495D24: push     esi
  0x00495D25: call     0x494bb2
  0x00495E21: mov      eax, dword ptr [ebp + 0xc]
  0x00495E24: shr      eax, 0x10
  0x00495E27: push     eax
  0x00495E28: push     esi
  0x00495E29: call     0x494bb2
  0x00495EA7: push     esi
  0x00495EA8: mov      ecx, edi
  0x00495EAA: push     dword ptr [ebp + 0xc]
  0x00495EAD: call     ebx
  0x00495D2C: mov      eax, dword ptr [ebp + 0xc]
  0x00495D2F: shr      eax, 0x10
  0x00495D32: push     eax
  0x00495D33: movzx    eax, word ptr [ebp + 0xc]
  0x00495D37: jmp      0x495e72
  0x00495E30: mov      eax, dword ptr [ebp + 0xc]
  0x00495E33: movsx    edx, ax
  0x00495E36: shr      eax, 0x10
  0x00495E39: cmp      dword ptr [ecx + 0x10], 0x1d
  0x00495E3D: mov      dword ptr [ebp + 8], edx
  0x00495E40: movsx    eax, ax
  0x00495E43: mov      dword ptr [ebp + 0xc], eax
  0x00495E46: jne      0x495e57
  0x00495DB1: push     dword ptr [ebp + 0xc]
  0x00495DB4: call     0x4992c8
  0x00495C34: push     dword ptr [ebp + 0xc]
  0x00495C37: call     0x4992c8
  0x00495EB8: movzx    eax, si
  0x00495EBB: shr      esi, 0x10
  0x00495EBE: push     esi
  0x00495EBF: push     eax
  0x00495EC0: mov      eax, dword ptr [ebp + 0xc]
  0x00495EC3: mov      ecx, edi
  0x00495EC5: shr      eax, 0x10
  0x00495EC8: push     eax
  0x00495EC9: movzx    eax, word ptr [ebp + 0xc]
  0x00495ECD: push     eax
  0x00495ECE: call     ebx
  0x00495D3C: push     esi
  0x00495D3D: mov      ecx, edi
  0x00495D3F: call     ebx
  0x00495DBF: push     dword ptr [ebp + 0xc]
  0x00495DC2: call     0x49853e
  0x00495C42: push     dword ptr [ebp + 0xc]
  0x00495C45: jmp      0x495d3d
  0x00495D46: push     esi
  0x00495D47: call     0x49853e
  0x00495DC9: mov      eax, esi
  0x00495DCB: shr      eax, 0x10
  0x00495DCE: push     eax
  0x00495DCF: movzx    eax, si
  0x00495DD2: push     eax
  0x00495DD3: push     dword ptr [ebp + 0xc]
  0x00495DD6: call     0x49853e
  0x00495C4A: mov      eax, esi
  0x00495C4C: shr      eax, 0x10
  0x00495C4F: push     eax
  0x00495C50: movsx    eax, si
  0x00495C53: push     eax
  0x00495C54: push     dword ptr [ebp + 0xc]
  0x00495C57: call     0x494bb2
  0x00495E5B: push     esi
  0x00495E5C: push     dword ptr [ebp + 0xc]
  0x00495E5F: mov      ecx, edi
  0x00495E61: call     ebx
  0x00495DDD: push     dword ptr [ebp + 0xc]
  0x00495DE0: jmp      0x495de3
  0x00495C61: push     esi
  0x00495C62: push     dword ptr [ebp + 0xc]
  0x00495C65: call     0x494bb2
  0x00495D62: mov      ecx, edi
  0x00495D64: call     ebx
  0x00495DE2: push     esi
  0x00495DE3: call     0x494bb2
  0x00495CE5: lea      ecx, [ebp - 0x24]
  0x00495CE8: call     0x499226
  0x00495EE8: push     esi
  0x00495EE9: push     dword ptr [ebp + 0xc]
  0x00495EEC: mov      ecx, edi
  0x00495EEE: call     ebx
  0x00495E68: movsx    eax, si
  0x00495E6B: shr      esi, 0x10
  0x00495E6E: movsx    ecx, si
  0x00495E71: push     ecx
  0x00495E72: push     eax
  0x00495E73: jmp      0x495eec
  0x00495DEA: mov      eax, esi
  0x00495DEC: shr      eax, 0x10
  0x00495DEF: push     eax
  0x00495DF0: movzx    eax, si
  0x00495DF3: jmp      0x495dff
  0x00495D6B: push     dword ptr [ebp + 0xc]
  0x00495D6E: jmp      0x495e7c
  0x00495C6F: lea      ecx, [ebp - 0x24]
  0x00495C72: call     0x499226
  0x00495D73: mov      eax, esi
  0x00495D75: shr      eax, 0x10
  0x00495D78: movsx    eax, ax
  0x00495D7B: push     eax
  0x00495D7C: movsx    eax, si
  0x00495D7F: push     eax
  0x00495D80: jmp      0x495e5f
  0x00495DF5: movsx    eax, si
  0x00495DF8: shr      esi, 0x10
  0x00495DFB: movsx    ecx, si
  0x00495DFE: push     ecx
  0x00495DFF: push     eax
  0x00495E00: push     dword ptr [ebp + 0xc]
  0x00495E03: call     0x494bb2
  0x00495E75: mov      ecx, edi
  0x00495E77: call     ebx
  0x00495E7B: push     esi
  0x00495E7C: mov      ecx, edi
  0x00495E7E: call     ebx
  0x00495ED8: push     7
  0x00495EDA: mov      dword ptr [ebx + 4], eax
  0x00495EDD: call     0x49d9fa
  0x00495BB2: push     0
  0x00495BB4: push     0
  0x00495BB6: add      eax, 0x18
  0x00495BB9: push     0xc000
  0x00495BBE: push     eax
  0x00495BBF: call     0x4959d5
  0x00495DAB: push     eax
  0x00495DAC: jmp      0x495ea1
  0x00495E9D: push     eax
  0x00495E9E: push     dword ptr [ebp + 0xc]
  0x00495EA1: mov      ecx, edi
  0x00495EA3: call     ebx
  0x00495E13: jmp      0x495d7f
  0x00495D9B: push     eax
  0x00495D9C: push     esi
  0x00495D9D: call     0x494bb2
  0x00495EA5: jmp      0x495ef3
  0x00495E1E: push     eax
  0x00495E1F: jmp      0x495e5c
  0x00495D2A: jmp      0x495d53
  0x00495E2E: jmp      0x495e89
  0x00495E72: push     eax
  0x00495E73: jmp      0x495eec
  0x00495E48: push     esi
  0x00495E49: call     0x494bb2
  0x00495E57: push     eax
  0x00495E58: push     edx
  0x00495E59: jmp      0x495e5f
  0x00495DB9: push     eax
  0x00495DBA: jmp      0x495e7c
  0x00495C3C: push     eax
  0x00495C3D: jmp      0x495d3d
  0x00495ED0: mov      dword ptr [ebp - 0x10], eax
  0x00495ED3: jmp      0x495ab2
  0x00495D41: jmp      0x495ef0
  0x00495DC7: jmp      0x495db9
  0x00495D3D: mov      ecx, edi
  0x00495D3F: call     ebx
  0x00495D4C: push     eax
  0x00495D4D: mov      eax, dword ptr [ebp + 0xc]
  0x00495D50: shr      eax, 0x10
  0x00495D53: push     eax
  0x00495D54: movzx    eax, word ptr [ebp + 0xc]
  0x00495D58: push     eax
  0x00495D59: mov      ecx, edi
  0x00495D5B: call     ebx
  0x00495DDB: jmp      0x495dab
  0x00495C5C: jmp      0x495d58
  0x00495E63: jmp      0x495ef3
  0x00495DE3: call     0x494bb2
  0x00495C6A: jmp      0x495e72
  0x00495D66: jmp      0x495ef3
  0x00495DE8: jmp      0x495db9
  0x00495CED: mov      eax, dword ptr [esi + 4]
  0x00495CF0: push     dword ptr [esi + 8]
  0x00495CF3: mov      dword ptr [ebp - 0x20], eax
  0x00495CF6: lea      eax, [ebp - 0x24]
  0x00495CF9: push     eax
  0x00495CFA: mov      ecx, edi
  0x00495CFC: mov      dword ptr [ebp - 4], 2
  0x00495D03: call     ebx
  0x00495EEC: mov      ecx, edi
  0x00495EEE: call     ebx
  0x00495DFF: push     eax
  0x00495E00: push     dword ptr [ebp + 0xc]
  0x00495E03: call     0x494bb2
  0x00495E7C: mov      ecx, edi
  0x00495E7E: call     ebx
  0x00495C77: mov      eax, dword ptr [esi + 4]
  0x00495C7A: and      dword ptr [ebp - 4], 0
  0x00495C7E: lea      ecx, [ebp - 0x60]
  0x00495C81: mov      dword ptr [ebp - 0x20], eax
  0x00495C84: call     0x494787
  0x00495E5F: mov      ecx, edi
  0x00495E61: call     ebx
  0x00495E08: jmp      0x495dab
  0x00495E79: jmp      0x495ef0
  0x00495E80: jmp      0x495ef3
  0x00495EE2: mov      ebx, dword ptr [ebp + 0x10]
  0x00495EE5: mov      ebx, dword ptr [ebx + 0x14]
  0x00495EE8: push     esi
  0x00495EE9: push     dword ptr [ebp + 0xc]
  0x00495EEC: mov      ecx, edi
  0x00495EEE: call     ebx
  0x00495BC4: test     eax, eax
  0x00495BC6: mov      dword ptr [ebp + 0x10], eax
  0x00495BC9: jne      0x495ba1
  0x00495EA1: mov      ecx, edi
  0x00495EA3: call     ebx
  0x00495D7F: push     eax
  0x00495D80: jmp      0x495e5f
  0x00495DA2: push     eax
  0x00495DA3: xor      eax, eax
  0x00495DA5: cmp      dword ptr [edi + 0x1c], esi
  0x00495DA8: sete     al
  0x00495DAB: push     eax
  0x00495DAC: jmp      0x495ea1
  0x00495E5C: push     dword ptr [ebp + 0xc]
  0x00495E5F: mov      ecx, edi
  0x00495E61: call     ebx
  0x00495D53: push     eax
  0x00495D54: movzx    eax, word ptr [ebp + 0xc]
  0x00495D58: push     eax
  0x00495D59: mov      ecx, edi
  0x00495D5B: call     ebx
  0x00495E89: push     eax
  0x00495E8A: movzx    eax, word ptr [ebp + 0xc]
  0x00495E8E: jmp      0x495dab
  0x00495E4E: push     eax
  0x00495E4F: push     dword ptr [ebp + 0xc]
  0x00495E52: push     dword ptr [ebp + 8]
  0x00495E55: jmp      0x495ea1
  0x00495D5D: jmp      0x495ef0
  0x00495D58: push     eax
  0x00495D59: mov      ecx, edi
  0x00495D5B: call     ebx
  0x00495D05: and      dword ptr [ebp - 0x20], 0
  0x00495D09: or       dword ptr [ebp - 4], 0xffffffff
  0x00495D0D: mov      dword ptr [ebp - 0x10], eax
  0x00495D10: lea      ecx, [ebp - 0x24]
  0x00495D13: call     0x49935b
  0x00495C89: mov      eax, dword ptr [esi]
  0x00495C8B: mov      esi, dword ptr [esi + 8]
  0x00495C8E: push     eax
  0x00495C8F: mov      byte ptr [ebp - 4], 1
  0x00495C93: mov      dword ptr [ebp - 0x44], eax
  0x00495C96: call     0x494bd9
  0x00495BA1: mov      eax, dword ptr [ebp + 0x10]
  0x00495BA4: mov      ecx, dword ptr [eax + 0x10]
  0x00495BA7: mov      edx, dword ptr [ebp + 8]
  0x00495BAA: cmp      dword ptr [ecx], edx
  0x00495BAC: je       0x495ed8
  0x00495D18: jmp      0x495ef3
  0x00495C9B: test     eax, eax
  0x00495C9D: jne      0x495cbb
  0x00495C9F: mov      eax, dword ptr [edi + 0x34]
  0x00495CA2: test     eax, eax
  0x00495CA4: je       0x495cb8
  0x00495CBB: push     esi
  0x00495CBC: push     eax
  0x00495CBD: lea      eax, [ebp - 0x24]
  0x00495CC0: mov      ecx, edi
  0x00495CC2: push     eax
  0x00495CC3: call     ebx
  0x00495CB8: lea      eax, [ebp - 0x60]
  0x00495CBB: push     esi
  0x00495CBC: push     eax
  0x00495CBD: lea      eax, [ebp - 0x24]
  0x00495CC0: mov      ecx, edi
  0x00495CC2: push     eax
  0x00495CC3: call     ebx
  0x00495CA6: push     dword ptr [ebp - 0x44]
  0x00495CA9: lea      ecx, [eax + 0x20]
  0x00495CAC: call     0x492b65
  0x00495CC5: and      dword ptr [ebp - 0x20], 0
  0x00495CC9: and      dword ptr [ebp - 0x44], 0
  0x00495CCD: and      byte ptr [ebp - 4], 0
  0x00495CD1: lea      ecx, [ebp - 0x60]
  0x00495CD4: mov      dword ptr [ebp - 0x10], eax
  0x00495CD7: call     0x495240
  0x00495CB1: test     eax, eax
  0x00495CB3: je       0x495cb8
  0x00495CDC: or       dword ptr [ebp - 4], 0xffffffff
  0x00495CE0: lea      ecx, [ebp - 0x24]
  0x00495CE3: jmp      0x495d13
  0x00495CB5: mov      dword ptr [ebp - 0x28], eax
  0x00495CB8: lea      eax, [ebp - 0x60]
  0x00495CBB: push     esi
  0x00495CBC: push     eax
  0x00495CBD: lea      eax, [ebp - 0x24]
  0x00495CC0: mov      ecx, edi
  0x00495CC2: push     eax
  0x00495CC3: call     ebx
  0x00495D13: call     0x49935b

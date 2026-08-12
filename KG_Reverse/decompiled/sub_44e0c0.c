/**
 * Function: sub_44e0c0
 * Address: 0x0044E0C0
 * Blocks: 216
 * Instructions: 1628
 * Analyzed with angr + capstone
 */
void* sub_44e0c0(void) {

  /* Block 1 @ 0x0044E0C0 */
  // sub esp, 0x1c
  // push ebx
  // push ebp
  // push esi
  // mov esi, dword ptr [esp + 0x34]
  // xor ebx, ebx
  // push edi
  // mov eax, dword ptr [esi + 0x190]
  // mov ecx, dword ptr [esi + 0x198]
  // mov ebp, dword ptr [esi + 0x78]
  // mov edx, dword ptr [esi + 0x19c]
  // mov dword ptr [esp + 0x38], eax
  // mov eax, dword ptr [esi + 0x1a0]
  // mov edi, dword ptr [esi + 0x194]
  // mov dword ptr [esp + 0x1c], eax
  // mov eax, dword ptr [esp + 0x30]
  // mov dword ptr [esp + 0x14], ecx
  // mov ecx, dword ptr [esi + 0x1a4]
  // mov dword ptr [esp + 0x20], edx
  // mov bl, byte ptr [eax + 8]
  // mov edx, dword ptr [esi + 0x188]
  // shr ebp, 0xd
  // and ebp, 1
  // mov dword ptr [esp + 0x18], ecx
  // mov ecx, dword ptr [eax]
  // CMP ebx, 6 (set flags)
  // mov dword ptr [esp + 0x28], edi
  // mov dword ptr [esp + 0x10], edx
  // mov dword ptr [esp + 0x24], ebp
  // if (above) goto 0x44f0e9
  /* Block 2 @ 0x0044E132 */
  goto dword ptr [ebx*4 + 0x44f0f4];
  /* Block 3 @ 0x0044F0E9 */
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // add esp, 0x1c
  return;
  /* Block 4 @ 0x0044EA8D */
  // CMP byte ptr [eax + 9], 8 (set flags)
  // if (not equal) goto 0x44ed0e
  /* Block 5 @ 0x0044E7B3 */
  // CMP byte ptr [eax + 9], 8 (set flags)
  // if (not equal) goto 0x44e8e1
  /* Block 6 @ 0x0044E139 */
  // xor ebx, ebx
  // mov bl, byte ptr [eax + 9]
  // mov eax, ebx
  // lea ebp, [eax - 1]
  // CMP ebp, 0xf (set flags)
  // if (above) goto 0x44f0e9
  /* Block 7 @ 0x0044E4FF */
  // CMP byte ptr [eax + 9], 8 (set flags)
  // if (not equal) goto 0x44e5f6
  /* Block 8 @ 0x0044EA97 */
  // mov eax, dword ptr [esp + 0x20]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44ec30
  /* Block 9 @ 0x0044ED0E */
  // TEST edi, edi (set flags)
  // if (equal) goto 0x44efaa
  /* Block 10 @ 0x0044E7BD */
  // mov ebx, dword ptr [esp + 0x20]
  // TEST ebx, ebx (set flags)
  // if (equal) goto 0x44e87e
  /* Block 11 @ 0x0044E8E1 */
  // TEST edi, edi (set flags)
  // if (equal) goto 0x44e9f8
  /* Block 12 @ 0x0044E14C */
  // xor eax, eax
  // mov al, byte ptr [ebp + 0x44f128]
  goto dword ptr [eax*4 + 0x44f110];
  /* Block 13 @ 0x0044E509 */
  // mov edx, dword ptr [esp + 0x38]
  // TEST edx, edx (set flags)
  // if (equal) goto 0x44e596
  /* Block 14 @ 0x0044E5F6 */
  // TEST edi, edi (set flags)
  // if (equal) goto 0x44e710
  /* Block 15 @ 0x0044EC30 */
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 16 @ 0x0044EAA3 */
  // mov eax, dword ptr [esp + 0x14]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44ec30
  /* Block 17 @ 0x0044EFAA */
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 18 @ 0x0044ED16 */
  // mov eax, dword ptr [esp + 0x1c]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44efaa
  /* Block 19 @ 0x0044E87E */
  // mov edx, dword ptr [esp + 0x34]
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 20 @ 0x0044E7C9 */
  // mov eax, dword ptr [esp + 0x14]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44e87e
  /* Block 21 @ 0x0044E9F8 */
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 22 @ 0x0044E8E9 */
  // mov eax, dword ptr [esp + 0x1c]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44e9f8
  /* Block 23 @ 0x0044E44E */
  // TEST edi, edi (set flags)
  // if (equal) goto 0x44e4bb
  /* Block 24 @ 0x0044E2D6 */
  // mov eax, dword ptr [esp + 0x38]
  // mov edi, dword ptr [esp + 0x34]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44e37f
  /* Block 25 @ 0x0044E15B */
  // mov edi, dword ptr [esp + 0x34]
  // mov eax, 7
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 26 @ 0x0044E1BD */
  // mov eax, dword ptr [esp + 0x38]
  // mov edi, dword ptr [esp + 0x34]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44e276
  /* Block 27 @ 0x0044E3DF */
  // mov edi, dword ptr [esp + 0x38]
  // TEST edi, edi (set flags)
  // if (equal) goto 0x44e421
  /* Block 28 @ 0x0044E596 */
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 29 @ 0x0044E515 */
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 30 @ 0x0044E710 */
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 31 @ 0x0044E5FE */
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 32 @ 0x0044EC38 */
  // mov eax, dword ptr [esp + 0x34]
  // inc eax
  // mov dl, byte ptr [eax + 2]
  // TEST dl, dl (set flags)
  // if (not equal) goto 0x44ec63
  /* Block 33 @ 0x0044EAAF */
  // mov edx, dword ptr [esp + 0x38]
  // TEST edx, edx (set flags)
  // if (equal) goto 0x44ec30
  /* Block 34 @ 0x0044EFB2 */
  // mov edx, dword ptr [esp + 0x34]
  // mov ebx, ecx
  // lea eax, [edx + 1]
  // movzx di, byte ptr [eax + 5]
  // movzx cx, byte ptr [eax + 6]
  // shl edi, 8
  // add edi, ecx
  // TEST di, di (set flags)
  // if (not equal) goto 0x44f00c
  /* Block 35 @ 0x0044ED22 */
  // mov eax, dword ptr [esp + 0x18]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44efaa
  /* Block 36 @ 0x0044E88A */
  // mov edi, ecx
  // mov al, byte ptr [edx + 1]
  // TEST al, al (set flags)
  // if (not equal) goto 0x44e89d
  /* Block 37 @ 0x0044E7D5 */
  // mov eax, dword ptr [esp + 0x38]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44e87e
  /* Block 38 @ 0x0044EA00 */
  // mov edx, dword ptr [esp + 0x34]
  // mov ebp, ecx
  // inc edx
  // movzx ax, byte ptr [edx + 1]
  // movzx cx, byte ptr [edx + 2]
  // shl eax, 8
  // add eax, ecx
  // TEST ax, ax (set flags)
  // if (not equal) goto 0x44ea30
  /* Block 39 @ 0x0044E8F5 */
  // mov eax, dword ptr [esp + 0x18]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x44e9f8
  /* Block 40 @ 0x0044E4BB */
  // mov eax, dword ptr [esp + 0x34]
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 41 @ 0x0044E452 */
  // mov ebp, dword ptr [esp + 0x34]
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 42 @ 0x0044E37F */
  // TEST ecx, ecx (set flags)
  // mov eax, 4
  // if (below or equal) goto 0x44f0e9
  /* Block 43 @ 0x0044E2E6 */
  // TEST ecx, ecx (set flags)
  // mov edx, 4
  // if (below or equal) goto 0x44f0e9
  /* Block 44 @ 0x0044E16C */
  // mov ebp, ecx
  // mov dl, byte ptr [edi]
  // mov cl, al
  // mov bl, dl
  // shr bl, cl
  // xor cx, cx
  // and bl, 1
  // mov cl, bl
  // CMP cx, word ptr [esi + 0x1c0] (set flags)
  // if (not equal) goto 0x44e1a5
  /* Block 45 @ 0x0044E276 */
  // TEST ecx, ecx (set flags)
  // mov eax, 6
  // if (below or equal) goto 0x44f0e9
  /* Block 46 @ 0x0044E1CD */
  // TEST ecx, ecx (set flags)
  // mov edx, 6
  // if (below or equal) goto 0x44f0e9
  /* Block 47 @ 0x0044E421 */
  // mov eax, dword ptr [esp + 0x34]
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 48 @ 0x0044E3E7 */
  // mov edx, dword ptr [esp + 0x34]
  // TEST ecx, ecx (set flags)
  // if (below or equal) goto 0x44f0e9
  /* Block 49 @ 0x0044E59E */
  // mov edx, dword ptr [esp + 0x34]
  // lea eax, [edx + 2]
  // movzx dx, byte ptr [eax - 2]
  // CMP dx, word ptr [esi + 0x1ba] (set flags)
  // if (not equal) goto 0x44e5e8
  /* Block 50 @ 0x0044E51D */
  // mov eax, dword ptr [esp + 0x34]
  // mov edi, ecx
  // add eax, 2
  // movzx cx, byte ptr [eax - 2]
  // CMP cx, word ptr [esi + 0x1ba] (set flags)
  // if (not equal) goto 0x44e569
  /* Block 51 @ 0x0044E718 */
  // mov eax, dword ptr [esp + 0x34]
  // add eax, 2
  // movzx dx, byte ptr [eax - 2]
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0044E0C0: sub      esp, 0x1c
  0x0044E0C3: push     ebx
  0x0044E0C4: push     ebp
  0x0044E0C5: push     esi
  0x0044E0C6: mov      esi, dword ptr [esp + 0x34]
  0x0044E0CA: xor      ebx, ebx
  0x0044E0CC: push     edi
  0x0044E0CD: mov      eax, dword ptr [esi + 0x190]
  0x0044E0D3: mov      ecx, dword ptr [esi + 0x198]
  0x0044E0D9: mov      ebp, dword ptr [esi + 0x78]
  0x0044E0DC: mov      edx, dword ptr [esi + 0x19c]
  0x0044E0E2: mov      dword ptr [esp + 0x38], eax
  0x0044E0E6: mov      eax, dword ptr [esi + 0x1a0]
  0x0044E0EC: mov      edi, dword ptr [esi + 0x194]
  0x0044E0F2: mov      dword ptr [esp + 0x1c], eax
  0x0044E0F6: mov      eax, dword ptr [esp + 0x30]
  0x0044E0FA: mov      dword ptr [esp + 0x14], ecx
  0x0044E0FE: mov      ecx, dword ptr [esi + 0x1a4]
  0x0044E104: mov      dword ptr [esp + 0x20], edx
  0x0044E108: mov      bl, byte ptr [eax + 8]
  0x0044E10B: mov      edx, dword ptr [esi + 0x188]
  0x0044E111: shr      ebp, 0xd
  0x0044E114: and      ebp, 1
  0x0044E117: mov      dword ptr [esp + 0x18], ecx
  0x0044E11B: mov      ecx, dword ptr [eax]
  0x0044E11D: cmp      ebx, 6
  0x0044E120: mov      dword ptr [esp + 0x28], edi
  0x0044E124: mov      dword ptr [esp + 0x10], edx
  0x0044E128: mov      dword ptr [esp + 0x24], ebp
  0x0044E12C: ja       0x44f0e9
  0x0044E132: jmp      dword ptr [ebx*4 + 0x44f0f4]
  0x0044F0E9: pop      edi
  0x0044F0EA: pop      esi
  0x0044F0EB: pop      ebp
  0x0044F0EC: pop      ebx
  0x0044F0ED: add      esp, 0x1c
  0x0044F0F0: ret      
  0x0044EA8D: cmp      byte ptr [eax + 9], 8
  0x0044EA91: jne      0x44ed0e
  0x0044E7B3: cmp      byte ptr [eax + 9], 8
  0x0044E7B7: jne      0x44e8e1
  0x0044E139: xor      ebx, ebx
  0x0044E13B: mov      bl, byte ptr [eax + 9]
  0x0044E13E: mov      eax, ebx
  0x0044E140: lea      ebp, [eax - 1]
  0x0044E143: cmp      ebp, 0xf
  0x0044E146: ja       0x44f0e9
  0x0044E4FF: cmp      byte ptr [eax + 9], 8
  0x0044E503: jne      0x44e5f6
  0x0044EA97: mov      eax, dword ptr [esp + 0x20]
  0x0044EA9B: test     eax, eax
  0x0044EA9D: je       0x44ec30
  0x0044ED0E: test     edi, edi
  0x0044ED10: je       0x44efaa
  0x0044E7BD: mov      ebx, dword ptr [esp + 0x20]
  0x0044E7C1: test     ebx, ebx
  0x0044E7C3: je       0x44e87e
  0x0044E8E1: test     edi, edi
  0x0044E8E3: je       0x44e9f8
  0x0044E14C: xor      eax, eax
  0x0044E14E: mov      al, byte ptr [ebp + 0x44f128]
  0x0044E154: jmp      dword ptr [eax*4 + 0x44f110]
  0x0044E509: mov      edx, dword ptr [esp + 0x38]
  0x0044E50D: test     edx, edx
  0x0044E50F: je       0x44e596
  0x0044E5F6: test     edi, edi
  0x0044E5F8: je       0x44e710
  0x0044EC30: test     ecx, ecx
  0x0044EC32: jbe      0x44f0e9
  0x0044EAA3: mov      eax, dword ptr [esp + 0x14]
  0x0044EAA7: test     eax, eax
  0x0044EAA9: je       0x44ec30
  0x0044EFAA: test     ecx, ecx
  0x0044EFAC: jbe      0x44f0e9
  0x0044ED16: mov      eax, dword ptr [esp + 0x1c]
  0x0044ED1A: test     eax, eax
  0x0044ED1C: je       0x44efaa
  0x0044E87E: mov      edx, dword ptr [esp + 0x34]
  0x0044E882: test     ecx, ecx
  0x0044E884: jbe      0x44f0e9
  0x0044E7C9: mov      eax, dword ptr [esp + 0x14]
  0x0044E7CD: test     eax, eax
  0x0044E7CF: je       0x44e87e
  0x0044E9F8: test     ecx, ecx
  0x0044E9FA: jbe      0x44f0e9
  0x0044E8E9: mov      eax, dword ptr [esp + 0x1c]
  0x0044E8ED: test     eax, eax
  0x0044E8EF: je       0x44e9f8
  0x0044E44E: test     edi, edi
  0x0044E450: je       0x44e4bb
  0x0044E2D6: mov      eax, dword ptr [esp + 0x38]
  0x0044E2DA: mov      edi, dword ptr [esp + 0x34]
  0x0044E2DE: test     eax, eax
  0x0044E2E0: je       0x44e37f
  0x0044E15B: mov      edi, dword ptr [esp + 0x34]
  0x0044E15F: mov      eax, 7
  0x0044E164: test     ecx, ecx
  0x0044E166: jbe      0x44f0e9
  0x0044E1BD: mov      eax, dword ptr [esp + 0x38]
  0x0044E1C1: mov      edi, dword ptr [esp + 0x34]
  0x0044E1C5: test     eax, eax
  0x0044E1C7: je       0x44e276
  0x0044E3DF: mov      edi, dword ptr [esp + 0x38]
  0x0044E3E3: test     edi, edi
  0x0044E3E5: je       0x44e421
  0x0044E596: test     ecx, ecx
  0x0044E598: jbe      0x44f0e9
  0x0044E515: test     ecx, ecx
  0x0044E517: jbe      0x44f0e9
  0x0044E710: test     ecx, ecx
  0x0044E712: jbe      0x44f0e9
  0x0044E5FE: test     ecx, ecx
  0x0044E600: jbe      0x44f0e9
  0x0044EC38: mov      eax, dword ptr [esp + 0x34]
  0x0044EC3C: inc      eax
  0x0044EC3D: mov      dl, byte ptr [eax + 2]
  0x0044EC40: test     dl, dl
  0x0044EC42: jne      0x44ec63
  0x0044EAAF: mov      edx, dword ptr [esp + 0x38]
  0x0044EAB3: test     edx, edx
  0x0044EAB5: je       0x44ec30
  0x0044EFB2: mov      edx, dword ptr [esp + 0x34]
  0x0044EFB6: mov      ebx, ecx
  0x0044EFB8: lea      eax, [edx + 1]
  0x0044EFBB: movzx    di, byte ptr [eax + 5]
  0x0044EFC0: movzx    cx, byte ptr [eax + 6]
  0x0044EFC5: shl      edi, 8
  0x0044EFC8: add      edi, ecx
  0x0044EFCA: test     di, di
  0x0044EFCD: jne      0x44f00c
  0x0044ED22: mov      eax, dword ptr [esp + 0x18]
  0x0044ED26: test     eax, eax
  0x0044ED28: je       0x44efaa
  0x0044E88A: mov      edi, ecx
  0x0044E88C: mov      al, byte ptr [edx + 1]
  0x0044E88F: test     al, al
  0x0044E891: jne      0x44e89d
  0x0044E7D5: mov      eax, dword ptr [esp + 0x38]
  0x0044E7D9: test     eax, eax
  0x0044E7DB: je       0x44e87e
  0x0044EA00: mov      edx, dword ptr [esp + 0x34]
  0x0044EA04: mov      ebp, ecx
  0x0044EA06: inc      edx
  0x0044EA07: movzx    ax, byte ptr [edx + 1]
  0x0044EA0C: movzx    cx, byte ptr [edx + 2]
  0x0044EA11: shl      eax, 8
  0x0044EA14: add      eax, ecx
  0x0044EA16: test     ax, ax
  0x0044EA19: jne      0x44ea30
  0x0044E8F5: mov      eax, dword ptr [esp + 0x18]
  0x0044E8F9: test     eax, eax
  0x0044E8FB: je       0x44e9f8
  0x0044E4BB: mov      eax, dword ptr [esp + 0x34]
  0x0044E4BF: test     ecx, ecx
  0x0044E4C1: jbe      0x44f0e9
  0x0044E452: mov      ebp, dword ptr [esp + 0x34]
  0x0044E456: test     ecx, ecx
  0x0044E458: jbe      0x44f0e9
  0x0044E37F: test     ecx, ecx
  0x0044E381: mov      eax, 4
  0x0044E386: jbe      0x44f0e9
  0x0044E2E6: test     ecx, ecx
  0x0044E2E8: mov      edx, 4
  0x0044E2ED: jbe      0x44f0e9
  0x0044E16C: mov      ebp, ecx
  0x0044E16E: mov      dl, byte ptr [edi]
  0x0044E170: mov      cl, al
  0x0044E172: mov      bl, dl
  0x0044E174: shr      bl, cl
  0x0044E176: xor      cx, cx
  0x0044E179: and      bl, 1
  0x0044E17C: mov      cl, bl
  0x0044E17E: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E185: jne      0x44e1a5
  0x0044E276: test     ecx, ecx
  0x0044E278: mov      eax, 6
  0x0044E27D: jbe      0x44f0e9
  0x0044E1CD: test     ecx, ecx
  0x0044E1CF: mov      edx, 6
  0x0044E1D4: jbe      0x44f0e9
  0x0044E421: mov      eax, dword ptr [esp + 0x34]
  0x0044E425: test     ecx, ecx
  0x0044E427: jbe      0x44f0e9
  0x0044E3E7: mov      edx, dword ptr [esp + 0x34]
  0x0044E3EB: test     ecx, ecx
  0x0044E3ED: jbe      0x44f0e9
  0x0044E59E: mov      edx, dword ptr [esp + 0x34]
  0x0044E5A2: lea      eax, [edx + 2]
  0x0044E5A5: movzx    dx, byte ptr [eax - 2]
  0x0044E5AA: cmp      dx, word ptr [esi + 0x1ba]
  0x0044E5B1: jne      0x44e5e8
  0x0044E51D: mov      eax, dword ptr [esp + 0x34]
  0x0044E521: mov      edi, ecx
  0x0044E523: add      eax, 2
  0x0044E526: movzx    cx, byte ptr [eax - 2]
  0x0044E52B: cmp      cx, word ptr [esi + 0x1ba]
  0x0044E532: jne      0x44e569
  0x0044E718: mov      eax, dword ptr [esp + 0x34]
  0x0044E71C: add      eax, 2
  0x0044E71F: movzx    dx, byte ptr [eax - 2]
  0x0044E724: movzx    di, byte ptr [eax - 1]
  0x0044E729: shl      edx, 8
  0x0044E72C: add      edx, edi
  0x0044E72E: cmp      dx, word ptr [esi + 0x1ba]
  0x0044E735: jne      0x44e7a1
  0x0044E606: mov      eax, dword ptr [esp + 0x34]
  0x0044E60A: mov      ebp, ecx
  0x0044E60C: add      eax, 2
  0x0044E60F: movzx    cx, byte ptr [eax - 2]
  0x0044E614: movzx    bx, byte ptr [eax - 1]
  0x0044E619: shl      ecx, 8
  0x0044E61C: add      ecx, ebx
  0x0044E61E: cmp      cx, word ptr [esi + 0x1ba]
  0x0044E625: jne      0x44e693
  0x0044EC44: mov      dl, byte ptr [esi + 0x16a]
  0x0044EC4A: mov      byte ptr [eax - 1], dl
  0x0044EC4D: mov      dl, byte ptr [esi + 0x16c]
  0x0044EC53: mov      byte ptr [eax], dl
  0x0044EC55: mov      dl, byte ptr [esi + 0x16e]
  0x0044EC5B: mov      byte ptr [eax + 1], dl
  0x0044EC5E: jmp      0x44ecfc
  0x0044EC63: cmp      dl, 0xff
  0x0044EC66: jae      0x44ecfc
  0x0044EABB: test     ecx, ecx
  0x0044EABD: jbe      0x44f0e9
  0x0044EFCF: xor      edx, edx
  0x0044EFD1: mov      dl, byte ptr [esi + 0x16b]
  0x0044EFD7: mov      byte ptr [eax - 1], dl
  0x0044EFDA: mov      cl, byte ptr [esi + 0x16a]
  0x0044EFE0: xor      edx, edx
  0x0044EFE2: mov      byte ptr [eax], cl
  0x0044EFE4: mov      dl, byte ptr [esi + 0x16d]
  0x0044EFEA: mov      byte ptr [eax + 1], dl
  0x0044EFED: mov      cl, byte ptr [esi + 0x16c]
  0x0044EFF3: xor      edx, edx
  0x0044EFF5: mov      byte ptr [eax + 2], cl
  0x0044EFF8: mov      dl, byte ptr [esi + 0x16f]
  0x0044EFFE: mov      byte ptr [eax + 3], dl
  0x0044F001: mov      cl, byte ptr [esi + 0x16e]
  0x0044F007: jmp      0x44f0dc
  0x0044F00C: cmp      di, 0xffff
  0x0044F011: jae      0x44f0df
  0x0044ED2E: test     ecx, ecx
  0x0044ED30: jbe      0x44f0e9
  0x0044E893: mov      al, byte ptr [esi + 0x170]
  0x0044E899: mov      byte ptr [edx], al
  0x0044E89B: jmp      0x44e8d3
  0x0044E89D: cmp      al, 0xff
  0x0044E89F: jae      0x44e8d3
  0x0044E7E1: mov      edi, dword ptr [esp + 0x34]
  0x0044E7E5: test     ecx, ecx
  0x0044E7E7: jbe      0x44f0e9
  0x0044EA1B: xor      eax, eax
  0x0044EA1D: mov      al, byte ptr [esi + 0x171]
  0x0044EA23: mov      byte ptr [edx - 1], al
  0x0044EA26: mov      cl, byte ptr [esi + 0x170]
  0x0044EA2C: mov      byte ptr [edx], cl
  0x0044EA2E: jmp      0x44ea7f
  0x0044EA30: cmp      ax, 0xffff
  0x0044EA34: jae      0x44ea7f
  0x0044E901: test     ecx, ecx
  0x0044E903: jbe      0x44f0e9
  0x0044E4C7: movzx    dx, byte ptr [eax]
  0x0044E4CB: movzx    di, byte ptr [eax + 1]
  0x0044E4D0: shl      edx, 8
  0x0044E4D3: add      edx, edi
  0x0044E4D5: cmp      dx, word ptr [esi + 0x1c0]
  0x0044E4DC: jne      0x44e4f1
  0x0044E45E: mov      ebx, ecx
  0x0044E460: movzx    ax, byte ptr [ebp]
  0x0044E465: movzx    cx, byte ptr [ebp + 1]
  0x0044E46A: shl      eax, 8
  0x0044E46D: add      eax, ecx
  0x0044E46F: cmp      ax, word ptr [esi + 0x1c0]
  0x0044E476: jne      0x44e48e
  0x0044E38C: mov      ebp, ecx
  0x0044E38E: mov      dl, byte ptr [edi]
  0x0044E390: mov      cl, al
  0x0044E392: mov      bl, dl
  0x0044E394: shr      bl, cl
  0x0044E396: xor      cx, cx
  0x0044E399: and      bl, 0xf
  0x0044E39C: mov      cl, bl
  0x0044E39E: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E3A5: jne      0x44e3c5
  0x0044E2F3: mov      dword ptr [esp + 0x34], ecx
  0x0044E2F7: mov      ebp, eax
  0x0044E2F9: mov      al, byte ptr [edi]
  0x0044E2FB: mov      cl, dl
  0x0044E2FD: mov      bl, al
  0x0044E2FF: shr      bl, cl
  0x0044E301: xor      cx, cx
  0x0044E304: and      bl, 0xf
  0x0044E307: mov      cl, bl
  0x0044E309: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E310: jne      0x44e32a
  0x0044E187: mov      ecx, 7
  0x0044E18C: mov      ebx, 0x7f7f
  0x0044E191: sub      ecx, eax
  0x0044E193: sar      ebx, cl
  0x0044E195: mov      ecx, eax
  0x0044E197: and      bl, dl
  0x0044E199: mov      dl, byte ptr [esi + 0x170]
  0x0044E19F: shl      dl, cl
  0x0044E1A1: or       bl, dl
  0x0044E1A3: mov      byte ptr [edi], bl
  0x0044E1A5: test     eax, eax
  0x0044E1A7: jne      0x44e1b1
  0x0044E1A5: test     eax, eax
  0x0044E1A7: jne      0x44e1b1
  0x0044E283: mov      ebp, ecx
  0x0044E285: mov      dl, byte ptr [edi]
  0x0044E287: mov      cl, al
  0x0044E289: mov      bl, dl
  0x0044E28B: shr      bl, cl
  0x0044E28D: xor      cx, cx
  0x0044E290: and      bl, 3
  0x0044E293: mov      cl, bl
  0x0044E295: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E29C: jne      0x44e2bc
  0x0044E1DA: mov      dword ptr [esp + 0x34], ecx
  0x0044E1DE: mov      ebp, eax
  0x0044E1E0: mov      al, byte ptr [edi]
  0x0044E1E2: mov      cl, dl
  0x0044E1E4: mov      bl, al
  0x0044E1E6: shr      bl, cl
  0x0044E1E8: xor      cx, cx
  0x0044E1EB: and      bl, 3
  0x0044E1EE: mov      cl, bl
  0x0044E1F0: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E1F7: jne      0x44e211
  0x0044E42D: movzx    dx, byte ptr [eax]
  0x0044E431: cmp      dx, word ptr [esi + 0x1c0]
  0x0044E438: jne      0x44e442
  0x0044E3F3: mov      al, byte ptr [edx]
  0x0044E3F5: xor      bx, bx
  0x0044E3F8: mov      bl, al
  0x0044E3FA: cmp      bx, word ptr [esi + 0x1c0]
  0x0044E401: jne      0x44e40b
  0x0044E5B3: movzx    dx, byte ptr [eax - 1]
  0x0044E5B8: cmp      dx, word ptr [esi + 0x1bc]
  0x0044E5BF: jne      0x44e5e8
  0x0044E5E8: add      eax, 3
  0x0044E5EB: dec      ecx
  0x0044E5EC: jne      0x44e5a5
  0x0044E534: movzx    cx, byte ptr [eax - 1]
  0x0044E539: cmp      cx, word ptr [esi + 0x1bc]
  0x0044E540: jne      0x44e569
  0x0044E569: xor      ecx, ecx
  0x0044E56B: mov      cl, byte ptr [eax - 2]
  0x0044E56E: mov      cl, byte ptr [ecx + edx]
  0x0044E571: mov      byte ptr [eax - 2], cl
  0x0044E574: xor      ecx, ecx
  0x0044E576: mov      cl, byte ptr [eax - 1]
  0x0044E579: mov      cl, byte ptr [ecx + edx]
  0x0044E57C: mov      byte ptr [eax - 1], cl
  0x0044E57F: xor      ecx, ecx
  0x0044E581: mov      cl, byte ptr [eax]
  0x0044E583: mov      cl, byte ptr [ecx + edx]
  0x0044E586: mov      byte ptr [eax], cl
  0x0044E588: add      eax, 3
  0x0044E58B: dec      edi
  0x0044E58C: jne      0x44e526
  0x0044E737: movzx    dx, byte ptr [eax]
  0x0044E73B: movzx    di, byte ptr [eax + 1]
  0x0044E740: shl      edx, 8
  0x0044E743: add      edx, edi
  0x0044E745: cmp      dx, word ptr [esi + 0x1bc]
  0x0044E74C: jne      0x44e7a1
  0x0044E7A1: add      eax, 6
  0x0044E7A4: dec      ecx
  0x0044E7A5: jne      0x44e71f
  0x0044E627: movzx    cx, byte ptr [eax]
  0x0044E62B: movzx    bx, byte ptr [eax + 1]
  0x0044E630: shl      ecx, 8
  0x0044E633: add      ecx, ebx
  0x0044E635: cmp      cx, word ptr [esi + 0x1bc]
  0x0044E63C: jne      0x44e693
  0x0044E693: xor      ecx, ecx
  0x0044E695: and      edx, 0xff
  0x0044E69B: mov      cl, byte ptr [eax - 1]
  0x0044E69E: mov      ebx, ecx
  0x0044E6A0: mov      cl, dl
  0x0044E6A2: shr      ebx, cl
  0x0044E6A4: xor      ecx, ecx
  0x0044E6A6: mov      cl, byte ptr [eax - 2]
  0x0044E6A9: mov      ebx, dword ptr [edi + ebx*4]
  0x0044E6AC: mov      cx, word ptr [ebx + ecx*2]
  0x0044E6B0: xor      ebx, ebx
  0x0044E6B2: mov      bl, ch
  0x0044E6B4: mov      byte ptr [eax - 1], cl
  0x0044E6B7: xor      ecx, ecx
  0x0044E6B9: mov      byte ptr [eax - 2], bl
  0x0044E6BC: mov      cl, byte ptr [eax + 1]
  0x0044E6BF: mov      ebx, ecx
  0x0044E6C1: mov      cl, dl
  0x0044E6C3: shr      ebx, cl
  0x0044E6C5: xor      ecx, ecx
  0x0044E6C7: mov      cl, byte ptr [eax]
  0x0044E6C9: mov      ebx, dword ptr [edi + ebx*4]
  0x0044E6CC: mov      cx, word ptr [ebx + ecx*2]
  0x0044E6D0: xor      ebx, ebx
  0x0044E6D2: mov      bl, ch
  0x0044E6D4: mov      byte ptr [eax + 1], cl
  0x0044E6D7: xor      ecx, ecx
  0x0044E6D9: mov      byte ptr [eax], bl
  0x0044E6DB: mov      cl, byte ptr [eax + 3]
  0x0044E6DE: mov      ebx, ecx
  0x0044E6E0: mov      cl, dl
  0x0044E6E2: shr      ebx, cl
  0x0044E6E4: xor      edx, edx
  0x0044E6E6: mov      dl, byte ptr [eax + 2]
  0x0044E6E9: mov      ecx, dword ptr [edi + ebx*4]
  0x0044E6EC: mov      cx, word ptr [ecx + edx*2]
  0x0044E6F0: xor      edx, edx
  0x0044E6F2: mov      dl, ch
  0x0044E6F4: mov      byte ptr [eax + 3], cl
  0x0044E6F7: mov      byte ptr [eax + 2], dl
  0x0044E6FA: mov      edx, dword ptr [esp + 0x10]
  0x0044E6FE: add      eax, 6
  0x0044E701: dec      ebp
  0x0044E702: jne      0x44e60f
  0x0044ECFC: add      eax, 4
  0x0044ECFF: dec      ecx
  0x0044ED00: jne      0x44ec3d
  0x0044EC6C: movzx    bx, byte ptr [eax - 1]
  0x0044EC71: mov      bp, word ptr [esi + 0x16a]
  0x0044EC78: mov      edi, 0xff
  0x0044EC7D: movzx    dx, dl
  0x0044EC81: sub      edi, edx
  0x0044EC83: imul     ebx, edx
  0x0044EC86: imul     bp, di
  0x0044EC8A: lea      ebp, [ebx + ebp + 0x80]
  0x0044EC91: and      ebp, 0xffff
  0x0044EC97: mov      ebx, ebp
  0x0044EC99: shr      ebx, 8
  0x0044EC9C: add      ebx, ebp
  0x0044EC9E: movzx    bp, byte ptr [eax]
  0x0044ECA2: sar      ebx, 8
  0x0044ECA5: imul     ebp, edx
  0x0044ECA8: mov      byte ptr [eax - 1], bl
  0x0044ECAB: mov      bx, word ptr [esi + 0x16c]
  0x0044ECB2: imul     bx, di
  0x0044ECB6: lea      ebp, [ebx + ebp + 0x80]
  0x0044ECBD: and      ebp, 0xffff
  0x0044ECC3: mov      ebx, ebp
  0x0044ECC5: shr      ebx, 8
  0x0044ECC8: add      ebx, ebp
  0x0044ECCA: sar      ebx, 8
  0x0044ECCD: mov      byte ptr [eax], bl
  0x0044ECCF: mov      bx, word ptr [esi + 0x16e]
  0x0044ECD6: imul     bx, di
  0x0044ECDA: movzx    di, byte ptr [eax + 1]
  0x0044ECDF: imul     edi, edx
  0x0044ECE2: lea      edx, [ebx + edi + 0x80]
  0x0044ECE9: and      edx, 0xffff
  0x0044ECEF: mov      ebx, edx
  0x0044ECF1: shr      ebx, 8
  0x0044ECF4: add      ebx, edx
  0x0044ECF6: sar      ebx, 8
  0x0044ECF9: mov      byte ptr [eax + 1], bl
  0x0044ECFC: add      eax, 4
  0x0044ECFF: dec      ecx
  0x0044ED00: jne      0x44ec3d
  0x0044EAC3: mov      eax, dword ptr [esp + 0x34]
  0x0044EAC7: mov      dword ptr [esp + 0x30], ecx
  0x0044EACB: inc      eax
  0x0044EACC: mov      cl, byte ptr [eax + 2]
  0x0044EACF: cmp      cl, 0xff
  0x0044EAD2: jne      0x44eaf8
  0x0044F0DC: mov      byte ptr [eax + 4], cl
  0x0044F0DF: add      eax, 8
  0x0044F0E2: dec      ebx
  0x0044F0E3: jne      0x44efbb
  0x0044F017: movzx    dx, byte ptr [eax - 1]
  0x0044F01C: movzx    cx, byte ptr [eax]
  0x0044F020: shl      edx, 8
  0x0044F023: add      edx, ecx
  0x0044F025: and      edi, 0xffff
  0x0044F02B: mov      ebp, 0xffff
  0x0044F030: xor      ecx, ecx
  0x0044F032: mov      cx, word ptr [esi + 0x16a]
  0x0044F039: sub      ebp, edi
  0x0044F03B: and      edx, 0xffff
  0x0044F041: imul     ecx, ebp
  0x0044F044: imul     edx, edi
  0x0044F047: lea      edx, [edx + ecx + 0x8000]
  0x0044F04E: mov      ecx, edx
  0x0044F050: shr      ecx, 0x10
  0x0044F053: add      ecx, edx
  0x0044F055: xor      edx, edx
  0x0044F057: shr      ecx, 0x10
  0x0044F05A: mov      dl, ch
  0x0044F05C: mov      byte ptr [eax], cl
  0x0044F05E: movzx    cx, byte ptr [eax + 1]
  0x0044F063: mov      byte ptr [eax - 1], dl
  0x0044F066: movzx    dx, byte ptr [eax + 2]
  0x0044F06B: shl      ecx, 8
  0x0044F06E: add      ecx, edx
  0x0044F070: xor      edx, edx
  0x0044F072: mov      dx, word ptr [esi + 0x16c]
  0x0044F079: and      ecx, 0xffff
  0x0044F07F: imul     ecx, edi
  0x0044F082: imul     edx, ebp
  0x0044F085: lea      edx, [ecx + edx + 0x8000]
  0x0044F08C: mov      ecx, edx
  0x0044F08E: shr      ecx, 0x10
  0x0044F091: add      ecx, edx
  0x0044F093: xor      edx, edx
  0x0044F095: shr      ecx, 0x10
  0x0044F098: mov      dl, ch
  0x0044F09A: mov      byte ptr [eax + 2], cl
  0x0044F09D: movzx    cx, byte ptr [eax + 3]
  0x0044F0A2: mov      byte ptr [eax + 1], dl
  0x0044F0A5: movzx    dx, byte ptr [eax + 4]
  0x0044F0AA: shl      ecx, 8
  0x0044F0AD: add      ecx, edx
  0x0044F0AF: xor      edx, edx
  0x0044F0B1: mov      dx, word ptr [esi + 0x16e]
  0x0044F0B8: and      ecx, 0xffff
  0x0044F0BE: imul     ecx, edi
  0x0044F0C1: imul     edx, ebp
  0x0044F0C4: lea      edx, [ecx + edx + 0x8000]
  0x0044F0CB: mov      ecx, edx
  0x0044F0CD: shr      ecx, 0x10
  0x0044F0D0: add      ecx, edx
  0x0044F0D2: shr      ecx, 0x10
  0x0044F0D5: xor      edx, edx
  0x0044F0D7: mov      dl, ch
  0x0044F0D9: mov      byte ptr [eax + 3], dl
  0x0044F0DC: mov      byte ptr [eax + 4], cl
  0x0044F0DF: add      eax, 8
  0x0044F0E2: dec      ebx
  0x0044F0E3: jne      0x44efbb
  0x0044F0DF: add      eax, 8
  0x0044F0E2: dec      ebx
  0x0044F0E3: jne      0x44efbb
  0x0044ED36: mov      eax, dword ptr [esp + 0x34]
  0x0044ED3A: mov      dword ptr [esp + 0x38], ecx
  0x0044ED3E: inc      eax
  0x0044ED3F: movzx    cx, byte ptr [eax + 5]
  0x0044ED44: movzx    bx, byte ptr [eax + 6]
  0x0044ED49: shl      ecx, 8
  0x0044ED4C: add      ecx, ebx
  0x0044ED4E: cmp      cx, 0xffff
  0x0044ED53: jne      0x44edc7
  0x0044E8D3: add      edx, 2
  0x0044E8D6: dec      edi
  0x0044E8D7: jne      0x44e88c
  0x0044E8A1: movzx    bx, byte ptr [edx]
  0x0044E8A5: movzx    ax, al
  0x0044E8A9: mov      ecx, 0xff
  0x0044E8AE: imul     ebx, eax
  0x0044E8B1: sub      ecx, eax
  0x0044E8B3: imul     cx, word ptr [esi + 0x170]
  0x0044E8BB: lea      eax, [ecx + ebx + 0x80]
  0x0044E8C2: and      eax, 0xffff
  0x0044E8C7: mov      ecx, eax
  0x0044E8C9: shr      ecx, 8
  0x0044E8CC: add      ecx, eax
  0x0044E8CE: sar      ecx, 8
  0x0044E8D1: mov      byte ptr [edx], cl
  0x0044E8D3: add      edx, 2
  0x0044E8D6: dec      edi
  0x0044E8D7: jne      0x44e88c
  0x0044E7ED: mov      dword ptr [esp + 0x34], ecx
  0x0044E7F1: movzx    ax, byte ptr [edi + 1]
  0x0044E7F6: cmp      ax, 0xff
  0x0044E7FA: jne      0x44e80b
  0x0044EA7F: add      edx, 4
  0x0044EA82: dec      ebp
  0x0044EA83: jne      0x44ea07
  0x0044EA36: movzx    bx, byte ptr [edx]
  0x0044EA3A: and      eax, 0xffff
  0x0044EA3F: xor      ecx, ecx
  0x0044EA41: mov      cx, word ptr [esi + 0x170]
  0x0044EA48: mov      edi, 0xffff
  0x0044EA4D: sub      edi, eax
  0x0044EA4F: imul     ecx, edi
  0x0044EA52: movzx    di, byte ptr [edx - 1]
  0x0044EA57: shl      edi, 8
  0x0044EA5A: add      edi, ebx
  0x0044EA5C: and      edi, 0xffff
  0x0044EA62: imul     edi, eax
  0x0044EA65: lea      edi, [ecx + edi + 0x8000]
  0x0044EA6C: mov      eax, edi
  0x0044EA6E: shr      eax, 0x10
  0x0044EA71: add      eax, edi
  0x0044EA73: shr      eax, 0x10
  0x0044EA76: xor      ecx, ecx
  0x0044EA78: mov      byte ptr [edx], al
  0x0044EA7A: mov      cl, ah
  0x0044EA7C: mov      byte ptr [edx - 1], cl
  0x0044EA7F: add      edx, 4
  0x0044EA82: dec      ebp
  0x0044EA83: jne      0x44ea07
  0x0044E909: mov      eax, dword ptr [esp + 0x34]
  0x0044E90D: mov      dword ptr [esp + 0x34], ecx
  0x0044E911: lea      edi, [eax + 1]
  0x0044E914: movzx    ax, byte ptr [edi + 1]
  0x0044E919: movzx    cx, byte ptr [edi + 2]
  0x0044E91E: shl      eax, 8
  0x0044E921: add      eax, ecx
  0x0044E923: cmp      ax, 0xffff
  0x0044E927: jne      0x44e946
  0x0044E4DE: xor      edx, edx
  0x0044E4E0: mov      dl, byte ptr [esi + 0x171]
  0x0044E4E6: mov      byte ptr [eax], dl
  0x0044E4E8: mov      dl, byte ptr [esi + 0x170]
  0x0044E4EE: mov      byte ptr [eax + 1], dl
  0x0044E4F1: add      eax, 2
  0x0044E4F4: dec      ecx
  0x0044E4F5: jne      0x44e4c7
  0x0044E4F1: add      eax, 2
  0x0044E4F4: dec      ecx
  0x0044E4F5: jne      0x44e4c7
  0x0044E478: xor      eax, eax
  0x0044E47A: mov      al, byte ptr [esi + 0x171]
  0x0044E480: mov      byte ptr [ebp], al
  0x0044E483: mov      cl, byte ptr [esi + 0x170]
  0x0044E489: mov      byte ptr [ebp + 1], cl
  0x0044E48C: jmp      0x44e4ad
  0x0044E48E: xor      eax, eax
  0x0044E490: mov      cl, dl
  0x0044E492: mov      al, byte ptr [ebp + 1]
  0x0044E495: shr      eax, cl
  0x0044E497: xor      ecx, ecx
  0x0044E499: mov      cl, byte ptr [ebp]
  0x0044E49C: mov      eax, dword ptr [edi + eax*4]
  0x0044E49F: mov      ax, word ptr [eax + ecx*2]
  0x0044E4A3: xor      ecx, ecx
  0x0044E4A5: mov      cl, ah
  0x0044E4A7: mov      byte ptr [ebp + 1], al
  0x0044E4AA: mov      byte ptr [ebp], cl
  0x0044E4AD: add      ebp, 2
  0x0044E4B0: dec      ebx
  0x0044E4B1: jne      0x44e460
  0x0044E3A7: mov      ecx, 4
  0x0044E3AC: mov      ebx, 0xf0f
  0x0044E3B1: sub      ecx, eax
  0x0044E3B3: sar      ebx, cl
  0x0044E3B5: mov      ecx, eax
  0x0044E3B7: and      bl, dl
  0x0044E3B9: mov      dl, byte ptr [esi + 0x170]
  0x0044E3BF: shl      dl, cl
  0x0044E3C1: or       bl, dl
  0x0044E3C3: mov      byte ptr [edi], bl
  0x0044E3C5: test     eax, eax
  0x0044E3C7: jne      0x44e3d1
  0x0044E3C5: test     eax, eax
  0x0044E3C7: jne      0x44e3d1
  0x0044E312: mov      ecx, 4
  0x0044E317: mov      ebx, 0xf0f
  0x0044E31C: sub      ecx, edx
  0x0044E31E: sar      ebx, cl
  0x0044E320: and      bl, al
  0x0044E322: mov      al, byte ptr [esi + 0x170]
  0x0044E328: jmp      0x44e355
  0x0044E32A: and      eax, 0xff
  0x0044E32F: mov      cl, dl
  0x0044E331: shr      eax, cl
  0x0044E333: mov      ecx, 4
  0x0044E338: mov      ebx, 0xf0f
  0x0044E33D: sub      ecx, edx
  0x0044E33F: sar      ebx, cl
  0x0044E341: mov      cl, byte ptr [edi]
  0x0044E343: and      eax, 0xf
  0x0044E346: and      bl, cl
  0x0044E348: mov      ecx, eax
  0x0044E34A: shl      ecx, 4
  0x0044E34D: or       ecx, eax
  0x0044E34F: mov      al, byte ptr [ecx + ebp]
  0x0044E352: shr      al, 4
  0x0044E355: mov      ecx, edx
  0x0044E357: shl      al, cl
  0x0044E359: or       bl, al
  0x0044E35B: test     edx, edx
  0x0044E35D: mov      byte ptr [edi], bl
  0x0044E35F: jne      0x44e369
  0x0044E1A9: mov      eax, 7
  0x0044E1AE: inc      edi
  0x0044E1AF: jmp      0x44e1b2
  0x0044E1B1: dec      eax
  0x0044E1B2: dec      ebp
  0x0044E1B3: jne      0x44e16e
  0x0044E29E: mov      ecx, 6
  0x0044E2A3: mov      ebx, 0x3f3f
  0x0044E2A8: sub      ecx, eax
  0x0044E2AA: sar      ebx, cl
  0x0044E2AC: mov      ecx, eax
  0x0044E2AE: and      bl, dl
  0x0044E2B0: mov      dl, byte ptr [esi + 0x170]
  0x0044E2B6: shl      dl, cl
  0x0044E2B8: or       bl, dl
  0x0044E2BA: mov      byte ptr [edi], bl
  0x0044E2BC: test     eax, eax
  0x0044E2BE: jne      0x44e2c8
  0x0044E2BC: test     eax, eax
  0x0044E2BE: jne      0x44e2c8
  0x0044E1F9: mov      ecx, 6
  0x0044E1FE: mov      ebx, 0x3f3f
  0x0044E203: sub      ecx, edx
  0x0044E205: sar      ebx, cl
  0x0044E207: and      bl, al
  0x0044E209: mov      al, byte ptr [esi + 0x170]
  0x0044E20F: jmp      0x44e248
  0x0044E211: and      eax, 0xff
  0x0044E216: mov      cl, dl
  0x0044E218: shr      eax, cl
  0x0044E21A: mov      ecx, 6
  0x0044E21F: mov      ebx, 0x3f3f
  0x0044E224: sub      ecx, edx
  0x0044E226: sar      ebx, cl
  0x0044E228: mov      cl, byte ptr [edi]
  0x0044E22A: and      eax, 3
  0x0044E22D: and      bl, cl
  0x0044E22F: lea      ecx, [eax*4]
  0x0044E236: or       ecx, eax
  0x0044E238: shl      ecx, 2
  0x0044E23B: or       ecx, eax
  0x0044E23D: shl      ecx, 2
  0x0044E240: or       ecx, eax
  0x0044E242: mov      al, byte ptr [ecx + ebp]
  0x0044E245: shr      al, 6
  0x0044E248: mov      ecx, edx
  0x0044E24A: shl      al, cl
  0x0044E24C: or       bl, al
  0x0044E24E: test     edx, edx
  0x0044E250: mov      byte ptr [edi], bl
  0x0044E252: jne      0x44e25c
  0x0044E43A: mov      dl, byte ptr [esi + 0x170]
  0x0044E440: mov      byte ptr [eax], dl
  0x0044E442: inc      eax
  0x0044E443: dec      ecx
  0x0044E444: jne      0x44e42d
  0x0044E442: inc      eax
  0x0044E443: dec      ecx
  0x0044E444: jne      0x44e42d
  0x0044E403: mov      al, byte ptr [esi + 0x170]
  0x0044E409: jmp      0x44e413
  0x0044E40B: and      eax, 0xff
  0x0044E410: mov      al, byte ptr [eax + edi]
  0x0044E413: mov      byte ptr [edx], al
  0x0044E415: inc      edx
  0x0044E416: dec      ecx
  0x0044E417: jne      0x44e3f3
  0x0044E5C1: movzx    dx, byte ptr [eax]
  0x0044E5C5: cmp      dx, word ptr [esi + 0x1be]
  0x0044E5CC: jne      0x44e5e8
  0x0044E5EE: pop      edi
  0x0044E5EF: pop      esi
  0x0044E5F0: pop      ebp
  0x0044E5F1: pop      ebx
  0x0044E5F2: add      esp, 0x1c
  0x0044E5F5: ret      
  0x0044E5A5: movzx    dx, byte ptr [eax - 2]
  0x0044E5AA: cmp      dx, word ptr [esi + 0x1ba]
  0x0044E5B1: jne      0x44e5e8
  0x0044E542: movzx    cx, byte ptr [eax]
  0x0044E546: cmp      cx, word ptr [esi + 0x1be]
  0x0044E54D: jne      0x44e569
  0x0044E58E: pop      edi
  0x0044E58F: pop      esi
  0x0044E590: pop      ebp
  0x0044E591: pop      ebx
  0x0044E592: add      esp, 0x1c
  0x0044E595: ret      
  0x0044E526: movzx    cx, byte ptr [eax - 2]
  0x0044E52B: cmp      cx, word ptr [esi + 0x1ba]
  0x0044E532: jne      0x44e569
  0x0044E74E: movzx    dx, byte ptr [eax + 2]
  0x0044E753: movzx    di, byte ptr [eax + 3]
  0x0044E758: shl      edx, 8
  0x0044E75B: add      edx, edi
  0x0044E75D: cmp      dx, word ptr [esi + 0x1be]
  0x0044E764: jne      0x44e7a1
  0x0044E7AB: pop      edi
  0x0044E7AC: pop      esi
  0x0044E7AD: pop      ebp
  0x0044E7AE: pop      ebx
  0x0044E7AF: add      esp, 0x1c
  0x0044E7B2: ret      
  0x0044E71F: movzx    dx, byte ptr [eax - 2]
  0x0044E724: movzx    di, byte ptr [eax - 1]
  0x0044E729: shl      edx, 8
  0x0044E72C: add      edx, edi
  0x0044E72E: cmp      dx, word ptr [esi + 0x1ba]
  0x0044E735: jne      0x44e7a1
  0x0044E63E: movzx    cx, byte ptr [eax + 2]
  0x0044E643: movzx    bx, byte ptr [eax + 3]
  0x0044E648: shl      ecx, 8
  0x0044E64B: add      ecx, ebx
  0x0044E64D: cmp      cx, word ptr [esi + 0x1be]
  0x0044E654: jne      0x44e693
  0x0044E708: pop      edi
  0x0044E709: pop      esi
  0x0044E70A: pop      ebp
  0x0044E70B: pop      ebx
  0x0044E70C: add      esp, 0x1c
  0x0044E70F: ret      
  0x0044E60F: movzx    cx, byte ptr [eax - 2]
  0x0044E614: movzx    bx, byte ptr [eax - 1]
  0x0044E619: shl      ecx, 8
  0x0044E61C: add      ecx, ebx
  0x0044E61E: cmp      cx, word ptr [esi + 0x1ba]
  0x0044E625: jne      0x44e693
  0x0044ED06: pop      edi
  0x0044ED07: pop      esi
  0x0044ED08: pop      ebp
  0x0044ED09: pop      ebx
  0x0044ED0A: add      esp, 0x1c
  0x0044ED0D: ret      
  0x0044EC3D: mov      dl, byte ptr [eax + 2]
  0x0044EC40: test     dl, dl
  0x0044EC42: jne      0x44ec63
  0x0044EAD4: xor      ecx, ecx
  0x0044EAD6: mov      cl, byte ptr [eax - 1]
  0x0044EAD9: mov      cl, byte ptr [ecx + edx]
  0x0044EADC: mov      byte ptr [eax - 1], cl
  0x0044EADF: xor      ecx, ecx
  0x0044EAE1: mov      cl, byte ptr [eax]
  0x0044EAE3: mov      cl, byte ptr [ecx + edx]
  0x0044EAE6: mov      byte ptr [eax], cl
  0x0044EAE8: xor      ecx, ecx
  0x0044EAEA: mov      cl, byte ptr [eax + 1]
  0x0044EAED: mov      cl, byte ptr [ecx + edx]
  0x0044EAF0: mov      byte ptr [eax + 1], cl
  0x0044EAF3: jmp      0x44ec16
  0x0044EAF8: test     cl, cl
  0x0044EAFA: jne      0x44eb1b
  0x0044EFBB: movzx    di, byte ptr [eax + 5]
  0x0044EFC0: movzx    cx, byte ptr [eax + 6]
  0x0044EFC5: shl      edi, 8
  0x0044EFC8: add      edi, ecx
  0x0044EFCA: test     di, di
  0x0044EFCD: jne      0x44f00c
  0x0044ED55: xor      ecx, ecx
  0x0044ED57: mov      ebx, edx
  0x0044ED59: mov      cl, byte ptr [eax]
  0x0044ED5B: and      ebx, 0xff
  0x0044ED61: mov      edx, ecx
  0x0044ED63: mov      cl, bl
  0x0044ED65: shr      edx, cl
  0x0044ED67: xor      ecx, ecx
  0x0044ED69: mov      cl, byte ptr [eax - 1]
  0x0044ED6C: mov      edx, dword ptr [edi + edx*4]
  0x0044ED6F: mov      cx, word ptr [edx + ecx*2]
  0x0044ED73: xor      edx, edx
  0x0044ED75: mov      dl, ch
  0x0044ED77: mov      byte ptr [eax], cl
  0x0044ED79: xor      ecx, ecx
  0x0044ED7B: mov      byte ptr [eax - 1], dl
  0x0044ED7E: mov      cl, byte ptr [eax + 2]
  0x0044ED81: mov      edx, ecx
  0x0044ED83: mov      cl, bl
  0x0044ED85: shr      edx, cl
  0x0044ED87: xor      ecx, ecx
  0x0044ED89: mov      cl, byte ptr [eax + 1]
  0x0044ED8C: mov      edx, dword ptr [edi + edx*4]
  0x0044ED8F: mov      cx, word ptr [edx + ecx*2]
  0x0044ED93: xor      edx, edx
  0x0044ED95: mov      dl, ch
  0x0044ED97: mov      byte ptr [eax + 2], cl
  0x0044ED9A: xor      ecx, ecx
  0x0044ED9C: mov      byte ptr [eax + 1], dl
  0x0044ED9F: mov      cl, byte ptr [eax + 4]
  0x0044EDA2: mov      edx, ecx
  0x0044EDA4: mov      cl, bl
  0x0044EDA6: shr      edx, cl
  0x0044EDA8: xor      ecx, ecx
  0x0044EDAA: mov      cl, byte ptr [eax + 3]
  0x0044EDAD: mov      edx, dword ptr [edi + edx*4]
  0x0044EDB0: mov      cx, word ptr [edx + ecx*2]
  0x0044EDB4: xor      edx, edx
  0x0044EDB6: mov      dl, ch
  0x0044EDB8: mov      byte ptr [eax + 4], cl
  0x0044EDBB: mov      byte ptr [eax + 3], dl
  0x0044EDBE: mov      edx, dword ptr [esp + 0x10]
  0x0044EDC2: jmp      0x44ef90
  0x0044EDC7: test     cx, cx
  0x0044EDCA: jne      0x44ee0c
  0x0044E8D9: pop      edi
  0x0044E8DA: pop      esi
  0x0044E8DB: pop      ebp
  0x0044E8DC: pop      ebx
  0x0044E8DD: add      esp, 0x1c
  0x0044E8E0: ret      
  0x0044E88C: mov      al, byte ptr [edx + 1]
  0x0044E88F: test     al, al
  0x0044E891: jne      0x44e89d
  0x0044E7FC: mov      ecx, dword ptr [esp + 0x38]
  0x0044E800: xor      eax, eax
  0x0044E802: mov      al, byte ptr [edi]
  0x0044E804: mov      dl, byte ptr [eax + ecx]
  0x0044E807: mov      byte ptr [edi], dl
  0x0044E809: jmp      0x44e864
  0x0044E80B: test     ax, ax
  0x0044E80E: jne      0x44e818
  0x0044EA85: pop      edi
  0x0044EA86: pop      esi
  0x0044EA87: pop      ebp
  0x0044EA88: pop      ebx
  0x0044EA89: add      esp, 0x1c
  0x0044EA8C: ret      
  0x0044EA07: movzx    ax, byte ptr [edx + 1]
  0x0044EA0C: movzx    cx, byte ptr [edx + 2]
  0x0044EA11: shl      eax, 8
  0x0044EA14: add      eax, ecx
  0x0044EA16: test     ax, ax
  0x0044EA19: jne      0x44ea30
  0x0044E929: mov      ebx, dword ptr [esp + 0x28]
  0x0044E92D: xor      eax, eax
  0x0044E92F: mov      al, byte ptr [edi]
  0x0044E931: mov      cl, dl
  0x0044E933: shr      eax, cl
  0x0044E935: xor      ecx, ecx
  0x0044E937: mov      cl, byte ptr [edi - 1]
  0x0044E93A: mov      eax, dword ptr [ebx + eax*4]
  0x0044E93D: mov      ax, word ptr [eax + ecx*2]
  0x0044E941: jmp      0x44e9d5
  0x0044E946: test     ax, ax
  0x0044E949: jne      0x44e960
  0x0044E4F7: pop      edi
  0x0044E4F8: pop      esi
  0x0044E4F9: pop      ebp
  0x0044E4FA: pop      ebx
  0x0044E4FB: add      esp, 0x1c
  0x0044E4FE: ret      
  0x0044E4AD: add      ebp, 2
  0x0044E4B0: dec      ebx
  0x0044E4B1: jne      0x44e460
  0x0044E4B3: pop      edi
  0x0044E4B4: pop      esi
  0x0044E4B5: pop      ebp
  0x0044E4B6: pop      ebx
  0x0044E4B7: add      esp, 0x1c
  0x0044E4BA: ret      
  0x0044E460: movzx    ax, byte ptr [ebp]
  0x0044E465: movzx    cx, byte ptr [ebp + 1]
  0x0044E46A: shl      eax, 8
  0x0044E46D: add      eax, ecx
  0x0044E46F: cmp      ax, word ptr [esi + 0x1c0]
  0x0044E476: jne      0x44e48e
  0x0044E3C9: mov      eax, 4
  0x0044E3CE: inc      edi
  0x0044E3CF: jmp      0x44e3d4
  0x0044E3D1: sub      eax, 4
  0x0044E3D4: dec      ebp
  0x0044E3D5: jne      0x44e38e
  0x0044E355: mov      ecx, edx
  0x0044E357: shl      al, cl
  0x0044E359: or       bl, al
  0x0044E35B: test     edx, edx
  0x0044E35D: mov      byte ptr [edi], bl
  0x0044E35F: jne      0x44e369
  0x0044E361: mov      edx, 4
  0x0044E366: inc      edi
  0x0044E367: jmp      0x44e36c
  0x0044E369: sub      edx, 4
  0x0044E36C: mov      eax, dword ptr [esp + 0x34]
  0x0044E370: dec      eax
  0x0044E371: mov      dword ptr [esp + 0x34], eax
  0x0044E375: jne      0x44e2f9
  0x0044E1B2: dec      ebp
  0x0044E1B3: jne      0x44e16e
  0x0044E1B5: pop      edi
  0x0044E1B6: pop      esi
  0x0044E1B7: pop      ebp
  0x0044E1B8: pop      ebx
  0x0044E1B9: add      esp, 0x1c
  0x0044E1BC: ret      
  0x0044E16E: mov      dl, byte ptr [edi]
  0x0044E170: mov      cl, al
  0x0044E172: mov      bl, dl
  0x0044E174: shr      bl, cl
  0x0044E176: xor      cx, cx
  0x0044E179: and      bl, 1
  0x0044E17C: mov      cl, bl
  0x0044E17E: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E185: jne      0x44e1a5
  0x0044E2C0: mov      eax, 6
  0x0044E2C5: inc      edi
  0x0044E2C6: jmp      0x44e2cb
  0x0044E2C8: sub      eax, 2
  0x0044E2CB: dec      ebp
  0x0044E2CC: jne      0x44e285
  0x0044E248: mov      ecx, edx
  0x0044E24A: shl      al, cl
  0x0044E24C: or       bl, al
  0x0044E24E: test     edx, edx
  0x0044E250: mov      byte ptr [edi], bl
  0x0044E252: jne      0x44e25c
  0x0044E254: mov      edx, 6
  0x0044E259: inc      edi
  0x0044E25A: jmp      0x44e25f
  0x0044E25C: sub      edx, 2
  0x0044E25F: mov      eax, dword ptr [esp + 0x34]
  0x0044E263: dec      eax
  0x0044E264: mov      dword ptr [esp + 0x34], eax
  0x0044E268: jne      0x44e1e0
  0x0044E446: pop      edi
  0x0044E447: pop      esi
  0x0044E448: pop      ebp
  0x0044E449: pop      ebx
  0x0044E44A: add      esp, 0x1c
  0x0044E44D: ret      
  0x0044E413: mov      byte ptr [edx], al
  0x0044E415: inc      edx
  0x0044E416: dec      ecx
  0x0044E417: jne      0x44e3f3
  0x0044E419: pop      edi
  0x0044E41A: pop      esi
  0x0044E41B: pop      ebp
  0x0044E41C: pop      ebx
  0x0044E41D: add      esp, 0x1c
  0x0044E420: ret      
  0x0044E5CE: mov      dl, byte ptr [esi + 0x16a]
  0x0044E5D4: mov      byte ptr [eax - 2], dl
  0x0044E5D7: mov      dl, byte ptr [esi + 0x16c]
  0x0044E5DD: mov      byte ptr [eax - 1], dl
  0x0044E5E0: mov      dl, byte ptr [esi + 0x16e]
  0x0044E5E6: mov      byte ptr [eax], dl
  0x0044E5E8: add      eax, 3
  0x0044E5EB: dec      ecx
  0x0044E5EC: jne      0x44e5a5
  0x0044E54F: mov      cl, byte ptr [esi + 0x16a]
  0x0044E555: mov      byte ptr [eax - 2], cl
  0x0044E558: mov      cl, byte ptr [esi + 0x16c]
  0x0044E55E: mov      byte ptr [eax - 1], cl
  0x0044E561: mov      cl, byte ptr [esi + 0x16e]
  0x0044E567: jmp      0x44e586
  0x0044E766: xor      edx, edx
  0x0044E768: mov      dl, byte ptr [esi + 0x16b]
  0x0044E76E: mov      byte ptr [eax - 2], dl
  0x0044E771: mov      dl, byte ptr [esi + 0x16a]
  0x0044E777: mov      byte ptr [eax - 1], dl
  0x0044E77A: xor      edx, edx
  0x0044E77C: mov      dl, byte ptr [esi + 0x16d]
  0x0044E782: mov      byte ptr [eax], dl
  0x0044E784: mov      dl, byte ptr [esi + 0x16c]
  0x0044E78A: mov      byte ptr [eax + 1], dl
  0x0044E78D: xor      edx, edx
  0x0044E78F: mov      dl, byte ptr [esi + 0x16f]
  0x0044E795: mov      byte ptr [eax + 2], dl
  0x0044E798: mov      dl, byte ptr [esi + 0x16e]
  0x0044E79E: mov      byte ptr [eax + 3], dl
  0x0044E7A1: add      eax, 6
  0x0044E7A4: dec      ecx
  0x0044E7A5: jne      0x44e71f
  0x0044E656: xor      ecx, ecx
  0x0044E658: mov      cl, byte ptr [esi + 0x16b]
  0x0044E65E: mov      byte ptr [eax - 2], cl
  0x0044E661: mov      cl, byte ptr [esi + 0x16a]
  0x0044E667: mov      byte ptr [eax - 1], cl
  0x0044E66A: xor      ecx, ecx
  0x0044E66C: mov      cl, byte ptr [esi + 0x16d]
  0x0044E672: mov      byte ptr [eax], cl
  0x0044E674: mov      cl, byte ptr [esi + 0x16c]
  0x0044E67A: mov      byte ptr [eax + 1], cl
  0x0044E67D: xor      ecx, ecx
  0x0044E67F: mov      cl, byte ptr [esi + 0x16f]
  0x0044E685: mov      byte ptr [eax + 2], cl
  0x0044E688: mov      cl, byte ptr [esi + 0x16e]
  0x0044E68E: mov      byte ptr [eax + 3], cl
  0x0044E691: jmp      0x44e6fe
  0x0044EC16: mov      ecx, dword ptr [esp + 0x30]
  0x0044EC1A: add      eax, 4
  0x0044EC1D: dec      ecx
  0x0044EC1E: mov      dword ptr [esp + 0x30], ecx
  0x0044EC22: jne      0x44eacc
  0x0044EAFC: mov      cl, byte ptr [esi + 0x16a]
  0x0044EB02: mov      byte ptr [eax - 1], cl
  0x0044EB05: mov      cl, byte ptr [esi + 0x16c]
  0x0044EB0B: mov      byte ptr [eax], cl
  0x0044EB0D: mov      cl, byte ptr [esi + 0x16e]
  0x0044EB13: mov      byte ptr [eax + 1], cl
  0x0044EB16: jmp      0x44ec16
  0x0044EB1B: mov      ebx, dword ptr [esp + 0x20]
  0x0044EB1F: xor      dx, dx
  0x0044EB22: mov      dl, cl
  0x0044EB24: xor      ecx, ecx
  0x0044EB26: mov      cl, byte ptr [eax - 1]
  0x0044EB29: mov      edi, 0xff
  0x0044EB2E: sub      edi, edx
  0x0044EB30: movzx    cx, byte ptr [ecx + ebx]
  0x0044EB35: mov      bx, word ptr [esi + 0x174]
  0x0044EB3C: imul     ecx, edx
  0x0044EB3F: imul     bx, di
  0x0044EB43: lea      ebx, [ecx + ebx + 0x80]
  0x0044EB4A: and      ebx, 0xffff
  0x0044EB50: mov      ecx, ebx
  0x0044EB52: shr      ecx, 8
  0x0044EB55: add      ecx, ebx
  0x0044EB57: sar      ecx, 8
  0x0044EB5A: test     ebp, ebp
  0x0044EB5C: mov      byte ptr [esp + 0x34], cl
  0x0044EB60: jne      0x44eb73
  0x0044EF90: mov      ecx, dword ptr [esp + 0x38]
  0x0044EF94: add      eax, 8
  0x0044EF97: dec      ecx
  0x0044EF98: mov      dword ptr [esp + 0x38], ecx
  0x0044EF9C: jne      0x44ed3f
  0x0044EDCC: xor      ecx, ecx
  0x0044EDCE: mov      cl, byte ptr [esi + 0x16b]
  0x0044EDD4: mov      byte ptr [eax - 1], cl
  0x0044EDD7: mov      cl, byte ptr [esi + 0x16a]
  0x0044EDDD: mov      byte ptr [eax], cl
  0x0044EDDF: xor      ecx, ecx
  0x0044EDE1: mov      cl, byte ptr [esi + 0x16d]
  0x0044EDE7: mov      byte ptr [eax + 1], cl
  0x0044EDEA: mov      cl, byte ptr [esi + 0x16c]
  0x0044EDF0: mov      byte ptr [eax + 2], cl
  0x0044EDF3: xor      ecx, ecx
  0x0044EDF5: mov      cl, byte ptr [esi + 0x16f]
  0x0044EDFB: mov      byte ptr [eax + 3], cl
  0x0044EDFE: mov      cl, byte ptr [esi + 0x16e]
  0x0044EE04: mov      byte ptr [eax + 4], cl
  0x0044EE07: jmp      0x44ef90
  0x0044EE0C: mov      edi, ecx
  0x0044EE0E: mov      ecx, 0xffff
  0x0044EE13: and      edi, 0xffff
  0x0044EE19: mov      ebp, dword ptr [esp + 0x18]
  0x0044EE1D: sub      ecx, edi
  0x0044EE1F: and      edx, 0xff
  0x0044EE25: mov      dword ptr [esp + 0x34], ecx
  0x0044EE29: xor      ecx, ecx
  0x0044EE2B: mov      cl, byte ptr [eax]
  0x0044EE2D: mov      ebx, ecx
  0x0044EE2F: mov      cl, dl
  0x0044EE31: shr      ebx, cl
  0x0044EE33: xor      ecx, ecx
  0x0044EE35: mov      cl, byte ptr [eax - 1]
  0x0044EE38: mov      ebx, dword ptr [ebp + ebx*4]
  0x0044EE3C: xor      ebp, ebp
  0x0044EE3E: mov      bp, word ptr [ebx + ecx*2]
  0x0044EE42: xor      ecx, ecx
  0x0044EE44: mov      cx, word ptr [esi + 0x174]
  0x0044EE4B: imul     ebp, edi
  0x0044EE4E: imul     ecx, dword ptr [esp + 0x34]
  0x0044EE53: lea      ebx, [ecx + ebp + 0x8000]
  0x0044EE5A: mov      ecx, ebx
  0x0044EE5C: shr      ecx, 0x10
  0x0044EE5F: add      ecx, ebx
  0x0044EE61: mov      ebx, dword ptr [esp + 0x24]
  0x0044EE65: shr      ecx, 0x10
  0x0044EE68: test     ebx, ebx
  0x0044EE6A: jne      0x44ee90
  0x0044E864: mov      eax, dword ptr [esp + 0x34]
  0x0044E868: add      edi, 2
  0x0044E86B: dec      eax
  0x0044E86C: mov      dword ptr [esp + 0x34], eax
  0x0044E870: jne      0x44e7f1
  0x0044E810: mov      al, byte ptr [esi + 0x170]
  0x0044E816: jmp      0x44e862
  0x0044E818: xor      edx, edx
  0x0044E81A: mov      ecx, 0xff
  0x0044E81F: mov      dl, byte ptr [edi]
  0x0044E821: sub      ecx, eax
  0x0044E823: imul     cx, word ptr [esi + 0x17a]
  0x0044E82B: movzx    dx, byte ptr [edx + ebx]
  0x0044E830: imul     edx, eax
  0x0044E833: lea      edx, [ecx + edx + 0x80]
  0x0044E83A: and      edx, 0xffff
  0x0044E840: mov      eax, edx
  0x0044E842: shr      eax, 8
  0x0044E845: add      eax, edx
  0x0044E847: sar      eax, 8
  0x0044E84A: test     ebp, ebp
  0x0044E84C: mov      byte ptr [esp + 0x30], al
  0x0044E850: jne      0x44e862
  0x0044E9D5: xor      ecx, ecx
  0x0044E9D7: mov      cl, ah
  0x0044E9D9: mov      byte ptr [edi - 1], cl
  0x0044E9DC: mov      byte ptr [edi], al
  0x0044E9DE: mov      eax, dword ptr [esp + 0x34]
  0x0044E9E2: add      edi, 4
  0x0044E9E5: dec      eax
  0x0044E9E6: mov      dword ptr [esp + 0x34], eax
  0x0044E9EA: jne      0x44e914
  0x0044E94B: xor      eax, eax
  0x0044E94D: mov      al, byte ptr [esi + 0x171]
  0x0044E953: mov      byte ptr [edi - 1], al
  0x0044E956: mov      cl, byte ptr [esi + 0x170]
  0x0044E95C: mov      byte ptr [edi], cl
  0x0044E95E: jmp      0x44e9de
  0x0044E960: xor      ecx, ecx
  0x0044E962: and      eax, 0xffff
  0x0044E967: mov      cl, byte ptr [edi]
  0x0044E969: mov      ebx, ecx
  0x0044E96B: mov      cl, dl
  0x0044E96D: shr      ebx, cl
  0x0044E96F: mov      ecx, dword ptr [esp + 0x18]
  0x0044E973: xor      edx, edx
  0x0044E975: mov      dl, byte ptr [edi - 1]
  0x0044E978: mov      ecx, dword ptr [ecx + ebx*4]
  0x0044E97B: xor      ebx, ebx
  0x0044E97D: mov      bx, word ptr [ecx + edx*2]
  0x0044E981: xor      edx, edx
  0x0044E983: mov      dx, word ptr [esi + 0x17a]
  0x0044E98A: mov      ecx, 0xffff
  0x0044E98F: sub      ecx, eax
  0x0044E991: imul     ebx, eax
  0x0044E994: imul     edx, ecx
  0x0044E997: lea      ecx, [ebx + edx + 0x8000]
  0x0044E99E: mov      eax, ecx
  0x0044E9A0: shr      eax, 0x10
  0x0044E9A3: add      eax, ecx
  0x0044E9A5: shr      eax, 0x10
  0x0044E9A8: test     ebp, ebp
  0x0044E9AA: je       0x44e9b2
  0x0044E3D4: dec      ebp
  0x0044E3D5: jne      0x44e38e
  0x0044E3D7: pop      edi
  0x0044E3D8: pop      esi
  0x0044E3D9: pop      ebp
  0x0044E3DA: pop      ebx
  0x0044E3DB: add      esp, 0x1c
  0x0044E3DE: ret      
  0x0044E38E: mov      dl, byte ptr [edi]
  0x0044E390: mov      cl, al
  0x0044E392: mov      bl, dl
  0x0044E394: shr      bl, cl
  0x0044E396: xor      cx, cx
  0x0044E399: and      bl, 0xf
  0x0044E39C: mov      cl, bl
  0x0044E39E: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E3A5: jne      0x44e3c5
  0x0044E36C: mov      eax, dword ptr [esp + 0x34]
  0x0044E370: dec      eax
  0x0044E371: mov      dword ptr [esp + 0x34], eax
  0x0044E375: jne      0x44e2f9
  0x0044E377: pop      edi
  0x0044E378: pop      esi
  0x0044E379: pop      ebp
  0x0044E37A: pop      ebx
  0x0044E37B: add      esp, 0x1c
  0x0044E37E: ret      
  0x0044E2F9: mov      al, byte ptr [edi]
  0x0044E2FB: mov      cl, dl
  0x0044E2FD: mov      bl, al
  0x0044E2FF: shr      bl, cl
  0x0044E301: xor      cx, cx
  0x0044E304: and      bl, 0xf
  0x0044E307: mov      cl, bl
  0x0044E309: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E310: jne      0x44e32a
  0x0044E2CB: dec      ebp
  0x0044E2CC: jne      0x44e285
  0x0044E2CE: pop      edi
  0x0044E2CF: pop      esi
  0x0044E2D0: pop      ebp
  0x0044E2D1: pop      ebx
  0x0044E2D2: add      esp, 0x1c
  0x0044E2D5: ret      
  0x0044E285: mov      dl, byte ptr [edi]
  0x0044E287: mov      cl, al
  0x0044E289: mov      bl, dl
  0x0044E28B: shr      bl, cl
  0x0044E28D: xor      cx, cx
  0x0044E290: and      bl, 3
  0x0044E293: mov      cl, bl
  0x0044E295: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E29C: jne      0x44e2bc
  0x0044E25F: mov      eax, dword ptr [esp + 0x34]
  0x0044E263: dec      eax
  0x0044E264: mov      dword ptr [esp + 0x34], eax
  0x0044E268: jne      0x44e1e0
  0x0044E26E: pop      edi
  0x0044E26F: pop      esi
  0x0044E270: pop      ebp
  0x0044E271: pop      ebx
  0x0044E272: add      esp, 0x1c
  0x0044E275: ret      
  0x0044E1E0: mov      al, byte ptr [edi]
  0x0044E1E2: mov      cl, dl
  0x0044E1E4: mov      bl, al
  0x0044E1E6: shr      bl, cl
  0x0044E1E8: xor      cx, cx
  0x0044E1EB: and      bl, 3
  0x0044E1EE: mov      cl, bl
  0x0044E1F0: cmp      cx, word ptr [esi + 0x1c0]
  0x0044E1F7: jne      0x44e211
  0x0044E586: mov      byte ptr [eax], cl
  0x0044E588: add      eax, 3
  0x0044E58B: dec      edi
  0x0044E58C: jne      0x44e526
  0x0044E6FE: add      eax, 6
  0x0044E701: dec      ebp
  0x0044E702: jne      0x44e60f
  0x0044EC28: pop      edi
  0x0044EC29: pop      esi
  0x0044EC2A: pop      ebp
  0x0044EC2B: pop      ebx
  0x0044EC2C: add      esp, 0x1c
  0x0044EC2F: ret      
  0x0044EACC: mov      cl, byte ptr [eax + 2]
  0x0044EACF: cmp      cl, 0xff
  0x0044EAD2: jne      0x44eaf8
  0x0044EB62: mov      ecx, dword ptr [esp + 0x34]
  0x0044EB66: mov      ebx, dword ptr [esp + 0x14]
  0x0044EB6A: and      ecx, 0xff
  0x0044EB70: mov      cl, byte ptr [ecx + ebx]
  0x0044EB73: mov      ebx, dword ptr [esp + 0x20]
  0x0044EB77: mov      byte ptr [eax - 1], cl
  0x0044EB7A: xor      ecx, ecx
  0x0044EB7C: mov      cl, byte ptr [eax]
  0x0044EB7E: movzx    cx, byte ptr [ecx + ebx]
  0x0044EB83: mov      bx, word ptr [esi + 0x176]
  0x0044EB8A: imul     ecx, edx
  0x0044EB8D: imul     bx, di
  0x0044EB91: lea      ebx, [ecx + ebx + 0x80]
  0x0044EB98: and      ebx, 0xffff
  0x0044EB9E: mov      ecx, ebx
  0x0044EBA0: shr      ecx, 8
  0x0044EBA3: add      ecx, ebx
  0x0044EBA5: sar      ecx, 8
  0x0044EBA8: test     ebp, ebp
  0x0044EBAA: mov      byte ptr [esp + 0x34], cl
  0x0044EBAE: jne      0x44ebc1
  0x0044EB73: mov      ebx, dword ptr [esp + 0x20]
  0x0044EB77: mov      byte ptr [eax - 1], cl
  0x0044EB7A: xor      ecx, ecx
  0x0044EB7C: mov      cl, byte ptr [eax]
  0x0044EB7E: movzx    cx, byte ptr [ecx + ebx]
  0x0044EB83: mov      bx, word ptr [esi + 0x176]
  0x0044EB8A: imul     ecx, edx
  0x0044EB8D: imul     bx, di
  0x0044EB91: lea      ebx, [ecx + ebx + 0x80]
  0x0044EB98: and      ebx, 0xffff
  0x0044EB9E: mov      ecx, ebx
  0x0044EBA0: shr      ecx, 8
  0x0044EBA3: add      ecx, ebx
  0x0044EBA5: sar      ecx, 8
  0x0044EBA8: test     ebp, ebp
  0x0044EBAA: mov      byte ptr [esp + 0x34], cl
  0x0044EBAE: jne      0x44ebc1
  0x0044EFA2: pop      edi
  0x0044EFA3: pop      esi
  0x0044EFA4: pop      ebp
  0x0044EFA5: pop      ebx
  0x0044EFA6: add      esp, 0x1c
  0x0044EFA9: ret      
  0x0044ED3F: movzx    cx, byte ptr [eax + 5]
  0x0044ED44: movzx    bx, byte ptr [eax + 6]
  0x0044ED49: shl      ecx, 8
  0x0044ED4C: add      ecx, ebx
  0x0044ED4E: cmp      cx, 0xffff
  0x0044ED53: jne      0x44edc7
  0x0044EE6C: mov      ebx, ecx
  0x0044EE6E: mov      cl, byte ptr [esp + 0x10]
  0x0044EE72: and      ebx, 0xffff
  0x0044EE78: mov      ebp, ebx
  0x0044EE7A: and      ebp, 0xff
  0x0044EE80: shr      ebp, cl
  0x0044EE82: mov      ecx, dword ptr [esp + 0x1c]
  0x0044EE86: shr      ebx, 8
  0x0044EE89: mov      ecx, dword ptr [ecx + ebp*4]
  0x0044EE8C: mov      cx, word ptr [ecx + ebx*2]
  0x0044EE90: xor      ebx, ebx
  0x0044EE92: mov      byte ptr [eax], cl
  0x0044EE94: mov      bl, ch
  0x0044EE96: xor      ecx, ecx
  0x0044EE98: mov      cl, byte ptr [eax + 2]
  0x0044EE9B: mov      ebp, dword ptr [esp + 0x18]
  0x0044EE9F: mov      byte ptr [eax - 1], bl
  0x0044EEA2: mov      ebx, ecx
  0x0044EEA4: mov      cl, dl
  0x0044EEA6: shr      ebx, cl
  0x0044EEA8: xor      ecx, ecx
  0x0044EEAA: mov      cl, byte ptr [eax + 1]
  0x0044EEAD: mov      ebx, dword ptr [ebp + ebx*4]
  0x0044EEB1: xor      ebp, ebp
  0x0044EEB3: mov      bp, word ptr [ebx + ecx*2]
  0x0044EEB7: xor      ecx, ecx
  0x0044EEB9: mov      cx, word ptr [esi + 0x176]
  0x0044EEC0: imul     ebp, edi
  0x0044EEC3: imul     ecx, dword ptr [esp + 0x34]
  0x0044EEC8: lea      ebx, [ecx + ebp + 0x8000]
  0x0044EECF: mov      ecx, ebx
  0x0044EED1: shr      ecx, 0x10
  0x0044EED4: add      ecx, ebx
  0x0044EED6: mov      ebx, dword ptr [esp + 0x24]
  0x0044EEDA: shr      ecx, 0x10
  0x0044EEDD: test     ebx, ebx
  0x0044EEDF: jne      0x44ef05
  0x0044EE90: xor      ebx, ebx
  0x0044EE92: mov      byte ptr [eax], cl
  0x0044EE94: mov      bl, ch
  0x0044EE96: xor      ecx, ecx
  0x0044EE98: mov      cl, byte ptr [eax + 2]
  0x0044EE9B: mov      ebp, dword ptr [esp + 0x18]
  0x0044EE9F: mov      byte ptr [eax - 1], bl
  0x0044EEA2: mov      ebx, ecx
  0x0044EEA4: mov      cl, dl
  0x0044EEA6: shr      ebx, cl
  0x0044EEA8: xor      ecx, ecx
  0x0044EEAA: mov      cl, byte ptr [eax + 1]
  0x0044EEAD: mov      ebx, dword ptr [ebp + ebx*4]
  0x0044EEB1: xor      ebp, ebp
  0x0044EEB3: mov      bp, word ptr [ebx + ecx*2]
  0x0044EEB7: xor      ecx, ecx
  0x0044EEB9: mov      cx, word ptr [esi + 0x176]
  0x0044EEC0: imul     ebp, edi
  0x0044EEC3: imul     ecx, dword ptr [esp + 0x34]
  0x0044EEC8: lea      ebx, [ecx + ebp + 0x8000]
  0x0044EECF: mov      ecx, ebx
  0x0044EED1: shr      ecx, 0x10
  0x0044EED4: add      ecx, ebx
  0x0044EED6: mov      ebx, dword ptr [esp + 0x24]
  0x0044EEDA: shr      ecx, 0x10
  0x0044EEDD: test     ebx, ebx
  0x0044EEDF: jne      0x44ef05
  0x0044E876: pop      edi
  0x0044E877: pop      esi
  0x0044E878: pop      ebp
  0x0044E879: pop      ebx
  0x0044E87A: add      esp, 0x1c
  0x0044E87D: ret      
  0x0044E7F1: movzx    ax, byte ptr [edi + 1]
  0x0044E7F6: cmp      ax, 0xff
  0x0044E7FA: jne      0x44e80b
  0x0044E862: mov      byte ptr [edi], al
  0x0044E864: mov      eax, dword ptr [esp + 0x34]
  0x0044E868: add      edi, 2
  0x0044E86B: dec      eax
  0x0044E86C: mov      dword ptr [esp + 0x34], eax
  0x0044E870: jne      0x44e7f1
  0x0044E852: mov      eax, dword ptr [esp + 0x30]
  0x0044E856: mov      ecx, dword ptr [esp + 0x14]
  0x0044E85A: and      eax, 0xff
  0x0044E85F: mov      al, byte ptr [eax + ecx]
  0x0044E862: mov      byte ptr [edi], al
  0x0044E864: mov      eax, dword ptr [esp + 0x34]
  0x0044E868: add      edi, 2
  0x0044E86B: dec      eax
  0x0044E86C: mov      dword ptr [esp + 0x34], eax
  0x0044E870: jne      0x44e7f1
  0x0044E9F0: pop      edi
  0x0044E9F1: pop      esi
  0x0044E9F2: pop      ebp
  0x0044E9F3: pop      ebx
  0x0044E9F4: add      esp, 0x1c
  0x0044E9F7: ret      
  0x0044E914: movzx    ax, byte ptr [edi + 1]
  0x0044E919: movzx    cx, byte ptr [edi + 2]
  0x0044E91E: shl      eax, 8
  0x0044E921: add      eax, ecx
  0x0044E923: cmp      ax, 0xffff
  0x0044E927: jne      0x44e946
  0x0044E9DE: mov      eax, dword ptr [esp + 0x34]
  0x0044E9E2: add      edi, 4
  0x0044E9E5: dec      eax
  0x0044E9E6: mov      dword ptr [esp + 0x34], eax
  0x0044E9EA: jne      0x44e914
  0x0044E9B2: mov      edx, dword ptr [esp + 0x10]
  0x0044E9B6: and      eax, 0xffff
  0x0044E9BB: mov      ebx, eax
  0x0044E9BD: mov      cl, dl
  0x0044E9BF: and      ebx, 0xff
  0x0044E9C5: shr      ebx, cl
  0x0044E9C7: mov      ecx, dword ptr [esp + 0x1c]
  0x0044E9CB: shr      eax, 8
  0x0044E9CE: mov      ecx, dword ptr [ecx + ebx*4]
  0x0044E9D1: mov      ax, word ptr [ecx + eax*2]
  0x0044E9D5: xor      ecx, ecx
  0x0044E9D7: mov      cl, ah
  0x0044E9D9: mov      byte ptr [edi - 1], cl
  0x0044E9DC: mov      byte ptr [edi], al
  0x0044E9DE: mov      eax, dword ptr [esp + 0x34]
  0x0044E9E2: add      edi, 4
  0x0044E9E5: dec      eax
  0x0044E9E6: mov      dword ptr [esp + 0x34], eax
  0x0044E9EA: jne      0x44e914
  0x0044E9AC: mov      edx, dword ptr [esp + 0x10]
  0x0044E9B0: jmp      0x44e9d5
  0x0044EBB0: mov      ecx, dword ptr [esp + 0x34]
  0x0044EBB4: mov      ebx, dword ptr [esp + 0x14]
  0x0044EBB8: and      ecx, 0xff
  0x0044EBBE: mov      cl, byte ptr [ecx + ebx]
  0x0044EBC1: mov      ebx, dword ptr [esp + 0x20]
  0x0044EBC5: mov      byte ptr [eax], cl
  0x0044EBC7: xor      ecx, ecx
  0x0044EBC9: mov      cl, byte ptr [eax + 1]
  0x0044EBCC: movzx    cx, byte ptr [ecx + ebx]
  0x0044EBD1: imul     ecx, edx
  0x0044EBD4: mov      dx, word ptr [esi + 0x178]
  0x0044EBDB: imul     dx, di
  0x0044EBDF: lea      edx, [ecx + edx + 0x80]
  0x0044EBE6: and      edx, 0xffff
  0x0044EBEC: mov      ecx, edx
  0x0044EBEE: shr      ecx, 8
  0x0044EBF1: add      ecx, edx
  0x0044EBF3: sar      ecx, 8
  0x0044EBF6: test     ebp, ebp
  0x0044EBF8: mov      byte ptr [esp + 0x34], cl
  0x0044EBFC: jne      0x44ec0f
  0x0044EBC1: mov      ebx, dword ptr [esp + 0x20]
  0x0044EBC5: mov      byte ptr [eax], cl
  0x0044EBC7: xor      ecx, ecx
  0x0044EBC9: mov      cl, byte ptr [eax + 1]
  0x0044EBCC: movzx    cx, byte ptr [ecx + ebx]
  0x0044EBD1: imul     ecx, edx
  0x0044EBD4: mov      dx, word ptr [esi + 0x178]
  0x0044EBDB: imul     dx, di
  0x0044EBDF: lea      edx, [ecx + edx + 0x80]
  0x0044EBE6: and      edx, 0xffff
  0x0044EBEC: mov      ecx, edx
  0x0044EBEE: shr      ecx, 8
  0x0044EBF1: add      ecx, edx
  0x0044EBF3: sar      ecx, 8
  0x0044EBF6: test     ebp, ebp
  0x0044EBF8: mov      byte ptr [esp + 0x34], cl
  0x0044EBFC: jne      0x44ec0f
  0x0044EEE1: mov      ebx, ecx
  0x0044EEE3: mov      cl, byte ptr [esp + 0x10]
  0x0044EEE7: and      ebx, 0xffff
  0x0044EEED: mov      ebp, ebx
  0x0044EEEF: and      ebp, 0xff
  0x0044EEF5: shr      ebp, cl
  0x0044EEF7: mov      ecx, dword ptr [esp + 0x1c]
  0x0044EEFB: shr      ebx, 8
  0x0044EEFE: mov      ecx, dword ptr [ecx + ebp*4]
  0x0044EF01: mov      cx, word ptr [ecx + ebx*2]
  0x0044EF05: xor      ebx, ebx
  0x0044EF07: mov      byte ptr [eax + 2], cl
  0x0044EF0A: mov      bl, ch
  0x0044EF0C: xor      ecx, ecx
  0x0044EF0E: mov      cl, byte ptr [eax + 4]
  0x0044EF11: mov      byte ptr [eax + 1], bl
  0x0044EF14: mov      ebx, ecx
  0x0044EF16: mov      cl, dl
  0x0044EF18: shr      ebx, cl
  0x0044EF1A: mov      ecx, dword ptr [esp + 0x18]
  0x0044EF1E: xor      edx, edx
  0x0044EF20: mov      dl, byte ptr [eax + 3]
  0x0044EF23: mov      ecx, dword ptr [ecx + ebx*4]
  0x0044EF26: xor      ebx, ebx
  0x0044EF28: mov      bx, word ptr [ecx + edx*2]
  0x0044EF2C: xor      edx, edx
  0x0044EF2E: mov      dx, word ptr [esi + 0x178]
  0x0044EF35: imul     ebx, edi
  0x0044EF38: imul     edx, dword ptr [esp + 0x34]
  0x0044EF3D: lea      edx, [ebx + edx + 0x8000]
  0x0044EF44: mov      ecx, edx
  0x0044EF46: shr      ecx, 0x10
  0x0044EF49: add      ecx, edx
  0x0044EF4B: mov      edx, dword ptr [esp + 0x24]
  0x0044EF4F: shr      ecx, 0x10
  0x0044EF52: test     edx, edx
  0x0044EF54: jne      0x44ef7e
  0x0044EF05: xor      ebx, ebx
  0x0044EF07: mov      byte ptr [eax + 2], cl
  0x0044EF0A: mov      bl, ch
  0x0044EF0C: xor      ecx, ecx
  0x0044EF0E: mov      cl, byte ptr [eax + 4]
  0x0044EF11: mov      byte ptr [eax + 1], bl
  0x0044EF14: mov      ebx, ecx
  0x0044EF16: mov      cl, dl
  0x0044EF18: shr      ebx, cl
  0x0044EF1A: mov      ecx, dword ptr [esp + 0x18]
  0x0044EF1E: xor      edx, edx
  0x0044EF20: mov      dl, byte ptr [eax + 3]
  0x0044EF23: mov      ecx, dword ptr [ecx + ebx*4]
  0x0044EF26: xor      ebx, ebx
  0x0044EF28: mov      bx, word ptr [ecx + edx*2]
  0x0044EF2C: xor      edx, edx
  0x0044EF2E: mov      dx, word ptr [esi + 0x178]
  0x0044EF35: imul     ebx, edi
  0x0044EF38: imul     edx, dword ptr [esp + 0x34]
  0x0044EF3D: lea      edx, [ebx + edx + 0x8000]
  0x0044EF44: mov      ecx, edx
  0x0044EF46: shr      ecx, 0x10
  0x0044EF49: add      ecx, edx
  0x0044EF4B: mov      edx, dword ptr [esp + 0x24]
  0x0044EF4F: shr      ecx, 0x10
  0x0044EF52: test     edx, edx
  0x0044EF54: jne      0x44ef7e
  0x0044EBFE: mov      ecx, dword ptr [esp + 0x34]
  0x0044EC02: mov      edx, dword ptr [esp + 0x14]
  0x0044EC06: and      ecx, 0xff
  0x0044EC0C: mov      cl, byte ptr [ecx + edx]
  0x0044EC0F: mov      edx, dword ptr [esp + 0x38]
  0x0044EC13: mov      byte ptr [eax + 1], cl
  0x0044EC16: mov      ecx, dword ptr [esp + 0x30]
  0x0044EC1A: add      eax, 4
  0x0044EC1D: dec      ecx
  0x0044EC1E: mov      dword ptr [esp + 0x30], ecx
  0x0044EC22: jne      0x44eacc
  0x0044EC0F: mov      edx, dword ptr [esp + 0x38]
  0x0044EC13: mov      byte ptr [eax + 1], cl
  0x0044EC16: mov      ecx, dword ptr [esp + 0x30]
  0x0044EC1A: add      eax, 4
  0x0044EC1D: dec      ecx
  0x0044EC1E: mov      dword ptr [esp + 0x30], ecx
  0x0044EC22: jne      0x44eacc
  0x0044EF56: mov      edx, dword ptr [esp + 0x10]
  0x0044EF5A: mov      edi, ecx
  0x0044EF5C: and      edi, 0xffff
  0x0044EF62: mov      cl, dl
  0x0044EF64: mov      ebx, edi
  0x0044EF66: and      ebx, 0xff
  0x0044EF6C: shr      ebx, cl
  0x0044EF6E: mov      ecx, dword ptr [esp + 0x1c]
  0x0044EF72: shr      edi, 8
  0x0044EF75: mov      ecx, dword ptr [ecx + ebx*4]
  0x0044EF78: mov      cx, word ptr [ecx + edi*2]
  0x0044EF7C: jmp      0x44ef82
  0x0044EF7E: mov      edx, dword ptr [esp + 0x10]
  0x0044EF82: mov      edi, dword ptr [esp + 0x28]
  0x0044EF86: xor      ebx, ebx
  0x0044EF88: mov      bl, ch
  0x0044EF8A: mov      byte ptr [eax + 4], cl
  0x0044EF8D: mov      byte ptr [eax + 3], bl
  0x0044EF90: mov      ecx, dword ptr [esp + 0x38]
  0x0044EF94: add      eax, 8
  0x0044EF97: dec      ecx
  0x0044EF98: mov      dword ptr [esp + 0x38], ecx
  0x0044EF9C: jne      0x44ed3f
  0x0044EF82: mov      edi, dword ptr [esp + 0x28]
  0x0044EF86: xor      ebx, ebx
  0x0044EF88: mov      bl, ch
  0x0044EF8A: mov      byte ptr [eax + 4], cl
  0x0044EF8D: mov      byte ptr [eax + 3], bl
  0x0044EF90: mov      ecx, dword ptr [esp + 0x38]
  0x0044EF94: add      eax, 8
  0x0044EF97: dec      ecx
  0x0044EF98: mov      dword ptr [esp + 0x38], ecx
  0x0044EF9C: jne      0x44ed3f

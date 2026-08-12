/**
 * Function: sub_441a00
 * Address: 0x00441A00
 * Blocks: 127
 * Instructions: 485
 * Analyzed with angr + capstone
 */
void* sub_441a00(void) {

  /* Block 1 @ 0x00441A00 */
  // sub esp, 0x30
  // mov eax, dword ptr [esp + 0x34]
  // push ebx
  // push ebp
  // push esi
  // push edi
  // mov edi, dword ptr [eax]
  // mov dword ptr [esp + 0x20], edi
  // mov eax, dword ptr [edi]
  // mov esi, dword ptr [eax]
  // mov ecx, dword ptr [eax + 4]
  // mov eax, dword ptr [edi + 0x10]
  // push esi
  // mov ebp, eax
  // mov dword ptr [esp + 0x18], eax
  // shr ebp, 2
  // xor eax, eax
  // mov dword ptr [esp + 0x2c], ecx
  // and ebp, 1
  // mov dword ptr [esp + 0x20], eax
  // mov dword ptr [esp + 0x1c], eax
  // mov dword ptr [esp + 0x30], eax
  // call 0x0044BDB0
  call(0x0044BDB0);
  /* Block 2 @ 0x00441A3F */
  // push esi
  // call 0x0043F940
  call(0x0043F940);
  /* Block 3 @ 0x00441A45 */
  // mov ecx, dword ptr [esp + 0x1c]
  // mov ebx, eax
  // and ebx, 0xfffffff7
  // add esp, 8
  // mov eax, ebx
  // xor eax, ecx
  // TEST al, 2 (set flags)
  // mov dword ptr [esp + 0x10], eax
  // if (equal) goto 0x441a93
  /* Block 4 @ 0x00441A93 */
  // TEST bl, 4 (set flags)
  // if (equal) goto 0x441aa5
  /* Block 5 @ 0x00441A5D */
  // TEST cl, 2 (set flags)
  // if (equal) goto 0x441a6d
  /* Block 6 @ 0x00441AA5 */
  // or eax, 0xffffffff
  // push eax
  // push 0
  // push esi
  // call 0x0044BBF0
  call(0x0044BBF0);
  /* Block 7 @ 0x00441A98 */
  // TEST byte ptr [edi + 0x14], 4 (set flags)
  // if (not equal) goto 0x441aa5
  /* Block 8 @ 0x00441A6D */
  // TEST bl, 1 (set flags)
  // if (equal) goto 0x441a7a
  /* Block 9 @ 0x00441A62 */
  // push esi
  // call 0x0044BE30
  call(0x0044BE30);
  /* Block 10 @ 0x00441AB1 */
  // add esp, 0xc
  // TEST ebp, ebp (set flags)
  // if (equal) goto 0x441acd
  /* Block 11 @ 0x00441A9E */
  // mov eax, 0x186a0
  goto 0x441aa8;
  /* Block 12 @ 0x00441A7A */
  // push -1
  // push -1
  // push 1
  // push esi
  // call 0x0044BE60
  call(0x0044BE60);
  /* Block 13 @ 0x00441A72 */
  // mov dword ptr [esp + 0x18], 1
  // push -1
  // push -1
  // push 1
  // push esi
  // call 0x0044BE60
  call(0x0044BE60);
  /* Block 14 @ 0x00441A68 */
  // add esp, 4
  goto 0x441a89;
  /* Block 15 @ 0x00441ACD */
  // xor edi, edi
  // mov dword ptr [esp + 0x24], 0xffffffff
  // mov eax, dword ptr [esp + 0x18]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x441b27
  /* Block 16 @ 0x00441AB8 */
  // mov edi, ebx
  // mov dword ptr [esp + 0x24], 0x186a0
  // and edi, 0xff
  // and edi, 1
  goto 0x441ad7;
  // push eax
  // push 0
  // push esi
  // call 0x0044BBF0
  call(0x0044BBF0);
  /* Block 17 @ 0x00441A86 */
  // add esp, 0x10
  // mov eax, dword ptr [esp + 0x10]
  // and al, 0xfd
  // mov dword ptr [esp + 0x10], eax
  // TEST bl, 4 (set flags)
  // if (equal) goto 0x441aa5
  // mov eax, dword ptr [esp + 0x10]
  // and al, 0xfd
  // mov dword ptr [esp + 0x10], eax
  // TEST bl, 4 (set flags)
  // if (equal) goto 0x441aa5
  /* Block 18 @ 0x00441B27 */
  // TEST byte ptr [esp + 0x10], 4 (set flags)
  // if (equal) goto 0x441b4c
  /* Block 19 @ 0x00441ADF */
  // mov edx, dword ptr [esi + 0x2dc]
  // mov eax, dword ptr [esp + 0x24]
  // push 0x186a0
  // push edx
  // lea ecx, [esp + 0x38]
  // push eax
  // push ecx
  // call 0x0043E4C0
  call(0x0043E4C0);
  // mov eax, dword ptr [esp + 0x18]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x441b27
  /* Block 20 @ 0x00441B4C */
  // TEST byte ptr [esp + 0x10], 1 (set flags)
  // if (equal) goto 0x441c25
  /* Block 21 @ 0x00441B2E */
  // TEST ebp, ebp (set flags)
  // push esi
  // if (equal) goto 0x441b3a
  /* Block 22 @ 0x00441AFA */
  // add esp, 0x10
  // TEST eax, eax (set flags)
  // if (equal) goto 0x441b18
  /* Block 23 @ 0x00441C25 */
  // mov ecx, dword ptr [esp + 0x24]
  // push ecx
  // push edi
  // push esi
  // call 0x0044BBF0
  call(0x0044BBF0);
  /* Block 24 @ 0x00441B57 */
  // TEST bl, 1 (set flags)
  // if (equal) goto 0x441be3
  /* Block 25 @ 0x00441B3A */
  // call 0x0044BBB0
  call(0x0044BBB0);
  /* Block 26 @ 0x00441B33 */
  // call 0x0044BE10
  call(0x0044BE10);
  /* Block 27 @ 0x00441B18 */
  // CMP edi, 1 (set flags)
  // if (not equal) goto 0x441b27
  /* Block 28 @ 0x00441B01 */
  // mov edx, dword ptr [esp + 0x30]
  // push edx
  // call 0x0043E590
  call(0x0043E590);
  /* Block 29 @ 0x00441C31 */
  // mov ebx, dword ptr [esp + 0x1c]
  // add esp, 0xc
  // TEST bl, 0x10 (set flags)
  // if (equal) goto 0x441c5c
  /* Block 30 @ 0x00441BE3 */
  // mov cl, byte ptr [esp + 0x14]
  // mov eax, ebp
  // and eax, 0xff00
  // add eax, 0xff
  // TEST cl, 0x20 (set flags)
  // if (equal) goto 0x441c0b
  /* Block 31 @ 0x00441B60 */
  // mov eax, dword ptr [esp + 0x18]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x441b75
  /* Block 32 @ 0x00441B3F */
  // mov eax, dword ptr [esp + 0x14]
  // add esp, 4
  // and al, 0xfb
  // mov dword ptr [esp + 0x10], eax
  // TEST byte ptr [esp + 0x10], 1 (set flags)
  // if (equal) goto 0x441c25
  /* Block 33 @ 0x00441B38 */
  goto 0x441b3f;
  /* Block 34 @ 0x00441B1D */
  // mov dword ptr [esp + 0x18], 2
  // xor edi, edi
  // TEST byte ptr [esp + 0x10], 4 (set flags)
  // if (equal) goto 0x441b4c
  /* Block 35 @ 0x00441B0B */
  // add esp, 4
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x441b18
  /* Block 36 @ 0x00441C5C */
  // TEST bl, 0x20 (set flags)
  // if (equal) goto 0x441c87
  /* Block 37 @ 0x00441C3D */
  // TEST byte ptr [esp + 0x14], 2 (set flags)
  // if (equal) goto 0x441c4f
  /* Block 38 @ 0x00441C0B */
  // mov ecx, 1
  // push ecx
  // push eax
  // push esi
  // call 0x0044FF00
  call(0x0044FF00);
  /* Block 39 @ 0x00441BFC */
  // mov edx, dword ptr [esp + 0x10]
  // xor ecx, ecx
  // and edx, 0xffffffdf
  // mov dword ptr [esp + 0x10], edx
  goto 0x441c10;
  /* Block 40 @ 0x00441B75 */
  // TEST ebp, ebp (set flags)
  // if (equal) goto 0x441b87
  /* Block 41 @ 0x00441B68 */
  // mov dword ptr [esp + 0x18], 2
  goto 0x441c1b;
  /* Block 42 @ 0x00441B12 */
  // mov dword ptr [esp + 0x18], eax
  goto 0x441b27;
  /* Block 43 @ 0x00441C87 */
  // TEST ebp, ebp (set flags)
  // if (equal) goto 0x441c94
  /* Block 44 @ 0x00441C61 */
  // TEST byte ptr [esp + 0x14], 1 (set flags)
  // if (equal) goto 0x441c7a
  /* Block 45 @ 0x00441C4F */
  // mov eax, dword ptr [esp + 0x14]
  // and al, 0xef
  // mov dword ptr [esp + 0x14], eax
  // and ebx, 0xffffffef
  // TEST bl, 0x20 (set flags)
  // if (equal) goto 0x441c87
  /* Block 46 @ 0x00441C44 */
  // push esi
  // call 0x0044FDD0
  call(0x0044FDD0);
  /* Block 47 @ 0x00441C18 */
  // add esp, 0xc
  // mov eax, dword ptr [esp + 0x10]
  // and al, 0xfe
  // mov dword ptr [esp + 0x10], eax
  // mov ecx, dword ptr [esp + 0x24]
  // push ecx
  // push edi
  // push esi
  // call 0x0044BBF0
  call(0x0044BBF0);
  // push ecx
  // push eax
  // push esi
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00441A00: sub      esp, 0x30
  0x00441A03: mov      eax, dword ptr [esp + 0x34]
  0x00441A07: push     ebx
  0x00441A08: push     ebp
  0x00441A09: push     esi
  0x00441A0A: push     edi
  0x00441A0B: mov      edi, dword ptr [eax]
  0x00441A0D: mov      dword ptr [esp + 0x20], edi
  0x00441A11: mov      eax, dword ptr [edi]
  0x00441A13: mov      esi, dword ptr [eax]
  0x00441A15: mov      ecx, dword ptr [eax + 4]
  0x00441A18: mov      eax, dword ptr [edi + 0x10]
  0x00441A1B: push     esi
  0x00441A1C: mov      ebp, eax
  0x00441A1E: mov      dword ptr [esp + 0x18], eax
  0x00441A22: shr      ebp, 2
  0x00441A25: xor      eax, eax
  0x00441A27: mov      dword ptr [esp + 0x2c], ecx
  0x00441A2B: and      ebp, 1
  0x00441A2E: mov      dword ptr [esp + 0x20], eax
  0x00441A32: mov      dword ptr [esp + 0x1c], eax
  0x00441A36: mov      dword ptr [esp + 0x30], eax
  0x00441A3A: call     0x44bdb0
  0x00441A3F: push     esi
  0x00441A40: call     0x43f940
  0x00441A45: mov      ecx, dword ptr [esp + 0x1c]
  0x00441A49: mov      ebx, eax
  0x00441A4B: and      ebx, 0xfffffff7
  0x00441A4E: add      esp, 8
  0x00441A51: mov      eax, ebx
  0x00441A53: xor      eax, ecx
  0x00441A55: test     al, 2
  0x00441A57: mov      dword ptr [esp + 0x10], eax
  0x00441A5B: je       0x441a93
  0x00441A93: test     bl, 4
  0x00441A96: je       0x441aa5
  0x00441A5D: test     cl, 2
  0x00441A60: je       0x441a6d
  0x00441AA5: or       eax, 0xffffffff
  0x00441AA8: push     eax
  0x00441AA9: push     0
  0x00441AAB: push     esi
  0x00441AAC: call     0x44bbf0
  0x00441A98: test     byte ptr [edi + 0x14], 4
  0x00441A9C: jne      0x441aa5
  0x00441A6D: test     bl, 1
  0x00441A70: je       0x441a7a
  0x00441A62: push     esi
  0x00441A63: call     0x44be30
  0x00441AB1: add      esp, 0xc
  0x00441AB4: test     ebp, ebp
  0x00441AB6: je       0x441acd
  0x00441A9E: mov      eax, 0x186a0
  0x00441AA3: jmp      0x441aa8
  0x00441A7A: push     -1
  0x00441A7C: push     -1
  0x00441A7E: push     1
  0x00441A80: push     esi
  0x00441A81: call     0x44be60
  0x00441A72: mov      dword ptr [esp + 0x18], 1
  0x00441A7A: push     -1
  0x00441A7C: push     -1
  0x00441A7E: push     1
  0x00441A80: push     esi
  0x00441A81: call     0x44be60
  0x00441A68: add      esp, 4
  0x00441A6B: jmp      0x441a89
  0x00441ACD: xor      edi, edi
  0x00441ACF: mov      dword ptr [esp + 0x24], 0xffffffff
  0x00441AD7: mov      eax, dword ptr [esp + 0x18]
  0x00441ADB: test     eax, eax
  0x00441ADD: je       0x441b27
  0x00441AB8: mov      edi, ebx
  0x00441ABA: mov      dword ptr [esp + 0x24], 0x186a0
  0x00441AC2: and      edi, 0xff
  0x00441AC8: and      edi, 1
  0x00441ACB: jmp      0x441ad7
  0x00441AA8: push     eax
  0x00441AA9: push     0
  0x00441AAB: push     esi
  0x00441AAC: call     0x44bbf0
  0x00441A86: add      esp, 0x10
  0x00441A89: mov      eax, dword ptr [esp + 0x10]
  0x00441A8D: and      al, 0xfd
  0x00441A8F: mov      dword ptr [esp + 0x10], eax
  0x00441A93: test     bl, 4
  0x00441A96: je       0x441aa5
  0x00441A89: mov      eax, dword ptr [esp + 0x10]
  0x00441A8D: and      al, 0xfd
  0x00441A8F: mov      dword ptr [esp + 0x10], eax
  0x00441A93: test     bl, 4
  0x00441A96: je       0x441aa5
  0x00441B27: test     byte ptr [esp + 0x10], 4
  0x00441B2C: je       0x441b4c
  0x00441ADF: mov      edx, dword ptr [esi + 0x2dc]
  0x00441AE5: mov      eax, dword ptr [esp + 0x24]
  0x00441AE9: push     0x186a0
  0x00441AEE: push     edx
  0x00441AEF: lea      ecx, [esp + 0x38]
  0x00441AF3: push     eax
  0x00441AF4: push     ecx
  0x00441AF5: call     0x43e4c0
  0x00441AD7: mov      eax, dword ptr [esp + 0x18]
  0x00441ADB: test     eax, eax
  0x00441ADD: je       0x441b27
  0x00441B4C: test     byte ptr [esp + 0x10], 1
  0x00441B51: je       0x441c25
  0x00441B2E: test     ebp, ebp
  0x00441B30: push     esi
  0x00441B31: je       0x441b3a
  0x00441AFA: add      esp, 0x10
  0x00441AFD: test     eax, eax
  0x00441AFF: je       0x441b18
  0x00441C25: mov      ecx, dword ptr [esp + 0x24]
  0x00441C29: push     ecx
  0x00441C2A: push     edi
  0x00441C2B: push     esi
  0x00441C2C: call     0x44bbf0
  0x00441B57: test     bl, 1
  0x00441B5A: je       0x441be3
  0x00441B3A: call     0x44bbb0
  0x00441B33: call     0x44be10
  0x00441B18: cmp      edi, 1
  0x00441B1B: jne      0x441b27
  0x00441B01: mov      edx, dword ptr [esp + 0x30]
  0x00441B05: push     edx
  0x00441B06: call     0x43e590
  0x00441C31: mov      ebx, dword ptr [esp + 0x1c]
  0x00441C35: add      esp, 0xc
  0x00441C38: test     bl, 0x10
  0x00441C3B: je       0x441c5c
  0x00441BE3: mov      cl, byte ptr [esp + 0x14]
  0x00441BE7: mov      eax, ebp
  0x00441BE9: neg      eax
  0x00441BEB: sbb      eax, eax
  0x00441BED: and      eax, 0xff00
  0x00441BF2: add      eax, 0xff
  0x00441BF7: test     cl, 0x20
  0x00441BFA: je       0x441c0b
  0x00441B60: mov      eax, dword ptr [esp + 0x18]
  0x00441B64: test     eax, eax
  0x00441B66: je       0x441b75
  0x00441B3F: mov      eax, dword ptr [esp + 0x14]
  0x00441B43: add      esp, 4
  0x00441B46: and      al, 0xfb
  0x00441B48: mov      dword ptr [esp + 0x10], eax
  0x00441B4C: test     byte ptr [esp + 0x10], 1
  0x00441B51: je       0x441c25
  0x00441B38: jmp      0x441b3f
  0x00441B1D: mov      dword ptr [esp + 0x18], 2
  0x00441B25: xor      edi, edi
  0x00441B27: test     byte ptr [esp + 0x10], 4
  0x00441B2C: je       0x441b4c
  0x00441B0B: add      esp, 4
  0x00441B0E: test     eax, eax
  0x00441B10: jne      0x441b18
  0x00441C5C: test     bl, 0x20
  0x00441C5F: je       0x441c87
  0x00441C3D: test     byte ptr [esp + 0x14], 2
  0x00441C42: je       0x441c4f
  0x00441C0B: mov      ecx, 1
  0x00441C10: push     ecx
  0x00441C11: push     eax
  0x00441C12: push     esi
  0x00441C13: call     0x44ff00
  0x00441BFC: mov      edx, dword ptr [esp + 0x10]
  0x00441C00: xor      ecx, ecx
  0x00441C02: and      edx, 0xffffffdf
  0x00441C05: mov      dword ptr [esp + 0x10], edx
  0x00441C09: jmp      0x441c10
  0x00441B75: test     ebp, ebp
  0x00441B77: je       0x441b87
  0x00441B68: mov      dword ptr [esp + 0x18], 2
  0x00441B70: jmp      0x441c1b
  0x00441B12: mov      dword ptr [esp + 0x18], eax
  0x00441B16: jmp      0x441b27
  0x00441C87: test     ebp, ebp
  0x00441C89: je       0x441c94
  0x00441C61: test     byte ptr [esp + 0x14], 1
  0x00441C66: je       0x441c7a
  0x00441C4F: mov      eax, dword ptr [esp + 0x14]
  0x00441C53: and      al, 0xef
  0x00441C55: mov      dword ptr [esp + 0x14], eax
  0x00441C59: and      ebx, 0xffffffef
  0x00441C5C: test     bl, 0x20
  0x00441C5F: je       0x441c87
  0x00441C44: push     esi
  0x00441C45: call     0x44fdd0
  0x00441C18: add      esp, 0xc
  0x00441C1B: mov      eax, dword ptr [esp + 0x10]
  0x00441C1F: and      al, 0xfe
  0x00441C21: mov      dword ptr [esp + 0x10], eax
  0x00441C25: mov      ecx, dword ptr [esp + 0x24]
  0x00441C29: push     ecx
  0x00441C2A: push     edi
  0x00441C2B: push     esi
  0x00441C2C: call     0x44bbf0
  0x00441C10: push     ecx
  0x00441C11: push     eax
  0x00441C12: push     esi
  0x00441C13: call     0x44ff00
  0x00441B87: mov      eax, dword ptr [esp + 0x44]
  0x00441B8B: mov      eax, dword ptr [eax + 0x10]
  0x00441B8E: test     eax, eax
  0x00441B90: je       0x441bd4
  0x00441B79: push     esi
  0x00441B7A: call     0x44bbd0
  0x00441C1B: mov      eax, dword ptr [esp + 0x10]
  0x00441C1F: and      al, 0xfe
  0x00441C21: mov      dword ptr [esp + 0x10], eax
  0x00441C25: mov      ecx, dword ptr [esp + 0x24]
  0x00441C29: push     ecx
  0x00441C2A: push     edi
  0x00441C2B: push     esi
  0x00441C2C: call     0x44bbf0
  0x00441C94: test     ebx, ebx
  0x00441C96: je       0x441ca6
  0x00441C8B: push     esi
  0x00441C8C: call     0x44fde0
  0x00441C7A: mov      eax, dword ptr [esp + 0x14]
  0x00441C7E: and      al, 0xdf
  0x00441C80: mov      dword ptr [esp + 0x14], eax
  0x00441C84: and      ebx, 0xffffffdf
  0x00441C87: test     ebp, ebp
  0x00441C89: je       0x441c94
  0x00441C68: cmp      dword ptr [esp + 0x18], 2
  0x00441C6D: je       0x441c84
  0x00441C4A: add      esp, 4
  0x00441C4D: jmp      0x441c59
  0x00441BD4: mov      dword ptr [esp + 0x1c], 1
  0x00441BDC: mov      edi, 2
  0x00441BE1: jmp      0x441c1b
  0x00441B92: mov      byte ptr [esp + 0x34], 0
  0x00441B97: push     0
  0x00441B99: movzx    cx, byte ptr [eax]
  0x00441B9D: mov      word ptr [esp + 0x3a], cx
  0x00441BA2: push     0
  0x00441BA4: movzx    dx, byte ptr [eax + 1]
  0x00441BA9: mov      word ptr [esp + 0x40], dx
  0x00441BAE: push     1
  0x00441BB0: movzx    cx, byte ptr [eax + 2]
  0x00441BB5: mov      word ptr [esp + 0x46], cx
  0x00441BBA: movzx    dx, byte ptr [eax + 1]
  0x00441BBF: lea      eax, [esp + 0x40]
  0x00441BC3: mov      word ptr [esp + 0x48], dx
  0x00441BC8: push     eax
  0x00441BC9: push     esi
  0x00441BCA: call     0x44bac0
  0x00441B7F: add      esp, 4
  0x00441B82: jmp      0x441c1b
  0x00441CA6: push     esi
  0x00441CA7: call     0x441620
  0x00441C98: push     0x2fb2044
  0x00441C9D: push     esi
  0x00441C9E: call     0x4463d0
  0x00441C91: add      esp, 4
  0x00441C94: test     ebx, ebx
  0x00441C96: je       0x441ca6
  0x00441C84: and      ebx, 0xffffffdf
  0x00441C87: test     ebp, ebp
  0x00441C89: je       0x441c94
  0x00441C6F: push     esi
  0x00441C70: call     0x44ff30
  0x00441C59: and      ebx, 0xffffffef
  0x00441C5C: test     bl, 0x20
  0x00441C5F: je       0x441c87
  0x00441BCF: add      esp, 0x14
  0x00441BD2: jmp      0x441c1b
  0x00441CAC: mov      eax, dword ptr [esp + 0x20]
  0x00441CB0: add      esp, 4
  0x00441CB3: test     eax, eax
  0x00441CB5: jne      0x441ccb
  0x00441CA3: add      esp, 8
  0x00441CA6: push     esi
  0x00441CA7: call     0x441620
  0x00441C75: add      esp, 4
  0x00441C78: jmp      0x441c84
  0x00441CB7: cmp      dword ptr [esp + 0x18], 2
  0x00441CBC: je       0x441ccb
  0x00441CCB: mov      ebx, dword ptr [esp + 0x28]
  0x00441CCF: push     ebx
  0x00441CD0: push     esi
  0x00441CD1: call     0x43f250
  0x00441CBE: push     esi
  0x00441CBF: call     0x44fe30
  0x00441CD6: mov      al, byte ptr [ebx + 0x19]
  0x00441CD9: add      esp, 8
  0x00441CDC: xor      edi, edi
  0x00441CDE: test     al, 2
  0x00441CE0: je       0x441ce7
  0x00441CC4: add      esp, 4
  0x00441CC7: mov      dword ptr [esp + 0x2c], eax
  0x00441CCB: mov      ebx, dword ptr [esp + 0x28]
  0x00441CCF: push     ebx
  0x00441CD0: push     esi
  0x00441CD1: call     0x43f250
  0x00441CE7: test     al, 4
  0x00441CE9: mov      eax, dword ptr [esp + 0x1c]
  0x00441CED: je       0x441d06
  0x00441CE2: mov      edi, 2
  0x00441CE7: test     al, 4
  0x00441CE9: mov      eax, dword ptr [esp + 0x1c]
  0x00441CED: je       0x441d06
  0x00441D06: test     eax, eax
  0x00441D08: je       0x441d18
  0x00441CEF: test     eax, eax
  0x00441CF1: jne      0x441d18
  0x00441D18: cmp      byte ptr [ebx + 0x18], 0x10
  0x00441D1C: jne      0x441d21
  0x00441D0A: push     0x2fb2020
  0x00441D0F: push     esi
  0x00441D10: call     0x4463d0
  0x00441CF3: cmp      dword ptr [esp + 0x18], 2
  0x00441CF8: jne      0x441d01
  0x00441D1E: or       edi, 4
  0x00441D21: mov      eax, dword ptr [esi + 0x7c]
  0x00441D24: test     al, 1
  0x00441D26: je       0x441d2b
  0x00441D21: mov      eax, dword ptr [esi + 0x7c]
  0x00441D24: test     al, 1
  0x00441D26: je       0x441d2b
  0x00441D15: add      esp, 8
  0x00441D18: cmp      byte ptr [ebx + 0x18], 0x10
  0x00441D1C: jne      0x441d21
  0x00441CFA: test     byte ptr [esp + 0x14], 1
  0x00441CFF: je       0x441d18
  0x00441D01: or       edi, 1
  0x00441D04: jmp      0x441d18
  0x00441D2B: mov      ecx, dword ptr [esp + 0x18]
  0x00441D2F: cmp      ecx, 2
  0x00441D32: jne      0x441d3e
  0x00441D28: or       edi, 0x10
  0x00441D2B: mov      ecx, dword ptr [esp + 0x18]
  0x00441D2F: cmp      ecx, 2
  0x00441D32: jne      0x441d3e
  0x00441D34: test     byte ptr [esp + 0x14], 0x20
  0x00441D39: je       0x441d3e
  0x00441D3E: test     eax, 0x20000
  0x00441D43: jne      0x441d52
  0x00441D3B: or       edi, 0x20
  0x00441D3E: test     eax, 0x20000
  0x00441D43: jne      0x441d52
  0x00441D45: test     eax, 0x1000000
  0x00441D4A: je       0x441d68
  0x00441D52: cmp      ecx, 2
  0x00441D55: jne      0x441d65
  0x00441D68: cmp      edi, dword ptr [esp + 0x14]
  0x00441D6C: je       0x441d7c
  0x00441D4C: test     byte ptr [esi + 0x78], 0x80
  0x00441D50: jne      0x441d68
  0x00441D57: push     0x2fb1ff8
  0x00441D5C: push     esi
  0x00441D5D: call     0x4463d0
  0x00441D65: or       edi, 0x20
  0x00441D68: cmp      edi, dword ptr [esp + 0x14]
  0x00441D6C: je       0x441d7c
  0x00441D7C: mov      ecx, dword ptr [esp + 0x44]
  0x00441D80: test     ebp, ebp
  0x00441D82: mov      eax, dword ptr [ecx + 4]
  0x00441D85: mov      ebx, dword ptr [ecx + 8]
  0x00441D88: je       0x441d8c
  0x00441D6E: push     0x2fb1fd0
  0x00441D73: push     esi
  0x00441D74: call     0x4463d0
  0x00441D62: add      esp, 8
  0x00441D65: or       edi, 0x20
  0x00441D68: cmp      edi, dword ptr [esp + 0x14]
  0x00441D6C: je       0x441d7c
  0x00441D8C: test     ebx, ebx
  0x00441D8E: jge      0x441d9d
  0x00441D8A: add      ebx, ebx
  0x00441D8C: test     ebx, ebx
  0x00441D8E: jge      0x441d9d
  0x00441D79: add      esp, 8
  0x00441D7C: mov      ecx, dword ptr [esp + 0x44]
  0x00441D80: test     ebp, ebp
  0x00441D82: mov      eax, dword ptr [ecx + 4]
  0x00441D85: mov      ebx, dword ptr [ecx + 8]
  0x00441D88: je       0x441d8c
  0x00441D90: mov      edx, dword ptr [esp + 0x20]
  0x00441D94: mov      edx, dword ptr [edx + 0xc]
  0x00441D97: dec      edx
  0x00441D98: imul     edx, ebx
  0x00441D9B: sub      eax, edx
  0x00441D9D: mov      dword ptr [ecx + 0x18], eax
  0x00441DA0: mov      eax, dword ptr [esp + 0x1c]
  0x00441DA4: test     eax, eax
  0x00441DA6: mov      dword ptr [ecx + 0x1c], ebx
  0x00441DA9: je       0x441df3
  0x00441D9D: mov      dword ptr [ecx + 0x18], eax
  0x00441DA0: mov      eax, dword ptr [esp + 0x1c]
  0x00441DA4: test     eax, eax
  0x00441DA6: mov      dword ptr [ecx + 0x1c], ebx
  0x00441DA9: je       0x441df3
  0x00441DF3: cmp      dword ptr [esp + 0x18], 2
  0x00441DF8: jne      0x441e22
  0x00441DAB: mov      eax, dword ptr [esp + 0x28]
  0x00441DAF: push     eax
  0x00441DB0: push     esi
  0x00441DB1: call     0x450430
  0x00441DFA: mov      edx, dword ptr [esp + 0x28]
  0x00441DFE: push     edx
  0x00441DFF: push     esi
  0x00441E00: call     0x450430
  0x00441E22: mov      eax, dword ptr [esp + 0x2c]
  0x00441E26: dec      eax
  0x00441E27: js       0x441e64
  0x00441DB6: push     eax
  0x00441DB7: push     esi
  0x00441DB8: call     0x446cb0
  0x00441E05: push     eax
  0x00441E06: push     esi
  0x00441E07: call     0x446cb0
  0x00441E64: pop      edi
  0x00441E65: pop      esi
  0x00441E66: pop      ebp
  0x00441E67: mov      eax, 1
  0x00441E6C: pop      ebx
  0x00441E6D: add      esp, 0x30
  0x00441E70: ret      
  0x00441E29: inc      eax
  0x00441E2A: mov      dword ptr [esp + 0x2c], eax
  0x00441E2E: jmp      0x441e34
  0x00441DBD: mov      ebp, dword ptr [esp + 0x54]
  0x00441DC1: mov      ecx, dword ptr [esp + 0x30]
  0x00441DC5: mov      edi, eax
  0x00441DC7: push     ebp
  0x00441DC8: push     0x441e80
  0x00441DCD: mov      dword ptr [ebp + 0x14], edi
  0x00441DD0: push     ecx
  0x00441DD1: call     0x446a50
  0x00441E0C: mov      ebp, dword ptr [esp + 0x54]
  0x00441E10: mov      edi, eax
  0x00441E12: mov      eax, dword ptr [esp + 0x30]
  0x00441E16: push     ebp
  0x00441E17: push     0x442170
  0x00441E1C: mov      dword ptr [ebp + 0x14], edi
  0x00441E1F: push     eax
  0x00441E20: jmp      0x441dd1
  0x00441E34: mov      edx, dword ptr [esp + 0x20]
  0x00441E38: mov      edi, dword ptr [ecx + 0x18]
  0x00441E3B: mov      eax, dword ptr [edx + 0xc]
  0x00441E3E: mov      ecx, eax
  0x00441E40: dec      eax
  0x00441E41: test     ecx, ecx
  0x00441E43: jbe      0x441e59
  0x00441DD6: push     edi
  0x00441DD7: push     esi
  0x00441DD8: mov      ebx, eax
  0x00441DDA: mov      dword ptr [ebp + 0x14], 0
  0x00441DE1: call     0x446d20
  0x00441DD1: call     0x446a50
  0x00441E59: mov      eax, dword ptr [esp + 0x2c]
  0x00441E5D: dec      eax
  0x00441E5E: mov      dword ptr [esp + 0x2c], eax
  0x00441E62: jne      0x441e30
  0x00441E45: lea      ebp, [eax + 1]
  0x00441E48: push     0
  0x00441E4A: push     edi
  0x00441E4B: push     esi
  0x00441E4C: call     0x43f290
  0x00441DE6: add      esp, 0x24
  0x00441DE9: mov      eax, ebx
  0x00441DEB: pop      edi
  0x00441DEC: pop      esi
  0x00441DED: pop      ebp
  0x00441DEE: pop      ebx
  0x00441DEF: add      esp, 0x30
  0x00441DF2: ret      
  0x00441E30: mov      ecx, dword ptr [esp + 0x44]
  0x00441E34: mov      edx, dword ptr [esp + 0x20]
  0x00441E38: mov      edi, dword ptr [ecx + 0x18]
  0x00441E3B: mov      eax, dword ptr [edx + 0xc]
  0x00441E3E: mov      ecx, eax
  0x00441E40: dec      eax
  0x00441E41: test     ecx, ecx
  0x00441E43: jbe      0x441e59
  0x00441E51: add      esp, 0xc
  0x00441E54: add      edi, ebx
  0x00441E56: dec      ebp
  0x00441E57: jne      0x441e48
  0x00441E48: push     0
  0x00441E4A: push     edi
  0x00441E4B: push     esi
  0x00441E4C: call     0x43f290

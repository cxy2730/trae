/**
 * Function: sub_48d469
 * Address: 0x0048D469
 * Blocks: 310
 * Instructions: 1071
 * Analyzed with angr + capstone
 */
void* sub_48d469(void) {

  /* Block 1 @ 0x0048D469 */
  // push ebp
  // mov ebp, esp
  // sub esp, 0x1c4
  // and byte ptr [ebp - 0x15], 0
  // push ebx
  // push esi
  // mov esi, dword ptr [ebp + 0xc]
  // xor ebx, ebx
  // push edi
  // mov al, byte ptr [esi]
  // mov dword ptr [ebp - 4], ebx
  // TEST al, al (set flags)
  // mov dword ptr [ebp - 0x34], ebx
  // if (equal) goto 0x48de6f
  /* Block 2 @ 0x0048DE6F */
  // CMP dword ptr [ebp - 0x14], -1 (set flags)
  // if (not equal) goto 0x48de86
  /* Block 3 @ 0x0048D48E */
  // mov edi, dword ptr [ebp + 8]
  goto 0x48d498;
  /* Block 4 @ 0x0048DE75 */
  // mov eax, dword ptr [ebp - 0x34]
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x48de89
  /* Block 5 @ 0x0048DE86 */
  // mov eax, dword ptr [ebp - 0x34]
  // pop edi
  // pop esi
  // pop ebx
  // leave 
  return;
  /* Block 6 @ 0x0048D498 */
  // CMP dword ptr [0x2fd9ac0], 1 (set flags)
  // if (less or equal) goto 0x48d4b0
  /* Block 7 @ 0x0048DE7C */
  // CMP byte ptr [ebp - 0x15], al (set flags)
  // if (not equal) goto 0x48de89
  // pop edi
  // pop esi
  // pop ebx
  // leave 
  return;
  /* Block 8 @ 0x0048D4B0 */
  // mov ecx, dword ptr [0x2fd98b4]
  // movzx eax, al
  // mov al, byte ptr [ecx + eax*2]
  // and eax, 8
  // CMP eax, ebx (set flags)
  // if (equal) goto 0x48d4f9
  /* Block 9 @ 0x0048D4A1 */
  // movzx eax, al
  // push 8
  // push eax
  // call 0x0048A852
  call(0x0048A852);
  /* Block 10 @ 0x0048DE81 */
  // or eax, 0xffffffff
  goto 0x48de89;
  /* Block 11 @ 0x0048D4F9 */
  // CMP byte ptr [esi], 0x25 (set flags)
  // if (not equal) goto 0x48dddb
  /* Block 12 @ 0x0048D4C3 */
  // dec dword ptr [ebp - 4]
  // push edi
  // lea eax, [ebp - 4]
  // push edi
  // push eax
  // call 0x0048DEF6
  call(0x0048DEF6);
  /* Block 13 @ 0x0048D4AC */
  // pop ecx
  // pop ecx
  goto 0x48d4bf;
  /* Block 14 @ 0x0048D502 */
  // and byte ptr [ebp - 0x35], 0
  // and byte ptr [ebp - 0x18], 0
  // and byte ptr [ebp - 0x17], 0
  // and byte ptr [ebp - 0xe], 0
  // and byte ptr [ebp - 0xf], 0
  // and byte ptr [ebp - 0x16], 0
  // xor edi, edi
  // and byte ptr [ebp - 5], 0
  // mov dword ptr [ebp - 0x1c], ebx
  // mov dword ptr [ebp - 0x20], ebx
  // mov dword ptr [ebp - 0xc], ebx
  // mov byte ptr [ebp - 0xd], 1
  // mov dword ptr [ebp - 0x30], ebx
  // movzx ebx, byte ptr [esi + 1]
  // inc esi
  // CMP dword ptr [0x2fd9ac0], 1 (set flags)
  // if (less or equal) goto 0x48d54d
  /* Block 15 @ 0x0048DDDB */
  // inc dword ptr [ebp - 4]
  // push edi
  // call 0x0048DEC5
  call(0x0048DEC5);
  /* Block 16 @ 0x0048D4D1 */
  // pop ecx
  // pop ecx
  // push eax
  // call 0x0048DEDF
  call(0x0048DEDF);
  // CMP eax, ebx (set flags)
  // if (equal) goto 0x48d4f9
  /* Block 17 @ 0x0048D54D */
  // mov ecx, dword ptr [0x2fd98b4]
  // movzx eax, bl
  // mov al, byte ptr [ecx + eax*2]
  // and eax, 4
  // TEST eax, eax (set flags)
  // if (equal) goto 0x48d572
  /* Block 18 @ 0x0048D53E */
  // movzx eax, bl
  // push 4
  // push eax
  // call 0x0048A852
  call(0x0048A852);
  /* Block 19 @ 0x0048DDE4 */
  // mov ebx, eax
  // pop ecx
  // movzx eax, byte ptr [esi]
  // inc esi
  // CMP eax, ebx (set flags)
  // mov dword ptr [ebp - 0x14], ebx
  // mov dword ptr [ebp + 0xc], esi
  // if (not equal) goto 0x48de4a
  /* Block 20 @ 0x0048D4D9 */
  // movzx eax, byte ptr [esi + 1]
  // inc esi
  // push eax
  // call 0x00482D59
  call(0x00482D59);
  /* Block 21 @ 0x0048D572 */
  // CMP ebx, 0x4e (set flags)
  // if (greater) goto 0x48d5b5
  /* Block 22 @ 0x0048D560 */
  // mov eax, dword ptr [ebp - 0xc]
  // inc dword ptr [ebp - 0x20]
  // lea eax, [eax + eax*4]
  // lea eax, [ebx + eax*2 - 0x30]
  // mov dword ptr [ebp - 0xc], eax
  goto 0x48d5d7;
  /* Block 23 @ 0x0048D549 */
  // pop ecx
  // pop ecx
  goto 0x48d55c;
  /* Block 24 @ 0x0048DDF5 */
  // mov ecx, dword ptr [0x2fd98b4]
  // movzx eax, bl
  // TEST byte ptr [ecx + eax*2 + 1], 0x80 (set flags)
  // if (equal) goto 0x48de1d
  /* Block 25 @ 0x0048DE4A */
  // dec dword ptr [ebp - 4]
  // push edi
  // push ebx
  // call 0x0048DEDF
  call(0x0048DEDF);
  /* Block 26 @ 0x0048D4E4 */
  // add esp, 0xc
  // TEST eax, eax (set flags)
  // if (equal) goto 0x48d4f9
  /* Block 27 @ 0x0048D577 */
  // if (equal) goto 0x48d5d7
  /* Block 28 @ 0x0048D5B5 */
  // CMP ebx, 0x68 (set flags)
  // if (equal) goto 0x48d5d1
  /* Block 29 @ 0x0048D5D7 */
  // CMP byte ptr [ebp - 0xf], 0 (set flags)
  // if (equal) goto 0x48d530
  // TEST eax, eax (set flags)
  // if (equal) goto 0x48d572
  /* Block 30 @ 0x0048DE1D */
  // CMP dword ptr [ebp - 0x14], -1 (set flags)
  // if (not equal) goto 0x48de33
  /* Block 31 @ 0x0048DE05 */
  // inc dword ptr [ebp - 4]
  // push edi
  // call 0x0048DEC5
  call(0x0048DEC5);
  /* Block 32 @ 0x0048DE54 */
  // pop ecx
  // pop ecx
  goto 0x48de6f;
  /* Block 33 @ 0x0048D4EB */
  // movzx eax, byte ptr [esi + 1]
  // inc esi
  // push eax
  // call 0x00482D59
  call(0x00482D59);
  /* Block 34 @ 0x0048D579 */
  // CMP ebx, 0x2a (set flags)
  // if (equal) goto 0x48d5b0
  /* Block 35 @ 0x0048D5D1 */
  // dec byte ptr [ebp - 0xd]
  // dec byte ptr [ebp - 5]
  // CMP byte ptr [ebp - 0xf], 0 (set flags)
  // if (equal) goto 0x48d530
  /* Block 36 @ 0x0048D5BA */
  // CMP ebx, 0x6c (set flags)
  // if (equal) goto 0x48d5c9
  // movzx ebx, byte ptr [esi + 1]
  // inc esi
  // CMP dword ptr [0x2fd9ac0], 1 (set flags)
  // if (less or equal) goto 0x48d54d
  /* Block 37 @ 0x0048D5E1 */
  // CMP byte ptr [ebp - 0xe], 0 (set flags)
  // mov dword ptr [ebp + 0xc], esi
  // if (not equal) goto 0x48d5fc
  /* Block 38 @ 0x0048DE23 */
  // CMP byte ptr [esi], 0x25 (set flags)
  // if (not equal) goto 0x48de75
  /* Block 39 @ 0x0048DE33 */
  // mov al, byte ptr [esi]
  // TEST al, al (set flags)
  // if (not equal) goto 0x48d493
  /* Block 40 @ 0x0048DE0E */
  // pop ecx
  // movzx ecx, byte ptr [esi]
  // inc esi
  // CMP ecx, eax (set flags)
  // mov dword ptr [ebp + 0xc], esi
  // if (not equal) goto 0x48de58
  /* Block 41 @ 0x0048D4F6 */
  // pop ecx
  goto 0x48d4e7;
  /* Block 42 @ 0x0048D5B0 */
  // inc byte ptr [ebp - 0xe]
  goto 0x48d5d7;
  /* Block 43 @ 0x0048D57E */
  // CMP ebx, 0x46 (set flags)
  // if (equal) goto 0x48d5d7
  /* Block 44 @ 0x0048D5C9 */
  // inc byte ptr [ebp - 0xd]
  // inc byte ptr [ebp - 5]
  goto 0x48d5d7;
  /* Block 45 @ 0x0048D5BF */
  // CMP ebx, 0x77 (set flags)
  // if (equal) goto 0x48d5cc
  /* Block 46 @ 0x0048D5EA */
  // mov eax, dword ptr [ebp + 0x10]
  // mov dword ptr [ebp - 0x44], eax
  // add eax, 4
  // mov dword ptr [ebp + 0x10], eax
  // mov eax, dword ptr [eax - 4]
  // mov dword ptr [ebp - 0x2c], eax
  // and byte ptr [ebp - 0xf], 0
  // CMP byte ptr [ebp - 5], 0 (set flags)
  // if (not equal) goto 0x48d61a
  // and byte ptr [ebp - 0xf], 0
  // CMP byte ptr [ebp - 5], 0 (set flags)
  // if (not equal) goto 0x48d61a
  /* Block 47 @ 0x0048DE28 */
  // mov eax, dword ptr [ebp + 0xc]
  // CMP byte ptr [eax + 1], 0x6e (set flags)
  // if (not equal) goto 0x48de75
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0048D469: push     ebp
  0x0048D46A: mov      ebp, esp
  0x0048D46C: sub      esp, 0x1c4
  0x0048D472: and      byte ptr [ebp - 0x15], 0
  0x0048D476: push     ebx
  0x0048D477: push     esi
  0x0048D478: mov      esi, dword ptr [ebp + 0xc]
  0x0048D47B: xor      ebx, ebx
  0x0048D47D: push     edi
  0x0048D47E: mov      al, byte ptr [esi]
  0x0048D480: mov      dword ptr [ebp - 4], ebx
  0x0048D483: test     al, al
  0x0048D485: mov      dword ptr [ebp - 0x34], ebx
  0x0048D488: je       0x48de6f
  0x0048DE6F: cmp      dword ptr [ebp - 0x14], -1
  0x0048DE73: jne      0x48de86
  0x0048D48E: mov      edi, dword ptr [ebp + 8]
  0x0048D491: jmp      0x48d498
  0x0048DE75: mov      eax, dword ptr [ebp - 0x34]
  0x0048DE78: test     eax, eax
  0x0048DE7A: jne      0x48de89
  0x0048DE86: mov      eax, dword ptr [ebp - 0x34]
  0x0048DE89: pop      edi
  0x0048DE8A: pop      esi
  0x0048DE8B: pop      ebx
  0x0048DE8C: leave    
  0x0048DE8D: ret      
  0x0048D498: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D49F: jle      0x48d4b0
  0x0048DE7C: cmp      byte ptr [ebp - 0x15], al
  0x0048DE7F: jne      0x48de89
  0x0048DE89: pop      edi
  0x0048DE8A: pop      esi
  0x0048DE8B: pop      ebx
  0x0048DE8C: leave    
  0x0048DE8D: ret      
  0x0048D4B0: mov      ecx, dword ptr [0x2fd98b4]
  0x0048D4B6: movzx    eax, al
  0x0048D4B9: mov      al, byte ptr [ecx + eax*2]
  0x0048D4BC: and      eax, 8
  0x0048D4BF: cmp      eax, ebx
  0x0048D4C1: je       0x48d4f9
  0x0048D4A1: movzx    eax, al
  0x0048D4A4: push     8
  0x0048D4A6: push     eax
  0x0048D4A7: call     0x48a852
  0x0048DE81: or       eax, 0xffffffff
  0x0048DE84: jmp      0x48de89
  0x0048D4F9: cmp      byte ptr [esi], 0x25
  0x0048D4FC: jne      0x48dddb
  0x0048D4C3: dec      dword ptr [ebp - 4]
  0x0048D4C6: push     edi
  0x0048D4C7: lea      eax, [ebp - 4]
  0x0048D4CA: push     edi
  0x0048D4CB: push     eax
  0x0048D4CC: call     0x48def6
  0x0048D4AC: pop      ecx
  0x0048D4AD: pop      ecx
  0x0048D4AE: jmp      0x48d4bf
  0x0048D502: and      byte ptr [ebp - 0x35], 0
  0x0048D506: and      byte ptr [ebp - 0x18], 0
  0x0048D50A: and      byte ptr [ebp - 0x17], 0
  0x0048D50E: and      byte ptr [ebp - 0xe], 0
  0x0048D512: and      byte ptr [ebp - 0xf], 0
  0x0048D516: and      byte ptr [ebp - 0x16], 0
  0x0048D51A: xor      edi, edi
  0x0048D51C: and      byte ptr [ebp - 5], 0
  0x0048D520: mov      dword ptr [ebp - 0x1c], ebx
  0x0048D523: mov      dword ptr [ebp - 0x20], ebx
  0x0048D526: mov      dword ptr [ebp - 0xc], ebx
  0x0048D529: mov      byte ptr [ebp - 0xd], 1
  0x0048D52D: mov      dword ptr [ebp - 0x30], ebx
  0x0048D530: movzx    ebx, byte ptr [esi + 1]
  0x0048D534: inc      esi
  0x0048D535: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D53C: jle      0x48d54d
  0x0048DDDB: inc      dword ptr [ebp - 4]
  0x0048DDDE: push     edi
  0x0048DDDF: call     0x48dec5
  0x0048D4D1: pop      ecx
  0x0048D4D2: pop      ecx
  0x0048D4D3: push     eax
  0x0048D4D4: call     0x48dedf
  0x0048D4BF: cmp      eax, ebx
  0x0048D4C1: je       0x48d4f9
  0x0048D54D: mov      ecx, dword ptr [0x2fd98b4]
  0x0048D553: movzx    eax, bl
  0x0048D556: mov      al, byte ptr [ecx + eax*2]
  0x0048D559: and      eax, 4
  0x0048D55C: test     eax, eax
  0x0048D55E: je       0x48d572
  0x0048D53E: movzx    eax, bl
  0x0048D541: push     4
  0x0048D543: push     eax
  0x0048D544: call     0x48a852
  0x0048DDE4: mov      ebx, eax
  0x0048DDE6: pop      ecx
  0x0048DDE7: movzx    eax, byte ptr [esi]
  0x0048DDEA: inc      esi
  0x0048DDEB: cmp      eax, ebx
  0x0048DDED: mov      dword ptr [ebp - 0x14], ebx
  0x0048DDF0: mov      dword ptr [ebp + 0xc], esi
  0x0048DDF3: jne      0x48de4a
  0x0048D4D9: movzx    eax, byte ptr [esi + 1]
  0x0048D4DD: inc      esi
  0x0048D4DE: push     eax
  0x0048D4DF: call     0x482d59
  0x0048D572: cmp      ebx, 0x4e
  0x0048D575: jg       0x48d5b5
  0x0048D560: mov      eax, dword ptr [ebp - 0xc]
  0x0048D563: inc      dword ptr [ebp - 0x20]
  0x0048D566: lea      eax, [eax + eax*4]
  0x0048D569: lea      eax, [ebx + eax*2 - 0x30]
  0x0048D56D: mov      dword ptr [ebp - 0xc], eax
  0x0048D570: jmp      0x48d5d7
  0x0048D549: pop      ecx
  0x0048D54A: pop      ecx
  0x0048D54B: jmp      0x48d55c
  0x0048DDF5: mov      ecx, dword ptr [0x2fd98b4]
  0x0048DDFB: movzx    eax, bl
  0x0048DDFE: test     byte ptr [ecx + eax*2 + 1], 0x80
  0x0048DE03: je       0x48de1d
  0x0048DE4A: dec      dword ptr [ebp - 4]
  0x0048DE4D: push     edi
  0x0048DE4E: push     ebx
  0x0048DE4F: call     0x48dedf
  0x0048D4E4: add      esp, 0xc
  0x0048D4E7: test     eax, eax
  0x0048D4E9: je       0x48d4f9
  0x0048D577: je       0x48d5d7
  0x0048D5B5: cmp      ebx, 0x68
  0x0048D5B8: je       0x48d5d1
  0x0048D5D7: cmp      byte ptr [ebp - 0xf], 0
  0x0048D5DB: je       0x48d530
  0x0048D55C: test     eax, eax
  0x0048D55E: je       0x48d572
  0x0048DE1D: cmp      dword ptr [ebp - 0x14], -1
  0x0048DE21: jne      0x48de33
  0x0048DE05: inc      dword ptr [ebp - 4]
  0x0048DE08: push     edi
  0x0048DE09: call     0x48dec5
  0x0048DE54: pop      ecx
  0x0048DE55: pop      ecx
  0x0048DE56: jmp      0x48de6f
  0x0048D4EB: movzx    eax, byte ptr [esi + 1]
  0x0048D4EF: inc      esi
  0x0048D4F0: push     eax
  0x0048D4F1: call     0x482d59
  0x0048D579: cmp      ebx, 0x2a
  0x0048D57C: je       0x48d5b0
  0x0048D5D1: dec      byte ptr [ebp - 0xd]
  0x0048D5D4: dec      byte ptr [ebp - 5]
  0x0048D5D7: cmp      byte ptr [ebp - 0xf], 0
  0x0048D5DB: je       0x48d530
  0x0048D5BA: cmp      ebx, 0x6c
  0x0048D5BD: je       0x48d5c9
  0x0048D530: movzx    ebx, byte ptr [esi + 1]
  0x0048D534: inc      esi
  0x0048D535: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D53C: jle      0x48d54d
  0x0048D5E1: cmp      byte ptr [ebp - 0xe], 0
  0x0048D5E5: mov      dword ptr [ebp + 0xc], esi
  0x0048D5E8: jne      0x48d5fc
  0x0048DE23: cmp      byte ptr [esi], 0x25
  0x0048DE26: jne      0x48de75
  0x0048DE33: mov      al, byte ptr [esi]
  0x0048DE35: test     al, al
  0x0048DE37: jne      0x48d493
  0x0048DE0E: pop      ecx
  0x0048DE0F: movzx    ecx, byte ptr [esi]
  0x0048DE12: inc      esi
  0x0048DE13: cmp      ecx, eax
  0x0048DE15: mov      dword ptr [ebp + 0xc], esi
  0x0048DE18: jne      0x48de58
  0x0048D4F6: pop      ecx
  0x0048D4F7: jmp      0x48d4e7
  0x0048D5B0: inc      byte ptr [ebp - 0xe]
  0x0048D5B3: jmp      0x48d5d7
  0x0048D57E: cmp      ebx, 0x46
  0x0048D581: je       0x48d5d7
  0x0048D5C9: inc      byte ptr [ebp - 0xd]
  0x0048D5CC: inc      byte ptr [ebp - 5]
  0x0048D5CF: jmp      0x48d5d7
  0x0048D5BF: cmp      ebx, 0x77
  0x0048D5C2: je       0x48d5cc
  0x0048D5EA: mov      eax, dword ptr [ebp + 0x10]
  0x0048D5ED: mov      dword ptr [ebp - 0x44], eax
  0x0048D5F0: add      eax, 4
  0x0048D5F3: mov      dword ptr [ebp + 0x10], eax
  0x0048D5F6: mov      eax, dword ptr [eax - 4]
  0x0048D5F9: mov      dword ptr [ebp - 0x2c], eax
  0x0048D5FC: and      byte ptr [ebp - 0xf], 0
  0x0048D600: cmp      byte ptr [ebp - 5], 0
  0x0048D604: jne      0x48d61a
  0x0048D5FC: and      byte ptr [ebp - 0xf], 0
  0x0048D600: cmp      byte ptr [ebp - 5], 0
  0x0048D604: jne      0x48d61a
  0x0048DE28: mov      eax, dword ptr [ebp + 0xc]
  0x0048DE2B: cmp      byte ptr [eax + 1], 0x6e
  0x0048DE2F: jne      0x48de75
  0x0048DE3D: jmp      0x48de6f
  0x0048D493: mov      edi, dword ptr [ebp + 8]
  0x0048D496: xor      ebx, ebx
  0x0048D498: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D49F: jle      0x48d4b0
  0x0048DE1A: dec      dword ptr [ebp - 4]
  0x0048DE1D: cmp      dword ptr [ebp - 0x14], -1
  0x0048DE21: jne      0x48de33
  0x0048DE58: dec      dword ptr [ebp - 4]
  0x0048DE5B: push     edi
  0x0048DE5C: push     eax
  0x0048DE5D: call     0x48dedf
  0x0048D4E7: test     eax, eax
  0x0048D4E9: je       0x48d4f9
  0x0048D583: cmp      ebx, 0x49
  0x0048D586: je       0x48d592
  0x0048D5CC: inc      byte ptr [ebp - 5]
  0x0048D5CF: jmp      0x48d5d7
  0x0048D5C4: inc      byte ptr [ebp - 0xf]
  0x0048D5C7: jmp      0x48d5d7
  0x0048D606: mov      al, byte ptr [esi]
  0x0048D608: cmp      al, 0x53
  0x0048D60A: je       0x48d616
  0x0048D61A: mov      ebx, dword ptr [ebp + 0xc]
  0x0048D61D: movzx    esi, byte ptr [ebx]
  0x0048D620: or       esi, 0x20
  0x0048D623: cmp      esi, 0x6e
  0x0048D626: mov      dword ptr [ebp - 0x3c], esi
  0x0048D629: je       0x48d653
  0x0048DE31: mov      esi, eax
  0x0048DE33: mov      al, byte ptr [esi]
  0x0048DE35: test     al, al
  0x0048DE37: jne      0x48d493
  0x0048DE62: dec      dword ptr [ebp - 4]
  0x0048DE65: push     edi
  0x0048DE66: push     ebx
  0x0048DE67: call     0x48dedf
  0x0048D592: cmp      byte ptr [esi + 1], 0x36
  0x0048D596: jne      0x48d5c4
  0x0048D588: cmp      ebx, 0x4c
  0x0048D58B: jne      0x48d5c4
  0x0048D616: mov      byte ptr [ebp - 5], 1
  0x0048D61A: mov      ebx, dword ptr [ebp + 0xc]
  0x0048D61D: movzx    esi, byte ptr [ebx]
  0x0048D620: or       esi, 0x20
  0x0048D623: cmp      esi, 0x6e
  0x0048D626: mov      dword ptr [ebp - 0x3c], esi
  0x0048D629: je       0x48d653
  0x0048D60C: cmp      al, 0x43
  0x0048D60E: je       0x48d616
  0x0048D653: xor      eax, eax
  0x0048D655: cmp      dword ptr [ebp - 0x20], eax
  0x0048D658: je       0x48d663
  0x0048D62B: cmp      esi, 0x63
  0x0048D62E: je       0x48d644
  0x0048DE6C: add      esp, 0x10
  0x0048DE6F: cmp      dword ptr [ebp - 0x14], -1
  0x0048DE73: jne      0x48de86
  0x0048D598: cmp      byte ptr [esi + 2], 0x34
  0x0048D59C: lea      eax, [esi + 2]
  0x0048D59F: jne      0x48d5c4
  0x0048D58D: inc      byte ptr [ebp - 0xd]
  0x0048D590: jmp      0x48d5d7
  0x0048D610: or       byte ptr [ebp - 5], 0xff
  0x0048D614: jmp      0x48d61a
  0x0048D663: cmp      esi, 0x6f
  0x0048D666: jg       0x48d8ca
  0x0048D65A: cmp      dword ptr [ebp - 0xc], eax
  0x0048D65D: je       0x48de3f
  0x0048D644: push     dword ptr [ebp + 8]
  0x0048D647: inc      dword ptr [ebp - 4]
  0x0048D64A: call     0x48dec5
  0x0048D630: cmp      esi, 0x7b
  0x0048D633: je       0x48d644
  0x0048D5A1: inc      dword ptr [ebp - 0x30]
  0x0048D5A4: and      dword ptr [ebp - 0x28], 0
  0x0048D5A8: and      dword ptr [ebp - 0x24], 0
  0x0048D5AC: mov      esi, eax
  0x0048D5AE: jmp      0x48d5d7
  0x0048D66C: je       0x48db7c
  0x0048D8CA: mov      eax, esi
  0x0048D8CC: sub      eax, 0x70
  0x0048D8CF: je       0x48db78
  0x0048DE3F: push     dword ptr [ebp + 8]
  0x0048DE42: dec      dword ptr [ebp - 4]
  0x0048DE45: push     dword ptr [ebp - 0x14]
  0x0048DE48: jmp      0x48de4f
  0x0048D64F: pop      ecx
  0x0048D650: mov      dword ptr [ebp - 0x14], eax
  0x0048D653: xor      eax, eax
  0x0048D655: cmp      dword ptr [ebp - 0x20], eax
  0x0048D658: je       0x48d663
  0x0048D635: push     dword ptr [ebp + 8]
  0x0048D638: lea      eax, [ebp - 4]
  0x0048D63B: push     eax
  0x0048D63C: call     0x48def6
  0x0048DB7C: mov      ebx, dword ptr [ebp - 0x14]
  0x0048DB7F: cmp      ebx, 0x2d
  0x0048DB82: jne      0x48db8a
  0x0048D672: cmp      esi, 0x63
  0x0048D675: je       0x48d8a7
  0x0048DB78: mov      byte ptr [ebp - 0xd], 1
  0x0048DB7C: mov      ebx, dword ptr [ebp - 0x14]
  0x0048DB7F: cmp      ebx, 0x2d
  0x0048DB82: jne      0x48db8a
  0x0048D8D5: sub      eax, 3
  0x0048D8D8: je       0x48d9c6
  0x0048DE4F: call     0x48dedf
  0x0048D641: pop      ecx
  0x0048D642: jmp      0x48d64f
  0x0048DB84: mov      byte ptr [ebp - 0x17], 1
  0x0048DB88: jmp      0x48db8f
  0x0048DB8A: cmp      ebx, 0x2b
  0x0048DB8D: jne      0x48dbb1
  0x0048D8A7: cmp      dword ptr [ebp - 0x20], eax
  0x0048D8AA: jne      0x48d8b6
  0x0048D67B: cmp      esi, 0x64
  0x0048D67E: je       0x48db7c
  0x0048D9C6: cmp      byte ptr [ebp - 5], 0
  0x0048D9CA: jle      0x48d9d0
  0x0048D8DE: dec      eax
  0x0048D8DF: dec      eax
  0x0048D8E0: je       0x48db7c
  0x0048DB8F: dec      dword ptr [ebp - 0xc]
  0x0048DB92: jne      0x48dba0
  0x0048DBB1: cmp      dword ptr [ebp - 0x30], 0
  0x0048DBB5: je       0x48dcca
  0x0048D8AC: inc      dword ptr [ebp - 0xc]
  0x0048D8AF: mov      dword ptr [ebp - 0x20], 1
  0x0048D8B6: cmp      byte ptr [ebp - 5], 0
  0x0048D8BA: jle      0x48d8c0
  0x0048D8B6: cmp      byte ptr [ebp - 5], 0
  0x0048D8BA: jle      0x48d8c0
  0x0048D684: jle      0x48d8f4
  0x0048D9D0: mov      edi, 0x2fdbd2c
  0x0048D9D5: or       byte ptr [ebp - 0x18], 0xff
  0x0048D9D9: push     0x20
  0x0048D9DB: lea      eax, [ebp - 0x64]
  0x0048D9DE: push     0
  0x0048D9E0: push     eax
  0x0048D9E1: call     0x485970
  0x0048D9CC: mov      byte ptr [ebp - 0x16], 1
  0x0048D9D0: mov      edi, 0x2fdbd2c
  0x0048D9D5: or       byte ptr [ebp - 0x18], 0xff
  0x0048D9D9: push     0x20
  0x0048D9DB: lea      eax, [ebp - 0x64]
  0x0048D9DE: push     0
  0x0048D9E0: push     eax
  0x0048D9E1: call     0x485970
  0x0048D8E6: sub      eax, 3
  0x0048D8E9: je       0x48d6b2
  0x0048DB94: cmp      dword ptr [ebp - 0x20], 0
  0x0048DB98: je       0x48dba0
  0x0048DBA0: push     dword ptr [ebp + 8]
  0x0048DBA3: inc      dword ptr [ebp - 4]
  0x0048DBA6: call     0x48dec5
  0x0048DCCA: cmp      byte ptr [ebp - 0xf], 0
  0x0048DCCE: jne      0x48dd86
  0x0048DBBB: cmp      byte ptr [ebp - 0xf], 0
  0x0048DBBF: jne      0x48dca8
  0x0048D8C0: mov      edi, 0x2fdbd34
  0x0048D8C5: jmp      0x48d9d5
  0x0048D8BC: mov      byte ptr [ebp - 0x16], 1
  0x0048D8C0: mov      edi, 0x2fdbd34
  0x0048D8C5: jmp      0x48d9d5
  0x0048D8F4: movzx    eax, byte ptr [ebx]
  0x0048D8F7: cmp      eax, dword ptr [ebp - 0x14]
  0x0048D8FA: jne      0x48de3f
  0x0048D68A: cmp      esi, 0x67
  0x0048D68D: jle      0x48d6c7
  0x0048D9E6: add      esp, 0xc
  0x0048D9E9: cmp      dword ptr [ebp - 0x3c], 0x7b
  0x0048D9ED: jne      0x48d9fd
  0x0048D6B2: mov      ebx, dword ptr [ebp - 0x14]
  0x0048D6B5: cmp      ebx, 0x2d
  0x0048D6B8: jne      0x48d93c
  0x0048D8EF: sub      eax, 3
  0x0048D8F2: je       0x48d918
  0x0048DB9A: mov      byte ptr [ebp - 0xf], 1
  0x0048DB9E: jmp      0x48dbb1
  0x0048DBAB: pop      ecx
  0x0048DBAC: mov      ebx, eax
  0x0048DBAE: mov      dword ptr [ebp - 0x14], ebx
  0x0048DBB1: cmp      dword ptr [ebp - 0x30], 0
  0x0048DBB5: je       0x48dcca
  0x0048DCD4: cmp      esi, 0x78
  0x0048DCD7: je       0x48dd18
  0x0048DD86: cmp      byte ptr [ebp - 0x17], 0
  0x0048DD8A: je       0x48dd8e
  0x0048DBC5: cmp      esi, 0x78
  0x0048DBC8: jne      0x48dc19
  0x0048DCA8: cmp      byte ptr [ebp - 0x17], 0
  0x0048DCAC: je       0x48dd8e
  0x0048D9D5: or       byte ptr [ebp - 0x18], 0xff
  0x0048D9D9: push     0x20
  0x0048D9DB: lea      eax, [ebp - 0x64]
  0x0048D9DE: push     0
  0x0048D9E0: push     eax
  0x0048D9E1: call     0x485970
  0x0048D900: dec      byte ptr [ebp - 0x15]
  0x0048D903: cmp      byte ptr [ebp - 0xe], 0
  0x0048D907: jne      0x48ddd0
  0x0048D6C7: mov      ebx, dword ptr [ebp - 0x14]
  0x0048D6CA: lea      esi, [ebp - 0x1c4]
  0x0048D6D0: cmp      ebx, 0x2d
  0x0048D6D3: jne      0x48d6e3
  0x0048D68F: cmp      esi, 0x69
  0x0048D692: je       0x48d6af
  0x0048D9EF: cmp      byte ptr [edi], 0x5d
  0x0048D9F2: jne      0x48d9fd
  0x0048D9FD: mov      dl, byte ptr [ebp - 0x35]
  0x0048DA00: mov      al, byte ptr [edi]
  0x0048DA02: cmp      al, 0x5d
  0x0048DA04: je       0x48da65
  0x0048D6BE: mov      byte ptr [ebp - 0x17], 1
  0x0048D6C2: jmp      0x48d941
  0x0048D93C: cmp      ebx, 0x2b
  0x0048D93F: jne      0x48d963
  0x0048D918: cmp      byte ptr [ebp - 5], 0
  0x0048D91C: jle      0x48d922
  0x0048DD18: cmp      dword ptr [0x2fd9ac0], 1
  0x0048DD1F: jle      0x48dd30
  0x0048DCD9: cmp      esi, 0x70
  0x0048DCDC: je       0x48dd18
  0x0048DD8E: cmp      esi, 0x46
  0x0048DD91: jne      0x48dd97
  0x0048DD8C: neg      edi
  0x0048DD8E: cmp      esi, 0x46
  0x0048DD91: jne      0x48dd97
  0x0048DBCA: cmp      dword ptr [0x2fd9ac0], 1
  0x0048DBD1: jle      0x48dbe2
  0x0048DC19: cmp      dword ptr [0x2fd9ac0], 1
  0x0048DC20: jle      0x48dc2e
  0x0048DCB2: mov      eax, dword ptr [ebp - 0x28]
  0x0048DCB5: mov      ecx, dword ptr [ebp - 0x24]
  0x0048DCB8: neg      eax
  0x0048DCBA: adc      ecx, 0
  0x0048DCBD: mov      dword ptr [ebp - 0x28], eax
  0x0048DCC0: neg      ecx
  0x0048DCC2: mov      dword ptr [ebp - 0x24], ecx
  0x0048DCC5: jmp      0x48dd8e
  0x0048D90D: mov      eax, dword ptr [ebp - 0x44]
  0x0048D910: mov      dword ptr [ebp + 0x10], eax
  0x0048D913: jmp      0x48ddd0
  0x0048DDD0: inc      byte ptr [ebp - 0x15]
  0x0048DDD3: inc      dword ptr [ebp + 0xc]
  0x0048DDD6: mov      esi, dword ptr [ebp + 0xc]
  0x0048DDD9: jmp      0x48de1d
  0x0048D6D5: mov      byte ptr [ebp - 0x1c4], bl
  0x0048D6DB: lea      esi, [ebp - 0x1c3]
  0x0048D6E1: jmp      0x48d6e8
  0x0048D6E3: cmp      ebx, 0x2b
  0x0048D6E6: jne      0x48d6ff
  0x0048D6AF: push     0x64
  0x0048D6B1: pop      esi
  0x0048D6B2: mov      ebx, dword ptr [ebp - 0x14]
  0x0048D6B5: cmp      ebx, 0x2d
  0x0048D6B8: jne      0x48d93c
  0x0048D694: cmp      esi, 0x6e
  0x0048D697: jne      0x48d8f4
  0x0048D9F4: mov      dl, 0x5d
  0x0048D9F6: inc      edi
  0x0048D9F7: mov      byte ptr [ebp - 0x59], 0x20
  0x0048D9FB: jmp      0x48da00
  0x0048DA65: cmp      byte ptr [edi], 0
  0x0048DA68: je       0x48de6f
  0x0048DA06: inc      edi
  0x0048DA07: cmp      al, 0x2d
  0x0048DA09: jne      0x48da4c
  0x0048D941: dec      dword ptr [ebp - 0xc]
  0x0048D944: jne      0x48d952
  0x0048D963: cmp      ebx, 0x30
  0x0048D966: jne      0x48dbb1
  0x0048D922: mov      edi, dword ptr [ebp + 0xc]
  0x0048D925: inc      edi
  0x0048D926: mov      dword ptr [ebp + 0xc], edi
  0x0048D929: cmp      byte ptr [edi], 0x5e
  0x0048D92C: jne      0x48d9d9
  0x0048D91E: mov      byte ptr [ebp - 0x16], 1
  0x0048D922: mov      edi, dword ptr [ebp + 0xc]
  0x0048D925: inc      edi
  0x0048D926: mov      dword ptr [ebp + 0xc], edi
  0x0048D929: cmp      byte ptr [edi], 0x5e
  0x0048D92C: jne      0x48d9d9
  0x0048DD30: mov      eax, dword ptr [0x2fd98b4]
  0x0048DD35: mov      al, byte ptr [eax + ebx*2]
  0x0048DD38: and      eax, 0x80
  0x0048DD3D: test     eax, eax
  0x0048DD3F: je       0x48dd78
  0x0048DD21: push     0x80
  0x0048DD26: push     ebx
  0x0048DD27: call     0x48a852
  0x0048DCDE: cmp      dword ptr [0x2fd9ac0], 1
  0x0048DCE5: jle      0x48dcf3
  0x0048DD93: and      dword ptr [ebp - 0x1c], 0
  0x0048DD97: cmp      dword ptr [ebp - 0x1c], 0
  0x0048DD9B: je       0x48de6f
  0x0048DD97: cmp      dword ptr [ebp - 0x1c], 0
  0x0048DD9B: je       0x48de6f
  0x0048DBE2: mov      eax, dword ptr [0x2fd98b4]
  0x0048DBE7: mov      al, byte ptr [eax + ebx*2]
  0x0048DBEA: and      eax, 0x80
  0x0048DBEF: test     eax, eax
  0x0048DBF1: je       0x48dc9a
  0x0048DBD3: push     0x80
  0x0048DBD8: push     ebx
  0x0048DBD9: call     0x48a852
  0x0048DC2E: mov      eax, dword ptr [0x2fd98b4]
  0x0048DC33: mov      al, byte ptr [eax + ebx*2]
  0x0048DC36: and      eax, 4
  0x0048DC39: test     eax, eax
  0x0048DC3B: je       0x48dc9a
  0x0048DC22: push     4
  0x0048DC24: push     ebx
  0x0048DC25: call     0x48a852
  0x0048D6E8: mov      edi, dword ptr [ebp + 8]
  0x0048D6EB: dec      dword ptr [ebp - 0xc]
  0x0048D6EE: inc      dword ptr [ebp - 4]
  0x0048D6F1: push     edi
  0x0048D6F2: call     0x48dec5
  0x0048D6FF: mov      edi, dword ptr [ebp + 8]
  0x0048D702: cmp      dword ptr [ebp - 0x20], 0
  0x0048D706: je       0x48d711
  0x0048D69D: cmp      byte ptr [ebp - 0xe], 0
  0x0048D6A1: mov      edi, dword ptr [ebp - 4]
  0x0048D6A4: je       0x48ddaa
  0x0048DA00: mov      al, byte ptr [edi]
  0x0048DA02: cmp      al, 0x5d
  0x0048DA04: je       0x48da65
  0x0048DA6E: cmp      dword ptr [ebp - 0x3c], 0x7b
  0x0048DA72: jne      0x48da77
  0x0048DA0B: test     dl, dl
  0x0048DA0D: je       0x48da4c
  0x0048DA4C: movzx    ecx, al
  0x0048DA4F: mov      dl, al
  0x0048DA51: mov      eax, ecx
  0x0048DA53: and      ecx, 7
  0x0048DA56: mov      bl, 1
  0x0048DA58: shr      eax, 3
  0x0048DA5B: shl      bl, cl
  0x0048DA5D: lea      eax, [ebp + eax - 0x64]
  0x0048DA61: or       byte ptr [eax], bl
  0x0048DA63: jmp      0x48da00
  0x0048D946: cmp      dword ptr [ebp - 0x20], 0
  0x0048D94A: je       0x48d952
  0x0048D952: push     dword ptr [ebp + 8]
  0x0048D955: inc      dword ptr [ebp - 4]
  0x0048D958: call     0x48dec5
  0x0048D96C: push     dword ptr [ebp + 8]
  0x0048D96F: inc      dword ptr [ebp - 4]
  0x0048D972: call     0x48dec5
  0x0048D932: mov      eax, edi
  0x0048D934: lea      edi, [eax + 1]
  0x0048D937: jmp      0x48d9d5
  0x0048D9D9: push     0x20
  0x0048D9DB: lea      eax, [ebp - 0x64]
  0x0048D9DE: push     0
  0x0048D9E0: push     eax
  0x0048D9E1: call     0x485970
  0x0048DD78: push     dword ptr [ebp + 8]
  0x0048DD7B: dec      dword ptr [ebp - 4]
  0x0048DD7E: push     ebx
  0x0048DD7F: call     0x48dedf
  0x0048DD41: push     ebx
  0x0048DD42: shl      edi, 4
  0x0048DD45: call     0x48de8e
  0x0048DD2C: pop      ecx
  0x0048DD2D: pop      ecx
  0x0048DD2E: jmp      0x48dd3d
  0x0048DCF3: mov      eax, dword ptr [0x2fd98b4]
  0x0048DCF8: mov      al, byte ptr [eax + ebx*2]
  0x0048DCFB: and      eax, 4
  0x0048DCFE: test     eax, eax
  0x0048DD00: je       0x48dd78
  0x0048DCE7: push     4
  0x0048DCE9: push     ebx
  0x0048DCEA: call     0x48a852
  0x0048DDA1: cmp      byte ptr [ebp - 0xe], 0
  0x0048DDA5: jne      0x48ddd0
  0x0048DC9A: push     dword ptr [ebp + 8]
  0x0048DC9D: dec      dword ptr [ebp - 4]
  0x0048DCA0: push     ebx
  0x0048DCA1: call     0x48dedf
  0x0048DBF7: mov      eax, dword ptr [ebp - 0x28]
  0x0048DBFA: mov      edx, dword ptr [ebp - 0x24]
  0x0048DBFD: push     4
  0x0048DBFF: pop      ecx
  0x0048DC00: call     0x490250
  0x0048DBDE: pop      ecx
  0x0048DBDF: pop      ecx
  0x0048DBE0: jmp      0x48dbef
  0x0048DC3D: cmp      esi, 0x6f
  0x0048DC40: jne      0x48dc57
  0x0048DC2A: pop      ecx
  0x0048DC2B: pop      ecx
  0x0048DC2C: jmp      0x48dc39
  0x0048D6F7: mov      ebx, eax
  0x0048D6F9: pop      ecx
  0x0048D6FA: mov      dword ptr [ebp - 0x14], ebx
  0x0048D6FD: jmp      0x48d702
  0x0048D711: mov      dword ptr [ebp - 0xc], 0x15d
  0x0048D718: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D71F: jle      0x48d72d
  0x0048D708: cmp      dword ptr [ebp - 0xc], 0x15d
  0x0048D70F: jle      0x48d718
  0x0048DDAA: cmp      dword ptr [ebp - 0x30], 0
  0x0048DDAE: je       0x48ddc0
  0x0048D6AA: jmp      0x48ddd0
  0x0048DA74: mov      dword ptr [ebp + 0xc], edi
  0x0048DA77: mov      edi, dword ptr [ebp + 8]
  0x0048DA7A: mov      esi, dword ptr [ebp - 0x2c]
  0x0048DA7D: dec      dword ptr [ebp - 4]
  0x0048DA80: push     edi
  0x0048DA81: push     dword ptr [ebp - 0x14]
  0x0048DA84: mov      dword ptr [ebp - 0x30], esi
  0x0048DA87: call     0x48dedf
  0x0048DA77: mov      edi, dword ptr [ebp + 8]
  0x0048DA7A: mov      esi, dword ptr [ebp - 0x2c]
  0x0048DA7D: dec      dword ptr [ebp - 4]
  0x0048DA80: push     edi
  0x0048DA81: push     dword ptr [ebp - 0x14]
  0x0048DA84: mov      dword ptr [ebp - 0x30], esi
  0x0048DA87: call     0x48dedf
  0x0048DA0F: mov      cl, byte ptr [edi]
  0x0048DA11: cmp      cl, 0x5d
  0x0048DA14: je       0x48da4c
  0x0048D94C: mov      byte ptr [ebp - 0xf], 1
  0x0048D950: jmp      0x48d963
  0x0048D95D: mov      ebx, eax
  0x0048D95F: pop      ecx
  0x0048D960: mov      dword ptr [ebp - 0x14], ebx
  0x0048D963: cmp      ebx, 0x30
  0x0048D966: jne      0x48dbb1
  0x0048D977: mov      ebx, eax
  0x0048D979: pop      ecx
  0x0048D97A: cmp      bl, 0x78
  0x0048D97D: mov      dword ptr [ebp - 0x14], ebx
  0x0048D980: je       0x48d9b1
  0x0048DD84: pop      ecx
  0x0048DD85: pop      ecx
  0x0048DD86: cmp      byte ptr [ebp - 0x17], 0
  0x0048DD8A: je       0x48dd8e
  0x0048DD4A: mov      ebx, eax
  0x0048DD4C: pop      ecx
  0x0048DD4D: mov      dword ptr [ebp - 0x14], ebx
  0x0048DD50: inc      dword ptr [ebp - 0x1c]
  0x0048DD53: cmp      dword ptr [ebp - 0x20], 0
  0x0048DD57: lea      edi, [edi + ebx - 0x30]
  0x0048DD5B: je       0x48dd62
  0x0048DD3D: test     eax, eax
  0x0048DD3F: je       0x48dd78
  0x0048DD02: cmp      esi, 0x6f
  0x0048DD05: jne      0x48dd11
  0x0048DCEF: pop      ecx
  0x0048DCF0: pop      ecx
  0x0048DCF1: jmp      0x48dcfe
  0x0048DDA7: inc      dword ptr [ebp - 0x34]
  0x0048DDAA: cmp      dword ptr [ebp - 0x30], 0
  0x0048DDAE: je       0x48ddc0
  0x0048DCA6: pop      ecx
  0x0048DCA7: pop      ecx
  0x0048DCA8: cmp      byte ptr [ebp - 0x17], 0
  0x0048DCAC: je       0x48dd8e
  0x0048DC05: push     ebx
  0x0048DC06: mov      dword ptr [ebp - 0x28], eax
  0x0048DC09: mov      dword ptr [ebp - 0x24], edx
  0x0048DC0C: call     0x48de8e
  0x0048DBEF: test     eax, eax
  0x0048DBF1: je       0x48dc9a
  0x0048DC42: cmp      ebx, 0x38
  0x0048DC45: jge      0x48dc9a
  0x0048DC57: push     0
  0x0048DC59: push     0xa
  0x0048DC5B: push     dword ptr [ebp - 0x24]
  0x0048DC5E: push     dword ptr [ebp - 0x28]
  0x0048DC61: call     0x482d90
  0x0048DC39: test     eax, eax
  0x0048DC3B: je       0x48dc9a
  0x0048D702: cmp      dword ptr [ebp - 0x20], 0
  0x0048D706: je       0x48d711
  0x0048D72D: mov      eax, dword ptr [0x2fd98b4]
  0x0048D732: mov      al, byte ptr [eax + ebx*2]
  0x0048D735: and      eax, 4
  0x0048D738: test     eax, eax
  0x0048D73A: je       0x48d75d
  0x0048D721: push     4
  0x0048D723: push     ebx
  0x0048D724: call     0x48a852
  0x0048D718: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D71F: jle      0x48d72d
  0x0048DDC0: cmp      byte ptr [ebp - 0xd], 0
  0x0048DDC4: mov      eax, dword ptr [ebp - 0x2c]
  0x0048DDC7: je       0x48ddcd
  0x0048DDB0: mov      eax, dword ptr [ebp - 0x2c]
  0x0048DDB3: mov      ecx, dword ptr [ebp - 0x28]
  0x0048DDB6: mov      dword ptr [eax], ecx
  0x0048DDB8: mov      ecx, dword ptr [ebp - 0x24]
  0x0048DDBB: mov      dword ptr [eax + 4], ecx
  0x0048DDBE: jmp      0x48ddd0
  0x0048DA8C: pop      ecx
  0x0048DA8D: pop      ecx
  0x0048DA8E: cmp      dword ptr [ebp - 0x20], 0
  0x0048DA92: je       0x48daa2
  0x0048DA16: inc      edi
  0x0048DA17: cmp      dl, cl
  0x0048DA19: jae      0x48da1f
  0x0048D9B1: push     dword ptr [ebp + 8]
  0x0048D9B4: inc      dword ptr [ebp - 4]
  0x0048D9B7: call     0x48dec5
  0x0048D982: cmp      bl, 0x58
  0x0048D985: je       0x48d9b1
  0x0048DD62: push     dword ptr [ebp + 8]
  0x0048DD65: inc      dword ptr [ebp - 4]
  0x0048DD68: call     0x48dec5
  0x0048DD5D: dec      dword ptr [ebp - 0xc]
  0x0048DD60: je       0x48dd86
  0x0048DD07: cmp      ebx, 0x38
  0x0048DD0A: jge      0x48dd78
  0x0048DD11: lea      edi, [edi + edi*4]
  0x0048DD14: shl      edi, 1
  0x0048DD16: jmp      0x48dd50
  0x0048DCFE: test     eax, eax
  0x0048DD00: je       0x48dd78
  0x0048DC11: mov      ebx, eax
  0x0048DC13: pop      ecx
  0x0048DC14: mov      dword ptr [ebp - 0x14], ebx
  0x0048DC17: jmp      0x48dc6c
  0x0048DC47: mov      eax, dword ptr [ebp - 0x28]
  0x0048DC4A: mov      edx, dword ptr [ebp - 0x24]
  0x0048DC4D: push     3
  0x0048DC4F: pop      ecx
  0x0048DC50: call     0x490250
  0x0048DC66: mov      dword ptr [ebp - 0x28], eax
  0x0048DC69: mov      dword ptr [ebp - 0x24], edx
  0x0048DC6C: inc      dword ptr [ebp - 0x1c]
  0x0048DC6F: lea      eax, [ebx - 0x30]
  0x0048DC72: cdq      
  0x0048DC73: add      dword ptr [ebp - 0x28], eax
  0x0048DC76: adc      dword ptr [ebp - 0x24], edx
  0x0048DC79: cmp      dword ptr [ebp - 0x20], 0
  0x0048DC7D: je       0x48dc84
  0x0048D75D: cmp      byte ptr [0x2fd9ac4], bl
  0x0048D763: jne      0x48d7cb
  0x0048D73C: mov      eax, dword ptr [ebp - 0xc]
  0x0048D73F: dec      dword ptr [ebp - 0xc]
  0x0048D742: test     eax, eax
  0x0048D744: je       0x48d75d
  0x0048D729: pop      ecx
  0x0048D72A: pop      ecx
  0x0048D72B: jmp      0x48d738
  0x0048DDCD: mov      word ptr [eax], di
  0x0048DDD0: inc      byte ptr [ebp - 0x15]
  0x0048DDD3: inc      dword ptr [ebp + 0xc]
  0x0048DDD6: mov      esi, dword ptr [ebp + 0xc]
  0x0048DDD9: jmp      0x48de1d
  0x0048DDC9: mov      dword ptr [eax], edi
  0x0048DDCB: jmp      0x48ddd0
  0x0048DAA2: inc      dword ptr [ebp - 4]
  0x0048DAA5: push     edi
  0x0048DAA6: call     0x48dec5
  0x0048DA94: mov      eax, dword ptr [ebp - 0xc]
  0x0048DA97: dec      dword ptr [ebp - 0xc]
  0x0048DA9A: test     eax, eax
  0x0048DA9C: je       0x48db3e
  0x0048DA1B: mov      al, cl
  0x0048DA1D: jmp      0x48da23
  0x0048DA1F: mov      al, dl
  0x0048DA21: mov      dl, cl
  0x0048DA23: cmp      dl, al
  0x0048DA25: ja       0x48da48
  0x0048D9BC: pop      ecx
  0x0048D9BD: mov      ebx, eax
  0x0048D9BF: mov      dword ptr [ebp - 0x14], ebx
  0x0048D9C2: push     0x78
  0x0048D9C4: jmp      0x48d995
  0x0048D987: cmp      esi, 0x78
  0x0048D98A: mov      dword ptr [ebp - 0x1c], 1
  0x0048D991: je       0x48d99b
  0x0048DD6D: mov      ebx, eax
  0x0048DD6F: pop      ecx
  0x0048DD70: mov      dword ptr [ebp - 0x14], ebx
  0x0048DD73: jmp      0x48dcd4
  0x0048DD0C: shl      edi, 3
  0x0048DD0F: jmp      0x48dd50
  0x0048DD50: inc      dword ptr [ebp - 0x1c]
  0x0048DD53: cmp      dword ptr [ebp - 0x20], 0
  0x0048DD57: lea      edi, [edi + ebx - 0x30]
  0x0048DD5B: je       0x48dd62
  0x0048DC6C: inc      dword ptr [ebp - 0x1c]
  0x0048DC6F: lea      eax, [ebx - 0x30]
  0x0048DC72: cdq      
  0x0048DC73: add      dword ptr [ebp - 0x28], eax
  0x0048DC76: adc      dword ptr [ebp - 0x24], edx
  0x0048DC79: cmp      dword ptr [ebp - 0x20], 0
  0x0048DC7D: je       0x48dc84
  0x0048DC55: jmp      0x48dc66
  0x0048DC84: push     dword ptr [ebp + 8]
  0x0048DC87: inc      dword ptr [ebp - 4]
  0x0048DC8A: call     0x48dec5
  0x0048DC7F: dec      dword ptr [ebp - 0xc]
  0x0048DC82: je       0x48dca8
  0x0048D765: mov      eax, dword ptr [ebp - 0xc]
  0x0048D768: dec      dword ptr [ebp - 0xc]
  0x0048D76B: test     eax, eax
  0x0048D76D: je       0x48d7cb
  0x0048D7CB: cmp      dword ptr [ebp - 0x1c], 0
  0x0048D7CF: je       0x48d863
  0x0048D746: inc      dword ptr [ebp - 0x1c]
  0x0048D749: mov      byte ptr [esi], bl
  0x0048D74B: inc      esi
  0x0048D74C: inc      dword ptr [ebp - 4]
  0x0048D74F: push     edi
  0x0048D750: call     0x48dec5
  0x0048D738: test     eax, eax
  0x0048D73A: je       0x48d75d
  0x0048DAAB: cmp      eax, -1
  0x0048DAAE: pop      ecx
  0x0048DAAF: mov      dword ptr [ebp - 0x14], eax
  0x0048DAB2: je       0x48db32
  0x0048DB3E: cmp      dword ptr [ebp - 0x30], esi
  0x0048DB41: je       0x48de6f
  0x0048DA23: cmp      dl, al
  0x0048DA25: ja       0x48da48
  0x0048DA27: movzx    edx, dl
  0x0048DA2A: movzx    esi, al
  0x0048DA2D: sub      esi, edx
  0x0048DA2F: inc      esi
  0x0048DA30: mov      ecx, edx
  0x0048DA32: mov      eax, edx
  0x0048DA34: and      ecx, 7
  0x0048DA37: mov      bl, 1
  0x0048DA39: shr      eax, 3
  0x0048DA3C: shl      bl, cl
  0x0048DA3E: lea      eax, [ebp + eax - 0x64]
  0x0048DA42: or       byte ptr [eax], bl
  0x0048DA44: inc      edx
  0x0048DA45: dec      esi
  0x0048DA46: jne      0x48da30
  0x0048DA48: xor      dl, dl
  0x0048DA4A: jmp      0x48da00
  0x0048D995: pop      esi
  0x0048D996: jmp      0x48dbb1
  0x0048D99B: push     dword ptr [ebp + 8]
  0x0048D99E: dec      dword ptr [ebp - 4]
  0x0048D9A1: push     ebx
  0x0048D9A2: call     0x48dedf
  0x0048D993: push     0x6f
  0x0048D995: pop      esi
  0x0048D996: jmp      0x48dbb1
  0x0048DC8F: mov      ebx, eax
  0x0048DC91: pop      ecx
  0x0048DC92: mov      dword ptr [ebp - 0x14], ebx
  0x0048DC95: jmp      0x48dbc5
  0x0048D76F: inc      dword ptr [ebp - 4]
  0x0048D772: push     edi
  0x0048D773: call     0x48dec5
  0x0048D863: dec      dword ptr [ebp - 4]
  0x0048D866: push     edi
  0x0048D867: push     ebx
  0x0048D868: call     0x48dedf
  0x0048D7D5: cmp      ebx, 0x65
  0x0048D7D8: je       0x48d7e3
  0x0048D755: mov      ebx, eax
  0x0048D757: pop      ecx
  0x0048D758: mov      dword ptr [ebp - 0x14], ebx
  0x0048D75B: jmp      0x48d718
  0x0048DB32: dec      dword ptr [ebp - 4]
  0x0048DB35: push     edi
  0x0048DB36: push     eax
  0x0048DB37: call     0x48dedf
  0x0048DAB4: mov      ecx, eax
  0x0048DAB6: push     1
  0x0048DAB8: and      ecx, 7
  0x0048DABB: pop      edx
  0x0048DABC: movsx    ebx, byte ptr [ebp - 0x18]
  0x0048DAC0: shl      edx, cl
  0x0048DAC2: mov      ecx, eax
  0x0048DAC4: sar      ecx, 3
  0x0048DAC7: movsx    ecx, byte ptr [ebp + ecx - 0x64]
  0x0048DACC: xor      ecx, ebx
  0x0048DACE: test     ecx, edx
  0x0048DAD0: je       0x48db32
  0x0048DB47: cmp      byte ptr [ebp - 0xe], 0
  0x0048DB4B: jne      0x48ddd0
  0x0048DA30: mov      ecx, edx
  0x0048DA32: mov      eax, edx
  0x0048DA34: and      ecx, 7
  0x0048DA37: mov      bl, 1
  0x0048DA39: shr      eax, 3
  0x0048DA3C: shl      bl, cl
  0x0048DA3E: lea      eax, [ebp + eax - 0x64]
  0x0048DA42: or       byte ptr [eax], bl
  0x0048DA44: inc      edx
  0x0048DA45: dec      esi
  0x0048DA46: jne      0x48da30
  0x0048D9A7: pop      ecx
  0x0048D9A8: pop      ecx
  0x0048D9A9: push     0x30
  0x0048D9AB: pop      ebx
  0x0048D9AC: jmp      0x48dbae
  0x0048D778: mov      ebx, eax
  0x0048D77A: mov      al, byte ptr [0x2fd9ac4]
  0x0048D77F: mov      byte ptr [esi], al
  0x0048D781: pop      ecx
  0x0048D782: mov      dword ptr [ebp - 0x14], ebx
  0x0048D785: inc      esi
  0x0048D786: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D78D: jle      0x48d79b
  0x0048D86D: cmp      dword ptr [ebp - 0x1c], 0
  0x0048D871: pop      ecx
  0x0048D872: pop      ecx
  0x0048D873: je       0x48de6f
  0x0048D7E3: mov      eax, dword ptr [ebp - 0xc]
  0x0048D7E6: dec      dword ptr [ebp - 0xc]
  0x0048D7E9: test     eax, eax
  0x0048D7EB: je       0x48d863
  0x0048D7DA: cmp      ebx, 0x45
  0x0048D7DD: jne      0x48d863
  0x0048DB3C: pop      ecx
  0x0048DB3D: pop      ecx
  0x0048DB3E: cmp      dword ptr [ebp - 0x30], esi
  0x0048DB41: je       0x48de6f
  0x0048DAD2: cmp      byte ptr [ebp - 0xe], 0
  0x0048DAD6: jne      0x48db2a
  0x0048DB51: inc      dword ptr [ebp - 0x34]
  0x0048DB54: cmp      dword ptr [ebp - 0x3c], 0x63
  0x0048DB58: je       0x48ddd0
  0x0048DBAE: mov      dword ptr [ebp - 0x14], ebx
  0x0048DBB1: cmp      dword ptr [ebp - 0x30], 0
  0x0048DBB5: je       0x48dcca
  0x0048D79B: mov      eax, dword ptr [0x2fd98b4]
  0x0048D7A0: mov      al, byte ptr [eax + ebx*2]
  0x0048D7A3: and      eax, 4
  0x0048D7A6: test     eax, eax
  0x0048D7A8: je       0x48d7cb
  0x0048D78F: push     4
  0x0048D791: push     ebx
  0x0048D792: call     0x48a852
  0x0048D879: cmp      byte ptr [ebp - 0xe], 0
  0x0048D87D: jne      0x48ddd0
  0x0048D7ED: mov      byte ptr [esi], 0x65
  0x0048D7F0: inc      esi
  0x0048D7F1: inc      dword ptr [ebp - 4]
  0x0048D7F4: push     edi
  0x0048D7F5: call     0x48dec5
  0x0048DAD8: cmp      byte ptr [ebp - 0x16], 0
  0x0048DADC: je       0x48db1f
  0x0048DB2A: inc      dword ptr [ebp - 0x30]
  0x0048DB2D: jmp      0x48da8e
  0x0048DB5E: cmp      byte ptr [ebp - 0x16], 0
  0x0048DB62: mov      eax, dword ptr [ebp - 0x2c]
  0x0048DB65: je       0x48db70
  0x0048D7AA: mov      eax, dword ptr [ebp - 0xc]
  0x0048D7AD: dec      dword ptr [ebp - 0xc]
  0x0048D7B0: test     eax, eax
  0x0048D7B2: je       0x48d7cb
  0x0048D797: pop      ecx
  0x0048D798: pop      ecx
  0x0048D799: jmp      0x48d7a6
  0x0048D883: inc      dword ptr [ebp - 0x34]
  0x0048D886: and      byte ptr [esi], 0
  0x0048D889: lea      eax, [ebp - 0x1c4]
  0x0048D88F: push     eax
  0x0048D890: movsx    eax, byte ptr [ebp - 0xd]
  0x0048D894: push     dword ptr [ebp - 0x2c]
  0x0048D897: dec      eax
  0x0048D898: push     eax
  0x0048D899: call     dword ptr [0x2fd94c0]
  0x0048D7FA: mov      ebx, eax
  0x0048D7FC: pop      ecx
  0x0048D7FD: cmp      ebx, 0x2d
  0x0048D800: mov      dword ptr [ebp - 0x14], ebx
  0x0048D803: jne      0x48d80a
  0x0048DB1F: mov      byte ptr [esi], al
  0x0048DB21: inc      esi
  0x0048DB22: mov      dword ptr [ebp - 0x2c], esi
  0x0048DB25: jmp      0x48da8e
  0x0048DADE: mov      ecx, dword ptr [0x2fd98b4]
  0x0048DAE4: mov      byte ptr [ebp - 0x38], al
  0x0048DAE7: movzx    eax, al
  0x0048DAEA: test     byte ptr [ecx + eax*2 + 1], 0x80
  0x0048DAEF: je       0x48dafe
  0x0048DA8E: cmp      dword ptr [ebp - 0x20], 0
  0x0048DA92: je       0x48daa2
  0x0048DB70: and      byte ptr [eax], 0
  0x0048DB73: jmp      0x48ddd0
  0x0048DB67: and      word ptr [eax], 0
  0x0048DB6B: jmp      0x48ddd0
  0x0048D7B4: inc      dword ptr [ebp - 0x1c]
  0x0048D7B7: mov      byte ptr [esi], bl
  0x0048D7B9: inc      esi
  0x0048D7BA: inc      dword ptr [ebp - 4]
  0x0048D7BD: push     edi
  0x0048D7BE: call     0x48dec5
  0x0048D7A6: test     eax, eax
  0x0048D7A8: je       0x48d7cb
  0x0048D89F: add      esp, 0xc
  0x0048D8A2: jmp      0x48ddd0
  0x0048D805: mov      byte ptr [esi], al
  0x0048D807: inc      esi
  0x0048D808: jmp      0x48d80f
  0x0048D80A: cmp      ebx, 0x2b
  0x0048D80D: jne      0x48d82d
  0x0048DAFE: push     dword ptr [0x2fd9ac0]
  0x0048DB04: lea      eax, [ebp - 0x38]
  0x0048DB07: push     eax
  0x0048DB08: lea      eax, [ebp - 0x3e]
  0x0048DB0B: push     eax
  0x0048DB0C: call     0x49011f
  0x0048DAF1: inc      dword ptr [ebp - 4]
  0x0048DAF4: push     edi
  0x0048DAF5: call     0x48dec5
  0x0048D7C3: mov      ebx, eax
  0x0048D7C5: pop      ecx
  0x0048D7C6: mov      dword ptr [ebp - 0x14], ebx
  0x0048D7C9: jmp      0x48d786
  0x0048D80F: mov      eax, dword ptr [ebp - 0xc]
  0x0048D812: dec      dword ptr [ebp - 0xc]
  0x0048D815: test     eax, eax
  0x0048D817: jne      0x48d81e
  0x0048D82D: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D834: jle      0x48d842
  0x0048DB11: mov      ax, word ptr [ebp - 0x3e]
  0x0048DB15: add      esp, 0xc
  0x0048DB18: mov      word ptr [esi], ax
  0x0048DB1B: inc      esi
  0x0048DB1C: inc      esi
  0x0048DB1D: jmp      0x48db22
  0x0048DAFA: pop      ecx
  0x0048DAFB: mov      byte ptr [ebp - 0x37], al
  0x0048DAFE: push     dword ptr [0x2fd9ac0]
  0x0048DB04: lea      eax, [ebp - 0x38]
  0x0048DB07: push     eax
  0x0048DB08: lea      eax, [ebp - 0x3e]
  0x0048DB0B: push     eax
  0x0048DB0C: call     0x49011f
  0x0048D786: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D78D: jle      0x48d79b
  0x0048D819: and      dword ptr [ebp - 0xc], eax
  0x0048D81C: jmp      0x48d82d
  0x0048D81E: inc      dword ptr [ebp - 4]
  0x0048D821: push     edi
  0x0048D822: call     0x48dec5
  0x0048D842: mov      eax, dword ptr [0x2fd98b4]
  0x0048D847: mov      al, byte ptr [eax + ebx*2]
  0x0048D84A: and      eax, 4
  0x0048D84D: test     eax, eax
  0x0048D84F: je       0x48d863
  0x0048D836: push     4
  0x0048D838: push     ebx
  0x0048D839: call     0x48a852
  0x0048DB22: mov      dword ptr [ebp - 0x2c], esi
  0x0048DB25: jmp      0x48da8e
  0x0048D827: mov      ebx, eax
  0x0048D829: pop      ecx
  0x0048D82A: mov      dword ptr [ebp - 0x14], ebx
  0x0048D82D: cmp      dword ptr [0x2fd9ac0], 1
  0x0048D834: jle      0x48d842
  0x0048D851: mov      eax, dword ptr [ebp - 0xc]
  0x0048D854: dec      dword ptr [ebp - 0xc]
  0x0048D857: test     eax, eax
  0x0048D859: je       0x48d863
  0x0048D83E: pop      ecx
  0x0048D83F: pop      ecx
  0x0048D840: jmp      0x48d84d
  0x0048D85B: inc      dword ptr [ebp - 0x1c]
  0x0048D85E: mov      byte ptr [esi], bl
  0x0048D860: inc      esi
  0x0048D861: jmp      0x48d81e
  0x0048D84D: test     eax, eax
  0x0048D84F: je       0x48d863

/**
 * Function: sub_433ca0
 * Address: 0x00433CA0
 * Blocks: 143
 * Instructions: 791
 * Analyzed with angr + capstone
 */
void* sub_433ca0(void) {

  /* Block 1 @ 0x00433CA0 */
  // sub esp, 0x24
  // push ebx
  // push ebp
  // push esi
  // push edi
  // mov edi, dword ptr [esp + 0x38]
  // mov ebx, ecx
  // TEST edi, edi (set flags)
  // if (not equal) goto 0x433cbd
  /* Block 2 @ 0x00433CB1 */
  // pop edi
  // pop esi
  // pop ebp
  // xor eax, eax
  // pop ebx
  // add esp, 0x24
  return;
  /* Block 3 @ 0x00433CBD */
  // mov esi, dword ptr [esp + 0x44]
  // mov eax, dword ptr [edi + 8]
  // push esi
  // push eax
  // mov ecx, ebx
  // call 0x00431C90
  call(0x00431C90);
  /* Block 4 @ 0x00433CCD */
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x43444b
  /* Block 5 @ 0x00433CD5 */
  // mov ecx, dword ptr [edi + 0xc]
  // CMP ecx, 1 (set flags)
  // if (less or equal) goto 0x433dde
  /* Block 6 @ 0x0043444B */
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // add esp, 0x24
  return;
  /* Block 7 @ 0x00433DDE */
  // mov eax, dword ptr [edi + 8]
  // mov ecx, dword ptr [ebx + 0x3c]
  // CMP eax, ecx (set flags)
  // if (not equal) goto 0x433e14
  /* Block 8 @ 0x00433CE1 */
  // mov eax, dword ptr [edi + 0x10]
  // CMP eax, ecx (set flags)
  // if (greater or equal) goto 0x433d1c
  /* Block 9 @ 0x00433DE8 */
  // mov eax, dword ptr [edi + 0x10]
  // xor ecx, ecx
  // TEST eax, eax (set flags)
  // sete cl
  // push ecx
  // push esi
  // mov ecx, ebx
  // call 0x00432B50
  call(0x00432B50);
  /* Block 10 @ 0x00433E14 */
  // mov ecx, dword ptr [edi + 0x10]
  // mov ebp, dword ptr [edi]
  // xor eax, eax
  // mov dword ptr [esp + 0x18], ebp
  // TEST ecx, ecx (set flags)
  // sete al
  // push eax
  // push esi
  // mov ecx, ebx
  // call 0x00432B50
  call(0x00432B50);
  /* Block 11 @ 0x00433CE8 */
  // push eax
  // push esi
  // mov ecx, ebx
  // call 0x00432B10
  call(0x00432B10);
  /* Block 12 @ 0x00433D1C */
  // mov edx, dword ptr [edi + 0xc]
  // mov ecx, dword ptr [edi + 0x10]
  // dec edx
  // mov eax, edx
  // mov dword ptr [edi + 0xc], edx
  // CMP ecx, eax (set flags)
  // if (less or equal) goto 0x433d2f
  /* Block 13 @ 0x00433DFB */
  // mov dword ptr [ebx + 0x3c], eax
  // mov edx, dword ptr [edi + 8]
  // push esi
  // push edx
  // mov ecx, ebx
  // call 0x00431EE0
  call(0x00431EE0);
  /* Block 14 @ 0x00433E2D */
  // mov esi, dword ptr [esp + 0x3c]
  // mov ecx, dword ptr [ebp + 8]
  // push esi
  // push ecx
  // mov ecx, ebx
  // mov dword ptr [esp + 0x28], eax
  // call 0x00431C90
  call(0x00431C90);
  /* Block 15 @ 0x00433CF1 */
  // mov ecx, dword ptr [ebx + 4]
  // mov ebp, dword ptr [edi + 0x10]
  // mov edx, dword ptr [ecx + 0xc]
  // mov ecx, dword ptr [edi + 0xc]
  // sub ecx, ebp
  // dec ecx
  // lea ebp, [edx + 4]
  // imul ecx, ebp
  // add ecx, 4
  // TEST ecx, ecx (set flags)
  // if (less or equal) goto 0x433d1c
  /* Block 16 @ 0x00433D2F */
  // dec word ptr [esi + 2]
  // mov eax, dword ptr [ebx + 4]
  // mov edx, dword ptr [edi + 0xc]
  // mov ecx, dword ptr [eax + 0xc]
  // add ecx, 4
  // push ecx
  // push edx
  // push esi
  // mov ecx, ebx
  // call 0x00432B10
  call(0x00432B10);
  /* Block 17 @ 0x00433D2C */
  // mov dword ptr [edi + 0x10], eax
  // dec word ptr [esi + 2]
  // mov eax, dword ptr [ebx + 4]
  // mov edx, dword ptr [edi + 0xc]
  // mov ecx, dword ptr [eax + 0xc]
  // add ecx, 4
  // push ecx
  // push edx
  // push esi
  // mov ecx, ebx
  // call 0x00432B10
  call(0x00432B10);
  /* Block 18 @ 0x00433E0A */
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // add esp, 0x24
  return;
  /* Block 19 @ 0x00433E41 */
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x43444b
  /* Block 20 @ 0x00433D0D */
  // lea edx, [edx + eax + 4]
  // push ecx
  // push edx
  // push eax
  // call 0x00483180
  call(0x00483180);
  /* Block 21 @ 0x00433D49 */
  // add eax, 4
  // push eax
  // call 0x00406CA0
  call(0x00406CA0);
  /* Block 22 @ 0x00433E49 */
  // mov eax, dword ptr [ebp + 0x10]
  // mov ebp, dword ptr [esp + 0x40]
  // TEST eax, eax (set flags)
  // if (less or equal) goto 0x433fdc
  /* Block 23 @ 0x00433D19 */
  // add esp, 0xc
  // mov edx, dword ptr [edi + 0xc]
  // mov ecx, dword ptr [edi + 0x10]
  // dec edx
  // mov eax, edx
  // mov dword ptr [edi + 0xc], edx
  // CMP ecx, eax (set flags)
  // if (less or equal) goto 0x433d2f
  /* Block 24 @ 0x00433D52 */
  // mov eax, dword ptr [edi + 8]
  // add esp, 8
  // mov ecx, ebx
  // push esi
  // push eax
  // call 0x00431E20
  call(0x00431E20);
  /* Block 25 @ 0x00433FDC */
  // mov ecx, dword ptr [esp + 0x18]
  // mov eax, dword ptr [ecx + 0x10]
  // mov edx, dword ptr [ecx + 0xc]
  // CMP eax, edx (set flags)
  // if (greater or equal) goto 0x434101
  /* Block 26 @ 0x00433E58 */
  // dec eax
  // mov ecx, ebx
  // push eax
  // push esi
  // call 0x00432B50
  call(0x00432B50);
  /* Block 27 @ 0x00433D61 */
  // mov ebp, eax
  // TEST ebp, ebp (set flags)
  // if (equal) goto 0x433d71
  /* Block 28 @ 0x00433FEE */
  // inc eax
  // mov ecx, ebx
  // push eax
  // push esi
  // call 0x00432B50
  call(0x00432B50);
  /* Block 29 @ 0x00434101 */
  // mov eax, dword ptr [ecx + 0x10]
  // TEST eax, eax (set flags)
  // if (less or equal) goto 0x4342b7
  /* Block 30 @ 0x00433E62 */
  // push ebp
  // push eax
  // mov ecx, ebx
  // mov dword ptr [esp + 0x48], eax
  // call 0x00431C90
  call(0x00431C90);
  /* Block 31 @ 0x00433D71 */
  // mov ecx, dword ptr [edi + 0x10]
  // mov eax, dword ptr [edi + 0xc]
  // CMP ecx, eax (set flags)
  // if (not equal) goto 0x433dd2
  /* Block 32 @ 0x00433D67 */
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // add esp, 0x24
  return;
  /* Block 33 @ 0x00433FF8 */
  // push ebp
  // push eax
  // mov ecx, ebx
  // mov dword ptr [esp + 0x48], eax
  // call 0x00431C90
  call(0x00431C90);
  /* Block 34 @ 0x004342B7 */
  // CMP eax, dword ptr [ecx + 0xc] (set flags)
  // if (greater or equal) goto 0x434446
  /* Block 35 @ 0x0043410C */
  // dec eax
  // mov ecx, ebx
  // push eax
  // push esi
  // call 0x00432B50
  call(0x00432B50);
  /* Block 36 @ 0x00433E6F */
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x43444b
  /* Block 37 @ 0x00433D7B */
  // mov edx, dword ptr [edi + 8]
  // push esi
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00433CA0: sub      esp, 0x24
  0x00433CA3: push     ebx
  0x00433CA4: push     ebp
  0x00433CA5: push     esi
  0x00433CA6: push     edi
  0x00433CA7: mov      edi, dword ptr [esp + 0x38]
  0x00433CAB: mov      ebx, ecx
  0x00433CAD: test     edi, edi
  0x00433CAF: jne      0x433cbd
  0x00433CB1: pop      edi
  0x00433CB2: pop      esi
  0x00433CB3: pop      ebp
  0x00433CB4: xor      eax, eax
  0x00433CB6: pop      ebx
  0x00433CB7: add      esp, 0x24
  0x00433CBA: ret      0x10
  0x00433CBD: mov      esi, dword ptr [esp + 0x44]
  0x00433CC1: mov      eax, dword ptr [edi + 8]
  0x00433CC4: push     esi
  0x00433CC5: push     eax
  0x00433CC6: mov      ecx, ebx
  0x00433CC8: call     0x431c90
  0x00433CCD: test     eax, eax
  0x00433CCF: jne      0x43444b
  0x00433CD5: mov      ecx, dword ptr [edi + 0xc]
  0x00433CD8: cmp      ecx, 1
  0x00433CDB: jle      0x433dde
  0x0043444B: pop      edi
  0x0043444C: pop      esi
  0x0043444D: pop      ebp
  0x0043444E: pop      ebx
  0x0043444F: add      esp, 0x24
  0x00434452: ret      0x10
  0x00433DDE: mov      eax, dword ptr [edi + 8]
  0x00433DE1: mov      ecx, dword ptr [ebx + 0x3c]
  0x00433DE4: cmp      eax, ecx
  0x00433DE6: jne      0x433e14
  0x00433CE1: mov      eax, dword ptr [edi + 0x10]
  0x00433CE4: cmp      eax, ecx
  0x00433CE6: jge      0x433d1c
  0x00433DE8: mov      eax, dword ptr [edi + 0x10]
  0x00433DEB: xor      ecx, ecx
  0x00433DED: test     eax, eax
  0x00433DEF: sete     cl
  0x00433DF2: push     ecx
  0x00433DF3: push     esi
  0x00433DF4: mov      ecx, ebx
  0x00433DF6: call     0x432b50
  0x00433E14: mov      ecx, dword ptr [edi + 0x10]
  0x00433E17: mov      ebp, dword ptr [edi]
  0x00433E19: xor      eax, eax
  0x00433E1B: mov      dword ptr [esp + 0x18], ebp
  0x00433E1F: test     ecx, ecx
  0x00433E21: sete     al
  0x00433E24: push     eax
  0x00433E25: push     esi
  0x00433E26: mov      ecx, ebx
  0x00433E28: call     0x432b50
  0x00433CE8: push     eax
  0x00433CE9: push     esi
  0x00433CEA: mov      ecx, ebx
  0x00433CEC: call     0x432b10
  0x00433D1C: mov      edx, dword ptr [edi + 0xc]
  0x00433D1F: mov      ecx, dword ptr [edi + 0x10]
  0x00433D22: dec      edx
  0x00433D23: mov      eax, edx
  0x00433D25: mov      dword ptr [edi + 0xc], edx
  0x00433D28: cmp      ecx, eax
  0x00433D2A: jle      0x433d2f
  0x00433DFB: mov      dword ptr [ebx + 0x3c], eax
  0x00433DFE: mov      edx, dword ptr [edi + 8]
  0x00433E01: push     esi
  0x00433E02: push     edx
  0x00433E03: mov      ecx, ebx
  0x00433E05: call     0x431ee0
  0x00433E2D: mov      esi, dword ptr [esp + 0x3c]
  0x00433E31: mov      ecx, dword ptr [ebp + 8]
  0x00433E34: push     esi
  0x00433E35: push     ecx
  0x00433E36: mov      ecx, ebx
  0x00433E38: mov      dword ptr [esp + 0x28], eax
  0x00433E3C: call     0x431c90
  0x00433CF1: mov      ecx, dword ptr [ebx + 4]
  0x00433CF4: mov      ebp, dword ptr [edi + 0x10]
  0x00433CF7: mov      edx, dword ptr [ecx + 0xc]
  0x00433CFA: mov      ecx, dword ptr [edi + 0xc]
  0x00433CFD: sub      ecx, ebp
  0x00433CFF: dec      ecx
  0x00433D00: lea      ebp, [edx + 4]
  0x00433D03: imul     ecx, ebp
  0x00433D06: add      ecx, 4
  0x00433D09: test     ecx, ecx
  0x00433D0B: jle      0x433d1c
  0x00433D2F: dec      word ptr [esi + 2]
  0x00433D33: mov      eax, dword ptr [ebx + 4]
  0x00433D36: mov      edx, dword ptr [edi + 0xc]
  0x00433D39: mov      ecx, dword ptr [eax + 0xc]
  0x00433D3C: add      ecx, 4
  0x00433D3F: push     ecx
  0x00433D40: push     edx
  0x00433D41: push     esi
  0x00433D42: mov      ecx, ebx
  0x00433D44: call     0x432b10
  0x00433D2C: mov      dword ptr [edi + 0x10], eax
  0x00433D2F: dec      word ptr [esi + 2]
  0x00433D33: mov      eax, dword ptr [ebx + 4]
  0x00433D36: mov      edx, dword ptr [edi + 0xc]
  0x00433D39: mov      ecx, dword ptr [eax + 0xc]
  0x00433D3C: add      ecx, 4
  0x00433D3F: push     ecx
  0x00433D40: push     edx
  0x00433D41: push     esi
  0x00433D42: mov      ecx, ebx
  0x00433D44: call     0x432b10
  0x00433E0A: pop      edi
  0x00433E0B: pop      esi
  0x00433E0C: pop      ebp
  0x00433E0D: pop      ebx
  0x00433E0E: add      esp, 0x24
  0x00433E11: ret      0x10
  0x00433E41: test     eax, eax
  0x00433E43: jne      0x43444b
  0x00433D0D: lea      edx, [edx + eax + 4]
  0x00433D11: push     ecx
  0x00433D12: push     edx
  0x00433D13: push     eax
  0x00433D14: call     0x483180
  0x00433D49: add      eax, 4
  0x00433D4C: push     eax
  0x00433D4D: call     0x406ca0
  0x00433E49: mov      eax, dword ptr [ebp + 0x10]
  0x00433E4C: mov      ebp, dword ptr [esp + 0x40]
  0x00433E50: test     eax, eax
  0x00433E52: jle      0x433fdc
  0x00433D19: add      esp, 0xc
  0x00433D1C: mov      edx, dword ptr [edi + 0xc]
  0x00433D1F: mov      ecx, dword ptr [edi + 0x10]
  0x00433D22: dec      edx
  0x00433D23: mov      eax, edx
  0x00433D25: mov      dword ptr [edi + 0xc], edx
  0x00433D28: cmp      ecx, eax
  0x00433D2A: jle      0x433d2f
  0x00433D52: mov      eax, dword ptr [edi + 8]
  0x00433D55: add      esp, 8
  0x00433D58: mov      ecx, ebx
  0x00433D5A: push     esi
  0x00433D5B: push     eax
  0x00433D5C: call     0x431e20
  0x00433FDC: mov      ecx, dword ptr [esp + 0x18]
  0x00433FE0: mov      eax, dword ptr [ecx + 0x10]
  0x00433FE3: mov      edx, dword ptr [ecx + 0xc]
  0x00433FE6: cmp      eax, edx
  0x00433FE8: jge      0x434101
  0x00433E58: dec      eax
  0x00433E59: mov      ecx, ebx
  0x00433E5B: push     eax
  0x00433E5C: push     esi
  0x00433E5D: call     0x432b50
  0x00433D61: mov      ebp, eax
  0x00433D63: test     ebp, ebp
  0x00433D65: je       0x433d71
  0x00433FEE: inc      eax
  0x00433FEF: mov      ecx, ebx
  0x00433FF1: push     eax
  0x00433FF2: push     esi
  0x00433FF3: call     0x432b50
  0x00434101: mov      eax, dword ptr [ecx + 0x10]
  0x00434104: test     eax, eax
  0x00434106: jle      0x4342b7
  0x00433E62: push     ebp
  0x00433E63: push     eax
  0x00433E64: mov      ecx, ebx
  0x00433E66: mov      dword ptr [esp + 0x48], eax
  0x00433E6A: call     0x431c90
  0x00433D71: mov      ecx, dword ptr [edi + 0x10]
  0x00433D74: mov      eax, dword ptr [edi + 0xc]
  0x00433D77: cmp      ecx, eax
  0x00433D79: jne      0x433dd2
  0x00433D67: pop      edi
  0x00433D68: pop      esi
  0x00433D69: pop      ebp
  0x00433D6A: pop      ebx
  0x00433D6B: add      esp, 0x24
  0x00433D6E: ret      0x10
  0x00433FF8: push     ebp
  0x00433FF9: push     eax
  0x00433FFA: mov      ecx, ebx
  0x00433FFC: mov      dword ptr [esp + 0x48], eax
  0x00434000: call     0x431c90
  0x004342B7: cmp      eax, dword ptr [ecx + 0xc]
  0x004342BA: jge      0x434446
  0x0043410C: dec      eax
  0x0043410D: mov      ecx, ebx
  0x0043410F: push     eax
  0x00434110: push     esi
  0x00434111: call     0x432b50
  0x00433E6F: test     eax, eax
  0x00433E71: jne      0x43444b
  0x00433D7B: mov      edx, dword ptr [edi + 8]
  0x00433D7E: push     esi
  0x00433D7F: lea      eax, [esp + 0x18]
  0x00433D83: push     edx
  0x00433D84: lea      ecx, [esp + 0x18]
  0x00433D88: push     eax
  0x00433D89: push     ecx
  0x00433D8A: mov      ecx, ebx
  0x00433D8C: call     0x432bc0
  0x00433DD2: pop      edi
  0x00433DD3: mov      eax, ebp
  0x00433DD5: pop      esi
  0x00433DD6: pop      ebp
  0x00433DD7: pop      ebx
  0x00433DD8: add      esp, 0x24
  0x00433DDB: ret      0x10
  0x00434005: test     eax, eax
  0x00434007: jne      0x43444b
  0x004342C0: inc      eax
  0x004342C1: mov      ecx, ebx
  0x004342C3: push     eax
  0x004342C4: push     esi
  0x004342C5: call     0x432b50
  0x00434446: mov      eax, 0xffffffe1
  0x0043444B: pop      edi
  0x0043444C: pop      esi
  0x0043444D: pop      ebp
  0x0043444E: pop      ebx
  0x0043444F: add      esp, 0x24
  0x00434452: ret      0x10
  0x00434116: mov      edi, eax
  0x00434118: push     ebp
  0x00434119: push     edi
  0x0043411A: mov      ecx, ebx
  0x0043411C: mov      dword ptr [esp + 0x48], edi
  0x00434120: call     0x431c90
  0x00433E77: movsx    eax, word ptr [ebp + 2]
  0x00433E7B: mov      ecx, dword ptr [ebx + 0x30]
  0x00433E7E: mov      dword ptr [esp + 0x1c], eax
  0x00433E82: cmp      eax, ecx
  0x00433E84: jge      0x433fdc
  0x00433D91: mov      ebp, eax
  0x00433D93: test     ebp, ebp
  0x00433D95: jne      0x433dd2
  0x0043400D: movsx    ecx, word ptr [ebp + 2]
  0x00434011: cmp      ecx, dword ptr [ebx + 0x30]
  0x00434014: jge      0x4340fd
  0x004342CA: push     ebp
  0x004342CB: push     eax
  0x004342CC: mov      ecx, ebx
  0x004342CE: mov      dword ptr [esp + 0x48], eax
  0x004342D2: call     0x431c90
  0x00434125: test     eax, eax
  0x00434127: jne      0x43444b
  0x00433E8A: mov      edx, dword ptr [esp + 0x40]
  0x00433E8E: push     esi
  0x00433E8F: lea      eax, [esp + 0x18]
  0x00433E93: push     edx
  0x00433E94: lea      ecx, [esp + 0x18]
  0x00433E98: push     eax
  0x00433E99: push     ecx
  0x00433E9A: mov      ecx, ebx
  0x00433E9C: call     0x432bc0
  0x00433D97: mov      edx, dword ptr [esp + 0x10]
  0x00433D9B: mov      eax, dword ptr [edx + 4]
  0x00433D9E: mov      dword ptr [eax], edi
  0x00433DA0: movsx    ecx, word ptr [esi + 2]
  0x00433DA4: dec      ecx
  0x00433DA5: push     ecx
  0x00433DA6: push     esi
  0x00433DA7: mov      ecx, ebx
  0x00433DA9: call     0x432b30
  0x0043401A: mov      eax, dword ptr [edi + 0x10]
  0x0043401D: test     eax, eax
  0x0043401F: jne      0x43405d
  0x004340FD: mov      ecx, dword ptr [esp + 0x18]
  0x00434101: mov      eax, dword ptr [ecx + 0x10]
  0x00434104: test     eax, eax
  0x00434106: jle      0x4342b7
  0x004342D7: test     eax, eax
  0x004342D9: jne      0x43444b
  0x0043412D: push     esi
  0x0043412E: lea      ecx, [esp + 0x18]
  0x00434132: push     edi
  0x00434133: lea      edx, [esp + 0x18]
  0x00434137: push     ecx
  0x00434138: push     edx
  0x00434139: mov      ecx, ebx
  0x0043413B: call     0x432bc0
  0x00433EA1: test     eax, eax
  0x00433EA3: jne      0x43444b
  0x00433DAE: mov      edx, dword ptr [esp + 0x14]
  0x00433DB2: push     eax
  0x00433DB3: push     edx
  0x00433DB4: mov      ecx, ebx
  0x00433DB6: call     0x4339d0
  0x00434021: mov      edx, dword ptr [edi + 8]
  0x00434024: push     esi
  0x00434025: lea      eax, [esp + 0x18]
  0x00434029: push     edx
  0x0043402A: lea      ecx, [esp + 0x18]
  0x0043402E: push     eax
  0x0043402F: push     ecx
  0x00434030: mov      ecx, ebx
  0x00434032: call     0x432bc0
  0x0043405D: mov      ecx, dword ptr [esp + 0x44]
  0x00434061: push     0
  0x00434063: push     ecx
  0x00434064: mov      ecx, ebx
  0x00434066: call     0x432b30
  0x004342DF: mov      eax, dword ptr [edi + 0x10]
  0x004342E2: test     eax, eax
  0x004342E4: jne      0x434349
  0x00434140: test     eax, eax
  0x00434142: jne      0x43444b
  0x00433EA9: mov      edx, dword ptr [esp + 0x1c]
  0x00433EAD: mov      ecx, ebx
  0x00433EAF: push     edx
  0x00433EB0: push     ebp
  0x00433EB1: call     0x432b10
  0x00433DBB: mov      ebp, eax
  0x00433DBD: mov      eax, dword ptr [esp + 0x10]
  0x00433DC1: mov      ecx, dword ptr [eax + 4]
  0x00433DC4: mov      dword ptr [ecx], eax
  0x00433DC6: mov      edx, dword ptr [esp + 0x10]
  0x00433DCA: push     edx
  0x00433DCB: mov      ecx, ebx
  0x00433DCD: call     0x432520
  0x00434037: test     eax, eax
  0x00434039: jne      0x43444b
  0x0043406B: mov      esi, eax
  0x0043406D: mov      eax, dword ptr [ebx + 4]
  0x00434070: lea      edi, [ebp + 4]
  0x00434073: mov      ecx, dword ptr [eax + 0xc]
  0x00434076: mov      edx, dword ptr [eax + 8]
  0x00434079: sub      edx, ecx
  0x0043407B: sub      edx, 8
  0x0043407E: lea      eax, [ecx + edi + 4]
  0x00434082: push     edx
  0x00434083: push     edi
  0x00434084: push     eax
  0x00434085: call     0x483180
  0x004342E6: mov      eax, dword ptr [esp + 0x20]
  0x004342EA: mov      edi, dword ptr [esp + 0x44]
  0x004342EE: push     esi
  0x004342EF: lea      ecx, [esp + 0x18]
  0x004342F3: push     eax
  0x004342F4: lea      edx, [esp + 0x18]
  0x004342F8: push     ecx
  0x004342F9: push     edx
  0x004342FA: mov      ecx, ebx
  0x004342FC: mov      dword ptr [edi + 4], eax
  0x004342FF: call     0x432bc0
  0x00434349: mov      eax, dword ptr [ebx + 4]
  0x0043434C: lea      esi, [ebp + 4]
  0x0043434F: movsx    edx, word ptr [ebp + 2]
  0x00434353: mov      ecx, dword ptr [eax + 0x14]
  0x00434356: mov      eax, dword ptr [eax + 0xc]
  0x00434359: sub      edx, ecx
  0x0043435B: dec      ecx
  0x0043435C: mov      dword ptr [esp + 0x1c], edx
  0x00434360: lea      edx, [eax + 4]
  0x00434363: imul     ecx, edx
  0x00434366: mov      edx, dword ptr [esp + 0x44]
  0x0043436A: add      ecx, 4
  0x0043436D: mov      dword ptr [esp + 0x28], ecx
  0x00434371: lea      edi, [eax + edx + 8]
  0x00434375: mov      eax, ecx
  0x00434377: shr      ecx, 2
  0x0043437A: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00434148: movsx    eax, word ptr [esi + 2]
  0x0043414C: dec      eax
  0x0043414D: mov      ecx, ebx
  0x0043414F: push     eax
  0x00434150: push     esi
  0x00434151: call     0x432b30
  0x00433EB6: movsx    ecx, word ptr [esi + 2]
  0x00433EBA: mov      edi, eax
  0x00433EBC: mov      eax, dword ptr [ebx + 4]
  0x00433EBF: add      edi, 4
  0x00433EC2: dec      ecx
  0x00433EC3: mov      edx, dword ptr [eax + 0xc]
  0x00433EC6: push     ecx
  0x00433EC7: push     esi
  0x00433EC8: mov      ecx, ebx
  0x00433ECA: mov      dword ptr [esp + 0x2c], edi
  0x00433ECE: mov      dword ptr [esp + 0x30], edx
  0x00433ED2: call     0x432b30
  0x0043403F: movsx    edx, word ptr [esi + 2]
  0x00434043: dec      edx
  0x00434044: mov      ecx, ebx
  0x00434046: push     edx
  0x00434047: push     esi
  0x00434048: call     0x432b30
  0x0043408A: mov      ecx, dword ptr [ebx + 4]
  0x0043408D: add      edi, 4
  0x00434090: mov      eax, dword ptr [esp + 0x2c]
  0x00434094: add      esp, 0xc
  0x00434097: mov      ecx, dword ptr [ecx + 0xc]
  0x0043409A: mov      edx, ecx
  0x0043409C: push     ebp
  0x0043409D: shr      ecx, 2
  0x004340A0: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00434304: test     eax, eax
  0x00434306: jne      0x43444b
  0x0043437C: mov      ecx, eax
  0x0043437E: mov      eax, dword ptr [esp + 0x44]
  0x00434382: and      ecx, 3
  0x00434385: push     eax
  0x00434386: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0043437A: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00434156: mov      ecx, dword ptr [esp + 0x10]
  0x0043415A: mov      dword ptr [esp + 0x2c], eax
  0x0043415E: push     ecx
  0x0043415F: mov      ecx, ebx
  0x00434161: call     0x432520
  0x00433ED7: mov      edx, dword ptr [esp + 0x28]
  0x00433EDB: mov      esi, eax
  0x00433EDD: mov      ecx, edx
  0x00433EDF: push     ebp
  0x00433EE0: mov      eax, ecx
  0x00433EE2: shr      ecx, 2
  0x00433EE5: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0043404D: mov      esi, eax
  0x0043404F: mov      eax, dword ptr [esp + 0x10]
  0x00434053: push     eax
  0x00434054: mov      ecx, ebx
  0x00434056: call     0x432520
  0x004340A2: mov      ecx, edx
  0x004340A4: and      ecx, 3
  0x004340A7: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004340A0: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0043430C: movsx    ecx, word ptr [esi + 2]
  0x00434310: mov      eax, dword ptr [ebx + 4]
  0x00434313: dec      ecx
  0x00434314: push     ecx
  0x00434315: push     esi
  0x00434316: mov      edx, dword ptr [eax + 0xc]
  0x00434319: mov      ecx, ebx
  0x0043431B: mov      dword ptr [esp + 0x38], edx
  0x0043431F: call     0x432b30
  0x00434388: mov      ecx, dword ptr [ebx + 4]
  0x0043438B: mov      edi, dword ptr [esp + 0x3c]
  0x0043438F: mov      dx, word ptr [ecx + 0x14]
  0x00434393: mov      ecx, ebx
  0x00434395: mov      word ptr [eax + 2], dx
  0x00434399: mov      eax, dword ptr [edi + 8]
  0x0043439C: push     eax
  0x0043439D: call     0x431e20
  0x00434386: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00434166: mov      edx, dword ptr [ebx + 4]
  0x00434169: mov      ecx, dword ptr [esp + 0x44]
  0x0043416D: movsx    eax, word ptr [ebp + 2]
  0x00434171: mov      esi, dword ptr [edx + 0x14]
  0x00434174: lea      edi, [ecx + 4]
  0x00434177: sub      eax, esi
  0x00434179: mov      ecx, ebx
  0x0043417B: mov      dword ptr [esp + 0x1c], eax
  0x0043417F: inc      eax
  0x00434180: push     eax
  0x00434181: push     ebp
  0x00434182: mov      dword ptr [esp + 0x2c], edi
  0x00434186: call     0x432b10
  0x00433EE7: mov      ecx, eax
  0x00433EE9: mov      eax, dword ptr [esp + 0x24]
  0x00433EED: and      ecx, 3
  0x00433EF0: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00433EE5: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0043405B: jmp      0x43406d
  0x004340A9: mov      ecx, dword ptr [esp + 0x44]
  0x004340AD: mov      dword ptr [ebp + 4], eax
  0x004340B0: inc      word ptr [ebp + 2]
  0x004340B4: push     ecx
  0x004340B5: mov      ecx, ebx
  0x004340B7: call     0x431e20
  0x004340A7: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00434324: mov      edx, dword ptr [esp + 0x30]
  0x00434328: mov      esi, eax
  0x0043432A: mov      ecx, edx
  0x0043432C: add      edi, 8
  0x0043432F: mov      eax, ecx
  0x00434331: shr      ecx, 2
  0x00434334: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004343A2: test     eax, eax
  0x004343A4: jne      0x43444b
  0x0043418B: mov      ecx, dword ptr [ebx + 4]
  0x0043418E: mov      dword ptr [esp + 0x30], eax
  0x00434192: mov      esi, eax
  0x00434194: mov      edx, dword ptr [ecx + 0x14]
  0x00434197: mov      ecx, dword ptr [ecx + 0xc]
  0x0043419A: dec      edx
  0x0043419B: add      ecx, 4
  0x0043419E: imul     edx, ecx
  0x004341A1: add      edx, 4
  0x004341A4: mov      ecx, edx
  0x004341A6: mov      dword ptr [esp + 0x28], edx
  0x004341AA: mov      eax, ecx
  0x004341AC: shr      ecx, 2
  0x004341AF: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00433EF2: mov      ecx, dword ptr [ebx + 4]
  0x00433EF5: mov      edx, dword ptr [ecx + 0xc]
  0x00433EF8: mov      ecx, dword ptr [esp + 0x28]
  0x00433EFC: mov      dword ptr [edx + ecx], eax
  0x00433EFF: mov      edx, dword ptr [esp + 0x44]
  0x00433F03: inc      word ptr [ebp + 2]
  0x00433F07: push     edx
  0x00433F08: mov      ecx, ebx
  0x00433F0A: call     0x431e20
  0x00433EF0: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0043406D: mov      eax, dword ptr [ebx + 4]
  0x00434070: lea      edi, [ebp + 4]
  0x00434073: mov      ecx, dword ptr [eax + 0xc]
  0x00434076: mov      edx, dword ptr [eax + 8]
  0x00434079: sub      edx, ecx
  0x0043407B: sub      edx, 8
  0x0043407E: lea      eax, [ecx + edi + 4]
  0x00434082: push     edx
  0x00434083: push     edi
  0x00434084: push     eax
  0x00434085: call     0x483180
  0x004340BC: test     eax, eax
  0x004340BE: jne      0x43444b
  0x00434336: mov      ecx, eax
  0x00434338: and      ecx, 3
  0x0043433B: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00434334: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004343AA: mov      eax, dword ptr [ebx + 4]
  0x004343AD: mov      esi, dword ptr [esp + 0x28]
  0x004343B1: mov      ecx, dword ptr [eax + 0xc]
  0x004343B4: add      esi, ecx
  0x004343B6: mov      ecx, dword ptr [eax + 8]
  0x004343B9: sub      ecx, esi
  0x004343BB: lea      eax, [ebp + 4]
  0x004343BE: sub      ecx, 4
  0x004343C1: lea      edx, [esi + eax]
  0x004343C4: push     ecx
  0x004343C5: push     edx
  0x004343C6: push     eax
  0x004343C7: call     0x483180
  0x004341B1: mov      ecx, eax
  0x004341B3: mov      eax, dword ptr [esp + 0x24]
  0x004341B7: and      ecx, 3
  0x004341BA: add      eax, edx
  0x004341BC: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004341AF: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00433F0F: mov      esi, eax
  0x00433F11: test     esi, esi
  0x00433F13: jne      0x433fc4
  0x004340C4: mov      edx, dword ptr [esp + 0x38]
  0x004340C8: push     ebp
  0x004340C9: mov      ecx, ebx
  0x004340CB: mov      eax, dword ptr [edx + 8]
  0x004340CE: push     eax
  0x004340CF: call     0x431ee0
  0x0043433D: mov      ecx, dword ptr [esp + 0x10]
  0x00434341: push     ecx
  0x00434342: mov      ecx, ebx
  0x00434344: call     0x432520
  0x0043433B: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004343CC: mov      eax, dword ptr [esp + 0x28]
  0x004343D0: add      esp, 0xc
  0x004343D3: mov      ecx, ebx
  0x004343D5: mov      word ptr [ebp + 2], ax
  0x004343D9: push     esi
  0x004343DA: push     eax
  0x004343DB: push     ebp
  0x004343DC: call     0x432b10
  0x004341BE: mov      ecx, dword ptr [ebx + 4]
  0x004341C1: mov      esi, dword ptr [esp + 0x2c]
  0x004341C5: mov      edi, eax
  0x004341C7: mov      ecx, dword ptr [ecx + 0xc]
  0x004341CA: mov      edx, ecx
  0x004341CC: shr      ecx, 2
  0x004341CF: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004341BC: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00433F19: mov      eax, dword ptr [esp + 0x38]
  0x00433F1D: push     ebp
  0x00433F1E: mov      ecx, dword ptr [eax + 8]
  0x00433F21: push     ecx
  0x00433F22: mov      ecx, ebx
  0x00433F24: call     0x431ee0
  0x00433FC4: mov      eax, dword ptr [esp + 0x10]
  0x00433FC8: mov      ecx, ebx
  0x00433FCA: push     eax
  0x00433FCB: call     0x432520
  0x004340D4: test     eax, eax
  0x004340D6: jne      0x43444b
  0x004343E1: add      eax, 4
  0x004343E4: push     eax
  0x004343E5: call     0x406ca0
  0x004341D1: mov      ecx, edx
  0x004341D3: and      ecx, 3
  0x004341D6: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004341CF: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00433F29: mov      esi, eax
  0x00433F2B: test     esi, esi
  0x00433F2D: jne      0x433fc4
  0x00433FD0: mov      eax, esi
  0x00433FD2: pop      edi
  0x00433FD3: pop      esi
  0x00433FD4: pop      ebp
  0x00433FD5: pop      ebx
  0x00433FD6: add      esp, 0x24
  0x00433FD9: ret      0x10
  0x004340DC: mov      ecx, dword ptr [esp + 0x44]
  0x004340E0: mov      edx, dword ptr [esp + 0x3c]
  0x004340E4: mov      eax, dword ptr [esp + 0x18]
  0x004340E8: push     ecx
  0x004340E9: push     ebp
  0x004340EA: push     edx
  0x004340EB: push     eax
  0x004340EC: mov      ecx, ebx
  0x004340EE: call     0x433ca0
  0x004343EA: mov      eax, dword ptr [esp + 0x48]
  0x004343EE: add      esp, 8
  0x004343F1: mov      ecx, ebx
  0x004343F3: push     ebp
  0x004343F4: push     eax
  0x004343F5: call     0x431e20
  0x004341D8: mov      ecx, dword ptr [ebx + 4]
  0x004341DB: mov      edx, dword ptr [ecx + 0xc]
  0x004341DE: mov      ecx, dword ptr [esp + 0x20]
  0x004341E2: mov      dword ptr [edx + eax], ecx
  0x004341E5: mov      edx, dword ptr [ebx + 4]
  0x004341E8: mov      eax, dword ptr [esp + 0x44]
  0x004341EC: mov      cx, word ptr [edx + 0x14]
  0x004341F0: mov      edx, dword ptr [esp + 0x38]
  0x004341F4: mov      word ptr [eax + 2], cx
  0x004341F8: push     eax
  0x004341F9: mov      eax, dword ptr [edx + 8]
  0x004341FC: mov      ecx, ebx
  0x004341FE: push     eax
  0x004341FF: call     0x431e20
  0x004341D6: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x00433F33: mov      edx, dword ptr [esp + 0x10]
  0x00433F37: mov      ecx, ebx
  0x00433F39: push     edx
  0x00433F3A: call     0x432520
  0x004340F3: pop      edi
  0x004340F4: pop      esi
  0x004340F5: pop      ebp
  0x004340F6: pop      ebx
  0x004340F7: add      esp, 0x24
  0x004340FA: ret      0x10
  0x004343FA: test     eax, eax
  0x004343FC: jne      0x43444b
  0x00434204: test     eax, eax
  0x00434206: jne      0x43444b
  0x00433F3F: mov      edi, dword ptr [esp + 0x3c]
  0x00433F43: mov      eax, dword ptr [esp + 0x40]
  0x00433F47: push     edi
  0x00433F48: lea      ecx, [esp + 0x18]
  0x00433F4C: push     eax
  0x00433F4D: lea      edx, [esp + 0x18]
  0x00433F51: push     ecx
  0x00433F52: push     edx
  0x00433F53: mov      ecx, ebx
  0x00433F55: call     0x432bc0
  0x004343FE: mov      esi, dword ptr [esp + 0x3c]
  0x00434402: mov      ecx, dword ptr [edi + 8]
  0x00434405: push     esi
  0x00434406: lea      edx, [esp + 0x18]
  0x0043440A: push     ecx
  0x0043440B: lea      eax, [esp + 0x18]
  0x0043440F: push     edx
  0x00434410: push     eax
  0x00434411: mov      ecx, ebx
  0x00434413: call     0x432bc0
  0x0043420C: mov      cx, word ptr [esp + 0x1c]
  0x00434211: mov      word ptr [ebp + 2], cx
  0x00434215: mov      edx, dword ptr [ebx + 4]
  0x00434218: mov      ecx, dword ptr [esp + 0x28]
  0x0043421C: mov      eax, dword ptr [edx + 0xc]
  0x0043421F: lea      edx, [eax + ecx]
  0x00434222: mov      ecx, dword ptr [esp + 0x30]
  0x00434226: sub      ecx, eax
  0x00434228: push     edx
  0x00434229: push     ecx
  0x0043422A: call     0x406ca0
  0x00433F5A: test     eax, eax
  0x00433F5C: jne      0x43444b
  0x00434418: test     eax, eax
  0x0043441A: jne      0x43444b
  0x0043422F: mov      esi, dword ptr [esp + 0x48]
  0x00434233: add      esp, 8
  0x00434236: mov      ecx, ebx
  0x00434238: push     ebp
  0x00434239: push     esi
  0x0043423A: call     0x431e20
  0x00433F62: mov      esi, dword ptr [esp + 0x18]
  0x00433F66: mov      ecx, dword ptr [esi + 0x10]
  0x00433F69: dec      ecx
  0x00433F6A: mov      dword ptr [esi + 0x10], ecx
  0x00433F6D: mov      eax, dword ptr [esp + 0x10]
  0x00433F71: mov      dword ptr [eax], esi
  0x00433F73: movsx    ecx, word ptr [edi + 2]
  0x00433F77: dec      ecx
  0x00433F78: push     ecx
  0x00433F79: push     edi
  0x00433F7A: mov      ecx, ebx
  0x00433F7C: call     0x432b30
  0x0043441C: mov      ecx, dword ptr [esp + 0x10]
  0x00434420: mov      edx, dword ptr [esp + 0x18]
  0x00434424: mov      dword ptr [ecx], edx
  0x00434426: mov      ecx, ebx
  0x00434428: movsx    eax, word ptr [esi + 2]
  0x0043442C: dec      eax
  0x0043442D: push     eax
  0x0043442E: push     esi
  0x0043442F: call     0x432b30
  0x0043423F: test     eax, eax
  0x00434241: jne      0x43444b
  0x00433F81: mov      edx, dword ptr [esp + 0x14]
  0x00433F85: push     eax
  0x00433F86: push     edx
  0x00433F87: mov      ecx, ebx
  0x00433F89: call     0x4339d0
  0x00434434: mov      ecx, dword ptr [esp + 0x14]
  0x00434438: push     eax
  0x00434439: push     ecx
  0x0043443A: mov      ecx, ebx
  0x0043443C: call     0x4339d0
  0x00434247: mov      edi, dword ptr [esp + 0x3c]
  0x0043424B: lea      eax, [esp + 0x14]
  0x0043424F: push     edi
  0x00434250: push     esi
  0x00434251: lea      ecx, [esp + 0x18]
  0x00434255: push     eax
  0x00434256: push     ecx
  0x00434257: mov      ecx, ebx
  0x00434259: call     0x432bc0
  0x00433F8E: mov      eax, dword ptr [esi + 0x10]
  0x00433F91: inc      eax
  0x00433F92: mov      dword ptr [esi + 0x10], eax
  0x00433F95: mov      eax, dword ptr [esp + 0x10]
  0x00433F99: mov      dword ptr [eax], 0
  0x00433F9F: mov      ecx, dword ptr [esp + 0x10]
  0x00433FA3: push     ecx
  0x00433FA4: mov      ecx, ebx
  0x00433FA6: call     0x432520
  0x00434441: jmp      0x434295
  0x0043425E: test     eax, eax
  0x00434260: jne      0x43444b
  0x00433FAB: mov      edx, dword ptr [esp + 0x44]
  0x00433FAF: mov      ecx, ebx
  0x00433FB1: push     edx
  0x00433FB2: push     ebp
  0x00433FB3: push     edi
  0x00433FB4: push     esi
  0x00433FB5: call     0x433ca0
  0x00434295: mov      edx, dword ptr [esp + 0x10]
  0x00434299: mov      ecx, ebx
  0x0043429B: mov      dword ptr [edx], 0
  0x004342A1: mov      eax, dword ptr [esp + 0x10]
  0x004342A5: push     eax
  0x004342A6: call     0x432520
  0x00434266: mov      edx, dword ptr [esp + 0x10]
  0x0043426A: mov      esi, dword ptr [esp + 0x18]
  0x0043426E: mov      ecx, ebx
  0x00434270: mov      dword ptr [edx], esi
  0x00434272: mov      ebp, dword ptr [esi + 0x10]
  0x00434275: dec      ebp
  0x00434276: mov      dword ptr [esi + 0x10], ebp
  0x00434279: movsx    eax, word ptr [edi + 2]
  0x0043427D: dec      eax
  0x0043427E: push     eax
  0x0043427F: push     edi
  0x00434280: call     0x432b30
  0x00433FBA: pop      edi
  0x00433FBB: pop      esi
  0x00433FBC: pop      ebp
  0x00433FBD: pop      ebx
  0x00433FBE: add      esp, 0x24
  0x00433FC1: ret      0x10
  0x004342AB: pop      edi
  0x004342AC: pop      esi
  0x004342AD: pop      ebp
  0x004342AE: xor      eax, eax
  0x004342B0: pop      ebx
  0x004342B1: add      esp, 0x24
  0x004342B4: ret      0x10
  0x00434285: mov      ecx, dword ptr [esp + 0x14]
  0x00434289: push     eax
  0x0043428A: push     ecx
  0x0043428B: mov      ecx, ebx
  0x0043428D: call     0x4339d0
  0x00434292: inc      dword ptr [esi + 0x10]
  0x00434295: mov      edx, dword ptr [esp + 0x10]
  0x00434299: mov      ecx, ebx
  0x0043429B: mov      dword ptr [edx], 0
  0x004342A1: mov      eax, dword ptr [esp + 0x10]
  0x004342A5: push     eax
  0x004342A6: call     0x432520

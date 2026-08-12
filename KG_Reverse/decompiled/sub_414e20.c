/**
 * Function: sub_414e20
 * Address: 0x00414E20
 * Blocks: 267
 * Instructions: 1084
 * Analyzed with angr + capstone
 */
void* sub_414e20(void) {

  /* Block 1 @ 0x00414E20 */
  // push -1
  // push 0x49e938
  // mov eax, dword ptr fs:[0]
  // push eax
  // mov dword ptr fs:[0], esp
  // sub esp, 0x78
  // push ebx
  // push ebp
  // push esi
  // mov esi, dword ptr [esp + 0x94]
  // push edi
  // mov ebp, ecx
  // lea eax, [esp + 0x14]
  // push 0
  // push eax
  // push esi
  // lea ecx, [ebp + 0x104]
  // mov dword ptr [esp + 0x24], ebp
  // call 0x0040EC30
  call(0x0040EC30);
  /* Block 2 @ 0x00414E5C */
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x414e7b
  /* Block 3 @ 0x00414E60 */
  // mov ecx, dword ptr [esp + 0x9c]
  // push ecx
  // push esi
  // push eax
  // push 0x2faaeec
  // mov ecx, ebp
  // call 0x00412F90
  call(0x00412F90);
  /* Block 4 @ 0x00414E7B */
  // mov eax, dword ptr [esp + 0x14]
  // mov esi, dword ptr [esp + 0x9c]
  // lea edx, [esp + 0x1c]
  // push edx
  // push 0
  // push esi
  // lea ecx, [eax + 0x14]
  // call 0x0040E7B0
  call(0x0040E7B0);
  /* Block 5 @ 0x00414E96 */
  // mov ebx, eax
  // push esi
  // mov dword ptr [esp + 0x2c], ebx
  // call 0x0040EDE0
  call(0x0040EDE0);
  /* Block 6 @ 0x00414EA2 */
  // add esp, 4
  // TEST eax, eax (set flags)
  // if (equal) goto 0x415025
  /* Block 7 @ 0x00415025 */
  // mov ecx, dword ptr [ebx]
  // push 0
  // push ecx
  // mov ecx, dword ptr [esp + 0x20]
  // call 0x00413290
  call(0x00413290);
  /* Block 8 @ 0x00414EAD */
  // lea esi, [ebx + 0x18]
  // push esi
  // call 0x00406CF0
  call(0x00406CF0);
  /* Block 9 @ 0x00415033 */
  // mov ecx, dword ptr [esp + 0xa0]
  // lea esi, [ebx + 0x18]
  // mov dword ptr [esp + 0x24], eax
  // mov eax, dword ptr [eax + 0x28]
  // lea edx, [ecx + ecx*4]
  // mov edi, esi
  // push edi
  // lea ebp, [eax + edx*4]
  // call 0x00406CF0
  call(0x00406CF0);
  /* Block 10 @ 0x00414EB6 */
  // add esi, eax
  // push esi
  // call 0x00406CF0
  call(0x00406CF0);
  /* Block 11 @ 0x00415052 */
  // add edi, eax
  // push edi
  // call 0x00406CF0
  call(0x00406CF0);
  /* Block 12 @ 0x00414EBE */
  // lea esi, [esi + eax + 8]
  // mov eax, dword ptr [esp + 0xa8]
  // add esp, 8
  // CMP eax, 3 (set flags)
  // if (above) goto 0x415aa5
  /* Block 13 @ 0x0041505A */
  // add edi, eax
  // add esp, 8
  // mov edi, dword ptr [edi]
  // TEST edi, edi (set flags)
  // mov dword ptr [esp + 0x10], edi
  // if (equal) goto 0x415080
  /* Block 14 @ 0x00414ED5 */
  goto dword ptr [eax*4 + 0x415ac0];
  /* Block 15 @ 0x00415AA5 */
  // mov ecx, dword ptr [esp + 0x88]
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // mov dword ptr fs:[0], ecx
  // add esp, 0x84
  return;
  /* Block 16 @ 0x00415080 */
  // xor edi, edi
  // lea ecx, [esp + 0x38]
  // mov dword ptr [esp + 0x20], edi
  // call 0x004062A0
  call(0x004062A0);
  /* Block 17 @ 0x00415069 */
  // mov ecx, edi
  // mov edx, dword ptr [ecx + 0x1c]
  // push edx
  // call dword ptr [0x4a2558]
  call(dword ptr [0x4a2558]);
  /* Block 18 @ 0x00414FD8 */
  // mov eax, dword ptr [esi]
  // mov ebx, dword ptr [esp + 0xa8]
  // xor ecx, ecx
  // mov edx, eax
  // TEST ebx, ebx (set flags)
  // not edx
  // and edx, 1
  // CMP ecx, edx (set flags)
  // if (equal) goto 0x415aa5
  /* Block 19 @ 0x00414F8A */
  // mov ebx, dword ptr [esp + 0xa8]
  // mov eax, dword ptr [esi]
  // xor ecx, ecx
  // mov edx, eax
  // TEST ebx, ebx (set flags)
  // shr edx, 1
  // and edx, 1
  // CMP ecx, edx (set flags)
  // if (equal) goto 0x415aa5
  /* Block 20 @ 0x00414F3B */
  // mov ebx, dword ptr [esp + 0xa8]
  // mov eax, dword ptr [esi]
  // xor ecx, ecx
  // mov edx, eax
  // TEST ebx, ebx (set flags)
  // shr edx, 2
  // and edx, 1
  // CMP ecx, edx (set flags)
  // if (equal) goto 0x415aa5
  /* Block 21 @ 0x00414EDC */
  // mov edi, dword ptr [esp + 0xa8]
  // TEST edi, edi (set flags)
  // if (not equal) goto 0x414eec
  /* Block 22 @ 0x0041508F */
  // mov eax, dword ptr [esp + 0xa0]
  // mov dword ptr [esp + 0x90], 0
  // CMP eax, 8 (set flags)
  // if (greater or equal) goto 0x41567c
  /* Block 23 @ 0x00415075 */
  // TEST eax, eax (set flags)
  // if (equal) goto 0x415080
  /* Block 24 @ 0x00414FF7 */
  // TEST ecx, ecx (set flags)
  // if (not equal) goto 0x415010
  /* Block 25 @ 0x00414FA9 */
  // CMP ecx, 1 (set flags)
  // if (not equal) goto 0x414fc3
  /* Block 26 @ 0x00414F5B */
  // CMP ecx, 1 (set flags)
  // if (not equal) goto 0x414f75
  /* Block 27 @ 0x00414EE7 */
  // mov edi, 0x2fe8208
  // add esi, 4
  // push edi
  // push esi
  // call 0x00482DC4
  call(0x00482DC4);
  // add esi, 4
  // push edi
  // push esi
  // call 0x00482DC4
  call(0x00482DC4);
  /* Block 28 @ 0x004150AA */
  // CMP eax, 7 (set flags)
  // if (above) goto 0x415a89
  /* Block 29 @ 0x0041567C */
  // TEST edi, edi (set flags)
  // if (not equal) goto 0x4156a3
  /* Block 30 @ 0x00415079 */
  // mov edi, 1
  goto 0x415082;
  /* Block 31 @ 0x00414FFB */
  // or al, 1
  // mov ecx, ebp
  // mov dword ptr [esi], eax
  // mov eax, dword ptr [esp + 0x14]
  // push eax
  // call 0x00414D20
  call(0x00414D20);
  /* Block 32 @ 0x00415010 */
  // and al, 0xfe
  // mov ecx, ebp
  // mov dword ptr [esi], eax
  // mov eax, dword ptr [esp + 0x14]
  // push eax
  // call 0x00414D20
  call(0x00414D20);
  /* Block 33 @ 0x00414FAE */
  // or al, 2
  // mov ecx, ebp
  // mov dword ptr [esi], eax
  // mov eax, dword ptr [esp + 0x14]
  // push eax
  // call 0x00414D20
  call(0x00414D20);
  /* Block 34 @ 0x00414FC3 */
  // and al, 0xfd
  // mov ecx, ebp
  // mov dword ptr [esi], eax
  // mov eax, dword ptr [esp + 0x14]
  // push eax
  // call 0x00414D20
  call(0x00414D20);
  /* Block 35 @ 0x00414F60 */
  // or al, 4
  // mov ecx, ebp
  // mov dword ptr [esi], eax
  // mov eax, dword ptr [esp + 0x14]
  // push eax
  // call 0x00414D20
  call(0x00414D20);
  /* Block 36 @ 0x00414F75 */
  // and al, 0xfb
  // mov ecx, ebp
  // mov dword ptr [esi], eax
  // mov eax, dword ptr [esp + 0x14]
  // push eax
  // call 0x00414D20
  call(0x00414D20);
  /* Block 37 @ 0x00414EF6 */
  // add esp, 8
  // TEST eax, eax (set flags)
  // if (equal) goto 0x415aa5
  /* Block 38 @ 0x004150B3 */
  goto dword ptr [eax*4 + 0x415ad0];
  /* Block 39 @ 0x00415A89 */
  // lea ecx, [esp + 0x38]
  // mov dword ptr [esp + 0x90], 0xffffffff
  // mov dword ptr [esp + 0x38], 0x2f95460
  // call 0x004064A0
  call(0x004064A0);
  /* Block 40 @ 0x00415680 */
  // mov ecx, dword ptr [esp + 0x9c]
  // mov edx, dword ptr [esp + 0x98]
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00414E20: push     -1
  0x00414E22: push     0x49e938
  0x00414E27: mov      eax, dword ptr fs:[0]
  0x00414E2D: push     eax
  0x00414E2E: mov      dword ptr fs:[0], esp
  0x00414E35: sub      esp, 0x78
  0x00414E38: push     ebx
  0x00414E39: push     ebp
  0x00414E3A: push     esi
  0x00414E3B: mov      esi, dword ptr [esp + 0x94]
  0x00414E42: push     edi
  0x00414E43: mov      ebp, ecx
  0x00414E45: lea      eax, [esp + 0x14]
  0x00414E49: push     0
  0x00414E4B: push     eax
  0x00414E4C: push     esi
  0x00414E4D: lea      ecx, [ebp + 0x104]
  0x00414E53: mov      dword ptr [esp + 0x24], ebp
  0x00414E57: call     0x40ec30
  0x00414E5C: test     eax, eax
  0x00414E5E: jne      0x414e7b
  0x00414E60: mov      ecx, dword ptr [esp + 0x9c]
  0x00414E67: push     ecx
  0x00414E68: push     esi
  0x00414E69: push     eax
  0x00414E6A: push     0x2faaeec
  0x00414E6F: mov      ecx, ebp
  0x00414E71: call     0x412f90
  0x00414E7B: mov      eax, dword ptr [esp + 0x14]
  0x00414E7F: mov      esi, dword ptr [esp + 0x9c]
  0x00414E86: lea      edx, [esp + 0x1c]
  0x00414E8A: push     edx
  0x00414E8B: push     0
  0x00414E8D: push     esi
  0x00414E8E: lea      ecx, [eax + 0x14]
  0x00414E91: call     0x40e7b0
  0x00414E96: mov      ebx, eax
  0x00414E98: push     esi
  0x00414E99: mov      dword ptr [esp + 0x2c], ebx
  0x00414E9D: call     0x40ede0
  0x00414EA2: add      esp, 4
  0x00414EA5: test     eax, eax
  0x00414EA7: je       0x415025
  0x00415025: mov      ecx, dword ptr [ebx]
  0x00415027: push     0
  0x00415029: push     ecx
  0x0041502A: mov      ecx, dword ptr [esp + 0x20]
  0x0041502E: call     0x413290
  0x00414EAD: lea      esi, [ebx + 0x18]
  0x00414EB0: push     esi
  0x00414EB1: call     0x406cf0
  0x00415033: mov      ecx, dword ptr [esp + 0xa0]
  0x0041503A: lea      esi, [ebx + 0x18]
  0x0041503D: mov      dword ptr [esp + 0x24], eax
  0x00415041: mov      eax, dword ptr [eax + 0x28]
  0x00415044: lea      edx, [ecx + ecx*4]
  0x00415047: mov      edi, esi
  0x00415049: push     edi
  0x0041504A: lea      ebp, [eax + edx*4]
  0x0041504D: call     0x406cf0
  0x00414EB6: add      esi, eax
  0x00414EB8: push     esi
  0x00414EB9: call     0x406cf0
  0x00415052: add      edi, eax
  0x00415054: push     edi
  0x00415055: call     0x406cf0
  0x00414EBE: lea      esi, [esi + eax + 8]
  0x00414EC2: mov      eax, dword ptr [esp + 0xa8]
  0x00414EC9: add      esp, 8
  0x00414ECC: cmp      eax, 3
  0x00414ECF: ja       0x415aa5
  0x0041505A: add      edi, eax
  0x0041505C: add      esp, 8
  0x0041505F: mov      edi, dword ptr [edi]
  0x00415061: test     edi, edi
  0x00415063: mov      dword ptr [esp + 0x10], edi
  0x00415067: je       0x415080
  0x00414ED5: jmp      dword ptr [eax*4 + 0x415ac0]
  0x00415AA5: mov      ecx, dword ptr [esp + 0x88]
  0x00415AAC: pop      edi
  0x00415AAD: pop      esi
  0x00415AAE: pop      ebp
  0x00415AAF: pop      ebx
  0x00415AB0: mov      dword ptr fs:[0], ecx
  0x00415AB7: add      esp, 0x84
  0x00415ABD: ret      0x18
  0x00415080: xor      edi, edi
  0x00415082: lea      ecx, [esp + 0x38]
  0x00415086: mov      dword ptr [esp + 0x20], edi
  0x0041508A: call     0x4062a0
  0x00415069: mov      ecx, edi
  0x0041506B: mov      edx, dword ptr [ecx + 0x1c]
  0x0041506E: push     edx
  0x0041506F: call     dword ptr [0x4a2558]
  0x00414FD8: mov      eax, dword ptr [esi]
  0x00414FDA: mov      ebx, dword ptr [esp + 0xa8]
  0x00414FE1: xor      ecx, ecx
  0x00414FE3: mov      edx, eax
  0x00414FE5: test     ebx, ebx
  0x00414FE7: not      edx
  0x00414FE9: setne    cl
  0x00414FEC: and      edx, 1
  0x00414FEF: cmp      ecx, edx
  0x00414FF1: je       0x415aa5
  0x00414F8A: mov      ebx, dword ptr [esp + 0xa8]
  0x00414F91: mov      eax, dword ptr [esi]
  0x00414F93: xor      ecx, ecx
  0x00414F95: mov      edx, eax
  0x00414F97: test     ebx, ebx
  0x00414F99: setne    cl
  0x00414F9C: shr      edx, 1
  0x00414F9E: and      edx, 1
  0x00414FA1: cmp      ecx, edx
  0x00414FA3: je       0x415aa5
  0x00414F3B: mov      ebx, dword ptr [esp + 0xa8]
  0x00414F42: mov      eax, dword ptr [esi]
  0x00414F44: xor      ecx, ecx
  0x00414F46: mov      edx, eax
  0x00414F48: test     ebx, ebx
  0x00414F4A: setne    cl
  0x00414F4D: shr      edx, 2
  0x00414F50: and      edx, 1
  0x00414F53: cmp      ecx, edx
  0x00414F55: je       0x415aa5
  0x00414EDC: mov      edi, dword ptr [esp + 0xa8]
  0x00414EE3: test     edi, edi
  0x00414EE5: jne      0x414eec
  0x0041508F: mov      eax, dword ptr [esp + 0xa0]
  0x00415096: mov      dword ptr [esp + 0x90], 0
  0x004150A1: cmp      eax, 8
  0x004150A4: jge      0x41567c
  0x00415075: test     eax, eax
  0x00415077: je       0x415080
  0x00414FF7: test     ecx, ecx
  0x00414FF9: jne      0x415010
  0x00414FA9: cmp      ecx, 1
  0x00414FAC: jne      0x414fc3
  0x00414F5B: cmp      ecx, 1
  0x00414F5E: jne      0x414f75
  0x00414EE7: mov      edi, 0x2fe8208
  0x00414EEC: add      esi, 4
  0x00414EEF: push     edi
  0x00414EF0: push     esi
  0x00414EF1: call     0x482dc4
  0x00414EEC: add      esi, 4
  0x00414EEF: push     edi
  0x00414EF0: push     esi
  0x00414EF1: call     0x482dc4
  0x004150AA: cmp      eax, 7
  0x004150AD: ja       0x415a89
  0x0041567C: test     edi, edi
  0x0041567E: jne      0x4156a3
  0x00415079: mov      edi, 1
  0x0041507E: jmp      0x415082
  0x00414FFB: or       al, 1
  0x00414FFD: mov      ecx, ebp
  0x00414FFF: mov      dword ptr [esi], eax
  0x00415001: mov      eax, dword ptr [esp + 0x14]
  0x00415005: push     eax
  0x00415006: call     0x414d20
  0x00415010: and      al, 0xfe
  0x00415012: mov      ecx, ebp
  0x00415014: mov      dword ptr [esi], eax
  0x00415016: mov      eax, dword ptr [esp + 0x14]
  0x0041501A: push     eax
  0x0041501B: call     0x414d20
  0x00414FAE: or       al, 2
  0x00414FB0: mov      ecx, ebp
  0x00414FB2: mov      dword ptr [esi], eax
  0x00414FB4: mov      eax, dword ptr [esp + 0x14]
  0x00414FB8: push     eax
  0x00414FB9: call     0x414d20
  0x00414FC3: and      al, 0xfd
  0x00414FC5: mov      ecx, ebp
  0x00414FC7: mov      dword ptr [esi], eax
  0x00414FC9: mov      eax, dword ptr [esp + 0x14]
  0x00414FCD: push     eax
  0x00414FCE: call     0x414d20
  0x00414F60: or       al, 4
  0x00414F62: mov      ecx, ebp
  0x00414F64: mov      dword ptr [esi], eax
  0x00414F66: mov      eax, dword ptr [esp + 0x14]
  0x00414F6A: push     eax
  0x00414F6B: call     0x414d20
  0x00414F75: and      al, 0xfb
  0x00414F77: mov      ecx, ebp
  0x00414F79: mov      dword ptr [esi], eax
  0x00414F7B: mov      eax, dword ptr [esp + 0x14]
  0x00414F7F: push     eax
  0x00414F80: call     0x414d20
  0x00414EF6: add      esp, 8
  0x00414EF9: test     eax, eax
  0x00414EFB: je       0x415aa5
  0x004150B3: jmp      dword ptr [eax*4 + 0x415ad0]
  0x00415A89: lea      ecx, [esp + 0x38]
  0x00415A8D: mov      dword ptr [esp + 0x90], 0xffffffff
  0x00415A98: mov      dword ptr [esp + 0x38], 0x2f95460
  0x00415AA0: call     0x4064a0
  0x00415680: mov      ecx, dword ptr [esp + 0x9c]
  0x00415687: mov      edx, dword ptr [esp + 0x98]
  0x0041568E: push     ecx
  0x0041568F: push     edx
  0x00415690: push     edi
  0x00415691: mov      edi, dword ptr [esp + 0x24]
  0x00415695: push     0x2faaf60
  0x0041569A: mov      ecx, edi
  0x0041569C: call     0x412f90
  0x004156A3: mov      edi, dword ptr [esp + 0x18]
  0x004156A7: xor      eax, eax
  0x004156A9: mov      dword ptr [esp + 0x28], eax
  0x004156AD: mov      dword ptr [esp + 0x2c], eax
  0x004156B1: mov      ax, word ptr [ebp + 0xc]
  0x004156B5: movsx    ecx, ax
  0x004156B8: add      ecx, 0xfffffc18
  0x004156BE: cmp      ecx, 0x18
  0x004156C1: ja       0x4159fb
  0x00415082: lea      ecx, [esp + 0x38]
  0x00415086: mov      dword ptr [esp + 0x20], edi
  0x0041508A: call     0x4062a0
  0x0041500B: jmp      0x415aa5
  0x00415020: jmp      0x415aa5
  0x00414FBE: jmp      0x415aa5
  0x00414FD3: jmp      0x415aa5
  0x00414F70: jmp      0x415aa5
  0x00414F85: jmp      0x415aa5
  0x00414F01: push     edi
  0x00414F02: call     0x406cf0
  0x004151A5: mov      ebx, dword ptr [esp + 0xa8]
  0x004151AC: cmp      ebx, 0x7f73
  0x004151B2: jg       0x4151bc
  0x004154E9: mov      ecx, dword ptr [esp + 0xa8]
  0x004154F0: xor      ebx, ebx
  0x004154F2: test     ecx, ecx
  0x004154F4: setne    bl
  0x004154F7: cmp      ebx, 1
  0x004154FA: push     esi
  0x004154FB: jne      0x415534
  0x0041558A: mov      ebx, dword ptr [esp + 0xa8]
  0x00415591: test     ebx, ebx
  0x00415593: jne      0x415599
  0x004152AB: mov      edx, dword ptr [esp + 0xa8]
  0x004152B2: xor      ecx, ecx
  0x004152B4: test     edx, edx
  0x004152B6: setne    cl
  0x004152B9: mov      ebp, ecx
  0x004152BB: push     esi
  0x004152BC: cmp      ebp, 1
  0x004152BF: jne      0x4152f8
  0x0041524D: mov      edi, dword ptr [esp + 0xa8]
  0x00415254: test     edi, edi
  0x00415256: jne      0x41525d
  0x004150BA: mov      ebp, dword ptr [esp + 0xa8]
  0x004150C1: cmp      ebp, 0x7f73
  0x004150C7: jg       0x4150d8
  0x004156C7: xor      edx, edx
  0x004156C9: mov      dl, byte ptr [ecx + 0x415b10]
  0x004156CF: jmp      dword ptr [edx*4 + 0x415af0]
  0x004159FB: mov      edx, dword ptr [esp + 0x24]
  0x004159FF: push     4
  0x00415A01: call     dword ptr [edx + 0x2c]
  0x00414F07: add      esp, 4
  0x00414F0A: push     eax
  0x00414F0B: push     edi
  0x00414F0C: push     esi
  0x00414F0D: call     0x406cf0
  0x004151B4: test     ebx, ebx
  0x004151B6: jge      0x4151c1
  0x004151BC: mov      ebx, 0x7f73
  0x004151C1: push     esi
  0x004151C2: call     0x406cf0
  0x004154FD: call     0x406cf0
  0x00415534: call     0x406cf0
  0x00415595: xor      edi, edi
  0x00415597: jmp      0x4155da
  0x00415599: add      ebx, 8
  0x0041559C: test     ebx, ebx
  0x0041559E: jne      0x4155a4
  0x004152C1: call     0x406cf0
  0x004152F8: call     0x406cf0
  0x00415258: mov      edi, 0x2fe8208
  0x0041525D: push     esi
  0x0041525E: call     0x406cf0
  0x0041525D: push     esi
  0x0041525E: call     0x406cf0
  0x004150C9: cmp      ebp, 0xffff808d
  0x004150CF: jge      0x4150dd
  0x004150D8: mov      ebp, 0x7f73
  0x004150DD: push     esi
  0x004150DE: call     0x406cf0
  0x00415700: mov      eax, dword ptr [esp + 0xa8]
  0x00415707: xor      ecx, ecx
  0x00415709: test     eax, eax
  0x0041570B: setne    cl
  0x0041570E: mov      dword ptr [esp + 0x28], ecx
  0x00415712: jmp      0x4159fb
  0x00415742: mov      eax, dword ptr [esp + 0xa8]
  0x00415749: test     eax, eax
  0x0041574B: jne      0x4156dd
  0x004156E6: mov      eax, dword ptr [esp + 0xa8]
  0x004156ED: xor      ecx, ecx
  0x004156EF: test     eax, eax
  0x004156F1: setl     cl
  0x004156F4: dec      ecx
  0x004156F5: and      ecx, eax
  0x004156F7: mov      dword ptr [esp + 0x28], ecx
  0x004156FB: jmp      0x4159fb
  0x004157C8: mov      ebx, dword ptr [esp + 0xa4]
  0x004157CF: mov      ebp, 0x3c
  0x004157D4: cmp      ebx, -1
  0x004157D7: je       0x415922
  0x00415732: mov      ecx, dword ptr [esp + 0xa8]
  0x00415739: mov      dword ptr [esp + 0x28], ecx
  0x0041573D: jmp      0x4159fb
  0x004156D6: mov      eax, dword ptr [esp + 0xa8]
  0x004156DD: mov      dword ptr [esp + 0x28], eax
  0x004156E1: jmp      0x4159fb
  0x00415717: mov      edx, dword ptr [esp + 0xa8]
  0x0041571E: mov      eax, dword ptr [esp + 0xac]
  0x00415725: mov      dword ptr [esp + 0x28], edx
  0x00415729: mov      dword ptr [esp + 0x2c], eax
  0x0041572D: jmp      0x4159fb
  0x0041575A: mov      edx, dword ptr [esp + 0xa8]
  0x00415761: xor      esi, esi
  0x00415763: cmp      edx, esi
  0x00415765: jne      0x415774
  0x00415A04: mov      ecx, dword ptr [esp + 0x10]
  0x00415A08: lea      edx, [esp + 0x28]
  0x00415A0C: push     0
  0x00415A0E: push     edx
  0x00415A0F: mov      edx, dword ptr [esp + 0xa8]
  0x00415A16: mov      esi, dword ptr [ecx + 0x1c]
  0x00415A19: add      edx, -8
  0x00415A1C: push     edx
  0x00415A1D: push     ecx
  0x00415A1E: call     eax
  0x00414F12: mov      ecx, dword ptr [esp + 0x28]
  0x00414F16: mov      edx, dword ptr [esp + 0x20]
  0x00414F1A: add      esp, 4
  0x00414F1D: sub      esi, ebx
  0x00414F1F: push     eax
  0x00414F20: push     esi
  0x00414F21: push     ecx
  0x00414F22: lea      ecx, [edx + 0x14]
  0x00414F25: call     0x40e850
  0x004151B8: xor      ebx, ebx
  0x004151BA: jmp      0x4151c1
  0x004151C1: push     esi
  0x004151C2: call     0x406cf0
  0x004151C7: add      esi, eax
  0x004151C9: push     esi
  0x004151CA: call     0x406cf0
  0x00415502: add      esi, eax
  0x00415504: push     esi
  0x00415505: call     0x406cf0
  0x00415539: add      esi, eax
  0x0041553B: push     esi
  0x0041553C: call     0x406cf0
  0x004155DA: mov      ebp, esi
  0x004155DC: push     ebp
  0x004155DD: call     0x406cf0
  0x004155A0: xor      edi, edi
  0x004155A2: jmp      0x4155da
  0x004155A4: mov      edi, dword ptr [ebx - 4]
  0x004155A7: cmp      edi, 4
  0x004155AA: jb       0x4155da
  0x004152C6: add      esi, eax
  0x004152C8: push     esi
  0x004152C9: call     0x406cf0
  0x004152FD: add      esi, eax
  0x004152FF: push     esi
  0x00415300: call     0x406cf0
  0x00415263: add      esi, eax
  0x00415265: push     esi
  0x00415266: call     0x406cf0
  0x004150D1: mov      ebp, 0xffff808d
  0x004150D6: jmp      0x4150dd
  0x004150DD: push     esi
  0x004150DE: call     0x406cf0
  0x004150E3: add      esi, eax
  0x004150E5: push     esi
  0x004150E6: call     0x406cf0
  0x0041574D: mov      dword ptr [esp + 0x28], 0x2fe8208
  0x00415755: jmp      0x4159fb
  0x004156DD: mov      dword ptr [esp + 0x28], eax
  0x004156E1: jmp      0x4159fb
  0x00415922: mov      esi, dword ptr [esp + 0xa8]
  0x00415929: test     esi, esi
  0x0041592B: je       0x4159fb
  0x004157DD: mov      eax, dword ptr [esp + 0x24]
  0x004157E1: push     6
  0x004157E3: call     dword ptr [eax + 0x2c]
  0x00415767: mov      dword ptr [esp + 0x28], esi
  0x0041576B: mov      dword ptr [esp + 0x2c], esi
  0x0041576F: jmp      0x4159fb
  0x00415774: mov      ecx, dword ptr [edx + 4]
  0x00415777: cmp      ax, 0x3f3
  0x0041577B: mov      dword ptr [esp + 0x2c], ecx
  0x0041577F: jne      0x4157bc
  0x00415A20: cmp      eax, 1
  0x00415A23: jne      0x415a89
  0x00414F2A: mov      eax, dword ptr [esp + 0x14]
  0x00414F2E: mov      ecx, ebp
  0x00414F30: push     eax
  0x00414F31: call     0x414d20
  0x004151CF: mov      ecx, dword ptr [esp + 0xa8]
  0x004151D6: add      esp, 8
  0x004151D9: cmp      ecx, 3
  0x004151DC: lea      eax, [esi + eax + 0xc]
  0x004151E0: jne      0x4151e5
  0x0041550A: mov      edx, dword ptr [esi + eax + 0x1c]
  0x0041550E: lea      esi, [esi + eax + 0x1c]
  0x00415512: mov      ecx, dword ptr [esi + edx*4 + 4]
  0x00415516: lea      eax, [esi + edx*4 + 4]
  0x0041551A: lea      esi, [eax + ecx + 4]
  0x0041551E: push     esi
  0x0041551F: call     0x406cf0
  0x00415541: mov      edx, dword ptr [esi + eax + 0x1c]
  0x00415545: lea      esi, [esi + eax + 0x1c]
  0x00415549: mov      ecx, dword ptr [esi + edx*4 + 4]
  0x0041554D: lea      eax, [esi + edx*4 + 4]
  0x00415551: lea      esi, [ecx + eax + 4]
  0x00415555: push     esi
  0x00415556: call     0x406cf0
  0x004155E2: add      ebp, eax
  0x004155E4: push     ebp
  0x004155E5: call     0x406cf0
  0x004155AC: push     edi
  0x004155AD: push     ebx
  0x004155AE: lea      ecx, [esp + 0x40]
  0x004155B2: mov      dword ptr [esp + 0x50], 0
  0x004155BA: call     0x4069d0
  0x004152CE: mov      edx, dword ptr [esi + eax + 0x1c]
  0x004152D2: lea      esi, [esi + eax + 0x1c]
  0x004152D6: mov      ecx, dword ptr [esi + edx*4 + 4]
  0x004152DA: lea      eax, [esi + edx*4 + 4]
  0x004152DE: lea      esi, [ecx + eax + 4]
  0x004152E2: push     esi
  0x004152E3: call     0x406cf0
  0x00415305: mov      edx, dword ptr [esi + eax + 0x1c]
  0x00415309: lea      esi, [esi + eax + 0x1c]
  0x0041530D: mov      ecx, dword ptr [esi + edx*4 + 4]
  0x00415311: lea      eax, [esi + edx*4 + 4]
  0x00415315: lea      esi, [eax + ecx + 4]
  0x00415319: push     esi
  0x0041531A: call     0x406cf0
  0x0041526B: lea      esi, [esi + eax + 0x1c]
  0x0041526F: push     edi
  0x00415270: mov      eax, dword ptr [esi]
  0x00415272: mov      ecx, dword ptr [esi + eax*4 + 4]
  0x00415276: lea      eax, [esi + eax*4 + 4]
  0x0041527A: lea      esi, [ecx + eax + 4]
  0x0041527E: call     0x406cf0
  0x004150EB: lea      esi, [esi + eax + 4]
  0x004150EF: mov      eax, dword ptr [esp + 0xa8]
  0x004150F6: add      esp, 8
  0x004150F9: cmp      eax, 1
  0x004150FC: jne      0x415101
  0x00415931: mov      ecx, 0xf
  0x00415936: xor      eax, eax
  0x00415938: lea      edi, [esp + 0x4c]
  0x0041593C: add      esi, 4
  0x0041593F: rep stosd dword ptr es:[edi], eax
  0x004157E6: mov      edx, dword ptr [esp + 0xa0]
  0x004157ED: lea      ecx, [esp + 0x28]
  0x004157F1: push     ecx
  0x004157F2: mov      ecx, dword ptr [esp + 0x14]
  0x004157F6: add      edx, -8
  0x004157F9: push     edx
  0x004157FA: push     ecx
  0x004157FB: call     eax
  0x00415781: cmp      ecx, 4
  0x00415784: jb       0x4157bc
  0x004157BC: add      edx, 8
  0x004157BF: mov      dword ptr [esp + 0x28], edx
  0x004157C3: jmp      0x4159fb
  0x00415A25: push     esi
  0x00415A26: call     dword ptr [0x4a2558]
  0x00414F36: jmp      0x415aa5
  0x004151E2: add      eax, 4
  0x004151E5: cmp      edi, 1
  0x004151E8: mov      dword ptr [eax], ebx
  0x004151EA: jne      0x415a89
  0x004151E5: cmp      edi, 1
  0x004151E8: mov      dword ptr [eax], ebx
  0x004151EA: jne      0x415a89
  0x00415524: mov      ecx, dword ptr [eax + esi + 4]
  0x00415528: lea      eax, [eax + esi + 4]
  0x0041552C: add      esp, 0xc
  0x0041552F: or       ecx, 2
  0x00415532: jmp      0x415569
  0x0041555B: mov      ecx, dword ptr [eax + esi + 4]
  0x0041555F: lea      eax, [eax + esi + 4]
  0x00415563: add      esp, 0xc
  0x00415566: and      ecx, 0xfffffffd
  0x00415569: cmp      edi, 1
  0x0041556C: mov      dword ptr [eax], ecx
  0x0041556E: jne      0x415a89
  0x004155EA: add      ebp, eax
  0x004155EC: add      esp, 8
  0x004155EF: mov      eax, dword ptr [ebp + 0x14]
  0x004155F2: test     eax, eax
  0x004155F4: je       0x4155fd
  0x004155BF: mov      ebx, dword ptr [esp + 0x48]
  0x004155C3: mov      ebp, dword ptr [esp + 0x40]
  0x004155C7: neg      ebx
  0x004155C9: sbb      ebx, ebx
  0x004155CB: and      ebx, ebp
  0x004155CD: mov      eax, dword ptr [ebx]
  0x004155CF: push     eax
  0x004155D0: call     0x41c6a0
  0x004152E8: mov      ecx, dword ptr [eax + esi + 4]
  0x004152EC: lea      eax, [eax + esi + 4]
  0x004152F0: add      esp, 0xc
  0x004152F3: or       ecx, 1
  0x004152F6: jmp      0x41532d
  0x0041531F: mov      ecx, dword ptr [eax + esi + 4]
  0x00415323: lea      eax, [eax + esi + 4]
  0x00415327: add      esp, 0xc
  0x0041532A: and      ecx, 0xfffffffe
  0x0041532D: cmp      edi, 1
  0x00415330: mov      dword ptr [eax], ecx
  0x00415332: jne      0x415a89
  0x00415283: add      esp, 0xc
  0x00415286: push     eax
  0x00415287: push     edi
  0x00415288: push     esi
  0x00415289: call     0x406cf0
  0x004150FE: add      esi, 4
  0x00415101: cmp      edi, 1
  0x00415104: mov      dword ptr [esi], ebp
  0x00415106: jne      0x415a89
  0x00415101: cmp      edi, 1
  0x00415104: mov      dword ptr [esi], ebp
  0x00415106: jne      0x415a89
  0x00415941: mov      eax, dword ptr [esi - 4]
  0x00415944: mov      ecx, dword ptr [esi]
  0x00415946: neg      ecx
  0x00415948: sbb      ecx, ecx
  0x0041594A: add      esi, 4
  0x0041594D: mov      dword ptr [esp + 0x54], eax
  0x00415951: mov      dword ptr [esp + 0x58], eax
  0x00415955: mov      eax, dword ptr [esi]
  0x00415957: mov      edi, dword ptr [esi + 4]
  0x0041595A: and      ecx, 0x2bc
  0x00415960: test     eax, eax
  0x00415962: setne    dl
  0x00415965: add      esi, 4
  0x00415968: mov      dword ptr [esp + 0x5c], ecx
  0x0041596C: test     edi, edi
  0x0041596E: mov      ecx, dword ptr [esi + 4]
  0x00415971: mov      byte ptr [esp + 0x60], dl
  0x00415975: setne    al
  0x00415978: add      esi, 4
  0x0041597B: mov      byte ptr [esp + 0x62], al
  0x0041597F: test     ecx, ecx
  0x00415981: mov      eax, dword ptr [esi + 4]
  0x00415984: setne    cl
  0x00415987: add      esi, 4
  0x0041598A: xor      edx, edx
  0x0041598C: test     eax, eax
  0x0041598E: setl     dl
  0x00415991: dec      edx
  0x00415992: mov      byte ptr [esp + 0x61], cl
  0x00415996: and      eax, edx
  0x00415998: push     eax
  0x00415999: lea      eax, [esp + 0x50]
  0x0041599D: push     eax
  0x0041599E: call     0x41cef0
  0x0041593F: rep stosd dword ptr es:[edi], eax
  0x004157FD: test     eax, eax
  0x004157FF: je       0x415818
  0x00415786: add      edx, 8
  0x00415789: push     ecx
  0x0041578A: push     edx
  0x0041578B: lea      ecx, [esp + 0x40]
  0x0041578F: mov      dword ptr [esp + 0x50], esi
  0x00415793: call     0x4069d0
  0x00415A2C: test     eax, eax
  0x00415A2E: je       0x415a89
  0x004151F0: mov      esi, dword ptr [esp + 0x10]
  0x004151F4: lea      edx, [esp + 0x28]
  0x004151F8: push     edx
  0x004151F9: mov      eax, dword ptr [esi + 0x1c]
  0x004151FC: push     eax
  0x004151FD: call     dword ptr [0x4a2530]
  0x00415569: cmp      edi, 1
  0x0041556C: mov      dword ptr [eax], ecx
  0x0041556E: jne      0x415a89
  0x00415574: mov      ecx, dword ptr [esp + 0x10]
  0x00415578: xor      edx, edx
  0x0041557A: test     ebx, ebx
  0x0041557C: sete     dl
  0x0041557F: push     edx
  0x00415580: call     0x4975c2
  0x004155FD: test     edi, edi
  0x004155FF: jne      0x415605
  0x004155F6: push     eax
  0x004155F7: call     dword ptr [0x4a2560]
  0x004155D5: add      esp, 4
  0x004155D8: mov      dword ptr [ebx], eax
  0x004155DA: mov      ebp, esi
  0x004155DC: push     ebp
  0x004155DD: call     0x406cf0
  0x0041532D: cmp      edi, 1
  0x00415330: mov      dword ptr [eax], ecx
  0x00415332: jne      0x415a89
  0x00415338: test     ebp, ebp
  0x0041533A: jne      0x41534b
  0x0041528E: mov      edx, dword ptr [esp + 0x28]
  0x00415292: add      esp, 4
  0x00415295: sub      esi, ebx
  0x00415297: push     eax
  0x00415298: mov      eax, dword ptr [esp + 0x20]
  0x0041529C: push     esi
  0x0041529D: push     edx
  0x0041529E: lea      ecx, [eax + 0x14]
  0x004152A1: call     0x40e850
  0x0041510C: mov      edi, dword ptr [esp + 0x10]
  0x00415110: lea      ecx, [esp + 0x28]
  0x00415114: push     ecx
  0x00415115: mov      edx, dword ptr [edi + 0x1c]
  0x00415118: push     edx
  0x00415119: call     dword ptr [0x4a2530]
  0x004159A3: add      esi, 4
  0x004159A6: add      esp, 8
  0x004159A9: mov      esi, dword ptr [esi]
  0x004159AB: test     esi, esi
  0x004159AD: je       0x4159c5
  0x00415818: lea      edx, [esp + 0x4c]
  0x0041581C: push     edx
  0x0041581D: push     ebp
  0x0041581E: push     0x11
  0x00415820: call     dword ptr [0x4a2100]
  0x00415801: cmp      dword ptr [esp + 0x2c], ebp
  0x00415805: jne      0x415818
  0x00415798: mov      esi, dword ptr [esp + 0x48]
  0x0041579C: mov      ebp, dword ptr [esp + 0x40]
  0x004157A0: neg      esi
  0x004157A2: sbb      esi, esi
  0x004157A4: and      esi, ebp
  0x004157A6: mov      edx, dword ptr [esi]
  0x004157A8: push     edx
  0x004157A9: call     0x41c6a0
  0x00415A30: mov      ecx, dword ptr [esp + 0x14]
  0x00415A34: push     0
  0x00415A36: push     esi
  0x00415A37: call     0x40f4c0
  0x00415203: mov      eax, dword ptr [esp + 0xa0]
  0x0041520A: push     0x16
  0x0041520C: cmp      eax, 2
  0x0041520F: jne      0x41522f
  0x00415585: jmp      0x415a89
  0x00415601: xor      eax, eax
  0x00415603: jmp      0x41560f
  0x00415605: push     edi
  0x00415606: push     ebx
  0x00415607: call     0x41cc40
  0x0041533C: mov      ecx, dword ptr [esp + 0x10]
  0x00415340: push     ebp
  0x00415341: call     0x497580
  0x0041534B: mov      esi, dword ptr [esp + 0x9c]
  0x00415352: test     esi, esi
  0x00415354: je       0x4154d1
  0x004152A6: jmp      0x415a89
  0x0041511F: mov      eax, dword ptr [edi + 0x1c]
  0x00415122: push     eax
  0x00415123: call     dword ptr [0x4a254c]
  0x004159C5: lea      edx, [esp + 0x68]
  0x004159C9: mov      edi, 0x2faaf0c
  0x004159CE: or       ecx, 0xffffffff
  0x004159D1: xor      eax, eax
  0x004159D3: repne scasb al, byte ptr es:[edi]
  0x004159AF: push     esi
  0x004159B0: call     0x406cf0
  0x00415826: push     eax
  0x00415827: call     dword ptr [0x4a211c]
  0x00415807: mov      esi, dword ptr [esp + 0x28]
  0x0041580B: mov      ecx, 0xf
  0x00415810: lea      edi, [esp + 0x4c]
  0x00415814: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004157AE: mov      dword ptr [esi], eax
  0x004157B0: add      esp, 4
  0x004157B3: mov      dword ptr [esp + 0x28], esi
  0x004157B7: jmp      0x4159fb
  0x00415A3C: test     eax, eax
  0x00415A3E: mov      dword ptr [esp + 0x1c], eax
  0x00415A42: jle      0x415a89
  0x00415211: mov      ecx, dword ptr [esp + 0x38]
  0x00415215: mov      eax, dword ptr [esp + 0x30]
  0x00415219: sub      ecx, eax
  0x0041521B: push     ecx
  0x0041521C: push     ebx
  0x0041521D: push     0
  0x0041521F: push     0
  0x00415221: push     0
  0x00415223: mov      ecx, esi
  0x00415225: call     0x497531
  0x0041522F: mov      edx, dword ptr [esp + 0x34]
  0x00415233: push     ebx
  0x00415234: mov      ebx, dword ptr [esp + 0x30]
  0x00415238: mov      ecx, esi
  0x0041523A: sub      edx, ebx
  0x0041523C: push     edx
  0x0041523D: push     0
  0x0041523F: push     0
  0x00415241: push     0
  0x00415243: call     0x497531
  0x0041560F: push     esi
  0x00415610: mov      dword ptr [ebp + 0x14], eax
  0x00415613: call     0x406cf0
  0x0041560C: add      esp, 8
  0x0041560F: push     esi
  0x00415610: mov      dword ptr [ebp + 0x14], eax
  0x00415613: call     0x406cf0
  0x00415346: jmp      0x415a89
  0x004154D1: mov      ecx, dword ptr [esp + 0x98]
  0x004154D8: push     1
  0x004154DA: push     ecx
  0x004154DB: mov      ecx, dword ptr [esp + 0x20]
  0x004154DF: call     0x411100
  0x0041535A: mov      edx, dword ptr [esp + 0x14]
  0x0041535E: push     0
  0x00415360: lea      ecx, [edx + 0x14]
  0x00415363: call     0x40e780
  0x00415129: push     eax
  0x0041512A: call     0x494bb2
  0x004159D5: not      ecx
  0x004159D7: sub      edi, ecx
  0x004159D9: mov      esi, edi
  0x004159DB: mov      eax, ecx
  0x004159DD: mov      edi, edx
  0x004159DF: shr      ecx, 2
  0x004159E2: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004159D3: repne scasb al, byte ptr es:[edi]
  0x004159B5: add      esp, 4
  0x004159B8: cmp      eax, 0x20
  0x004159BB: jge      0x4159c5
  0x0041582D: cmp      ebx, 6
  0x00415830: ja       0x4159eb
  0x00415816: jmp      0x41582d
  0x00415814: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00415A44: mov      ecx, edi
  0x00415A46: call     0x412670
  0x0041522A: jmp      0x415a89
  0x00415248: jmp      0x415a89
  0x00415618: add      esi, eax
  0x0041561A: push     esi
  0x0041561B: call     0x406cf0
  0x004154E4: jmp      0x415a89
  0x00415368: cmp      esi, eax
  0x0041536A: je       0x4154d1
  0x0041512F: mov      esi, eax
  0x00415131: test     esi, esi
  0x00415133: je       0x41514f
  0x004159E4: mov      ecx, eax
  0x004159E6: and      ecx, 3
  0x004159E9: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004159E2: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004159BD: lea      edx, [esp + 0x68]
  0x004159C1: mov      edi, esi
  0x004159C3: jmp      0x4159ce
  0x00415836: jmp      dword ptr [ebx*4 + 0x415b2c]
  0x004159EB: mov      edi, dword ptr [esp + 0x18]
  0x004159EF: lea      ecx, [esp + 0x4c]
  0x004159F3: mov      dword ptr [esp + 0x28], ecx
  0x004159F7: mov      dword ptr [esp + 0x2c], ebp
  0x004159FB: mov      edx, dword ptr [esp + 0x24]
  0x004159FF: push     4
  0x00415A01: call     dword ptr [edx + 0x2c]
  0x00415A4B: mov      eax, dword ptr [edi + 0x1d4]
  0x00415A51: mov      ecx, dword ptr [esp + 0x14]
  0x00415A55: mov      edx, dword ptr [esp + 0x98]
  0x00415A5C: inc      eax
  0x00415A5D: mov      dword ptr [edi + 0x1d4], eax
  0x00415A63: mov      eax, dword ptr [esp + 0x1c]
  0x00415A67: push     eax
  0x00415A68: push     ecx
  0x00415A69: push     edx
  0x00415A6A: mov      ecx, edi
  0x00415A6C: call     0x4126d0
  0x00415620: mov      ecx, dword ptr [esi + eax + 0x1c]
  0x00415624: lea      eax, [esi + eax + 0x1c]
  0x00415628: add      esp, 8
  0x0041562B: lea      eax, [eax + ecx*4 + 4]
  0x0041562F: push     edi
  0x00415630: push     ebx
  0x00415631: mov      ecx, dword ptr [eax]
  0x00415633: mov      dword ptr [eax], edi
  0x00415635: mov      edi, dword ptr [esp + 0x30]
  0x00415639: mov      edx, dword ptr [esp + 0x24]
  0x0041563D: sub      eax, edi
  0x0041563F: push     ecx
  0x00415640: add      eax, 4
  0x00415643: push     eax
  0x00415644: mov      eax, dword ptr [esp + 0x24]
  0x00415648: push     edx
  0x00415649: lea      ecx, [eax + 0x14]
  0x0041564C: call     0x40e850
  0x00415370: mov      eax, dword ptr [ebx]
  0x00415372: mov      ecx, dword ptr [esp + 0x18]
  0x00415376: push     0
  0x00415378: push     eax
  0x00415379: call     0x413290
  0x0041514F: mov      eax, dword ptr [esp + 0x34]
  0x00415153: mov      ecx, dword ptr [esp + 0x30]
  0x00415157: mov      edi, dword ptr [esp + 0x2c]
  0x0041515B: mov      ebx, dword ptr [esp + 0x28]
  0x0041515F: mov      edx, eax
  0x00415161: mov      esi, ecx
  0x00415163: sub      edx, edi
  0x00415165: sub      esi, ebx
  0x00415167: cmp      dword ptr [esp + 0xa0], 0
  0x0041516F: jne      0x415180
  0x00415135: mov      ecx, edi
  0x00415137: call     0x497418
  0x004159E9: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004159CE: or       ecx, 0xffffffff
  0x004159D1: xor      eax, eax
  0x004159D3: repne scasb al, byte ptr es:[edi]
  0x004158A3: mov      eax, dword ptr [esp + 0xa8]
  0x004158AA: test     eax, eax
  0x004158AC: setne    dl
  0x004158AF: mov      byte ptr [esp + 0x61], dl
  0x004158B3: jmp      0x4159eb
  0x0041588E: mov      eax, dword ptr [esp + 0xa8]
  0x00415895: test     eax, eax
  0x00415897: setne    cl
  0x0041589A: mov      byte ptr [esp + 0x62], cl
  0x0041589E: jmp      0x4159eb
  0x004158B8: mov      eax, dword ptr [esp + 0xa8]
  0x004158BF: xor      ecx, ecx
  0x004158C1: test     eax, eax
  0x004158C3: setl     cl
  0x004158C6: dec      ecx
  0x004158C7: lea      edx, [esp + 0x4c]
  0x004158CB: and      ecx, eax
  0x004158CD: push     ecx
  0x004158CE: push     edx
  0x004158CF: call     0x41cef0
  0x00415879: mov      eax, dword ptr [esp + 0xa8]
  0x00415880: test     eax, eax
  0x00415882: setne    al
  0x00415885: mov      byte ptr [esp + 0x60], al
  0x00415889: jmp      0x4159eb
  0x004158DC: mov      edx, dword ptr [esp + 0xa8]
  0x004158E3: test     edx, edx
  0x004158E5: jne      0x4158ec
  0x0041583D: mov      eax, dword ptr [esp + 0xa8]
  0x00415844: mov      ecx, 0xe10
  0x00415849: cdq      
  0x0041584A: idiv     ecx
  0x0041584C: test     edx, edx
  0x0041584E: jge      0x415852
  0x0041585F: mov      edx, dword ptr [esp + 0xa8]
  0x00415866: neg      edx
  0x00415868: sbb      edx, edx
  0x0041586A: and      edx, 0x2bc
  0x00415870: mov      dword ptr [esp + 0x5c], edx
  0x00415874: jmp      0x4159eb
  0x00415A71: mov      ecx, edi
  0x00415A73: call     0x412670
  0x00415651: cmp      dword ptr [esp + 0x20], 1
  0x00415656: jne      0x415a89
  0x0041537E: test     eax, eax
  0x00415380: je       0x415a89
  0x00415171: mov      ebx, ebp
  0x00415173: lea      ecx, [esi + ebp]
  0x00415176: mov      dword ptr [esp + 0x28], ebx
  0x0041517A: mov      dword ptr [esp + 0x30], ecx
  0x0041517E: jmp      0x41518d
  0x00415180: mov      edi, ebp
  0x00415182: lea      eax, [edx + ebp]
  0x00415185: mov      dword ptr [esp + 0x2c], edi
  0x00415189: mov      dword ptr [esp + 0x34], eax
  0x0041518D: sub      eax, edi
  0x0041518F: push     1
  0x00415191: sub      ecx, ebx
  0x00415193: push     eax
  0x00415194: push     ecx
  0x00415195: mov      ecx, dword ptr [esp + 0x1c]
  0x00415199: push     edi
  0x0041519A: push     ebx
  0x0041519B: call     0x4974f0
  0x0041513C: test     eax, 0x80000000
  0x00415141: jne      0x41514f
  0x004158D4: add      esp, 8
  0x004158D7: jmp      0x4159eb
  0x004158E7: mov      edx, 0x2fe8208
  0x004158EC: mov      edi, edx
  0x004158EE: or       ecx, 0xffffffff
  0x004158F1: xor      eax, eax
  0x004158F3: repne scasb al, byte ptr es:[edi]
  0x004158EC: mov      edi, edx
  0x004158EE: or       ecx, 0xffffffff
  0x004158F1: xor      eax, eax
  0x004158F3: repne scasb al, byte ptr es:[edi]
  0x00415850: add      edx, ecx
  0x00415852: mov      dword ptr [esp + 0x54], edx
  0x00415856: mov      dword ptr [esp + 0x58], edx
  0x0041585A: jmp      0x4159eb
  0x00415852: mov      dword ptr [esp + 0x54], edx
  0x00415856: mov      dword ptr [esp + 0x58], edx
  0x0041585A: jmp      0x4159eb
  0x00415A78: mov      eax, dword ptr [edi + 0x1d4]
  0x00415A7E: test     eax, eax
  0x00415A80: jle      0x415a89
  0x0041565C: lea      ecx, [esp + 0x28]
  0x00415660: push     ecx
  0x00415661: call     dword ptr [0x4a2570]
  0x00415386: mov      ecx, dword ptr [eax + 0x14]
  0x00415389: test     ch, 0x80
  0x0041538C: jne      0x415a89
  0x0041518D: sub      eax, edi
  0x0041518F: push     1
  0x00415191: sub      ecx, ebx
  0x00415193: push     eax
  0x00415194: push     ecx
  0x00415195: mov      ecx, dword ptr [esp + 0x1c]
  0x00415199: push     edi
  0x0041519A: push     ebx
  0x0041519B: call     0x4974f0
  0x004151A0: jmp      0x415a89
  0x00415143: lea      ecx, [esp + 0x28]
  0x00415147: push     ecx
  0x00415148: mov      ecx, esi
  0x0041514A: call     0x4999e3
  0x004158F5: not      ecx
  0x004158F7: dec      ecx
  0x004158F8: test     ecx, ecx
  0x004158FA: jle      0x415901
  0x004158F3: repne scasb al, byte ptr es:[edi]
  0x00415A82: dec      eax
  0x00415A83: mov      dword ptr [edi + 0x1d4], eax
  0x00415A89: lea      ecx, [esp + 0x38]
  0x00415A8D: mov      dword ptr [esp + 0x90], 0xffffffff
  0x00415A98: mov      dword ptr [esp + 0x38], 0x2f95460
  0x00415AA0: call     0x4064a0
  0x00415667: mov      edx, dword ptr [esp + 0x2c]
  0x0041566B: mov      eax, dword ptr [esp + 0x28]
  0x0041566F: push     edx
  0x00415670: push     eax
  0x00415671: call     dword ptr [0x4a2508]
  0x00415392: mov      ebp, 1
  0x00415397: mov      dword ptr [esp + 0x18], 0
  0x0041539F: mov      ecx, dword ptr [esp + 0x18]
  0x004153A3: push     0
  0x004153A5: mov      eax, ecx
  0x004153A7: inc      ecx
  0x004153A8: mov      dword ptr [esp + 0x1c], ecx
  0x004153AC: mov      ecx, dword ptr [esp + 0x18]
  0x004153B0: push     eax
  0x004153B1: add      ecx, 0x14
  0x004153B4: call     0x40e730
  0x00415901: mov      edx, 0x2faaf0c
  0x00415906: mov      edi, edx
  0x00415908: or       ecx, 0xffffffff
  0x0041590B: xor      eax, eax
  0x0041590D: lea      ebx, [esp + 0x68]
  0x00415911: repne scasb al, byte ptr es:[edi]
  0x004158FC: cmp      ecx, 0x20
  0x004158FF: jl       0x415906
  0x00415677: jmp      0x415a89
  0x004153B9: test     eax, eax
  0x004153BB: je       0x4154b8
  0x00415913: not      ecx
  0x00415915: sub      edi, ecx
  0x00415917: mov      esi, edi
  0x00415919: mov      eax, ecx
  0x0041591B: mov      edi, ebx
  0x0041591D: jmp      0x4159df
  0x00415911: repne scasb al, byte ptr es:[edi]
  0x00415906: mov      edi, edx
  0x00415908: or       ecx, 0xffffffff
  0x0041590B: xor      eax, eax
  0x0041590D: lea      ebx, [esp + 0x68]
  0x00415911: repne scasb al, byte ptr es:[edi]
  0x004154B8: cmp      ebp, 1
  0x004154BB: jne      0x415a89
  0x004153C1: cmp      dword ptr [eax], 0x10015
  0x004153C7: jne      0x41539f
  0x004159DF: shr      ecx, 2
  0x004159E2: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x004154C1: mov      ecx, dword ptr [esp + 0x10]
  0x004154C5: push     5
  0x004154C7: call     0x497580
  0x004153C9: lea      ebx, [eax + 0x18]
  0x004153CC: mov      esi, ebx
  0x004153CE: push     esi
  0x004153CF: call     0x406cf0
  0x0041539F: mov      ecx, dword ptr [esp + 0x18]
  0x004153A3: push     0
  0x004153A5: mov      eax, ecx
  0x004153A7: inc      ecx
  0x004153A8: mov      dword ptr [esp + 0x1c], ecx
  0x004153AC: mov      ecx, dword ptr [esp + 0x18]
  0x004153B0: push     eax
  0x004153B1: add      ecx, 0x14
  0x004153B4: call     0x40e730
  0x004154CC: jmp      0x415a89
  0x004153D4: add      esi, eax
  0x004153D6: push     esi
  0x004153D7: call     0x406cf0
  0x004153DC: mov      edx, dword ptr [esp + 0xa4]
  0x004153E3: add      esi, eax
  0x004153E5: push     edx
  0x004153E6: lea      edi, [esi + 0x1c]
  0x004153E9: mov      esi, dword ptr [esi + 0x1c]
  0x004153EC: add      edi, 4
  0x004153EF: push     esi
  0x004153F0: push     edi
  0x004153F1: call     0x406d80
  0x004153F6: add      esp, 0x14
  0x004153F9: cmp      eax, -1
  0x004153FC: je       0x41539f
  0x004153FE: push     ebx
  0x004153FF: call     0x406cf0
  0x00415404: add      ebx, eax
  0x00415406: push     ebx
  0x00415407: call     0x406cf0
  0x0041540C: add      ebx, eax
  0x0041540E: add      esp, 8
  0x00415411: mov      ebx, dword ptr [ebx]
  0x00415413: test     ebx, ebx
  0x00415415: je       0x4154b8
  0x0041541B: mov      eax, dword ptr [ebx + 0x1c]
  0x0041541E: push     eax
  0x0041541F: call     dword ptr [0x4a2558]
  0x00415425: test     eax, eax
  0x00415427: je       0x4154b8
  0x0041542D: mov      ecx, ebx
  0x0041542F: call     0x408280
  0x00415434: test     eax, eax
  0x00415436: jge      0x41543c
  0x00415438: xor      eax, eax
  0x0041543A: jmp      0x415443
  0x0041543C: mov      ecx, ebx
  0x0041543E: call     0x408280
  0x00415443: mov      ebx, dword ptr [esp + 0x9c]
  0x0041544A: mov      ecx, edi
  0x0041544C: xor      ebp, ebp
  0x0041544E: xor      edi, edi
  0x00415450: test     eax, eax
  0x00415452: jle      0x41547e
  0x0041547E: test     edi, edi
  0x00415480: jne      0x41539f
  0x00415454: mov      edx, dword ptr [ecx]
  0x00415456: test     edx, edx
  0x00415458: je       0x415470
  0x00415486: test     esi, esi
  0x00415488: jle      0x41539f
  0x00415470: add      ecx, 4
  0x00415473: dec      esi
  0x00415474: dec      eax
  0x00415475: test     edi, edi
  0x00415477: je       0x415450
  0x0041545A: cmp      edx, ebx
  0x0041545C: je       0x41546b
  0x0041548E: mov      eax, dword ptr [ecx]
  0x00415490: test     eax, eax
  0x00415492: je       0x41539f
  0x00415450: test     eax, eax
  0x00415452: jle      0x41547e
  0x00415479: jmp      0x41539f
  0x0041546B: mov      edi, 1
  0x00415470: add      ecx, 4
  0x00415473: dec      esi
  0x00415474: dec      eax
  0x00415475: test     edi, edi
  0x00415477: je       0x415450
  0x0041545E: mov      edx, dword ptr [ecx + 4]
  0x00415461: add      ecx, 4
  0x00415464: dec      esi
  0x00415465: test     edx, edx
  0x00415467: jne      0x41545a
  0x00415498: cmp      eax, dword ptr [esp + 0x9c]
  0x0041549F: je       0x4154ae
  0x00415469: jmp      0x415470
  0x004154AE: mov      ebp, 1
  0x004154B3: jmp      0x41539f
  0x004154A1: dec      esi
  0x004154A2: add      ecx, 4
  0x004154A5: test     esi, esi
  0x004154A7: jg       0x41548e
  0x004154A9: jmp      0x41539f

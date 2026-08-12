/**
 * Function: sub_416a60
 * Address: 0x00416A60
 * Blocks: 144
 * Instructions: 678
 * Analyzed with angr + capstone
 */
void* sub_416a60(void) {

  /* Block 1 @ 0x00416A60 */
  // sub esp, 0x10
  // push ebp
  // push esi
  // mov esi, dword ptr [esp + 0x1c]
  // xor ebp, ebp
  // CMP esi, ebp (set flags)
  // if (not equal) goto 0x416a79
  /* Block 2 @ 0x00416A6F */
  // pop esi
  // xor eax, eax
  // pop ebp
  // add esp, 0x10
  return;
  /* Block 3 @ 0x00416A79 */
  // mov eax, dword ptr [esp + 0x28]
  // CMP eax, ebp (set flags)
  // if (equal) goto 0x416a83
  /* Block 4 @ 0x00416A83 */
  // mov eax, dword ptr [esp + 0x20]
  // push ebx
  // CMP eax, 0x17 (set flags)
  // push edi
  // if (above) goto 0x417099
  /* Block 5 @ 0x00416A81 */
  // mov dword ptr [eax], ebp
  // mov eax, dword ptr [esp + 0x20]
  // push ebx
  // CMP eax, 0x17 (set flags)
  // push edi
  // if (above) goto 0x417099
  /* Block 6 @ 0x00416A92 */
  goto dword ptr [eax*4 + 0x4170a8];
  /* Block 7 @ 0x00417099 */
  // pop edi
  // pop ebx
  // pop esi
  // xor eax, eax
  // pop ebp
  // add esp, 0x10
  return;
  /* Block 8 @ 0x00416D03 */
  // mov ecx, dword ptr [esp + 0x2c]
  // mov eax, dword ptr [ecx]
  // CMP eax, 3 (set flags)
  // if (greater) goto 0x416d1b
  /* Block 9 @ 0x00417087 */
  // mov ecx, dword ptr [esp + 0x2c]
  // mov edx, dword ptr [ecx]
  // lea ecx, [esi + 0xcc]
  // push edx
  // call 0x00493313
  call(0x00493313);
  /* Block 10 @ 0x00416F0B */
  // mov ecx, dword ptr [esp + 0x2c]
  // pop edi
  // pop ebx
  // xor eax, eax
  // mov edx, dword ptr [ecx]
  // mov dword ptr [esi + 0xb4], edx
  // pop esi
  // pop ebp
  // add esp, 0x10
  return;
  /* Block 11 @ 0x00416A99 */
  // mov edi, dword ptr [esp + 0x2c]
  // lea ecx, [esi + 0x40]
  // mov eax, dword ptr [edi]
  // push eax
  // call 0x00493313
  call(0x00493313);
  /* Block 12 @ 0x00416E1A */
  // mov ecx, dword ptr [esp + 0x2c]
  // mov eax, dword ptr [ecx]
  // CMP eax, ebp (set flags)
  // mov dword ptr [esi + 0x74], eax
  // if (not equal) goto 0x416e5c
  /* Block 13 @ 0x00416C1E */
  // push esi
  // call 0x00416350
  call(0x00416350);
  /* Block 14 @ 0x00416FA0 */
  // mov eax, dword ptr [esp + 0x2c]
  // mov ecx, dword ptr [esi + 0x1c]
  // mov ebx, dword ptr [0x4a2568]
  // push 0x13
  // mov edx, dword ptr [eax]
  // push ebp
  // mov dword ptr [esi + 0xc4], edx
  // mov eax, dword ptr [eax]
  // dec eax
  // push ebp
  // push ebp
  // dec eax
  // push ebp
  // push eax
  // push ecx
  // call ebx
  call(ebx);
  /* Block 15 @ 0x00416F23 */
  // mov eax, dword ptr [esp + 0x2c]
  // pop edi
  // pop ebx
  // mov ecx, dword ptr [eax]
  // xor eax, eax
  // mov dword ptr [esi + 0xb8], ecx
  // pop esi
  // pop ebp
  // add esp, 0x10
  return;
  /* Block 16 @ 0x00416EA5 */
  // mov edx, dword ptr [esp + 0x2c]
  // pop edi
  // pop ebx
  // mov eax, dword ptr [edx]
  // mov dword ptr [esi + 0xa4], eax
  // pop esi
  // xor eax, eax
  // pop ebp
  // add esp, 0x10
  return;
  /* Block 17 @ 0x00416CAF */
  // mov ecx, dword ptr [esp + 0x2c]
  // mov edx, dword ptr [ecx]
  // mov ecx, esi
  // mov dword ptr [esi + 0x6c], edx
  // call 0x004169F0
  call(0x004169F0);
  /* Block 18 @ 0x00416F3B */
  // mov edx, dword ptr [esp + 0x2c]
  // pop edi
  // pop ebx
  // mov eax, dword ptr [edx]
  // mov dword ptr [esi + 0xbc], eax
  // pop esi
  // xor eax, eax
  // pop ebp
  // add esp, 0x10
  return;
  /* Block 19 @ 0x00416EBD */
  // mov ecx, dword ptr [esp + 0x2c]
  // pop edi
  // pop ebx
  // xor eax, eax
  // mov edx, dword ptr [ecx]
  // mov dword ptr [esi + 0xa8], edx
  // pop esi
  // pop ebp
  // add esp, 0x10
  return;
  /* Block 20 @ 0x00416AC5 */
  // mov edx, dword ptr [esp + 0x2c]
  // mov eax, dword ptr [edx]
  // CMP eax, 6 (set flags)
  // if (greater) goto 0x416add
  /* Block 21 @ 0x00416CCB */
  // mov eax, dword ptr [esp + 0x2c]
  // mov ecx, dword ptr [eax]
  // mov dword ptr [esi + 0x64], ecx
  // mov ecx, esi
  // call 0x004169F0
  call(0x004169F0);
  /* Block 22 @ 0x00416B50 */
  // mov eax, dword ptr [esp + 0x2c]
  // push ebp
  // mov ecx, dword ptr [eax]
  // mov dword ptr [esi + 0x48], ecx
  // mov ecx, esi
  // call 0x0041AF90
  call(0x0041AF90);
  /* Block 23 @ 0x00416F53 */
  // mov ecx, dword ptr [esp + 0x2c]
  // mov eax, dword ptr [ecx]
  // CMP eax, 0x1d (set flags)
  // if (greater) goto 0x416f82
  /* Block 24 @ 0x00416C55 */
  // push esi
  // call 0x00416350
  call(0x00416350);
  /* Block 25 @ 0x00416ED5 */
  // mov eax, dword ptr [esp + 0x2c]
  // pop edi
  // pop ebx
  // mov ecx, dword ptr [eax]
  // xor eax, eax
  // mov dword ptr [esi + 0xac], ecx
  // pop esi
  // pop ebp
  // add esp, 0x10
  return;
  /* Block 26 @ 0x00416BDF */
  // mov edx, dword ptr [esp + 0x2c]
  // mov eax, dword ptr [edx]
  // CMP eax, 3 (set flags)
  // if (greater) goto 0x416bf7
  /* Block 27 @ 0x00416CE7 */
  // mov edx, dword ptr [esp + 0x2c]
  // mov ecx, esi
  // mov eax, dword ptr [edx]
  // mov dword ptr [esi + 0x68], eax
  // call 0x004169F0
  call(0x004169F0);
  /* Block 28 @ 0x00416B6D */
  // mov eax, dword ptr [esp + 0x2c]
  // lea ecx, [esi + 0x4c]
  // mov edx, dword ptr [eax + 4]
  // mov eax, dword ptr [eax]
  // push edx
  // push eax
  // mov dword ptr [ecx + 0x10], ebp
  // call 0x004069D0
  call(0x004069D0);
  /* Block 29 @ 0x00416EED */
  // mov edx, dword ptr [esp + 0x2c]
  // lea ecx, [esi + 0xb0]
  // mov eax, dword ptr [edx]
  // push eax
  // call 0x00493313
  call(0x00493313);
  /* Block 30 @ 0x0041706F */
  // mov edx, dword ptr [esp + 0x2c]
  // pop edi
  // pop ebx
  // mov eax, dword ptr [edx]
  // mov dword ptr [esi + 0xc8], eax
  // pop esi
  // xor eax, eax
  // pop ebp
  // add esp, 0x10
  return;
  /* Block 31 @ 0x00416E7A */
  // mov eax, dword ptr [esp + 0x2c]
  // lea ecx, [esi + 0x78]
  // mov edx, dword ptr [eax + 4]
  // mov eax, dword ptr [eax]
  // push edx
  // push eax
  // mov dword ptr [ecx + 0x10], ebp
  // call 0x004069D0
  call(0x004069D0);
  /* Block 32 @ 0x00416D0E */
  // CMP eax, ebp (set flags)
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00416A60: sub      esp, 0x10
  0x00416A63: push     ebp
  0x00416A64: push     esi
  0x00416A65: mov      esi, dword ptr [esp + 0x1c]
  0x00416A69: xor      ebp, ebp
  0x00416A6B: cmp      esi, ebp
  0x00416A6D: jne      0x416a79
  0x00416A6F: pop      esi
  0x00416A70: xor      eax, eax
  0x00416A72: pop      ebp
  0x00416A73: add      esp, 0x10
  0x00416A76: ret      0x10
  0x00416A79: mov      eax, dword ptr [esp + 0x28]
  0x00416A7D: cmp      eax, ebp
  0x00416A7F: je       0x416a83
  0x00416A83: mov      eax, dword ptr [esp + 0x20]
  0x00416A87: push     ebx
  0x00416A88: cmp      eax, 0x17
  0x00416A8B: push     edi
  0x00416A8C: ja       0x417099
  0x00416A81: mov      dword ptr [eax], ebp
  0x00416A83: mov      eax, dword ptr [esp + 0x20]
  0x00416A87: push     ebx
  0x00416A88: cmp      eax, 0x17
  0x00416A8B: push     edi
  0x00416A8C: ja       0x417099
  0x00416A92: jmp      dword ptr [eax*4 + 0x4170a8]
  0x00417099: pop      edi
  0x0041709A: pop      ebx
  0x0041709B: pop      esi
  0x0041709C: xor      eax, eax
  0x0041709E: pop      ebp
  0x0041709F: add      esp, 0x10
  0x004170A2: ret      0x10
  0x00416D03: mov      ecx, dword ptr [esp + 0x2c]
  0x00416D07: mov      eax, dword ptr [ecx]
  0x00416D09: cmp      eax, 3
  0x00416D0C: jg       0x416d1b
  0x00417087: mov      ecx, dword ptr [esp + 0x2c]
  0x0041708B: mov      edx, dword ptr [ecx]
  0x0041708D: lea      ecx, [esi + 0xcc]
  0x00417093: push     edx
  0x00417094: call     0x493313
  0x00416F0B: mov      ecx, dword ptr [esp + 0x2c]
  0x00416F0F: pop      edi
  0x00416F10: pop      ebx
  0x00416F11: xor      eax, eax
  0x00416F13: mov      edx, dword ptr [ecx]
  0x00416F15: mov      dword ptr [esi + 0xb4], edx
  0x00416F1B: pop      esi
  0x00416F1C: pop      ebp
  0x00416F1D: add      esp, 0x10
  0x00416F20: ret      0x10
  0x00416A99: mov      edi, dword ptr [esp + 0x2c]
  0x00416A9D: lea      ecx, [esi + 0x40]
  0x00416AA0: mov      eax, dword ptr [edi]
  0x00416AA2: push     eax
  0x00416AA3: call     0x493313
  0x00416E1A: mov      ecx, dword ptr [esp + 0x2c]
  0x00416E1E: mov      eax, dword ptr [ecx]
  0x00416E20: cmp      eax, ebp
  0x00416E22: mov      dword ptr [esi + 0x74], eax
  0x00416E25: jne      0x416e5c
  0x00416C1E: push     esi
  0x00416C1F: call     0x416350
  0x00416FA0: mov      eax, dword ptr [esp + 0x2c]
  0x00416FA4: mov      ecx, dword ptr [esi + 0x1c]
  0x00416FA7: mov      ebx, dword ptr [0x4a2568]
  0x00416FAD: push     0x13
  0x00416FAF: mov      edx, dword ptr [eax]
  0x00416FB1: push     ebp
  0x00416FB2: mov      dword ptr [esi + 0xc4], edx
  0x00416FB8: mov      eax, dword ptr [eax]
  0x00416FBA: dec      eax
  0x00416FBB: push     ebp
  0x00416FBC: neg      eax
  0x00416FBE: sbb      eax, eax
  0x00416FC0: push     ebp
  0x00416FC1: dec      eax
  0x00416FC2: push     ebp
  0x00416FC3: push     eax
  0x00416FC4: push     ecx
  0x00416FC5: call     ebx
  0x00416F23: mov      eax, dword ptr [esp + 0x2c]
  0x00416F27: pop      edi
  0x00416F28: pop      ebx
  0x00416F29: mov      ecx, dword ptr [eax]
  0x00416F2B: xor      eax, eax
  0x00416F2D: mov      dword ptr [esi + 0xb8], ecx
  0x00416F33: pop      esi
  0x00416F34: pop      ebp
  0x00416F35: add      esp, 0x10
  0x00416F38: ret      0x10
  0x00416EA5: mov      edx, dword ptr [esp + 0x2c]
  0x00416EA9: pop      edi
  0x00416EAA: pop      ebx
  0x00416EAB: mov      eax, dword ptr [edx]
  0x00416EAD: mov      dword ptr [esi + 0xa4], eax
  0x00416EB3: pop      esi
  0x00416EB4: xor      eax, eax
  0x00416EB6: pop      ebp
  0x00416EB7: add      esp, 0x10
  0x00416EBA: ret      0x10
  0x00416CAF: mov      ecx, dword ptr [esp + 0x2c]
  0x00416CB3: mov      edx, dword ptr [ecx]
  0x00416CB5: mov      ecx, esi
  0x00416CB7: mov      dword ptr [esi + 0x6c], edx
  0x00416CBA: call     0x4169f0
  0x00416F3B: mov      edx, dword ptr [esp + 0x2c]
  0x00416F3F: pop      edi
  0x00416F40: pop      ebx
  0x00416F41: mov      eax, dword ptr [edx]
  0x00416F43: mov      dword ptr [esi + 0xbc], eax
  0x00416F49: pop      esi
  0x00416F4A: xor      eax, eax
  0x00416F4C: pop      ebp
  0x00416F4D: add      esp, 0x10
  0x00416F50: ret      0x10
  0x00416EBD: mov      ecx, dword ptr [esp + 0x2c]
  0x00416EC1: pop      edi
  0x00416EC2: pop      ebx
  0x00416EC3: xor      eax, eax
  0x00416EC5: mov      edx, dword ptr [ecx]
  0x00416EC7: mov      dword ptr [esi + 0xa8], edx
  0x00416ECD: pop      esi
  0x00416ECE: pop      ebp
  0x00416ECF: add      esp, 0x10
  0x00416ED2: ret      0x10
  0x00416AC5: mov      edx, dword ptr [esp + 0x2c]
  0x00416AC9: mov      eax, dword ptr [edx]
  0x00416ACB: cmp      eax, 6
  0x00416ACE: jg       0x416add
  0x00416CCB: mov      eax, dword ptr [esp + 0x2c]
  0x00416CCF: mov      ecx, dword ptr [eax]
  0x00416CD1: mov      dword ptr [esi + 0x64], ecx
  0x00416CD4: mov      ecx, esi
  0x00416CD6: call     0x4169f0
  0x00416B50: mov      eax, dword ptr [esp + 0x2c]
  0x00416B54: push     ebp
  0x00416B55: mov      ecx, dword ptr [eax]
  0x00416B57: mov      dword ptr [esi + 0x48], ecx
  0x00416B5A: mov      ecx, esi
  0x00416B5C: call     0x41af90
  0x00416F53: mov      ecx, dword ptr [esp + 0x2c]
  0x00416F57: mov      eax, dword ptr [ecx]
  0x00416F59: cmp      eax, 0x1d
  0x00416F5C: jg       0x416f82
  0x00416C55: push     esi
  0x00416C56: call     0x416350
  0x00416ED5: mov      eax, dword ptr [esp + 0x2c]
  0x00416ED9: pop      edi
  0x00416EDA: pop      ebx
  0x00416EDB: mov      ecx, dword ptr [eax]
  0x00416EDD: xor      eax, eax
  0x00416EDF: mov      dword ptr [esi + 0xac], ecx
  0x00416EE5: pop      esi
  0x00416EE6: pop      ebp
  0x00416EE7: add      esp, 0x10
  0x00416EEA: ret      0x10
  0x00416BDF: mov      edx, dword ptr [esp + 0x2c]
  0x00416BE3: mov      eax, dword ptr [edx]
  0x00416BE5: cmp      eax, 3
  0x00416BE8: jg       0x416bf7
  0x00416CE7: mov      edx, dword ptr [esp + 0x2c]
  0x00416CEB: mov      ecx, esi
  0x00416CED: mov      eax, dword ptr [edx]
  0x00416CEF: mov      dword ptr [esi + 0x68], eax
  0x00416CF2: call     0x4169f0
  0x00416B6D: mov      eax, dword ptr [esp + 0x2c]
  0x00416B71: lea      ecx, [esi + 0x4c]
  0x00416B74: mov      edx, dword ptr [eax + 4]
  0x00416B77: mov      eax, dword ptr [eax]
  0x00416B79: push     edx
  0x00416B7A: push     eax
  0x00416B7B: mov      dword ptr [ecx + 0x10], ebp
  0x00416B7E: call     0x4069d0
  0x00416EED: mov      edx, dword ptr [esp + 0x2c]
  0x00416EF1: lea      ecx, [esi + 0xb0]
  0x00416EF7: mov      eax, dword ptr [edx]
  0x00416EF9: push     eax
  0x00416EFA: call     0x493313
  0x0041706F: mov      edx, dword ptr [esp + 0x2c]
  0x00417073: pop      edi
  0x00417074: pop      ebx
  0x00417075: mov      eax, dword ptr [edx]
  0x00417077: mov      dword ptr [esi + 0xc8], eax
  0x0041707D: pop      esi
  0x0041707E: xor      eax, eax
  0x00417080: pop      ebp
  0x00417081: add      esp, 0x10
  0x00417084: ret      0x10
  0x00416E7A: mov      eax, dword ptr [esp + 0x2c]
  0x00416E7E: lea      ecx, [esi + 0x78]
  0x00416E81: mov      edx, dword ptr [eax + 4]
  0x00416E84: mov      eax, dword ptr [eax]
  0x00416E86: push     edx
  0x00416E87: push     eax
  0x00416E88: mov      dword ptr [ecx + 0x10], ebp
  0x00416E8B: call     0x4069d0
  0x00416D0E: cmp      eax, ebp
  0x00416D10: jge      0x416d16
  0x00416D1B: mov      eax, 3
  0x00416D20: mov      edx, dword ptr [esi + 0x1c]
  0x00416D23: mov      dword ptr [esi + 0x70], eax
  0x00416D26: push     edx
  0x00416D27: call     dword ptr [0x4a24ec]
  0x00416AA8: mov      ecx, dword ptr [edi]
  0x00416AAA: push     ecx
  0x00416AAB: mov      ecx, esi
  0x00416AAD: call     0x4974ae
  0x00416E27: mov      edx, dword ptr [esi + 0x1c]
  0x00416E2A: push     ebp
  0x00416E2B: push     edx
  0x00416E2C: call     dword ptr [0x4a2420]
  0x00416E5C: mov      ecx, dword ptr [esi + 0x1c]
  0x00416E5F: push     1
  0x00416E61: push     ecx
  0x00416E62: call     dword ptr [0x4a2420]
  0x00416C24: mov      eax, dword ptr [esp + 0x30]
  0x00416C28: add      esp, 4
  0x00416C2B: lea      ecx, [esi + 0x8c]
  0x00416C31: mov      edx, dword ptr [eax + 4]
  0x00416C34: mov      eax, dword ptr [eax]
  0x00416C36: push     edx
  0x00416C37: push     eax
  0x00416C38: mov      dword ptr [ecx + 0x10], ebp
  0x00416C3B: call     0x4069d0
  0x00416FC7: cmp      dword ptr [esi + 0xc4], ebp
  0x00416FCD: jne      0x417099
  0x00416CBF: pop      edi
  0x00416CC0: pop      ebx
  0x00416CC1: pop      esi
  0x00416CC2: xor      eax, eax
  0x00416CC4: pop      ebp
  0x00416CC5: add      esp, 0x10
  0x00416CC8: ret      0x10
  0x00416AD0: cmp      eax, ebp
  0x00416AD2: jge      0x416ad8
  0x00416ADD: mov      eax, 6
  0x00416AE2: xor      ecx, ecx
  0x00416AE4: xor      edi, edi
  0x00416AE6: cmp      eax, ebp
  0x00416AE8: mov      dword ptr [esi + 0x44], eax
  0x00416AEB: je       0x416af2
  0x00416CDB: pop      edi
  0x00416CDC: pop      ebx
  0x00416CDD: pop      esi
  0x00416CDE: xor      eax, eax
  0x00416CE0: pop      ebp
  0x00416CE1: add      esp, 0x10
  0x00416CE4: ret      0x10
  0x00416B61: pop      edi
  0x00416B62: pop      ebx
  0x00416B63: pop      esi
  0x00416B64: xor      eax, eax
  0x00416B66: pop      ebp
  0x00416B67: add      esp, 0x10
  0x00416B6A: ret      0x10
  0x00416F5E: cmp      eax, ebp
  0x00416F60: jge      0x416f7d
  0x00416F82: mov      eax, 0x1d
  0x00416F87: mov      ecx, esi
  0x00416F89: mov      dword ptr [esi + 0xc0], eax
  0x00416F8F: call     0x418030
  0x00416C5B: mov      eax, dword ptr [esp + 0x30]
  0x00416C5F: add      esp, 4
  0x00416C62: mov      eax, dword ptr [eax]
  0x00416C64: cmp      eax, 2
  0x00416C67: jg       0x416c8f
  0x00416BEA: cmp      eax, ebp
  0x00416BEC: jge      0x416bf2
  0x00416BF7: mov      eax, 3
  0x00416BFC: mov      dword ptr [esi + 0x60], eax
  0x00416BFF: mov      eax, dword ptr [esi + 0x5c]
  0x00416C02: cmp      eax, ebp
  0x00416C04: je       0x417099
  0x00416CF7: pop      edi
  0x00416CF8: pop      ebx
  0x00416CF9: pop      esi
  0x00416CFA: xor      eax, eax
  0x00416CFC: pop      ebp
  0x00416CFD: add      esp, 0x10
  0x00416D00: ret      0x10
  0x00416B83: mov      edi, dword ptr [esi + 0xec]
  0x00416B89: cmp      edi, ebp
  0x00416B8B: je       0x416bcb
  0x00416EFF: pop      edi
  0x00416F00: pop      ebx
  0x00416F01: pop      esi
  0x00416F02: xor      eax, eax
  0x00416F04: pop      ebp
  0x00416F05: add      esp, 0x10
  0x00416F08: ret      0x10
  0x00416E90: push     esi
  0x00416E91: call     0x416480
  0x00416D12: xor      eax, eax
  0x00416D14: jmp      0x416d20
  0x00416D16: cmp      eax, 3
  0x00416D19: jle      0x416d20
  0x00416D2D: test     eax, eax
  0x00416D2F: je       0x417099
  0x00416AB2: mov      ecx, esi
  0x00416AB4: call     0x4169f0
  0x00416E32: push     eax
  0x00416E33: call     0x49853e
  0x00416E68: push     eax
  0x00416E69: call     0x49853e
  0x00416C40: push     esi
  0x00416C41: call     0x4163c0
  0x00416FD3: push     0
  0x00416FD5: push     0
  0x00416FD7: push     0x3e9
  0x00416FDC: call     0x413d70
  0x00416AD4: xor      eax, eax
  0x00416AD6: jmp      0x416ae2
  0x00416AD8: cmp      eax, 6
  0x00416ADB: jle      0x416ae2
  0x00416AF2: dec      eax
  0x00416AF3: cmp      eax, 5
  0x00416AF6: ja       0x416b1f
  0x00416AED: mov      edi, 0x400000
  0x00416AF2: dec      eax
  0x00416AF3: cmp      eax, 5
  0x00416AF6: ja       0x416b1f
  0x00416F62: xor      eax, eax
  0x00416F64: mov      ecx, esi
  0x00416F66: mov      dword ptr [esi + 0xc0], eax
  0x00416F6C: call     0x418030
  0x00416F7D: cmp      eax, 0x1d
  0x00416F80: jle      0x416f87
  0x00416F94: pop      edi
  0x00416F95: pop      ebx
  0x00416F96: pop      esi
  0x00416F97: xor      eax, eax
  0x00416F99: pop      ebp
  0x00416F9A: add      esp, 0x10
  0x00416F9D: ret      0x10
  0x00416C69: cmp      eax, ebp
  0x00416C6B: jge      0x416c8a
  0x00416C8F: mov      eax, 2
  0x00416C94: push     esi
  0x00416C95: mov      dword ptr [esi + 0xa0], eax
  0x00416C9B: call     0x4163c0
  0x00416BEE: xor      eax, eax
  0x00416BF0: jmp      0x416bfc
  0x00416BF2: cmp      eax, 3
  0x00416BF5: jle      0x416bfc
  0x00416C0A: push     ebp
  0x00416C0B: mov      ecx, esi
  0x00416C0D: call     0x41af90
  0x00416BCB: push     ebp
  0x00416BCC: mov      ecx, esi
  0x00416BCE: call     0x41af90
  0x00416B8D: mov      eax, dword ptr [edi + 0xc]
  0x00416B90: mov      dword ptr [edi], ebp
  0x00416B92: cmp      eax, ebp
  0x00416B94: mov      dword ptr [edi + 4], ebp
  0x00416B97: mov      dword ptr [edi + 8], ebp
  0x00416B9A: mov      dword ptr [edi + 0x14], ebp
  0x00416B9D: je       0x416ba9
  0x00416E96: add      esp, 4
  0x00416E99: xor      eax, eax
  0x00416E9B: pop      edi
  0x00416E9C: pop      ebx
  0x00416E9D: pop      esi
  0x00416E9E: pop      ebp
  0x00416E9F: add      esp, 0x10
  0x00416EA2: ret      0x10
  0x00416D20: mov      edx, dword ptr [esi + 0x1c]
  0x00416D23: mov      dword ptr [esi + 0x70], eax
  0x00416D26: push     edx
  0x00416D27: call     dword ptr [0x4a24ec]
  0x00416D35: mov      eax, dword ptr [esi + 0x70]
  0x00416D38: cmp      eax, 3
  0x00416D3B: ja       0x417099
  0x00416AB9: pop      edi
  0x00416ABA: pop      ebx
  0x00416ABB: pop      esi
  0x00416ABC: xor      eax, eax
  0x00416ABE: pop      ebp
  0x00416ABF: add      esp, 0x10
  0x00416AC2: ret      0x10
  0x00416E38: cmp      eax, ebp
  0x00416E3A: je       0x417099
  0x00416E6E: pop      edi
  0x00416E6F: pop      ebx
  0x00416E70: pop      esi
  0x00416E71: xor      eax, eax
  0x00416E73: pop      ebp
  0x00416E74: add      esp, 0x10
  0x00416E77: ret      0x10
  0x00416C46: add      esp, 4
  0x00416C49: xor      eax, eax
  0x00416C4B: pop      edi
  0x00416C4C: pop      ebx
  0x00416C4D: pop      esi
  0x00416C4E: pop      ebp
  0x00416C4F: add      esp, 0x10
  0x00416C52: ret      0x10
  0x00416FE1: xor      ebp, ebp
  0x00416FE3: mov      dword ptr [esp + 0x2c], eax
  0x00416FE7: mov      ecx, dword ptr [esp + 0x2c]
  0x00416FEB: lea      edx, [esp + 0x24]
  0x00416FEF: mov      eax, ebp
  0x00416FF1: push     edx
  0x00416FF2: push     eax
  0x00416FF3: inc      ebp
  0x00416FF4: call     0x40ebf0
  0x00416AE2: xor      ecx, ecx
  0x00416AE4: xor      edi, edi
  0x00416AE6: cmp      eax, ebp
  0x00416AE8: mov      dword ptr [esi + 0x44], eax
  0x00416AEB: je       0x416af2
  0x00416AF8: jmp      dword ptr [eax*4 + 0x417108]
  0x00416B1F: push     0x37
  0x00416B21: push     ecx
  0x00416B22: push     0x281
  0x00416B27: mov      ecx, esi
  0x00416B29: call     0x49747d
  0x00416F71: pop      edi
  0x00416F72: pop      ebx
  0x00416F73: pop      esi
  0x00416F74: xor      eax, eax
  0x00416F76: pop      ebp
  0x00416F77: add      esp, 0x10
  0x00416F7A: ret      0x10
  0x00416F87: mov      ecx, esi
  0x00416F89: mov      dword ptr [esi + 0xc0], eax
  0x00416F8F: call     0x418030
  0x00416C6D: xor      eax, eax
  0x00416C6F: push     esi
  0x00416C70: mov      dword ptr [esi + 0xa0], eax
  0x00416C76: call     0x4163c0
  0x00416C8A: cmp      eax, 2
  0x00416C8D: jle      0x416c94
  0x00416CA0: add      esp, 4
  0x00416CA3: xor      eax, eax
  0x00416CA5: pop      edi
  0x00416CA6: pop      ebx
  0x00416CA7: pop      esi
  0x00416CA8: pop      ebp
  0x00416CA9: add      esp, 0x10
  0x00416CAC: ret      0x10
  0x00416BFC: mov      dword ptr [esi + 0x60], eax
  0x00416BFF: mov      eax, dword ptr [esi + 0x5c]
  0x00416C02: cmp      eax, ebp
  0x00416C04: je       0x417099
  0x00416C12: pop      edi
  0x00416C13: pop      ebx
  0x00416C14: pop      esi
  0x00416C15: xor      eax, eax
  0x00416C17: pop      ebp
  0x00416C18: add      esp, 0x10
  0x00416C1B: ret      0x10
  0x00416BD3: pop      edi
  0x00416BD4: pop      ebx
  0x00416BD5: pop      esi
  0x00416BD6: xor      eax, eax
  0x00416BD8: pop      ebp
  0x00416BD9: add      esp, 0x10
  0x00416BDC: ret      0x10
  0x00416BA9: mov      eax, dword ptr [edi + 0x10]
  0x00416BAC: cmp      eax, ebp
  0x00416BAE: je       0x416bbc
  0x00416B9F: push     eax
  0x00416BA0: call     dword ptr [0x4a24e0]
  0x00416D41: jmp      dword ptr [eax*4 + 0x417120]
  0x00416E40: mov      eax, dword ptr [eax + 4]
  0x00416E43: push     ebp
  0x00416E44: push     0xf010
  0x00416E49: push     eax
  0x00416E4A: call     dword ptr [0x4a241c]
  0x00416FF9: test     eax, eax
  0x00416FFB: je       0x417099
  0x00416B07: or       edi, 0x40000
  0x00416B0D: mov      ecx, 0x80
  0x00416B12: jmp      0x416b1f
  0x00416B0D: mov      ecx, 0x80
  0x00416B12: jmp      0x416b1f
  0x00416AFF: or       edi, 0x40000
  0x00416B05: jmp      0x416b1f
  0x00416B14: or       edi, 0x40000
  0x00416B1A: mov      ecx, 0x200
  0x00416B1F: push     0x37
  0x00416B21: push     ecx
  0x00416B22: push     0x281
  0x00416B27: mov      ecx, esi
  0x00416B29: call     0x49747d
  0x00416B1A: mov      ecx, 0x200
  0x00416B1F: push     0x37
  0x00416B21: push     ecx
  0x00416B22: push     0x281
  0x00416B27: mov      ecx, esi
  0x00416B29: call     0x49747d
  0x00416B2E: push     0x37
  0x00416B30: push     edi
  0x00416B31: push     0x440000
  0x00416B36: mov      ecx, esi
  0x00416B38: call     0x49744c
  0x00416C7B: add      esp, 4
  0x00416C7E: xor      eax, eax
  0x00416C80: pop      edi
  0x00416C81: pop      ebx
  0x00416C82: pop      esi
  0x00416C83: pop      ebp
  0x00416C84: add      esp, 0x10
  0x00416C87: ret      0x10
  0x00416C94: push     esi
  0x00416C95: mov      dword ptr [esi + 0xa0], eax
  0x00416C9B: call     0x4163c0
  0x00416BBC: push     edi
  0x00416BBD: call     0x492f40
  0x00416BB0: push     eax
  0x00416BB1: call     0x492f40
  0x00416BA6: mov      dword ptr [edi + 0xc], ebp
  0x00416BA9: mov      eax, dword ptr [edi + 0x10]
  0x00416BAC: cmp      eax, ebp
  0x00416BAE: je       0x416bbc
  0x00416D48: push     1
  0x00416D4A: mov      ecx, esi
  0x00416D4C: call     0x497580
  0x00416DF2: push     6
  0x00416DF4: mov      ecx, esi
  0x00416DF6: call     0x497580
  0x00416D5D: mov      eax, dword ptr [esi + 0x1c]
  0x00416D60: push     eax
  0x00416D61: call     dword ptr [0x4a240c]
  0x00416E07: mov      ecx, esi
  0x00416E09: call     0x41ae90
  0x00416E50: pop      edi
  0x00416E51: pop      ebx
  0x00416E52: pop      esi
  0x00416E53: xor      eax, eax
  0x00416E55: pop      ebp
  0x00416E56: add      esp, 0x10
  0x00416E59: ret      0x10
  0x00417001: mov      eax, dword ptr [esp + 0x24]
  0x00417005: push     0
  0x00417007: push     0
  0x00417009: lea      ecx, [eax + 0x14]
  0x0041700C: call     0x40e730
  0x00416B3D: mov      ecx, esi
  0x00416B3F: call     0x4169f0
  0x00416BC2: add      esp, 4
  0x00416BC5: mov      dword ptr [esi + 0xec], ebp
  0x00416BCB: push     ebp
  0x00416BCC: mov      ecx, esi
  0x00416BCE: call     0x41af90
  0x00416BB6: add      esp, 4
  0x00416BB9: mov      dword ptr [edi + 0x10], ebp
  0x00416BBC: push     edi
  0x00416BBD: call     0x492f40
  0x00416D51: pop      edi
  0x00416D52: pop      ebx
  0x00416D53: pop      esi
  0x00416D54: xor      eax, eax
  0x00416D56: pop      ebp
  0x00416D57: add      esp, 0x10
  0x00416D5A: ret      0x10
  0x00416DFB: pop      edi
  0x00416DFC: pop      ebx
  0x00416DFD: pop      esi
  0x00416DFE: xor      eax, eax
  0x00416E00: pop      ebp
  0x00416E01: add      esp, 0x10
  0x00416E04: ret      0x10
  0x00416D67: test     eax, eax
  0x00416D69: jne      0x416d79
  0x00416E0E: pop      edi
  0x00416E0F: pop      ebx
  0x00416E10: pop      esi
  0x00416E11: xor      eax, eax
  0x00416E13: pop      ebp
  0x00416E14: add      esp, 0x10
  0x00416E17: ret      0x10
  0x00417011: mov      edi, eax
  0x00417013: add      edi, 0x18
  0x00417016: push     edi
  0x00417017: call     0x406cf0
  0x00416B44: pop      edi
  0x00416B45: pop      ebx
  0x00416B46: pop      esi
  0x00416B47: xor      eax, eax
  0x00416B49: pop      ebp
  0x00416B4A: add      esp, 0x10
  0x00416B4D: ret      0x10
  0x00416D6B: mov      ecx, dword ptr [esi + 0x1c]
  0x00416D6E: push     ecx
  0x00416D6F: call     dword ptr [0x4a242c]
  0x00416D79: push     9
  0x00416D7B: mov      ecx, esi
  0x00416D7D: call     0x497580
  0x0041701C: add      edi, eax
  0x0041701E: push     edi
  0x0041701F: call     0x406cf0
  0x00416D75: test     eax, eax
  0x00416D77: je       0x416d82
  0x00416D82: mov      eax, dword ptr [esi + 0x1c]
  0x00416D85: lea      edx, [esp + 0x10]
  0x00416D89: push     edx
  0x00416D8A: push     eax
  0x00416D8B: call     dword ptr [0x4a2530]
  0x00417024: add      edi, eax
  0x00417026: add      esp, 8
  0x00417029: mov      edi, dword ptr [edi]
  0x0041702B: test     edi, edi
  0x0041702D: je       0x416fe7
  0x00416D91: mov      edi, dword ptr [esp + 0x18]
  0x00416D95: mov      ebp, dword ptr [0x4a2574]
  0x00416D9B: mov      eax, dword ptr [esp + 0x10]
  0x00416D9F: push     0
  0x00416DA1: sub      edi, eax
  0x00416DA3: call     ebp
  0x00416FE7: mov      ecx, dword ptr [esp + 0x2c]
  0x00416FEB: lea      edx, [esp + 0x24]
  0x00416FEF: mov      eax, ebp
  0x00416FF1: push     edx
  0x00416FF2: push     eax
  0x00416FF3: inc      ebp
  0x00416FF4: call     0x40ebf0
  0x0041702F: mov      eax, dword ptr [edi + 0x1c]
  0x00417032: mov      ecx, dword ptr [esi + 0x1c]
  0x00417035: cmp      eax, ecx
  0x00417037: je       0x416fe7
  0x00416DA5: mov      ebx, dword ptr [esp + 0x1c]
  0x00416DA9: sub      eax, edi
  0x00416DAB: mov      ecx, dword ptr [esp + 0x14]
  0x00416DAF: push     1
  0x00416DB1: cdq      
  0x00416DB2: sub      eax, edx
  0x00416DB4: sub      ebx, ecx
  0x00416DB6: mov      edi, eax
  0x00416DB8: sar      edi, 1
  0x00416DBA: call     ebp
  0x00417039: push     eax
  0x0041703A: call     dword ptr [0x4a2558]
  0x00416DBC: sub      eax, ebx
  0x00416DBE: mov      ecx, dword ptr [esp + 0x10]
  0x00416DC2: cdq      
  0x00416DC3: sub      eax, edx
  0x00416DC5: sar      eax, 1
  0x00416DC7: cmp      ecx, edi
  0x00416DC9: jne      0x416dd5
  0x00417040: test     eax, eax
  0x00417042: je       0x416fe7
  0x00416DCB: cmp      dword ptr [esp + 0x14], eax
  0x00416DCF: je       0x417099
  0x00416DD5: push     0x15
  0x00416DD7: push     0
  0x00416DD9: push     0
  0x00416DDB: push     eax
  0x00416DDC: push     edi
  0x00416DDD: push     0
  0x00416DDF: mov      ecx, esi
  0x00416DE1: call     0x497531
  0x00417044: mov      eax, dword ptr [edi + 0xc4]
  0x0041704A: test     eax, eax
  0x0041704C: je       0x416fe7
  0x00416DE6: pop      edi
  0x00416DE7: pop      ebx
  0x00416DE8: pop      esi
  0x00416DE9: xor      eax, eax
  0x00416DEB: pop      ebp
  0x00416DEC: add      esp, 0x10
  0x00416DEF: ret      0x10
  0x0041704E: mov      eax, dword ptr [edi + 0xb8]
  0x00417054: test     eax, eax
  0x00417056: jne      0x416fe7
  0x00417058: mov      ecx, dword ptr [edi + 0x1c]
  0x0041705B: push     0x13
  0x0041705D: push     0
  0x0041705F: push     0
  0x00417061: push     0
  0x00417063: push     0
  0x00417065: push     -1
  0x00417067: push     ecx
  0x00417068: call     ebx
  0x0041706A: jmp      0x416fe7

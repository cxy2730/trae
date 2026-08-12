/**
 * Function: sub_41e020
 * Address: 0x0041E020
 * Blocks: 177
 * Instructions: 742
 * Analyzed with angr + capstone
 */
void* sub_41e020(void) {

  /* Block 1 @ 0x0041E020 */
  // push ebp
  // mov ebp, esp
  // push -1
  // push 0x49f02e
  // mov eax, dword ptr fs:[0]
  // push eax
  // mov dword ptr fs:[0], esp
  // sub esp, 0x2d4
  // push ebx
  // push esi
  // push edi
  // mov edi, ecx
  // mov dword ptr [ebp - 0x10], esp
  // mov dword ptr [ebp - 0x38], edi
  // TEST byte ptr [edi + 0x170], 1 (set flags)
  // if (not equal) goto 0x41e3d2
  /* Block 2 @ 0x0041E056 */
  // mov eax, dword ptr [edi + 0x160]
  // xor esi, esi
  // CMP eax, esi (set flags)
  // if (equal) goto 0x41e3d2
  /* Block 3 @ 0x0041E3D2 */
  // mov eax, 1
  // mov ecx, dword ptr [ebp - 0xc]
  // mov dword ptr fs:[0], ecx
  // pop edi
  // pop esi
  // pop ebx
  // mov esp, ebp
  // pop ebp
  return;
  /* Block 4 @ 0x0041E066 */
  // lea ecx, [ebp - 0x54]
  // call 0x004062A0
  call(0x004062A0);
  /* Block 5 @ 0x0041E06E */
  // mov ecx, dword ptr [edi + 0x160]
  // mov dword ptr [ebp - 4], esi
  // CMP ecx, esi (set flags)
  // mov dword ptr [ebp - 0x44], esi
  // if (not equal) goto 0x41e082
  /* Block 6 @ 0x0041E07E */
  // xor eax, eax
  goto 0x41e088;
  /* Block 7 @ 0x0041E082 */
  // mov eax, dword ptr [edi + 0x158]
  // push ecx
  // push eax
  // lea ecx, [ebp - 0x54]
  // call 0x004069D0
  call(0x004069D0);
  // push ecx
  // push eax
  // lea ecx, [ebp - 0x54]
  // call 0x004069D0
  call(0x004069D0);
  /* Block 8 @ 0x0041E092 */
  // CMP dword ptr [edi + 0x160], esi (set flags)
  // if (not equal) goto 0x41e09f
  /* Block 9 @ 0x0041E09A */
  // mov dword ptr [ebp - 0x2c], esi
  goto 0x41e0a8;
  /* Block 10 @ 0x0041E09F */
  // mov eax, dword ptr [edi + 0x158]
  // mov dword ptr [ebp - 0x2c], eax
  // mov eax, dword ptr [ebp - 0x44]
  // mov edx, dword ptr [ebp - 0x4c]
  // mov ecx, dword ptr [0x2fd8088]
  // neg eax
  // sbb eax, eax
  // mov dword ptr [ebp - 0x14], ecx
  // and eax, edx
  // mov dword ptr [ebp - 0x28], eax
  // mov ecx, dword ptr [edi + 0x120]
  // xor eax, eax
  // CMP ecx, esi (set flags)
  // mov byte ptr [ebp - 4], 1
  // mov dword ptr [ebp - 0x18], esi
  // mov dword ptr [ebp - 0x20], eax
  // if (less or equal) goto 0x41e36c
  // mov eax, dword ptr [ebp - 0x44]
  // mov edx, dword ptr [ebp - 0x4c]
  // mov ecx, dword ptr [0x2fd8088]
  // mov dword ptr [ebp - 0x14], ecx
  // and eax, edx
  // mov dword ptr [ebp - 0x28], eax
  // mov ecx, dword ptr [edi + 0x120]
  // xor eax, eax
  // CMP ecx, esi (set flags)
  // mov byte ptr [ebp - 4], 1
  // mov dword ptr [ebp - 0x18], esi
  // mov dword ptr [ebp - 0x20], eax
  // if (less or equal) goto 0x41e36c
  /* Block 11 @ 0x0041E36C */
  // mov edx, dword ptr [ebp - 0x28]
  // mov eax, dword ptr [edi + 0x14c]
  // xor ecx, ecx
  // CMP dword ptr [edx], 0 (set flags)
  // CMP eax, ecx (set flags)
  // if (not equal) goto 0x41e3e8
  /* Block 12 @ 0x0041E0DA */
  // mov ecx, dword ptr [edi + 0x11c]
  // mov edx, dword ptr [edi + 0x74]
  // mov edi, dword ptr [ecx + eax*4]
  // mov esi, dword ptr [edx + eax*8 + 4]
  // mov ecx, dword ptr [ebp - 0x28]
  // lea edx, [ebp - 0x14]
  // mov ebx, dword ptr [edi + 0x18]
  // push edx
  // add ebx, ecx
  // mov ecx, esi
  // mov dword ptr [ebp - 0x1c], edi
  // call 0x0049557D
  call(0x0049557D);
  /* Block 13 @ 0x0041E381 */
  // mov ecx, dword ptr [edi + 0x148]
  // mov eax, ecx
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x41e391
  /* Block 14 @ 0x0041E3E8 */
  // lea ecx, [edi + 0x168]
  // call 0x00493161
  call(0x00493161);
  /* Block 15 @ 0x0041E100 */
  // mov eax, dword ptr [edi + 0x14]
  // dec eax
  // CMP eax, 9 (set flags)
  // if (above) goto 0x41e34d
  /* Block 16 @ 0x0041E38D */
  // xor eax, eax
  goto 0x41e397;
  /* Block 17 @ 0x0041E391 */
  // mov eax, dword ptr [edi + 0x140]
  // push 1
  // push ecx
  // push eax
  // call 0x00406D30
  call(0x00406D30);
  /* Block 18 @ 0x0041E3F3 */
  // mov ecx, dword ptr [edi + 0x68]
  // mov eax, dword ptr [ecx + 0xc4]
  // TEST eax, eax (set flags)
  // if (greater or equal) goto 0x41e40a
  /* Block 19 @ 0x0041E10D */
  goto dword ptr [eax*4 + 0x41e824];
  /* Block 20 @ 0x0041E34D */
  // mov edi, dword ptr [ebp - 0x38]
  // mov eax, dword ptr [ebp - 0x20]
  // inc eax
  // mov ecx, dword ptr [edi + 0x120]
  // mov dword ptr [ebp - 0x20], eax
  // CMP eax, ecx (set flags)
  // if (less) goto 0x41e0da
  // push 1
  // push ecx
  // push eax
  // call 0x00406D30
  call(0x00406D30);
  /* Block 21 @ 0x0041E3A0 */
  // add esp, 0xc
  // xor ecx, ecx
  // CMP eax, -1 (set flags)
  // mov eax, ecx
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x41e3e8
  /* Block 22 @ 0x0041E400 */
  // mov ebx, 0xffffffc4
  goto 0x41e799;
  /* Block 23 @ 0x0041E40A */
  // push 1
  // push eax
  // call 0x00430CF0
  call(0x00430CF0);
  /* Block 24 @ 0x0041E261 */
  // mov eax, dword ptr [ebp - 0x14]
  // push eax
  // call 0x00482C9F
  call(0x00482C9F);
  /* Block 25 @ 0x0041E2A3 */
  // mov ecx, dword ptr [edi + 0x1c]
  // push ecx
  // push ebx
  // call 0x00406CA0
  call(0x00406CA0);
  /* Block 26 @ 0x0041E284 */
  // mov edx, dword ptr [ebp - 0x14]
  // push edx
  // call 0x00482BB2
  call(0x00482BB2);
  /* Block 27 @ 0x0041E172 */
  // mov ecx, dword ptr [ebp - 0x14]
  // push ecx
  // call 0x00482C94
  call(0x00482C94);
  /* Block 28 @ 0x0041E274 */
  // mov ecx, dword ptr [ebp - 0x14]
  // push ecx
  // call 0x00482BB2
  call(0x00482BB2);
  /* Block 29 @ 0x0041E114 */
  // mov eax, dword ptr [ebp - 0x14]
  // push eax
  // call 0x00482C94
  call(0x00482C94);
  /* Block 30 @ 0x0041E2D4 */
  // mov eax, dword ptr [esi + 0x1c]
  // push 0
  // push 0
  // push 0xf0
  // push eax
  // call dword ptr [0x4a2564]
  call(dword ptr [0x4a2564]);
  /* Block 31 @ 0x0041E294 */
  // mov eax, dword ptr [ebp - 0x14]
  // push ebx
  // push eax
  // call 0x0041C080
  call(0x0041C080);
  /* Block 32 @ 0x0041E1D9 */
  // mov edx, dword ptr [ebp - 0x14]
  // push edx
  // call 0x00482C9F
  call(0x00482C9F);
  /* Block 33 @ 0x0041E365 */
  // mov eax, dword ptr [ebp - 0x18]
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x41e3e8
  /* Block 34 @ 0x0041E3B1 */
  // mov byte ptr [ebp - 4], cl
  // lea ecx, [ebp - 0x14]
  // call 0x004931D6
  call(0x004931D6);
  /* Block 35 @ 0x0041E799 */
  // push ebx
  // call 0x00430A70
  call(0x00430A70);
  /* Block 36 @ 0x0041E412 */
  // mov ebx, eax
  // TEST ebx, ebx (set flags)
  // mov dword ptr [ebp - 0x24], ebx
  // if (not equal) goto 0x41e799
  /* Block 37 @ 0x0041E26A */
  // mov dword ptr [ebx], eax
  // add esp, 4
  // mov dword ptr [ebx + 4], edx
  goto 0x41e2ef;
  /* Block 38 @ 0x0041E2AD */
  // mov esi, dword ptr [ebp - 0x14]
  // mov ecx, dword ptr [edi + 0x1c]
  // add esp, 8
  // mov eax, dword ptr [esi - 8]
  // CMP ecx, eax (set flags)
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0041E020: push     ebp
  0x0041E021: mov      ebp, esp
  0x0041E023: push     -1
  0x0041E025: push     0x49f02e
  0x0041E02A: mov      eax, dword ptr fs:[0]
  0x0041E030: push     eax
  0x0041E031: mov      dword ptr fs:[0], esp
  0x0041E038: sub      esp, 0x2d4
  0x0041E03E: push     ebx
  0x0041E03F: push     esi
  0x0041E040: push     edi
  0x0041E041: mov      edi, ecx
  0x0041E043: mov      dword ptr [ebp - 0x10], esp
  0x0041E046: mov      dword ptr [ebp - 0x38], edi
  0x0041E049: test     byte ptr [edi + 0x170], 1
  0x0041E050: jne      0x41e3d2
  0x0041E056: mov      eax, dword ptr [edi + 0x160]
  0x0041E05C: xor      esi, esi
  0x0041E05E: cmp      eax, esi
  0x0041E060: je       0x41e3d2
  0x0041E3D2: mov      eax, 1
  0x0041E3D7: mov      ecx, dword ptr [ebp - 0xc]
  0x0041E3DA: mov      dword ptr fs:[0], ecx
  0x0041E3E1: pop      edi
  0x0041E3E2: pop      esi
  0x0041E3E3: pop      ebx
  0x0041E3E4: mov      esp, ebp
  0x0041E3E6: pop      ebp
  0x0041E3E7: ret      
  0x0041E066: lea      ecx, [ebp - 0x54]
  0x0041E069: call     0x4062a0
  0x0041E06E: mov      ecx, dword ptr [edi + 0x160]
  0x0041E074: mov      dword ptr [ebp - 4], esi
  0x0041E077: cmp      ecx, esi
  0x0041E079: mov      dword ptr [ebp - 0x44], esi
  0x0041E07C: jne      0x41e082
  0x0041E07E: xor      eax, eax
  0x0041E080: jmp      0x41e088
  0x0041E082: mov      eax, dword ptr [edi + 0x158]
  0x0041E088: push     ecx
  0x0041E089: push     eax
  0x0041E08A: lea      ecx, [ebp - 0x54]
  0x0041E08D: call     0x4069d0
  0x0041E088: push     ecx
  0x0041E089: push     eax
  0x0041E08A: lea      ecx, [ebp - 0x54]
  0x0041E08D: call     0x4069d0
  0x0041E092: cmp      dword ptr [edi + 0x160], esi
  0x0041E098: jne      0x41e09f
  0x0041E09A: mov      dword ptr [ebp - 0x2c], esi
  0x0041E09D: jmp      0x41e0a8
  0x0041E09F: mov      eax, dword ptr [edi + 0x158]
  0x0041E0A5: mov      dword ptr [ebp - 0x2c], eax
  0x0041E0A8: mov      eax, dword ptr [ebp - 0x44]
  0x0041E0AB: mov      edx, dword ptr [ebp - 0x4c]
  0x0041E0AE: mov      ecx, dword ptr [0x2fd8088]
  0x0041E0B4: neg      eax
  0x0041E0B6: sbb      eax, eax
  0x0041E0B8: mov      dword ptr [ebp - 0x14], ecx
  0x0041E0BB: and      eax, edx
  0x0041E0BD: mov      dword ptr [ebp - 0x28], eax
  0x0041E0C0: mov      ecx, dword ptr [edi + 0x120]
  0x0041E0C6: xor      eax, eax
  0x0041E0C8: cmp      ecx, esi
  0x0041E0CA: mov      byte ptr [ebp - 4], 1
  0x0041E0CE: mov      dword ptr [ebp - 0x18], esi
  0x0041E0D1: mov      dword ptr [ebp - 0x20], eax
  0x0041E0D4: jle      0x41e36c
  0x0041E0A8: mov      eax, dword ptr [ebp - 0x44]
  0x0041E0AB: mov      edx, dword ptr [ebp - 0x4c]
  0x0041E0AE: mov      ecx, dword ptr [0x2fd8088]
  0x0041E0B4: neg      eax
  0x0041E0B6: sbb      eax, eax
  0x0041E0B8: mov      dword ptr [ebp - 0x14], ecx
  0x0041E0BB: and      eax, edx
  0x0041E0BD: mov      dword ptr [ebp - 0x28], eax
  0x0041E0C0: mov      ecx, dword ptr [edi + 0x120]
  0x0041E0C6: xor      eax, eax
  0x0041E0C8: cmp      ecx, esi
  0x0041E0CA: mov      byte ptr [ebp - 4], 1
  0x0041E0CE: mov      dword ptr [ebp - 0x18], esi
  0x0041E0D1: mov      dword ptr [ebp - 0x20], eax
  0x0041E0D4: jle      0x41e36c
  0x0041E36C: mov      edx, dword ptr [ebp - 0x28]
  0x0041E36F: mov      eax, dword ptr [edi + 0x14c]
  0x0041E375: xor      ecx, ecx
  0x0041E377: cmp      dword ptr [edx], 0
  0x0041E37A: setl     cl
  0x0041E37D: cmp      eax, ecx
  0x0041E37F: jne      0x41e3e8
  0x0041E0DA: mov      ecx, dword ptr [edi + 0x11c]
  0x0041E0E0: mov      edx, dword ptr [edi + 0x74]
  0x0041E0E3: mov      edi, dword ptr [ecx + eax*4]
  0x0041E0E6: mov      esi, dword ptr [edx + eax*8 + 4]
  0x0041E0EA: mov      ecx, dword ptr [ebp - 0x28]
  0x0041E0ED: lea      edx, [ebp - 0x14]
  0x0041E0F0: mov      ebx, dword ptr [edi + 0x18]
  0x0041E0F3: push     edx
  0x0041E0F4: add      ebx, ecx
  0x0041E0F6: mov      ecx, esi
  0x0041E0F8: mov      dword ptr [ebp - 0x1c], edi
  0x0041E0FB: call     0x49557d
  0x0041E381: mov      ecx, dword ptr [edi + 0x148]
  0x0041E387: mov      eax, ecx
  0x0041E389: test     eax, eax
  0x0041E38B: jne      0x41e391
  0x0041E3E8: lea      ecx, [edi + 0x168]
  0x0041E3EE: call     0x493161
  0x0041E100: mov      eax, dword ptr [edi + 0x14]
  0x0041E103: dec      eax
  0x0041E104: cmp      eax, 9
  0x0041E107: ja       0x41e34d
  0x0041E38D: xor      eax, eax
  0x0041E38F: jmp      0x41e397
  0x0041E391: mov      eax, dword ptr [edi + 0x140]
  0x0041E397: push     1
  0x0041E399: push     ecx
  0x0041E39A: push     eax
  0x0041E39B: call     0x406d30
  0x0041E3F3: mov      ecx, dword ptr [edi + 0x68]
  0x0041E3F6: mov      eax, dword ptr [ecx + 0xc4]
  0x0041E3FC: test     eax, eax
  0x0041E3FE: jge      0x41e40a
  0x0041E10D: jmp      dword ptr [eax*4 + 0x41e824]
  0x0041E34D: mov      edi, dword ptr [ebp - 0x38]
  0x0041E350: mov      eax, dword ptr [ebp - 0x20]
  0x0041E353: inc      eax
  0x0041E354: mov      ecx, dword ptr [edi + 0x120]
  0x0041E35A: mov      dword ptr [ebp - 0x20], eax
  0x0041E35D: cmp      eax, ecx
  0x0041E35F: jl       0x41e0da
  0x0041E397: push     1
  0x0041E399: push     ecx
  0x0041E39A: push     eax
  0x0041E39B: call     0x406d30
  0x0041E3A0: add      esp, 0xc
  0x0041E3A3: xor      ecx, ecx
  0x0041E3A5: cmp      eax, -1
  0x0041E3A8: setne    cl
  0x0041E3AB: mov      eax, ecx
  0x0041E3AD: test     eax, eax
  0x0041E3AF: jne      0x41e3e8
  0x0041E400: mov      ebx, 0xffffffc4
  0x0041E405: jmp      0x41e799
  0x0041E40A: push     1
  0x0041E40C: push     eax
  0x0041E40D: call     0x430cf0
  0x0041E261: mov      eax, dword ptr [ebp - 0x14]
  0x0041E264: push     eax
  0x0041E265: call     0x482c9f
  0x0041E2A3: mov      ecx, dword ptr [edi + 0x1c]
  0x0041E2A6: push     ecx
  0x0041E2A7: push     ebx
  0x0041E2A8: call     0x406ca0
  0x0041E284: mov      edx, dword ptr [ebp - 0x14]
  0x0041E287: push     edx
  0x0041E288: call     0x482bb2
  0x0041E172: mov      ecx, dword ptr [ebp - 0x14]
  0x0041E175: push     ecx
  0x0041E176: call     0x482c94
  0x0041E274: mov      ecx, dword ptr [ebp - 0x14]
  0x0041E277: push     ecx
  0x0041E278: call     0x482bb2
  0x0041E114: mov      eax, dword ptr [ebp - 0x14]
  0x0041E117: push     eax
  0x0041E118: call     0x482c94
  0x0041E2D4: mov      eax, dword ptr [esi + 0x1c]
  0x0041E2D7: push     0
  0x0041E2D9: push     0
  0x0041E2DB: push     0xf0
  0x0041E2E0: push     eax
  0x0041E2E1: call     dword ptr [0x4a2564]
  0x0041E294: mov      eax, dword ptr [ebp - 0x14]
  0x0041E297: push     ebx
  0x0041E298: push     eax
  0x0041E299: call     0x41c080
  0x0041E1D9: mov      edx, dword ptr [ebp - 0x14]
  0x0041E1DC: push     edx
  0x0041E1DD: call     0x482c9f
  0x0041E365: mov      eax, dword ptr [ebp - 0x18]
  0x0041E368: test     eax, eax
  0x0041E36A: jne      0x41e3e8
  0x0041E3B1: mov      byte ptr [ebp - 4], cl
  0x0041E3B4: lea      ecx, [ebp - 0x14]
  0x0041E3B7: call     0x4931d6
  0x0041E799: push     ebx
  0x0041E79A: call     0x430a70
  0x0041E412: mov      ebx, eax
  0x0041E414: test     ebx, ebx
  0x0041E416: mov      dword ptr [ebp - 0x24], ebx
  0x0041E419: jne      0x41e799
  0x0041E26A: mov      dword ptr [ebx], eax
  0x0041E26C: add      esp, 4
  0x0041E26F: mov      dword ptr [ebx + 4], edx
  0x0041E272: jmp      0x41e2ef
  0x0041E2AD: mov      esi, dword ptr [ebp - 0x14]
  0x0041E2B0: mov      ecx, dword ptr [edi + 0x1c]
  0x0041E2B3: add      esp, 8
  0x0041E2B6: mov      eax, dword ptr [esi - 8]
  0x0041E2B9: cmp      ecx, eax
  0x0041E2BB: jl       0x41e2bf
  0x0041E28D: fstp     qword ptr [ebx]
  0x0041E28F: add      esp, 4
  0x0041E292: jmp      0x41e2ef
  0x0041E17B: add      esp, 4
  0x0041E17E: cmp      eax, 0x7fff
  0x0041E183: jg       0x41e1a5
  0x0041E27D: fstp     dword ptr [ebx]
  0x0041E27F: add      esp, 4
  0x0041E282: jmp      0x41e2ef
  0x0041E11D: add      esp, 4
  0x0041E120: cmp      eax, 0xff
  0x0041E125: jg       0x41e140
  0x0041E2E7: cmp      eax, 1
  0x0041E2EA: sete     cl
  0x0041E2ED: mov      byte ptr [ebx], cl
  0x0041E2EF: mov      eax, dword ptr [ebp - 0x18]
  0x0041E2F2: test     eax, eax
  0x0041E2F4: jne      0x41e34d
  0x0041E29E: add      esp, 8
  0x0041E2A1: jmp      0x41e2ef
  0x0041E1E2: add      esp, 4
  0x0041E1E5: test     edx, edx
  0x0041E1E7: jg       0x41e21f
  0x0041E3BC: lea      ecx, [ebp - 0x54]
  0x0041E3BF: mov      dword ptr [ebp - 4], 0xffffffff
  0x0041E3C6: mov      dword ptr [ebp - 0x54], 0x2f95d48
  0x0041E3CD: call     0x4064a0
  0x0041E79F: add      esp, 4
  0x0041E7A2: lea      ecx, [edi + 0x168]
  0x0041E7A8: push     eax
  0x0041E7A9: call     0x493313
  0x0041E41F: lea      ecx, [ebp - 0x60]
  0x0041E422: call     0x493768
  0x0041E2EF: mov      eax, dword ptr [ebp - 0x18]
  0x0041E2F2: test     eax, eax
  0x0041E2F4: jne      0x41e34d
  0x0041E2BF: mov      edx, ecx
  0x0041E2C1: mov      edi, ebx
  0x0041E2C3: shr      ecx, 2
  0x0041E2C6: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0041E2BD: mov      ecx, eax
  0x0041E2BF: mov      edx, ecx
  0x0041E2C1: mov      edi, ebx
  0x0041E2C3: shr      ecx, 2
  0x0041E2C6: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0041E185: mov      edx, dword ptr [ebp - 0x14]
  0x0041E188: push     edx
  0x0041E189: call     0x482c94
  0x0041E1A5: mov      eax, dword ptr [ebp - 0x14]
  0x0041E1A8: push     eax
  0x0041E1A9: call     0x482c94
  0x0041E127: mov      ecx, dword ptr [ebp - 0x14]
  0x0041E12A: push     ecx
  0x0041E12B: call     0x482c94
  0x0041E140: mov      edx, dword ptr [ebp - 0x14]
  0x0041E143: push     edx
  0x0041E144: call     0x482c94
  0x0041E2F6: mov      eax, dword ptr [edi + 0x14]
  0x0041E2F9: cmp      eax, 0xa
  0x0041E2FC: jne      0x41e303
  0x0041E1E9: jl       0x41e1f2
  0x0041E21F: mov      ecx, dword ptr [ebp - 0x14]
  0x0041E222: push     ecx
  0x0041E223: call     0x482c9f
  0x0041E7AE: mov      ecx, edi
  0x0041E7B0: call     0x41dec0
  0x0041E427: mov      eax, dword ptr [edi + 0x68]
  0x0041E42A: push     2
  0x0041E42C: push     ebx
  0x0041E42D: mov      byte ptr [ebp - 4], 3
  0x0041E431: mov      esi, dword ptr [eax + 0xc4]
  0x0041E437: mov      ecx, dword ptr [eax + 0x1c]
  0x0041E43A: imul     esi, dword ptr [eax + 0x60]
  0x0041E43E: mov      edx, dword ptr [eax + 0xc0]
  0x0041E444: mov      dword ptr [ebp - 0x3c], ecx
  0x0041E447: add      esi, edx
  0x0041E449: mov      edx, dword ptr [ecx]
  0x0041E44B: mov      dword ptr [ebp - 0x58], esi
  0x0041E44E: call     dword ptr [edx + 0x28]
  0x0041E2C8: mov      ecx, edx
  0x0041E2CA: and      ecx, 3
  0x0041E2CD: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0041E2C6: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0041E18E: add      esp, 4
  0x0041E191: cmp      eax, 0xffff8000
  0x0041E196: jge      0x41e1a5
  0x0041E1AE: add      esp, 4
  0x0041E1B1: cmp      eax, 0x7fff
  0x0041E1B6: jle      0x41e1c5
  0x0041E130: add      esp, 4
  0x0041E133: test     eax, eax
  0x0041E135: jge      0x41e140
  0x0041E149: add      esp, 4
  0x0041E14C: cmp      eax, 0xff
  0x0041E151: jle      0x41e15f
  0x0041E2FE: mov      ecx, dword ptr [edi + 0x1c]
  0x0041E301: jmp      0x41e333
  0x0041E303: dec      eax
  0x0041E304: cmp      eax, 0xb
  0x0041E307: ja       0x41e330
  0x0041E1F2: mov      eax, dword ptr [ebp - 0x14]
  0x0041E1F5: push     eax
  0x0041E1F6: call     0x482c9f
  0x0041E1EB: cmp      eax, 0x7fffffff
  0x0041E1F0: ja       0x41e21f
  0x0041E228: add      esp, 4
  0x0041E22B: test     edx, edx
  0x0041E22D: jl       0x41e24b
  0x0041E7B5: xor      eax, eax
  0x0041E7B7: lea      ecx, [ebp - 0x14]
  0x0041E7BA: test     ebx, ebx
  0x0041E7BC: sete     al
  0x0041E7BF: mov      esi, eax
  0x0041E7C1: mov      byte ptr [ebp - 4], 0
  0x0041E7C5: call     0x4931d6
  0x0041E451: cmp      esi, eax
  0x0041E453: jl       0x41e46c
  0x0041E2CF: mov      edi, dword ptr [ebp - 0x1c]
  0x0041E2D2: jmp      0x41e2ef
  0x0041E2CD: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0041E198: mov      eax, 0xffff8000
  0x0041E19D: mov      word ptr [ebx], ax
  0x0041E1A0: jmp      0x41e2ef
  0x0041E1C5: mov      ecx, dword ptr [ebp - 0x14]
  0x0041E1C8: push     ecx
  0x0041E1C9: call     0x482c94
  0x0041E1B8: mov      eax, 0x7fff
  0x0041E1BD: mov      word ptr [ebx], ax
  0x0041E1C0: jmp      0x41e2ef
  0x0041E137: xor      eax, eax
  0x0041E139: mov      byte ptr [ebx], al
  0x0041E13B: jmp      0x41e2ef
  0x0041E15F: mov      eax, dword ptr [ebp - 0x14]
  0x0041E162: push     eax
  0x0041E163: call     0x482c94
  0x0041E153: mov      eax, 0xff
  0x0041E158: mov      byte ptr [ebx], al
  0x0041E15A: jmp      0x41e2ef
  0x0041E333: mov      edx, dword ptr [ebp - 0x1c]
  0x0041E336: mov      eax, dword ptr [ebp - 0x2c]
  0x0041E339: mov      edi, ebx
  0x0041E33B: mov      esi, dword ptr [edx + 0x18]
  0x0041E33E: add      esi, eax
  0x0041E340: xor      eax, eax
  0x0041E342: repe cmpsb byte ptr [esi], byte ptr es:[edi]
  0x0041E309: jmp      dword ptr [eax*4 + 0x41e84c]
  0x0041E330: or       ecx, 0xffffffff
  0x0041E333: mov      edx, dword ptr [ebp - 0x1c]
  0x0041E336: mov      eax, dword ptr [ebp - 0x2c]
  0x0041E339: mov      edi, ebx
  0x0041E33B: mov      esi, dword ptr [edx + 0x18]
  0x0041E33E: add      esi, eax
  0x0041E340: xor      eax, eax
  0x0041E342: repe cmpsb byte ptr [esi], byte ptr es:[edi]
  0x0041E1FB: add      esp, 4
  0x0041E1FE: cmp      edx, -1
  0x0041E201: jg       0x41e21f
  0x0041E24B: mov      edx, dword ptr [ebp - 0x14]
  0x0041E24E: push     edx
  0x0041E24F: call     0x482c9f
  0x0041E22F: jg       0x41e238
  0x0041E7CA: lea      ecx, [ebp - 0x54]
  0x0041E7CD: mov      dword ptr [ebp - 4], 0xffffffff
  0x0041E7D4: mov      dword ptr [ebp - 0x54], 0x2f95d48
  0x0041E7DB: call     0x4064a0
  0x0041E46C: mov      eax, dword ptr [edi + 0x68]
  0x0041E46F: mov      ecx, dword ptr [eax + 0xc8]
  0x0041E475: push     ecx
  0x0041E476: lea      ecx, [ebp - 0x34]
  0x0041E479: call     0x431300
  0x0041E455: mov      ebx, 0xffffffc4
  0x0041E45A: mov      byte ptr [ebp - 4], 1
  0x0041E45E: call     0x4937a6
  0x0041E1CE: add      esp, 4
  0x0041E1D1: mov      word ptr [ebx], ax
  0x0041E1D4: jmp      0x41e2ef
  0x0041E168: add      esp, 4
  0x0041E16B: mov      byte ptr [ebx], al
  0x0041E16D: jmp      0x41e2ef
  0x0041E344: je       0x41e34d
  0x0041E342: repe cmpsb byte ptr [esi], byte ptr es:[edi]
  0x0041E325: xor      ecx, ecx
  0x0041E327: jmp      0x41e333
  0x0041E329: mov      ecx, 4
  0x0041E32E: jmp      0x41e333
  0x0041E310: mov      ecx, 1
  0x0041E315: jmp      0x41e333
  0x0041E317: mov      ecx, 2
  0x0041E31C: jmp      0x41e333
  0x0041E31E: mov      ecx, 8
  0x0041E323: jmp      0x41e333
  0x0041E203: jl       0x41e20c
  0x0041E254: add      esp, 4
  0x0041E257: mov      dword ptr [ebp - 0x30], edx
  0x0041E25A: mov      dword ptr [ebx], eax
  0x0041E25C: jmp      0x41e2ef
  0x0041E231: cmp      eax, 0x7fffffff
  0x0041E236: jbe      0x41e24b
  0x0041E238: mov      eax, 0x7fffffff
  0x0041E23D: mov      dword ptr [ebp - 0x30], 0
  0x0041E244: mov      dword ptr [ebx], eax
  0x0041E246: jmp      0x41e2ef
  0x0041E7E0: mov      ecx, dword ptr [ebp - 0xc]
  0x0041E7E3: mov      eax, esi
  0x0041E7E5: pop      edi
  0x0041E7E6: pop      esi
  0x0041E7E7: mov      dword ptr fs:[0], ecx
  0x0041E7EE: pop      ebx
  0x0041E7EF: mov      esp, ebp
  0x0041E7F1: pop      ebp
  0x0041E7F2: ret      
  0x0041E47E: mov      eax, dword ptr [edi + 0x148]
  0x0041E484: xor      edx, edx
  0x0041E486: cmp      eax, edx
  0x0041E488: mov      byte ptr [ebp - 4], 4
  0x0041E48C: jne      0x41e493
  0x0041E463: mov      byte ptr [ebp - 4], 1
  0x0041E467: jmp      0x41e784
  0x0041E346: mov      dword ptr [ebp - 0x18], 1
  0x0041E34D: mov      edi, dword ptr [ebp - 0x38]
  0x0041E350: mov      eax, dword ptr [ebp - 0x20]
  0x0041E353: inc      eax
  0x0041E354: mov      ecx, dword ptr [edi + 0x120]
  0x0041E35A: mov      dword ptr [ebp - 0x20], eax
  0x0041E35D: cmp      eax, ecx
  0x0041E35F: jl       0x41e0da
  0x0041E20C: mov      eax, 0x80000000
  0x0041E211: mov      dword ptr [ebp - 0x30], 0xffffffff
  0x0041E218: mov      dword ptr [ebx], eax
  0x0041E21A: jmp      0x41e2ef
  0x0041E205: cmp      eax, 0x80000000
  0x0041E20A: jae      0x41e21f
  0x0041E48E: mov      dword ptr [ebp - 0x18], edx
  0x0041E491: jmp      0x41e49c
  0x0041E493: mov      eax, dword ptr [edi + 0x140]
  0x0041E499: mov      dword ptr [ebp - 0x18], eax
  0x0041E49C: mov      dword ptr [ebp - 0x1c], edx
  0x0041E49F: mov      eax, dword ptr [edi + 0x120]
  0x0041E4A5: mov      dword ptr [ebp - 0x20], edx
  0x0041E4A8: cmp      edx, eax
  0x0041E4AA: jge      0x41e53d
  0x0041E784: mov      ecx, dword ptr [edi + 0x68]
  0x0041E787: push     0
  0x0041E789: mov      eax, dword ptr [ecx + 0xc4]
  0x0041E78F: push     eax
  0x0041E790: call     0x430cf0
  0x0041E49C: mov      dword ptr [ebp - 0x1c], edx
  0x0041E49F: mov      eax, dword ptr [edi + 0x120]
  0x0041E4A5: mov      dword ptr [ebp - 0x20], edx
  0x0041E4A8: cmp      edx, eax
  0x0041E4AA: jge      0x41e53d
  0x0041E4B0: mov      ecx, dword ptr [edi + 0x11c]
  0x0041E4B6: mov      eax, dword ptr [ecx + edx*4]
  0x0041E4B9: mov      dword ptr [ebp - 0x40], eax
  0x0041E4BC: mov      ecx, dword ptr [eax + 0x14]
  0x0041E4BF: cmp      ecx, 0xc
  0x0041E4C2: je       0x41e4c9
  0x0041E53D: test     ebx, ebx
  0x0041E53F: je       0x41e55f
  0x0041E795: test     ebx, ebx
  0x0041E797: je       0x41e7ae
  0x0041E4C9: mov      edx, dword ptr [ebp - 0x18]
  0x0041E4CC: cmp      byte ptr [edx], 0
  0x0041E4CF: je       0x41e523
  0x0041E4C4: cmp      ecx, 0xb
  0x0041E4C7: jne      0x41e537
  0x0041E55F: mov      ecx, dword ptr [edi + 0x148]
  0x0041E565: mov      eax, ecx
  0x0041E567: test     eax, eax
  0x0041E569: jne      0x41e56f
  0x0041E541: lea      ecx, [ebp - 0x34]
  0x0041E544: mov      byte ptr [ebp - 4], 3
  0x0041E548: call     0x431340
  0x0041E523: mov      ecx, dword ptr [ebp - 0x18]
  0x0041E526: mov      eax, dword ptr [ebp - 0x1c]
  0x0041E529: mov      edx, dword ptr [ebp - 0x20]
  0x0041E52C: mov      ebx, dword ptr [ebp - 0x24]
  0x0041E52F: inc      ecx
  0x0041E530: inc      eax
  0x0041E531: mov      dword ptr [ebp - 0x18], ecx
  0x0041E534: mov      dword ptr [ebp - 0x1c], eax
  0x0041E537: inc      edx
  0x0041E538: jmp      0x41e49f
  0x0041E4D1: mov      eax, dword ptr [edi + 0x12c]
  0x0041E4D7: mov      edx, dword ptr [ebp - 0x1c]
  0x0041E4DA: mov      eax, dword ptr [eax + edx*4]
  0x0041E4DD: mov      esi, dword ptr [eax + 0x10]
  0x0041E4E0: test     esi, esi
  0x0041E4E2: jne      0x41e4e8
  0x0041E537: inc      edx
  0x0041E538: jmp      0x41e49f
  0x0041E56B: xor      eax, eax
  0x0041E56D: jmp      0x41e575
  0x0041E56F: mov      eax, dword ptr [edi + 0x140]
  0x0041E575: push     ecx
  0x0041E576: push     eax
  0x0041E577: call     0x406ca0
  0x0041E54D: mov      byte ptr [ebp - 4], 1
  0x0041E551: call     0x4937a6
  0x0041E49F: mov      eax, dword ptr [edi + 0x120]
  0x0041E4A5: mov      dword ptr [ebp - 0x20], edx
  0x0041E4A8: cmp      edx, eax
  0x0041E4AA: jge      0x41e53d
  0x0041E4E4: xor      ebx, ebx
  0x0041E4E6: jmp      0x41e4eb
  0x0041E4E8: mov      ebx, dword ptr [eax + 8]
  0x0041E4EB: cmp      ecx, 0xc
  0x0041E4EE: jne      0x41e503
  0x0041E575: push     ecx
  0x0041E576: push     eax
  0x0041E577: call     0x406ca0
  0x0041E57C: mov      esi, dword ptr [ebp - 0x3c]
  0x0041E57F: mov      eax, dword ptr [ebp - 0x58]
  0x0041E582: add      esp, 8
  0x0041E585: mov      ecx, esi
  0x0041E587: mov      edx, dword ptr [esi]
  0x0041E589: push     0
  0x0041E58B: push     eax
  0x0041E58C: call     dword ptr [edx + 0x28]
  0x0041E556: mov      byte ptr [ebp - 4], 1
  0x0041E55A: jmp      0x41e781
  0x0041E4EB: cmp      ecx, 0xc
  0x0041E4EE: jne      0x41e503
  0x0041E4F0: push     0
  0x0041E4F2: push     esi
  0x0041E4F3: push     ebx
  0x0041E4F4: call     0x406d30
  0x0041E503: mov      eax, dword ptr [ebp - 0x40]
  0x0041E506: mov      edx, dword ptr [ebp - 0x28]
  0x0041E509: mov      eax, dword ptr [eax + 0x18]
  0x0041E50C: add      eax, edx
  0x0041E50E: push     eax
  0x0041E50F: mov      ecx, dword ptr [eax]
  0x0041E511: push     ecx
  0x0041E512: push     esi
  0x0041E513: push     ebx
  0x0041E514: lea      ecx, [ebp - 0x34]
  0x0041E517: call     0x431360
  0x0041E58F: mov      eax, dword ptr [edi + 0x68]
  0x0041E592: mov      ebx, dword ptr [ebp - 0x28]
  0x0041E595: mov      edx, dword ptr [esi]
  0x0041E597: mov      ecx, dword ptr [eax + 0x60]
  0x0041E59A: push     ecx
  0x0041E59B: push     ebx
  0x0041E59C: mov      ecx, esi
  0x0041E59E: call     dword ptr [edx + 0x38]
  0x0041E781: mov      ebx, dword ptr [ebp - 0x24]
  0x0041E784: mov      ecx, dword ptr [edi + 0x68]
  0x0041E787: push     0
  0x0041E789: mov      eax, dword ptr [ecx + 0xc4]
  0x0041E78F: push     eax
  0x0041E790: call     0x430cf0
  0x0041E4F9: add      esp, 0xc
  0x0041E4FC: cmp      eax, -1
  0x0041E4FF: je       0x41e503
  0x0041E51C: test     eax, eax
  0x0041E51E: mov      dword ptr [ebp - 0x24], eax
  0x0041E521: jne      0x41e541
  0x0041E5A1: mov      esi, dword ptr [ebx]
  0x0041E5A3: xor      edx, edx
  0x0041E5A5: test     esi, esi
  0x0041E5A7: lea      eax, [ebp - 0x54]
  0x0041E5AA: lea      ecx, [edi + 0x150]
  0x0041E5B0: setl     dl
  0x0041E5B3: push     eax
  0x0041E5B4: mov      dword ptr [edi + 0x14c], edx
  0x0041E5BA: call     0x4065e0
  0x0041E501: mov      esi, eax
  0x0041E503: mov      eax, dword ptr [ebp - 0x40]
  0x0041E506: mov      edx, dword ptr [ebp - 0x28]
  0x0041E509: mov      eax, dword ptr [eax + 0x18]
  0x0041E50C: add      eax, edx
  0x0041E50E: push     eax
  0x0041E50F: mov      ecx, dword ptr [eax]
  0x0041E511: push     ecx
  0x0041E512: push     esi
  0x0041E513: push     ebx
  0x0041E514: lea      ecx, [ebp - 0x34]
  0x0041E517: call     0x431360
  0x0041E5BF: lea      ecx, [ebp - 0x88]
  0x0041E5C5: call     0x4062a0
  0x0041E5CA: lea      ecx, [ebp - 0x74]
  0x0041E5CD: mov      byte ptr [ebp - 4], 5
  0x0041E5D1: call     0x4062a0
  0x0041E5D6: xor      ecx, ecx
  0x0041E5D8: mov      byte ptr [ebp - 4], 6
  0x0041E5DC: mov      dword ptr [ebp - 0x20], ecx
  0x0041E5DF: mov      eax, dword ptr [edi + 0x68]
  0x0041E5E2: cmp      ecx, dword ptr [eax + 0xd0]
  0x0041E5E8: jge      0x41e73d
  0x0041E5EE: lea      edx, [ecx + ecx*2]
  0x0041E5F1: shl      edx, 3
  0x0041E5F4: sub      edx, ecx
  0x0041E5F6: xor      ecx, ecx
  0x0041E5F8: mov      dword ptr [ebp - 0x64], ecx
  0x0041E5FB: mov      dword ptr [ebp - 0x18], ecx
  0x0041E5FE: lea      edx, [eax + edx*4 + 0xfc]
  0x0041E605: xor      eax, eax
  0x0041E607: mov      dword ptr [ebp - 0x1c], edx
  0x0041E60A: mov      dword ptr [ebp - 0x78], eax
  0x0041E60D: mov      esi, dword ptr [ebp - 0x18]
  0x0041E610: mov      ebx, dword ptr [edx + 0x18]
  0x0041E613: cmp      esi, ebx
  0x0041E615: jge      0x41e6ad
  0x0041E73D: mov      esi, 0x2f95d48
  0x0041E742: lea      ecx, [ebp - 0x74]
  0x0041E745: mov      byte ptr [ebp - 4], 5
  0x0041E749: mov      dword ptr [ebp - 0x74], esi
  0x0041E74C: call     0x4064a0
  0x0041E61B: mov      eax, dword ptr [ebp - 0x1c]
  0x0041E61E: mov      ecx, esi
  0x0041E620: mov      eax, dword ptr [eax + ecx*4 + 0x1c]
  0x0041E624: lea      edx, [eax + eax*8]
  0x0041E627: mov      eax, dword ptr [edi + 0x68]
  0x0041E62A: mov      ecx, dword ptr [eax + 0xbc]
  0x0041E630: mov      eax, dword ptr [ecx + edx*8 + 0x14]
  0x0041E634: cmp      eax, 0xa
  0x0041E637: lea      ebx, [ecx + edx*8]
  0x0041E63A: jne      0x41e641
  0x0041E6AD: mov      edx, dword ptr [edx + 0xc]
  0x0041E6B0: cmp      eax, edx
  0x0041E6B2: jne      0x41e728
  0x0041E751: lea      ecx, [ebp - 0x88]
  0x0041E757: mov      byte ptr [ebp - 4], 4
  0x0041E75B: mov      dword ptr [ebp - 0x88], esi
  0x0041E761: call     0x4064a0
  0x0041E63C: mov      esi, dword ptr [ebx + 0x1c]
  0x0041E63F: jmp      0x41e671
  0x0041E641: dec      eax
  0x0041E642: cmp      eax, 0xb
  0x0041E645: ja       0x41e66e
  0x0041E6B4: cmp      ecx, edx
  0x0041E6B6: jne      0x41e728
  0x0041E728: mov      dword ptr [ebp - 0x24], 0xffffffc0
  0x0041E72F: mov      eax, dword ptr [ebp - 0x20]
  0x0041E732: inc      eax
  0x0041E733: mov      dword ptr [ebp - 0x20], eax
  0x0041E736: mov      ecx, eax
  0x0041E738: jmp      0x41e5df
  0x0041E766: lea      ecx, [ebp - 0x34]
  0x0041E769: mov      byte ptr [ebp - 4], 3
  0x0041E76D: call     0x431340
  0x0041E671: mov      edx, dword ptr [ebp - 0x2c]
  0x0041E674: mov      ecx, dword ptr [ebx + 0x18]
  0x0041E677: add      edx, ecx
  0x0041E679: push     esi
  0x0041E67A: push     edx
  0x0041E67B: lea      ecx, [ebp - 0x88]
  0x0041E681: call     0x4069d0
  0x0041E647: jmp      dword ptr [eax*4 + 0x41e87c]
  0x0041E66E: or       esi, 0xffffffff
  0x0041E671: mov      edx, dword ptr [ebp - 0x2c]
  0x0041E674: mov      ecx, dword ptr [ebx + 0x18]
  0x0041E677: add      edx, ecx
  0x0041E679: push     esi
  0x0041E67A: push     edx
  0x0041E67B: lea      ecx, [ebp - 0x88]
  0x0041E681: call     0x4069d0
  0x0041E6B8: mov      edx, dword ptr [ebp - 0x6c]
  0x0041E6BB: mov      ebx, dword ptr [ebp - 0x80]
  0x0041E6BE: neg      ecx
  0x0041E6C0: sbb      ecx, ecx
  0x0041E6C2: and      ecx, edx
  0x0041E6C4: mov      edx, dword ptr [edi + 0x68]
  0x0041E6C7: neg      eax
  0x0041E6C9: sbb      eax, eax
  0x0041E6CB: mov      esi, ecx
  0x0041E6CD: mov      ecx, dword ptr [ebp - 0x1c]
  0x0041E6D0: and      eax, ebx
  0x0041E6D2: mov      ebx, eax
  0x0041E6D4: mov      eax, dword ptr [ebp - 0x20]
  0x0041E6D7: push     ecx
  0x0041E6D8: mov      ecx, dword ptr [edx + eax*4 + 0xd4]
  0x0041E6DF: push     ecx
  0x0041E6E0: lea      ecx, [ebp - 0x2e0]
  0x0041E6E6: call     0x431a40
  0x0041E5DF: mov      eax, dword ptr [edi + 0x68]
  0x0041E5E2: cmp      ecx, dword ptr [eax + 0xd0]
  0x0041E5E8: jge      0x41e73d
  0x0041E772: mov      dword ptr [ebp - 4], 1
  0x0041E779: call     0x4937a6
  0x0041E686: mov      eax, dword ptr [ebp - 0x28]
  0x0041E689: mov      edx, dword ptr [ebx + 0x18]
  0x0041E68C: add      eax, edx
  0x0041E68E: push     esi
  0x0041E68F: push     eax
  0x0041E690: lea      ecx, [ebp - 0x74]
  0x0041E693: call     0x4069d0
  0x0041E663: xor      esi, esi
  0x0041E665: jmp      0x41e671
  0x0041E667: mov      esi, 4
  0x0041E66C: jmp      0x41e671
  0x0041E64E: mov      esi, 1
  0x0041E653: jmp      0x41e671
  0x0041E655: mov      esi, 2
  0x0041E65A: jmp      0x41e671
  0x0041E65C: mov      esi, 8
  0x0041E661: jmp      0x41e671
  0x0041E6EB: mov      edx, dword ptr [edi + 0x68]
  0x0041E6EE: mov      byte ptr [ebp - 4], 7
  0x0041E6F2: mov      ecx, dword ptr [edx + 0xc4]
  0x0041E6F8: push     ecx
  0x0041E6F9: push     esi
  0x0041E6FA: push     ebx
  0x0041E6FB: mov      ecx, eax
  0x0041E6FD: call     0x4346b0
  0x0041E77E: mov      edi, dword ptr [ebp - 0x38]
  0x0041E781: mov      ebx, dword ptr [ebp - 0x24]
  0x0041E784: mov      ecx, dword ptr [edi + 0x68]
  0x0041E787: push     0
  0x0041E789: mov      eax, dword ptr [ecx + 0xc4]
  0x0041E78F: push     eax
  0x0041E790: call     0x430cf0
  0x0041E698: mov      eax, dword ptr [ebp - 0x18]
  0x0041E69B: mov      ecx, dword ptr [ebp - 0x64]
  0x0041E69E: mov      edx, dword ptr [ebp - 0x1c]
  0x0041E6A1: inc      eax
  0x0041E6A2: mov      dword ptr [ebp - 0x18], eax
  0x0041E6A5: mov      eax, dword ptr [ebp - 0x78]
  0x0041E6A8: jmp      0x41e60d
  0x0041E702: lea      ecx, [ebp - 0x2e0]
  0x0041E708: mov      esi, eax
  0x0041E70A: mov      byte ptr [ebp - 4], 6
  0x0041E70E: call     0x431ab0
  0x0041E60D: mov      esi, dword ptr [ebp - 0x18]
  0x0041E610: mov      ebx, dword ptr [edx + 0x18]
  0x0041E613: cmp      esi, ebx
  0x0041E615: jge      0x41e6ad
  0x0041E713: test     esi, esi
  0x0041E715: je       0x41e72f
  0x0041E72F: mov      eax, dword ptr [ebp - 0x20]
  0x0041E732: inc      eax
  0x0041E733: mov      dword ptr [ebp - 0x20], eax
  0x0041E736: mov      ecx, eax
  0x0041E738: jmp      0x41e5df
  0x0041E717: mov      eax, dword ptr [ebp - 0x20]
  0x0041E71A: mov      dword ptr [ebp - 0x24], esi
  0x0041E71D: inc      eax
  0x0041E71E: mov      dword ptr [ebp - 0x20], eax
  0x0041E721: mov      ecx, eax
  0x0041E723: jmp      0x41e5df

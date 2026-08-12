/**
 * Function: sub_431360
 * Address: 0x00431360
 * Blocks: 144
 * Instructions: 668
 * Analyzed with angr + capstone
 */
void* sub_431360(void) {

  /* Block 1 @ 0x00431360 */
  // push ebp
  // mov ebp, esp
  // push -1
  // push 0x4a0380
  // mov eax, dword ptr fs:[0]
  // push eax
  // mov dword ptr fs:[0], esp
  // sub esp, 0x268
  // mov eax, dword ptr [ebp + 0x14]
  // push ebx
  // push esi
  // push edi
  // mov ebx, ecx
  // mov dword ptr [ebp - 0x10], esp
  // TEST eax, eax (set flags)
  // mov dword ptr [ebp - 0x64], ebx
  // if (equal) goto 0x431396
  /* Block 2 @ 0x00431396 */
  // mov eax, dword ptr [ebx + 4]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x431a25
  /* Block 3 @ 0x00431390 */
  // mov dword ptr [eax], 0
  // mov eax, dword ptr [ebx + 4]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x431a25
  /* Block 4 @ 0x00431A25 */
  // mov ecx, dword ptr [ebp - 0xc]
  // pop edi
  // pop esi
  // mov eax, 0xffffffc5
  // mov dword ptr fs:[0], ecx
  // pop ebx
  // mov esp, ebp
  // pop ebp
  return;
  /* Block 5 @ 0x004313A1 */
  // CMP dword ptr [eax + 4], -1 (set flags)
  // if (equal) goto 0x431a25
  /* Block 6 @ 0x004313AB */
  // xor esi, esi
  // lea ecx, [ebp - 0x60]
  // mov dword ptr [ebp - 0x14], esi
  // call 0x004062A0
  call(0x004062A0);
  /* Block 7 @ 0x004313B8 */
  // mov ecx, 8
  // xor eax, eax
  // lea edi, [ebp - 0x4c]
  // mov dword ptr [ebp - 4], esi
  // rep stosd dword ptr es:[edi], eax
  /* Block 8 @ 0x004313C7 */
  // xor edi, edi
  // lea ecx, [ebp - 0x6c]
  // mov dword ptr [ebp - 0x4c], 0x54444557
  // mov dword ptr [ebp - 0x48], 0x10000
  // mov dword ptr [ebp - 0x1c], esi
  // mov dword ptr [ebp - 0x18], edi
  // call 0x00493768
  call(0x00493768);
  // rep stosd dword ptr es:[edi], eax
  /* Block 9 @ 0x004313E5 */
  // mov esi, dword ptr [ebp + 0x10]
  // mov byte ptr [ebp - 4], 2
  // mov eax, dword ptr [ebp + 0xc]
  // TEST eax, eax (set flags)
  // if (less or equal) goto 0x4315e9
  /* Block 10 @ 0x004315E9 */
  // TEST edi, edi (set flags)
  // if (equal) goto 0x43160f
  /* Block 11 @ 0x004313F7 */
  // TEST esi, esi (set flags)
  // if (not equal) goto 0x4314a9
  /* Block 12 @ 0x0043160F */
  // TEST esi, esi (set flags)
  // if (equal) goto 0x431975
  /* Block 13 @ 0x004315ED */
  // mov ecx, dword ptr [ebx + 4]
  // push 0
  // shl edi, 9
  // mov eax, dword ptr [ecx]
  // push edi
  // call dword ptr [eax + 0x28]
  call(dword ptr [eax + 0x28]);
  /* Block 14 @ 0x004313FF */
  // mov eax, dword ptr [ebp - 0x1c]
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x431450
  /* Block 15 @ 0x004314A9 */
  // mov edi, esi
  // mov dword ptr [ebp - 0x2c], edi
  // mov eax, dword ptr [ebp + 0x14]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x4314bc
  /* Block 16 @ 0x00431975 */
  // CMP dword ptr [ebp - 0x1c], 1 (set flags)
  // if (not equal) goto 0x4319c5
  /* Block 17 @ 0x00431617 */
  // mov eax, dword ptr [ebp - 0x1c]
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x43166c
  /* Block 18 @ 0x004315FB */
  // mov ecx, dword ptr [ebx + 4]
  // lea eax, [ebp - 0x274]
  // push 0x200
  // push eax
  // mov edx, dword ptr [ecx]
  // call dword ptr [edx + 0x38]
  call(dword ptr [edx + 0x38]);
  /* Block 19 @ 0x00431406 */
  // mov eax, dword ptr [ebx + 4]
  // push 1
  // push esi
  // push eax
  // call 0x00430FE0
  call(0x00430FE0);
  /* Block 20 @ 0x00431450 */
  // mov eax, dword ptr [ebp - 0x38]
  // TEST eax, eax (set flags)
  // if (less or equal) goto 0x43149b
  /* Block 21 @ 0x004314BC */
  // mov edx, dword ptr [ebx + 4]
  // mov esi, edi
  // lea ecx, [ebp - 0x60]
  // shl esi, 9
  // push ecx
  // push esi
  // push edx
  // call 0x00431140
  call(0x00431140);
  /* Block 22 @ 0x004314B5 */
  // CMP dword ptr [eax], 0 (set flags)
  // if (not equal) goto 0x4314bc
  /* Block 23 @ 0x0043197B */
  // mov ecx, dword ptr [ebx + 4]
  // push 0
  // push 0
  // mov edx, dword ptr [ecx]
  // call dword ptr [edx + 0x28]
  call(dword ptr [edx + 0x28]);
  /* Block 24 @ 0x004319C5 */
  // mov dword ptr [ebp - 4], 0
  // call 0x004937A6
  call(0x004937A6);
  /* Block 25 @ 0x0043161E */
  // mov ecx, dword ptr [ebx + 4]
  // push 1
  // push 0
  // push ecx
  // call 0x00430FE0
  call(0x00430FE0);
  /* Block 26 @ 0x0043166C */
  // mov ecx, 0x80
  // xor eax, eax
  // lea edi, [ebp - 0x274]
  // xor edx, edx
  /* Block 27 @ 0x00431412 */
  // add esp, 0xc
  // mov dword ptr [ebp - 0x14], eax
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x4319c5
  /* Block 28 @ 0x0043149B */
  // mov eax, dword ptr [ebp - 0x3c]
  // mov edi, eax
  // inc eax
  // mov dword ptr [ebp - 0x2c], edi
  // mov dword ptr [ebp - 0x3c], eax
  goto 0x4314ae;
  /* Block 29 @ 0x00431457 */
  // mov eax, dword ptr [ebp - 0x34]
  // mov ecx, dword ptr [ebx + 4]
  // mov edi, eax
  // push 0
  // mov edx, dword ptr [ecx]
  // mov dword ptr [ebp - 0x2c], edi
  // shl eax, 9
  // push eax
  // call dword ptr [edx + 0x28]
  call(dword ptr [edx + 0x28]);
  /* Block 30 @ 0x004314CF */
  // add esp, 0xc
  // mov dword ptr [ebp - 0x14], eax
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x4319c5
  /* Block 31 @ 0x004314BA */
  // mov dword ptr [eax], edi
  // mov edx, dword ptr [ebx + 4]
  // mov esi, edi
  // lea ecx, [ebp - 0x60]
  // shl esi, 9
  // push ecx
  // push esi
  // push edx
  // call 0x00431140
  call(0x00431140);
  /* Block 32 @ 0x00431987 */
  // mov ecx, dword ptr [ebx + 4]
  // lea edx, [ebp - 0x4c]
  // push 0x20
  // push edx
  // mov eax, dword ptr [ecx]
  // call dword ptr [eax + 0x38]
  call(dword ptr [eax + 0x38]);
  /* Block 33 @ 0x004319D1 */
  // CMP dword ptr [ebp - 0x1c], 1 (set flags)
  // if (not equal) goto 0x4319e7
  /* Block 34 @ 0x0043162B */
  // add esp, 0xc
  // mov dword ptr [ebp - 0x14], eax
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x4319c5
  /* Block 35 @ 0x0043167D */
  // mov ecx, dword ptr [ebx + 4]
  // lea eax, [ebp - 0x60]
  // push edx
  // push eax
  // push ecx
  // mov dword ptr [ebp + 8], esi
  // mov dword ptr [ebp - 0x18], edx
  // mov dword ptr [ebp + 0xc], edx
  // mov dword ptr [ebp + 0x14], edx
  // call 0x00431200
  call(0x00431200);
  /* Block 36 @ 0x00431420 */
  // mov ecx, dword ptr [ebx + 4]
  // push eax
  // push eax
  // mov dword ptr [ebp - 0x1c], 1
  // mov edx, dword ptr [ecx]
  // call dword ptr [edx + 0x28]
  call(dword ptr [edx + 0x28]);
  // mov eax, dword ptr [ebp + 0x14]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x4314bc
  /* Block 37 @ 0x0043146D */
  // mov ecx, dword ptr [ebx + 4]
  // lea edx, [ebp - 0x28]
  // push 0xc
  // push edx
  // mov eax, dword ptr [ecx]
  // call dword ptr [eax + 0x34]
  call(dword ptr [eax + 0x34]);
  /* Block 38 @ 0x004314DD */
  // mov eax, dword ptr [ebp + 0x10]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x431514
  /* Block 39 @ 0x00431995 */
  goto 0x4319c5;
  /* Block 40 @ 0x004319D7 */
  // mov ecx, dword ptr [ebx + 4]
  // push 0
  // push 0
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x00431360: push     ebp
  0x00431361: mov      ebp, esp
  0x00431363: push     -1
  0x00431365: push     0x4a0380
  0x0043136A: mov      eax, dword ptr fs:[0]
  0x00431370: push     eax
  0x00431371: mov      dword ptr fs:[0], esp
  0x00431378: sub      esp, 0x268
  0x0043137E: mov      eax, dword ptr [ebp + 0x14]
  0x00431381: push     ebx
  0x00431382: push     esi
  0x00431383: push     edi
  0x00431384: mov      ebx, ecx
  0x00431386: mov      dword ptr [ebp - 0x10], esp
  0x00431389: test     eax, eax
  0x0043138B: mov      dword ptr [ebp - 0x64], ebx
  0x0043138E: je       0x431396
  0x00431396: mov      eax, dword ptr [ebx + 4]
  0x00431399: test     eax, eax
  0x0043139B: je       0x431a25
  0x00431390: mov      dword ptr [eax], 0
  0x00431396: mov      eax, dword ptr [ebx + 4]
  0x00431399: test     eax, eax
  0x0043139B: je       0x431a25
  0x00431A25: mov      ecx, dword ptr [ebp - 0xc]
  0x00431A28: pop      edi
  0x00431A29: pop      esi
  0x00431A2A: mov      eax, 0xffffffc5
  0x00431A2F: mov      dword ptr fs:[0], ecx
  0x00431A36: pop      ebx
  0x00431A37: mov      esp, ebp
  0x00431A39: pop      ebp
  0x00431A3A: ret      0x10
  0x004313A1: cmp      dword ptr [eax + 4], -1
  0x004313A5: je       0x431a25
  0x004313AB: xor      esi, esi
  0x004313AD: lea      ecx, [ebp - 0x60]
  0x004313B0: mov      dword ptr [ebp - 0x14], esi
  0x004313B3: call     0x4062a0
  0x004313B8: mov      ecx, 8
  0x004313BD: xor      eax, eax
  0x004313BF: lea      edi, [ebp - 0x4c]
  0x004313C2: mov      dword ptr [ebp - 4], esi
  0x004313C5: rep stosd dword ptr es:[edi], eax
  0x004313C7: xor      edi, edi
  0x004313C9: lea      ecx, [ebp - 0x6c]
  0x004313CC: mov      dword ptr [ebp - 0x4c], 0x54444557
  0x004313D3: mov      dword ptr [ebp - 0x48], 0x10000
  0x004313DA: mov      dword ptr [ebp - 0x1c], esi
  0x004313DD: mov      dword ptr [ebp - 0x18], edi
  0x004313E0: call     0x493768
  0x004313C5: rep stosd dword ptr es:[edi], eax
  0x004313E5: mov      esi, dword ptr [ebp + 0x10]
  0x004313E8: mov      byte ptr [ebp - 4], 2
  0x004313EC: mov      eax, dword ptr [ebp + 0xc]
  0x004313EF: test     eax, eax
  0x004313F1: jle      0x4315e9
  0x004315E9: test     edi, edi
  0x004315EB: je       0x43160f
  0x004313F7: test     esi, esi
  0x004313F9: jne      0x4314a9
  0x0043160F: test     esi, esi
  0x00431611: je       0x431975
  0x004315ED: mov      ecx, dword ptr [ebx + 4]
  0x004315F0: push     0
  0x004315F2: shl      edi, 9
  0x004315F5: mov      eax, dword ptr [ecx]
  0x004315F7: push     edi
  0x004315F8: call     dword ptr [eax + 0x28]
  0x004313FF: mov      eax, dword ptr [ebp - 0x1c]
  0x00431402: test     eax, eax
  0x00431404: jne      0x431450
  0x004314A9: mov      edi, esi
  0x004314AB: mov      dword ptr [ebp - 0x2c], edi
  0x004314AE: mov      eax, dword ptr [ebp + 0x14]
  0x004314B1: test     eax, eax
  0x004314B3: je       0x4314bc
  0x00431975: cmp      dword ptr [ebp - 0x1c], 1
  0x00431979: jne      0x4319c5
  0x00431617: mov      eax, dword ptr [ebp - 0x1c]
  0x0043161A: test     eax, eax
  0x0043161C: jne      0x43166c
  0x004315FB: mov      ecx, dword ptr [ebx + 4]
  0x004315FE: lea      eax, [ebp - 0x274]
  0x00431604: push     0x200
  0x00431609: push     eax
  0x0043160A: mov      edx, dword ptr [ecx]
  0x0043160C: call     dword ptr [edx + 0x38]
  0x00431406: mov      eax, dword ptr [ebx + 4]
  0x00431409: push     1
  0x0043140B: push     esi
  0x0043140C: push     eax
  0x0043140D: call     0x430fe0
  0x00431450: mov      eax, dword ptr [ebp - 0x38]
  0x00431453: test     eax, eax
  0x00431455: jle      0x43149b
  0x004314BC: mov      edx, dword ptr [ebx + 4]
  0x004314BF: mov      esi, edi
  0x004314C1: lea      ecx, [ebp - 0x60]
  0x004314C4: shl      esi, 9
  0x004314C7: push     ecx
  0x004314C8: push     esi
  0x004314C9: push     edx
  0x004314CA: call     0x431140
  0x004314B5: cmp      dword ptr [eax], 0
  0x004314B8: jne      0x4314bc
  0x0043197B: mov      ecx, dword ptr [ebx + 4]
  0x0043197E: push     0
  0x00431980: push     0
  0x00431982: mov      edx, dword ptr [ecx]
  0x00431984: call     dword ptr [edx + 0x28]
  0x004319C5: mov      dword ptr [ebp - 4], 0
  0x004319CC: call     0x4937a6
  0x0043161E: mov      ecx, dword ptr [ebx + 4]
  0x00431621: push     1
  0x00431623: push     0
  0x00431625: push     ecx
  0x00431626: call     0x430fe0
  0x0043166C: mov      ecx, 0x80
  0x00431671: xor      eax, eax
  0x00431673: lea      edi, [ebp - 0x274]
  0x00431679: xor      edx, edx
  0x0043167B: rep stosd dword ptr es:[edi], eax
  0x00431412: add      esp, 0xc
  0x00431415: mov      dword ptr [ebp - 0x14], eax
  0x00431418: test     eax, eax
  0x0043141A: jne      0x4319c5
  0x0043149B: mov      eax, dword ptr [ebp - 0x3c]
  0x0043149E: mov      edi, eax
  0x004314A0: inc      eax
  0x004314A1: mov      dword ptr [ebp - 0x2c], edi
  0x004314A4: mov      dword ptr [ebp - 0x3c], eax
  0x004314A7: jmp      0x4314ae
  0x00431457: mov      eax, dword ptr [ebp - 0x34]
  0x0043145A: mov      ecx, dword ptr [ebx + 4]
  0x0043145D: mov      edi, eax
  0x0043145F: push     0
  0x00431461: mov      edx, dword ptr [ecx]
  0x00431463: mov      dword ptr [ebp - 0x2c], edi
  0x00431466: shl      eax, 9
  0x00431469: push     eax
  0x0043146A: call     dword ptr [edx + 0x28]
  0x004314CF: add      esp, 0xc
  0x004314D2: mov      dword ptr [ebp - 0x14], eax
  0x004314D5: test     eax, eax
  0x004314D7: jne      0x4319c5
  0x004314BA: mov      dword ptr [eax], edi
  0x004314BC: mov      edx, dword ptr [ebx + 4]
  0x004314BF: mov      esi, edi
  0x004314C1: lea      ecx, [ebp - 0x60]
  0x004314C4: shl      esi, 9
  0x004314C7: push     ecx
  0x004314C8: push     esi
  0x004314C9: push     edx
  0x004314CA: call     0x431140
  0x00431987: mov      ecx, dword ptr [ebx + 4]
  0x0043198A: lea      edx, [ebp - 0x4c]
  0x0043198D: push     0x20
  0x0043198F: push     edx
  0x00431990: mov      eax, dword ptr [ecx]
  0x00431992: call     dword ptr [eax + 0x38]
  0x004319D1: cmp      dword ptr [ebp - 0x1c], 1
  0x004319D5: jne      0x4319e7
  0x0043162B: add      esp, 0xc
  0x0043162E: mov      dword ptr [ebp - 0x14], eax
  0x00431631: test     eax, eax
  0x00431633: jne      0x4319c5
  0x0043167D: mov      ecx, dword ptr [ebx + 4]
  0x00431680: lea      eax, [ebp - 0x60]
  0x00431683: push     edx
  0x00431684: push     eax
  0x00431685: push     ecx
  0x00431686: mov      dword ptr [ebp + 8], esi
  0x00431689: mov      dword ptr [ebp - 0x18], edx
  0x0043168C: mov      dword ptr [ebp + 0xc], edx
  0x0043168F: mov      dword ptr [ebp + 0x14], edx
  0x00431692: call     0x431200
  0x0043167B: rep stosd dword ptr es:[edi], eax
  0x00431420: mov      ecx, dword ptr [ebx + 4]
  0x00431423: push     eax
  0x00431424: push     eax
  0x00431425: mov      dword ptr [ebp - 0x1c], 1
  0x0043142C: mov      edx, dword ptr [ecx]
  0x0043142E: call     dword ptr [edx + 0x28]
  0x004314AE: mov      eax, dword ptr [ebp + 0x14]
  0x004314B1: test     eax, eax
  0x004314B3: je       0x4314bc
  0x0043146D: mov      ecx, dword ptr [ebx + 4]
  0x00431470: lea      edx, [ebp - 0x28]
  0x00431473: push     0xc
  0x00431475: push     edx
  0x00431476: mov      eax, dword ptr [ecx]
  0x00431478: call     dword ptr [eax + 0x34]
  0x004314DD: mov      eax, dword ptr [ebp + 0x10]
  0x004314E0: test     eax, eax
  0x004314E2: je       0x431514
  0x00431995: jmp      0x4319c5
  0x004319D7: mov      ecx, dword ptr [ebx + 4]
  0x004319DA: push     0
  0x004319DC: push     0
  0x004319DE: push     ecx
  0x004319DF: call     0x430fe0
  0x004319E7: mov      eax, dword ptr [ebx + 4]
  0x004319EA: lea      edx, [ebp - 0x60]
  0x004319ED: push     0
  0x004319EF: push     edx
  0x004319F0: push     eax
  0x004319F1: call     0x431200
  0x00431639: mov      ecx, dword ptr [ebx + 4]
  0x0043163C: push     eax
  0x0043163D: push     eax
  0x0043163E: mov      dword ptr [ebp - 0x1c], 1
  0x00431645: mov      edx, dword ptr [ecx]
  0x00431647: call     dword ptr [edx + 0x28]
  0x00431697: add      esp, 0xc
  0x0043169A: mov      eax, esi
  0x0043169C: mov      ecx, dword ptr [ebp + 0x14]
  0x0043169F: test     ecx, ecx
  0x004316A1: jne      0x4317e9
  0x00431431: mov      ecx, dword ptr [ebx + 4]
  0x00431434: lea      edx, [ebp - 0x4c]
  0x00431437: push     0x20
  0x00431439: push     edx
  0x0043143A: mov      eax, dword ptr [ecx]
  0x0043143C: call     dword ptr [eax + 0x34]
  0x0043147B: cmp      eax, 0xc
  0x0043147E: je       0x43148c
  0x00431514: mov      esi, dword ptr [ebp - 0x18]
  0x00431517: test     esi, esi
  0x00431519: je       0x431557
  0x004314E4: mov      ecx, dword ptr [ebx + 4]
  0x004314E7: push     0
  0x004314E9: push     esi
  0x004314EA: mov      eax, dword ptr [ecx]
  0x004314EC: call     dword ptr [eax + 0x28]
  0x004319E4: add      esp, 0xc
  0x004319E7: mov      eax, dword ptr [ebx + 4]
  0x004319EA: lea      edx, [ebp - 0x60]
  0x004319ED: push     0
  0x004319EF: push     edx
  0x004319F0: push     eax
  0x004319F1: call     0x431200
  0x004319F6: add      esp, 0xc
  0x004319F9: lea      ecx, [ebp - 0x60]
  0x004319FC: mov      dword ptr [ebp - 4], 0xffffffff
  0x00431A03: mov      dword ptr [ebp - 0x60], 0x2f9645c
  0x00431A0A: call     0x4064a0
  0x0043164A: mov      ecx, dword ptr [ebx + 4]
  0x0043164D: lea      edx, [ebp - 0x4c]
  0x00431650: push     0x20
  0x00431652: push     edx
  0x00431653: mov      eax, dword ptr [ecx]
  0x00431655: call     dword ptr [eax + 0x34]
  0x004316A7: mov      edx, dword ptr [ebp - 0x3c]
  0x004316AA: dec      edx
  0x004316AB: cmp      eax, edx
  0x004316AD: jne      0x4316b6
  0x004317E9: mov      eax, dword ptr [ebp + 0xc]
  0x004317EC: mov      edi, dword ptr [ebp - 0x38]
  0x004317EF: mov      edx, dword ptr [ebx + 4]
  0x004317F2: lea      ecx, [ebp - 0x60]
  0x004317F5: push     0
  0x004317F7: add      edi, eax
  0x004317F9: push     ecx
  0x004317FA: push     edx
  0x004317FB: mov      dword ptr [ebp - 0x34], esi
  0x004317FE: mov      dword ptr [ebp - 0x38], edi
  0x00431801: call     0x431200
  0x0043143F: cmp      eax, 0x20
  0x00431442: je       0x431450
  0x0043148C: mov      eax, dword ptr [ebp - 0x24]
  0x0043148F: mov      dword ptr [ebp - 0x34], eax
  0x00431492: mov      eax, dword ptr [ebp - 0x38]
  0x00431495: dec      eax
  0x00431496: mov      dword ptr [ebp - 0x38], eax
  0x00431499: jmp      0x4314ae
  0x00431480: mov      dword ptr [ebp - 0x14], 0xffffffc5
  0x00431487: jmp      0x4319c5
  0x00431557: mov      edx, dword ptr [ebp + 0xc]
  0x0043155A: cmp      edx, 0x1f4
  0x00431560: jbe      0x431567
  0x0043151B: mov      edx, dword ptr [ebp - 0x2c]
  0x0043151E: mov      ecx, dword ptr [ebx + 4]
  0x00431521: mov      dword ptr [ebp - 0x270], edx
  0x00431527: push     0
  0x00431529: mov      eax, dword ptr [ecx]
  0x0043152B: shl      esi, 9
  0x0043152E: push     esi
  0x0043152F: call     dword ptr [eax + 0x28]
  0x004314EF: mov      ecx, dword ptr [ebx + 4]
  0x004314F2: lea      eax, [ebp - 0x28]
  0x004314F5: push     0xc
  0x004314F7: push     eax
  0x004314F8: mov      edx, dword ptr [ecx]
  0x004314FA: call     dword ptr [edx + 0x34]
  0x00431A0F: mov      eax, dword ptr [ebp - 0x14]
  0x00431A12: mov      ecx, dword ptr [ebp - 0xc]
  0x00431A15: mov      dword ptr fs:[0], ecx
  0x00431A1C: pop      edi
  0x00431A1D: pop      esi
  0x00431A1E: pop      ebx
  0x00431A1F: mov      esp, ebp
  0x00431A21: pop      ebp
  0x00431A22: ret      0x10
  0x00431658: cmp      eax, 0x20
  0x0043165B: je       0x431669
  0x004316AF: mov      dword ptr [ebp - 0x18], 1
  0x004316B6: mov      ecx, dword ptr [ebx + 4]
  0x004316B9: mov      esi, eax
  0x004316BB: lea      eax, [ebp - 0x60]
  0x004316BE: shl      esi, 9
  0x004316C1: push     eax
  0x004316C2: push     esi
  0x004316C3: push     ecx
  0x004316C4: call     0x431290
  0x004316B6: mov      ecx, dword ptr [ebx + 4]
  0x004316B9: mov      esi, eax
  0x004316BB: lea      eax, [ebp - 0x60]
  0x004316BE: shl      esi, 9
  0x004316C1: push     eax
  0x004316C2: push     esi
  0x004316C3: push     ecx
  0x004316C4: call     0x431290
  0x00431806: mov      eax, dword ptr [ebp - 0x18]
  0x00431809: add      esp, 0xc
  0x0043180C: cmp      eax, 1
  0x0043180F: jne      0x431975
  0x00431444: mov      dword ptr [ebp - 0x14], 0xffffffc5
  0x0043144B: jmp      0x4319c5
  0x00431567: mov      eax, dword ptr [ebp + 8]
  0x0043156A: test     eax, eax
  0x0043156C: je       0x4315a9
  0x00431562: mov      edx, 0x1f4
  0x00431567: mov      eax, dword ptr [ebp + 8]
  0x0043156A: test     eax, eax
  0x0043156C: je       0x4315a9
  0x00431532: mov      ecx, dword ptr [ebx + 4]
  0x00431535: lea      eax, [ebp - 0x274]
  0x0043153B: push     0x200
  0x00431540: push     eax
  0x00431541: mov      edx, dword ptr [ecx]
  0x00431543: call     dword ptr [edx + 0x38]
  0x004314FD: cmp      eax, 0xc
  0x00431500: je       0x43150e
  0x00431669: mov      esi, dword ptr [ebp + 0x10]
  0x0043166C: mov      ecx, 0x80
  0x00431671: xor      eax, eax
  0x00431673: lea      edi, [ebp - 0x274]
  0x00431679: xor      edx, edx
  0x0043167B: rep stosd dword ptr es:[edi], eax
  0x0043165D: mov      dword ptr [ebp - 0x14], 0xffffffc5
  0x00431664: jmp      0x4319c5
  0x004316C9: add      esp, 0xc
  0x004316CC: mov      dword ptr [ebp - 0x14], eax
  0x004316CF: test     eax, eax
  0x004316D1: jne      0x4319c5
  0x00431815: mov      eax, dword ptr [ebp - 0x3c]
  0x00431818: dec      eax
  0x00431819: mov      dword ptr [ebp + 8], eax
  0x0043181C: mov      edi, dword ptr [ebp + 8]
  0x0043181F: test     edi, edi
  0x00431821: jle      0x431945
  0x004315A9: mov      ecx, 0x7d
  0x004315AE: xor      eax, eax
  0x004315B0: lea      edi, [ebp - 0x268]
  0x004315B6: rep stosd dword ptr es:[edi], eax
  0x0043156E: mov      ecx, edx
  0x00431570: mov      esi, eax
  0x00431572: mov      eax, ecx
  0x00431574: lea      edi, [ebp - 0x268]
  0x0043157A: shr      ecx, 2
  0x0043157D: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00431546: mov      edx, dword ptr [ebx + 4]
  0x00431549: lea      ecx, [ebp - 0x60]
  0x0043154C: push     ecx
  0x0043154D: push     esi
  0x0043154E: push     edx
  0x0043154F: call     0x4311a0
  0x0043150E: mov      ecx, dword ptr [ebp - 0x24]
  0x00431511: mov      dword ptr [ebp + 0x10], ecx
  0x00431514: mov      esi, dword ptr [ebp - 0x18]
  0x00431517: test     esi, esi
  0x00431519: je       0x431557
  0x00431502: mov      dword ptr [ebp - 0x14], 0xffffffc5
  0x00431509: jmp      0x4319c5
  0x004316D7: mov      ecx, dword ptr [ebx + 4]
  0x004316DA: xor      edi, edi
  0x004316DC: push     edi
  0x004316DD: push     esi
  0x004316DE: mov      edx, dword ptr [ecx]
  0x004316E0: call     dword ptr [edx + 0x28]
  0x00431945: mov      edx, dword ptr [ebx + 4]
  0x00431948: lea      ecx, [ebp - 0x60]
  0x0043194B: push     0
  0x0043194D: push     ecx
  0x0043194E: push     edx
  0x0043194F: call     0x431200
  0x00431827: mov      edx, dword ptr [ebx + 4]
  0x0043182A: mov      esi, edi
  0x0043182C: lea      ecx, [ebp - 0x60]
  0x0043182F: shl      esi, 9
  0x00431832: push     ecx
  0x00431833: push     esi
  0x00431834: push     edx
  0x00431835: call     0x431290
  0x004315B8: mov      eax, dword ptr [ebp + 0xc]
  0x004315BB: mov      ecx, dword ptr [ebp - 0x18]
  0x004315BE: mov      esi, dword ptr [ebp + 0x10]
  0x004315C1: sub      eax, edx
  0x004315C3: mov      dword ptr [ebp - 0x26c], edx
  0x004315C9: mov      edx, dword ptr [ebp - 0x2c]
  0x004315CC: mov      dword ptr [ebp + 0xc], eax
  0x004315CF: mov      dword ptr [ebp - 0x274], ecx
  0x004315D5: mov      dword ptr [ebp - 0x270], 0
  0x004315DF: mov      dword ptr [ebp - 0x18], edx
  0x004315E2: mov      edi, edx
  0x004315E4: jmp      0x4313ec
  0x004315B6: rep stosd dword ptr es:[edi], eax
  0x0043157F: mov      ecx, eax
  0x00431581: xor      eax, eax
  0x00431583: and      ecx, 3
  0x00431586: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0043157D: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x00431554: add      esp, 0xc
  0x00431557: mov      edx, dword ptr [ebp + 0xc]
  0x0043155A: cmp      edx, 0x1f4
  0x00431560: jbe      0x431567
  0x004316E3: mov      ecx, dword ptr [ebx + 4]
  0x004316E6: lea      edx, [ebp - 0x274]
  0x004316EC: push     0xc
  0x004316EE: push     edx
  0x004316EF: mov      eax, dword ptr [ecx]
  0x004316F1: call     dword ptr [eax + 0x34]
  0x00431954: mov      eax, dword ptr [ebp - 0x3c]
  0x00431957: add      esp, 0xc
  0x0043195A: inc      edi
  0x0043195B: cmp      eax, edi
  0x0043195D: je       0x43196e
  0x0043183A: add      esp, 0xc
  0x0043183D: mov      dword ptr [ebp - 0x14], eax
  0x00431840: test     eax, eax
  0x00431842: jne      0x431945
  0x004313EC: mov      eax, dword ptr [ebp + 0xc]
  0x004313EF: test     eax, eax
  0x004313F1: jle      0x4315e9
  0x00431588: mov      ecx, 0x1f4
  0x0043158D: lea      edi, [ebp + edx - 0x268]
  0x00431594: sub      ecx, edx
  0x00431596: mov      esi, ecx
  0x00431598: shr      ecx, 2
  0x0043159B: rep stosd dword ptr es:[edi], eax
  0x00431586: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x004316F4: cmp      eax, 0xc
  0x004316F7: je       0x431705
  0x0043196E: mov      eax, dword ptr [ebp - 0x14]
  0x00431971: test     eax, eax
  0x00431973: jne      0x4319c5
  0x0043195F: mov      ecx, dword ptr [ebx + 4]
  0x00431962: mov      dword ptr [ebp - 0x3c], edi
  0x00431965: shl      edi, 9
  0x00431968: mov      eax, dword ptr [ecx]
  0x0043196A: push     edi
  0x0043196B: call     dword ptr [eax + 0x2c]
  0x00431848: mov      ecx, dword ptr [ebx + 4]
  0x0043184B: push     0
  0x0043184D: push     esi
  0x0043184E: mov      eax, dword ptr [ecx]
  0x00431850: call     dword ptr [eax + 0x28]
  0x0043159D: mov      ecx, esi
  0x0043159F: and      ecx, 3
  0x004315A2: rep stosb byte ptr es:[edi], al
  0x0043159B: rep stosd dword ptr es:[edi], eax
  0x00431705: mov      eax, dword ptr [ebp + 0xc]
  0x00431708: mov      dword ptr [ebp - 0x26c], edi
  0x0043170E: cmp      eax, edi
  0x00431710: jne      0x431718
  0x004316F9: mov      dword ptr [ebp - 0x14], 0xffffffc5
  0x00431700: jmp      0x4319c5
  0x00431853: mov      ecx, dword ptr [ebx + 4]
  0x00431856: lea      eax, [ebp - 0x28]
  0x00431859: push     0xc
  0x0043185B: push     eax
  0x0043185C: mov      edx, dword ptr [ecx]
  0x0043185E: call     dword ptr [edx + 0x34]
  0x004315A4: add      dword ptr [ebp + 8], edx
  0x004315A7: jmp      0x4315b8
  0x004315A2: rep stosb byte ptr es:[edi], al
  0x00431712: mov      dword ptr [ebp - 0x274], edi
  0x00431718: cmp      dword ptr [ebp - 0x270], edi
  0x0043171E: jne      0x4317b2
  0x00431718: cmp      dword ptr [ebp - 0x270], edi
  0x0043171E: jne      0x4317b2
  0x00431861: cmp      eax, 0xc
  0x00431864: je       0x431872
  0x00431724: mov      eax, dword ptr [ebp - 0x34]
  0x00431727: mov      dword ptr [ebp + 0x14], 1
  0x0043172E: test     eax, eax
  0x00431730: mov      dword ptr [ebp - 0x270], eax
  0x00431736: je       0x4317b2
  0x004317B2: mov      ecx, dword ptr [ebx + 4]
  0x004317B5: push     0
  0x004317B7: push     esi
  0x004317B8: mov      edx, dword ptr [ecx]
  0x004317BA: call     dword ptr [edx + 0x28]
  0x00431872: mov      eax, dword ptr [ebp - 0x20]
  0x00431875: test     eax, eax
  0x00431877: jg       0x431945
  0x00431866: mov      dword ptr [ebp - 0x14], 0xffffffc5
  0x0043186D: jmp      0x431945
  0x00431738: mov      ecx, dword ptr [ebx + 4]
  0x0043173B: shl      eax, 9
  0x0043173E: mov      edi, eax
  0x00431740: lea      eax, [ebp - 0x60]
  0x00431743: push     eax
  0x00431744: push     edi
  0x00431745: push     ecx
  0x00431746: call     0x431140
  0x004317BD: mov      ecx, dword ptr [ebx + 4]
  0x004317C0: lea      edx, [ebp - 0x274]
  0x004317C6: push     0x200
  0x004317CB: push     edx
  0x004317CC: mov      eax, dword ptr [ecx]
  0x004317CE: call     dword ptr [eax + 0x38]
  0x0043187D: mov      eax, dword ptr [ebp - 0x28]
  0x00431880: mov      ecx, dword ptr [ebp + 8]
  0x00431883: mov      edx, dword ptr [ebp - 0x34]
  0x00431886: mov      esi, dword ptr [ebp - 0x24]
  0x00431889: mov      edi, eax
  0x0043188B: cmp      ecx, edx
  0x0043188D: mov      dword ptr [ebp + 0x10], edi
  0x00431890: jne      0x431899
  0x0043174B: add      esp, 0xc
  0x0043174E: mov      dword ptr [ebp - 0x14], eax
  0x00431751: test     eax, eax
  0x00431753: jne      0x4319c5
  0x004317D1: mov      eax, dword ptr [ebp + 0xc]
  0x004317D4: mov      esi, dword ptr [ebp + 0x10]
  0x004317D7: inc      eax
  0x004317D8: mov      dword ptr [ebp + 0xc], eax
  0x004317DB: mov      eax, dword ptr [ebp - 0x270]
  0x004317E1: mov      dword ptr [ebp + 8], eax
  0x004317E4: jmp      0x43169c
  0x00431892: xor      edi, edi
  0x00431894: mov      dword ptr [ebp - 0x34], esi
  0x00431897: jmp      0x4318df
  0x00431899: test     eax, eax
  0x0043189B: je       0x4318df
  0x00431759: mov      ecx, dword ptr [ebx + 4]
  0x0043175C: push     eax
  0x0043175D: push     edi
  0x0043175E: mov      edx, dword ptr [ecx]
  0x00431760: call     dword ptr [edx + 0x28]
  0x0043169C: mov      ecx, dword ptr [ebp + 0x14]
  0x0043169F: test     ecx, ecx
  0x004316A1: jne      0x4317e9
  0x004318DF: test     esi, esi
  0x004318E1: je       0x431920
  0x0043189D: mov      ecx, dword ptr [ebx + 4]
  0x004318A0: push     0
  0x004318A2: shl      eax, 9
  0x004318A5: mov      edx, dword ptr [ecx]
  0x004318A7: mov      edi, eax
  0x004318A9: push     edi
  0x004318AA: call     dword ptr [edx + 0x28]
  0x00431763: mov      ecx, dword ptr [ebx + 4]
  0x00431766: lea      edx, [ebp - 0x28]
  0x00431769: push     0xc
  0x0043176B: push     edx
  0x0043176C: mov      eax, dword ptr [ecx]
  0x0043176E: call     dword ptr [eax + 0x34]
  0x00431920: mov      ecx, dword ptr [ebp + 8]
  0x00431923: mov      eax, dword ptr [ebp - 0x38]
  0x00431926: dec      ecx
  0x00431927: test     eax, eax
  0x00431929: mov      dword ptr [ebp + 8], ecx
  0x0043192C: jle      0x43181c
  0x004318E3: mov      ecx, dword ptr [ebx + 4]
  0x004318E6: push     0
  0x004318E8: shl      esi, 9
  0x004318EB: mov      edx, dword ptr [ecx]
  0x004318ED: push     esi
  0x004318EE: call     dword ptr [edx + 0x28]
  0x004318AD: mov      ecx, dword ptr [ebx + 4]
  0x004318B0: lea      edx, [ebp - 0x28]
  0x004318B3: push     0xc
  0x004318B5: push     edx
  0x004318B6: mov      eax, dword ptr [ecx]
  0x004318B8: call     dword ptr [eax + 0x34]
  0x00431771: cmp      eax, 0xc
  0x00431774: je       0x431782
  0x0043181C: mov      edi, dword ptr [ebp + 8]
  0x0043181F: test     edi, edi
  0x00431821: jle      0x431945
  0x00431932: dec      eax
  0x00431933: mov      dword ptr [ebp - 0x38], eax
  0x00431936: jmp      0x43181c
  0x004318F1: mov      ecx, dword ptr [ebx + 4]
  0x004318F4: lea      edx, [ebp - 0x28]
  0x004318F7: push     0xc
  0x004318F9: push     edx
  0x004318FA: mov      eax, dword ptr [ecx]
  0x004318FC: call     dword ptr [eax + 0x34]
  0x004318BB: cmp      eax, 0xc
  0x004318BE: jne      0x43193b
  0x00431782: mov      eax, dword ptr [ebp + 8]
  0x00431785: mov      ecx, dword ptr [ebx + 4]
  0x00431788: mov      dword ptr [ebp - 0x28], eax
  0x0043178B: push     0
  0x0043178D: mov      edx, dword ptr [ecx]
  0x0043178F: push     edi
  0x00431790: call     dword ptr [edx + 0x28]
  0x00431776: mov      dword ptr [ebp - 0x14], 0xffffffc5
  0x0043177D: jmp      0x4319c5
  0x004318FF: cmp      eax, 0xc
  0x00431902: jne      0x43193b
  0x004318C0: mov      ecx, dword ptr [ebx + 4]
  0x004318C3: mov      dword ptr [ebp - 0x24], esi
  0x004318C6: push     0
  0x004318C8: push     edi
  0x004318C9: mov      eax, dword ptr [ecx]
  0x004318CB: call     dword ptr [eax + 0x28]
  0x0043193B: mov      edi, dword ptr [ebp + 8]
  0x0043193E: mov      dword ptr [ebp - 0x14], 0xffffffc5
  0x00431945: mov      edx, dword ptr [ebx + 4]
  0x00431948: lea      ecx, [ebp - 0x60]
  0x0043194B: push     0
  0x0043194D: push     ecx
  0x0043194E: push     edx
  0x0043194F: call     0x431200
  0x00431793: mov      ecx, dword ptr [ebx + 4]
  0x00431796: lea      edx, [ebp - 0x28]
  0x00431799: push     0xc
  0x0043179B: push     edx
  0x0043179C: mov      eax, dword ptr [ecx]
  0x0043179E: call     dword ptr [eax + 0x38]
  0x00431904: mov      ecx, dword ptr [ebx + 4]
  0x00431907: mov      dword ptr [ebp - 0x28], edi
  0x0043190A: push     0
  0x0043190C: push     esi
  0x0043190D: mov      eax, dword ptr [ecx]
  0x0043190F: call     dword ptr [eax + 0x28]
  0x004318CE: mov      ecx, dword ptr [ebx + 4]
  0x004318D1: lea      eax, [ebp - 0x28]
  0x004318D4: push     0xc
  0x004318D6: push     eax
  0x004318D7: mov      edx, dword ptr [ecx]
  0x004318D9: call     dword ptr [edx + 0x38]
  0x004317A1: mov      ecx, dword ptr [ebx + 4]
  0x004317A4: lea      eax, [ebp - 0x60]
  0x004317A7: push     eax
  0x004317A8: push     edi
  0x004317A9: push     ecx
  0x004317AA: call     0x4311a0
  0x00431912: mov      ecx, dword ptr [ebx + 4]
  0x00431915: lea      eax, [ebp - 0x28]
  0x00431918: push     0xc
  0x0043191A: push     eax
  0x0043191B: mov      edx, dword ptr [ecx]
  0x0043191D: call     dword ptr [edx + 0x38]
  0x004318DC: mov      edi, dword ptr [ebp + 0x10]
  0x004318DF: test     esi, esi
  0x004318E1: je       0x431920
  0x004317AF: add      esp, 0xc
  0x004317B2: mov      ecx, dword ptr [ebx + 4]
  0x004317B5: push     0
  0x004317B7: push     esi
  0x004317B8: mov      edx, dword ptr [ecx]
  0x004317BA: call     dword ptr [edx + 0x28]

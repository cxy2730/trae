/**
 * Function: sub_48f56f
 * Address: 0x0048F56F
 * Blocks: 146
 * Instructions: 496
 * Analyzed with angr + capstone
 */
void* sub_48f56f(void) {

  /* Block 1 @ 0x0048F56F */
  // push ebp
  // mov ebp, esp
  // sub esp, 0x5c
  // push ebx
  // push esi
  // push edi
  // mov edi, dword ptr [ebp + 0x10]
  // lea eax, [ebp - 0x5c]
  // push 1
  // mov dword ptr [ebp - 0xc], eax
  // xor eax, eax
  // pop edx
  // mov dword ptr [ebp - 0x28], eax
  // mov dword ptr [ebp - 0x18], edx
  // mov dword ptr [ebp - 4], eax
  // mov dword ptr [ebp - 0x10], eax
  // mov dword ptr [ebp - 0x24], eax
  // mov dword ptr [ebp - 0x20], eax
  // mov dword ptr [ebp - 0x2c], eax
  // mov dword ptr [ebp - 0x30], eax
  // mov dword ptr [ebp - 0x1c], eax
  // mov dword ptr [ebp - 8], eax
  // mov dword ptr [ebp - 0x14], eax
  // mov dword ptr [ebp + 0x10], edi
  // mov cl, byte ptr [edi]
  // CMP cl, 0x20 (set flags)
  // if (equal) goto 0x48f5c0
  /* Block 2 @ 0x0048F5C0 */
  // inc edi
  goto 0x48f5aa;
  /* Block 3 @ 0x0048F5B1 */
  // CMP cl, 9 (set flags)
  // if (equal) goto 0x48f5c0
  // mov cl, byte ptr [edi]
  // CMP cl, 0x20 (set flags)
  // if (equal) goto 0x48f5c0
  /* Block 4 @ 0x0048F5B6 */
  // CMP cl, 0xa (set flags)
  // if (equal) goto 0x48f5c0
  /* Block 5 @ 0x0048F5BB */
  // CMP cl, 0xd (set flags)
  // if (not equal) goto 0x48f5c3
  /* Block 6 @ 0x0048F5C3 */
  // push 4
  // pop esi
  // mov bl, byte ptr [edi]
  // inc edi
  // CMP eax, 0xb (set flags)
  // if (above) goto 0x48f849
  /* Block 7 @ 0x0048F5D2 */
  goto dword ptr [eax*4 + 0x48fa10];
  /* Block 8 @ 0x0048F849 */
  // CMP eax, 0xa (set flags)
  // if (equal) goto 0x48f8e7
  /* Block 9 @ 0x0048F8E7 */
  // mov eax, dword ptr [ebp + 0xc]
  // CMP dword ptr [ebp - 0x10], 0 (set flags)
  // mov dword ptr [eax], edi
  // if (equal) goto 0x48f9cf
  /* Block 10 @ 0x0048F852 */
  goto 0x48f5c6;
  /* Block 11 @ 0x0048F9CF */
  // xor edx, edx
  // xor eax, eax
  // xor esi, esi
  // xor ebx, ebx
  // mov dword ptr [ebp - 0x14], 4
  goto 0x48f9f5;
  /* Block 12 @ 0x0048F8F6 */
  // push 0x18
  // pop eax
  // CMP dword ptr [ebp - 4], eax (set flags)
  // if (below or equal) goto 0x48f913
  // mov bl, byte ptr [edi]
  // inc edi
  // CMP eax, 0xb (set flags)
  // if (above) goto 0x48f849
  /* Block 13 @ 0x0048F9F5 */
  // mov ecx, dword ptr [ebp + 8]
  // or eax, dword ptr [ebp - 0x28]
  // pop edi
  // mov dword ptr [ecx + 6], esi
  // mov dword ptr [ecx + 2], ebx
  // mov word ptr [ecx + 0xa], ax
  // mov eax, dword ptr [ebp - 0x14]
  // pop esi
  // mov word ptr [ecx], dx
  // pop ebx
  return;
  /* Block 14 @ 0x0048F913 */
  // mov eax, dword ptr [ebp - 0xc]
  // CMP dword ptr [ebp - 4], 0 (set flags)
  // if (below or equal) goto 0x48f9c5
  /* Block 15 @ 0x0048F8FE */
  // CMP byte ptr [ebp - 0x45], 5 (set flags)
  // if (less) goto 0x48f907
  /* Block 16 @ 0x0048F9C5 */
  // xor edx, edx
  // xor eax, eax
  // xor esi, esi
  // xor ebx, ebx
  goto 0x48f97a;
  /* Block 17 @ 0x0048F920 */
  // dec eax
  // CMP byte ptr [eax], 0 (set flags)
  // if (not equal) goto 0x48f92e
  /* Block 18 @ 0x0048F907 */
  // mov dword ptr [ebp - 4], eax
  // mov eax, dword ptr [ebp - 0xc]
  // dec eax
  // inc dword ptr [ebp - 8]
  goto 0x48f916;
  /* Block 19 @ 0x0048F904 */
  // inc byte ptr [ebp - 0x45]
  // mov dword ptr [ebp - 4], eax
  // mov eax, dword ptr [ebp - 0xc]
  // dec eax
  // inc dword ptr [ebp - 8]
  goto 0x48f916;
  /* Block 20 @ 0x0048F97A */
  // CMP dword ptr [ebp - 0x2c], 0 (set flags)
  // if (equal) goto 0x48f9e0
  /* Block 21 @ 0x0048F926 */
  // dec dword ptr [ebp - 4]
  // inc dword ptr [ebp - 8]
  goto 0x48f920;
  /* Block 22 @ 0x0048F92E */
  // lea eax, [ebp - 0x40]
  // push eax
  // lea eax, [ebp - 0x5c]
  // push dword ptr [ebp - 4]
  // push eax
  // call 0x004903B7
  call(0x004903B7);
  // CMP dword ptr [ebp - 4], 0 (set flags)
  // if (below or equal) goto 0x48f9c5
  /* Block 23 @ 0x0048F9E0 */
  // CMP dword ptr [ebp - 0x30], 0 (set flags)
  // if (equal) goto 0x48f9f5
  /* Block 24 @ 0x0048F980 */
  // xor ebx, ebx
  // mov eax, 0x7fff
  // mov esi, 0x80000000
  // xor edx, edx
  // mov dword ptr [ebp - 0x14], 2
  goto 0x48f9f5;
  /* Block 25 @ 0x0048F93E */
  // mov eax, dword ptr [ebp - 0x1c]
  // xor ecx, ecx
  // add esp, 0xc
  // CMP dword ptr [ebp - 0x18], ecx (set flags)
  // if (greater or equal) goto 0x48f94d
  /* Block 26 @ 0x0048F9E6 */
  // xor edx, edx
  // xor eax, eax
  // xor esi, esi
  // xor ebx, ebx
  // mov dword ptr [ebp - 0x14], 1
  // mov ecx, dword ptr [ebp + 8]
  // or eax, dword ptr [ebp - 0x28]
  // pop edi
  // mov dword ptr [ecx + 6], esi
  // mov dword ptr [ecx + 2], ebx
  // mov word ptr [ecx + 0xa], ax
  // mov eax, dword ptr [ebp - 0x14]
  // pop esi
  // mov word ptr [ecx], dx
  // pop ebx
  return;
  /* Block 27 @ 0x0048F94B */
  // add eax, dword ptr [ebp - 8]
  // CMP dword ptr [ebp - 0x20], ecx (set flags)
  // if (not equal) goto 0x48f958
  // add eax, dword ptr [ebp - 8]
  // CMP dword ptr [ebp - 0x20], ecx (set flags)
  // if (not equal) goto 0x48f958
  /* Block 28 @ 0x0048F955 */
  // add eax, dword ptr [ebp + 0x18]
  // CMP dword ptr [ebp - 0x24], ecx (set flags)
  // if (not equal) goto 0x48f960
  // CMP dword ptr [ebp - 0x24], ecx (set flags)
  // if (not equal) goto 0x48f960
  /* Block 29 @ 0x0048F95D */
  // sub eax, dword ptr [ebp + 0x1c]
  // CMP eax, 0x1450 (set flags)
  // if (less or equal) goto 0x48f997
  // CMP eax, 0x1450 (set flags)
  // if (less or equal) goto 0x48f997
  /* Block 30 @ 0x0048F997 */
  // CMP eax, 0xffffebb0 (set flags)
  // if (greater or equal) goto 0x48f9a7
  /* Block 31 @ 0x0048F967 */
  // mov dword ptr [ebp - 0x2c], 1
  // mov ebx, dword ptr [ebp + 0x10]
  // mov esi, dword ptr [ebp + 0x10]
  // mov eax, dword ptr [ebp + 0x10]
  // mov edx, dword ptr [ebp + 0x10]
  // CMP dword ptr [ebp - 0x2c], 0 (set flags)
  // if (equal) goto 0x48f9e0
  /* Block 32 @ 0x0048F99E */
  // mov dword ptr [ebp - 0x30], 1
  goto 0x48f96e;
  /* Block 33 @ 0x0048F9A7 */
  // push dword ptr [ebp + 0x14]
  // push eax
  // lea eax, [ebp - 0x40]
  // push eax
  // call 0x00490931
  call(0x00490931);
  // mov ebx, dword ptr [ebp + 0x10]
  // mov esi, dword ptr [ebp + 0x10]
  // mov eax, dword ptr [ebp + 0x10]
  // mov edx, dword ptr [ebp + 0x10]
  // CMP dword ptr [ebp - 0x2c], 0 (set flags)
  // if (equal) goto 0x48f9e0
  /* Block 34 @ 0x0048F9B4 */
  // mov edx, dword ptr [ebp - 0x40]
  // mov ebx, dword ptr [ebp - 0x3e]
  // mov esi, dword ptr [ebp - 0x3a]
  // mov eax, dword ptr [ebp - 0x36]
  // add esp, 0xc
  goto 0x48f97a;
  /* Block 35 @ 0x0048F5D9 */
  // CMP bl, 0x31 (set flags)
  // if (less) goto 0x48f5ea
  /* Block 36 @ 0x0048F5EA */
  // CMP bl, byte ptr [0x2fd9ac4] (set flags)
  // if (not equal) goto 0x48f5f9
  /* Block 37 @ 0x0048F5DE */
  // CMP bl, 0x39 (set flags)
  // if (greater) goto 0x48f5ea
  /* Block 38 @ 0x0048F5F2 */
  // push 5
  goto 0x48f83f;
  /* Block 39 @ 0x0048F5F9 */
  // movsx eax, bl
  // sub eax, 0x2b
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0048F56F: push     ebp
  0x0048F570: mov      ebp, esp
  0x0048F572: sub      esp, 0x5c
  0x0048F575: push     ebx
  0x0048F576: push     esi
  0x0048F577: push     edi
  0x0048F578: mov      edi, dword ptr [ebp + 0x10]
  0x0048F57B: lea      eax, [ebp - 0x5c]
  0x0048F57E: push     1
  0x0048F580: mov      dword ptr [ebp - 0xc], eax
  0x0048F583: xor      eax, eax
  0x0048F585: pop      edx
  0x0048F586: mov      dword ptr [ebp - 0x28], eax
  0x0048F589: mov      dword ptr [ebp - 0x18], edx
  0x0048F58C: mov      dword ptr [ebp - 4], eax
  0x0048F58F: mov      dword ptr [ebp - 0x10], eax
  0x0048F592: mov      dword ptr [ebp - 0x24], eax
  0x0048F595: mov      dword ptr [ebp - 0x20], eax
  0x0048F598: mov      dword ptr [ebp - 0x2c], eax
  0x0048F59B: mov      dword ptr [ebp - 0x30], eax
  0x0048F59E: mov      dword ptr [ebp - 0x1c], eax
  0x0048F5A1: mov      dword ptr [ebp - 8], eax
  0x0048F5A4: mov      dword ptr [ebp - 0x14], eax
  0x0048F5A7: mov      dword ptr [ebp + 0x10], edi
  0x0048F5AA: mov      cl, byte ptr [edi]
  0x0048F5AC: cmp      cl, 0x20
  0x0048F5AF: je       0x48f5c0
  0x0048F5C0: inc      edi
  0x0048F5C1: jmp      0x48f5aa
  0x0048F5B1: cmp      cl, 9
  0x0048F5B4: je       0x48f5c0
  0x0048F5AA: mov      cl, byte ptr [edi]
  0x0048F5AC: cmp      cl, 0x20
  0x0048F5AF: je       0x48f5c0
  0x0048F5B6: cmp      cl, 0xa
  0x0048F5B9: je       0x48f5c0
  0x0048F5BB: cmp      cl, 0xd
  0x0048F5BE: jne      0x48f5c3
  0x0048F5C3: push     4
  0x0048F5C5: pop      esi
  0x0048F5C6: mov      bl, byte ptr [edi]
  0x0048F5C8: inc      edi
  0x0048F5C9: cmp      eax, 0xb
  0x0048F5CC: ja       0x48f849
  0x0048F5D2: jmp      dword ptr [eax*4 + 0x48fa10]
  0x0048F849: cmp      eax, 0xa
  0x0048F84C: je       0x48f8e7
  0x0048F8E7: mov      eax, dword ptr [ebp + 0xc]
  0x0048F8EA: cmp      dword ptr [ebp - 0x10], 0
  0x0048F8EE: mov      dword ptr [eax], edi
  0x0048F8F0: je       0x48f9cf
  0x0048F852: jmp      0x48f5c6
  0x0048F9CF: xor      edx, edx
  0x0048F9D1: xor      eax, eax
  0x0048F9D3: xor      esi, esi
  0x0048F9D5: xor      ebx, ebx
  0x0048F9D7: mov      dword ptr [ebp - 0x14], 4
  0x0048F9DE: jmp      0x48f9f5
  0x0048F8F6: push     0x18
  0x0048F8F8: pop      eax
  0x0048F8F9: cmp      dword ptr [ebp - 4], eax
  0x0048F8FC: jbe      0x48f913
  0x0048F5C6: mov      bl, byte ptr [edi]
  0x0048F5C8: inc      edi
  0x0048F5C9: cmp      eax, 0xb
  0x0048F5CC: ja       0x48f849
  0x0048F9F5: mov      ecx, dword ptr [ebp + 8]
  0x0048F9F8: or       eax, dword ptr [ebp - 0x28]
  0x0048F9FB: pop      edi
  0x0048F9FC: mov      dword ptr [ecx + 6], esi
  0x0048F9FF: mov      dword ptr [ecx + 2], ebx
  0x0048FA02: mov      word ptr [ecx + 0xa], ax
  0x0048FA06: mov      eax, dword ptr [ebp - 0x14]
  0x0048FA09: pop      esi
  0x0048FA0A: mov      word ptr [ecx], dx
  0x0048FA0D: pop      ebx
  0x0048FA0E: leave    
  0x0048FA0F: ret      
  0x0048F913: mov      eax, dword ptr [ebp - 0xc]
  0x0048F916: cmp      dword ptr [ebp - 4], 0
  0x0048F91A: jbe      0x48f9c5
  0x0048F8FE: cmp      byte ptr [ebp - 0x45], 5
  0x0048F902: jl       0x48f907
  0x0048F9C5: xor      edx, edx
  0x0048F9C7: xor      eax, eax
  0x0048F9C9: xor      esi, esi
  0x0048F9CB: xor      ebx, ebx
  0x0048F9CD: jmp      0x48f97a
  0x0048F920: dec      eax
  0x0048F921: cmp      byte ptr [eax], 0
  0x0048F924: jne      0x48f92e
  0x0048F907: mov      dword ptr [ebp - 4], eax
  0x0048F90A: mov      eax, dword ptr [ebp - 0xc]
  0x0048F90D: dec      eax
  0x0048F90E: inc      dword ptr [ebp - 8]
  0x0048F911: jmp      0x48f916
  0x0048F904: inc      byte ptr [ebp - 0x45]
  0x0048F907: mov      dword ptr [ebp - 4], eax
  0x0048F90A: mov      eax, dword ptr [ebp - 0xc]
  0x0048F90D: dec      eax
  0x0048F90E: inc      dword ptr [ebp - 8]
  0x0048F911: jmp      0x48f916
  0x0048F97A: cmp      dword ptr [ebp - 0x2c], 0
  0x0048F97E: je       0x48f9e0
  0x0048F926: dec      dword ptr [ebp - 4]
  0x0048F929: inc      dword ptr [ebp - 8]
  0x0048F92C: jmp      0x48f920
  0x0048F92E: lea      eax, [ebp - 0x40]
  0x0048F931: push     eax
  0x0048F932: lea      eax, [ebp - 0x5c]
  0x0048F935: push     dword ptr [ebp - 4]
  0x0048F938: push     eax
  0x0048F939: call     0x4903b7
  0x0048F916: cmp      dword ptr [ebp - 4], 0
  0x0048F91A: jbe      0x48f9c5
  0x0048F9E0: cmp      dword ptr [ebp - 0x30], 0
  0x0048F9E4: je       0x48f9f5
  0x0048F980: xor      ebx, ebx
  0x0048F982: mov      eax, 0x7fff
  0x0048F987: mov      esi, 0x80000000
  0x0048F98C: xor      edx, edx
  0x0048F98E: mov      dword ptr [ebp - 0x14], 2
  0x0048F995: jmp      0x48f9f5
  0x0048F93E: mov      eax, dword ptr [ebp - 0x1c]
  0x0048F941: xor      ecx, ecx
  0x0048F943: add      esp, 0xc
  0x0048F946: cmp      dword ptr [ebp - 0x18], ecx
  0x0048F949: jge      0x48f94d
  0x0048F9E6: xor      edx, edx
  0x0048F9E8: xor      eax, eax
  0x0048F9EA: xor      esi, esi
  0x0048F9EC: xor      ebx, ebx
  0x0048F9EE: mov      dword ptr [ebp - 0x14], 1
  0x0048F9F5: mov      ecx, dword ptr [ebp + 8]
  0x0048F9F8: or       eax, dword ptr [ebp - 0x28]
  0x0048F9FB: pop      edi
  0x0048F9FC: mov      dword ptr [ecx + 6], esi
  0x0048F9FF: mov      dword ptr [ecx + 2], ebx
  0x0048FA02: mov      word ptr [ecx + 0xa], ax
  0x0048FA06: mov      eax, dword ptr [ebp - 0x14]
  0x0048FA09: pop      esi
  0x0048FA0A: mov      word ptr [ecx], dx
  0x0048FA0D: pop      ebx
  0x0048FA0E: leave    
  0x0048FA0F: ret      
  0x0048F94B: neg      eax
  0x0048F94D: add      eax, dword ptr [ebp - 8]
  0x0048F950: cmp      dword ptr [ebp - 0x20], ecx
  0x0048F953: jne      0x48f958
  0x0048F94D: add      eax, dword ptr [ebp - 8]
  0x0048F950: cmp      dword ptr [ebp - 0x20], ecx
  0x0048F953: jne      0x48f958
  0x0048F955: add      eax, dword ptr [ebp + 0x18]
  0x0048F958: cmp      dword ptr [ebp - 0x24], ecx
  0x0048F95B: jne      0x48f960
  0x0048F958: cmp      dword ptr [ebp - 0x24], ecx
  0x0048F95B: jne      0x48f960
  0x0048F95D: sub      eax, dword ptr [ebp + 0x1c]
  0x0048F960: cmp      eax, 0x1450
  0x0048F965: jle      0x48f997
  0x0048F960: cmp      eax, 0x1450
  0x0048F965: jle      0x48f997
  0x0048F997: cmp      eax, 0xffffebb0
  0x0048F99C: jge      0x48f9a7
  0x0048F967: mov      dword ptr [ebp - 0x2c], 1
  0x0048F96E: mov      ebx, dword ptr [ebp + 0x10]
  0x0048F971: mov      esi, dword ptr [ebp + 0x10]
  0x0048F974: mov      eax, dword ptr [ebp + 0x10]
  0x0048F977: mov      edx, dword ptr [ebp + 0x10]
  0x0048F97A: cmp      dword ptr [ebp - 0x2c], 0
  0x0048F97E: je       0x48f9e0
  0x0048F99E: mov      dword ptr [ebp - 0x30], 1
  0x0048F9A5: jmp      0x48f96e
  0x0048F9A7: push     dword ptr [ebp + 0x14]
  0x0048F9AA: push     eax
  0x0048F9AB: lea      eax, [ebp - 0x40]
  0x0048F9AE: push     eax
  0x0048F9AF: call     0x490931
  0x0048F96E: mov      ebx, dword ptr [ebp + 0x10]
  0x0048F971: mov      esi, dword ptr [ebp + 0x10]
  0x0048F974: mov      eax, dword ptr [ebp + 0x10]
  0x0048F977: mov      edx, dword ptr [ebp + 0x10]
  0x0048F97A: cmp      dword ptr [ebp - 0x2c], 0
  0x0048F97E: je       0x48f9e0
  0x0048F9B4: mov      edx, dword ptr [ebp - 0x40]
  0x0048F9B7: mov      ebx, dword ptr [ebp - 0x3e]
  0x0048F9BA: mov      esi, dword ptr [ebp - 0x3a]
  0x0048F9BD: mov      eax, dword ptr [ebp - 0x36]
  0x0048F9C0: add      esp, 0xc
  0x0048F9C3: jmp      0x48f97a
  0x0048F5D9: cmp      bl, 0x31
  0x0048F5DC: jl       0x48f5ea
  0x0048F5EA: cmp      bl, byte ptr [0x2fd9ac4]
  0x0048F5F0: jne      0x48f5f9
  0x0048F5DE: cmp      bl, 0x39
  0x0048F5E1: jg       0x48f5ea
  0x0048F5F2: push     5
  0x0048F5F4: jmp      0x48f83f
  0x0048F5F9: movsx    eax, bl
  0x0048F5FC: sub      eax, 0x2b
  0x0048F5FF: je       0x48f61f
  0x0048F5E3: push     3
  0x0048F5E5: jmp      0x48f807
  0x0048F83F: pop      eax
  0x0048F840: jmp      0x48f5c6
  0x0048F61F: and      dword ptr [ebp - 0x28], 0
  0x0048F623: push     2
  0x0048F625: pop      eax
  0x0048F626: jmp      0x48f5c6
  0x0048F601: dec      eax
  0x0048F602: dec      eax
  0x0048F603: je       0x48f613
  0x0048F807: pop      eax
  0x0048F808: dec      edi
  0x0048F809: jmp      0x48f5c6
  0x0048F613: push     2
  0x0048F615: mov      dword ptr [ebp - 0x28], 0x8000
  0x0048F61C: pop      eax
  0x0048F61D: jmp      0x48f5c6
  0x0048F605: sub      eax, 3
  0x0048F608: jne      0x48f8e2
  0x0048F60E: jmp      0x48f6a2
  0x0048F8E2: dec      edi
  0x0048F8E3: jmp      0x48f8e7
  0x0048F6A2: mov      eax, edx
  0x0048F6A4: jmp      0x48f5c6
  0x0048F628: cmp      bl, 0x31
  0x0048F62B: mov      dword ptr [ebp - 0x10], edx
  0x0048F62E: jl       0x48f635
  0x0048F635: cmp      bl, byte ptr [0x2fd9ac4]
  0x0048F63B: je       0x48f6fd
  0x0048F630: cmp      bl, 0x39
  0x0048F633: jle      0x48f5e3
  0x0048F6FD: mov      eax, esi
  0x0048F6FF: jmp      0x48f5c6
  0x0048F641: cmp      bl, 0x2b
  0x0048F644: je       0x48f677
  0x0048F677: dec      edi
  0x0048F678: push     0xb
  0x0048F67A: jmp      0x48f83f
  0x0048F646: cmp      bl, 0x2d
  0x0048F649: je       0x48f677
  0x0048F64B: cmp      bl, 0x30
  0x0048F64E: je       0x48f6a2
  0x0048F650: cmp      bl, 0x43
  0x0048F653: jle      0x48f8e2
  0x0048F659: cmp      bl, 0x45
  0x0048F65C: jle      0x48f670
  0x0048F670: push     6
  0x0048F672: jmp      0x48f83f
  0x0048F65E: cmp      bl, 0x63
  0x0048F661: jle      0x48f8e2
  0x0048F667: cmp      bl, 0x65
  0x0048F66A: jg       0x48f8e2
  0x0048F67F: cmp      bl, 0x31
  0x0048F682: jl       0x48f68d
  0x0048F68D: cmp      bl, byte ptr [0x2fd9ac4]
  0x0048F693: je       0x48f5f2
  0x0048F684: cmp      bl, 0x39
  0x0048F687: jle      0x48f5e3
  0x0048F699: cmp      bl, 0x30
  0x0048F69C: jne      0x48f857
  0x0048F857: mov      edi, dword ptr [ebp + 0x10]
  0x0048F85A: jmp      0x48f8e7
  0x0048F6A9: mov      dword ptr [ebp - 0x10], edx
  0x0048F6AC: cmp      dword ptr [0x2fd9ac0], edx
  0x0048F6B2: jle      0x48f6c5
  0x0048F6C5: mov      ecx, dword ptr [0x2fd98b4]
  0x0048F6CB: movzx    eax, bl
  0x0048F6CE: mov      al, byte ptr [ecx + eax*2]
  0x0048F6D1: and      eax, esi
  0x0048F6D3: test     eax, eax
  0x0048F6D5: je       0x48f6f5
  0x0048F6B4: movzx    eax, bl
  0x0048F6B7: push     esi
  0x0048F6B8: push     eax
  0x0048F6B9: call     0x48a852
  0x0048F6F5: cmp      bl, byte ptr [0x2fd9ac4]
  0x0048F6FB: jne      0x48f764
  0x0048F6D7: cmp      dword ptr [ebp - 4], 0x19
  0x0048F6DB: jae      0x48f6ed
  0x0048F6BE: pop      ecx
  0x0048F6BF: pop      ecx
  0x0048F6C0: push     1
  0x0048F6C2: pop      edx
  0x0048F6C3: jmp      0x48f6d3
  0x0048F764: cmp      bl, 0x2b
  0x0048F767: je       0x48f677
  0x0048F6DD: mov      eax, dword ptr [ebp - 0xc]
  0x0048F6E0: inc      dword ptr [ebp - 4]
  0x0048F6E3: sub      bl, 0x30
  0x0048F6E6: inc      dword ptr [ebp - 0xc]
  0x0048F6E9: mov      byte ptr [eax], bl
  0x0048F6EB: jmp      0x48f6f0
  0x0048F6ED: inc      dword ptr [ebp - 8]
  0x0048F6F0: mov      bl, byte ptr [edi]
  0x0048F6F2: inc      edi
  0x0048F6F3: jmp      0x48f6ac
  0x0048F6D3: test     eax, eax
  0x0048F6D5: je       0x48f6f5
  0x0048F76D: cmp      bl, 0x2d
  0x0048F770: je       0x48f677
  0x0048F6F0: mov      bl, byte ptr [edi]
  0x0048F6F2: inc      edi
  0x0048F6F3: jmp      0x48f6ac
  0x0048F6AC: cmp      dword ptr [0x2fd9ac0], edx
  0x0048F6B2: jle      0x48f6c5
  0x0048F776: jmp      0x48f650
  0x0048F708: mov      dword ptr [ebp - 0x10], edx
  0x0048F70B: mov      dword ptr [ebp - 0x24], edx
  0x0048F70E: jne      0x48f71d
  0x0048F710: cmp      bl, 0x30
  0x0048F713: jne      0x48f71d
  0x0048F71D: cmp      dword ptr [0x2fd9ac0], edx
  0x0048F723: jle      0x48f736
  0x0048F715: dec      dword ptr [ebp - 8]
  0x0048F718: mov      bl, byte ptr [edi]
  0x0048F71A: inc      edi
  0x0048F71B: jmp      0x48f710
  0x0048F736: mov      ecx, dword ptr [0x2fd98b4]
  0x0048F73C: movzx    eax, bl
  0x0048F73F: mov      al, byte ptr [ecx + eax*2]
  0x0048F742: and      eax, esi
  0x0048F744: test     eax, eax
  0x0048F746: je       0x48f764
  0x0048F725: movzx    eax, bl
  0x0048F728: push     esi
  0x0048F729: push     eax
  0x0048F72A: call     0x48a852
  0x0048F748: cmp      dword ptr [ebp - 4], 0x19
  0x0048F74C: jae      0x48f75f
  0x0048F72F: pop      ecx
  0x0048F730: pop      ecx
  0x0048F731: push     1
  0x0048F733: pop      edx
  0x0048F734: jmp      0x48f744
  0x0048F74E: mov      eax, dword ptr [ebp - 0xc]
  0x0048F751: inc      dword ptr [ebp - 4]
  0x0048F754: sub      bl, 0x30
  0x0048F757: inc      dword ptr [ebp - 0xc]
  0x0048F75A: dec      dword ptr [ebp - 8]
  0x0048F75D: mov      byte ptr [eax], bl
  0x0048F75F: mov      bl, byte ptr [edi]
  0x0048F761: inc      edi
  0x0048F762: jmp      0x48f71d
  0x0048F75F: mov      bl, byte ptr [edi]
  0x0048F761: inc      edi
  0x0048F762: jmp      0x48f71d
  0x0048F744: test     eax, eax
  0x0048F746: je       0x48f764
  0x0048F77B: cmp      dword ptr [0x2fd9ac0], edx
  0x0048F781: mov      dword ptr [ebp - 0x24], edx
  0x0048F784: jle      0x48f797
  0x0048F797: mov      ecx, dword ptr [0x2fd98b4]
  0x0048F79D: movzx    eax, bl
  0x0048F7A0: mov      al, byte ptr [ecx + eax*2]
  0x0048F7A3: and      eax, esi
  0x0048F7A5: test     eax, eax
  0x0048F7A7: je       0x48f857
  0x0048F786: movzx    eax, bl
  0x0048F789: push     esi
  0x0048F78A: push     eax
  0x0048F78B: call     0x48a852
  0x0048F7AD: mov      eax, esi
  0x0048F7AF: jmp      0x48f808
  0x0048F790: pop      ecx
  0x0048F791: pop      ecx
  0x0048F792: push     1
  0x0048F794: pop      edx
  0x0048F795: jmp      0x48f7a5
  0x0048F808: dec      edi
  0x0048F809: jmp      0x48f5c6
  0x0048F7A5: test     eax, eax
  0x0048F7A7: je       0x48f857
  0x0048F7B1: lea      ecx, [edi - 2]
  0x0048F7B4: cmp      bl, 0x31
  0x0048F7B7: mov      dword ptr [ebp + 0x10], ecx
  0x0048F7BA: jl       0x48f7c1
  0x0048F7C1: movsx    eax, bl
  0x0048F7C4: sub      eax, 0x2b
  0x0048F7C7: je       0x48f83d
  0x0048F7BC: cmp      bl, 0x39
  0x0048F7BF: jle      0x48f805
  0x0048F83D: push     7
  0x0048F83F: pop      eax
  0x0048F840: jmp      0x48f5c6
  0x0048F7C9: dec      eax
  0x0048F7CA: dec      eax
  0x0048F7CB: je       0x48f831
  0x0048F805: push     9
  0x0048F807: pop      eax
  0x0048F808: dec      edi
  0x0048F809: jmp      0x48f5c6
  0x0048F831: or       dword ptr [ebp - 0x18], 0xffffffff
  0x0048F835: push     7
  0x0048F837: pop      eax
  0x0048F838: jmp      0x48f5c6
  0x0048F7CD: sub      eax, 3
  0x0048F7D0: jne      0x48f8e5
  0x0048F7D6: push     8
  0x0048F7D8: jmp      0x48f83f
  0x0048F8E5: mov      edi, ecx
  0x0048F8E7: mov      eax, dword ptr [ebp + 0xc]
  0x0048F8EA: cmp      dword ptr [ebp - 0x10], 0
  0x0048F8EE: mov      dword ptr [eax], edi
  0x0048F8F0: je       0x48f9cf
  0x0048F7DA: mov      dword ptr [ebp - 0x20], edx
  0x0048F7DD: cmp      bl, 0x30
  0x0048F7E0: jne      0x48f7e7
  0x0048F7E2: mov      bl, byte ptr [edi]
  0x0048F7E4: inc      edi
  0x0048F7E5: jmp      0x48f7dd
  0x0048F7E7: cmp      bl, 0x31
  0x0048F7EA: jl       0x48f8e2
  0x0048F7DD: cmp      bl, 0x30
  0x0048F7E0: jne      0x48f7e7
  0x0048F7F0: cmp      bl, 0x39
  0x0048F7F3: jg       0x48f8e2
  0x0048F7F9: jmp      0x48f805
  0x0048F7FB: cmp      bl, 0x31
  0x0048F7FE: jl       0x48f80e
  0x0048F80E: cmp      bl, 0x30
  0x0048F811: jne      0x48f857
  0x0048F800: cmp      bl, 0x39
  0x0048F803: jg       0x48f80e
  0x0048F813: jmp      0x48f7d6
  0x0048F815: cmp      dword ptr [ebp + 0x20], 0
  0x0048F819: je       0x48f845
  0x0048F845: push     0xa
  0x0048F847: dec      edi
  0x0048F848: pop      eax
  0x0048F849: cmp      eax, 0xa
  0x0048F84C: je       0x48f8e7
  0x0048F81B: movsx    eax, bl
  0x0048F81E: lea      ecx, [edi - 1]
  0x0048F821: sub      eax, 0x2b
  0x0048F824: mov      dword ptr [ebp + 0x10], ecx
  0x0048F827: je       0x48f83d
  0x0048F829: dec      eax
  0x0048F82A: dec      eax
  0x0048F82B: jne      0x48f8e5
  0x0048F866: xor      esi, esi
  0x0048F868: cmp      dword ptr [0x2fd9ac0], 1
  0x0048F86F: jle      0x48f880
  0x0048F880: mov      ecx, dword ptr [0x2fd98b4]
  0x0048F886: movzx    eax, bl
  0x0048F889: mov      al, byte ptr [ecx + eax*2]
  0x0048F88C: and      eax, 4
  0x0048F88F: test     eax, eax
  0x0048F891: je       0x48f8af
  0x0048F871: movzx    eax, bl
  0x0048F874: push     4
  0x0048F876: push     eax
  0x0048F877: call     0x48a852
  0x0048F8AF: mov      dword ptr [ebp - 0x1c], esi
  0x0048F8B2: cmp      dword ptr [0x2fd9ac0], 1
  0x0048F8B9: jle      0x48f8ca
  0x0048F893: movsx    ecx, bl
  0x0048F896: lea      eax, [esi + esi*4]
  0x0048F899: lea      esi, [ecx + eax*2 - 0x30]
  0x0048F89D: cmp      esi, 0x1450
  0x0048F8A3: jg       0x48f8aa
  0x0048F87C: pop      ecx
  0x0048F87D: pop      ecx
  0x0048F87E: jmp      0x48f88f
  0x0048F8CA: mov      ecx, dword ptr [0x2fd98b4]
  0x0048F8D0: movzx    eax, bl
  0x0048F8D3: mov      al, byte ptr [ecx + eax*2]
  0x0048F8D6: and      eax, 4
  0x0048F8D9: test     eax, eax
  0x0048F8DB: je       0x48f8e2
  0x0048F8BB: movzx    eax, bl
  0x0048F8BE: push     4
  0x0048F8C0: push     eax
  0x0048F8C1: call     0x48a852
  0x0048F8A5: mov      bl, byte ptr [edi]
  0x0048F8A7: inc      edi
  0x0048F8A8: jmp      0x48f868
  0x0048F8AA: mov      esi, 0x1451
  0x0048F8AF: mov      dword ptr [ebp - 0x1c], esi
  0x0048F8B2: cmp      dword ptr [0x2fd9ac0], 1
  0x0048F8B9: jle      0x48f8ca
  0x0048F88F: test     eax, eax
  0x0048F891: je       0x48f8af
  0x0048F8DD: mov      bl, byte ptr [edi]
  0x0048F8DF: inc      edi
  0x0048F8E0: jmp      0x48f8b2
  0x0048F8C6: pop      ecx
  0x0048F8C7: pop      ecx
  0x0048F8C8: jmp      0x48f8d9
  0x0048F868: cmp      dword ptr [0x2fd9ac0], 1
  0x0048F86F: jle      0x48f880
  0x0048F8B2: cmp      dword ptr [0x2fd9ac0], 1
  0x0048F8B9: jle      0x48f8ca
  0x0048F8D9: test     eax, eax
  0x0048F8DB: je       0x48f8e2

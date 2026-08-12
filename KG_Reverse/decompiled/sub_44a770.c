/**
 * Function: sub_44a770
 * Address: 0x0044A770
 * Blocks: 124
 * Instructions: 647
 * Analyzed with angr + capstone
 */
void* sub_44a770(void) {

  /* Block 1 @ 0x0044A770 */
  // sub esp, 0x18
  // push ebx
  // push ebp
  // mov ebp, dword ptr [esp + 0x24]
  // xor ebx, ebx
  // push esi
  // push edi
  // mov eax, dword ptr [ebp + 0x124]
  // mov bl, byte ptr [ebp + 0x15f]
  // mov edi, dword ptr [ebp + 0x100]
  // inc eax
  // mov dword ptr [esp + 0x10], eax
  // xor eax, eax
  // mov al, byte ptr [ebp + 0x155]
  // mov dword ptr [esp + 0x14], ebx
  // TEST ebx, ebx (set flags)
  // mov dword ptr [esp + 0x18], eax
  // mov dword ptr [esp + 0x24], 0
  // mov byte ptr [esp + 0x2c], 0
  // if (not equal) goto 0x44a7c3
  /* Block 2 @ 0x0044A7B5 */
  // push 0x2fb2a50
  // push ebp
  // call 0x004463D0
  call(0x004463D0);
  /* Block 3 @ 0x0044A7C3 */
  // mov ecx, dword ptr [ebp + 0x138]
  // TEST ecx, ecx (set flags)
  // if (equal) goto 0x44a7f9
  /* Block 4 @ 0x0044A7C0 */
  // add esp, 8
  // mov ecx, dword ptr [ebp + 0x138]
  // TEST ecx, ecx (set flags)
  // if (equal) goto 0x44a7f9
  /* Block 5 @ 0x0044A7F9 */
  // TEST edi, edi (set flags)
  // if (not equal) goto 0x44a80b
  /* Block 6 @ 0x0044A7CD */
  // CMP ebx, 8 (set flags)
  // if (below) goto 0x44a7dc
  /* Block 7 @ 0x0044A7FD */
  // push 0x2fb2a10
  // push ebp
  // call 0x004463D0
  call(0x004463D0);
  /* Block 8 @ 0x0044A80B */
  // mov eax, dword ptr [esp + 0x14]
  // mov esi, edi
  // imul esi, eax
  // mov ebx, dword ptr [esp + 0x30]
  // mov dword ptr [esp + 0x20], esi
  // and esi, 7
  // mov dword ptr [esp + 0x1c], esi
  // if (equal) goto 0x44a868
  /* Block 9 @ 0x0044A7DC */
  // mov eax, edi
  // imul eax, ebx
  // add eax, 7
  // shr eax, 3
  // CMP ecx, eax (set flags)
  // if (equal) goto 0x44a7f9
  /* Block 10 @ 0x0044A7D2 */
  // mov eax, ebx
  // shr eax, 3
  // imul eax, edi
  goto 0x44a7e7;
  /* Block 11 @ 0x0044A808 */
  // add esp, 8
  // mov eax, dword ptr [esp + 0x14]
  // mov esi, edi
  // imul esi, eax
  // mov ebx, dword ptr [esp + 0x30]
  // mov dword ptr [esp + 0x20], esi
  // and esi, 7
  // mov dword ptr [esp + 0x1c], esi
  // if (equal) goto 0x44a868
  /* Block 12 @ 0x0044A868 */
  // mov cl, byte ptr [ebp + 0x154]
  // TEST cl, cl (set flags)
  // if (equal) goto 0x44ac54
  /* Block 13 @ 0x0044A825 */
  // CMP eax, 8 (set flags)
  // if (below) goto 0x44a834
  /* Block 14 @ 0x0044A7EB */
  // push 0x2fb2a2c
  // push ebp
  // call 0x004463D0
  call(0x004463D0);
  // CMP ecx, eax (set flags)
  // if (equal) goto 0x44a7f9
  /* Block 15 @ 0x0044AC54 */
  // CMP eax, 8 (set flags)
  // if (below) goto 0x44ac61
  /* Block 16 @ 0x0044A876 */
  // mov ecx, dword ptr [ebp + 0x7c]
  // TEST cl, 2 (set flags)
  // mov dword ptr [esp + 0x30], ecx
  // if (equal) goto 0x44ac54
  /* Block 17 @ 0x0044A834 */
  // mov ecx, dword ptr [esp + 0x20]
  // lea edx, [ecx + 7]
  // shr edx, 3
  // lea ecx, [edx + ebx - 1]
  // mov dword ptr [esp + 0x24], ecx
  // mov dl, byte ptr [ecx]
  // mov ecx, dword ptr [ebp + 0x7c]
  // mov byte ptr [esp + 0x2c], dl
  // mov edx, 0xff
  // TEST ecx, 0x10000 (set flags)
  // mov ecx, esi
  // if (equal) goto 0x44a862
  /* Block 18 @ 0x0044A82A */
  // mov edx, eax
  // shr edx, 3
  // imul edx, edi
  goto 0x44a83e;
  /* Block 19 @ 0x0044A7F6 */
  // add esp, 8
  // TEST edi, edi (set flags)
  // if (not equal) goto 0x44a80b
  /* Block 20 @ 0x0044AC61 */
  // mov edx, dword ptr [esp + 0x20]
  // lea eax, [edx + 7]
  // shr eax, 3
  // mov esi, dword ptr [esp + 0x10]
  // mov ecx, eax
  // mov edi, ebx
  // shr ecx, 2
  /* Block 21 @ 0x0044AC59 */
  // shr eax, 3
  // imul eax, edi
  goto 0x44ac6b;
  /* Block 22 @ 0x0044A886 */
  // mov edx, dword ptr [esp + 0x18]
  // CMP edx, 6 (set flags)
  // if (above or equal) goto 0x44ac54
  /* Block 23 @ 0x0044A862 */
  // sar edx, cl
  // mov dword ptr [esp + 0x1c], edx
  // mov cl, byte ptr [ebp + 0x154]
  // TEST cl, cl (set flags)
  // if (equal) goto 0x44ac54
  /* Block 24 @ 0x0044A85E */
  // shl edx, cl
  goto 0x44a864;
  // lea ecx, [edx + ebx - 1]
  // mov dword ptr [esp + 0x24], ecx
  // mov dl, byte ptr [ecx]
  // mov ecx, dword ptr [ebp + 0x7c]
  // mov byte ptr [esp + 0x2c], dl
  // mov edx, 0xff
  // TEST ecx, 0x10000 (set flags)
  // mov ecx, esi
  // if (equal) goto 0x44a862
  /* Block 25 @ 0x0044AC78 */
  // mov ecx, eax
  // and ecx, 3
  // mov esi, dword ptr [esp + 0x10]
  // mov ecx, eax
  // mov edi, ebx
  // shr ecx, 2
  /* Block 26 @ 0x0044A893 */
  // mov ecx, dword ptr [esp + 0x34]
  // TEST ecx, ecx (set flags)
  // if (equal) goto 0x44a8ac
  // mov dword ptr [esp + 0x1c], edx
  // mov cl, byte ptr [ebp + 0x154]
  // TEST cl, cl (set flags)
  // if (equal) goto 0x44ac54
  /* Block 27 @ 0x0044AC7F */
  // mov ecx, dword ptr [esp + 0x24]
  // TEST ecx, ecx (set flags)
  // if (equal) goto 0x44ac9d
  /* Block 28 @ 0x0044A8AC */
  // lea esi, [edx + 1]
  // mov ecx, 3
  // shr esi, 1
  // sub ecx, esi
  // mov esi, edx
  // and esi, 1
  // shl esi, cl
  // and esi, 7
  // CMP edi, esi (set flags)
  // if (below or equal) goto 0x44ac9d
  /* Block 29 @ 0x0044A89B */
  // CMP ecx, 1 (set flags)
  // if (not equal) goto 0x44ac54
  /* Block 30 @ 0x0044AC9D */
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // add esp, 0x18
  return;
  /* Block 31 @ 0x0044AC87 */
  // mov al, byte ptr [esp + 0x1c]
  // mov bl, byte ptr [ecx]
  // mov dl, al
  // not dl
  // and dl, bl
  // mov bl, byte ptr [esp + 0x2c]
  // and al, bl
  // or dl, al
  // mov byte ptr [ecx], dl
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // add esp, 0x18
  return;
  /* Block 32 @ 0x0044A8CA */
  // CMP eax, 8 (set flags)
  // if (above or equal) goto 0x44a9e5
  /* Block 33 @ 0x0044A8A4 */
  // TEST cl, dl (set flags)
  // if (equal) goto 0x44ac54
  /* Block 34 @ 0x0044A8D3 */
  // mov eax, 8
  // xor edx, edx
  // mov ebp, eax
  // mov eax, dword ptr [esp + 0x30]
  // TEST eax, 0x10000 (set flags)
  // mov eax, dword ptr [esp + 0x34]
  // if (equal) goto 0x44a944
  /* Block 35 @ 0x0044A9E5 */
  // TEST al, 7 (set flags)
  // if (equal) goto 0x44a9fb
  /* Block 36 @ 0x0044A944 */
  // TEST eax, eax (set flags)
  // mov eax, dword ptr [esp + 0x14]
  // if (equal) goto 0x44a972
  /* Block 37 @ 0x0044A8EF */
  // TEST eax, eax (set flags)
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0044A770: sub      esp, 0x18
  0x0044A773: push     ebx
  0x0044A774: push     ebp
  0x0044A775: mov      ebp, dword ptr [esp + 0x24]
  0x0044A779: xor      ebx, ebx
  0x0044A77B: push     esi
  0x0044A77C: push     edi
  0x0044A77D: mov      eax, dword ptr [ebp + 0x124]
  0x0044A783: mov      bl, byte ptr [ebp + 0x15f]
  0x0044A789: mov      edi, dword ptr [ebp + 0x100]
  0x0044A78F: inc      eax
  0x0044A790: mov      dword ptr [esp + 0x10], eax
  0x0044A794: xor      eax, eax
  0x0044A796: mov      al, byte ptr [ebp + 0x155]
  0x0044A79C: mov      dword ptr [esp + 0x14], ebx
  0x0044A7A0: test     ebx, ebx
  0x0044A7A2: mov      dword ptr [esp + 0x18], eax
  0x0044A7A6: mov      dword ptr [esp + 0x24], 0
  0x0044A7AE: mov      byte ptr [esp + 0x2c], 0
  0x0044A7B3: jne      0x44a7c3
  0x0044A7B5: push     0x2fb2a50
  0x0044A7BA: push     ebp
  0x0044A7BB: call     0x4463d0
  0x0044A7C3: mov      ecx, dword ptr [ebp + 0x138]
  0x0044A7C9: test     ecx, ecx
  0x0044A7CB: je       0x44a7f9
  0x0044A7C0: add      esp, 8
  0x0044A7C3: mov      ecx, dword ptr [ebp + 0x138]
  0x0044A7C9: test     ecx, ecx
  0x0044A7CB: je       0x44a7f9
  0x0044A7F9: test     edi, edi
  0x0044A7FB: jne      0x44a80b
  0x0044A7CD: cmp      ebx, 8
  0x0044A7D0: jb       0x44a7dc
  0x0044A7FD: push     0x2fb2a10
  0x0044A802: push     ebp
  0x0044A803: call     0x4463d0
  0x0044A80B: mov      eax, dword ptr [esp + 0x14]
  0x0044A80F: mov      esi, edi
  0x0044A811: imul     esi, eax
  0x0044A814: mov      ebx, dword ptr [esp + 0x30]
  0x0044A818: mov      dword ptr [esp + 0x20], esi
  0x0044A81C: and      esi, 7
  0x0044A81F: mov      dword ptr [esp + 0x1c], esi
  0x0044A823: je       0x44a868
  0x0044A7DC: mov      eax, edi
  0x0044A7DE: imul     eax, ebx
  0x0044A7E1: add      eax, 7
  0x0044A7E4: shr      eax, 3
  0x0044A7E7: cmp      ecx, eax
  0x0044A7E9: je       0x44a7f9
  0x0044A7D2: mov      eax, ebx
  0x0044A7D4: shr      eax, 3
  0x0044A7D7: imul     eax, edi
  0x0044A7DA: jmp      0x44a7e7
  0x0044A808: add      esp, 8
  0x0044A80B: mov      eax, dword ptr [esp + 0x14]
  0x0044A80F: mov      esi, edi
  0x0044A811: imul     esi, eax
  0x0044A814: mov      ebx, dword ptr [esp + 0x30]
  0x0044A818: mov      dword ptr [esp + 0x20], esi
  0x0044A81C: and      esi, 7
  0x0044A81F: mov      dword ptr [esp + 0x1c], esi
  0x0044A823: je       0x44a868
  0x0044A868: mov      cl, byte ptr [ebp + 0x154]
  0x0044A86E: test     cl, cl
  0x0044A870: je       0x44ac54
  0x0044A825: cmp      eax, 8
  0x0044A828: jb       0x44a834
  0x0044A7EB: push     0x2fb2a2c
  0x0044A7F0: push     ebp
  0x0044A7F1: call     0x4463d0
  0x0044A7E7: cmp      ecx, eax
  0x0044A7E9: je       0x44a7f9
  0x0044AC54: cmp      eax, 8
  0x0044AC57: jb       0x44ac61
  0x0044A876: mov      ecx, dword ptr [ebp + 0x7c]
  0x0044A879: test     cl, 2
  0x0044A87C: mov      dword ptr [esp + 0x30], ecx
  0x0044A880: je       0x44ac54
  0x0044A834: mov      ecx, dword ptr [esp + 0x20]
  0x0044A838: lea      edx, [ecx + 7]
  0x0044A83B: shr      edx, 3
  0x0044A83E: lea      ecx, [edx + ebx - 1]
  0x0044A842: mov      dword ptr [esp + 0x24], ecx
  0x0044A846: mov      dl, byte ptr [ecx]
  0x0044A848: mov      ecx, dword ptr [ebp + 0x7c]
  0x0044A84B: mov      byte ptr [esp + 0x2c], dl
  0x0044A84F: mov      edx, 0xff
  0x0044A854: test     ecx, 0x10000
  0x0044A85A: mov      ecx, esi
  0x0044A85C: je       0x44a862
  0x0044A82A: mov      edx, eax
  0x0044A82C: shr      edx, 3
  0x0044A82F: imul     edx, edi
  0x0044A832: jmp      0x44a83e
  0x0044A7F6: add      esp, 8
  0x0044A7F9: test     edi, edi
  0x0044A7FB: jne      0x44a80b
  0x0044AC61: mov      edx, dword ptr [esp + 0x20]
  0x0044AC65: lea      eax, [edx + 7]
  0x0044AC68: shr      eax, 3
  0x0044AC6B: mov      esi, dword ptr [esp + 0x10]
  0x0044AC6F: mov      ecx, eax
  0x0044AC71: mov      edi, ebx
  0x0044AC73: shr      ecx, 2
  0x0044AC76: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0044AC59: shr      eax, 3
  0x0044AC5C: imul     eax, edi
  0x0044AC5F: jmp      0x44ac6b
  0x0044A886: mov      edx, dword ptr [esp + 0x18]
  0x0044A88A: cmp      edx, 6
  0x0044A88D: jae      0x44ac54
  0x0044A862: sar      edx, cl
  0x0044A864: mov      dword ptr [esp + 0x1c], edx
  0x0044A868: mov      cl, byte ptr [ebp + 0x154]
  0x0044A86E: test     cl, cl
  0x0044A870: je       0x44ac54
  0x0044A85E: shl      edx, cl
  0x0044A860: jmp      0x44a864
  0x0044A83E: lea      ecx, [edx + ebx - 1]
  0x0044A842: mov      dword ptr [esp + 0x24], ecx
  0x0044A846: mov      dl, byte ptr [ecx]
  0x0044A848: mov      ecx, dword ptr [ebp + 0x7c]
  0x0044A84B: mov      byte ptr [esp + 0x2c], dl
  0x0044A84F: mov      edx, 0xff
  0x0044A854: test     ecx, 0x10000
  0x0044A85A: mov      ecx, esi
  0x0044A85C: je       0x44a862
  0x0044AC78: mov      ecx, eax
  0x0044AC7A: and      ecx, 3
  0x0044AC7D: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0044AC76: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0044AC6B: mov      esi, dword ptr [esp + 0x10]
  0x0044AC6F: mov      ecx, eax
  0x0044AC71: mov      edi, ebx
  0x0044AC73: shr      ecx, 2
  0x0044AC76: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0044A893: mov      ecx, dword ptr [esp + 0x34]
  0x0044A897: test     ecx, ecx
  0x0044A899: je       0x44a8ac
  0x0044A864: mov      dword ptr [esp + 0x1c], edx
  0x0044A868: mov      cl, byte ptr [ebp + 0x154]
  0x0044A86E: test     cl, cl
  0x0044A870: je       0x44ac54
  0x0044AC7F: mov      ecx, dword ptr [esp + 0x24]
  0x0044AC83: test     ecx, ecx
  0x0044AC85: je       0x44ac9d
  0x0044AC7D: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0044A8AC: lea      esi, [edx + 1]
  0x0044A8AF: mov      ecx, 3
  0x0044A8B4: shr      esi, 1
  0x0044A8B6: sub      ecx, esi
  0x0044A8B8: mov      esi, edx
  0x0044A8BA: and      esi, 1
  0x0044A8BD: shl      esi, cl
  0x0044A8BF: and      esi, 7
  0x0044A8C2: cmp      edi, esi
  0x0044A8C4: jbe      0x44ac9d
  0x0044A89B: cmp      ecx, 1
  0x0044A89E: jne      0x44ac54
  0x0044AC9D: pop      edi
  0x0044AC9E: pop      esi
  0x0044AC9F: pop      ebp
  0x0044ACA0: pop      ebx
  0x0044ACA1: add      esp, 0x18
  0x0044ACA4: ret      
  0x0044AC87: mov      al, byte ptr [esp + 0x1c]
  0x0044AC8B: mov      bl, byte ptr [ecx]
  0x0044AC8D: mov      dl, al
  0x0044AC8F: not      dl
  0x0044AC91: and      dl, bl
  0x0044AC93: mov      bl, byte ptr [esp + 0x2c]
  0x0044AC97: and      al, bl
  0x0044AC99: or       dl, al
  0x0044AC9B: mov      byte ptr [ecx], dl
  0x0044AC9D: pop      edi
  0x0044AC9E: pop      esi
  0x0044AC9F: pop      ebp
  0x0044ACA0: pop      ebx
  0x0044ACA1: add      esp, 0x18
  0x0044ACA4: ret      
  0x0044A8CA: cmp      eax, 8
  0x0044A8CD: jae      0x44a9e5
  0x0044A8A4: test     cl, dl
  0x0044A8A6: je       0x44ac54
  0x0044A8D3: mov      eax, 8
  0x0044A8D8: xor      edx, edx
  0x0044A8DA: div      dword ptr [esp + 0x14]
  0x0044A8DE: mov      ebp, eax
  0x0044A8E0: mov      eax, dword ptr [esp + 0x30]
  0x0044A8E4: test     eax, 0x10000
  0x0044A8E9: mov      eax, dword ptr [esp + 0x34]
  0x0044A8ED: je       0x44a944
  0x0044A9E5: test     al, 7
  0x0044A9E7: je       0x44a9fb
  0x0044A944: test     eax, eax
  0x0044A946: mov      eax, dword ptr [esp + 0x14]
  0x0044A94A: je       0x44a972
  0x0044A8EF: test     eax, eax
  0x0044A8F1: mov      eax, dword ptr [esp + 0x14]
  0x0044A8F5: je       0x44a91d
  0x0044A9FB: shr      eax, 3
  0x0044A9FE: imul     esi, eax
  0x0044AA01: imul     edi, eax
  0x0044AA04: mov      edx, dword ptr [esp + 0x10]
  0x0044AA08: mov      ecx, dword ptr [esp + 0x34]
  0x0044AA0C: sub      edi, esi
  0x0044AA0E: add      ebx, esi
  0x0044AA10: add      edx, esi
  0x0044AA12: mov      dword ptr [esp + 0x14], eax
  0x0044AA16: test     ecx, ecx
  0x0044AA18: mov      ebp, edi
  0x0044AA1A: mov      dword ptr [esp + 0x10], edx
  0x0044AA1E: je       0x44aa45
  0x0044A9E9: push     0x2fb29ec
  0x0044A9EE: push     ebp
  0x0044A9EF: call     0x4463d0
  0x0044A972: cmp      eax, 1
  0x0044A975: jne      0x44a97b
  0x0044A94C: cmp      eax, 1
  0x0044A94F: jne      0x44a955
  0x0044A91D: cmp      eax, 1
  0x0044A920: jne      0x44a926
  0x0044A8F7: cmp      eax, 1
  0x0044A8FA: jne      0x44a900
  0x0044AA45: mov      dword ptr [esp + 0x34], eax
  0x0044AA49: mov      esi, dword ptr [esp + 0x18]
  0x0044AA4D: mov      ecx, 7
  0x0044AA52: sub      ecx, esi
  0x0044AA54: mov      eax, 1
  0x0044AA59: shr      ecx, 1
  0x0044AA5B: shl      eax, cl
  0x0044AA5D: mov      ecx, dword ptr [esp + 0x34]
  0x0044AA61: imul     eax, dword ptr [esp + 0x14]
  0x0044AA66: dec      ecx
  0x0044AA67: je       0x44ac35
  0x0044AA20: mov      esi, dword ptr [esp + 0x18]
  0x0044AA24: mov      ecx, 6
  0x0044AA29: sub      ecx, esi
  0x0044AA2B: mov      esi, 1
  0x0044AA30: shr      ecx, 1
  0x0044AA32: shl      esi, cl
  0x0044AA34: imul     esi, eax
  0x0044AA37: cmp      esi, ebp
  0x0044AA39: mov      dword ptr [esp + 0x34], esi
  0x0044AA3D: jbe      0x44aa49
  0x0044A9F4: mov      eax, dword ptr [esp + 0x1c]
  0x0044A9F8: add      esp, 8
  0x0044A9FB: shr      eax, 3
  0x0044A9FE: imul     esi, eax
  0x0044AA01: imul     edi, eax
  0x0044AA04: mov      edx, dword ptr [esp + 0x10]
  0x0044AA08: mov      ecx, dword ptr [esp + 0x34]
  0x0044AA0C: sub      edi, esi
  0x0044AA0E: add      ebx, esi
  0x0044AA10: add      edx, esi
  0x0044AA12: mov      dword ptr [esp + 0x14], eax
  0x0044AA16: test     ecx, ecx
  0x0044AA18: mov      ebp, edi
  0x0044AA1A: mov      dword ptr [esp + 0x10], edx
  0x0044AA1E: je       0x44aa45
  0x0044A977: xor      eax, eax
  0x0044A979: jmp      0x44a986
  0x0044A97B: xor      edx, edx
  0x0044A97D: cmp      eax, 2
  0x0044A980: setne    dl
  0x0044A983: inc      edx
  0x0044A984: mov      eax, edx
  0x0044A986: mov      ecx, dword ptr [esp + 0x18]
  0x0044A98A: lea      eax, [eax + eax*2]
  0x0044A98D: lea      edx, [ecx + eax*2]
  0x0044A990: mov      esi, dword ptr [edx*4 + 0x2f9856c]
  0x0044A997: mov      ecx, esi
  0x0044A999: mov      eax, esi
  0x0044A99B: shl      ecx, 0x18
  0x0044A99E: shr      esi, 8
  0x0044A9A1: or       esi, ecx
  0x0044A9A3: and      eax, 0xff
  0x0044A9A8: je       0x44a9cf
  0x0044A951: xor      ecx, ecx
  0x0044A953: jmp      0x44a95e
  0x0044A955: xor      ecx, ecx
  0x0044A957: cmp      eax, 2
  0x0044A95A: setne    cl
  0x0044A95D: inc      ecx
  0x0044A95E: mov      eax, dword ptr [esp + 0x18]
  0x0044A962: lea      ecx, [ecx + ecx*2]
  0x0044A965: shr      eax, 1
  0x0044A967: add      eax, ecx
  0x0044A969: mov      esi, dword ptr [eax*4 + 0x2f985d8]
  0x0044A970: jmp      0x44a997
  0x0044A922: xor      eax, eax
  0x0044A924: jmp      0x44a931
  0x0044A926: xor      edx, edx
  0x0044A928: cmp      eax, 2
  0x0044A92B: setne    dl
  0x0044A92E: inc      edx
  0x0044A92F: mov      eax, edx
  0x0044A931: mov      ecx, dword ptr [esp + 0x18]
  0x0044A935: lea      eax, [eax + eax*2]
  0x0044A938: lea      edx, [ecx + eax*2]
  0x0044A93B: mov      esi, dword ptr [edx*4 + 0x2f98524]
  0x0044A942: jmp      0x44a997
  0x0044A8FC: xor      ecx, ecx
  0x0044A8FE: jmp      0x44a909
  0x0044A900: xor      ecx, ecx
  0x0044A902: cmp      eax, 2
  0x0044A905: setne    cl
  0x0044A908: inc      ecx
  0x0044A909: mov      eax, dword ptr [esp + 0x18]
  0x0044A90D: lea      ecx, [ecx + ecx*2]
  0x0044A910: shr      eax, 1
  0x0044A912: add      eax, ecx
  0x0044A914: mov      esi, dword ptr [eax*4 + 0x2f985b4]
  0x0044A91B: jmp      0x44a997
  0x0044AC35: mov      cl, byte ptr [edx]
  0x0044AC37: cmp      ebp, eax
  0x0044AC39: mov      byte ptr [ebx], cl
  0x0044AC3B: jbe      0x44ac9d
  0x0044AA6D: dec      ecx
  0x0044AA6E: je       0x44abf6
  0x0044AA49: mov      esi, dword ptr [esp + 0x18]
  0x0044AA4D: mov      ecx, 7
  0x0044AA52: sub      ecx, esi
  0x0044AA54: mov      eax, 1
  0x0044AA59: shr      ecx, 1
  0x0044AA5B: shl      eax, cl
  0x0044AA5D: mov      ecx, dword ptr [esp + 0x34]
  0x0044AA61: imul     eax, dword ptr [esp + 0x14]
  0x0044AA66: dec      ecx
  0x0044AA67: je       0x44ac35
  0x0044AA3F: mov      dword ptr [esp + 0x34], ebp
  0x0044AA43: jmp      0x44aa49
  0x0044A986: mov      ecx, dword ptr [esp + 0x18]
  0x0044A98A: lea      eax, [eax + eax*2]
  0x0044A98D: lea      edx, [ecx + eax*2]
  0x0044A990: mov      esi, dword ptr [edx*4 + 0x2f9856c]
  0x0044A997: mov      ecx, esi
  0x0044A999: mov      eax, esi
  0x0044A99B: shl      ecx, 0x18
  0x0044A99E: shr      esi, 8
  0x0044A9A1: or       esi, ecx
  0x0044A9A3: and      eax, 0xff
  0x0044A9A8: je       0x44a9cf
  0x0044A9CF: cmp      edi, ebp
  0x0044A9D1: jbe      0x44ac7f
  0x0044A9AA: cmp      eax, 0xff
  0x0044A9AF: je       0x44a9c7
  0x0044A95E: mov      eax, dword ptr [esp + 0x18]
  0x0044A962: lea      ecx, [ecx + ecx*2]
  0x0044A965: shr      eax, 1
  0x0044A967: add      eax, ecx
  0x0044A969: mov      esi, dword ptr [eax*4 + 0x2f985d8]
  0x0044A970: jmp      0x44a997
  0x0044A997: mov      ecx, esi
  0x0044A999: mov      eax, esi
  0x0044A99B: shl      ecx, 0x18
  0x0044A99E: shr      esi, 8
  0x0044A9A1: or       esi, ecx
  0x0044A9A3: and      eax, 0xff
  0x0044A9A8: je       0x44a9cf
  0x0044A931: mov      ecx, dword ptr [esp + 0x18]
  0x0044A935: lea      eax, [eax + eax*2]
  0x0044A938: lea      edx, [ecx + eax*2]
  0x0044A93B: mov      esi, dword ptr [edx*4 + 0x2f98524]
  0x0044A942: jmp      0x44a997
  0x0044A909: mov      eax, dword ptr [esp + 0x18]
  0x0044A90D: lea      ecx, [ecx + ecx*2]
  0x0044A910: shr      eax, 1
  0x0044A912: add      eax, ecx
  0x0044A914: mov      esi, dword ptr [eax*4 + 0x2f985b4]
  0x0044A91B: jmp      0x44a997
  0x0044AC3D: mov      cl, byte ptr [edx + eax]
  0x0044AC40: add      edx, eax
  0x0044AC42: add      ebx, eax
  0x0044AC44: sub      ebp, eax
  0x0044AC46: cmp      ebp, eax
  0x0044AC48: mov      byte ptr [ebx], cl
  0x0044AC4A: ja       0x44ac3d
  0x0044ABF6: mov      cl, byte ptr [edx]
  0x0044ABF8: cmp      ebp, eax
  0x0044ABFA: mov      byte ptr [ebx], cl
  0x0044ABFC: mov      cl, byte ptr [edx + 1]
  0x0044ABFF: mov      byte ptr [ebx + 1], cl
  0x0044AC02: jbe      0x44ac9d
  0x0044AA74: dec      ecx
  0x0044AA75: je       0x44abbb
  0x0044A9D7: mov      eax, dword ptr [esp + 0x10]
  0x0044A9DB: sub      edi, ebp
  0x0044A9DD: inc      ebx
  0x0044A9DE: inc      eax
  0x0044A9DF: mov      dword ptr [esp + 0x10], eax
  0x0044A9E3: jmp      0x44a997
  0x0044A9C7: mov      edx, dword ptr [esp + 0x10]
  0x0044A9CB: mov      al, byte ptr [edx]
  0x0044A9CD: mov      byte ptr [ebx], al
  0x0044A9CF: cmp      edi, ebp
  0x0044A9D1: jbe      0x44ac7f
  0x0044A9B1: mov      cl, byte ptr [ebx]
  0x0044A9B3: mov      dl, al
  0x0044A9B5: not      dl
  0x0044A9B7: and      dl, cl
  0x0044A9B9: mov      ecx, dword ptr [esp + 0x10]
  0x0044A9BD: mov      cl, byte ptr [ecx]
  0x0044A9BF: and      cl, al
  0x0044A9C1: or       dl, cl
  0x0044A9C3: mov      byte ptr [ebx], dl
  0x0044A9C5: jmp      0x44a9cf
  0x0044AC4C: pop      edi
  0x0044AC4D: pop      esi
  0x0044AC4E: pop      ebp
  0x0044AC4F: pop      ebx
  0x0044AC50: add      esp, 0x18
  0x0044AC53: ret      
  0x0044AC08: sub      ebp, eax
  0x0044AC0A: add      edx, eax
  0x0044AC0C: add      ebx, eax
  0x0044AC0E: cmp      ebp, 1
  0x0044AC11: jbe      0x44ac29
  0x0044ABBB: mov      cl, byte ptr [edx]
  0x0044ABBD: cmp      ebp, eax
  0x0044ABBF: mov      byte ptr [ebx], cl
  0x0044ABC1: mov      cl, byte ptr [edx + 1]
  0x0044ABC4: mov      byte ptr [ebx + 1], cl
  0x0044ABC7: mov      cl, byte ptr [edx + 2]
  0x0044ABCA: mov      byte ptr [ebx + 2], cl
  0x0044ABCD: jbe      0x44ac9d
  0x0044AA7B: mov      ecx, dword ptr [esp + 0x34]
  0x0044AA7F: cmp      ecx, 0x10
  0x0044AA82: jae      0x44ab5f
  0x0044AC29: mov      dl, byte ptr [edx]
  0x0044AC2B: pop      edi
  0x0044AC2C: pop      esi
  0x0044AC2D: mov      byte ptr [ebx], dl
  0x0044AC2F: pop      ebp
  0x0044AC30: pop      ebx
  0x0044AC31: add      esp, 0x18
  0x0044AC34: ret      
  0x0044AC13: mov      cl, byte ptr [edx]
  0x0044AC15: cmp      ebp, eax
  0x0044AC17: mov      byte ptr [ebx], cl
  0x0044AC19: mov      cl, byte ptr [edx + 1]
  0x0044AC1C: mov      byte ptr [ebx + 1], cl
  0x0044AC1F: ja       0x44ac08
  0x0044ABD3: mov      cl, byte ptr [edx + eax]
  0x0044ABD6: add      edx, eax
  0x0044ABD8: add      ebx, eax
  0x0044ABDA: sub      ebp, eax
  0x0044ABDC: cmp      ebp, eax
  0x0044ABDE: mov      byte ptr [ebx], cl
  0x0044ABE0: mov      cl, byte ptr [edx + 1]
  0x0044ABE3: mov      byte ptr [ebx + 1], cl
  0x0044ABE6: mov      cl, byte ptr [edx + 2]
  0x0044ABE9: mov      byte ptr [ebx + 2], cl
  0x0044ABEC: ja       0x44abd3
  0x0044AA88: test     bl, 1
  0x0044AA8B: jne      0x44ab5f
  0x0044AB5F: mov      ecx, dword ptr [esp + 0x34]
  0x0044AB63: mov      esi, dword ptr [esp + 0x10]
  0x0044AB67: mov      edx, ecx
  0x0044AB69: mov      edi, ebx
  0x0044AB6B: shr      ecx, 2
  0x0044AB6E: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0044AC21: pop      edi
  0x0044AC22: pop      esi
  0x0044AC23: pop      ebp
  0x0044AC24: pop      ebx
  0x0044AC25: add      esp, 0x18
  0x0044AC28: ret      
  0x0044ABEE: pop      edi
  0x0044ABEF: pop      esi
  0x0044ABF0: pop      ebp
  0x0044ABF1: pop      ebx
  0x0044ABF2: add      esp, 0x18
  0x0044ABF5: ret      
  0x0044AA91: test     dl, 1
  0x0044AA94: jne      0x44ab5f
  0x0044AB70: mov      ecx, edx
  0x0044AB72: and      ecx, 3
  0x0044AB75: cmp      ebp, eax
  0x0044AB77: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0044AB6E: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0044AA9A: test     cl, 1
  0x0044AA9D: jne      0x44ab63
  0x0044AB79: jbe      0x44ac9d
  0x0044AB77: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0044AAA3: test     al, 1
  0x0044AAA5: jne      0x44ab63
  0x0044AB63: mov      esi, dword ptr [esp + 0x10]
  0x0044AB67: mov      edx, ecx
  0x0044AB69: mov      edi, ebx
  0x0044AB6B: shr      ecx, 2
  0x0044AB6E: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0044AB7F: mov      ecx, dword ptr [esp + 0x10]
  0x0044AB83: sub      ebp, eax
  0x0044AB85: add      ecx, eax
  0x0044AB87: add      ebx, eax
  0x0044AB89: mov      dword ptr [esp + 0x10], ecx
  0x0044AB8D: mov      ecx, dword ptr [esp + 0x34]
  0x0044AB91: cmp      ecx, ebp
  0x0044AB93: jbe      0x44ab9b
  0x0044AAAB: test     bl, 3
  0x0044AAAE: jne      0x44ab10
  0x0044AB9B: mov      esi, dword ptr [esp + 0x10]
  0x0044AB9F: mov      edx, ecx
  0x0044ABA1: mov      edi, ebx
  0x0044ABA3: shr      ecx, 2
  0x0044ABA6: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0044AB95: mov      ecx, ebp
  0x0044AB97: mov      dword ptr [esp + 0x34], ecx
  0x0044AB9B: mov      esi, dword ptr [esp + 0x10]
  0x0044AB9F: mov      edx, ecx
  0x0044ABA1: mov      edi, ebx
  0x0044ABA3: shr      ecx, 2
  0x0044ABA6: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0044AAB0: test     dl, 3
  0x0044AAB3: jne      0x44ab10
  0x0044AB10: mov      edi, eax
  0x0044AB12: mov      esi, edx
  0x0044AB14: sub      edi, ecx
  0x0044AB16: shr      edi, 1
  0x0044AB18: mov      dword ptr [esp + 0x34], ecx
  0x0044AB1C: mov      dx, word ptr [esi]
  0x0044AB1F: add      esi, 2
  0x0044AB22: mov      word ptr [ebx], dx
  0x0044AB25: mov      edx, dword ptr [esp + 0x34]
  0x0044AB29: add      ebx, 2
  0x0044AB2C: sub      edx, 2
  0x0044AB2F: mov      dword ptr [esp + 0x34], edx
  0x0044AB33: jne      0x44ab1c
  0x0044ABA8: mov      ecx, edx
  0x0044ABAA: and      ecx, 3
  0x0044ABAD: cmp      ebp, eax
  0x0044ABAF: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0044ABA6: rep movsd dword ptr es:[edi], dword ptr [esi]
  0x0044AAB5: test     cl, 3
  0x0044AAB8: jne      0x44ab10
  0x0044AB35: cmp      ebp, eax
  0x0044AB37: jbe      0x44ac9d
  0x0044AB1C: mov      dx, word ptr [esi]
  0x0044AB1F: add      esi, 2
  0x0044AB22: mov      word ptr [ebx], dx
  0x0044AB25: mov      edx, dword ptr [esp + 0x34]
  0x0044AB29: add      ebx, 2
  0x0044AB2C: sub      edx, 2
  0x0044AB2F: mov      dword ptr [esp + 0x34], edx
  0x0044AB33: jne      0x44ab1c
  0x0044ABB1: ja       0x44ab7f
  0x0044ABAF: rep movsb byte ptr es:[edi], byte ptr [esi]
  0x0044AABA: test     al, 3
  0x0044AABC: jne      0x44ab10
  0x0044AB3D: lea      edx, [edi + edi]
  0x0044AB40: sub      ebp, eax
  0x0044AB42: add      ebx, edx
  0x0044AB44: add      esi, edx
  0x0044AB46: cmp      ecx, ebp
  0x0044AB48: jbe      0x44ab18
  0x0044ABB3: pop      edi
  0x0044ABB4: pop      esi
  0x0044ABB5: pop      ebp
  0x0044ABB6: pop      ebx
  0x0044ABB7: add      esp, 0x18
  0x0044ABBA: ret      
  0x0044AABE: mov      edi, eax
  0x0044AAC0: mov      esi, edx
  0x0044AAC2: sub      edi, ecx
  0x0044AAC4: shr      edi, 2
  0x0044AAC7: mov      dword ptr [esp + 0x34], ecx
  0x0044AACB: mov      edx, dword ptr [esi]
  0x0044AACD: add      esi, 4
  0x0044AAD0: mov      dword ptr [ebx], edx
  0x0044AAD2: mov      edx, dword ptr [esp + 0x34]
  0x0044AAD6: add      ebx, 4
  0x0044AAD9: sub      edx, 4
  0x0044AADC: mov      dword ptr [esp + 0x34], edx
  0x0044AAE0: jne      0x44aacb
  0x0044AB18: mov      dword ptr [esp + 0x34], ecx
  0x0044AB1C: mov      dx, word ptr [esi]
  0x0044AB1F: add      esi, 2
  0x0044AB22: mov      word ptr [ebx], dx
  0x0044AB25: mov      edx, dword ptr [esp + 0x34]
  0x0044AB29: add      ebx, 2
  0x0044AB2C: sub      edx, 2
  0x0044AB2F: mov      dword ptr [esp + 0x34], edx
  0x0044AB33: jne      0x44ab1c
  0x0044AB4A: mov      eax, ebx
  0x0044AB4C: sub      esi, ebx
  0x0044AB4E: mov      cl, byte ptr [esi + eax]
  0x0044AB51: mov      byte ptr [eax], cl
  0x0044AB53: inc      eax
  0x0044AB54: dec      ebp
  0x0044AB55: jne      0x44ab4e
  0x0044AAE2: cmp      ebp, eax
  0x0044AAE4: jbe      0x44ac9d
  0x0044AACB: mov      edx, dword ptr [esi]
  0x0044AACD: add      esi, 4
  0x0044AAD0: mov      dword ptr [ebx], edx
  0x0044AAD2: mov      edx, dword ptr [esp + 0x34]
  0x0044AAD6: add      ebx, 4
  0x0044AAD9: sub      edx, 4
  0x0044AADC: mov      dword ptr [esp + 0x34], edx
  0x0044AAE0: jne      0x44aacb
  0x0044AB57: pop      edi
  0x0044AB58: pop      esi
  0x0044AB59: pop      ebp
  0x0044AB5A: pop      ebx
  0x0044AB5B: add      esp, 0x18
  0x0044AB5E: ret      
  0x0044AB4E: mov      cl, byte ptr [esi + eax]
  0x0044AB51: mov      byte ptr [eax], cl
  0x0044AB53: inc      eax
  0x0044AB54: dec      ebp
  0x0044AB55: jne      0x44ab4e
  0x0044AAEA: lea      edx, [edi*4]
  0x0044AAF1: sub      ebp, eax
  0x0044AAF3: add      ebx, edx
  0x0044AAF5: add      esi, edx
  0x0044AAF7: cmp      ecx, ebp
  0x0044AAF9: jbe      0x44aac7
  0x0044AAC7: mov      dword ptr [esp + 0x34], ecx
  0x0044AACB: mov      edx, dword ptr [esi]
  0x0044AACD: add      esi, 4
  0x0044AAD0: mov      dword ptr [ebx], edx
  0x0044AAD2: mov      edx, dword ptr [esp + 0x34]
  0x0044AAD6: add      ebx, 4
  0x0044AAD9: sub      edx, 4
  0x0044AADC: mov      dword ptr [esp + 0x34], edx
  0x0044AAE0: jne      0x44aacb
  0x0044AAFB: mov      eax, ebx
  0x0044AAFD: sub      esi, ebx
  0x0044AAFF: mov      cl, byte ptr [esi + eax]
  0x0044AB02: mov      byte ptr [eax], cl
  0x0044AB04: inc      eax
  0x0044AB05: dec      ebp
  0x0044AB06: jne      0x44aaff
  0x0044AB08: pop      edi
  0x0044AB09: pop      esi
  0x0044AB0A: pop      ebp
  0x0044AB0B: pop      ebx
  0x0044AB0C: add      esp, 0x18
  0x0044AB0F: ret      
  0x0044AAFF: mov      cl, byte ptr [esi + eax]
  0x0044AB02: mov      byte ptr [eax], cl
  0x0044AB04: inc      eax
  0x0044AB05: dec      ebp
  0x0044AB06: jne      0x44aaff

/**
 * Function: sub_43fc00
 * Address: 0x0043FC00
 * Blocks: 247
 * Instructions: 1740
 * Analyzed with angr + capstone
 */
void* sub_43fc00(void) {

  /* Block 1 @ 0x0043FC00 */
  // sub esp, 0x44
  // push ebx
  // push ebp
  // mov ebp, dword ptr [esp + 0x50]
  // push esi
  // push edi
  // mov dword ptr [esp + 0x20], 0x100
  // mov eax, dword ptr [ebp]
  // mov esi, 0xffff
  // mov dword ptr [esp + 0x1c], eax
  // mov ecx, dword ptr [eax]
  // mov eax, dword ptr [eax + 0x10]
  // mov edx, eax
  // mov dword ptr [esp + 0x30], eax
  // mov edi, dword ptr [ecx]
  // and dl, 4
  // neg dl
  // mov cl, byte ptr [edi + 0x157]
  // mov dword ptr [esp + 0x58], edi
  // sbb edx, edx
  // neg edx
  // inc edx
  // mov ebx, edx
  // xor edx, edx
  // TEST cl, 4 (set flags)
  // mov dword ptr [esp + 0x24], edx
  // mov dword ptr [esp + 0x38], edx
  // if (not equal) goto 0x43fc5a
  /* Block 2 @ 0x0043FC51 */
  // CMP word ptr [edi + 0x150], dx (set flags)
  // if (below or equal) goto 0x43fcb4
  /* Block 3 @ 0x0043FC5A */
  // TEST al, 1 (set flags)
  // if (not equal) goto 0x43fcb4
  /* Block 4 @ 0x0043FCB4 */
  // CMP ebx, 2 (set flags)
  // if (equal) goto 0x43fcbe
  /* Block 5 @ 0x0043FC5E */
  // CMP ebx, 2 (set flags)
  // if (not equal) goto 0x43fc73
  /* Block 6 @ 0x0043FCBE */
  // mov dword ptr [esp + 0x18], esi
  // mov dword ptr [esp + 0x14], esi
  // mov dword ptr [esp + 0x10], esi
  // mov cx, word ptr [edi + 0x326]
  // TEST cl, 1 (set flags)
  // if (not equal) goto 0x43fd09
  /* Block 7 @ 0x0043FCB9 */
  // mov esi, 0xff
  // mov dword ptr [esp + 0x18], esi
  // mov dword ptr [esp + 0x14], esi
  // mov dword ptr [esp + 0x10], esi
  // mov cx, word ptr [edi + 0x326]
  // TEST cl, 1 (set flags)
  // if (not equal) goto 0x43fd09
  /* Block 8 @ 0x0043FC63 */
  // xor esi, esi
  // mov dword ptr [esp + 0x14], edx
  // mov dword ptr [esp + 0x18], esi
  // mov dword ptr [esp + 0x10], edx
  goto 0x43fcca;
  /* Block 9 @ 0x0043FC73 */
  // mov ecx, dword ptr [ebp + 0x10]
  // CMP ecx, edx (set flags)
  // if (not equal) goto 0x43fc92
  /* Block 10 @ 0x0043FCD6 */
  // CMP byte ptr [edi + 0x158], 0x10 (set flags)
  // if (not equal) goto 0x43fcf5
  /* Block 11 @ 0x0043FD09 */
  // mov dl, byte ptr [edi + 0x157]
  // mov ecx, edx
  // and ecx, 0xff
  // CMP ecx, 6 (set flags)
  // if (above) goto 0x4409e4
  // mov cx, word ptr [edi + 0x326]
  // TEST cl, 1 (set flags)
  // if (not equal) goto 0x43fd09
  /* Block 12 @ 0x0043FC7A */
  // push 0x2fb1ee0
  // push edi
  // call 0x004463D0
  call(0x004463D0);
  /* Block 13 @ 0x0043FC92 */
  // xor edx, edx
  // mov dl, byte ptr [ecx + 1]
  // mov esi, edx
  // TEST al, 2 (set flags)
  // mov dword ptr [esp + 0x18], esi
  // if (equal) goto 0x43fcc2
  /* Block 14 @ 0x0043FCDF */
  // mov edx, dword ptr [esp + 0x1c]
  // TEST byte ptr [edx + 0x14], 4 (set flags)
  // if (not equal) goto 0x43fcf5
  /* Block 15 @ 0x0043FCF5 */
  // mov dword ptr [edi + 0x2dc], 0xb18f
  // or ecx, 1
  // mov word ptr [edi + 0x326], cx
  // mov dl, byte ptr [edi + 0x157]
  // mov ecx, edx
  // and ecx, 0xff
  // CMP ecx, 6 (set flags)
  // if (above) goto 0x4409e4
  /* Block 16 @ 0x0043FD20 */
  goto dword ptr [ecx*4 + 0x440b54];
  /* Block 17 @ 0x004409E4 */
  // mov edx, dword ptr [esp + 0x58]
  // push 0x2fb1d2c
  // push edx
  // call 0x004463D0
  call(0x004463D0);
  /* Block 18 @ 0x0043FC85 */
  // mov esi, dword ptr [esp + 0x20]
  // mov eax, dword ptr [esp + 0x38]
  // add esp, 8
  goto 0x43fcca;
  // mov dword ptr [esp + 0x14], esi
  // mov dword ptr [esp + 0x10], esi
  // mov cx, word ptr [edi + 0x326]
  // TEST cl, 1 (set flags)
  // if (not equal) goto 0x43fd09
  /* Block 19 @ 0x0043FCA1 */
  // xor edx, edx
  // mov dl, byte ptr [ecx]
  // mov dword ptr [esp + 0x14], edx
  // xor edx, edx
  // mov dl, byte ptr [ecx + 2]
  // mov dword ptr [esp + 0x10], edx
  goto 0x43fcca;
  /* Block 20 @ 0x0043FCE9 */
  // mov dword ptr [edi + 0x2dc], 0x186a0
  goto 0x43fcff;
  /* Block 21 @ 0x00440802 */
  // xor ecx, ecx
  // xor edx, edx
  // mov cx, word ptr [edi + 0x150]
  // CMP ecx, edx (set flags)
  // mov dword ptr [esp + 0x34], ecx
  // if (below or equal) goto 0x44081d
  /* Block 22 @ 0x0043FD27 */
  // mov cl, byte ptr [edi + 0x158]
  // CMP cl, 8 (set flags)
  // if (above) goto 0x43fe4d
  /* Block 23 @ 0x0043FF6B */
  // TEST al, 1 (set flags)
  // mov dword ptr [esp + 0x24], 1
  // if (equal) goto 0x43ffb2
  /* Block 24 @ 0x0044029D */
  // TEST al, 2 (set flags)
  // if (not equal) goto 0x440488
  /* Block 25 @ 0x004409F3 */
  // mov edi, dword ptr [esp + 0x30]
  // add esp, 8
  goto 0x440a28;
  // or ecx, 1
  // mov word ptr [edi + 0x326], cx
  // mov dl, byte ptr [edi + 0x157]
  // mov ecx, edx
  // and ecx, 0xff
  // CMP ecx, 6 (set flags)
  // if (above) goto 0x4409e4
  /* Block 26 @ 0x0044081D */
  // xor ecx, ecx
  // mov edi, dword ptr [edi + 0x144]
  // CMP ecx, edx (set flags)
  // mov dword ptr [esp + 0x30], ecx
  // mov dword ptr [esp + 0x44], edi
  // if (equal) goto 0x44083d
  /* Block 27 @ 0x00440815 */
  // mov ecx, dword ptr [edi + 0x1b4]
  goto 0x44081f;
  /* Block 28 @ 0x0043FD36 */
  // mov eax, dword ptr [esp + 0x1c]
  // mov edi, 1
  // shl edi, cl
  // mov ecx, dword ptr [eax + 0x18]
  // mov dword ptr [esp + 0x2c], 0x100
  // mov dword ptr [esp + 0x34], 0
  // CMP edi, ecx (set flags)
  // if (below or equal) goto 0x43fd6a
  /* Block 29 @ 0x0043FE4D */
  // mov ecx, dword ptr [esp + 0x1c]
  // mov dword ptr [esp + 0x24], 1
  // CMP dword ptr [ecx + 0x18], 0x100 (set flags)
  // if (above or equal) goto 0x43fe70
  /* Block 30 @ 0x0043FFB2 */
  // TEST al, 2 (set flags)
  // if (equal) goto 0x4401e4
  /* Block 31 @ 0x0043FF77 */
  // mov edx, dword ptr [esp + 0x1c]
  // CMP dword ptr [edx + 0x18], 0x100 (set flags)
  // if (above or equal) goto 0x43ff92
  /* Block 32 @ 0x004402A5 */
  // push -1
  // push -1
  // push 1
  // push edi
  // call 0x0044BE60
  call(0x0044BE60);
  /* Block 33 @ 0x00440488 */
  // CMP dl, 6 (set flags)
  // mov dword ptr [esp + 0x24], 1
  // if (equal) goto 0x4404d2
  /* Block 34 @ 0x00440A28 */
  // mov eax, dword ptr [esp + 0x24]
  // dec eax
  // if (equal) goto 0x440a48
  /* Block 35 @ 0x0044083D */
  // mov dword ptr [esp + 0x38], edx
  // CMP ecx, edx (set flags)
  // if (not equal) goto 0x440849
  /* Block 36 @ 0x00440831 */
  // TEST al, 1 (set flags)
  // mov dword ptr [esp + 0x38], 1
  // if (equal) goto 0x440841
  // mov edi, dword ptr [edi + 0x144]
  // CMP ecx, edx (set flags)
  // mov dword ptr [esp + 0x30], ecx
  // mov dword ptr [esp + 0x44], edi
  // if (equal) goto 0x44083d
  /* Block 37 @ 0x0043FD6A */
  // lea ecx, [edi - 1]
  // mov eax, 0xff
  // xor edx, edx
  // mov ecx, dword ptr [esp + 0x58]
  // mov dword ptr [esp + 0x38], eax
  // xor eax, eax
  // CMP word ptr [ecx + 0x150], ax (set flags)
  // mov dword ptr [esp + 0x18], eax
  // if (below or equal) goto 0x43fdbe
  /* Block 38 @ 0x0043FD58 */
  // mov ecx, dword ptr [esp + 0x58]
  // push 0x2fb1ebc
  // push ecx
  // call 0x004463D0
  call(0x004463D0);
  /* Block 39 @ 0x0043FE62 */
  // push 0x2fb1e98
  // push edi
  // call 0x004463D0
  call(0x004463D0);
  /* Block 40 @ 0x0043FE70 */
  // push ebp
  // call 0x00441350
  call(0x00441350);
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0043FC00: sub      esp, 0x44
  0x0043FC03: push     ebx
  0x0043FC04: push     ebp
  0x0043FC05: mov      ebp, dword ptr [esp + 0x50]
  0x0043FC09: push     esi
  0x0043FC0A: push     edi
  0x0043FC0B: mov      dword ptr [esp + 0x20], 0x100
  0x0043FC13: mov      eax, dword ptr [ebp]
  0x0043FC16: mov      esi, 0xffff
  0x0043FC1B: mov      dword ptr [esp + 0x1c], eax
  0x0043FC1F: mov      ecx, dword ptr [eax]
  0x0043FC21: mov      eax, dword ptr [eax + 0x10]
  0x0043FC24: mov      edx, eax
  0x0043FC26: mov      dword ptr [esp + 0x30], eax
  0x0043FC2A: mov      edi, dword ptr [ecx]
  0x0043FC2C: and      dl, 4
  0x0043FC2F: neg      dl
  0x0043FC31: mov      cl, byte ptr [edi + 0x157]
  0x0043FC37: mov      dword ptr [esp + 0x58], edi
  0x0043FC3B: sbb      edx, edx
  0x0043FC3D: neg      edx
  0x0043FC3F: inc      edx
  0x0043FC40: mov      ebx, edx
  0x0043FC42: xor      edx, edx
  0x0043FC44: test     cl, 4
  0x0043FC47: mov      dword ptr [esp + 0x24], edx
  0x0043FC4B: mov      dword ptr [esp + 0x38], edx
  0x0043FC4F: jne      0x43fc5a
  0x0043FC51: cmp      word ptr [edi + 0x150], dx
  0x0043FC58: jbe      0x43fcb4
  0x0043FC5A: test     al, 1
  0x0043FC5C: jne      0x43fcb4
  0x0043FCB4: cmp      ebx, 2
  0x0043FCB7: je       0x43fcbe
  0x0043FC5E: cmp      ebx, 2
  0x0043FC61: jne      0x43fc73
  0x0043FCBE: mov      dword ptr [esp + 0x18], esi
  0x0043FCC2: mov      dword ptr [esp + 0x14], esi
  0x0043FCC6: mov      dword ptr [esp + 0x10], esi
  0x0043FCCA: mov      cx, word ptr [edi + 0x326]
  0x0043FCD1: test     cl, 1
  0x0043FCD4: jne      0x43fd09
  0x0043FCB9: mov      esi, 0xff
  0x0043FCBE: mov      dword ptr [esp + 0x18], esi
  0x0043FCC2: mov      dword ptr [esp + 0x14], esi
  0x0043FCC6: mov      dword ptr [esp + 0x10], esi
  0x0043FCCA: mov      cx, word ptr [edi + 0x326]
  0x0043FCD1: test     cl, 1
  0x0043FCD4: jne      0x43fd09
  0x0043FC63: xor      esi, esi
  0x0043FC65: mov      dword ptr [esp + 0x14], edx
  0x0043FC69: mov      dword ptr [esp + 0x18], esi
  0x0043FC6D: mov      dword ptr [esp + 0x10], edx
  0x0043FC71: jmp      0x43fcca
  0x0043FC73: mov      ecx, dword ptr [ebp + 0x10]
  0x0043FC76: cmp      ecx, edx
  0x0043FC78: jne      0x43fc92
  0x0043FCD6: cmp      byte ptr [edi + 0x158], 0x10
  0x0043FCDD: jne      0x43fcf5
  0x0043FD09: mov      dl, byte ptr [edi + 0x157]
  0x0043FD0F: mov      ecx, edx
  0x0043FD11: and      ecx, 0xff
  0x0043FD17: cmp      ecx, 6
  0x0043FD1A: ja       0x4409e4
  0x0043FCCA: mov      cx, word ptr [edi + 0x326]
  0x0043FCD1: test     cl, 1
  0x0043FCD4: jne      0x43fd09
  0x0043FC7A: push     0x2fb1ee0
  0x0043FC7F: push     edi
  0x0043FC80: call     0x4463d0
  0x0043FC92: xor      edx, edx
  0x0043FC94: mov      dl, byte ptr [ecx + 1]
  0x0043FC97: mov      esi, edx
  0x0043FC99: test     al, 2
  0x0043FC9B: mov      dword ptr [esp + 0x18], esi
  0x0043FC9F: je       0x43fcc2
  0x0043FCDF: mov      edx, dword ptr [esp + 0x1c]
  0x0043FCE3: test     byte ptr [edx + 0x14], 4
  0x0043FCE7: jne      0x43fcf5
  0x0043FCF5: mov      dword ptr [edi + 0x2dc], 0xb18f
  0x0043FCFF: or       ecx, 1
  0x0043FD02: mov      word ptr [edi + 0x326], cx
  0x0043FD09: mov      dl, byte ptr [edi + 0x157]
  0x0043FD0F: mov      ecx, edx
  0x0043FD11: and      ecx, 0xff
  0x0043FD17: cmp      ecx, 6
  0x0043FD1A: ja       0x4409e4
  0x0043FD20: jmp      dword ptr [ecx*4 + 0x440b54]
  0x004409E4: mov      edx, dword ptr [esp + 0x58]
  0x004409E8: push     0x2fb1d2c
  0x004409ED: push     edx
  0x004409EE: call     0x4463d0
  0x0043FC85: mov      esi, dword ptr [esp + 0x20]
  0x0043FC89: mov      eax, dword ptr [esp + 0x38]
  0x0043FC8D: add      esp, 8
  0x0043FC90: jmp      0x43fcca
  0x0043FCC2: mov      dword ptr [esp + 0x14], esi
  0x0043FCC6: mov      dword ptr [esp + 0x10], esi
  0x0043FCCA: mov      cx, word ptr [edi + 0x326]
  0x0043FCD1: test     cl, 1
  0x0043FCD4: jne      0x43fd09
  0x0043FCA1: xor      edx, edx
  0x0043FCA3: mov      dl, byte ptr [ecx]
  0x0043FCA5: mov      dword ptr [esp + 0x14], edx
  0x0043FCA9: xor      edx, edx
  0x0043FCAB: mov      dl, byte ptr [ecx + 2]
  0x0043FCAE: mov      dword ptr [esp + 0x10], edx
  0x0043FCB2: jmp      0x43fcca
  0x0043FCE9: mov      dword ptr [edi + 0x2dc], 0x186a0
  0x0043FCF3: jmp      0x43fcff
  0x00440802: xor      ecx, ecx
  0x00440804: xor      edx, edx
  0x00440806: mov      cx, word ptr [edi + 0x150]
  0x0044080D: cmp      ecx, edx
  0x0044080F: mov      dword ptr [esp + 0x34], ecx
  0x00440813: jbe      0x44081d
  0x0043FD27: mov      cl, byte ptr [edi + 0x158]
  0x0043FD2D: cmp      cl, 8
  0x0043FD30: ja       0x43fe4d
  0x0043FF6B: test     al, 1
  0x0043FF6D: mov      dword ptr [esp + 0x24], 1
  0x0043FF75: je       0x43ffb2
  0x0044029D: test     al, 2
  0x0044029F: jne      0x440488
  0x004409F3: mov      edi, dword ptr [esp + 0x30]
  0x004409F7: add      esp, 8
  0x004409FA: jmp      0x440a28
  0x0043FCFF: or       ecx, 1
  0x0043FD02: mov      word ptr [edi + 0x326], cx
  0x0043FD09: mov      dl, byte ptr [edi + 0x157]
  0x0043FD0F: mov      ecx, edx
  0x0043FD11: and      ecx, 0xff
  0x0043FD17: cmp      ecx, 6
  0x0043FD1A: ja       0x4409e4
  0x0044081D: xor      ecx, ecx
  0x0044081F: mov      edi, dword ptr [edi + 0x144]
  0x00440825: cmp      ecx, edx
  0x00440827: mov      dword ptr [esp + 0x30], ecx
  0x0044082B: mov      dword ptr [esp + 0x44], edi
  0x0044082F: je       0x44083d
  0x00440815: mov      ecx, dword ptr [edi + 0x1b4]
  0x0044081B: jmp      0x44081f
  0x0043FD36: mov      eax, dword ptr [esp + 0x1c]
  0x0043FD3A: mov      edi, 1
  0x0043FD3F: shl      edi, cl
  0x0043FD41: mov      ecx, dword ptr [eax + 0x18]
  0x0043FD44: mov      dword ptr [esp + 0x2c], 0x100
  0x0043FD4C: mov      dword ptr [esp + 0x34], 0
  0x0043FD54: cmp      edi, ecx
  0x0043FD56: jbe      0x43fd6a
  0x0043FE4D: mov      ecx, dword ptr [esp + 0x1c]
  0x0043FE51: mov      dword ptr [esp + 0x24], 1
  0x0043FE59: cmp      dword ptr [ecx + 0x18], 0x100
  0x0043FE60: jae      0x43fe70
  0x0043FFB2: test     al, 2
  0x0043FFB4: je       0x4401e4
  0x0043FF77: mov      edx, dword ptr [esp + 0x1c]
  0x0043FF7B: cmp      dword ptr [edx + 0x18], 0x100
  0x0043FF82: jae      0x43ff92
  0x004402A5: push     -1
  0x004402A7: push     -1
  0x004402A9: push     1
  0x004402AB: push     edi
  0x004402AC: call     0x44be60
  0x00440488: cmp      dl, 6
  0x0044048B: mov      dword ptr [esp + 0x24], 1
  0x00440493: je       0x4404d2
  0x00440A28: mov      eax, dword ptr [esp + 0x24]
  0x00440A2C: dec      eax
  0x00440A2D: je       0x440a48
  0x0044083D: mov      dword ptr [esp + 0x38], edx
  0x00440841: cmp      ecx, edx
  0x00440843: jne      0x440849
  0x00440831: test     al, 1
  0x00440833: mov      dword ptr [esp + 0x38], 1
  0x0044083B: je       0x440841
  0x0044081F: mov      edi, dword ptr [edi + 0x144]
  0x00440825: cmp      ecx, edx
  0x00440827: mov      dword ptr [esp + 0x30], ecx
  0x0044082B: mov      dword ptr [esp + 0x44], edi
  0x0044082F: je       0x44083d
  0x0043FD6A: lea      ecx, [edi - 1]
  0x0043FD6D: mov      eax, 0xff
  0x0043FD72: xor      edx, edx
  0x0043FD74: div      ecx
  0x0043FD76: mov      ecx, dword ptr [esp + 0x58]
  0x0043FD7A: mov      dword ptr [esp + 0x38], eax
  0x0043FD7E: xor      eax, eax
  0x0043FD80: cmp      word ptr [ecx + 0x150], ax
  0x0043FD87: mov      dword ptr [esp + 0x18], eax
  0x0043FD8B: jbe      0x43fdbe
  0x0043FD58: mov      ecx, dword ptr [esp + 0x58]
  0x0043FD5C: push     0x2fb1ebc
  0x0043FD61: push     ecx
  0x0043FD62: call     0x4463d0
  0x0043FE62: push     0x2fb1e98
  0x0043FE67: push     edi
  0x0043FE68: call     0x4463d0
  0x0043FE70: push     ebp
  0x0043FE71: call     0x441350
  0x004401E4: mov      edx, dword ptr [esp + 0x1c]
  0x004401E8: mov      dword ptr [esp + 0x44], esi
  0x004401EC: cmp      dword ptr [edx + 0x18], 0x100
  0x004401F3: jae      0x440203
  0x0043FFBA: cmp      dword ptr [esp + 0x14], esi
  0x0043FFBE: jne      0x43ffca
  0x0043FF84: push     0x2fb1e70
  0x0043FF89: push     edi
  0x0043FF8A: call     0x4463d0
  0x0043FF92: push     ebp
  0x0043FF93: call     0x441380
  0x004402B1: mov      al, byte ptr [edi + 0x157]
  0x004402B7: add      esp, 0x10
  0x004402BA: cmp      al, 6
  0x004402BC: mov      dword ptr [esp + 0x24], 1
  0x004402C4: je       0x4402d0
  0x004404D2: test     al, 1
  0x004404D4: je       0x440581
  0x00440495: cmp      word ptr [edi + 0x150], 0
  0x0044049D: ja       0x4404d2
  0x00440A48: mov      ecx, dword ptr [esp + 0x58]
  0x00440A4C: push     0x35b60
  0x00440A51: push     0
  0x00440A53: push     ecx
  0x00440A54: call     0x44bbf0
  0x00440A2F: sub      eax, 2
  0x00440A32: je       0x440a5c
  0x00440845: mov      dword ptr [esp + 0x34], edx
  0x00440849: mov      edx, dword ptr [esp + 0x58]
  0x0044084D: xor      edi, edi
  0x0044084F: mov      dword ptr [esp + 0x18], 0
  0x00440857: mov      dword ptr [esp + 0x24], 3
  0x0044085F: mov      di, word ptr [edx + 0x148]
  0x00440866: cmp      edi, 0x100
  0x0044086C: jbe      0x440873
  0x00440849: mov      edx, dword ptr [esp + 0x58]
  0x0044084D: xor      edi, edi
  0x0044084F: mov      dword ptr [esp + 0x18], 0
  0x00440857: mov      dword ptr [esp + 0x24], 3
  0x0044085F: mov      di, word ptr [edx + 0x148]
  0x00440866: cmp      edi, 0x100
  0x0044086C: jbe      0x440873
  0x00440841: cmp      ecx, edx
  0x00440843: jne      0x440849
  0x0043FDBE: mov      edx, dword ptr [esp + 0x2c]
  0x0043FDC2: cmp      edi, eax
  0x0043FDC4: mov      dword ptr [esp + 0x28], eax
  0x0043FDC8: mov      dword ptr [esp + 0x30], eax
  0x0043FDCC: jbe      0x43fe27
  0x0043FD8D: xor      edx, edx
  0x0043FD8F: mov      dx, word ptr [ecx + 0x1c0]
  0x0043FD96: mov      cl, byte ptr [esp + 0x30]
  0x0043FD9A: test     cl, 1
  0x0043FD9D: mov      dword ptr [esp + 0x2c], edx
  0x0043FDA1: jne      0x43fdc2
  0x0043FD67: add      esp, 8
  0x0043FD6A: lea      ecx, [edi - 1]
  0x0043FD6D: mov      eax, 0xff
  0x0043FD72: xor      edx, edx
  0x0043FD74: div      ecx
  0x0043FD76: mov      ecx, dword ptr [esp + 0x58]
  0x0043FD7A: mov      dword ptr [esp + 0x38], eax
  0x0043FD7E: xor      eax, eax
  0x0043FD80: cmp      word ptr [ecx + 0x150], ax
  0x0043FD87: mov      dword ptr [esp + 0x18], eax
  0x0043FD8B: jbe      0x43fdbe
  0x0043FE6D: add      esp, 8
  0x0043FE70: push     ebp
  0x0043FE71: call     0x441350
  0x0043FE76: mov      edx, dword ptr [esp + 0x5c]
  0x0043FE7A: add      esp, 4
  0x0043FE7D: mov      edi, eax
  0x0043FE7F: cmp      word ptr [edx + 0x150], 0
  0x0043FE87: jbe      0x440290
  0x004401F5: push     0x2fb1e24
  0x004401FA: push     edi
  0x004401FB: call     0x4463d0
  0x00440203: push     ebp
  0x00440204: call     0x441350
  0x0043FFC0: cmp      esi, dword ptr [esp + 0x10]
  0x0043FFC4: je       0x4401e4
  0x0043FFCA: mov      eax, dword ptr [esp + 0x1c]
  0x0043FFCE: cmp      dword ptr [eax + 0x18], 0x100
  0x0043FFD5: jae      0x43ffe5
  0x0043FF8F: add      esp, 8
  0x0043FF92: push     ebp
  0x0043FF93: call     0x441380
  0x0043FF98: add      esp, 4
  0x0043FF9B: mov      edi, eax
  0x0043FF9D: mov      dword ptr [esp + 0x20], 0xe7
  0x0043FFA5: mov      dword ptr [esp + 0x18], 1
  0x0043FFAD: jmp      0x440a28
  0x004402D0: test     byte ptr [esp + 0x30], 1
  0x004402D5: je       0x440312
  0x004402C6: cmp      word ptr [edi + 0x150], 0
  0x004402CE: jbe      0x440312
  0x00440581: mov      ecx, eax
  0x00440583: and      eax, 3
  0x00440586: shr      ecx, 2
  0x00440589: and      ecx, 1
  0x0044058C: inc      ecx
  0x0044058D: inc      eax
  0x0044058E: imul     ecx, eax
  0x00440591: mov      eax, dword ptr [esp + 0x1c]
  0x00440595: mov      dword ptr [esp + 0x30], ecx
  0x00440599: cmp      dword ptr [eax + 0x18], 0xf4
  0x004405A0: jae      0x4405b0
  0x004404DA: mov      eax, dword ptr [esp + 0x1c]
  0x004404DE: cmp      dword ptr [eax + 0x18], 0xf4
  0x004404E5: jae      0x4404f5
  0x0044049F: mov      edx, dword ptr [esp + 0x1c]
  0x004404A3: cmp      dword ptr [edx + 0x18], 0xd8
  0x004404AA: jae      0x4404ba
  0x00440A59: add      esp, 0xc
  0x00440A5C: mov      edx, dword ptr [esp + 0x58]
  0x00440A60: cmp      byte ptr [edx + 0x158], 8
  0x00440A67: jbe      0x440a74
  0x00440A5C: mov      edx, dword ptr [esp + 0x58]
  0x00440A60: cmp      byte ptr [edx + 0x158], 8
  0x00440A67: jbe      0x440a74
  0x00440A34: mov      eax, dword ptr [esp + 0x58]
  0x00440A38: push     0x2fb1d08
  0x00440A3D: push     eax
  0x00440A3E: call     0x4463d0
  0x00440873: mov      eax, dword ptr [esp + 0x1c]
  0x00440877: cmp      edi, dword ptr [eax + 0x18]
  0x0044087A: jbe      0x44088e
  0x0044086E: mov      edi, 0x100
  0x00440873: mov      eax, dword ptr [esp + 0x1c]
  0x00440877: cmp      edi, dword ptr [eax + 0x18]
  0x0044087A: jbe      0x44088e
  0x0043FE27: mov      edx, dword ptr [esp + 0x58]
  0x0043FE2B: mov      dword ptr [esp + 0x24], 3
  0x0043FE33: cmp      byte ptr [edx + 0x158], 8
  0x0043FE3A: jae      0x440a28
  0x0043FDCE: jmp      0x43fdd4
  0x0043FDA3: mov      ecx, ebx
  0x0043FDA5: sub      ecx, 2
  0x0043FDA8: neg      ecx
  0x0043FDAA: sbb      ecx, ecx
  0x0043FDAC: and      ecx, 0xffff0100
  0x0043FDB2: add      ecx, 0xffff
  0x0043FDB8: mov      dword ptr [esp + 0x34], ecx
  0x0043FDBC: jmp      0x43fdc2
  0x0043FDC2: cmp      edi, eax
  0x0043FDC4: mov      dword ptr [esp + 0x28], eax
  0x0043FDC8: mov      dword ptr [esp + 0x30], eax
  0x0043FDCC: jbe      0x43fe27
  0x00440290: mov      dword ptr [esp + 0x18], 0
  0x00440298: jmp      0x440a28
  0x0043FE8D: test     byte ptr [esp + 0x30], 1
  0x0043FE92: je       0x43fe9b
  0x00440200: add      esp, 8
  0x00440203: push     ebp
  0x00440204: call     0x441350
  0x00440209: add      esp, 4
  0x0044020C: cmp      ebx, 2
  0x0044020F: mov      edi, eax
  0x00440211: jne      0x44025b
  0x0043FFD7: push     0x2fb1e4c
  0x0043FFDC: push     edi
  0x0043FFDD: call     0x4463d0
  0x0043FFE5: mov      dword ptr [esp + 0x28], 0
  0x0043FFED: mov      edi, 0x73
  0x0043FFF2: mov      eax, 0x1bb4a405
  0x0043FFF7: push     1
  0x0043FFF9: mul      edi
  0x0043FFFB: mov      eax, edi
  0x0043FFFD: push     0xff
  0x00440002: sub      eax, edx
  0x00440004: add      edi, 0x100
  0x0044000A: shr      eax, 1
  0x0044000C: add      eax, edx
  0x0044000E: mov      edx, dword ptr [esp + 0x30]
  0x00440012: shr      eax, 7
  0x00440015: push     eax
  0x00440016: mov      ecx, edx
  0x00440018: push     eax
  0x00440019: push     eax
  0x0044001A: inc      edx
  0x0044001B: push     ecx
  0x0044001C: push     ebp
  0x0044001D: mov      dword ptr [esp + 0x44], edx
  0x00440021: call     0x440d60
  0x00440312: mov      ecx, dword ptr [esp + 0x1c]
  0x00440316: cmp      dword ptr [ecx + 0x18], 0x100
  0x0044031D: jae      0x44032d
  0x004402D7: mov      eax, dword ptr [esp + 0x1c]
  0x004402DB: cmp      dword ptr [eax + 0x18], 0x100
  0x004402E2: jae      0x4402f2
  0x004405A2: push     0x2fb1d68
  0x004405A7: push     edi
  0x004405A8: call     0x4463d0
  0x004405B0: push     ebp
  0x004405B1: call     0x441420
  0x004404E7: push     0x2fb1d90
  0x004404EC: push     edi
  0x004404ED: call     0x4463d0
  0x004404F5: push     ebp
  0x004404F6: call     0x441420
  0x004404AC: push     0x2fb1db8
  0x004404B1: push     edi
  0x004404B2: call     0x4463d0
  0x004404BA: push     ebp
  0x004404BB: call     0x441420
  0x00440A74: cmp      edi, 0x100
  0x00440A7A: ja       0x440a85
  0x00440A69: mov      eax, edx
  0x00440A6B: push     eax
  0x00440A6C: call     0x44bbb0
  0x00440A43: add      esp, 8
  0x00440A46: jmp      0x440a74
  0x0044088E: xor      ecx, ecx
  0x00440890: test     edi, edi
  0x00440892: mov      dword ptr [esp + 0x28], ecx
  0x00440896: jbe      0x4409cd
  0x0044087C: mov      ecx, dword ptr [esp + 0x58]
  0x00440880: push     0x2fb1d44
  0x00440885: push     ecx
  0x00440886: call     0x4463d0
  0x0043FE40: mov      eax, edx
  0x0043FE42: push     eax
  0x0043FE43: call     0x44fe00
  0x0043FDD4: cmp      eax, edx
  0x0043FDD6: je       0x43fded
  0x0043FE9B: cmp      dword ptr [esp + 0x14], esi
  0x0043FE9F: jne      0x43ff28
  0x0043FE94: xor      eax, eax
  0x0043FE96: jmp      0x43ff3b
  0x00440213: mov      eax, esi
  0x00440215: xor      ebx, ebx
  0x00440217: shl      eax, 8
  0x0044021A: sub      eax, esi
  0x0044021C: push     2
  0x0044021E: mov      ecx, eax
  0x00440220: and      eax, 0x7fff
  0x00440225: shr      ecx, 0xf
  0x00440228: push     0xffff
  0x0044022D: push     esi
  0x0044022E: mov      bl, byte ptr [ecx + 0x2f97858]
  0x00440234: push     esi
  0x00440235: imul     ebx, eax
  0x00440238: mov      ax, word ptr [ecx*2 + 0x2f97458]
  0x00440240: push     esi
  0x00440241: shr      ebx, 0xc
  0x00440244: add      ebx, eax
  0x00440246: shr      ebx, 8
  0x00440249: and      ebx, 0xff
  0x0044024F: push     ebx
  0x00440250: push     ebp
  0x00440251: call     0x440d60
  0x0044025B: mov      ebx, dword ptr [esp + 0x44]
  0x0044025F: push     0
  0x00440261: push     0
  0x00440263: mov      byte ptr [esp + 0x50], 0
  0x00440268: mov      word ptr [esp + 0x56], bx
  0x0044026D: mov      word ptr [esp + 0x54], bx
  0x00440272: mov      word ptr [esp + 0x52], bx
  0x00440277: mov      word ptr [esp + 0x58], bx
  0x0044027C: push     1
  0x0044027E: lea      ecx, [esp + 0x54]
  0x00440282: mov      edx, dword ptr [esp + 0x64]
  0x00440286: push     ecx
  0x00440287: push     edx
  0x00440288: call     0x44bac0
  0x0043FFE2: add      esp, 8
  0x0043FFE5: mov      dword ptr [esp + 0x28], 0
  0x0043FFED: mov      edi, 0x73
  0x0043FFF2: mov      eax, 0x1bb4a405
  0x0043FFF7: push     1
  0x0043FFF9: mul      edi
  0x0043FFFB: mov      eax, edi
  0x0043FFFD: push     0xff
  0x00440002: sub      eax, edx
  0x00440004: add      edi, 0x100
  0x0044000A: shr      eax, 1
  0x0044000C: add      eax, edx
  0x0044000E: mov      edx, dword ptr [esp + 0x30]
  0x00440012: shr      eax, 7
  0x00440015: push     eax
  0x00440016: mov      ecx, edx
  0x00440018: push     eax
  0x00440019: push     eax
  0x0044001A: inc      edx
  0x0044001B: push     ecx
  0x0044001C: push     ebp
  0x0044001D: mov      dword ptr [esp + 0x44], edx
  0x00440021: call     0x440d60
  0x00440026: add      esp, 0x1c
  0x00440029: cmp      edi, 0xe773
  0x0044002F: jb       0x43fff2
  0x0044031F: push     0x2fb1dd8
  0x00440324: push     edi
  0x00440325: call     0x4463d0
  0x0044032D: cmp      byte ptr [edi + 0x157], 6
  0x00440334: je       0x440340
  0x004402E4: push     0x2fb1e00
  0x004402E9: push     edi
  0x004402EA: call     0x4463d0
  0x004402F2: push     ebp
  0x004402F3: call     0x441380
  0x004405AD: add      esp, 8
  0x004405B0: push     ebp
  0x004405B1: call     0x441420
  0x004405B6: mov      ecx, dword ptr [esp + 0x14]
  0x004405BA: mov      edx, dword ptr [esp + 0x18]
  0x004405BE: push     ebx
  0x004405BF: push     0
  0x004405C1: push     ecx
  0x004405C2: push     esi
  0x004405C3: push     edx
  0x004405C4: push     eax
  0x004405C5: push     ebp
  0x004405C6: mov      dword ptr [esp + 0x48], eax
  0x004405CA: call     0x440d60
  0x004404F2: add      esp, 8
  0x004404F5: push     ebp
  0x004404F6: call     0x441420
  0x004404FB: push     1
  0x004404FD: push     0
  0x004404FF: push     0xff
  0x00440504: mov      edi, eax
  0x00440506: push     0xff
  0x0044050B: push     0xff
  0x00440510: push     edi
  0x00440511: push     ebp
  0x00440512: call     0x440d60
  0x004404B7: add      esp, 8
  0x004404BA: push     ebp
  0x004404BB: call     0x441420
  0x004404C0: add      esp, 4
  0x004404C3: mov      edi, eax
  0x004404C5: mov      dword ptr [esp + 0x18], 3
  0x004404CD: jmp      0x440a28
  0x00440A7C: mov      ecx, dword ptr [esp + 0x1c]
  0x00440A80: cmp      edi, dword ptr [ecx + 0x18]
  0x00440A83: jbe      0x440a97
  0x00440A85: mov      edx, dword ptr [esp + 0x58]
  0x00440A89: push     0x2fb1ce0
  0x00440A8E: push     edx
  0x00440A8F: call     0x4463d0
  0x00440A71: add      esp, 4
  0x00440A74: cmp      edi, 0x100
  0x00440A7A: ja       0x440a85
  0x004409CD: mov      eax, dword ptr [esp + 0x58]
  0x004409D1: cmp      byte ptr [eax + 0x158], 8
  0x004409D8: jae      0x440a28
  0x0044089C: mov      edx, dword ptr [esp + 0x44]
  0x004408A0: inc      edx
  0x004408A1: mov      dword ptr [esp + 0x2c], edx
  0x004408A5: mov      eax, dword ptr [esp + 0x38]
  0x004408A9: test     eax, eax
  0x004408AB: je       0x440975
  0x0044088B: add      esp, 8
  0x0044088E: xor      ecx, ecx
  0x00440890: test     edi, edi
  0x00440892: mov      dword ptr [esp + 0x28], ecx
  0x00440896: jbe      0x4409cd
  0x0043FE48: jmp      0x440a25
  0x0043FDED: mov      eax, dword ptr [esp + 0x34]
  0x0043FDF1: mov      ecx, dword ptr [esp + 0x10]
  0x0043FDF5: mov      edx, dword ptr [esp + 0x14]
  0x0043FDF9: push     ebx
  0x0043FDFA: push     eax
  0x0043FDFB: mov      eax, dword ptr [esp + 0x38]
  0x0043FDFF: push     ecx
  0x0043FE00: push     esi
  0x0043FE01: push     edx
  0x0043FE02: push     eax
  0x0043FE03: push     ebp
  0x0043FE04: call     0x440d60
  0x0043FDD8: mov      eax, dword ptr [esp + 0x28]
  0x0043FDDC: mov      edx, dword ptr [esp + 0x30]
  0x0043FDE0: push     3
  0x0043FDE2: push     0xff
  0x0043FDE7: push     eax
  0x0043FDE8: push     eax
  0x0043FDE9: push     eax
  0x0043FDEA: push     edx
  0x0043FDEB: jmp      0x43fe03
  0x0043FEA5: cmp      esi, dword ptr [esp + 0x10]
  0x0043FEA9: jne      0x43ff28
  0x0043FF28: mov      eax, ebx
  0x0043FF2A: sub      eax, 2
  0x0043FF2D: neg      eax
  0x0043FF2F: sbb      eax, eax
  0x0043FF31: and      eax, 0xffff0100
  0x0043FF36: add      eax, 0xffff
  0x0043FF3B: mov      ecx, dword ptr [esp + 0x14]
  0x0043FF3F: push     ebx
  0x0043FF40: push     eax
  0x0043FF41: mov      eax, dword ptr [esp + 0x18]
  0x0043FF45: push     eax
  0x0043FF46: push     esi
  0x0043FF47: push     ecx
  0x0043FF48: push     0xfe
  0x0043FF4D: push     ebp
  0x0043FF4E: mov      dword ptr [esp + 0x34], 2
  0x0043FF56: mov      dword ptr [esp + 0x3c], 0xfe
  0x0043FF5E: call     0x440d60
  0x0043FF3B: mov      ecx, dword ptr [esp + 0x14]
  0x0043FF3F: push     ebx
  0x0043FF40: push     eax
  0x0043FF41: mov      eax, dword ptr [esp + 0x18]
  0x0043FF45: push     eax
  0x0043FF46: push     esi
  0x0043FF47: push     ecx
  0x0043FF48: push     0xfe
  0x0043FF4D: push     ebp
  0x0043FF4E: mov      dword ptr [esp + 0x34], 2
  0x0043FF56: mov      dword ptr [esp + 0x3c], 0xfe
  0x0043FF5E: call     0x440d60
  0x00440256: add      esp, 0x1c
  0x00440259: jmp      0x44025f
  0x0044028D: add      esp, 0x14
  0x00440290: mov      dword ptr [esp + 0x18], 0
  0x00440298: jmp      0x440a28
  0x0043FFF2: mov      eax, 0x1bb4a405
  0x0043FFF7: push     1
  0x0043FFF9: mul      edi
  0x0043FFFB: mov      eax, edi
  0x0043FFFD: push     0xff
  0x00440002: sub      eax, edx
  0x00440004: add      edi, 0x100
  0x0044000A: shr      eax, 1
  0x0044000C: add      eax, edx
  0x0044000E: mov      edx, dword ptr [esp + 0x30]
  0x00440012: shr      eax, 7
  0x00440015: push     eax
  0x00440016: mov      ecx, edx
  0x00440018: push     eax
  0x00440019: push     eax
  0x0044001A: inc      edx
  0x0044001B: push     ecx
  0x0044001C: push     ebp
  0x0044001D: mov      dword ptr [esp + 0x44], edx
  0x00440021: call     0x440d60
  0x00440031: mov      ecx, dword ptr [esp + 0x28]
  0x00440035: mov      edx, dword ptr [esp + 0x10]
  0x00440039: mov      dword ptr [esp + 0x20], ecx
  0x0044003D: mov      eax, ecx
  0x0044003F: inc      ecx
  0x00440040: mov      edi, dword ptr [esp + 0x14]
  0x00440044: mov      dword ptr [esp + 0x28], ecx
  0x00440048: mov      ecx, ebx
  0x0044004A: sub      ecx, 2
  0x0044004D: push     ebx
  0x0044004E: neg      ecx
  0x00440050: sbb      ecx, ecx
  0x00440052: and      ecx, 0xffff0100
  0x00440058: add      ecx, 0xffff
  0x0044005E: push     ecx
  0x0044005F: push     edx
  0x00440060: push     esi
  0x00440061: push     edi
  0x00440062: push     eax
  0x00440063: push     ebp
  0x00440064: call     0x440d60
  0x0044032A: add      esp, 8
  0x0044032D: cmp      byte ptr [edi + 0x157], 6
  0x00440334: je       0x440340
  0x00440340: mov      edx, dword ptr [edi + 0x2dc]
  0x00440346: push     edx
  0x00440347: call     0x440b90
  0x00440336: cmp      word ptr [edi + 0x150], 0
  0x0044033E: jbe      0x440368
  0x004402EF: add      esp, 8
  0x004402F2: push     ebp
  0x004402F3: call     0x441380
  0x004402F8: add      esp, 4
  0x004402FB: mov      edi, eax
  0x004402FD: mov      dword ptr [esp + 0x20], 0xe7
  0x00440305: mov      dword ptr [esp + 0x18], 1
  0x0044030D: jmp      0x440a04
  0x004405CF: mov      eax, dword ptr [esp + 0x34]
  0x004405D3: add      esp, 0x20
  0x004405D6: cmp      ebx, 2
  0x004405D9: jne      0x44068d
  0x00440517: add      esp, 0x20
  0x0044051A: mov      dword ptr [esp + 0x20], edi
  0x0044051E: inc      edi
  0x0044051F: mov      dword ptr [esp + 0x30], 0
  0x00440527: xor      ebx, ebx
  0x00440529: xor      esi, esi
  0x0044052B: mov      ecx, dword ptr [esp + 0x30]
  0x0044052F: push     1
  0x00440531: push     0x80
  0x00440536: push     esi
  0x00440537: mov      eax, edi
  0x00440539: push     ebx
  0x0044053A: push     ecx
  0x0044053B: push     eax
  0x0044053C: push     ebp
  0x0044053D: inc      edi
  0x0044053E: call     0x440d60
  0x00440A97: mov      eax, dword ptr [esp + 0x1c]
  0x00440A9B: mov      dword ptr [eax + 0x18], edi
  0x00440A9E: mov      eax, dword ptr [esp + 0x18]
  0x00440AA2: cmp      eax, 4
  0x00440AA5: ja       0x440b19
  0x00440A94: add      esp, 8
  0x00440A97: mov      eax, dword ptr [esp + 0x1c]
  0x00440A9B: mov      dword ptr [eax + 0x18], edi
  0x00440A9E: mov      eax, dword ptr [esp + 0x18]
  0x00440AA2: cmp      eax, 4
  0x00440AA5: ja       0x440b19
  0x004409DA: mov      ecx, eax
  0x004409DC: push     ecx
  0x004409DD: call     0x44fe00
  0x00440975: cmp      ecx, dword ptr [esp + 0x34]
  0x00440979: jae      0x440986
  0x004408B1: cmp      ecx, dword ptr [esp + 0x34]
  0x004408B5: jae      0x440986
  0x00440A25: add      esp, 4
  0x00440A28: mov      eax, dword ptr [esp + 0x24]
  0x00440A2C: dec      eax
  0x00440A2D: je       0x440a48
  0x0043FE09: mov      eax, dword ptr [esp + 0x4c]
  0x0043FE0D: mov      ecx, dword ptr [esp + 0x54]
  0x0043FE11: mov      edx, dword ptr [esp + 0x44]
  0x0043FE15: add      esp, 0x1c
  0x0043FE18: inc      eax
  0x0043FE19: add      edx, ecx
  0x0043FE1B: cmp      eax, edi
  0x0043FE1D: mov      dword ptr [esp + 0x30], eax
  0x0043FE21: mov      dword ptr [esp + 0x28], edx
  0x0043FE25: jb       0x43fdd0
  0x0043FE03: push     ebp
  0x0043FE04: call     0x440d60
  0x0043FEAB: cmp      ebx, 2
  0x0043FEAE: mov      dword ptr [esp + 0x38], esi
  0x0043FEB2: jne      0x43fefc
  0x0043FF63: add      esp, 0x1c
  0x0043FF66: jmp      0x440a04
  0x0044025F: push     0
  0x00440261: push     0
  0x00440263: mov      byte ptr [esp + 0x50], 0
  0x00440268: mov      word ptr [esp + 0x56], bx
  0x0044026D: mov      word ptr [esp + 0x54], bx
  0x00440272: mov      word ptr [esp + 0x52], bx
  0x00440277: mov      word ptr [esp + 0x58], bx
  0x0044027C: push     1
  0x0044027E: lea      ecx, [esp + 0x54]
  0x00440282: mov      edx, dword ptr [esp + 0x64]
  0x00440286: push     ecx
  0x00440287: push     edx
  0x00440288: call     0x44bac0
  0x00440069: add      esp, 0x1c
  0x0044006C: cmp      ebx, 1
  0x0044006F: jne      0x44009f
  0x0044034C: add      esp, 4
  0x0044034F: test     eax, eax
  0x00440351: je       0x440368
  0x00440368: push     ebp
  0x00440369: call     0x441350
  0x00440A04: mov      eax, dword ptr [esp + 0x58]
  0x00440A08: cmp      word ptr [eax + 0x150], 0
  0x00440A10: jbe      0x440a28
  0x004405DF: mov      ecx, eax
  0x004405E1: xor      edx, edx
  0x004405E3: shl      ecx, 8
  0x004405E6: sub      ecx, eax
  0x004405E8: xor      eax, eax
  0x004405EA: mov      edi, ecx
  0x004405EC: and      ecx, 0x7fff
  0x004405F2: shr      edi, 0xf
  0x004405F5: mov      al, byte ptr [edi + 0x2f97858]
  0x004405FB: imul     eax, ecx
  0x004405FE: mov      cx, word ptr [edi*2 + 0x2f97458]
  0x00440606: mov      edi, esi
  0x00440608: shl      edi, 8
  0x0044060B: shr      eax, 0xc
  0x0044060E: sub      edi, esi
  0x00440610: add      eax, ecx
  0x00440612: mov      ecx, edi
  0x00440614: and      edi, 0x7fff
  0x0044061A: shr      ecx, 0xf
  0x0044061D: shr      eax, 8
  0x00440620: mov      dl, byte ptr [ecx + 0x2f97858]
  0x00440626: mov      cx, word ptr [ecx*2 + 0x2f97458]
  0x0044062E: mov      esi, edx
  0x00440630: mov      edx, dword ptr [esp + 0x10]
  0x00440634: imul     esi, edi
  0x00440637: shr      esi, 0xc
  0x0044063A: add      esi, ecx
  0x0044063C: mov      ecx, edx
  0x0044063E: shl      ecx, 8
  0x00440641: sub      ecx, edx
  0x00440643: and      eax, 0xff
  0x00440648: mov      edx, ecx
  0x0044064A: and      ecx, 0x7fff
  0x00440650: shr      edx, 0xf
  0x00440653: mov      dword ptr [esp + 0x34], edx
  0x00440657: xor      edx, edx
  0x00440659: mov      edi, dword ptr [esp + 0x34]
  0x0044065D: shr      esi, 8
  0x00440660: mov      dl, byte ptr [edi + 0x2f97858]
  0x00440666: and      esi, 0xff
  0x0044066C: mov      edi, edx
  0x0044066E: imul     edi, ecx
  0x00440671: mov      ecx, dword ptr [esp + 0x34]
  0x00440675: shr      edi, 0xc
  0x00440678: mov      dx, word ptr [ecx*2 + 0x2f97458]
  0x00440680: add      edi, edx
  0x00440682: shr      edi, 8
  0x00440685: and      edi, 0xff
  0x0044068B: jmp      0x44068f
  0x0044068D: mov      edi, esi
  0x0044068F: lea      eax, [eax + eax*4 + 0x82]
  0x00440696: mov      dl, 6
  0x00440698: shr      eax, 8
  0x0044069B: imul     dl
  0x0044069D: lea      edx, [esi + esi*4 + 0x82]
  0x004406A4: mov      ecx, dword ptr [esp + 0x30]
  0x004406A8: shr      edx, 8
  0x004406AB: add      al, dl
  0x004406AD: mov      dl, 6
  0x004406AF: imul     dl
  0x004406B1: mov      dl, al
  0x004406B3: lea      eax, [edi + edi*4 + 0x82]
  0x004406BA: shr      eax, 8
  0x004406BD: add      dl, al
  0x004406BF: mov      esi, ecx
  0x004406C1: imul     esi, dword ptr [esp + 0x28]
  0x004406C6: and      edx, 0xff
  0x004406CC: mov      eax, dword ptr [ebp + 0xc]
  0x004406CF: imul     edx, ecx
  0x004406D2: add      edx, eax
  0x004406D4: add      esi, eax
  0x004406D6: mov      edi, edx
  0x004406D8: xor      edx, edx
  0x004406DA: repe cmpsb byte ptr [esi], byte ptr es:[edi]
  0x00440543: add      esi, esi
  0x00440545: add      esp, 0x1c
  0x00440548: or       esi, 0x7f
  0x0044054B: cmp      esi, 0x100
  0x00440551: jb       0x44052b
  0x00440AA7: jmp      dword ptr [eax*4 + 0x440b70]
  0x00440B19: mov      ecx, dword ptr [esp + 0x58]
  0x00440B1D: push     0x2fb1cb8
  0x00440B22: push     ecx
  0x00440B23: call     0x4463d0
  0x004409E2: jmp      0x440a25
  0x0044097B: mov      edx, dword ptr [esp + 0x30]
  0x0044097F: xor      eax, eax
  0x00440981: mov      al, byte ptr [ecx + edx]
  0x00440984: jmp      0x44098b
  0x00440986: mov      eax, 0xff
  0x0044098B: push     3
  0x0044098D: push     eax
  0x0044098E: mov      eax, dword ptr [esp + 0x34]
  0x00440992: xor      ecx, ecx
  0x00440994: xor      edx, edx
  0x00440996: mov      cl, byte ptr [eax + 1]
  0x00440999: mov      dl, byte ptr [eax]
  0x0044099B: push     ecx
  0x0044099C: xor      ecx, ecx
  0x0044099E: mov      cl, byte ptr [eax - 1]
  0x004409A1: push     edx
  0x004409A2: mov      edx, dword ptr [esp + 0x38]
  0x004409A6: push     ecx
  0x004409A7: push     edx
  0x004409A8: push     ebp
  0x004409A9: call     0x440d60
  0x004408BB: mov      eax, dword ptr [esp + 0x30]
  0x004408BF: mov      al, byte ptr [ecx + eax]
  0x004408C2: cmp      al, 0xff
  0x004408C4: jae      0x440975
  0x0043FDD0: mov      edx, dword ptr [esp + 0x2c]
  0x0043FDD4: cmp      eax, edx
  0x0043FDD6: je       0x43fded
  0x0043FEB4: mov      eax, esi
  0x0043FEB6: xor      ebx, ebx
  0x0043FEB8: shl      eax, 8
  0x0043FEBB: sub      eax, esi
  0x0043FEBD: push     2
  0x0043FEBF: mov      ecx, eax
  0x0043FEC1: and      eax, 0x7fff
  0x0043FEC6: shr      ecx, 0xf
  0x0043FEC9: push     0xffff
  0x0043FECE: push     esi
  0x0043FECF: mov      bl, byte ptr [ecx + 0x2f97858]
  0x0043FED5: push     esi
  0x0043FED6: imul     ebx, eax
  0x0043FED9: mov      ax, word ptr [ecx*2 + 0x2f97458]
  0x0043FEE1: push     esi
  0x0043FEE2: shr      ebx, 0xc
  0x0043FEE5: add      ebx, eax
  0x0043FEE7: shr      ebx, 8
  0x0043FEEA: and      ebx, 0xff
  0x0043FEF0: push     ebx
  0x0043FEF1: push     ebp
  0x0043FEF2: call     0x440d60
  0x0043FEFC: mov      ebx, dword ptr [esp + 0x38]
  0x0043FF00: push     0
  0x0043FF02: push     0
  0x0043FF04: mov      byte ptr [esp + 0x50], 0
  0x0043FF09: mov      word ptr [esp + 0x56], bx
  0x0043FF0E: mov      word ptr [esp + 0x54], bx
  0x0043FF13: mov      word ptr [esp + 0x52], bx
  0x0043FF18: mov      word ptr [esp + 0x58], bx
  0x0043FF1D: push     1
  0x0043FF1F: lea      ecx, [esp + 0x54]
  0x0043FF23: jmp      0x440282
  0x00440071: xor      eax, eax
  0x00440073: xor      ecx, ecx
  0x00440075: mov      ax, word ptr [edi*2 + 0x2f97258]
  0x0044007D: mov      cx, word ptr [esi*2 + 0x2f97258]
  0x00440085: mov      dword ptr [esp + 0x14], eax
  0x00440089: mov      eax, dword ptr [esp + 0x10]
  0x0044008D: xor      edx, edx
  0x0044008F: mov      dword ptr [esp + 0x18], ecx
  0x00440093: mov      dx, word ptr [eax*2 + 0x2f97258]
  0x0044009B: mov      dword ptr [esp + 0x10], edx
  0x0044009F: mov      ecx, 0x33
  0x004400A4: mov      dword ptr [esp + 0x2c], ecx
  0x004400A8: mov      eax, 0xff
  0x004400AD: mov      dword ptr [esp + 0x30], 0x2f97258
  0x004400B5: sub      eax, ecx
  0x004400B7: mov      ecx, eax
  0x004400B9: imul     ecx, dword ptr [esp + 0x14]
  0x004400BE: mov      dword ptr [esp + 0x3c], ecx
  0x004400C2: mov      ecx, eax
  0x004400C4: imul     ecx, dword ptr [esp + 0x18]
  0x004400C9: imul     eax, dword ptr [esp + 0x10]
  0x004400CE: mov      dword ptr [esp + 0x34], ecx
  0x004400D2: mov      dword ptr [esp + 0x38], eax
  0x004400D6: mov      ecx, dword ptr [esp + 0x30]
  0x004400DA: xor      eax, eax
  0x004400DC: mov      edx, dword ptr [esp + 0x38]
  0x004400E0: mov      esi, dword ptr [esp + 0x3c]
  0x004400E4: mov      ax, word ptr [ecx]
  0x004400E7: mov      ecx, dword ptr [esp + 0x28]
  0x004400EB: imul     eax, dword ptr [esp + 0x2c]
  0x004400F0: mov      dword ptr [esp + 0x44], ecx
  0x004400F4: inc      ecx
  0x004400F5: mov      dword ptr [esp + 0x28], ecx
  0x004400F9: lea      ecx, [eax + edx]
  0x004400FC: mov      edx, dword ptr [esp + 0x34]
  0x00440100: add      esi, eax
  0x00440102: add      edx, eax
  0x00440104: mov      eax, esi
  0x00440106: mov      edi, ecx
  0x00440108: and      ecx, 0x7fff
  0x0044010E: shr      eax, 0xf
  0x00440111: shr      edi, 0xf
  0x00440114: mov      dword ptr [esp + 0x40], eax
  0x00440118: xor      eax, eax
  0x0044011A: mov      al, byte ptr [edi + 0x2f97858]
  0x00440120: mov      ebx, edx
  0x00440122: imul     eax, ecx
  0x00440125: mov      cx, word ptr [edi*2 + 0x2f97458]
  0x0044012D: push     1
  0x0044012F: shr      eax, 0xc
  0x00440132: add      eax, ecx
  0x00440134: push     0xff
  0x00440139: shr      eax, 8
  0x0044013C: and      eax, 0xff
  0x00440141: and      edx, 0x7fff
  0x00440147: shr      ebx, 0xf
  0x0044014A: push     eax
  0x0044014B: xor      eax, eax
  0x0044014D: mov      al, byte ptr [ebx + 0x2f97858]
  0x00440153: mov      cx, word ptr [ebx*2 + 0x2f97458]
  0x0044015B: imul     eax, edx
  0x0044015E: shr      eax, 0xc
  0x00440161: add      eax, ecx
  0x00440163: xor      edx, edx
  0x00440165: shr      eax, 8
  0x00440168: and      eax, 0xff
  0x0044016D: and      esi, 0x7fff
  0x00440173: push     eax
  0x00440174: mov      eax, dword ptr [esp + 0x50]
  0x00440178: mov      ecx, dword ptr [esp + 0x54]
  0x0044017C: mov      dl, byte ptr [eax + 0x2f97858]
  0x00440182: mov      ax, word ptr [eax*2 + 0x2f97458]
  0x0044018A: imul     edx, esi
  0x0044018D: shr      edx, 0xc
  0x00440190: add      edx, eax
  0x00440192: shr      edx, 8
  0x00440195: and      edx, 0xff
  0x0044019B: push     edx
  0x0044019C: push     ecx
  0x0044019D: push     ebp
  0x0044019E: call     0x440d60
  0x0044009F: mov      ecx, 0x33
  0x004400A4: mov      dword ptr [esp + 0x2c], ecx
  0x004400A8: mov      eax, 0xff
  0x004400AD: mov      dword ptr [esp + 0x30], 0x2f97258
  0x004400B5: sub      eax, ecx
  0x004400B7: mov      ecx, eax
  0x004400B9: imul     ecx, dword ptr [esp + 0x14]
  0x004400BE: mov      dword ptr [esp + 0x3c], ecx
  0x004400C2: mov      ecx, eax
  0x004400C4: imul     ecx, dword ptr [esp + 0x18]
  0x004400C9: imul     eax, dword ptr [esp + 0x10]
  0x004400CE: mov      dword ptr [esp + 0x34], ecx
  0x004400D2: mov      dword ptr [esp + 0x38], eax
  0x004400D6: mov      ecx, dword ptr [esp + 0x30]
  0x004400DA: xor      eax, eax
  0x004400DC: mov      edx, dword ptr [esp + 0x38]
  0x004400E0: mov      esi, dword ptr [esp + 0x3c]
  0x004400E4: mov      ax, word ptr [ecx]
  0x004400E7: mov      ecx, dword ptr [esp + 0x28]
  0x004400EB: imul     eax, dword ptr [esp + 0x2c]
  0x004400F0: mov      dword ptr [esp + 0x44], ecx
  0x004400F4: inc      ecx
  0x004400F5: mov      dword ptr [esp + 0x28], ecx
  0x004400F9: lea      ecx, [eax + edx]
  0x004400FC: mov      edx, dword ptr [esp + 0x34]
  0x00440100: add      esi, eax
  0x00440102: add      edx, eax
  0x00440104: mov      eax, esi
  0x00440106: mov      edi, ecx
  0x00440108: and      ecx, 0x7fff
  0x0044010E: shr      eax, 0xf
  0x00440111: shr      edi, 0xf
  0x00440114: mov      dword ptr [esp + 0x40], eax
  0x00440118: xor      eax, eax
  0x0044011A: mov      al, byte ptr [edi + 0x2f97858]
  0x00440120: mov      ebx, edx
  0x00440122: imul     eax, ecx
  0x00440125: mov      cx, word ptr [edi*2 + 0x2f97458]
  0x0044012D: push     1
  0x0044012F: shr      eax, 0xc
  0x00440132: add      eax, ecx
  0x00440134: push     0xff
  0x00440139: shr      eax, 8
  0x0044013C: and      eax, 0xff
  0x00440141: and      edx, 0x7fff
  0x00440147: shr      ebx, 0xf
  0x0044014A: push     eax
  0x0044014B: xor      eax, eax
  0x0044014D: mov      al, byte ptr [ebx + 0x2f97858]
  0x00440153: mov      cx, word ptr [ebx*2 + 0x2f97458]
  0x0044015B: imul     eax, edx
  0x0044015E: shr      eax, 0xc
  0x00440161: add      eax, ecx
  0x00440163: xor      edx, edx
  0x00440165: shr      eax, 8
  0x00440168: and      eax, 0xff
  0x0044016D: and      esi, 0x7fff
  0x00440173: push     eax
  0x00440174: mov      eax, dword ptr [esp + 0x50]
  0x00440178: mov      ecx, dword ptr [esp + 0x54]
  0x0044017C: mov      dl, byte ptr [eax + 0x2f97858]
  0x00440182: mov      ax, word ptr [eax*2 + 0x2f97458]
  0x0044018A: imul     edx, esi
  0x0044018D: shr      edx, 0xc
  0x00440190: add      edx, eax
  0x00440192: shr      edx, 8
  0x00440195: and      edx, 0xff
  0x0044019B: push     edx
  0x0044019C: push     ecx
  0x0044019D: push     ebp
  0x0044019E: call     0x440d60
  0x00440353: push     ebp
  0x00440354: call     0x441320
  0x0044036E: add      esp, 4
  0x00440371: mov      edi, eax
  0x00440373: mov      eax, dword ptr [esp + 0x58]
  0x00440377: cmp      byte ptr [eax + 0x157], 6
  0x0044037E: je       0x44038e
  0x00440A12: mov      ecx, eax
  0x00440A14: test     byte ptr [ecx + 0x157], 4
  0x00440A1B: jne      0x440a28
  0x0044068F: lea      eax, [eax + eax*4 + 0x82]
  0x00440696: mov      dl, 6
  0x00440698: shr      eax, 8
  0x0044069B: imul     dl
  0x0044069D: lea      edx, [esi + esi*4 + 0x82]
  0x004406A4: mov      ecx, dword ptr [esp + 0x30]
  0x004406A8: shr      edx, 8
  0x004406AB: add      al, dl
  0x004406AD: mov      dl, 6
  0x004406AF: imul     dl
  0x004406B1: mov      dl, al
  0x004406B3: lea      eax, [edi + edi*4 + 0x82]
  0x004406BA: shr      eax, 8
  0x004406BD: add      dl, al
  0x004406BF: mov      esi, ecx
  0x004406C1: imul     esi, dword ptr [esp + 0x28]
  0x004406C6: and      edx, 0xff
  0x004406CC: mov      eax, dword ptr [ebp + 0xc]
  0x004406CF: imul     edx, ecx
  0x004406D2: add      edx, eax
  0x004406D4: add      esi, eax
  0x004406D6: mov      edi, edx
  0x004406D8: xor      edx, edx
  0x004406DA: repe cmpsb byte ptr [esi], byte ptr es:[edi]
  0x004406DC: je       0x4407b2
  0x004406DA: repe cmpsb byte ptr [esi], byte ptr es:[edi]
  0x0044052B: mov      ecx, dword ptr [esp + 0x30]
  0x0044052F: push     1
  0x00440531: push     0x80
  0x00440536: push     esi
  0x00440537: mov      eax, edi
  0x00440539: push     ebx
  0x0044053A: push     ecx
  0x0044053B: push     eax
  0x0044053C: push     ebp
  0x0044053D: inc      edi
  0x0044053E: call     0x440d60
  0x00440553: add      ebx, ebx
  0x00440555: or       ebx, 0x7f
  0x00440558: cmp      ebx, 0x100
  0x0044055E: jb       0x440529
  0x00440AEA: mov      eax, dword ptr [esp + 0x20]
  0x00440AEE: cmp      eax, edi
  0x00440AF0: jae      0x440b2b
  0x00440AFB: cmp      dword ptr [esp + 0x20], 0xd8
  0x00440B03: jne      0x440b2b
  0x00440ACC: cmp      dword ptr [esp + 0x20], 0xe7
  0x00440AD4: jne      0x440b2b
  0x00440AAE: cmp      dword ptr [esp + 0x20], 0x100
  0x00440AB6: jne      0x440b2b
  0x00440B28: add      esp, 8
  0x00440B2B: mov      edx, dword ptr [esp + 0x58]
  0x00440B2F: push     0x2fb1c90
  0x00440B34: push     edx
  0x00440B35: call     0x4463d0
  0x0044098B: push     3
  0x0044098D: push     eax
  0x0044098E: mov      eax, dword ptr [esp + 0x34]
  0x00440992: xor      ecx, ecx
  0x00440994: xor      edx, edx
  0x00440996: mov      cl, byte ptr [eax + 1]
  0x00440999: mov      dl, byte ptr [eax]
  0x0044099B: push     ecx
  0x0044099C: xor      ecx, ecx
  0x0044099E: mov      cl, byte ptr [eax - 1]
  0x004409A1: push     edx
  0x004409A2: mov      edx, dword ptr [esp + 0x38]
  0x004409A6: push     ecx
  0x004409A7: push     edx
  0x004409A8: push     ebp
  0x004409A9: call     0x440d60
  0x004409AE: mov      ecx, dword ptr [esp + 0x44]
  0x004409B2: mov      edx, dword ptr [esp + 0x48]
  0x004409B6: add      esp, 0x1c
  0x004409B9: inc      ecx
  0x004409BA: add      edx, 3
  0x004409BD: cmp      ecx, edi
  0x004409BF: mov      dword ptr [esp + 0x28], ecx
  0x004409C3: mov      dword ptr [esp + 0x2c], edx
  0x004409C7: jb       0x4408a5
  0x004408CA: test     al, al
  0x004408CC: jne      0x4408e6
  0x0043FEF7: add      esp, 0x1c
  0x0043FEFA: jmp      0x43ff00
  0x00440282: mov      edx, dword ptr [esp + 0x64]
  0x00440286: push     ecx
  0x00440287: push     edx
  0x00440288: call     0x44bac0
  0x004401A3: mov      eax, dword ptr [esp + 0x4c]
  0x004401A7: add      esp, 0x1c
  0x004401AA: add      eax, 0x66
  0x004401AD: cmp      eax, 0x2f974bc
  0x004401B2: mov      dword ptr [esp + 0x30], eax
  0x004401B6: jl       0x4400d6
  0x00440359: add      esp, 4
  0x0044035C: mov      edi, eax
  0x0044035E: mov      dword ptr [esp + 0x24], 3
  0x00440366: jmp      0x440373
  0x0044038E: mov      eax, dword ptr [esp + 0x24]
  0x00440392: mov      dword ptr [esp + 0x2c], esi
  0x00440396: cmp      eax, 3
  0x00440399: jne      0x44043b
  0x00440380: cmp      word ptr [eax + 0x150], 0
  0x00440388: jbe      0x44042e
  0x00440A1D: mov      edx, ecx
  0x00440A1F: push     edx
  0x00440A20: call     0x44bdf0
  0x004407B2: mov      eax, dword ptr [esp + 0x18]
  0x004407B6: mov      cx, word ptr [esp + 0x14]
  0x004407BB: mov      dx, word ptr [esp + 0x10]
  0x004407C0: mov      word ptr [esp + 0x4c], ax
  0x004407C5: mov      word ptr [esp + 0x50], ax
  0x004407CA: push     0
  0x004407CC: mov      word ptr [esp + 0x4e], cx
  0x004407D1: mov      ecx, dword ptr [esp + 0x5c]
  0x004407D5: push     0
  0x004407D7: lea      eax, [esp + 0x50]
  0x004407DB: push     1
  0x004407DD: push     eax
  0x004407DE: push     ecx
  0x004407DF: mov      byte ptr [esp + 0x5c], 0
  0x004407E4: mov      word ptr [esp + 0x62], dx
  0x004407E9: call     0x44bac0
  0x004406E2: mov      eax, dword ptr [esp + 0x28]
  0x004406E6: mov      dword ptr [esp + 0x2c], edx
  0x004406EA: mov      dword ptr [esp + 0x20], eax
  0x004406EE: inc      eax
  0x004406EF: mov      dword ptr [esp + 0x28], eax
  0x004406F3: mov      dword ptr [esp + 0x30], 0
  0x004406FB: xor      esi, esi
  0x004406FD: mov      eax, dword ptr [esp + 0x28]
  0x00440701: push     ebx
  0x00440702: mov      edi, eax
  0x00440704: inc      eax
  0x00440705: mov      dword ptr [esp + 0x2c], eax
  0x00440709: mov      eax, dword ptr [esp + 0x14]
  0x0044070D: push     0
  0x0044070F: push     ebx
  0x00440710: push     eax
  0x00440711: push     0x80
  0x00440716: push     1
  0x00440718: push     esi
  0x00440719: push     ebp
  0x0044071A: call     0x440bd0
  0x00440529: xor      esi, esi
  0x0044052B: mov      ecx, dword ptr [esp + 0x30]
  0x0044052F: push     1
  0x00440531: push     0x80
  0x00440536: push     esi
  0x00440537: mov      eax, edi
  0x00440539: push     ebx
  0x0044053A: push     ecx
  0x0044053B: push     eax
  0x0044053C: push     ebp
  0x0044053D: inc      edi
  0x0044053E: call     0x440d60
  0x00440560: mov      edx, dword ptr [esp + 0x30]
  0x00440564: lea      eax, [edx + edx]
  0x00440567: or       al, 0x7f
  0x00440569: cmp      eax, 0x100
  0x0044056E: mov      dword ptr [esp + 0x30], eax
  0x00440572: jb       0x440527
  0x00440AF2: cmp      eax, 0xfe
  0x00440AF7: je       0x440b3d
  0x00440B2B: mov      edx, dword ptr [esp + 0x58]
  0x00440B2F: push     0x2fb1c90
  0x00440B34: push     edx
  0x00440B35: call     0x4463d0
  0x00440B05: mov      eax, dword ptr [esp + 0x18]
  0x00440B09: pop      edi
  0x00440B0A: mov      dword ptr [ebp + 0x28], eax
  0x00440B0D: pop      esi
  0x00440B0E: pop      ebp
  0x00440B0F: mov      eax, 1
  0x00440B14: pop      ebx
  0x00440B15: add      esp, 0x44
  0x00440B18: ret      
  0x00440AD6: mov      eax, dword ptr [esp + 0x18]
  0x00440ADA: pop      edi
  0x00440ADB: mov      dword ptr [ebp + 0x28], eax
  0x00440ADE: pop      esi
  0x00440ADF: pop      ebp
  0x00440AE0: mov      eax, 1
  0x00440AE5: pop      ebx
  0x00440AE6: add      esp, 0x44
  0x00440AE9: ret      
  0x00440AB8: mov      eax, dword ptr [esp + 0x18]
  0x00440ABC: pop      edi
  0x00440ABD: mov      dword ptr [ebp + 0x28], eax
  0x00440AC0: pop      esi
  0x00440AC1: pop      ebp
  0x00440AC2: mov      eax, 1
  0x00440AC7: pop      ebx
  0x00440AC8: add      esp, 0x44
  0x00440ACB: ret      
  0x00440B3A: add      esp, 8
  0x00440B3D: mov      eax, dword ptr [esp + 0x18]
  0x00440B41: pop      edi
  0x00440B42: mov      dword ptr [ebp + 0x28], eax
  0x00440B45: pop      esi
  0x00440B46: pop      ebp
  0x00440B47: mov      eax, 1
  0x00440B4C: pop      ebx
  0x00440B4D: add      esp, 0x44
  0x00440B50: ret      
  0x004408A5: mov      eax, dword ptr [esp + 0x38]
  0x004408A9: test     eax, eax
  0x004408AB: je       0x440975
  0x004408CE: mov      ecx, dword ptr [esp + 0x10]
  0x004408D2: mov      edx, dword ptr [esp + 0x14]
  0x004408D6: mov      eax, dword ptr [esp + 0x28]
  0x004408DA: push     ebx
  0x004408DB: push     0
  0x004408DD: push     ecx
  0x004408DE: push     esi
  0x004408DF: push     edx
  0x004408E0: push     eax
  0x004408E1: jmp      0x4409a8
  0x004408E6: cmp      ebx, 2
  0x004408E9: jne      0x4408f9
  0x0043FF00: push     0
  0x0043FF02: push     0
  0x0043FF04: mov      byte ptr [esp + 0x50], 0
  0x0043FF09: mov      word ptr [esp + 0x56], bx
  0x0043FF0E: mov      word ptr [esp + 0x54], bx
  0x0043FF13: mov      word ptr [esp + 0x52], bx
  0x0043FF18: mov      word ptr [esp + 0x58], bx
  0x0043FF1D: push     1
  0x0043FF1F: lea      ecx, [esp + 0x54]
  0x0043FF23: jmp      0x440282
  0x004400D6: mov      ecx, dword ptr [esp + 0x30]
  0x004400DA: xor      eax, eax
  0x004400DC: mov      edx, dword ptr [esp + 0x38]
  0x004400E0: mov      esi, dword ptr [esp + 0x3c]
  0x004400E4: mov      ax, word ptr [ecx]
  0x004400E7: mov      ecx, dword ptr [esp + 0x28]
  0x004400EB: imul     eax, dword ptr [esp + 0x2c]
  0x004400F0: mov      dword ptr [esp + 0x44], ecx
  0x004400F4: inc      ecx
  0x004400F5: mov      dword ptr [esp + 0x28], ecx
  0x004400F9: lea      ecx, [eax + edx]
  0x004400FC: mov      edx, dword ptr [esp + 0x34]
  0x00440100: add      esi, eax
  0x00440102: add      edx, eax
  0x00440104: mov      eax, esi
  0x00440106: mov      edi, ecx
  0x00440108: and      ecx, 0x7fff
  0x0044010E: shr      eax, 0xf
  0x00440111: shr      edi, 0xf
  0x00440114: mov      dword ptr [esp + 0x40], eax
  0x00440118: xor      eax, eax
  0x0044011A: mov      al, byte ptr [edi + 0x2f97858]
  0x00440120: mov      ebx, edx
  0x00440122: imul     eax, ecx
  0x00440125: mov      cx, word ptr [edi*2 + 0x2f97458]
  0x0044012D: push     1
  0x0044012F: shr      eax, 0xc
  0x00440132: add      eax, ecx
  0x00440134: push     0xff
  0x00440139: shr      eax, 8
  0x0044013C: and      eax, 0xff
  0x00440141: and      edx, 0x7fff
  0x00440147: shr      ebx, 0xf
  0x0044014A: push     eax
  0x0044014B: xor      eax, eax
  0x0044014D: mov      al, byte ptr [ebx + 0x2f97858]
  0x00440153: mov      cx, word ptr [ebx*2 + 0x2f97458]
  0x0044015B: imul     eax, edx
  0x0044015E: shr      eax, 0xc
  0x00440161: add      eax, ecx
  0x00440163: xor      edx, edx
  0x00440165: shr      eax, 8
  0x00440168: and      eax, 0xff
  0x0044016D: and      esi, 0x7fff
  0x00440173: push     eax
  0x00440174: mov      eax, dword ptr [esp + 0x50]
  0x00440178: mov      ecx, dword ptr [esp + 0x54]
  0x0044017C: mov      dl, byte ptr [eax + 0x2f97858]
  0x00440182: mov      ax, word ptr [eax*2 + 0x2f97458]
  0x0044018A: imul     edx, esi
  0x0044018D: shr      edx, 0xc
  0x00440190: add      edx, eax
  0x00440192: shr      edx, 8
  0x00440195: and      edx, 0xff
  0x0044019B: push     edx
  0x0044019C: push     ecx
  0x0044019D: push     ebp
  0x0044019E: call     0x440d60
  0x004401BC: mov      ecx, dword ptr [esp + 0x2c]
  0x004401C0: add      ecx, 0x33
  0x004401C3: cmp      ecx, 0xff
  0x004401C9: mov      dword ptr [esp + 0x2c], ecx
  0x004401CD: jb       0x4400a8
  0x00440373: mov      eax, dword ptr [esp + 0x58]
  0x00440377: cmp      byte ptr [eax + 0x157], 6
  0x0044037E: je       0x44038e
  0x0044039F: cmp      ebx, 1
  0x004403A2: jne      0x4403b2
  0x0044043B: cmp      ebx, 2
  0x0044043E: jne      0x4403f1
  0x0044042E: mov      dword ptr [esp + 0x18], 0
  0x00440436: jmp      0x4409fc
  0x004407EE: mov      edi, dword ptr [esp + 0x3c]
  0x004407F2: add      esp, 0x14
  0x004407F5: mov      dword ptr [esp + 0x18], 3
  0x004407FD: jmp      0x440a28
  0x0044071F: mov      ecx, dword ptr [esp + 0x38]
  0x00440723: mov      edx, dword ptr [esp + 0x50]
  0x00440727: add      esp, 0x18
  0x0044072A: push     eax
  0x0044072B: push     ebx
  0x0044072C: push     ecx
  0x0044072D: push     0x80
  0x00440732: push     1
  0x00440734: push     edx
  0x00440735: push     ebp
  0x00440736: call     0x440bd0
  0x00440527: xor      ebx, ebx
  0x00440529: xor      esi, esi
  0x0044052B: mov      ecx, dword ptr [esp + 0x30]
  0x0044052F: push     1
  0x00440531: push     0x80
  0x00440536: push     esi
  0x00440537: mov      eax, edi
  0x00440539: push     ebx
  0x0044053A: push     ecx
  0x0044053B: push     eax
  0x0044053C: push     ebp
  0x0044053D: inc      edi
  0x0044053E: call     0x440d60
  0x00440574: mov      dword ptr [esp + 0x18], 4
  0x0044057C: jmp      0x440a04
  0x00440B3D: mov      eax, dword ptr [esp + 0x18]
  0x00440B41: pop      edi
  0x00440B42: mov      dword ptr [ebp + 0x28], eax
  0x00440B45: pop      esi
  0x00440B46: pop      ebp
  0x00440B47: mov      eax, 1
  0x00440B4C: pop      ebx
  0x00440B4D: add      esp, 0x44
  0x00440B50: ret      
  0x00440AF9: jmp      0x440b2b
  0x004409A8: push     ebp
  0x004409A9: call     0x440d60
  0x004408EB: and      eax, 0xff
  0x004408F0: mov      ecx, eax
  0x004408F2: shl      ecx, 8
  0x004408F5: add      ecx, eax
  0x004408F7: jmp      0x440900
  0x004408F9: and      eax, 0xff
  0x004408FE: mov      ecx, eax
  0x00440900: push     ebx
  0x00440901: push     ecx
  0x00440902: mov      ecx, dword ptr [esp + 0x18]
  0x00440906: push     ebx
  0x00440907: push     ecx
  0x00440908: push     eax
  0x00440909: mov      eax, dword ptr [esp + 0x40]
  0x0044090D: xor      edx, edx
  0x0044090F: push     3
  0x00440911: mov      dl, byte ptr [eax + 1]
  0x00440914: push     edx
  0x00440915: push     ebp
  0x00440916: call     0x440bd0
  0x004400A8: mov      eax, 0xff
  0x004400AD: mov      dword ptr [esp + 0x30], 0x2f97258
  0x004400B5: sub      eax, ecx
  0x004400B7: mov      ecx, eax
  0x004400B9: imul     ecx, dword ptr [esp + 0x14]
  0x004400BE: mov      dword ptr [esp + 0x3c], ecx
  0x004400C2: mov      ecx, eax
  0x004400C4: imul     ecx, dword ptr [esp + 0x18]
  0x004400C9: imul     eax, dword ptr [esp + 0x10]
  0x004400CE: mov      dword ptr [esp + 0x34], ecx
  0x004400D2: mov      dword ptr [esp + 0x38], eax
  0x004400D6: mov      ecx, dword ptr [esp + 0x30]
  0x004400DA: xor      eax, eax
  0x004400DC: mov      edx, dword ptr [esp + 0x38]
  0x004400E0: mov      esi, dword ptr [esp + 0x3c]
  0x004400E4: mov      ax, word ptr [ecx]
  0x004400E7: mov      ecx, dword ptr [esp + 0x28]
  0x004400EB: imul     eax, dword ptr [esp + 0x2c]
  0x004400F0: mov      dword ptr [esp + 0x44], ecx
  0x004400F4: inc      ecx
  0x004400F5: mov      dword ptr [esp + 0x28], ecx
  0x004400F9: lea      ecx, [eax + edx]
  0x004400FC: mov      edx, dword ptr [esp + 0x34]
  0x00440100: add      esi, eax
  0x00440102: add      edx, eax
  0x00440104: mov      eax, esi
  0x00440106: mov      edi, ecx
  0x00440108: and      ecx, 0x7fff
  0x0044010E: shr      eax, 0xf
  0x00440111: shr      edi, 0xf
  0x00440114: mov      dword ptr [esp + 0x40], eax
  0x00440118: xor      eax, eax
  0x0044011A: mov      al, byte ptr [edi + 0x2f97858]
  0x00440120: mov      ebx, edx
  0x00440122: imul     eax, ecx
  0x00440125: mov      cx, word ptr [edi*2 + 0x2f97458]
  0x0044012D: push     1
  0x0044012F: shr      eax, 0xc
  0x00440132: add      eax, ecx
  0x00440134: push     0xff
  0x00440139: shr      eax, 8
  0x0044013C: and      eax, 0xff
  0x00440141: and      edx, 0x7fff
  0x00440147: shr      ebx, 0xf
  0x0044014A: push     eax
  0x0044014B: xor      eax, eax
  0x0044014D: mov      al, byte ptr [ebx + 0x2f97858]
  0x00440153: mov      cx, word ptr [ebx*2 + 0x2f97458]
  0x0044015B: imul     eax, edx
  0x0044015E: shr      eax, 0xc
  0x00440161: add      eax, ecx
  0x00440163: xor      edx, edx
  0x00440165: shr      eax, 8
  0x00440168: and      eax, 0xff
  0x0044016D: and      esi, 0x7fff
  0x00440173: push     eax
  0x00440174: mov      eax, dword ptr [esp + 0x50]
  0x00440178: mov      ecx, dword ptr [esp + 0x54]
  0x0044017C: mov      dl, byte ptr [eax + 0x2f97858]
  0x00440182: mov      ax, word ptr [eax*2 + 0x2f97458]
  0x0044018A: imul     edx, esi
  0x0044018D: shr      edx, 0xc
  0x00440190: add      edx, eax
  0x00440192: shr      edx, 8
  0x00440195: and      edx, 0xff
  0x0044019B: push     edx
  0x0044019C: push     ecx
  0x0044019D: push     ebp
  0x0044019E: call     0x440d60
  0x004401D3: mov      edi, dword ptr [esp + 0x28]
  0x004401D7: mov      dword ptr [esp + 0x18], 1
  0x004401DF: jmp      0x440a28
  0x004403A4: xor      eax, eax
  0x004403A6: mov      ax, word ptr [esi*2 + 0x2f97258]
  0x004403AE: mov      dword ptr [esp + 0x2c], eax
  0x004403B2: mov      eax, dword ptr [esp + 0x58]
  0x004403B6: mov      edx, dword ptr [esp + 0x2c]
  0x004403BA: mov      ecx, dword ptr [eax + 0x2dc]
  0x004403C0: push     ecx
  0x004403C1: push     edx
  0x004403C2: call     0x43e660
  0x004403B2: mov      eax, dword ptr [esp + 0x58]
  0x004403B6: mov      edx, dword ptr [esp + 0x2c]
  0x004403BA: mov      ecx, dword ptr [eax + 0x2dc]
  0x004403C0: push     ecx
  0x004403C1: push     edx
  0x004403C2: call     0x43e660
  0x00440440: mov      eax, esi
  0x00440442: xor      ebx, ebx
  0x00440444: shl      eax, 8
  0x00440447: sub      eax, esi
  0x00440449: push     2
  0x0044044B: mov      ecx, eax
  0x0044044D: and      eax, 0x7fff
  0x00440452: shr      ecx, 0xf
  0x00440455: push     0
  0x00440457: push     esi
  0x00440458: mov      bl, byte ptr [ecx + 0x2f97858]
  0x0044045E: mov      dx, word ptr [ecx*2 + 0x2f97458]
  0x00440466: imul     ebx, eax
  0x00440469: shr      ebx, 0xc
  0x0044046C: add      ebx, edx
  0x0044046E: push     esi
  0x0044046F: shr      ebx, 8
  0x00440472: and      ebx, 0xff
  0x00440478: push     esi
  0x00440479: push     ebx
  0x0044047A: push     ebp
  0x0044047B: call     0x440d60
  0x004403F1: mov      ebx, dword ptr [esp + 0x2c]
  0x004403F5: mov      ecx, dword ptr [esp + 0x58]
  0x004403F9: push     0
  0x004403FB: push     0
  0x004403FD: lea      eax, [esp + 0x50]
  0x00440401: push     1
  0x00440403: push     eax
  0x00440404: push     ecx
  0x00440405: mov      byte ptr [esp + 0x5c], 0
  0x0044040A: mov      word ptr [esp + 0x62], bx
  0x0044040F: mov      word ptr [esp + 0x60], bx
  0x00440414: mov      word ptr [esp + 0x5e], bx
  0x00440419: mov      word ptr [esp + 0x64], bx
  0x0044041E: mov      dword ptr [esp + 0x4c], 1
  0x00440426: call     0x44bac0
  0x004409FC: mov      eax, dword ptr [esp + 0x38]
  0x00440A00: test     eax, eax
  0x00440A02: je       0x440a28
  0x0044073B: mov      ecx, dword ptr [esp + 0x50]
  0x0044073F: add      esp, 0x18
  0x00440742: push     eax
  0x00440743: mov      eax, dword ptr [esp + 0x24]
  0x00440747: push     ebx
  0x00440748: push     eax
  0x00440749: push     0x80
  0x0044074E: push     1
  0x00440750: push     ecx
  0x00440751: push     ebp
  0x00440752: call     0x440bd0
  0x00440900: push     ebx
  0x00440901: push     ecx
  0x00440902: mov      ecx, dword ptr [esp + 0x18]
  0x00440906: push     ebx
  0x00440907: push     ecx
  0x00440908: push     eax
  0x00440909: mov      eax, dword ptr [esp + 0x40]
  0x0044090D: xor      edx, edx
  0x0044090F: push     3
  0x00440911: mov      dl, byte ptr [eax + 1]
  0x00440914: push     edx
  0x00440915: push     ebp
  0x00440916: call     0x440bd0
  0x0044091B: mov      edx, dword ptr [esp + 0x48]
  0x0044091F: add      esp, 0x18
  0x00440922: xor      ecx, ecx
  0x00440924: push     eax
  0x00440925: mov      eax, dword ptr [esp + 0x3c]
  0x00440929: push     ebx
  0x0044092A: push     esi
  0x0044092B: mov      cl, byte ptr [edx + eax]
  0x0044092E: mov      edx, dword ptr [esp + 0x40]
  0x00440932: push     ecx
  0x00440933: xor      ecx, ecx
  0x00440935: mov      cl, byte ptr [edx]
  0x00440937: push     3
  0x00440939: push     ecx
  0x0044093A: push     ebp
  0x0044093B: call     0x440bd0
  0x004403C7: and      eax, 0xffff
  0x004403CC: push     ebx
  0x004403CD: add      eax, 0x81
  0x004403D2: push     0
  0x004403D4: mov      ecx, eax
  0x004403D6: push     esi
  0x004403D7: shl      ecx, 8
  0x004403DA: sub      ecx, eax
  0x004403DC: push     esi
  0x004403DD: mov      eax, ecx
  0x004403DF: push     esi
  0x004403E0: shr      eax, 0x10
  0x004403E3: push     eax
  0x004403E4: push     ebp
  0x004403E5: mov      dword ptr [esp + 0x50], eax
  0x004403E9: call     0x440d60
  0x00440480: add      esp, 0x1c
  0x00440483: jmp      0x4403f5
  0x0044042B: add      esp, 0x14
  0x0044042E: mov      dword ptr [esp + 0x18], 0
  0x00440436: jmp      0x4409fc
  0x00440757: add      esp, 0x18
  0x0044075A: push     eax
  0x0044075B: push     edi
  0x0044075C: push     ebp
  0x0044075D: call     0x440d60
  0x00440940: mov      edx, dword ptr [esp + 0x4c]
  0x00440944: add      esp, 0x18
  0x00440947: xor      ecx, ecx
  0x00440949: push     eax
  0x0044094A: mov      eax, dword ptr [esp + 0x24]
  0x0044094E: push     ebx
  0x0044094F: push     eax
  0x00440950: mov      eax, dword ptr [esp + 0x48]
  0x00440954: mov      cl, byte ptr [edx + eax]
  0x00440957: mov      edx, dword ptr [esp + 0x44]
  0x0044095B: push     ecx
  0x0044095C: xor      ecx, ecx
  0x0044095E: mov      cl, byte ptr [edx - 1]
  0x00440961: push     3
  0x00440963: push     ecx
  0x00440964: push     ebp
  0x00440965: call     0x440bd0
  0x004403EE: add      esp, 0x24
  0x004403F1: mov      ebx, dword ptr [esp + 0x2c]
  0x004403F5: mov      ecx, dword ptr [esp + 0x58]
  0x004403F9: push     0
  0x004403FB: push     0
  0x004403FD: lea      eax, [esp + 0x50]
  0x00440401: push     1
  0x00440403: push     eax
  0x00440404: push     ecx
  0x00440405: mov      byte ptr [esp + 0x5c], 0
  0x0044040A: mov      word ptr [esp + 0x62], bx
  0x0044040F: mov      word ptr [esp + 0x60], bx
  0x00440414: mov      word ptr [esp + 0x5e], bx
  0x00440419: mov      word ptr [esp + 0x64], bx
  0x0044041E: mov      dword ptr [esp + 0x4c], 1
  0x00440426: call     0x44bac0
  0x004403F5: mov      ecx, dword ptr [esp + 0x58]
  0x004403F9: push     0
  0x004403FB: push     0
  0x004403FD: lea      eax, [esp + 0x50]
  0x00440401: push     1
  0x00440403: push     eax
  0x00440404: push     ecx
  0x00440405: mov      byte ptr [esp + 0x5c], 0
  0x0044040A: mov      word ptr [esp + 0x62], bx
  0x0044040F: mov      word ptr [esp + 0x60], bx
  0x00440414: mov      word ptr [esp + 0x5e], bx
  0x00440419: mov      word ptr [esp + 0x64], bx
  0x0044041E: mov      dword ptr [esp + 0x4c], 1
  0x00440426: call     0x44bac0
  0x00440762: add      esi, esi
  0x00440764: add      esp, 0x1c
  0x00440767: or       esi, 0x7f
  0x0044076A: cmp      esi, 0x100
  0x00440770: jb       0x4406fd
  0x0044096A: add      esp, 0x18
  0x0044096D: push     eax
  0x0044096E: mov      eax, dword ptr [esp + 0x3c]
  0x00440972: push     eax
  0x00440973: jmp      0x4409a8
  0x004406FD: mov      eax, dword ptr [esp + 0x28]
  0x00440701: push     ebx
  0x00440702: mov      edi, eax
  0x00440704: inc      eax
  0x00440705: mov      dword ptr [esp + 0x2c], eax
  0x00440709: mov      eax, dword ptr [esp + 0x14]
  0x0044070D: push     0
  0x0044070F: push     ebx
  0x00440710: push     eax
  0x00440711: push     0x80
  0x00440716: push     1
  0x00440718: push     esi
  0x00440719: push     ebp
  0x0044071A: call     0x440bd0
  0x00440772: mov      edx, dword ptr [esp + 0x30]
  0x00440776: lea      eax, [edx + edx]
  0x00440779: or       al, 0x7f
  0x0044077B: cmp      eax, 0x100
  0x00440780: mov      dword ptr [esp + 0x30], eax
  0x00440784: jb       0x4406fb
  0x004406FB: xor      esi, esi
  0x004406FD: mov      eax, dword ptr [esp + 0x28]
  0x00440701: push     ebx
  0x00440702: mov      edi, eax
  0x00440704: inc      eax
  0x00440705: mov      dword ptr [esp + 0x2c], eax
  0x00440709: mov      eax, dword ptr [esp + 0x14]
  0x0044070D: push     0
  0x0044070F: push     ebx
  0x00440710: push     eax
  0x00440711: push     0x80
  0x00440716: push     1
  0x00440718: push     esi
  0x00440719: push     ebp
  0x0044071A: call     0x440bd0
  0x0044078A: mov      eax, dword ptr [esp + 0x2c]
  0x0044078E: add      eax, eax
  0x00440790: or       al, 0x7f
  0x00440792: cmp      eax, 0x100
  0x00440797: mov      dword ptr [esp + 0x2c], eax
  0x0044079B: jb       0x4406f3
  0x004406F3: mov      dword ptr [esp + 0x30], 0
  0x004406FB: xor      esi, esi
  0x004406FD: mov      eax, dword ptr [esp + 0x28]
  0x00440701: push     ebx
  0x00440702: mov      edi, eax
  0x00440704: inc      eax
  0x00440705: mov      dword ptr [esp + 0x2c], eax
  0x00440709: mov      eax, dword ptr [esp + 0x14]
  0x0044070D: push     0
  0x0044070F: push     ebx
  0x00440710: push     eax
  0x00440711: push     0x80
  0x00440716: push     1
  0x00440718: push     esi
  0x00440719: push     ebp
  0x0044071A: call     0x440bd0
  0x004407A1: mov      edi, dword ptr [esp + 0x28]
  0x004407A5: mov      dword ptr [esp + 0x18], 4
  0x004407AD: jmp      0x440a04

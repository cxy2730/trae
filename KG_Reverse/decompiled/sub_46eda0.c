/**
 * Function: sub_46eda0
 * Address: 0x0046EDA0
 * Blocks: 203
 * Instructions: 2352
 * Analyzed with angr + capstone
 */
void* sub_46eda0(void) {

  /* Block 1 @ 0x0046EDA0 */
  // sub esp, 8
  // push ebx
  // push ebp
  // push esi
  // push edi
  // mov edi, 0x3001074
  // xor ebx, ebx
  // mov dword ptr [esp + 0x14], 0
  // mov eax, dword ptr [0x30039dc]
  // xor esi, esi
  // CMP eax, 0x25 (set flags)
  // if (above) goto 0x4706fb
  /* Block 2 @ 0x0046EDC6 */
  goto dword ptr [eax*4 + 0x470720];
  /* Block 3 @ 0x004706FB */
  // mov eax, dword ptr [esp + 0x14]
  // inc eax
  // CMP eax, 4 (set flags)
  // mov dword ptr [esp + 0x14], eax
  // if (less) goto 0x46edb6
  /* Block 4 @ 0x00470201 */
  // push 9
  // call 0x0046E720
  call(0x0046E720);
  /* Block 5 @ 0x0046F103 */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 0xc (set flags)
  // if (greater or equal) goto 0x46f146
  /* Block 6 @ 0x00470503 */
  // push 0xe
  // call 0x0046E720
  call(0x0046E720);
  /* Block 7 @ 0x0046FC14 */
  // mov eax, ebx
  // push 0x10
  // shl eax, 6
  // add eax, esi
  // lea ebp, [eax*4 + 0x2fff574]
  // call 0x0046E720
  call(0x0046E720);
  /* Block 8 @ 0x0046EE97 */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 7 (set flags)
  // if (greater or equal) goto 0x46eeda
  /* Block 9 @ 0x0047029B */
  // push 0xa
  // call 0x0046E720
  call(0x0046E720);
  /* Block 10 @ 0x0046FF1D */
  // push 4
  // call 0x0046E720
  call(0x0046E720);
  /* Block 11 @ 0x0046FC9E */
  // push 5
  // call 0x0046E720
  call(0x0046E720);
  /* Block 12 @ 0x0047059D */
  // push 0xf
  // call 0x0046E720
  call(0x0046E720);
  /* Block 13 @ 0x0046F726 */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 0x14 (set flags)
  // if (greater or equal) goto 0x46f769
  /* Block 14 @ 0x0046FFB1 */
  // push 5
  // call 0x0046E720
  call(0x0046E720);
  /* Block 15 @ 0x0046FBB4 */
  // mov edx, ebx
  // push 0xf
  // shl edx, 6
  // add edx, esi
  // lea ebp, [edx*4 + 0x2fff574]
  // call 0x0046E720
  call(0x0046E720);
  /* Block 16 @ 0x00470335 */
  // push 0xb
  // call 0x0046E720
  call(0x0046E720);
  /* Block 17 @ 0x00470637 */
  // push 0x10
  // call 0x0046E720
  call(0x0046E720);
  /* Block 18 @ 0x0046F9B8 */
  // mov ecx, dword ptr [0x3003784]
  // mov edx, dword ptr [0x3003474]
  // CMP ecx, 0x18 (set flags)
  // if (greater or equal) goto 0x46f9f4
  /* Block 19 @ 0x0046FD3D */
  // push 7
  // call 0x0046E720
  call(0x0046E720);
  /* Block 20 @ 0x00470045 */
  // push 6
  // call 0x0046E720
  call(0x0046E720);
  /* Block 21 @ 0x0046F047 */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 0xa (set flags)
  // if (greater or equal) goto 0x46f08a
  /* Block 22 @ 0x0046EF4C */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 9 (set flags)
  // if (greater or equal) goto 0x46ef8f
  /* Block 23 @ 0x0046EDCD */
  // xor eax, eax
  // mov dword ptr [edi + esi*4], eax
  // mov dword ptr [edi + esi*4 + 0x100], eax
  // mov dword ptr [edi + esi*4 + 0x200], eax
  goto 0x4706d4;
  /* Block 24 @ 0x004703CF */
  // push 0xc
  // call 0x0046E720
  call(0x0046E720);
  /* Block 25 @ 0x0046FB54 */
  // mov ecx, ebx
  // push 0xe
  // shl ecx, 6
  // add ecx, esi
  // lea ebp, [ecx*4 + 0x2fff574]
  // call 0x0046E720
  call(0x0046E720);
  /* Block 26 @ 0x004700D9 */
  // push 7
  // call 0x0046E720
  call(0x0046E720);
  /* Block 27 @ 0x0046F5DD */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 0x12 (set flags)
  // if (greater or equal) goto 0x46f620
  /* Block 28 @ 0x0046FDE2 */
  // push 3
  // call 0x0046E720
  call(0x0046E720);
  /* Block 29 @ 0x0046EDE5 */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 5 (set flags)
  // if (greater or equal) goto 0x46ee28
  /* Block 30 @ 0x004706E7 */
  // mov eax, dword ptr [0x3003994]
  // push eax
  // call 0x004707C0
  call(0x004707C0);
  /* Block 31 @ 0x00470469 */
  // push 0xd
  // call 0x0046E720
  call(0x0046E720);
  /* Block 32 @ 0x0047016D */
  // push 8
  // call 0x0046E720
  call(0x0046E720);
  /* Block 33 @ 0x0046F4EF */
  // mov ecx, dword ptr [0x3003784]
  // mov edx, dword ptr [0x3003474]
  // CMP ecx, 0x18 (set flags)
  // if (greater or equal) goto 0x46f52b
  /* Block 34 @ 0x0046F86F */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 0x16 (set flags)
  // if (greater or equal) goto 0x46f8b2
  /* Block 35 @ 0x0046F3F4 */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 0x15 (set flags)
  // if (greater or equal) goto 0x46f437
  /* Block 36 @ 0x0046FAF4 */
  // mov eax, ebx
  // push 0xd
  // shl eax, 6
  // add eax, esi
  // lea ebp, [eax*4 + 0x2fff574]
  // call 0x0046E720
  call(0x0046E720);
  /* Block 37 @ 0x0046FC74 */
  // xor eax, eax
  // mov dword ptr [edi + esi*4], eax
  // mov dword ptr [edi + esi*4 + 4], eax
  // mov dword ptr [edi + esi*4 + 0x100], eax
  // mov dword ptr [edi + esi*4 + 0x104], eax
  // mov dword ptr [edi + esi*4 + 0x200], eax
  // mov dword ptr [edi + esi*4 + 0x204], eax
  goto 0x4706d3;
  /* Block 38 @ 0x0046FE76 */
  // push 0xa
  // call 0x0046E720
  call(0x0046E720);
  /* Block 39 @ 0x004706F5 */
  // add edi, 0x300
  // mov eax, dword ptr [esp + 0x14]
  // inc eax
  // CMP eax, 4 (set flags)
  // mov dword ptr [esp + 0x14], eax
  // if (less) goto 0x46edb6
  /* Block 40 @ 0x0046F2F9 */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 0x12 (set flags)
  // if (greater or equal) goto 0x46f33c
  /* Block 41 @ 0x0046F1FE */
  // mov ecx, dword ptr [0x3003784]
  // CMP ecx, 0xf (set flags)
  // if (greater or equal) goto 0x46f241
  // mov eax, dword ptr [0x30039dc]
  // xor esi, esi
  // CMP eax, 0x25 (set flags)
  // if (above) goto 0x4706fb
  /* Block 42 @ 0x0047070D */
  // inc ebx
  // CMP ebx, 3 (set flags)
  // if (less) goto 0x46edae
  /* Block 43 @ 0x00470208 */
  // mov ebp, ebx
  // sub eax, 0xff
  // shl ebp, 6
  // add ebp, esi
  // push 9
  // shl ebp, 2
  // mov ecx, dword ptr [ebp + 0x2fff574]
  // imul ecx, eax
  // sar ecx, 8
  // mov dword ptr [edi + esi*4], ecx
  // mov edx, dword ptr [ebp + 0x2fff578]
  // imul edx, eax
  // sar edx, 8
  // mov dword ptr [edi + esi*4 + 4], edx
  // call 0x0046E720
  call(0x0046E720);
  /* Block 44 @ 0x0046F10E */
  // CMP ecx, 0x18 (set flags)
  // if (greater) goto 0x46f146
  /* Block 45 @ 0x0046F146 */
  // mov edx, dword ptr [0x3003474]
  // sub ecx, 4
  // mov eax, edx
  // shr eax, cl
  // mov dword ptr [0x3003784], ecx
  // mov ebp, eax
  // add eax, -7
  // shl ebp, cl
  // mov ecx, ebx
  // shl ecx, 6
  // add ecx, esi
  // sub edx, ebp
  // imul eax, dword ptr [ecx*4 + 0x2fff574]
  // mov dword ptr [0x3003474], edx
  // lea edx, [ecx*4 + 0x2fff574]
  // sar eax, 3
  // mov dword ptr [edi + esi*4], eax
  // mov ecx, dword ptr [0x3003784]
  // mov eax, dword ptr [0x3003474]
  // sub ecx, 4
  // shr eax, cl
  // mov dword ptr [0x3003784], ecx
  // mov ebp, eax
  // add eax, -7
  // imul eax, dword ptr [edx]
  // shl ebp, cl
  // mov ecx, dword ptr [0x3003474]
  // sar eax, 3
  // sub ecx, ebp
  // mov dword ptr [0x3003474], ecx
  // mov dword ptr [edi + esi*4 + 0x100], eax
  // mov ecx, dword ptr [0x3003784]
  // mov eax, dword ptr [0x3003474]
  // sub ecx, 4
  // shr eax, cl
  // mov dword ptr [0x3003784], ecx
  // mov dword ptr [0x3003908], eax
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0046EDA0: sub      esp, 8
  0x0046EDA3: push     ebx
  0x0046EDA4: push     ebp
  0x0046EDA5: push     esi
  0x0046EDA6: push     edi
  0x0046EDA7: mov      edi, 0x3001074
  0x0046EDAC: xor      ebx, ebx
  0x0046EDAE: mov      dword ptr [esp + 0x14], 0
  0x0046EDB6: mov      eax, dword ptr [0x30039dc]
  0x0046EDBB: xor      esi, esi
  0x0046EDBD: cmp      eax, 0x25
  0x0046EDC0: ja       0x4706fb
  0x0046EDC6: jmp      dword ptr [eax*4 + 0x470720]
  0x004706FB: mov      eax, dword ptr [esp + 0x14]
  0x004706FF: inc      eax
  0x00470700: cmp      eax, 4
  0x00470703: mov      dword ptr [esp + 0x14], eax
  0x00470707: jl       0x46edb6
  0x00470201: push     9
  0x00470203: call     0x46e720
  0x0046F103: mov      ecx, dword ptr [0x3003784]
  0x0046F109: cmp      ecx, 0xc
  0x0046F10C: jge      0x46f146
  0x00470503: push     0xe
  0x00470505: call     0x46e720
  0x0046FC14: mov      eax, ebx
  0x0046FC16: push     0x10
  0x0046FC18: shl      eax, 6
  0x0046FC1B: add      eax, esi
  0x0046FC1D: lea      ebp, [eax*4 + 0x2fff574]
  0x0046FC24: call     0x46e720
  0x0046EE97: mov      ecx, dword ptr [0x3003784]
  0x0046EE9D: cmp      ecx, 7
  0x0046EEA0: jge      0x46eeda
  0x0047029B: push     0xa
  0x0047029D: call     0x46e720
  0x0046FF1D: push     4
  0x0046FF1F: call     0x46e720
  0x0046FC9E: push     5
  0x0046FCA0: call     0x46e720
  0x0047059D: push     0xf
  0x0047059F: call     0x46e720
  0x0046F726: mov      ecx, dword ptr [0x3003784]
  0x0046F72C: cmp      ecx, 0x14
  0x0046F72F: jge      0x46f769
  0x0046FFB1: push     5
  0x0046FFB3: call     0x46e720
  0x0046FBB4: mov      edx, ebx
  0x0046FBB6: push     0xf
  0x0046FBB8: shl      edx, 6
  0x0046FBBB: add      edx, esi
  0x0046FBBD: lea      ebp, [edx*4 + 0x2fff574]
  0x0046FBC4: call     0x46e720
  0x00470335: push     0xb
  0x00470337: call     0x46e720
  0x00470637: push     0x10
  0x00470639: call     0x46e720
  0x0046F9B8: mov      ecx, dword ptr [0x3003784]
  0x0046F9BE: mov      edx, dword ptr [0x3003474]
  0x0046F9C4: cmp      ecx, 0x18
  0x0046F9C7: jge      0x46f9f4
  0x0046FD3D: push     7
  0x0046FD3F: call     0x46e720
  0x00470045: push     6
  0x00470047: call     0x46e720
  0x0046F047: mov      ecx, dword ptr [0x3003784]
  0x0046F04D: cmp      ecx, 0xa
  0x0046F050: jge      0x46f08a
  0x0046EF4C: mov      ecx, dword ptr [0x3003784]
  0x0046EF52: cmp      ecx, 9
  0x0046EF55: jge      0x46ef8f
  0x0046EDCD: xor      eax, eax
  0x0046EDCF: mov      dword ptr [edi + esi*4], eax
  0x0046EDD2: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046EDD9: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046EDE0: jmp      0x4706d4
  0x004703CF: push     0xc
  0x004703D1: call     0x46e720
  0x0046FB54: mov      ecx, ebx
  0x0046FB56: push     0xe
  0x0046FB58: shl      ecx, 6
  0x0046FB5B: add      ecx, esi
  0x0046FB5D: lea      ebp, [ecx*4 + 0x2fff574]
  0x0046FB64: call     0x46e720
  0x004700D9: push     7
  0x004700DB: call     0x46e720
  0x0046F5DD: mov      ecx, dword ptr [0x3003784]
  0x0046F5E3: cmp      ecx, 0x12
  0x0046F5E6: jge      0x46f620
  0x0046FDE2: push     3
  0x0046FDE4: call     0x46e720
  0x0046EDE5: mov      ecx, dword ptr [0x3003784]
  0x0046EDEB: cmp      ecx, 5
  0x0046EDEE: jge      0x46ee28
  0x004706E7: mov      eax, dword ptr [0x3003994]
  0x004706EC: push     eax
  0x004706ED: call     0x4707c0
  0x00470469: push     0xd
  0x0047046B: call     0x46e720
  0x0047016D: push     8
  0x0047016F: call     0x46e720
  0x0046F4EF: mov      ecx, dword ptr [0x3003784]
  0x0046F4F5: mov      edx, dword ptr [0x3003474]
  0x0046F4FB: cmp      ecx, 0x18
  0x0046F4FE: jge      0x46f52b
  0x0046F86F: mov      ecx, dword ptr [0x3003784]
  0x0046F875: cmp      ecx, 0x16
  0x0046F878: jge      0x46f8b2
  0x0046F3F4: mov      ecx, dword ptr [0x3003784]
  0x0046F3FA: cmp      ecx, 0x15
  0x0046F3FD: jge      0x46f437
  0x0046FAF4: mov      eax, ebx
  0x0046FAF6: push     0xd
  0x0046FAF8: shl      eax, 6
  0x0046FAFB: add      eax, esi
  0x0046FAFD: lea      ebp, [eax*4 + 0x2fff574]
  0x0046FB04: call     0x46e720
  0x0046FC74: xor      eax, eax
  0x0046FC76: mov      dword ptr [edi + esi*4], eax
  0x0046FC79: mov      dword ptr [edi + esi*4 + 4], eax
  0x0046FC7D: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046FC84: mov      dword ptr [edi + esi*4 + 0x104], eax
  0x0046FC8B: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046FC92: mov      dword ptr [edi + esi*4 + 0x204], eax
  0x0046FC99: jmp      0x4706d3
  0x0046FE76: push     0xa
  0x0046FE78: call     0x46e720
  0x004706F5: add      edi, 0x300
  0x004706FB: mov      eax, dword ptr [esp + 0x14]
  0x004706FF: inc      eax
  0x00470700: cmp      eax, 4
  0x00470703: mov      dword ptr [esp + 0x14], eax
  0x00470707: jl       0x46edb6
  0x0046F2F9: mov      ecx, dword ptr [0x3003784]
  0x0046F2FF: cmp      ecx, 0x12
  0x0046F302: jge      0x46f33c
  0x0046F1FE: mov      ecx, dword ptr [0x3003784]
  0x0046F204: cmp      ecx, 0xf
  0x0046F207: jge      0x46f241
  0x0046EDB6: mov      eax, dword ptr [0x30039dc]
  0x0046EDBB: xor      esi, esi
  0x0046EDBD: cmp      eax, 0x25
  0x0046EDC0: ja       0x4706fb
  0x0047070D: inc      ebx
  0x0047070E: cmp      ebx, 3
  0x00470711: jl       0x46edae
  0x00470208: mov      ebp, ebx
  0x0047020A: sub      eax, 0xff
  0x0047020F: shl      ebp, 6
  0x00470212: add      ebp, esi
  0x00470214: push     9
  0x00470216: shl      ebp, 2
  0x00470219: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0047021F: imul     ecx, eax
  0x00470222: sar      ecx, 8
  0x00470225: mov      dword ptr [edi + esi*4], ecx
  0x00470228: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047022E: imul     edx, eax
  0x00470231: sar      edx, 8
  0x00470234: mov      dword ptr [edi + esi*4 + 4], edx
  0x00470238: call     0x46e720
  0x0046F10E: cmp      ecx, 0x18
  0x0046F111: jg       0x46f146
  0x0046F146: mov      edx, dword ptr [0x3003474]
  0x0046F14C: sub      ecx, 4
  0x0046F14F: mov      eax, edx
  0x0046F151: shr      eax, cl
  0x0046F153: mov      dword ptr [0x3003784], ecx
  0x0046F159: mov      ebp, eax
  0x0046F15B: add      eax, -7
  0x0046F15E: shl      ebp, cl
  0x0046F160: mov      ecx, ebx
  0x0046F162: shl      ecx, 6
  0x0046F165: add      ecx, esi
  0x0046F167: sub      edx, ebp
  0x0046F169: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F171: mov      dword ptr [0x3003474], edx
  0x0046F177: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F17E: sar      eax, 3
  0x0046F181: mov      dword ptr [edi + esi*4], eax
  0x0046F184: mov      ecx, dword ptr [0x3003784]
  0x0046F18A: mov      eax, dword ptr [0x3003474]
  0x0046F18F: sub      ecx, 4
  0x0046F192: shr      eax, cl
  0x0046F194: mov      dword ptr [0x3003784], ecx
  0x0046F19A: mov      ebp, eax
  0x0046F19C: add      eax, -7
  0x0046F19F: imul     eax, dword ptr [edx]
  0x0046F1A2: shl      ebp, cl
  0x0046F1A4: mov      ecx, dword ptr [0x3003474]
  0x0046F1AA: sar      eax, 3
  0x0046F1AD: sub      ecx, ebp
  0x0046F1AF: mov      dword ptr [0x3003474], ecx
  0x0046F1B5: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F1BC: mov      ecx, dword ptr [0x3003784]
  0x0046F1C2: mov      eax, dword ptr [0x3003474]
  0x0046F1C7: sub      ecx, 4
  0x0046F1CA: shr      eax, cl
  0x0046F1CC: mov      dword ptr [0x3003784], ecx
  0x0046F1D2: mov      dword ptr [0x3003908], eax
  0x0046F1D7: mov      ebp, eax
  0x0046F1D9: add      eax, -7
  0x0046F1DC: imul     eax, dword ptr [edx]
  0x0046F1DF: shl      ebp, cl
  0x0046F1E1: mov      ecx, dword ptr [0x3003474]
  0x0046F1E7: sub      ecx, ebp
  0x0046F1E9: sar      eax, 3
  0x0046F1EC: mov      dword ptr [0x3003474], ecx
  0x0046F1F2: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F1F9: jmp      0x4706d4
  0x0047050A: mov      ebp, ebx
  0x0047050C: sub      eax, 0x1fff
  0x00470511: shl      ebp, 6
  0x00470514: add      ebp, esi
  0x00470516: push     0xe
  0x00470518: shl      ebp, 2
  0x0047051B: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470521: imul     ecx, eax
  0x00470524: sar      ecx, 0xd
  0x00470527: mov      dword ptr [edi + esi*4], ecx
  0x0047052A: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470530: imul     edx, eax
  0x00470533: sar      edx, 0xd
  0x00470536: mov      dword ptr [edi + esi*4 + 4], edx
  0x0047053A: call     0x46e720
  0x0046FC29: sub      eax, 0x7fff
  0x0046FC2E: push     0x10
  0x0046FC30: imul     eax, dword ptr [ebp]
  0x0046FC34: sar      eax, 0xf
  0x0046FC37: mov      dword ptr [edi + esi*4], eax
  0x0046FC3A: call     0x46e720
  0x0046EEA2: cmp      ecx, 0x18
  0x0046EEA5: jg       0x46eeda
  0x0046EEDA: mov      edx, dword ptr [0x3003474]
  0x0046EEE0: sub      ecx, 7
  0x0046EEE3: mov      eax, edx
  0x0046EEE5: shr      eax, cl
  0x0046EEE7: mov      dword ptr [0x3003784], ecx
  0x0046EEED: mov      ebp, eax
  0x0046EEEF: mov      dword ptr [0x3003908], eax
  0x0046EEF4: shl      ebp, cl
  0x0046EEF6: mov      ecx, ebx
  0x0046EEF8: lea      eax, [eax + eax*2]
  0x0046EEFB: shl      ecx, 6
  0x0046EEFE: add      ecx, esi
  0x0046EF00: sub      edx, ebp
  0x0046EF02: mov      dword ptr [0x3003474], edx
  0x0046EF08: lea      ecx, [ecx*4 + 0x2fff574]
  0x0046EF0F: movsx    edx, byte ptr [eax + 0x3003788]
  0x0046EF16: imul     edx, dword ptr [ecx]
  0x0046EF19: sar      edx, 2
  0x0046EF1C: mov      dword ptr [edi + esi*4], edx
  0x0046EF1F: movsx    edx, byte ptr [eax + 0x3003789]
  0x0046EF26: imul     edx, dword ptr [ecx]
  0x0046EF29: sar      edx, 2
  0x0046EF2C: mov      dword ptr [edi + esi*4 + 0x100], edx
  0x0046EF33: movsx    eax, byte ptr [eax + 0x300378a]
  0x0046EF3A: imul     eax, dword ptr [ecx]
  0x0046EF3D: sar      eax, 2
  0x0046EF40: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046EF47: jmp      0x4706d4
  0x004702A2: mov      ebp, ebx
  0x004702A4: sub      eax, 0x1ff
  0x004702A9: shl      ebp, 6
  0x004702AC: add      ebp, esi
  0x004702AE: push     0xa
  0x004702B0: shl      ebp, 2
  0x004702B3: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004702B9: imul     ecx, eax
  0x004702BC: sar      ecx, 9
  0x004702BF: mov      dword ptr [edi + esi*4], ecx
  0x004702C2: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004702C8: imul     edx, eax
  0x004702CB: sar      edx, 9
  0x004702CE: mov      dword ptr [edi + esi*4 + 4], edx
  0x004702D2: call     0x46e720
  0x0046FF24: mov      ebp, ebx
  0x0046FF26: sub      eax, 7
  0x0046FF29: shl      ebp, 6
  0x0046FF2C: add      ebp, esi
  0x0046FF2E: push     4
  0x0046FF30: shl      ebp, 2
  0x0046FF33: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0046FF39: imul     ecx, eax
  0x0046FF3C: sar      ecx, 3
  0x0046FF3F: mov      dword ptr [edi + esi*4], ecx
  0x0046FF42: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0046FF48: imul     edx, eax
  0x0046FF4B: sar      edx, 3
  0x0046FF4E: mov      dword ptr [edi + esi*4 + 4], edx
  0x0046FF52: call     0x46e720
  0x0046FCA5: movsx    edx, byte ptr [eax + eax*2 + 0x2fff4c0]
  0x0046FCAD: mov      ecx, ebx
  0x0046FCAF: add      esp, 4
  0x0046FCB2: shl      ecx, 6
  0x0046FCB5: add      ecx, esi
  0x0046FCB7: shl      ecx, 2
  0x0046FCBA: imul     edx, dword ptr [ecx + 0x2fff574]
  0x0046FCC1: sar      edx, 1
  0x0046FCC3: mov      dword ptr [edi + esi*4], edx
  0x0046FCC6: movsx    edx, byte ptr [eax + eax*2 + 0x2fff4c0]
  0x0046FCCE: imul     edx, dword ptr [ecx + 0x2fff578]
  0x0046FCD5: sar      edx, 1
  0x0046FCD7: mov      dword ptr [edi + esi*4 + 4], edx
  0x0046FCDB: movsx    edx, byte ptr [eax + eax*2 + 0x2fff4c1]
  0x0046FCE3: imul     edx, dword ptr [ecx + 0x2fff574]
  0x0046FCEA: sar      edx, 1
  0x0046FCEC: mov      dword ptr [edi + esi*4 + 0x100], edx
  0x0046FCF3: movsx    edx, byte ptr [eax + eax*2 + 0x2fff4c1]
  0x0046FCFB: imul     edx, dword ptr [ecx + 0x2fff578]
  0x0046FD02: sar      edx, 1
  0x0046FD04: lea      eax, [eax + eax*2 + 0x2fff4c2]
  0x0046FD0B: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x0046FD12: movsx    edx, byte ptr [eax]
  0x0046FD15: imul     edx, dword ptr [ecx + 0x2fff574]
  0x0046FD1C: sar      edx, 1
  0x0046FD1E: mov      dword ptr [edi + esi*4 + 0x200], edx
  0x0046FD25: movsx    eax, byte ptr [eax]
  0x0046FD28: imul     eax, dword ptr [ecx + 0x2fff578]
  0x0046FD2F: sar      eax, 1
  0x0046FD31: mov      dword ptr [edi + esi*4 + 0x204], eax
  0x0046FD38: jmp      0x4706d3
  0x004705A4: mov      ebp, ebx
  0x004705A6: sub      eax, 0x3fff
  0x004705AB: shl      ebp, 6
  0x004705AE: add      ebp, esi
  0x004705B0: push     0xf
  0x004705B2: shl      ebp, 2
  0x004705B5: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004705BB: imul     ecx, eax
  0x004705BE: sar      ecx, 0xe
  0x004705C1: mov      dword ptr [edi + esi*4], ecx
  0x004705C4: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004705CA: imul     edx, eax
  0x004705CD: sar      edx, 0xe
  0x004705D0: mov      dword ptr [edi + esi*4 + 4], edx
  0x004705D4: call     0x46e720
  0x0046F731: cmp      ecx, 0x18
  0x0046F734: jg       0x46f769
  0x0046F769: mov      edx, dword ptr [0x3003474]
  0x0046F76F: sub      ecx, 0xa
  0x0046F772: mov      eax, edx
  0x0046F774: shr      eax, cl
  0x0046F776: mov      dword ptr [0x3003784], ecx
  0x0046F77C: mov      ebp, eax
  0x0046F77E: add      eax, 0xfffffe01
  0x0046F783: shl      ebp, cl
  0x0046F785: mov      ecx, ebx
  0x0046F787: shl      ecx, 6
  0x0046F78A: add      ecx, esi
  0x0046F78C: sub      edx, ebp
  0x0046F78E: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F796: mov      dword ptr [0x3003474], edx
  0x0046F79C: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F7A3: sar      eax, 9
  0x0046F7A6: mov      dword ptr [edi + esi*4], eax
  0x0046F7A9: mov      ecx, dword ptr [0x3003784]
  0x0046F7AF: mov      eax, dword ptr [0x3003474]
  0x0046F7B4: sub      ecx, 0xa
  0x0046F7B7: shr      eax, cl
  0x0046F7B9: mov      dword ptr [0x3003784], ecx
  0x0046F7BF: mov      dword ptr [esp + 0x10], edx
  0x0046F7C3: mov      dword ptr [0x3003908], eax
  0x0046F7C8: mov      ebp, eax
  0x0046F7CA: add      eax, 0xfffffe01
  0x0046F7CF: imul     eax, dword ptr [edx]
  0x0046F7D2: shl      ebp, cl
  0x0046F7D4: mov      ecx, dword ptr [0x3003474]
  0x0046F7DA: sar      eax, 9
  0x0046F7DD: sub      ecx, ebp
  0x0046F7DF: mov      dword ptr [0x3003474], ecx
  0x0046F7E5: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F7EC: mov      ecx, dword ptr [0x3003784]
  0x0046F7F2: cmp      ecx, 0xa
  0x0046F7F5: jge      0x46f868
  0x0046FFB8: mov      ebp, ebx
  0x0046FFBA: sub      eax, 0xf
  0x0046FFBD: shl      ebp, 6
  0x0046FFC0: add      ebp, esi
  0x0046FFC2: push     5
  0x0046FFC4: shl      ebp, 2
  0x0046FFC7: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0046FFCD: imul     ecx, eax
  0x0046FFD0: sar      ecx, 4
  0x0046FFD3: mov      dword ptr [edi + esi*4], ecx
  0x0046FFD6: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0046FFDC: imul     edx, eax
  0x0046FFDF: sar      edx, 4
  0x0046FFE2: mov      dword ptr [edi + esi*4 + 4], edx
  0x0046FFE6: call     0x46e720
  0x0046FBC9: sub      eax, 0x3fff
  0x0046FBCE: push     0xf
  0x0046FBD0: imul     eax, dword ptr [ebp]
  0x0046FBD4: sar      eax, 0xe
  0x0046FBD7: mov      dword ptr [edi + esi*4], eax
  0x0046FBDA: call     0x46e720
  0x0047033C: mov      ebp, ebx
  0x0047033E: sub      eax, 0x3ff
  0x00470343: shl      ebp, 6
  0x00470346: add      ebp, esi
  0x00470348: push     0xb
  0x0047034A: shl      ebp, 2
  0x0047034D: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470353: imul     ecx, eax
  0x00470356: sar      ecx, 0xa
  0x00470359: mov      dword ptr [edi + esi*4], ecx
  0x0047035C: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470362: imul     edx, eax
  0x00470365: sar      edx, 0xa
  0x00470368: mov      dword ptr [edi + esi*4 + 4], edx
  0x0047036C: call     0x46e720
  0x0047063E: mov      ebp, ebx
  0x00470640: sub      eax, 0x7fff
  0x00470645: shl      ebp, 6
  0x00470648: add      ebp, esi
  0x0047064A: push     0x10
  0x0047064C: shl      ebp, 2
  0x0047064F: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470655: imul     ecx, eax
  0x00470658: sar      ecx, 0xf
  0x0047065B: mov      dword ptr [edi + esi*4], ecx
  0x0047065E: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470664: imul     edx, eax
  0x00470667: sar      edx, 0xf
  0x0047066A: mov      dword ptr [edi + esi*4 + 4], edx
  0x0047066E: call     0x46e720
  0x0046F9C9: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F9CF: xor      eax, eax
  0x0046F9D1: add      ecx, 8
  0x0046F9D4: mov      al, byte ptr [ebp]
  0x0046F9D7: mov      dword ptr [0x3003784], ecx
  0x0046F9DD: shl      edx, 8
  0x0046F9E0: or       edx, eax
  0x0046F9E2: inc      ebp
  0x0046F9E3: cmp      ecx, 0x18
  0x0046F9E6: mov      dword ptr [0x3003474], edx
  0x0046F9EC: mov      dword ptr [0x2fff1a0], ebp
  0x0046F9F2: jle      0x46f9cf
  0x0046F9F4: sub      ecx, 0xc
  0x0046F9F7: mov      eax, edx
  0x0046F9F9: shr      eax, cl
  0x0046F9FB: mov      dword ptr [0x3003784], ecx
  0x0046FA01: mov      ebp, eax
  0x0046FA03: add      eax, 0xfffff801
  0x0046FA08: shl      ebp, cl
  0x0046FA0A: mov      ecx, ebx
  0x0046FA0C: shl      ecx, 6
  0x0046FA0F: add      ecx, esi
  0x0046FA11: sub      edx, ebp
  0x0046FA13: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046FA1B: mov      dword ptr [0x3003474], edx
  0x0046FA21: lea      edx, [ecx*4 + 0x2fff574]
  0x0046FA28: sar      eax, 0xb
  0x0046FA2B: mov      dword ptr [edi + esi*4], eax
  0x0046FA2E: mov      ecx, dword ptr [0x3003784]
  0x0046FA34: mov      eax, dword ptr [0x3003474]
  0x0046FA39: sub      ecx, 0xc
  0x0046FA3C: shr      eax, cl
  0x0046FA3E: mov      dword ptr [0x3003784], ecx
  0x0046FA44: mov      dword ptr [esp + 0x10], edx
  0x0046FA48: mov      dword ptr [0x3003908], eax
  0x0046FA4D: mov      ebp, eax
  0x0046FA4F: add      eax, 0xfffff801
  0x0046FA54: imul     eax, dword ptr [edx]
  0x0046FA57: shl      ebp, cl
  0x0046FA59: mov      ecx, dword ptr [0x3003474]
  0x0046FA5F: sar      eax, 0xb
  0x0046FA62: sub      ecx, ebp
  0x0046FA64: mov      dword ptr [0x3003474], ecx
  0x0046FA6A: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046FA71: mov      ecx, dword ptr [0x3003784]
  0x0046FA77: cmp      ecx, 0xc
  0x0046FA7A: jge      0x46faed
  0x0046FD44: movsx    edx, byte ptr [eax + eax*2 + 0x3003788]
  0x0046FD4C: mov      ecx, ebx
  0x0046FD4E: add      esp, 4
  0x0046FD51: shl      ecx, 6
  0x0046FD54: add      ecx, esi
  0x0046FD56: shl      ecx, 2
  0x0046FD59: imul     edx, dword ptr [ecx + 0x2fff574]
  0x0046FD60: sar      edx, 2
  0x0046FD63: mov      dword ptr [edi + esi*4], edx
  0x0046FD66: movsx    edx, byte ptr [eax + eax*2 + 0x3003788]
  0x0046FD6E: imul     edx, dword ptr [ecx + 0x2fff578]
  0x0046FD75: sar      edx, 2
  0x0046FD78: mov      dword ptr [edi + esi*4 + 4], edx
  0x0046FD7C: movsx    edx, byte ptr [eax + eax*2 + 0x3003789]
  0x0046FD84: imul     edx, dword ptr [ecx + 0x2fff574]
  0x0046FD8B: sar      edx, 2
  0x0046FD8E: mov      dword ptr [edi + esi*4 + 0x100], edx
  0x0046FD95: movsx    edx, byte ptr [eax + eax*2 + 0x3003789]
  0x0046FD9D: imul     edx, dword ptr [ecx + 0x2fff578]
  0x0046FDA4: sar      edx, 2
  0x0046FDA7: lea      eax, [eax + eax*2 + 0x300378a]
  0x0046FDAE: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x0046FDB5: movsx    edx, byte ptr [eax]
  0x0046FDB8: imul     edx, dword ptr [ecx + 0x2fff574]
  0x0046FDBF: sar      edx, 2
  0x0046FDC2: mov      dword ptr [edi + esi*4 + 0x200], edx
  0x0046FDC9: movsx    eax, byte ptr [eax]
  0x0046FDCC: imul     eax, dword ptr [ecx + 0x2fff578]
  0x0046FDD3: sar      eax, 2
  0x0046FDD6: mov      dword ptr [edi + esi*4 + 0x204], eax
  0x0046FDDD: jmp      0x4706d3
  0x0047004C: mov      ebp, ebx
  0x0047004E: sub      eax, 0x1f
  0x00470051: shl      ebp, 6
  0x00470054: add      ebp, esi
  0x00470056: push     6
  0x00470058: shl      ebp, 2
  0x0047005B: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470061: imul     ecx, eax
  0x00470064: sar      ecx, 5
  0x00470067: mov      dword ptr [edi + esi*4], ecx
  0x0047006A: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470070: imul     edx, eax
  0x00470073: sar      edx, 5
  0x00470076: mov      dword ptr [edi + esi*4 + 4], edx
  0x0047007A: call     0x46e720
  0x0046F052: cmp      ecx, 0x18
  0x0046F055: jg       0x46f08a
  0x0046F08A: mov      edx, dword ptr [0x3003474]
  0x0046F090: sub      ecx, 0xa
  0x0046F093: mov      eax, edx
  0x0046F095: shr      eax, cl
  0x0046F097: mov      dword ptr [0x3003784], ecx
  0x0046F09D: mov      ebp, eax
  0x0046F09F: mov      dword ptr [0x3003908], eax
  0x0046F0A4: shl      ebp, cl
  0x0046F0A6: mov      ecx, ebx
  0x0046F0A8: lea      eax, [eax + eax*2]
  0x0046F0AB: shl      ecx, 6
  0x0046F0AE: shl      eax, 1
  0x0046F0B0: sub      edx, ebp
  0x0046F0B2: add      ecx, esi
  0x0046F0B4: mov      dword ptr [0x3003474], edx
  0x0046F0BA: movsx    edx, word ptr [eax + 0x2fff874]
  0x0046F0C1: imul     edx, dword ptr [ecx*4 + 0x2fff574]
  0x0046F0C9: lea      ecx, [ecx*4 + 0x2fff574]
  0x0046F0D0: sar      edx, 3
  0x0046F0D3: mov      dword ptr [edi + esi*4], edx
  0x0046F0D6: movsx    edx, word ptr [eax + 0x2fff876]
  0x0046F0DD: imul     edx, dword ptr [ecx]
  0x0046F0E0: sar      edx, 3
  0x0046F0E3: mov      dword ptr [edi + esi*4 + 0x100], edx
  0x0046F0EA: movsx    eax, word ptr [eax + 0x2fff878]
  0x0046F0F1: imul     eax, dword ptr [ecx]
  0x0046F0F4: sar      eax, 3
  0x0046F0F7: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F0FE: jmp      0x4706d4
  0x0046EF57: cmp      ecx, 0x18
  0x0046EF5A: jg       0x46ef8f
  0x0046EF8F: mov      edx, dword ptr [0x3003474]
  0x0046EF95: sub      ecx, 3
  0x0046EF98: mov      eax, edx
  0x0046EF9A: shr      eax, cl
  0x0046EF9C: mov      dword ptr [0x3003784], ecx
  0x0046EFA2: mov      ebp, eax
  0x0046EFA4: add      eax, -3
  0x0046EFA7: shl      ebp, cl
  0x0046EFA9: mov      ecx, ebx
  0x0046EFAB: shl      ecx, 6
  0x0046EFAE: add      ecx, esi
  0x0046EFB0: sub      edx, ebp
  0x0046EFB2: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046EFBA: mov      dword ptr [0x3003474], edx
  0x0046EFC0: lea      edx, [ecx*4 + 0x2fff574]
  0x0046EFC7: sar      eax, 2
  0x0046EFCA: mov      dword ptr [edi + esi*4], eax
  0x0046EFCD: mov      ecx, dword ptr [0x3003784]
  0x0046EFD3: mov      eax, dword ptr [0x3003474]
  0x0046EFD8: sub      ecx, 3
  0x0046EFDB: shr      eax, cl
  0x0046EFDD: mov      dword ptr [0x3003784], ecx
  0x0046EFE3: mov      ebp, eax
  0x0046EFE5: add      eax, -3
  0x0046EFE8: imul     eax, dword ptr [edx]
  0x0046EFEB: shl      ebp, cl
  0x0046EFED: mov      ecx, dword ptr [0x3003474]
  0x0046EFF3: sar      eax, 2
  0x0046EFF6: sub      ecx, ebp
  0x0046EFF8: mov      dword ptr [0x3003474], ecx
  0x0046EFFE: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F005: mov      ecx, dword ptr [0x3003784]
  0x0046F00B: mov      eax, dword ptr [0x3003474]
  0x0046F010: sub      ecx, 3
  0x0046F013: shr      eax, cl
  0x0046F015: mov      dword ptr [0x3003784], ecx
  0x0046F01B: mov      dword ptr [0x3003908], eax
  0x0046F020: mov      ebp, eax
  0x0046F022: add      eax, -3
  0x0046F025: imul     eax, dword ptr [edx]
  0x0046F028: shl      ebp, cl
  0x0046F02A: mov      ecx, dword ptr [0x3003474]
  0x0046F030: sub      ecx, ebp
  0x0046F032: sar      eax, 2
  0x0046F035: mov      dword ptr [0x3003474], ecx
  0x0046F03B: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F042: jmp      0x4706d4
  0x004706D4: mov      eax, dword ptr [esi*4 + 0x30039e0]
  0x004706DB: inc      esi
  0x004706DC: cmp      eax, 0x25
  0x004706DF: jbe      0x46edc6
  0x004703D6: mov      ebp, ebx
  0x004703D8: sub      eax, 0x7ff
  0x004703DD: shl      ebp, 6
  0x004703E0: add      ebp, esi
  0x004703E2: push     0xc
  0x004703E4: shl      ebp, 2
  0x004703E7: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004703ED: imul     ecx, eax
  0x004703F0: sar      ecx, 0xb
  0x004703F3: mov      dword ptr [edi + esi*4], ecx
  0x004703F6: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004703FC: imul     edx, eax
  0x004703FF: sar      edx, 0xb
  0x00470402: mov      dword ptr [edi + esi*4 + 4], edx
  0x00470406: call     0x46e720
  0x0046FB69: sub      eax, 0x1fff
  0x0046FB6E: push     0xe
  0x0046FB70: imul     eax, dword ptr [ebp]
  0x0046FB74: sar      eax, 0xd
  0x0046FB77: mov      dword ptr [edi + esi*4], eax
  0x0046FB7A: call     0x46e720
  0x004700E0: mov      ebp, ebx
  0x004700E2: sub      eax, 0x3f
  0x004700E5: shl      ebp, 6
  0x004700E8: add      ebp, esi
  0x004700EA: push     7
  0x004700EC: shl      ebp, 2
  0x004700EF: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004700F5: imul     ecx, eax
  0x004700F8: sar      ecx, 6
  0x004700FB: mov      dword ptr [edi + esi*4], ecx
  0x004700FE: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470104: imul     edx, eax
  0x00470107: sar      edx, 6
  0x0047010A: mov      dword ptr [edi + esi*4 + 4], edx
  0x0047010E: call     0x46e720
  0x0046F5E8: cmp      ecx, 0x18
  0x0046F5EB: jg       0x46f620
  0x0046F620: mov      edx, dword ptr [0x3003474]
  0x0046F626: sub      ecx, 9
  0x0046F629: mov      eax, edx
  0x0046F62B: shr      eax, cl
  0x0046F62D: mov      dword ptr [0x3003784], ecx
  0x0046F633: mov      ebp, eax
  0x0046F635: add      eax, 0xffffff01
  0x0046F63A: shl      ebp, cl
  0x0046F63C: mov      ecx, ebx
  0x0046F63E: shl      ecx, 6
  0x0046F641: add      ecx, esi
  0x0046F643: sub      edx, ebp
  0x0046F645: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F64D: mov      dword ptr [0x3003474], edx
  0x0046F653: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F65A: sar      eax, 8
  0x0046F65D: mov      dword ptr [edi + esi*4], eax
  0x0046F660: mov      ecx, dword ptr [0x3003784]
  0x0046F666: mov      eax, dword ptr [0x3003474]
  0x0046F66B: sub      ecx, 9
  0x0046F66E: shr      eax, cl
  0x0046F670: mov      dword ptr [0x3003784], ecx
  0x0046F676: mov      dword ptr [esp + 0x10], edx
  0x0046F67A: mov      dword ptr [0x3003908], eax
  0x0046F67F: mov      ebp, eax
  0x0046F681: add      eax, 0xffffff01
  0x0046F686: imul     eax, dword ptr [edx]
  0x0046F689: shl      ebp, cl
  0x0046F68B: mov      ecx, dword ptr [0x3003474]
  0x0046F691: sar      eax, 8
  0x0046F694: sub      ecx, ebp
  0x0046F696: mov      dword ptr [0x3003474], ecx
  0x0046F69C: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F6A3: mov      ecx, dword ptr [0x3003784]
  0x0046F6A9: cmp      ecx, 9
  0x0046F6AC: jge      0x46f71f
  0x0046FDE9: mov      ebp, ebx
  0x0046FDEB: sub      eax, 3
  0x0046FDEE: shl      ebp, 6
  0x0046FDF1: add      ebp, esi
  0x0046FDF3: push     3
  0x0046FDF5: shl      ebp, 2
  0x0046FDF8: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0046FDFE: imul     ecx, eax
  0x0046FE01: sar      ecx, 2
  0x0046FE04: mov      dword ptr [edi + esi*4], ecx
  0x0046FE07: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0046FE0D: imul     edx, eax
  0x0046FE10: sar      edx, 2
  0x0046FE13: mov      dword ptr [edi + esi*4 + 4], edx
  0x0046FE17: call     0x46e720
  0x0046EDF0: cmp      ecx, 0x18
  0x0046EDF3: jg       0x46ee28
  0x0046EE28: mov      edx, dword ptr [0x3003474]
  0x0046EE2E: sub      ecx, 5
  0x0046EE31: mov      eax, edx
  0x0046EE33: shr      eax, cl
  0x0046EE35: mov      dword ptr [0x3003784], ecx
  0x0046EE3B: mov      ebp, eax
  0x0046EE3D: mov      dword ptr [0x3003908], eax
  0x0046EE42: shl      ebp, cl
  0x0046EE44: mov      ecx, ebx
  0x0046EE46: lea      eax, [eax + eax*2]
  0x0046EE49: shl      ecx, 6
  0x0046EE4C: add      ecx, esi
  0x0046EE4E: sub      edx, ebp
  0x0046EE50: mov      dword ptr [0x3003474], edx
  0x0046EE56: lea      ecx, [ecx*4 + 0x2fff574]
  0x0046EE5D: movsx    edx, byte ptr [eax + 0x2fff4c0]
  0x0046EE64: imul     edx, dword ptr [ecx]
  0x0046EE67: sar      edx, 1
  0x0046EE69: mov      dword ptr [edi + esi*4], edx
  0x0046EE6C: movsx    edx, byte ptr [eax + 0x2fff4c1]
  0x0046EE73: imul     edx, dword ptr [ecx]
  0x0046EE76: sar      edx, 1
  0x0046EE78: mov      dword ptr [edi + esi*4 + 0x100], edx
  0x0046EE7F: movsx    eax, byte ptr [eax + 0x2fff4c2]
  0x0046EE86: imul     eax, dword ptr [ecx]
  0x0046EE89: sar      eax, 1
  0x0046EE8B: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046EE92: jmp      0x4706d4
  0x004706F2: add      esp, 4
  0x004706F5: add      edi, 0x300
  0x004706FB: mov      eax, dword ptr [esp + 0x14]
  0x004706FF: inc      eax
  0x00470700: cmp      eax, 4
  0x00470703: mov      dword ptr [esp + 0x14], eax
  0x00470707: jl       0x46edb6
  0x00470470: mov      ebp, ebx
  0x00470472: sub      eax, 0xfff
  0x00470477: shl      ebp, 6
  0x0047047A: add      ebp, esi
  0x0047047C: push     0xd
  0x0047047E: shl      ebp, 2
  0x00470481: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470487: imul     ecx, eax
  0x0047048A: sar      ecx, 0xc
  0x0047048D: mov      dword ptr [edi + esi*4], ecx
  0x00470490: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470496: imul     edx, eax
  0x00470499: sar      edx, 0xc
  0x0047049C: mov      dword ptr [edi + esi*4 + 4], edx
  0x004704A0: call     0x46e720
  0x00470174: mov      ebp, ebx
  0x00470176: sub      eax, 0x7f
  0x00470179: shl      ebp, 6
  0x0047017C: add      ebp, esi
  0x0047017E: push     8
  0x00470180: shl      ebp, 2
  0x00470183: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470189: imul     ecx, eax
  0x0047018C: sar      ecx, 7
  0x0047018F: mov      dword ptr [edi + esi*4], ecx
  0x00470192: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470198: imul     edx, eax
  0x0047019B: sar      edx, 7
  0x0047019E: mov      dword ptr [edi + esi*4 + 4], edx
  0x004701A2: call     0x46e720
  0x0046F500: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F506: xor      eax, eax
  0x0046F508: add      ecx, 8
  0x0046F50B: mov      al, byte ptr [ebp]
  0x0046F50E: mov      dword ptr [0x3003784], ecx
  0x0046F514: shl      edx, 8
  0x0046F517: or       edx, eax
  0x0046F519: inc      ebp
  0x0046F51A: cmp      ecx, 0x18
  0x0046F51D: mov      dword ptr [0x3003474], edx
  0x0046F523: mov      dword ptr [0x2fff1a0], ebp
  0x0046F529: jle      0x46f506
  0x0046F52B: sub      ecx, 8
  0x0046F52E: mov      eax, edx
  0x0046F530: shr      eax, cl
  0x0046F532: mov      dword ptr [0x3003784], ecx
  0x0046F538: mov      ebp, eax
  0x0046F53A: add      eax, -0x7f
  0x0046F53D: shl      ebp, cl
  0x0046F53F: mov      ecx, ebx
  0x0046F541: shl      ecx, 6
  0x0046F544: add      ecx, esi
  0x0046F546: sub      edx, ebp
  0x0046F548: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F550: mov      dword ptr [0x3003474], edx
  0x0046F556: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F55D: sar      eax, 7
  0x0046F560: mov      dword ptr [edi + esi*4], eax
  0x0046F563: mov      ecx, dword ptr [0x3003784]
  0x0046F569: mov      eax, dword ptr [0x3003474]
  0x0046F56E: sub      ecx, 8
  0x0046F571: shr      eax, cl
  0x0046F573: mov      dword ptr [0x3003784], ecx
  0x0046F579: mov      ebp, eax
  0x0046F57B: add      eax, -0x7f
  0x0046F57E: imul     eax, dword ptr [edx]
  0x0046F581: shl      ebp, cl
  0x0046F583: mov      ecx, dword ptr [0x3003474]
  0x0046F589: sar      eax, 7
  0x0046F58C: sub      ecx, ebp
  0x0046F58E: mov      dword ptr [0x3003474], ecx
  0x0046F594: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F59B: mov      ecx, dword ptr [0x3003784]
  0x0046F5A1: mov      eax, dword ptr [0x3003474]
  0x0046F5A6: sub      ecx, 8
  0x0046F5A9: shr      eax, cl
  0x0046F5AB: mov      dword ptr [0x3003784], ecx
  0x0046F5B1: mov      dword ptr [0x3003908], eax
  0x0046F5B6: mov      ebp, eax
  0x0046F5B8: add      eax, -0x7f
  0x0046F5BB: imul     eax, dword ptr [edx]
  0x0046F5BE: shl      ebp, cl
  0x0046F5C0: mov      ecx, dword ptr [0x3003474]
  0x0046F5C6: sub      ecx, ebp
  0x0046F5C8: sar      eax, 7
  0x0046F5CB: mov      dword ptr [0x3003474], ecx
  0x0046F5D1: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F5D8: jmp      0x4706d4
  0x0046F87A: cmp      ecx, 0x18
  0x0046F87D: jg       0x46f8b2
  0x0046F8B2: mov      edx, dword ptr [0x3003474]
  0x0046F8B8: sub      ecx, 0xb
  0x0046F8BB: mov      eax, edx
  0x0046F8BD: shr      eax, cl
  0x0046F8BF: mov      dword ptr [0x3003784], ecx
  0x0046F8C5: mov      ebp, eax
  0x0046F8C7: add      eax, 0xfffffc01
  0x0046F8CC: shl      ebp, cl
  0x0046F8CE: mov      ecx, ebx
  0x0046F8D0: shl      ecx, 6
  0x0046F8D3: add      ecx, esi
  0x0046F8D5: sub      edx, ebp
  0x0046F8D7: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F8DF: mov      dword ptr [0x3003474], edx
  0x0046F8E5: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F8EC: sar      eax, 0xa
  0x0046F8EF: mov      dword ptr [edi + esi*4], eax
  0x0046F8F2: mov      ecx, dword ptr [0x3003784]
  0x0046F8F8: mov      eax, dword ptr [0x3003474]
  0x0046F8FD: sub      ecx, 0xb
  0x0046F900: shr      eax, cl
  0x0046F902: mov      dword ptr [0x3003784], ecx
  0x0046F908: mov      dword ptr [esp + 0x10], edx
  0x0046F90C: mov      dword ptr [0x3003908], eax
  0x0046F911: mov      ebp, eax
  0x0046F913: add      eax, 0xfffffc01
  0x0046F918: imul     eax, dword ptr [edx]
  0x0046F91B: shl      ebp, cl
  0x0046F91D: mov      ecx, dword ptr [0x3003474]
  0x0046F923: sar      eax, 0xa
  0x0046F926: sub      ecx, ebp
  0x0046F928: mov      dword ptr [0x3003474], ecx
  0x0046F92E: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F935: mov      ecx, dword ptr [0x3003784]
  0x0046F93B: cmp      ecx, 0xb
  0x0046F93E: jge      0x46f9b1
  0x0046F3FF: cmp      ecx, 0x18
  0x0046F402: jg       0x46f437
  0x0046F437: mov      edx, dword ptr [0x3003474]
  0x0046F43D: sub      ecx, 7
  0x0046F440: mov      eax, edx
  0x0046F442: shr      eax, cl
  0x0046F444: mov      dword ptr [0x3003784], ecx
  0x0046F44A: mov      ebp, eax
  0x0046F44C: add      eax, -0x3f
  0x0046F44F: shl      ebp, cl
  0x0046F451: mov      ecx, ebx
  0x0046F453: shl      ecx, 6
  0x0046F456: add      ecx, esi
  0x0046F458: sub      edx, ebp
  0x0046F45A: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F462: mov      dword ptr [0x3003474], edx
  0x0046F468: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F46F: sar      eax, 6
  0x0046F472: mov      dword ptr [edi + esi*4], eax
  0x0046F475: mov      ecx, dword ptr [0x3003784]
  0x0046F47B: mov      eax, dword ptr [0x3003474]
  0x0046F480: sub      ecx, 7
  0x0046F483: shr      eax, cl
  0x0046F485: mov      dword ptr [0x3003784], ecx
  0x0046F48B: mov      ebp, eax
  0x0046F48D: add      eax, -0x3f
  0x0046F490: imul     eax, dword ptr [edx]
  0x0046F493: shl      ebp, cl
  0x0046F495: mov      ecx, dword ptr [0x3003474]
  0x0046F49B: sar      eax, 6
  0x0046F49E: sub      ecx, ebp
  0x0046F4A0: mov      dword ptr [0x3003474], ecx
  0x0046F4A6: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F4AD: mov      ecx, dword ptr [0x3003784]
  0x0046F4B3: mov      eax, dword ptr [0x3003474]
  0x0046F4B8: sub      ecx, 7
  0x0046F4BB: shr      eax, cl
  0x0046F4BD: mov      dword ptr [0x3003784], ecx
  0x0046F4C3: mov      dword ptr [0x3003908], eax
  0x0046F4C8: mov      ebp, eax
  0x0046F4CA: add      eax, -0x3f
  0x0046F4CD: imul     eax, dword ptr [edx]
  0x0046F4D0: shl      ebp, cl
  0x0046F4D2: mov      ecx, dword ptr [0x3003474]
  0x0046F4D8: sub      ecx, ebp
  0x0046F4DA: sar      eax, 6
  0x0046F4DD: mov      dword ptr [0x3003474], ecx
  0x0046F4E3: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F4EA: jmp      0x4706d4
  0x0046FB09: sub      eax, 0xfff
  0x0046FB0E: push     0xd
  0x0046FB10: imul     eax, dword ptr [ebp]
  0x0046FB14: sar      eax, 0xc
  0x0046FB17: mov      dword ptr [edi + esi*4], eax
  0x0046FB1A: call     0x46e720
  0x004706D3: inc      esi
  0x004706D4: mov      eax, dword ptr [esi*4 + 0x30039e0]
  0x004706DB: inc      esi
  0x004706DC: cmp      eax, 0x25
  0x004706DF: jbe      0x46edc6
  0x0046FE7D: mov      ecx, ebx
  0x0046FE7F: lea      eax, [eax + eax*2]
  0x0046FE82: shl      ecx, 6
  0x0046FE85: shl      eax, 1
  0x0046FE87: add      ecx, esi
  0x0046FE89: add      esp, 4
  0x0046FE8C: movsx    edx, word ptr [eax + 0x2fff874]
  0x0046FE93: shl      ecx, 2
  0x0046FE96: imul     edx, dword ptr [ecx + 0x2fff574]
  0x0046FE9D: sar      edx, 3
  0x0046FEA0: mov      dword ptr [edi + esi*4], edx
  0x0046FEA3: movsx    edx, word ptr [eax + 0x2fff874]
  0x0046FEAA: imul     edx, dword ptr [ecx + 0x2fff578]
  0x0046FEB1: sar      edx, 3
  0x0046FEB4: mov      dword ptr [edi + esi*4 + 4], edx
  0x0046FEB8: movsx    edx, word ptr [eax + 0x2fff876]
  0x0046FEBF: imul     edx, dword ptr [ecx + 0x2fff574]
  0x0046FEC6: sar      edx, 3
  0x0046FEC9: mov      dword ptr [edi + esi*4 + 0x100], edx
  0x0046FED0: movsx    edx, word ptr [eax + 0x2fff876]
  0x0046FED7: imul     edx, dword ptr [ecx + 0x2fff578]
  0x0046FEDE: sar      edx, 3
  0x0046FEE1: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x0046FEE8: movsx    edx, word ptr [eax + 0x2fff878]
  0x0046FEEF: imul     edx, dword ptr [ecx + 0x2fff574]
  0x0046FEF6: sar      edx, 3
  0x0046FEF9: mov      dword ptr [edi + esi*4 + 0x200], edx
  0x0046FF00: movsx    eax, word ptr [eax + 0x2fff878]
  0x0046FF07: imul     eax, dword ptr [ecx + 0x2fff578]
  0x0046FF0E: sar      eax, 3
  0x0046FF11: mov      dword ptr [edi + esi*4 + 0x204], eax
  0x0046FF18: jmp      0x4706d3
  0x0046F304: cmp      ecx, 0x18
  0x0046F307: jg       0x46f33c
  0x0046F33C: mov      edx, dword ptr [0x3003474]
  0x0046F342: sub      ecx, 6
  0x0046F345: mov      eax, edx
  0x0046F347: shr      eax, cl
  0x0046F349: mov      dword ptr [0x3003784], ecx
  0x0046F34F: mov      ebp, eax
  0x0046F351: add      eax, -0x1f
  0x0046F354: shl      ebp, cl
  0x0046F356: mov      ecx, ebx
  0x0046F358: shl      ecx, 6
  0x0046F35B: add      ecx, esi
  0x0046F35D: sub      edx, ebp
  0x0046F35F: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F367: mov      dword ptr [0x3003474], edx
  0x0046F36D: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F374: sar      eax, 5
  0x0046F377: mov      dword ptr [edi + esi*4], eax
  0x0046F37A: mov      ecx, dword ptr [0x3003784]
  0x0046F380: mov      eax, dword ptr [0x3003474]
  0x0046F385: sub      ecx, 6
  0x0046F388: shr      eax, cl
  0x0046F38A: mov      dword ptr [0x3003784], ecx
  0x0046F390: mov      ebp, eax
  0x0046F392: add      eax, -0x1f
  0x0046F395: imul     eax, dword ptr [edx]
  0x0046F398: shl      ebp, cl
  0x0046F39A: mov      ecx, dword ptr [0x3003474]
  0x0046F3A0: sar      eax, 5
  0x0046F3A3: sub      ecx, ebp
  0x0046F3A5: mov      dword ptr [0x3003474], ecx
  0x0046F3AB: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F3B2: mov      ecx, dword ptr [0x3003784]
  0x0046F3B8: mov      eax, dword ptr [0x3003474]
  0x0046F3BD: sub      ecx, 6
  0x0046F3C0: shr      eax, cl
  0x0046F3C2: mov      dword ptr [0x3003784], ecx
  0x0046F3C8: mov      dword ptr [0x3003908], eax
  0x0046F3CD: mov      ebp, eax
  0x0046F3CF: add      eax, -0x1f
  0x0046F3D2: imul     eax, dword ptr [edx]
  0x0046F3D5: shl      ebp, cl
  0x0046F3D7: mov      ecx, dword ptr [0x3003474]
  0x0046F3DD: sub      ecx, ebp
  0x0046F3DF: sar      eax, 5
  0x0046F3E2: mov      dword ptr [0x3003474], ecx
  0x0046F3E8: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F3EF: jmp      0x4706d4
  0x0046F209: cmp      ecx, 0x18
  0x0046F20C: jg       0x46f241
  0x0046F241: mov      edx, dword ptr [0x3003474]
  0x0046F247: sub      ecx, 5
  0x0046F24A: mov      eax, edx
  0x0046F24C: shr      eax, cl
  0x0046F24E: mov      dword ptr [0x3003784], ecx
  0x0046F254: mov      ebp, eax
  0x0046F256: add      eax, -0xf
  0x0046F259: shl      ebp, cl
  0x0046F25B: mov      ecx, ebx
  0x0046F25D: shl      ecx, 6
  0x0046F260: add      ecx, esi
  0x0046F262: sub      edx, ebp
  0x0046F264: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F26C: mov      dword ptr [0x3003474], edx
  0x0046F272: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F279: sar      eax, 4
  0x0046F27C: mov      dword ptr [edi + esi*4], eax
  0x0046F27F: mov      ecx, dword ptr [0x3003784]
  0x0046F285: mov      eax, dword ptr [0x3003474]
  0x0046F28A: sub      ecx, 5
  0x0046F28D: shr      eax, cl
  0x0046F28F: mov      dword ptr [0x3003784], ecx
  0x0046F295: mov      ebp, eax
  0x0046F297: add      eax, -0xf
  0x0046F29A: imul     eax, dword ptr [edx]
  0x0046F29D: shl      ebp, cl
  0x0046F29F: mov      ecx, dword ptr [0x3003474]
  0x0046F2A5: sar      eax, 4
  0x0046F2A8: sub      ecx, ebp
  0x0046F2AA: mov      dword ptr [0x3003474], ecx
  0x0046F2B0: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F2B7: mov      ecx, dword ptr [0x3003784]
  0x0046F2BD: mov      eax, dword ptr [0x3003474]
  0x0046F2C2: sub      ecx, 5
  0x0046F2C5: shr      eax, cl
  0x0046F2C7: mov      dword ptr [0x3003784], ecx
  0x0046F2CD: mov      dword ptr [0x3003908], eax
  0x0046F2D2: mov      ebp, eax
  0x0046F2D4: add      eax, -0xf
  0x0046F2D7: imul     eax, dword ptr [edx]
  0x0046F2DA: shl      ebp, cl
  0x0046F2DC: mov      ecx, dword ptr [0x3003474]
  0x0046F2E2: sub      ecx, ebp
  0x0046F2E4: sar      eax, 4
  0x0046F2E7: mov      dword ptr [0x3003474], ecx
  0x0046F2ED: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F2F4: jmp      0x4706d4
  0x0046EDAE: mov      dword ptr [esp + 0x14], 0
  0x0046EDB6: mov      eax, dword ptr [0x30039dc]
  0x0046EDBB: xor      esi, esi
  0x0046EDBD: cmp      eax, 0x25
  0x0046EDC0: ja       0x4706fb
  0x00470717: pop      edi
  0x00470718: pop      esi
  0x00470719: pop      ebp
  0x0047071A: pop      ebx
  0x0047071B: add      esp, 8
  0x0047071E: ret      
  0x0047023D: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470243: sub      eax, 0xff
  0x00470248: imul     ecx, eax
  0x0047024B: sar      ecx, 8
  0x0047024E: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x00470255: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047025B: imul     edx, eax
  0x0047025E: sar      edx, 8
  0x00470261: push     9
  0x00470263: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x0047026A: call     0x46e720
  0x0046F113: mov      edx, dword ptr [0x3003474]
  0x0046F119: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F11F: xor      eax, eax
  0x0046F121: add      ecx, 8
  0x0046F124: mov      al, byte ptr [ebp]
  0x0046F127: mov      dword ptr [0x3003784], ecx
  0x0046F12D: shl      edx, 8
  0x0046F130: or       edx, eax
  0x0046F132: inc      ebp
  0x0046F133: cmp      ecx, 0x18
  0x0046F136: mov      dword ptr [0x3003474], edx
  0x0046F13C: mov      dword ptr [0x2fff1a0], ebp
  0x0046F142: jle      0x46f11f
  0x0047053F: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470545: sub      eax, 0x1fff
  0x0047054A: imul     ecx, eax
  0x0047054D: sar      ecx, 0xd
  0x00470550: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x00470557: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047055D: imul     edx, eax
  0x00470560: sar      edx, 0xd
  0x00470563: push     0xe
  0x00470565: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x0047056C: call     0x46e720
  0x0046FC3F: sub      eax, 0x7fff
  0x0046FC44: push     0x10
  0x0046FC46: imul     eax, dword ptr [ebp]
  0x0046FC4A: sar      eax, 0xf
  0x0046FC4D: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046FC54: call     0x46e720
  0x0046EEA7: mov      edx, dword ptr [0x3003474]
  0x0046EEAD: mov      ebp, dword ptr [0x2fff1a0]
  0x0046EEB3: xor      eax, eax
  0x0046EEB5: add      ecx, 8
  0x0046EEB8: mov      al, byte ptr [ebp]
  0x0046EEBB: mov      dword ptr [0x3003784], ecx
  0x0046EEC1: shl      edx, 8
  0x0046EEC4: or       edx, eax
  0x0046EEC6: inc      ebp
  0x0046EEC7: cmp      ecx, 0x18
  0x0046EECA: mov      dword ptr [0x3003474], edx
  0x0046EED0: mov      dword ptr [0x2fff1a0], ebp
  0x0046EED6: jle      0x46eeb3
  0x004702D7: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004702DD: sub      eax, 0x1ff
  0x004702E2: imul     ecx, eax
  0x004702E5: sar      ecx, 9
  0x004702E8: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x004702EF: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004702F5: imul     edx, eax
  0x004702F8: sar      edx, 9
  0x004702FB: push     0xa
  0x004702FD: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x00470304: call     0x46e720
  0x0046FF57: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0046FF5D: sub      eax, 7
  0x0046FF60: imul     ecx, eax
  0x0046FF63: sar      ecx, 3
  0x0046FF66: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x0046FF6D: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0046FF73: imul     edx, eax
  0x0046FF76: sar      edx, 3
  0x0046FF79: push     4
  0x0046FF7B: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x0046FF82: call     0x46e720
  0x004705D9: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004705DF: sub      eax, 0x3fff
  0x004705E4: imul     ecx, eax
  0x004705E7: sar      ecx, 0xe
  0x004705EA: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x004705F1: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004705F7: imul     edx, eax
  0x004705FA: sar      edx, 0xe
  0x004705FD: push     0xf
  0x004705FF: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x00470606: call     0x46e720
  0x0046F736: mov      edx, dword ptr [0x3003474]
  0x0046F73C: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F742: xor      eax, eax
  0x0046F744: add      ecx, 8
  0x0046F747: mov      al, byte ptr [ebp]
  0x0046F74A: mov      dword ptr [0x3003784], ecx
  0x0046F750: shl      edx, 8
  0x0046F753: or       edx, eax
  0x0046F755: inc      ebp
  0x0046F756: cmp      ecx, 0x18
  0x0046F759: mov      dword ptr [0x3003474], edx
  0x0046F75F: mov      dword ptr [0x2fff1a0], ebp
  0x0046F765: jle      0x46f742
  0x0046F7F7: cmp      ecx, 0x18
  0x0046F7FA: jg       0x46f868
  0x0046F868: mov      eax, dword ptr [0x3003474]
  0x0046F86D: jmp      0x46f82f
  0x0046FFEB: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0046FFF1: sub      eax, 0xf
  0x0046FFF4: imul     ecx, eax
  0x0046FFF7: sar      ecx, 4
  0x0046FFFA: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x00470001: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470007: imul     edx, eax
  0x0047000A: sar      edx, 4
  0x0047000D: push     5
  0x0047000F: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x00470016: call     0x46e720
  0x0046FBDF: sub      eax, 0x3fff
  0x0046FBE4: push     0xf
  0x0046FBE6: imul     eax, dword ptr [ebp]
  0x0046FBEA: sar      eax, 0xe
  0x0046FBED: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046FBF4: call     0x46e720
  0x00470371: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470377: sub      eax, 0x3ff
  0x0047037C: imul     ecx, eax
  0x0047037F: sar      ecx, 0xa
  0x00470382: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x00470389: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047038F: imul     edx, eax
  0x00470392: sar      edx, 0xa
  0x00470395: push     0xb
  0x00470397: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x0047039E: call     0x46e720
  0x00470673: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470679: sub      eax, 0x7fff
  0x0047067E: imul     ecx, eax
  0x00470681: sar      ecx, 0xf
  0x00470684: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x0047068B: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470691: imul     edx, eax
  0x00470694: sar      edx, 0xf
  0x00470697: push     0x10
  0x00470699: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x004706A0: call     0x46e720
  0x0046F9CF: xor      eax, eax
  0x0046F9D1: add      ecx, 8
  0x0046F9D4: mov      al, byte ptr [ebp]
  0x0046F9D7: mov      dword ptr [0x3003784], ecx
  0x0046F9DD: shl      edx, 8
  0x0046F9E0: or       edx, eax
  0x0046F9E2: inc      ebp
  0x0046F9E3: cmp      ecx, 0x18
  0x0046F9E6: mov      dword ptr [0x3003474], edx
  0x0046F9EC: mov      dword ptr [0x2fff1a0], ebp
  0x0046F9F2: jle      0x46f9cf
  0x0046FA7C: cmp      ecx, 0x18
  0x0046FA7F: jg       0x46faed
  0x0046FAED: mov      eax, dword ptr [0x3003474]
  0x0046FAF2: jmp      0x46fab4
  0x0047007F: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470085: sub      eax, 0x1f
  0x00470088: imul     ecx, eax
  0x0047008B: sar      ecx, 5
  0x0047008E: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x00470095: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047009B: imul     edx, eax
  0x0047009E: sar      edx, 5
  0x004700A1: push     6
  0x004700A3: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x004700AA: call     0x46e720
  0x0046F057: mov      edx, dword ptr [0x3003474]
  0x0046F05D: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F063: xor      eax, eax
  0x0046F065: add      ecx, 8
  0x0046F068: mov      al, byte ptr [ebp]
  0x0046F06B: mov      dword ptr [0x3003784], ecx
  0x0046F071: shl      edx, 8
  0x0046F074: or       edx, eax
  0x0046F076: inc      ebp
  0x0046F077: cmp      ecx, 0x18
  0x0046F07A: mov      dword ptr [0x3003474], edx
  0x0046F080: mov      dword ptr [0x2fff1a0], ebp
  0x0046F086: jle      0x46f063
  0x0046EF5C: mov      edx, dword ptr [0x3003474]
  0x0046EF62: mov      ebp, dword ptr [0x2fff1a0]
  0x0046EF68: xor      eax, eax
  0x0046EF6A: add      ecx, 8
  0x0046EF6D: mov      al, byte ptr [ebp]
  0x0046EF70: mov      dword ptr [0x3003784], ecx
  0x0046EF76: shl      edx, 8
  0x0046EF79: or       edx, eax
  0x0046EF7B: inc      ebp
  0x0046EF7C: cmp      ecx, 0x18
  0x0046EF7F: mov      dword ptr [0x3003474], edx
  0x0046EF85: mov      dword ptr [0x2fff1a0], ebp
  0x0046EF8B: jle      0x46ef68
  0x004706E5: jmp      0x4706fb
  0x0047040B: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470411: sub      eax, 0x7ff
  0x00470416: imul     ecx, eax
  0x00470419: sar      ecx, 0xb
  0x0047041C: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x00470423: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470429: imul     edx, eax
  0x0047042C: sar      edx, 0xb
  0x0047042F: push     0xc
  0x00470431: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x00470438: call     0x46e720
  0x0046FB7F: sub      eax, 0x1fff
  0x0046FB84: push     0xe
  0x0046FB86: imul     eax, dword ptr [ebp]
  0x0046FB8A: sar      eax, 0xd
  0x0046FB8D: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046FB94: call     0x46e720
  0x00470113: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470119: sub      eax, 0x3f
  0x0047011C: imul     ecx, eax
  0x0047011F: sar      ecx, 6
  0x00470122: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x00470129: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047012F: imul     edx, eax
  0x00470132: sar      edx, 6
  0x00470135: push     7
  0x00470137: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x0047013E: call     0x46e720
  0x0046F5ED: mov      edx, dword ptr [0x3003474]
  0x0046F5F3: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F5F9: xor      eax, eax
  0x0046F5FB: add      ecx, 8
  0x0046F5FE: mov      al, byte ptr [ebp]
  0x0046F601: mov      dword ptr [0x3003784], ecx
  0x0046F607: shl      edx, 8
  0x0046F60A: or       edx, eax
  0x0046F60C: inc      ebp
  0x0046F60D: cmp      ecx, 0x18
  0x0046F610: mov      dword ptr [0x3003474], edx
  0x0046F616: mov      dword ptr [0x2fff1a0], ebp
  0x0046F61C: jle      0x46f5f9
  0x0046F6AE: cmp      ecx, 0x18
  0x0046F6B1: jg       0x46f71f
  0x0046F71F: mov      eax, dword ptr [0x3003474]
  0x0046F724: jmp      0x46f6e6
  0x0046FE1C: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0046FE22: sub      eax, 3
  0x0046FE25: imul     ecx, eax
  0x0046FE28: sar      ecx, 2
  0x0046FE2B: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x0046FE32: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0046FE38: imul     edx, eax
  0x0046FE3B: sar      edx, 2
  0x0046FE3E: push     3
  0x0046FE40: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x0046FE47: call     0x46e720
  0x0046EDF5: mov      edx, dword ptr [0x3003474]
  0x0046EDFB: mov      ebp, dword ptr [0x2fff1a0]
  0x0046EE01: xor      eax, eax
  0x0046EE03: add      ecx, 8
  0x0046EE06: mov      al, byte ptr [ebp]
  0x0046EE09: mov      dword ptr [0x3003784], ecx
  0x0046EE0F: shl      edx, 8
  0x0046EE12: or       edx, eax
  0x0046EE14: inc      ebp
  0x0046EE15: cmp      ecx, 0x18
  0x0046EE18: mov      dword ptr [0x3003474], edx
  0x0046EE1E: mov      dword ptr [0x2fff1a0], ebp
  0x0046EE24: jle      0x46ee01
  0x004704A5: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004704AB: sub      eax, 0xfff
  0x004704B0: imul     ecx, eax
  0x004704B3: sar      ecx, 0xc
  0x004704B6: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x004704BD: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004704C3: imul     edx, eax
  0x004704C6: sar      edx, 0xc
  0x004704C9: push     0xd
  0x004704CB: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x004704D2: call     0x46e720
  0x004701A7: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004701AD: sub      eax, 0x7f
  0x004701B0: imul     ecx, eax
  0x004701B3: sar      ecx, 7
  0x004701B6: mov      dword ptr [edi + esi*4 + 0x100], ecx
  0x004701BD: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004701C3: imul     edx, eax
  0x004701C6: sar      edx, 7
  0x004701C9: push     8
  0x004701CB: mov      dword ptr [edi + esi*4 + 0x104], edx
  0x004701D2: call     0x46e720
  0x0046F506: xor      eax, eax
  0x0046F508: add      ecx, 8
  0x0046F50B: mov      al, byte ptr [ebp]
  0x0046F50E: mov      dword ptr [0x3003784], ecx
  0x0046F514: shl      edx, 8
  0x0046F517: or       edx, eax
  0x0046F519: inc      ebp
  0x0046F51A: cmp      ecx, 0x18
  0x0046F51D: mov      dword ptr [0x3003474], edx
  0x0046F523: mov      dword ptr [0x2fff1a0], ebp
  0x0046F529: jle      0x46f506
  0x0046F87F: mov      edx, dword ptr [0x3003474]
  0x0046F885: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F88B: xor      eax, eax
  0x0046F88D: add      ecx, 8
  0x0046F890: mov      al, byte ptr [ebp]
  0x0046F893: mov      dword ptr [0x3003784], ecx
  0x0046F899: shl      edx, 8
  0x0046F89C: or       edx, eax
  0x0046F89E: inc      ebp
  0x0046F89F: cmp      ecx, 0x18
  0x0046F8A2: mov      dword ptr [0x3003474], edx
  0x0046F8A8: mov      dword ptr [0x2fff1a0], ebp
  0x0046F8AE: jle      0x46f88b
  0x0046F940: cmp      ecx, 0x18
  0x0046F943: jg       0x46f9b1
  0x0046F9B1: mov      eax, dword ptr [0x3003474]
  0x0046F9B6: jmp      0x46f978
  0x0046F404: mov      edx, dword ptr [0x3003474]
  0x0046F40A: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F410: xor      eax, eax
  0x0046F412: add      ecx, 8
  0x0046F415: mov      al, byte ptr [ebp]
  0x0046F418: mov      dword ptr [0x3003784], ecx
  0x0046F41E: shl      edx, 8
  0x0046F421: or       edx, eax
  0x0046F423: inc      ebp
  0x0046F424: cmp      ecx, 0x18
  0x0046F427: mov      dword ptr [0x3003474], edx
  0x0046F42D: mov      dword ptr [0x2fff1a0], ebp
  0x0046F433: jle      0x46f410
  0x0046FB1F: sub      eax, 0xfff
  0x0046FB24: push     0xd
  0x0046FB26: imul     eax, dword ptr [ebp]
  0x0046FB2A: sar      eax, 0xc
  0x0046FB2D: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046FB34: call     0x46e720
  0x0046F309: mov      edx, dword ptr [0x3003474]
  0x0046F30F: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F315: xor      eax, eax
  0x0046F317: add      ecx, 8
  0x0046F31A: mov      al, byte ptr [ebp]
  0x0046F31D: mov      dword ptr [0x3003784], ecx
  0x0046F323: shl      edx, 8
  0x0046F326: or       edx, eax
  0x0046F328: inc      ebp
  0x0046F329: cmp      ecx, 0x18
  0x0046F32C: mov      dword ptr [0x3003474], edx
  0x0046F332: mov      dword ptr [0x2fff1a0], ebp
  0x0046F338: jle      0x46f315
  0x0046F20E: mov      edx, dword ptr [0x3003474]
  0x0046F214: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F21A: xor      eax, eax
  0x0046F21C: add      ecx, 8
  0x0046F21F: mov      al, byte ptr [ebp]
  0x0046F222: mov      dword ptr [0x3003784], ecx
  0x0046F228: shl      edx, 8
  0x0046F22B: or       edx, eax
  0x0046F22D: inc      ebp
  0x0046F22E: cmp      ecx, 0x18
  0x0046F231: mov      dword ptr [0x3003474], edx
  0x0046F237: mov      dword ptr [0x2fff1a0], ebp
  0x0046F23D: jle      0x46f21a
  0x0047026F: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470275: sub      eax, 0xff
  0x0047027A: imul     ecx, eax
  0x0047027D: sar      ecx, 8
  0x00470280: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x00470287: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047028D: imul     edx, eax
  0x00470290: add      esp, 0xc
  0x00470293: sar      edx, 8
  0x00470296: jmp      0x4706cc
  0x0046F11F: xor      eax, eax
  0x0046F121: add      ecx, 8
  0x0046F124: mov      al, byte ptr [ebp]
  0x0046F127: mov      dword ptr [0x3003784], ecx
  0x0046F12D: shl      edx, 8
  0x0046F130: or       edx, eax
  0x0046F132: inc      ebp
  0x0046F133: cmp      ecx, 0x18
  0x0046F136: mov      dword ptr [0x3003474], edx
  0x0046F13C: mov      dword ptr [0x2fff1a0], ebp
  0x0046F142: jle      0x46f11f
  0x0046F144: jmp      0x46f14c
  0x00470571: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470577: sub      eax, 0x1fff
  0x0047057C: imul     ecx, eax
  0x0047057F: sar      ecx, 0xd
  0x00470582: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x00470589: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047058F: imul     edx, eax
  0x00470592: add      esp, 0xc
  0x00470595: sar      edx, 0xd
  0x00470598: jmp      0x4706cc
  0x0046FC59: sub      eax, 0x7fff
  0x0046FC5E: add      esp, 0xc
  0x0046FC61: imul     eax, dword ptr [ebp]
  0x0046FC65: sar      eax, 0xf
  0x0046FC68: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046FC6F: jmp      0x4706d4
  0x0046EEB3: xor      eax, eax
  0x0046EEB5: add      ecx, 8
  0x0046EEB8: mov      al, byte ptr [ebp]
  0x0046EEBB: mov      dword ptr [0x3003784], ecx
  0x0046EEC1: shl      edx, 8
  0x0046EEC4: or       edx, eax
  0x0046EEC6: inc      ebp
  0x0046EEC7: cmp      ecx, 0x18
  0x0046EECA: mov      dword ptr [0x3003474], edx
  0x0046EED0: mov      dword ptr [0x2fff1a0], ebp
  0x0046EED6: jle      0x46eeb3
  0x0046EED8: jmp      0x46eee0
  0x00470309: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0047030F: sub      eax, 0x1ff
  0x00470314: imul     ecx, eax
  0x00470317: sar      ecx, 9
  0x0047031A: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x00470321: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470327: imul     edx, eax
  0x0047032A: add      esp, 0xc
  0x0047032D: sar      edx, 9
  0x00470330: jmp      0x4706cc
  0x0046FF87: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0046FF8D: sub      eax, 7
  0x0046FF90: imul     ecx, eax
  0x0046FF93: sar      ecx, 3
  0x0046FF96: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x0046FF9D: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0046FFA3: imul     edx, eax
  0x0046FFA6: add      esp, 0xc
  0x0046FFA9: sar      edx, 3
  0x0046FFAC: jmp      0x4706cc
  0x0047060B: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470611: sub      eax, 0x3fff
  0x00470616: imul     ecx, eax
  0x00470619: sar      ecx, 0xe
  0x0047061C: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x00470623: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470629: imul     edx, eax
  0x0047062C: add      esp, 0xc
  0x0047062F: sar      edx, 0xe
  0x00470632: jmp      0x4706cc
  0x0046F742: xor      eax, eax
  0x0046F744: add      ecx, 8
  0x0046F747: mov      al, byte ptr [ebp]
  0x0046F74A: mov      dword ptr [0x3003784], ecx
  0x0046F750: shl      edx, 8
  0x0046F753: or       edx, eax
  0x0046F755: inc      ebp
  0x0046F756: cmp      ecx, 0x18
  0x0046F759: mov      dword ptr [0x3003474], edx
  0x0046F75F: mov      dword ptr [0x2fff1a0], ebp
  0x0046F765: jle      0x46f742
  0x0046F767: jmp      0x46f76f
  0x0046F7FC: mov      eax, dword ptr [0x3003474]
  0x0046F801: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F807: xor      edx, edx
  0x0046F809: add      ecx, 8
  0x0046F80C: mov      dl, byte ptr [ebp]
  0x0046F80F: mov      dword ptr [0x3003784], ecx
  0x0046F815: shl      eax, 8
  0x0046F818: or       eax, edx
  0x0046F81A: inc      ebp
  0x0046F81B: cmp      ecx, 0x18
  0x0046F81E: mov      dword ptr [0x3003474], eax
  0x0046F823: mov      dword ptr [0x2fff1a0], ebp
  0x0046F829: jle      0x46f807
  0x0046F82F: sub      ecx, 0xa
  0x0046F832: shr      eax, cl
  0x0046F834: mov      dword ptr [0x3003784], ecx
  0x0046F83A: mov      dword ptr [0x3003908], eax
  0x0046F83F: mov      ebp, eax
  0x0046F841: add      eax, 0xfffffe01
  0x0046F846: imul     eax, dword ptr [edx]
  0x0046F849: shl      ebp, cl
  0x0046F84B: mov      ecx, dword ptr [0x3003474]
  0x0046F851: sub      ecx, ebp
  0x0046F853: sar      eax, 9
  0x0046F856: mov      dword ptr [0x3003474], ecx
  0x0046F85C: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F863: jmp      0x4706d4
  0x0047001B: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470021: sub      eax, 0xf
  0x00470024: imul     ecx, eax
  0x00470027: sar      ecx, 4
  0x0047002A: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x00470031: mov      edx, dword ptr [ebp + 0x2fff578]
  0x00470037: imul     edx, eax
  0x0047003A: add      esp, 0xc
  0x0047003D: sar      edx, 4
  0x00470040: jmp      0x4706cc
  0x0046FBF9: sub      eax, 0x3fff
  0x0046FBFE: add      esp, 0xc
  0x0046FC01: imul     eax, dword ptr [ebp]
  0x0046FC05: sar      eax, 0xe
  0x0046FC08: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046FC0F: jmp      0x4706d4
  0x004703A3: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004703A9: sub      eax, 0x3ff
  0x004703AE: imul     ecx, eax
  0x004703B1: sar      ecx, 0xa
  0x004703B4: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x004703BB: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004703C1: imul     edx, eax
  0x004703C4: add      esp, 0xc
  0x004703C7: sar      edx, 0xa
  0x004703CA: jmp      0x4706cc
  0x004706A5: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004706AB: sub      eax, 0x7fff
  0x004706B0: imul     ecx, eax
  0x004706B3: sar      ecx, 0xf
  0x004706B6: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x004706BD: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004706C3: imul     edx, eax
  0x004706C6: add      esp, 0xc
  0x004706C9: sar      edx, 0xf
  0x004706CC: mov      dword ptr [edi + esi*4 + 0x204], edx
  0x004706D3: inc      esi
  0x004706D4: mov      eax, dword ptr [esi*4 + 0x30039e0]
  0x004706DB: inc      esi
  0x004706DC: cmp      eax, 0x25
  0x004706DF: jbe      0x46edc6
  0x0046FA81: mov      eax, dword ptr [0x3003474]
  0x0046FA86: mov      ebp, dword ptr [0x2fff1a0]
  0x0046FA8C: xor      edx, edx
  0x0046FA8E: add      ecx, 8
  0x0046FA91: mov      dl, byte ptr [ebp]
  0x0046FA94: mov      dword ptr [0x3003784], ecx
  0x0046FA9A: shl      eax, 8
  0x0046FA9D: or       eax, edx
  0x0046FA9F: inc      ebp
  0x0046FAA0: cmp      ecx, 0x18
  0x0046FAA3: mov      dword ptr [0x3003474], eax
  0x0046FAA8: mov      dword ptr [0x2fff1a0], ebp
  0x0046FAAE: jle      0x46fa8c
  0x0046FAB4: sub      ecx, 0xc
  0x0046FAB7: shr      eax, cl
  0x0046FAB9: mov      dword ptr [0x3003784], ecx
  0x0046FABF: mov      dword ptr [0x3003908], eax
  0x0046FAC4: mov      ebp, eax
  0x0046FAC6: add      eax, 0xfffff801
  0x0046FACB: imul     eax, dword ptr [edx]
  0x0046FACE: shl      ebp, cl
  0x0046FAD0: mov      ecx, dword ptr [0x3003474]
  0x0046FAD6: sub      ecx, ebp
  0x0046FAD8: sar      eax, 0xb
  0x0046FADB: mov      dword ptr [0x3003474], ecx
  0x0046FAE1: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046FAE8: jmp      0x4706d4
  0x004700AF: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004700B5: sub      eax, 0x1f
  0x004700B8: imul     ecx, eax
  0x004700BB: sar      ecx, 5
  0x004700BE: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x004700C5: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004700CB: imul     edx, eax
  0x004700CE: add      esp, 0xc
  0x004700D1: sar      edx, 5
  0x004700D4: jmp      0x4706cc
  0x0046F063: xor      eax, eax
  0x0046F065: add      ecx, 8
  0x0046F068: mov      al, byte ptr [ebp]
  0x0046F06B: mov      dword ptr [0x3003784], ecx
  0x0046F071: shl      edx, 8
  0x0046F074: or       edx, eax
  0x0046F076: inc      ebp
  0x0046F077: cmp      ecx, 0x18
  0x0046F07A: mov      dword ptr [0x3003474], edx
  0x0046F080: mov      dword ptr [0x2fff1a0], ebp
  0x0046F086: jle      0x46f063
  0x0046F088: jmp      0x46f090
  0x0046EF68: xor      eax, eax
  0x0046EF6A: add      ecx, 8
  0x0046EF6D: mov      al, byte ptr [ebp]
  0x0046EF70: mov      dword ptr [0x3003784], ecx
  0x0046EF76: shl      edx, 8
  0x0046EF79: or       edx, eax
  0x0046EF7B: inc      ebp
  0x0046EF7C: cmp      ecx, 0x18
  0x0046EF7F: mov      dword ptr [0x3003474], edx
  0x0046EF85: mov      dword ptr [0x2fff1a0], ebp
  0x0046EF8B: jle      0x46ef68
  0x0046EF8D: jmp      0x46ef95
  0x0047043D: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470443: sub      eax, 0x7ff
  0x00470448: imul     ecx, eax
  0x0047044B: sar      ecx, 0xb
  0x0047044E: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x00470455: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047045B: imul     edx, eax
  0x0047045E: add      esp, 0xc
  0x00470461: sar      edx, 0xb
  0x00470464: jmp      0x4706cc
  0x0046FB99: sub      eax, 0x1fff
  0x0046FB9E: add      esp, 0xc
  0x0046FBA1: imul     eax, dword ptr [ebp]
  0x0046FBA5: sar      eax, 0xd
  0x0046FBA8: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046FBAF: jmp      0x4706d4
  0x00470143: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x00470149: sub      eax, 0x3f
  0x0047014C: imul     ecx, eax
  0x0047014F: sar      ecx, 6
  0x00470152: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x00470159: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0047015F: imul     edx, eax
  0x00470162: add      esp, 0xc
  0x00470165: sar      edx, 6
  0x00470168: jmp      0x4706cc
  0x0046F5F9: xor      eax, eax
  0x0046F5FB: add      ecx, 8
  0x0046F5FE: mov      al, byte ptr [ebp]
  0x0046F601: mov      dword ptr [0x3003784], ecx
  0x0046F607: shl      edx, 8
  0x0046F60A: or       edx, eax
  0x0046F60C: inc      ebp
  0x0046F60D: cmp      ecx, 0x18
  0x0046F610: mov      dword ptr [0x3003474], edx
  0x0046F616: mov      dword ptr [0x2fff1a0], ebp
  0x0046F61C: jle      0x46f5f9
  0x0046F61E: jmp      0x46f626
  0x0046F6B3: mov      eax, dword ptr [0x3003474]
  0x0046F6B8: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F6BE: xor      edx, edx
  0x0046F6C0: add      ecx, 8
  0x0046F6C3: mov      dl, byte ptr [ebp]
  0x0046F6C6: mov      dword ptr [0x3003784], ecx
  0x0046F6CC: shl      eax, 8
  0x0046F6CF: or       eax, edx
  0x0046F6D1: inc      ebp
  0x0046F6D2: cmp      ecx, 0x18
  0x0046F6D5: mov      dword ptr [0x3003474], eax
  0x0046F6DA: mov      dword ptr [0x2fff1a0], ebp
  0x0046F6E0: jle      0x46f6be
  0x0046F6E6: sub      ecx, 9
  0x0046F6E9: shr      eax, cl
  0x0046F6EB: mov      dword ptr [0x3003784], ecx
  0x0046F6F1: mov      dword ptr [0x3003908], eax
  0x0046F6F6: mov      ebp, eax
  0x0046F6F8: add      eax, 0xffffff01
  0x0046F6FD: imul     eax, dword ptr [edx]
  0x0046F700: shl      ebp, cl
  0x0046F702: mov      ecx, dword ptr [0x3003474]
  0x0046F708: sub      ecx, ebp
  0x0046F70A: sar      eax, 8
  0x0046F70D: mov      dword ptr [0x3003474], ecx
  0x0046F713: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F71A: jmp      0x4706d4
  0x0046FE4C: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x0046FE52: sub      eax, 3
  0x0046FE55: imul     ecx, eax
  0x0046FE58: sar      ecx, 2
  0x0046FE5B: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x0046FE62: mov      edx, dword ptr [ebp + 0x2fff578]
  0x0046FE68: imul     edx, eax
  0x0046FE6B: add      esp, 0xc
  0x0046FE6E: sar      edx, 2
  0x0046FE71: jmp      0x4706cc
  0x0046EE01: xor      eax, eax
  0x0046EE03: add      ecx, 8
  0x0046EE06: mov      al, byte ptr [ebp]
  0x0046EE09: mov      dword ptr [0x3003784], ecx
  0x0046EE0F: shl      edx, 8
  0x0046EE12: or       edx, eax
  0x0046EE14: inc      ebp
  0x0046EE15: cmp      ecx, 0x18
  0x0046EE18: mov      dword ptr [0x3003474], edx
  0x0046EE1E: mov      dword ptr [0x2fff1a0], ebp
  0x0046EE24: jle      0x46ee01
  0x0046EE26: jmp      0x46ee2e
  0x004704D7: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004704DD: sub      eax, 0xfff
  0x004704E2: imul     ecx, eax
  0x004704E5: sar      ecx, 0xc
  0x004704E8: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x004704EF: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004704F5: imul     edx, eax
  0x004704F8: add      esp, 0xc
  0x004704FB: sar      edx, 0xc
  0x004704FE: jmp      0x4706cc
  0x004701D7: mov      ecx, dword ptr [ebp + 0x2fff574]
  0x004701DD: sub      eax, 0x7f
  0x004701E0: imul     ecx, eax
  0x004701E3: sar      ecx, 7
  0x004701E6: mov      dword ptr [edi + esi*4 + 0x200], ecx
  0x004701ED: mov      edx, dword ptr [ebp + 0x2fff578]
  0x004701F3: imul     edx, eax
  0x004701F6: add      esp, 0xc
  0x004701F9: sar      edx, 7
  0x004701FC: jmp      0x4706cc
  0x0046F88B: xor      eax, eax
  0x0046F88D: add      ecx, 8
  0x0046F890: mov      al, byte ptr [ebp]
  0x0046F893: mov      dword ptr [0x3003784], ecx
  0x0046F899: shl      edx, 8
  0x0046F89C: or       edx, eax
  0x0046F89E: inc      ebp
  0x0046F89F: cmp      ecx, 0x18
  0x0046F8A2: mov      dword ptr [0x3003474], edx
  0x0046F8A8: mov      dword ptr [0x2fff1a0], ebp
  0x0046F8AE: jle      0x46f88b
  0x0046F8B0: jmp      0x46f8b8
  0x0046F945: mov      eax, dword ptr [0x3003474]
  0x0046F94A: mov      ebp, dword ptr [0x2fff1a0]
  0x0046F950: xor      edx, edx
  0x0046F952: add      ecx, 8
  0x0046F955: mov      dl, byte ptr [ebp]
  0x0046F958: mov      dword ptr [0x3003784], ecx
  0x0046F95E: shl      eax, 8
  0x0046F961: or       eax, edx
  0x0046F963: inc      ebp
  0x0046F964: cmp      ecx, 0x18
  0x0046F967: mov      dword ptr [0x3003474], eax
  0x0046F96C: mov      dword ptr [0x2fff1a0], ebp
  0x0046F972: jle      0x46f950
  0x0046F978: sub      ecx, 0xb
  0x0046F97B: shr      eax, cl
  0x0046F97D: mov      dword ptr [0x3003784], ecx
  0x0046F983: mov      dword ptr [0x3003908], eax
  0x0046F988: mov      ebp, eax
  0x0046F98A: add      eax, 0xfffffc01
  0x0046F98F: imul     eax, dword ptr [edx]
  0x0046F992: shl      ebp, cl
  0x0046F994: mov      ecx, dword ptr [0x3003474]
  0x0046F99A: sub      ecx, ebp
  0x0046F99C: sar      eax, 0xa
  0x0046F99F: mov      dword ptr [0x3003474], ecx
  0x0046F9A5: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F9AC: jmp      0x4706d4
  0x0046F410: xor      eax, eax
  0x0046F412: add      ecx, 8
  0x0046F415: mov      al, byte ptr [ebp]
  0x0046F418: mov      dword ptr [0x3003784], ecx
  0x0046F41E: shl      edx, 8
  0x0046F421: or       edx, eax
  0x0046F423: inc      ebp
  0x0046F424: cmp      ecx, 0x18
  0x0046F427: mov      dword ptr [0x3003474], edx
  0x0046F42D: mov      dword ptr [0x2fff1a0], ebp
  0x0046F433: jle      0x46f410
  0x0046F435: jmp      0x46f43d
  0x0046FB39: sub      eax, 0xfff
  0x0046FB3E: add      esp, 0xc
  0x0046FB41: imul     eax, dword ptr [ebp]
  0x0046FB45: sar      eax, 0xc
  0x0046FB48: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046FB4F: jmp      0x4706d4
  0x0046F315: xor      eax, eax
  0x0046F317: add      ecx, 8
  0x0046F31A: mov      al, byte ptr [ebp]
  0x0046F31D: mov      dword ptr [0x3003784], ecx
  0x0046F323: shl      edx, 8
  0x0046F326: or       edx, eax
  0x0046F328: inc      ebp
  0x0046F329: cmp      ecx, 0x18
  0x0046F32C: mov      dword ptr [0x3003474], edx
  0x0046F332: mov      dword ptr [0x2fff1a0], ebp
  0x0046F338: jle      0x46f315
  0x0046F33A: jmp      0x46f342
  0x0046F21A: xor      eax, eax
  0x0046F21C: add      ecx, 8
  0x0046F21F: mov      al, byte ptr [ebp]
  0x0046F222: mov      dword ptr [0x3003784], ecx
  0x0046F228: shl      edx, 8
  0x0046F22B: or       edx, eax
  0x0046F22D: inc      ebp
  0x0046F22E: cmp      ecx, 0x18
  0x0046F231: mov      dword ptr [0x3003474], edx
  0x0046F237: mov      dword ptr [0x2fff1a0], ebp
  0x0046F23D: jle      0x46f21a
  0x0046F23F: jmp      0x46f247
  0x004706CC: mov      dword ptr [edi + esi*4 + 0x204], edx
  0x004706D3: inc      esi
  0x004706D4: mov      eax, dword ptr [esi*4 + 0x30039e0]
  0x004706DB: inc      esi
  0x004706DC: cmp      eax, 0x25
  0x004706DF: jbe      0x46edc6
  0x0046F14C: sub      ecx, 4
  0x0046F14F: mov      eax, edx
  0x0046F151: shr      eax, cl
  0x0046F153: mov      dword ptr [0x3003784], ecx
  0x0046F159: mov      ebp, eax
  0x0046F15B: add      eax, -7
  0x0046F15E: shl      ebp, cl
  0x0046F160: mov      ecx, ebx
  0x0046F162: shl      ecx, 6
  0x0046F165: add      ecx, esi
  0x0046F167: sub      edx, ebp
  0x0046F169: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F171: mov      dword ptr [0x3003474], edx
  0x0046F177: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F17E: sar      eax, 3
  0x0046F181: mov      dword ptr [edi + esi*4], eax
  0x0046F184: mov      ecx, dword ptr [0x3003784]
  0x0046F18A: mov      eax, dword ptr [0x3003474]
  0x0046F18F: sub      ecx, 4
  0x0046F192: shr      eax, cl
  0x0046F194: mov      dword ptr [0x3003784], ecx
  0x0046F19A: mov      ebp, eax
  0x0046F19C: add      eax, -7
  0x0046F19F: imul     eax, dword ptr [edx]
  0x0046F1A2: shl      ebp, cl
  0x0046F1A4: mov      ecx, dword ptr [0x3003474]
  0x0046F1AA: sar      eax, 3
  0x0046F1AD: sub      ecx, ebp
  0x0046F1AF: mov      dword ptr [0x3003474], ecx
  0x0046F1B5: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F1BC: mov      ecx, dword ptr [0x3003784]
  0x0046F1C2: mov      eax, dword ptr [0x3003474]
  0x0046F1C7: sub      ecx, 4
  0x0046F1CA: shr      eax, cl
  0x0046F1CC: mov      dword ptr [0x3003784], ecx
  0x0046F1D2: mov      dword ptr [0x3003908], eax
  0x0046F1D7: mov      ebp, eax
  0x0046F1D9: add      eax, -7
  0x0046F1DC: imul     eax, dword ptr [edx]
  0x0046F1DF: shl      ebp, cl
  0x0046F1E1: mov      ecx, dword ptr [0x3003474]
  0x0046F1E7: sub      ecx, ebp
  0x0046F1E9: sar      eax, 3
  0x0046F1EC: mov      dword ptr [0x3003474], ecx
  0x0046F1F2: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F1F9: jmp      0x4706d4
  0x0046EEE0: sub      ecx, 7
  0x0046EEE3: mov      eax, edx
  0x0046EEE5: shr      eax, cl
  0x0046EEE7: mov      dword ptr [0x3003784], ecx
  0x0046EEED: mov      ebp, eax
  0x0046EEEF: mov      dword ptr [0x3003908], eax
  0x0046EEF4: shl      ebp, cl
  0x0046EEF6: mov      ecx, ebx
  0x0046EEF8: lea      eax, [eax + eax*2]
  0x0046EEFB: shl      ecx, 6
  0x0046EEFE: add      ecx, esi
  0x0046EF00: sub      edx, ebp
  0x0046EF02: mov      dword ptr [0x3003474], edx
  0x0046EF08: lea      ecx, [ecx*4 + 0x2fff574]
  0x0046EF0F: movsx    edx, byte ptr [eax + 0x3003788]
  0x0046EF16: imul     edx, dword ptr [ecx]
  0x0046EF19: sar      edx, 2
  0x0046EF1C: mov      dword ptr [edi + esi*4], edx
  0x0046EF1F: movsx    edx, byte ptr [eax + 0x3003789]
  0x0046EF26: imul     edx, dword ptr [ecx]
  0x0046EF29: sar      edx, 2
  0x0046EF2C: mov      dword ptr [edi + esi*4 + 0x100], edx
  0x0046EF33: movsx    eax, byte ptr [eax + 0x300378a]
  0x0046EF3A: imul     eax, dword ptr [ecx]
  0x0046EF3D: sar      eax, 2
  0x0046EF40: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046EF47: jmp      0x4706d4
  0x0046F76F: sub      ecx, 0xa
  0x0046F772: mov      eax, edx
  0x0046F774: shr      eax, cl
  0x0046F776: mov      dword ptr [0x3003784], ecx
  0x0046F77C: mov      ebp, eax
  0x0046F77E: add      eax, 0xfffffe01
  0x0046F783: shl      ebp, cl
  0x0046F785: mov      ecx, ebx
  0x0046F787: shl      ecx, 6
  0x0046F78A: add      ecx, esi
  0x0046F78C: sub      edx, ebp
  0x0046F78E: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F796: mov      dword ptr [0x3003474], edx
  0x0046F79C: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F7A3: sar      eax, 9
  0x0046F7A6: mov      dword ptr [edi + esi*4], eax
  0x0046F7A9: mov      ecx, dword ptr [0x3003784]
  0x0046F7AF: mov      eax, dword ptr [0x3003474]
  0x0046F7B4: sub      ecx, 0xa
  0x0046F7B7: shr      eax, cl
  0x0046F7B9: mov      dword ptr [0x3003784], ecx
  0x0046F7BF: mov      dword ptr [esp + 0x10], edx
  0x0046F7C3: mov      dword ptr [0x3003908], eax
  0x0046F7C8: mov      ebp, eax
  0x0046F7CA: add      eax, 0xfffffe01
  0x0046F7CF: imul     eax, dword ptr [edx]
  0x0046F7D2: shl      ebp, cl
  0x0046F7D4: mov      ecx, dword ptr [0x3003474]
  0x0046F7DA: sar      eax, 9
  0x0046F7DD: sub      ecx, ebp
  0x0046F7DF: mov      dword ptr [0x3003474], ecx
  0x0046F7E5: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F7EC: mov      ecx, dword ptr [0x3003784]
  0x0046F7F2: cmp      ecx, 0xa
  0x0046F7F5: jge      0x46f868
  0x0046F807: xor      edx, edx
  0x0046F809: add      ecx, 8
  0x0046F80C: mov      dl, byte ptr [ebp]
  0x0046F80F: mov      dword ptr [0x3003784], ecx
  0x0046F815: shl      eax, 8
  0x0046F818: or       eax, edx
  0x0046F81A: inc      ebp
  0x0046F81B: cmp      ecx, 0x18
  0x0046F81E: mov      dword ptr [0x3003474], eax
  0x0046F823: mov      dword ptr [0x2fff1a0], ebp
  0x0046F829: jle      0x46f807
  0x0046F82B: mov      edx, dword ptr [esp + 0x10]
  0x0046F82F: sub      ecx, 0xa
  0x0046F832: shr      eax, cl
  0x0046F834: mov      dword ptr [0x3003784], ecx
  0x0046F83A: mov      dword ptr [0x3003908], eax
  0x0046F83F: mov      ebp, eax
  0x0046F841: add      eax, 0xfffffe01
  0x0046F846: imul     eax, dword ptr [edx]
  0x0046F849: shl      ebp, cl
  0x0046F84B: mov      ecx, dword ptr [0x3003474]
  0x0046F851: sub      ecx, ebp
  0x0046F853: sar      eax, 9
  0x0046F856: mov      dword ptr [0x3003474], ecx
  0x0046F85C: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F863: jmp      0x4706d4
  0x0046FA8C: xor      edx, edx
  0x0046FA8E: add      ecx, 8
  0x0046FA91: mov      dl, byte ptr [ebp]
  0x0046FA94: mov      dword ptr [0x3003784], ecx
  0x0046FA9A: shl      eax, 8
  0x0046FA9D: or       eax, edx
  0x0046FA9F: inc      ebp
  0x0046FAA0: cmp      ecx, 0x18
  0x0046FAA3: mov      dword ptr [0x3003474], eax
  0x0046FAA8: mov      dword ptr [0x2fff1a0], ebp
  0x0046FAAE: jle      0x46fa8c
  0x0046FAB0: mov      edx, dword ptr [esp + 0x10]
  0x0046FAB4: sub      ecx, 0xc
  0x0046FAB7: shr      eax, cl
  0x0046FAB9: mov      dword ptr [0x3003784], ecx
  0x0046FABF: mov      dword ptr [0x3003908], eax
  0x0046FAC4: mov      ebp, eax
  0x0046FAC6: add      eax, 0xfffff801
  0x0046FACB: imul     eax, dword ptr [edx]
  0x0046FACE: shl      ebp, cl
  0x0046FAD0: mov      ecx, dword ptr [0x3003474]
  0x0046FAD6: sub      ecx, ebp
  0x0046FAD8: sar      eax, 0xb
  0x0046FADB: mov      dword ptr [0x3003474], ecx
  0x0046FAE1: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046FAE8: jmp      0x4706d4
  0x0046F090: sub      ecx, 0xa
  0x0046F093: mov      eax, edx
  0x0046F095: shr      eax, cl
  0x0046F097: mov      dword ptr [0x3003784], ecx
  0x0046F09D: mov      ebp, eax
  0x0046F09F: mov      dword ptr [0x3003908], eax
  0x0046F0A4: shl      ebp, cl
  0x0046F0A6: mov      ecx, ebx
  0x0046F0A8: lea      eax, [eax + eax*2]
  0x0046F0AB: shl      ecx, 6
  0x0046F0AE: shl      eax, 1
  0x0046F0B0: sub      edx, ebp
  0x0046F0B2: add      ecx, esi
  0x0046F0B4: mov      dword ptr [0x3003474], edx
  0x0046F0BA: movsx    edx, word ptr [eax + 0x2fff874]
  0x0046F0C1: imul     edx, dword ptr [ecx*4 + 0x2fff574]
  0x0046F0C9: lea      ecx, [ecx*4 + 0x2fff574]
  0x0046F0D0: sar      edx, 3
  0x0046F0D3: mov      dword ptr [edi + esi*4], edx
  0x0046F0D6: movsx    edx, word ptr [eax + 0x2fff876]
  0x0046F0DD: imul     edx, dword ptr [ecx]
  0x0046F0E0: sar      edx, 3
  0x0046F0E3: mov      dword ptr [edi + esi*4 + 0x100], edx
  0x0046F0EA: movsx    eax, word ptr [eax + 0x2fff878]
  0x0046F0F1: imul     eax, dword ptr [ecx]
  0x0046F0F4: sar      eax, 3
  0x0046F0F7: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F0FE: jmp      0x4706d4
  0x0046EF95: sub      ecx, 3
  0x0046EF98: mov      eax, edx
  0x0046EF9A: shr      eax, cl
  0x0046EF9C: mov      dword ptr [0x3003784], ecx
  0x0046EFA2: mov      ebp, eax
  0x0046EFA4: add      eax, -3
  0x0046EFA7: shl      ebp, cl
  0x0046EFA9: mov      ecx, ebx
  0x0046EFAB: shl      ecx, 6
  0x0046EFAE: add      ecx, esi
  0x0046EFB0: sub      edx, ebp
  0x0046EFB2: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046EFBA: mov      dword ptr [0x3003474], edx
  0x0046EFC0: lea      edx, [ecx*4 + 0x2fff574]
  0x0046EFC7: sar      eax, 2
  0x0046EFCA: mov      dword ptr [edi + esi*4], eax
  0x0046EFCD: mov      ecx, dword ptr [0x3003784]
  0x0046EFD3: mov      eax, dword ptr [0x3003474]
  0x0046EFD8: sub      ecx, 3
  0x0046EFDB: shr      eax, cl
  0x0046EFDD: mov      dword ptr [0x3003784], ecx
  0x0046EFE3: mov      ebp, eax
  0x0046EFE5: add      eax, -3
  0x0046EFE8: imul     eax, dword ptr [edx]
  0x0046EFEB: shl      ebp, cl
  0x0046EFED: mov      ecx, dword ptr [0x3003474]
  0x0046EFF3: sar      eax, 2
  0x0046EFF6: sub      ecx, ebp
  0x0046EFF8: mov      dword ptr [0x3003474], ecx
  0x0046EFFE: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F005: mov      ecx, dword ptr [0x3003784]
  0x0046F00B: mov      eax, dword ptr [0x3003474]
  0x0046F010: sub      ecx, 3
  0x0046F013: shr      eax, cl
  0x0046F015: mov      dword ptr [0x3003784], ecx
  0x0046F01B: mov      dword ptr [0x3003908], eax
  0x0046F020: mov      ebp, eax
  0x0046F022: add      eax, -3
  0x0046F025: imul     eax, dword ptr [edx]
  0x0046F028: shl      ebp, cl
  0x0046F02A: mov      ecx, dword ptr [0x3003474]
  0x0046F030: sub      ecx, ebp
  0x0046F032: sar      eax, 2
  0x0046F035: mov      dword ptr [0x3003474], ecx
  0x0046F03B: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F042: jmp      0x4706d4
  0x0046F626: sub      ecx, 9
  0x0046F629: mov      eax, edx
  0x0046F62B: shr      eax, cl
  0x0046F62D: mov      dword ptr [0x3003784], ecx
  0x0046F633: mov      ebp, eax
  0x0046F635: add      eax, 0xffffff01
  0x0046F63A: shl      ebp, cl
  0x0046F63C: mov      ecx, ebx
  0x0046F63E: shl      ecx, 6
  0x0046F641: add      ecx, esi
  0x0046F643: sub      edx, ebp
  0x0046F645: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F64D: mov      dword ptr [0x3003474], edx
  0x0046F653: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F65A: sar      eax, 8
  0x0046F65D: mov      dword ptr [edi + esi*4], eax
  0x0046F660: mov      ecx, dword ptr [0x3003784]
  0x0046F666: mov      eax, dword ptr [0x3003474]
  0x0046F66B: sub      ecx, 9
  0x0046F66E: shr      eax, cl
  0x0046F670: mov      dword ptr [0x3003784], ecx
  0x0046F676: mov      dword ptr [esp + 0x10], edx
  0x0046F67A: mov      dword ptr [0x3003908], eax
  0x0046F67F: mov      ebp, eax
  0x0046F681: add      eax, 0xffffff01
  0x0046F686: imul     eax, dword ptr [edx]
  0x0046F689: shl      ebp, cl
  0x0046F68B: mov      ecx, dword ptr [0x3003474]
  0x0046F691: sar      eax, 8
  0x0046F694: sub      ecx, ebp
  0x0046F696: mov      dword ptr [0x3003474], ecx
  0x0046F69C: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F6A3: mov      ecx, dword ptr [0x3003784]
  0x0046F6A9: cmp      ecx, 9
  0x0046F6AC: jge      0x46f71f
  0x0046F6BE: xor      edx, edx
  0x0046F6C0: add      ecx, 8
  0x0046F6C3: mov      dl, byte ptr [ebp]
  0x0046F6C6: mov      dword ptr [0x3003784], ecx
  0x0046F6CC: shl      eax, 8
  0x0046F6CF: or       eax, edx
  0x0046F6D1: inc      ebp
  0x0046F6D2: cmp      ecx, 0x18
  0x0046F6D5: mov      dword ptr [0x3003474], eax
  0x0046F6DA: mov      dword ptr [0x2fff1a0], ebp
  0x0046F6E0: jle      0x46f6be
  0x0046F6E2: mov      edx, dword ptr [esp + 0x10]
  0x0046F6E6: sub      ecx, 9
  0x0046F6E9: shr      eax, cl
  0x0046F6EB: mov      dword ptr [0x3003784], ecx
  0x0046F6F1: mov      dword ptr [0x3003908], eax
  0x0046F6F6: mov      ebp, eax
  0x0046F6F8: add      eax, 0xffffff01
  0x0046F6FD: imul     eax, dword ptr [edx]
  0x0046F700: shl      ebp, cl
  0x0046F702: mov      ecx, dword ptr [0x3003474]
  0x0046F708: sub      ecx, ebp
  0x0046F70A: sar      eax, 8
  0x0046F70D: mov      dword ptr [0x3003474], ecx
  0x0046F713: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F71A: jmp      0x4706d4
  0x0046EE2E: sub      ecx, 5
  0x0046EE31: mov      eax, edx
  0x0046EE33: shr      eax, cl
  0x0046EE35: mov      dword ptr [0x3003784], ecx
  0x0046EE3B: mov      ebp, eax
  0x0046EE3D: mov      dword ptr [0x3003908], eax
  0x0046EE42: shl      ebp, cl
  0x0046EE44: mov      ecx, ebx
  0x0046EE46: lea      eax, [eax + eax*2]
  0x0046EE49: shl      ecx, 6
  0x0046EE4C: add      ecx, esi
  0x0046EE4E: sub      edx, ebp
  0x0046EE50: mov      dword ptr [0x3003474], edx
  0x0046EE56: lea      ecx, [ecx*4 + 0x2fff574]
  0x0046EE5D: movsx    edx, byte ptr [eax + 0x2fff4c0]
  0x0046EE64: imul     edx, dword ptr [ecx]
  0x0046EE67: sar      edx, 1
  0x0046EE69: mov      dword ptr [edi + esi*4], edx
  0x0046EE6C: movsx    edx, byte ptr [eax + 0x2fff4c1]
  0x0046EE73: imul     edx, dword ptr [ecx]
  0x0046EE76: sar      edx, 1
  0x0046EE78: mov      dword ptr [edi + esi*4 + 0x100], edx
  0x0046EE7F: movsx    eax, byte ptr [eax + 0x2fff4c2]
  0x0046EE86: imul     eax, dword ptr [ecx]
  0x0046EE89: sar      eax, 1
  0x0046EE8B: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046EE92: jmp      0x4706d4
  0x0046F8B8: sub      ecx, 0xb
  0x0046F8BB: mov      eax, edx
  0x0046F8BD: shr      eax, cl
  0x0046F8BF: mov      dword ptr [0x3003784], ecx
  0x0046F8C5: mov      ebp, eax
  0x0046F8C7: add      eax, 0xfffffc01
  0x0046F8CC: shl      ebp, cl
  0x0046F8CE: mov      ecx, ebx
  0x0046F8D0: shl      ecx, 6
  0x0046F8D3: add      ecx, esi
  0x0046F8D5: sub      edx, ebp
  0x0046F8D7: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F8DF: mov      dword ptr [0x3003474], edx
  0x0046F8E5: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F8EC: sar      eax, 0xa
  0x0046F8EF: mov      dword ptr [edi + esi*4], eax
  0x0046F8F2: mov      ecx, dword ptr [0x3003784]
  0x0046F8F8: mov      eax, dword ptr [0x3003474]
  0x0046F8FD: sub      ecx, 0xb
  0x0046F900: shr      eax, cl
  0x0046F902: mov      dword ptr [0x3003784], ecx
  0x0046F908: mov      dword ptr [esp + 0x10], edx
  0x0046F90C: mov      dword ptr [0x3003908], eax
  0x0046F911: mov      ebp, eax
  0x0046F913: add      eax, 0xfffffc01
  0x0046F918: imul     eax, dword ptr [edx]
  0x0046F91B: shl      ebp, cl
  0x0046F91D: mov      ecx, dword ptr [0x3003474]
  0x0046F923: sar      eax, 0xa
  0x0046F926: sub      ecx, ebp
  0x0046F928: mov      dword ptr [0x3003474], ecx
  0x0046F92E: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F935: mov      ecx, dword ptr [0x3003784]
  0x0046F93B: cmp      ecx, 0xb
  0x0046F93E: jge      0x46f9b1
  0x0046F950: xor      edx, edx
  0x0046F952: add      ecx, 8
  0x0046F955: mov      dl, byte ptr [ebp]
  0x0046F958: mov      dword ptr [0x3003784], ecx
  0x0046F95E: shl      eax, 8
  0x0046F961: or       eax, edx
  0x0046F963: inc      ebp
  0x0046F964: cmp      ecx, 0x18
  0x0046F967: mov      dword ptr [0x3003474], eax
  0x0046F96C: mov      dword ptr [0x2fff1a0], ebp
  0x0046F972: jle      0x46f950
  0x0046F974: mov      edx, dword ptr [esp + 0x10]
  0x0046F978: sub      ecx, 0xb
  0x0046F97B: shr      eax, cl
  0x0046F97D: mov      dword ptr [0x3003784], ecx
  0x0046F983: mov      dword ptr [0x3003908], eax
  0x0046F988: mov      ebp, eax
  0x0046F98A: add      eax, 0xfffffc01
  0x0046F98F: imul     eax, dword ptr [edx]
  0x0046F992: shl      ebp, cl
  0x0046F994: mov      ecx, dword ptr [0x3003474]
  0x0046F99A: sub      ecx, ebp
  0x0046F99C: sar      eax, 0xa
  0x0046F99F: mov      dword ptr [0x3003474], ecx
  0x0046F9A5: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F9AC: jmp      0x4706d4
  0x0046F43D: sub      ecx, 7
  0x0046F440: mov      eax, edx
  0x0046F442: shr      eax, cl
  0x0046F444: mov      dword ptr [0x3003784], ecx
  0x0046F44A: mov      ebp, eax
  0x0046F44C: add      eax, -0x3f
  0x0046F44F: shl      ebp, cl
  0x0046F451: mov      ecx, ebx
  0x0046F453: shl      ecx, 6
  0x0046F456: add      ecx, esi
  0x0046F458: sub      edx, ebp
  0x0046F45A: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F462: mov      dword ptr [0x3003474], edx
  0x0046F468: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F46F: sar      eax, 6
  0x0046F472: mov      dword ptr [edi + esi*4], eax
  0x0046F475: mov      ecx, dword ptr [0x3003784]
  0x0046F47B: mov      eax, dword ptr [0x3003474]
  0x0046F480: sub      ecx, 7
  0x0046F483: shr      eax, cl
  0x0046F485: mov      dword ptr [0x3003784], ecx
  0x0046F48B: mov      ebp, eax
  0x0046F48D: add      eax, -0x3f
  0x0046F490: imul     eax, dword ptr [edx]
  0x0046F493: shl      ebp, cl
  0x0046F495: mov      ecx, dword ptr [0x3003474]
  0x0046F49B: sar      eax, 6
  0x0046F49E: sub      ecx, ebp
  0x0046F4A0: mov      dword ptr [0x3003474], ecx
  0x0046F4A6: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F4AD: mov      ecx, dword ptr [0x3003784]
  0x0046F4B3: mov      eax, dword ptr [0x3003474]
  0x0046F4B8: sub      ecx, 7
  0x0046F4BB: shr      eax, cl
  0x0046F4BD: mov      dword ptr [0x3003784], ecx
  0x0046F4C3: mov      dword ptr [0x3003908], eax
  0x0046F4C8: mov      ebp, eax
  0x0046F4CA: add      eax, -0x3f
  0x0046F4CD: imul     eax, dword ptr [edx]
  0x0046F4D0: shl      ebp, cl
  0x0046F4D2: mov      ecx, dword ptr [0x3003474]
  0x0046F4D8: sub      ecx, ebp
  0x0046F4DA: sar      eax, 6
  0x0046F4DD: mov      dword ptr [0x3003474], ecx
  0x0046F4E3: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F4EA: jmp      0x4706d4
  0x0046F342: sub      ecx, 6
  0x0046F345: mov      eax, edx
  0x0046F347: shr      eax, cl
  0x0046F349: mov      dword ptr [0x3003784], ecx
  0x0046F34F: mov      ebp, eax
  0x0046F351: add      eax, -0x1f
  0x0046F354: shl      ebp, cl
  0x0046F356: mov      ecx, ebx
  0x0046F358: shl      ecx, 6
  0x0046F35B: add      ecx, esi
  0x0046F35D: sub      edx, ebp
  0x0046F35F: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F367: mov      dword ptr [0x3003474], edx
  0x0046F36D: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F374: sar      eax, 5
  0x0046F377: mov      dword ptr [edi + esi*4], eax
  0x0046F37A: mov      ecx, dword ptr [0x3003784]
  0x0046F380: mov      eax, dword ptr [0x3003474]
  0x0046F385: sub      ecx, 6
  0x0046F388: shr      eax, cl
  0x0046F38A: mov      dword ptr [0x3003784], ecx
  0x0046F390: mov      ebp, eax
  0x0046F392: add      eax, -0x1f
  0x0046F395: imul     eax, dword ptr [edx]
  0x0046F398: shl      ebp, cl
  0x0046F39A: mov      ecx, dword ptr [0x3003474]
  0x0046F3A0: sar      eax, 5
  0x0046F3A3: sub      ecx, ebp
  0x0046F3A5: mov      dword ptr [0x3003474], ecx
  0x0046F3AB: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F3B2: mov      ecx, dword ptr [0x3003784]
  0x0046F3B8: mov      eax, dword ptr [0x3003474]
  0x0046F3BD: sub      ecx, 6
  0x0046F3C0: shr      eax, cl
  0x0046F3C2: mov      dword ptr [0x3003784], ecx
  0x0046F3C8: mov      dword ptr [0x3003908], eax
  0x0046F3CD: mov      ebp, eax
  0x0046F3CF: add      eax, -0x1f
  0x0046F3D2: imul     eax, dword ptr [edx]
  0x0046F3D5: shl      ebp, cl
  0x0046F3D7: mov      ecx, dword ptr [0x3003474]
  0x0046F3DD: sub      ecx, ebp
  0x0046F3DF: sar      eax, 5
  0x0046F3E2: mov      dword ptr [0x3003474], ecx
  0x0046F3E8: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F3EF: jmp      0x4706d4
  0x0046F247: sub      ecx, 5
  0x0046F24A: mov      eax, edx
  0x0046F24C: shr      eax, cl
  0x0046F24E: mov      dword ptr [0x3003784], ecx
  0x0046F254: mov      ebp, eax
  0x0046F256: add      eax, -0xf
  0x0046F259: shl      ebp, cl
  0x0046F25B: mov      ecx, ebx
  0x0046F25D: shl      ecx, 6
  0x0046F260: add      ecx, esi
  0x0046F262: sub      edx, ebp
  0x0046F264: imul     eax, dword ptr [ecx*4 + 0x2fff574]
  0x0046F26C: mov      dword ptr [0x3003474], edx
  0x0046F272: lea      edx, [ecx*4 + 0x2fff574]
  0x0046F279: sar      eax, 4
  0x0046F27C: mov      dword ptr [edi + esi*4], eax
  0x0046F27F: mov      ecx, dword ptr [0x3003784]
  0x0046F285: mov      eax, dword ptr [0x3003474]
  0x0046F28A: sub      ecx, 5
  0x0046F28D: shr      eax, cl
  0x0046F28F: mov      dword ptr [0x3003784], ecx
  0x0046F295: mov      ebp, eax
  0x0046F297: add      eax, -0xf
  0x0046F29A: imul     eax, dword ptr [edx]
  0x0046F29D: shl      ebp, cl
  0x0046F29F: mov      ecx, dword ptr [0x3003474]
  0x0046F2A5: sar      eax, 4
  0x0046F2A8: sub      ecx, ebp
  0x0046F2AA: mov      dword ptr [0x3003474], ecx
  0x0046F2B0: mov      dword ptr [edi + esi*4 + 0x100], eax
  0x0046F2B7: mov      ecx, dword ptr [0x3003784]
  0x0046F2BD: mov      eax, dword ptr [0x3003474]
  0x0046F2C2: sub      ecx, 5
  0x0046F2C5: shr      eax, cl
  0x0046F2C7: mov      dword ptr [0x3003784], ecx
  0x0046F2CD: mov      dword ptr [0x3003908], eax
  0x0046F2D2: mov      ebp, eax
  0x0046F2D4: add      eax, -0xf
  0x0046F2D7: imul     eax, dword ptr [edx]
  0x0046F2DA: shl      ebp, cl
  0x0046F2DC: mov      ecx, dword ptr [0x3003474]
  0x0046F2E2: sub      ecx, ebp
  0x0046F2E4: sar      eax, 4
  0x0046F2E7: mov      dword ptr [0x3003474], ecx
  0x0046F2ED: mov      dword ptr [edi + esi*4 + 0x200], eax
  0x0046F2F4: jmp      0x4706d4

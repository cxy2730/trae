/**
 * Function: sub_42d420
 * Address: 0x0042D420
 * Blocks: 175
 * Instructions: 835
 * Analyzed with angr + capstone
 */
void* sub_42d420(void) {

  /* Block 1 @ 0x0042D420 */
  // push -1
  // push 0x4a007a
  // mov eax, dword ptr fs:[0]
  // push eax
  // mov dword ptr fs:[0], esp
  // sub esp, 0xb4
  // push ebx
  // push ebp
  // push esi
  // mov ebp, ecx
  // push edi
  // mov dword ptr [esp + 0x20], ebp
  // call 0x0042A650
  call(0x0042A650);
  /* Block 2 @ 0x0042D44A */
  // TEST eax, eax (set flags)
  // mov dword ptr [esp + 0x24], eax
  // if (equal) goto 0x42dd38
  /* Block 3 @ 0x0042DD38 */
  // mov ecx, dword ptr [esp + 0xc4]
  // pop edi
  // pop esi
  // pop ebp
  // pop ebx
  // mov dword ptr fs:[0], ecx
  // add esp, 0xc0
  return;
  /* Block 4 @ 0x0042D456 */
  // mov eax, dword ptr [esp + 0xe8]
  // xor edx, edx
  // mov ecx, eax
  // mov edi, dword ptr [esp + 0xe4]
  // and ecx, 0x1e
  // mov ebx, dword ptr [esp + 0xe0]
  // CMP ecx, eax (set flags)
  // sete dl
  // mov esi, edx
  // TEST esi, esi (set flags)
  // if (not equal) goto 0x42d4a5
  /* Block 5 @ 0x0042D47D */
  // push edi
  // push ebx
  // mov ecx, ebp
  // call 0x0042E310
  call(0x0042E310);
  /* Block 6 @ 0x0042D4A5 */
  // lea ecx, [esp + 0x88]
  // call 0x00429700
  call(0x00429700);
  /* Block 7 @ 0x0042D486 */
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x42d4a5
  /* Block 8 @ 0x0042D4B1 */
  // mov ecx, dword ptr [esp + 0x24]
  // push 1
  // push edi
  // lea eax, [esp + 0x90]
  // push ebx
  // push eax
  // mov dword ptr [esp + 0xdc], 0
  // call 0x00427A00
  call(0x00427A00);
  /* Block 9 @ 0x0042D48A */
  // mov eax, dword ptr [esp + 0xf0]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x42dd38
  /* Block 10 @ 0x0042D4D1 */
  // CMP esi, 1 (set flags)
  // push edi
  // if (not equal) goto 0x42d4f0
  /* Block 11 @ 0x0042D499 */
  // push eax
  // call dword ptr [0x4a247c]
  call(dword ptr [0x4a247c]);
  /* Block 12 @ 0x0042D4D7 */
  // mov ecx, ebp
  // call 0x0042A180
  call(0x0042A180);
  /* Block 13 @ 0x0042D4F0 */
  // lea ecx, [esp + 0x1c]
  // push ebx
  // push ecx
  // mov ecx, ebp
  // call 0x0042E0A0
  call(0x0042E0A0);
  /* Block 14 @ 0x0042D4A0 */
  goto 0x42dd38;
  /* Block 15 @ 0x0042D4DE */
  // push ebx
  // mov ecx, ebp
  // mov dword ptr [esp + 0x30], eax
  // call 0x0042A0A0
  call(0x0042A0A0);
  /* Block 16 @ 0x0042D4FD */
  // mov edx, eax
  // mov eax, dword ptr [edx]
  // mov ecx, dword ptr [edx + 4]
  // mov dword ptr [esp + 0x2c], eax
  // mov dword ptr [esp + 0x30], ecx
  // lea ecx, [esp + 0x88]
  // call 0x004297E0
  call(0x004297E0);
  /* Block 17 @ 0x0042D4EA */
  // mov dword ptr [esp + 0x30], eax
  goto 0x42d50c;
  /* Block 18 @ 0x0042D518 */
  // mov edi, eax
  // lea ecx, [esp + 0x88]
  // mov dword ptr [esp + 0x44], eax
  // and edi, 0xf
  // call 0x00429830
  call(0x00429830);
  // lea ecx, [esp + 0x88]
  // call 0x004297E0
  call(0x004297E0);
  /* Block 19 @ 0x0042D52D */
  // mov ebx, dword ptr [esp + 0xdc]
  // mov edx, dword ptr [esp + 0xd8]
  // mov ecx, dword ptr [esp + 0x2c]
  // mov dword ptr [esp + 0x48], eax
  // mov eax, dword ptr [esp + 0x30]
  // add ecx, edx
  // add eax, ebx
  // mov esi, ebx
  // mov ebp, eax
  // mov eax, dword ptr [esp + 0xf0]
  // TEST eax, eax (set flags)
  // mov dword ptr [esp + 0x34], edx
  // mov dword ptr [esp + 0x38], esi
  // mov dword ptr [esp + 0x3c], ecx
  // mov dword ptr [esp + 0x40], ebp
  // if (equal) goto 0x42d575
  /* Block 20 @ 0x0042D575 */
  // lea ecx, [esp + 0x88]
  // call 0x00427C00
  call(0x00427C00);
  /* Block 21 @ 0x0042D56A */
  // mov dword ptr [eax], edx
  // mov dword ptr [eax + 4], esi
  // mov dword ptr [eax + 8], ecx
  // mov dword ptr [eax + 0xc], ebp
  // lea ecx, [esp + 0x88]
  // call 0x00427C00
  call(0x00427C00);
  /* Block 22 @ 0x0042D581 */
  // mov ebp, eax
  // CMP ebp, 0xff000000 (set flags)
  // mov dword ptr [esp + 0x14], ebp
  // if (not equal) goto 0x42d59a
  /* Block 23 @ 0x0042D58F */
  // mov edx, dword ptr [esp + 0x20]
  // mov ebp, dword ptr [edx + 0x40]
  // mov dword ptr [esp + 0x14], ebp
  // mov eax, dword ptr [esp + 0x20]
  // mov ecx, dword ptr [eax + 0x6c]
  // TEST ecx, ecx (set flags)
  // if (not equal) goto 0x42d5d7
  // mov eax, dword ptr [esp + 0x20]
  // mov ecx, dword ptr [eax + 0x6c]
  // TEST ecx, ecx (set flags)
  // if (not equal) goto 0x42d5d7
  /* Block 24 @ 0x0042D5A5 */
  // mov esi, dword ptr [esp + 0x24]
  // mov ecx, esi
  // call 0x004279E0
  call(0x004279E0);
  /* Block 25 @ 0x0042D5D7 */
  // mov al, byte ptr [esp + 0xe8]
  // mov esi, dword ptr [esp + 0xd4]
  // TEST al, 0x20 (set flags)
  // if (equal) goto 0x42d672
  /* Block 26 @ 0x0042D5B0 */
  // CMP dword ptr [esp + 0xe0], eax (set flags)
  // if (less) goto 0x42d5c9
  /* Block 27 @ 0x0042D672 */
  // TEST byte ptr [esp + 0xe8], 1 (set flags)
  // if (equal) goto 0x42dcec
  /* Block 28 @ 0x0042D5ED */
  // mov eax, dword ptr [esp + 0x3c]
  // mov ecx, dword ptr [esp + 0x34]
  // mov edx, dword ptr [esp + 0x38]
  // mov dword ptr [esp + 0x5c], eax
  // mov eax, dword ptr [esp + 0xec]
  // mov dword ptr [esp + 0x54], ecx
  // mov ecx, dword ptr [esp + 0x40]
  // mov dword ptr [esp + 0x58], edx
  // TEST eax, eax (set flags)
  // mov dword ptr [esp + 0x60], ecx
  // if (equal) goto 0x42d629
  /* Block 29 @ 0x0042D5C9 */
  // push 0xf
  // call dword ptr [0x4a2500]
  call(dword ptr [0x4a2500]);
  /* Block 30 @ 0x0042D5B9 */
  // mov ecx, esi
  // call 0x004279F0
  call(0x004279F0);
  /* Block 31 @ 0x0042DCEC */
  // mov ebp, dword ptr [esp + 0xd8]
  // mov eax, dword ptr [esp + 0x44]
  // mov ecx, dword ptr [esp + 0xe8]
  // push eax
  // mov eax, dword ptr [esp + 0xe8]
  // lea edx, [esp + 0x30]
  // push ecx
  // mov ecx, dword ptr [esp + 0xe8]
  // push edx
  // push eax
  // push ecx
  // mov ecx, dword ptr [esp + 0x34]
  // push ebx
  // push ebp
  // push esi
  // call 0x0042DD60
  call(0x0042DD60);
  /* Block 32 @ 0x0042D680 */
  // lea ecx, [esp + 0x88]
  // call 0x004297B0
  call(0x004297B0);
  /* Block 33 @ 0x0042D629 */
  // push ebp
  // lea ecx, [esp + 0x1c]
  // call 0x00499EDA
  call(0x00499EDA);
  /* Block 34 @ 0x0042D618 */
  // push eax
  // lea edx, [esp + 0x58]
  // lea eax, [esp + 0x58]
  // push edx
  // push eax
  // call dword ptr [0x4a24c8]
  call(dword ptr [0x4a24c8]);
  /* Block 35 @ 0x0042D5D1 */
  // mov ebp, eax
  // mov dword ptr [esp + 0x14], ebp
  // mov al, byte ptr [esp + 0xe8]
  // mov esi, dword ptr [esp + 0xd4]
  // TEST al, 0x20 (set flags)
  // if (equal) goto 0x42d672
  /* Block 36 @ 0x0042D5C0 */
  // CMP dword ptr [esp + 0xe4], eax (set flags)
  // if (greater or equal) goto 0x42d5d7
  /* Block 37 @ 0x0042DD21 */
  // lea ecx, [esp + 0x88]
  // mov dword ptr [esp + 0xcc], 0xffffffff
  // call 0x00429730
  call(0x00429730);
  /* Block 38 @ 0x0042D68C */
  // TEST eax, eax (set flags)
  // if (not equal) goto 0x42d95b
  /* Block 39 @ 0x0042D633 */
  // mov ecx, dword ptr [esp + 0x1c]
  // lea eax, [esp + 0x18]
  // mov edx, dword ptr [esi + 4]
  // and eax, ecx
  // lea ecx, [esp + 0x54]
  // push eax
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x0042D420: push     -1
  0x0042D422: push     0x4a007a
  0x0042D427: mov      eax, dword ptr fs:[0]
  0x0042D42D: push     eax
  0x0042D42E: mov      dword ptr fs:[0], esp
  0x0042D435: sub      esp, 0xb4
  0x0042D43B: push     ebx
  0x0042D43C: push     ebp
  0x0042D43D: push     esi
  0x0042D43E: mov      ebp, ecx
  0x0042D440: push     edi
  0x0042D441: mov      dword ptr [esp + 0x20], ebp
  0x0042D445: call     0x42a650
  0x0042D44A: test     eax, eax
  0x0042D44C: mov      dword ptr [esp + 0x24], eax
  0x0042D450: je       0x42dd38
  0x0042DD38: mov      ecx, dword ptr [esp + 0xc4]
  0x0042DD3F: pop      edi
  0x0042DD40: pop      esi
  0x0042DD41: pop      ebp
  0x0042DD42: pop      ebx
  0x0042DD43: mov      dword ptr fs:[0], ecx
  0x0042DD4A: add      esp, 0xc0
  0x0042DD50: ret      0x20
  0x0042D456: mov      eax, dword ptr [esp + 0xe8]
  0x0042D45D: xor      edx, edx
  0x0042D45F: mov      ecx, eax
  0x0042D461: mov      edi, dword ptr [esp + 0xe4]
  0x0042D468: and      ecx, 0x1e
  0x0042D46B: mov      ebx, dword ptr [esp + 0xe0]
  0x0042D472: cmp      ecx, eax
  0x0042D474: sete     dl
  0x0042D477: mov      esi, edx
  0x0042D479: test     esi, esi
  0x0042D47B: jne      0x42d4a5
  0x0042D47D: push     edi
  0x0042D47E: push     ebx
  0x0042D47F: mov      ecx, ebp
  0x0042D481: call     0x42e310
  0x0042D4A5: lea      ecx, [esp + 0x88]
  0x0042D4AC: call     0x429700
  0x0042D486: test     eax, eax
  0x0042D488: jne      0x42d4a5
  0x0042D4B1: mov      ecx, dword ptr [esp + 0x24]
  0x0042D4B5: push     1
  0x0042D4B7: push     edi
  0x0042D4B8: lea      eax, [esp + 0x90]
  0x0042D4BF: push     ebx
  0x0042D4C0: push     eax
  0x0042D4C1: mov      dword ptr [esp + 0xdc], 0
  0x0042D4CC: call     0x427a00
  0x0042D48A: mov      eax, dword ptr [esp + 0xf0]
  0x0042D491: test     eax, eax
  0x0042D493: je       0x42dd38
  0x0042D4D1: cmp      esi, 1
  0x0042D4D4: push     edi
  0x0042D4D5: jne      0x42d4f0
  0x0042D499: push     eax
  0x0042D49A: call     dword ptr [0x4a247c]
  0x0042D4D7: mov      ecx, ebp
  0x0042D4D9: call     0x42a180
  0x0042D4F0: lea      ecx, [esp + 0x1c]
  0x0042D4F4: push     ebx
  0x0042D4F5: push     ecx
  0x0042D4F6: mov      ecx, ebp
  0x0042D4F8: call     0x42e0a0
  0x0042D4A0: jmp      0x42dd38
  0x0042D4DE: push     ebx
  0x0042D4DF: mov      ecx, ebp
  0x0042D4E1: mov      dword ptr [esp + 0x30], eax
  0x0042D4E5: call     0x42a0a0
  0x0042D4FD: mov      edx, eax
  0x0042D4FF: mov      eax, dword ptr [edx]
  0x0042D501: mov      ecx, dword ptr [edx + 4]
  0x0042D504: mov      dword ptr [esp + 0x2c], eax
  0x0042D508: mov      dword ptr [esp + 0x30], ecx
  0x0042D50C: lea      ecx, [esp + 0x88]
  0x0042D513: call     0x4297e0
  0x0042D4EA: mov      dword ptr [esp + 0x30], eax
  0x0042D4EE: jmp      0x42d50c
  0x0042D518: mov      edi, eax
  0x0042D51A: lea      ecx, [esp + 0x88]
  0x0042D521: mov      dword ptr [esp + 0x44], eax
  0x0042D525: and      edi, 0xf
  0x0042D528: call     0x429830
  0x0042D50C: lea      ecx, [esp + 0x88]
  0x0042D513: call     0x4297e0
  0x0042D52D: mov      ebx, dword ptr [esp + 0xdc]
  0x0042D534: mov      edx, dword ptr [esp + 0xd8]
  0x0042D53B: mov      ecx, dword ptr [esp + 0x2c]
  0x0042D53F: mov      dword ptr [esp + 0x48], eax
  0x0042D543: mov      eax, dword ptr [esp + 0x30]
  0x0042D547: add      ecx, edx
  0x0042D549: add      eax, ebx
  0x0042D54B: mov      esi, ebx
  0x0042D54D: mov      ebp, eax
  0x0042D54F: mov      eax, dword ptr [esp + 0xf0]
  0x0042D556: test     eax, eax
  0x0042D558: mov      dword ptr [esp + 0x34], edx
  0x0042D55C: mov      dword ptr [esp + 0x38], esi
  0x0042D560: mov      dword ptr [esp + 0x3c], ecx
  0x0042D564: mov      dword ptr [esp + 0x40], ebp
  0x0042D568: je       0x42d575
  0x0042D575: lea      ecx, [esp + 0x88]
  0x0042D57C: call     0x427c00
  0x0042D56A: mov      dword ptr [eax], edx
  0x0042D56C: mov      dword ptr [eax + 4], esi
  0x0042D56F: mov      dword ptr [eax + 8], ecx
  0x0042D572: mov      dword ptr [eax + 0xc], ebp
  0x0042D575: lea      ecx, [esp + 0x88]
  0x0042D57C: call     0x427c00
  0x0042D581: mov      ebp, eax
  0x0042D583: cmp      ebp, 0xff000000
  0x0042D589: mov      dword ptr [esp + 0x14], ebp
  0x0042D58D: jne      0x42d59a
  0x0042D58F: mov      edx, dword ptr [esp + 0x20]
  0x0042D593: mov      ebp, dword ptr [edx + 0x40]
  0x0042D596: mov      dword ptr [esp + 0x14], ebp
  0x0042D59A: mov      eax, dword ptr [esp + 0x20]
  0x0042D59E: mov      ecx, dword ptr [eax + 0x6c]
  0x0042D5A1: test     ecx, ecx
  0x0042D5A3: jne      0x42d5d7
  0x0042D59A: mov      eax, dword ptr [esp + 0x20]
  0x0042D59E: mov      ecx, dword ptr [eax + 0x6c]
  0x0042D5A1: test     ecx, ecx
  0x0042D5A3: jne      0x42d5d7
  0x0042D5A5: mov      esi, dword ptr [esp + 0x24]
  0x0042D5A9: mov      ecx, esi
  0x0042D5AB: call     0x4279e0
  0x0042D5D7: mov      al, byte ptr [esp + 0xe8]
  0x0042D5DE: mov      esi, dword ptr [esp + 0xd4]
  0x0042D5E5: test     al, 0x20
  0x0042D5E7: je       0x42d672
  0x0042D5B0: cmp      dword ptr [esp + 0xe0], eax
  0x0042D5B7: jl       0x42d5c9
  0x0042D672: test     byte ptr [esp + 0xe8], 1
  0x0042D67A: je       0x42dcec
  0x0042D5ED: mov      eax, dword ptr [esp + 0x3c]
  0x0042D5F1: mov      ecx, dword ptr [esp + 0x34]
  0x0042D5F5: mov      edx, dword ptr [esp + 0x38]
  0x0042D5F9: mov      dword ptr [esp + 0x5c], eax
  0x0042D5FD: mov      eax, dword ptr [esp + 0xec]
  0x0042D604: mov      dword ptr [esp + 0x54], ecx
  0x0042D608: mov      ecx, dword ptr [esp + 0x40]
  0x0042D60C: mov      dword ptr [esp + 0x58], edx
  0x0042D610: test     eax, eax
  0x0042D612: mov      dword ptr [esp + 0x60], ecx
  0x0042D616: je       0x42d629
  0x0042D5C9: push     0xf
  0x0042D5CB: call     dword ptr [0x4a2500]
  0x0042D5B9: mov      ecx, esi
  0x0042D5BB: call     0x4279f0
  0x0042DCEC: mov      ebp, dword ptr [esp + 0xd8]
  0x0042DCF3: mov      eax, dword ptr [esp + 0x44]
  0x0042DCF7: mov      ecx, dword ptr [esp + 0xe8]
  0x0042DCFE: push     eax
  0x0042DCFF: mov      eax, dword ptr [esp + 0xe8]
  0x0042DD06: lea      edx, [esp + 0x30]
  0x0042DD0A: push     ecx
  0x0042DD0B: mov      ecx, dword ptr [esp + 0xe8]
  0x0042DD12: push     edx
  0x0042DD13: push     eax
  0x0042DD14: push     ecx
  0x0042DD15: mov      ecx, dword ptr [esp + 0x34]
  0x0042DD19: push     ebx
  0x0042DD1A: push     ebp
  0x0042DD1B: push     esi
  0x0042DD1C: call     0x42dd60
  0x0042D680: lea      ecx, [esp + 0x88]
  0x0042D687: call     0x4297b0
  0x0042D629: push     ebp
  0x0042D62A: lea      ecx, [esp + 0x1c]
  0x0042D62E: call     0x499eda
  0x0042D618: push     eax
  0x0042D619: lea      edx, [esp + 0x58]
  0x0042D61D: lea      eax, [esp + 0x58]
  0x0042D621: push     edx
  0x0042D622: push     eax
  0x0042D623: call     dword ptr [0x4a24c8]
  0x0042D5D1: mov      ebp, eax
  0x0042D5D3: mov      dword ptr [esp + 0x14], ebp
  0x0042D5D7: mov      al, byte ptr [esp + 0xe8]
  0x0042D5DE: mov      esi, dword ptr [esp + 0xd4]
  0x0042D5E5: test     al, 0x20
  0x0042D5E7: je       0x42d672
  0x0042D5C0: cmp      dword ptr [esp + 0xe4], eax
  0x0042D5C7: jge      0x42d5d7
  0x0042DD21: lea      ecx, [esp + 0x88]
  0x0042DD28: mov      dword ptr [esp + 0xcc], 0xffffffff
  0x0042DD33: call     0x429730
  0x0042D68C: test     eax, eax
  0x0042D68E: jne      0x42d95b
  0x0042D633: mov      ecx, dword ptr [esp + 0x1c]
  0x0042D637: lea      eax, [esp + 0x18]
  0x0042D63B: mov      edx, dword ptr [esi + 4]
  0x0042D63E: neg      eax
  0x0042D640: sbb      eax, eax
  0x0042D642: and      eax, ecx
  0x0042D644: lea      ecx, [esp + 0x54]
  0x0042D648: push     eax
  0x0042D649: push     ecx
  0x0042D64A: push     edx
  0x0042D64B: call     dword ptr [0x4a2518]
  0x0042D694: mov      eax, dword ptr [esp + 0x44]
  0x0042D698: test     ah, 7
  0x0042D69B: je       0x42d7ac
  0x0042D95B: cmp      eax, 1
  0x0042D95E: je       0x42d969
  0x0042D651: mov      dword ptr [esp + 0x18], 0x2f96400
  0x0042D659: lea      ecx, [esp + 0x18]
  0x0042D65D: mov      byte ptr [esp + 0xcc], 1
  0x0042D665: call     0x499e74
  0x0042D7AC: mov      ebp, dword ptr [esp + 0xd8]
  0x0042D7B3: mov      eax, dword ptr [esp + 0x48]
  0x0042D7B7: lea      ecx, [esp + 0x34]
  0x0042D7BB: neg      eax
  0x0042D7BD: push     eax
  0x0042D7BE: push     eax
  0x0042D7BF: push     ecx
  0x0042D7C0: call     dword ptr [0x4a24c4]
  0x0042D6A1: mov      eax, dword ptr [esp + 0x20]
  0x0042D6A5: xor      edx, edx
  0x0042D6A7: mov      ecx, dword ptr [eax + 0x3c]
  0x0042D6AA: push     ecx
  0x0042D6AB: mov      ecx, dword ptr [eax + 0x6c]
  0x0042D6AE: cmp      ecx, 2
  0x0042D6B1: lea      ecx, [esp + 0x1c]
  0x0042D6B5: setne    dl
  0x0042D6B8: dec      edx
  0x0042D6B9: and      edx, 3
  0x0042D6BC: push     edx
  0x0042D6BD: push     0
  0x0042D6BF: call     0x499e8a
  0x0042D969: lea      ecx, [esp + 0x88]
  0x0042D970: call     0x429840
  0x0042D960: cmp      eax, 2
  0x0042D963: jne      0x42dcec
  0x0042D66A: mov      byte ptr [esp + 0xcc], 0
  0x0042D672: test     byte ptr [esp + 0xe8], 1
  0x0042D67A: je       0x42dcec
  0x0042D7C6: mov      edx, dword ptr [0x2fd8088]
  0x0042D7CC: mov      dword ptr [esp + 0x10], edx
  0x0042D7D0: lea      eax, [esp + 0x10]
  0x0042D7D4: lea      ecx, [esp + 0x88]
  0x0042D7DB: push     eax
  0x0042D7DC: mov      byte ptr [esp + 0xd0], 4
  0x0042D7E4: call     0x4298d0
  0x0042D6C4: lea      eax, [esp + 0x18]
  0x0042D6C8: mov      ecx, esi
  0x0042D6CA: push     eax
  0x0042D6CB: mov      byte ptr [esp + 0xd0], 2
  0x0042D6D3: call     0x499471
  0x0042D975: test     eax, eax
  0x0042D977: mov      dword ptr [esp + 0x24], eax
  0x0042D97B: je       0x42dcec
  0x0042D7E9: mov      ecx, dword ptr [esp + 0x10]
  0x0042D7ED: mov      eax, dword ptr [ecx - 8]
  0x0042D7F0: test     eax, eax
  0x0042D7F2: je       0x42d945
  0x0042D6D8: mov      ebp, dword ptr [esp + 0xd8]
  0x0042D6DF: push     ebx
  0x0042D6E0: lea      ecx, [esp + 0x58]
  0x0042D6E4: push     ebp
  0x0042D6E5: push     ecx
  0x0042D6E6: mov      ecx, esi
  0x0042D6E8: mov      dword ptr [esp + 0x30], eax
  0x0042D6EC: call     0x499962
  0x0042D981: mov      eax, dword ptr [esp + 0x48]
  0x0042D985: lea      edx, [esp + 0x34]
  0x0042D989: neg      eax
  0x0042D98B: push     eax
  0x0042D98C: push     eax
  0x0042D98D: push     edx
  0x0042D98E: call     dword ptr [0x4a24c4]
  0x0042D945: lea      ecx, [esp + 0x10]
  0x0042D949: mov      byte ptr [esp + 0xcc], 0
  0x0042D951: call     0x4931d6
  0x0042D7F8: mov      dword ptr [esp + 0x58], 0
  0x0042D800: mov      dword ptr [esp + 0x54], 0x2f9640c
  0x0042D808: mov      ecx, dword ptr [esp + 0x20]
  0x0042D80C: lea      edx, [esp + 0x54]
  0x0042D810: push     0
  0x0042D812: lea      eax, [esp + 0x8c]
  0x0042D819: push     edx
  0x0042D81A: push     eax
  0x0042D81B: mov      byte ptr [esp + 0xd8], 5
  0x0042D823: call     0x42d2b0
  0x0042D6F1: mov      eax, dword ptr [esp + 0x44]
  0x0042D6F5: test     ah, 1
  0x0042D6F8: je       0x42d707
  0x0042D994: mov      ecx, dword ptr [esi + 8]
  0x0042D997: lea      eax, [esp + 0x34]
  0x0042D99B: push     2
  0x0042D99D: push     eax
  0x0042D99E: push     ecx
  0x0042D99F: call     dword ptr [0x4a2048]
  0x0042D956: jmp      0x42dcf3
  0x0042D828: mov      edx, dword ptr [esi]
  0x0042D82A: lea      eax, [esp + 0x54]
  0x0042D82E: push     eax
  0x0042D82F: mov      ecx, esi
  0x0042D831: call     dword ptr [edx + 0x28]
  0x0042D707: mov      eax, dword ptr [esp + 0x44]
  0x0042D70B: test     ah, 4
  0x0042D70E: je       0x42d743
  0x0042D6FA: mov      edx, dword ptr [esp + 0x30]
  0x0042D6FE: mov      eax, dword ptr [esp + 0x2c]
  0x0042D702: add      edx, ebx
  0x0042D704: push     edx
  0x0042D705: jmp      0x42d77b
  0x0042D9A5: mov      edx, dword ptr [esi]
  0x0042D9A7: mov      ecx, esi
  0x0042D9A9: call     dword ptr [edx + 0x1c]
  0x0042DCF3: mov      eax, dword ptr [esp + 0x44]
  0x0042DCF7: mov      ecx, dword ptr [esp + 0xe8]
  0x0042DCFE: push     eax
  0x0042DCFF: mov      eax, dword ptr [esp + 0xe8]
  0x0042DD06: lea      edx, [esp + 0x30]
  0x0042DD0A: push     ecx
  0x0042DD0B: mov      ecx, dword ptr [esp + 0xe8]
  0x0042DD12: push     edx
  0x0042DD13: push     eax
  0x0042DD14: push     ecx
  0x0042DD15: mov      ecx, dword ptr [esp + 0x34]
  0x0042DD19: push     ebx
  0x0042DD1A: push     ebp
  0x0042DD1B: push     esi
  0x0042DD1C: call     0x42dd60
  0x0042D834: cmp      edi, 2
  0x0042D837: mov      dword ptr [esp + 0x24], eax
  0x0042D83B: mov      ebp, 0x800
  0x0042D840: je       0x42d862
  0x0042D743: mov      eax, dword ptr [esp + 0x30]
  0x0042D747: mov      ecx, esi
  0x0042D749: cdq      
  0x0042D74A: sub      eax, edx
  0x0042D74C: sar      eax, 1
  0x0042D74E: add      eax, ebx
  0x0042D750: push     eax
  0x0042D751: mov      eax, dword ptr [esp + 0x30]
  0x0042D755: add      eax, ebp
  0x0042D757: push     eax
  0x0042D758: call     0x4999ae
  0x0042D710: mov      ecx, dword ptr [esp + 0x30]
  0x0042D714: mov      edx, dword ptr [esp + 0x2c]
  0x0042D718: add      ecx, ebx
  0x0042D71A: add      edx, ebp
  0x0042D71C: push     ecx
  0x0042D71D: push     edx
  0x0042D71E: mov      ecx, esi
  0x0042D720: call     0x4999ae
  0x0042D77B: add      eax, ebp
  0x0042D77D: push     eax
  0x0042D77E: mov      ecx, esi
  0x0042D780: call     0x4999ae
  0x0042D9AC: mov      eax, dword ptr [esi]
  0x0042D9AE: push     1
  0x0042D9B0: mov      ecx, esi
  0x0042D9B2: call     dword ptr [eax + 0x34]
  0x0042D862: mov      ebp, 0x801
  0x0042D867: cmp      edi, 4
  0x0042D86A: je       0x42d88a
  0x0042D842: cmp      edi, 5
  0x0042D845: je       0x42d862
  0x0042D75D: push     ebx
  0x0042D75E: lea      ecx, [esp + 0x58]
  0x0042D762: push     ebp
  0x0042D763: push     ecx
  0x0042D764: mov      ecx, esi
  0x0042D766: call     0x499962
  0x0042D725: mov      eax, dword ptr [esp + 0x2c]
  0x0042D729: push     ebx
  0x0042D72A: add      eax, ebp
  0x0042D72C: lea      ecx, [esp + 0x58]
  0x0042D730: push     eax
  0x0042D731: push     ecx
  0x0042D732: mov      ecx, esi
  0x0042D734: call     0x499962
  0x0042D785: mov      eax, dword ptr [esp + 0x24]
  0x0042D789: mov      ecx, esi
  0x0042D78B: push     eax
  0x0042D78C: call     0x499471
  0x0042D9B5: push     0
  0x0042D9B7: push     0
  0x0042D9B9: push     0
  0x0042D9BB: push     0
  0x0042D9BD: call     dword ptr [0x4a210c]
  0x0042D88A: or       ebp, 4
  0x0042D88D: push     0xd
  0x0042D88F: lea      ecx, [esp + 0x14]
  0x0042D893: call     0x493651
  0x0042D86C: cmp      edi, 5
  0x0042D86F: je       0x42d88a
  0x0042D847: cmp      edi, 8
  0x0042D84A: je       0x42d862
  0x0042D76B: mov      edx, dword ptr [esp + 0x30]
  0x0042D76F: mov      eax, dword ptr [esp + 0x2c]
  0x0042D773: add      edx, ebx
  0x0042D775: push     edx
  0x0042D776: cdq      
  0x0042D777: sub      eax, edx
  0x0042D779: sar      eax, 1
  0x0042D77B: add      eax, ebp
  0x0042D77D: push     eax
  0x0042D77E: mov      ecx, esi
  0x0042D780: call     0x4999ae
  0x0042D739: mov      edx, dword ptr [esp + 0x30]
  0x0042D73D: add      edx, ebx
  0x0042D73F: push     edx
  0x0042D740: push     ebp
  0x0042D741: jmp      0x42d77e
  0x0042D791: mov      dword ptr [esp + 0x18], 0x2f96400
  0x0042D799: lea      ecx, [esp + 0x18]
  0x0042D79D: mov      byte ptr [esp + 0xcc], 3
  0x0042D7A5: call     0x499e74
  0x0042D9C3: mov      ecx, dword ptr [esi + 4]
  0x0042D9C6: mov      ebx, eax
  0x0042D9C8: push     ebx
  0x0042D9C9: push     ecx
  0x0042D9CA: mov      dword ptr [esp + 0x8c], ebx
  0x0042D9D1: call     dword ptr [0x4a2094]
  0x0042D898: cmp      eax, -1
  0x0042D89B: jne      0x42d8cc
  0x0042D871: cmp      edi, 6
  0x0042D874: je       0x42d88a
  0x0042D84C: cmp      edi, 3
  0x0042D84F: je       0x42d85b
  0x0042D77E: mov      ecx, esi
  0x0042D780: call     0x4999ae
  0x0042D7AA: jmp      0x42d7b3
  0x0042D9D7: mov      ebp, eax
  0x0042D9D9: mov      dword ptr [esp + 0x1c], 0
  0x0042D9E1: dec      ebp
  0x0042D9E2: mov      dword ptr [esp + 0x18], 0x2f96418
  0x0042D9EA: neg      ebp
  0x0042D9EC: sbb      ebp, ebp
  0x0042D9EE: inc      ebp
  0x0042D9EF: mov      dword ptr [esp + 0x54], ebp
  0x0042D9F3: mov      edx, dword ptr [esp + 0x20]
  0x0042D9F7: mov      byte ptr [esp + 0xcc], 7
  0x0042D9FF: test     byte ptr [edx + 0x44], 8
  0x0042DA03: je       0x42da0e
  0x0042D89D: mov      eax, dword ptr [esp + 0x10]
  0x0042D8A1: lea      edx, [esp + 0x18]
  0x0042D8A5: push     edx
  0x0042D8A6: mov      ecx, dword ptr [eax - 8]
  0x0042D8A9: push     ecx
  0x0042D8AA: push     eax
  0x0042D8AB: mov      eax, dword ptr [esi + 8]
  0x0042D8AE: push     eax
  0x0042D8AF: call     dword ptr [0x4a2058]
  0x0042D8CC: or       ebp, 0x10
  0x0042D8CF: mov      eax, dword ptr [esp + 0x20]
  0x0042D8D3: test     byte ptr [eax + 0x44], 8
  0x0042D8D7: je       0x42d8e6
  0x0042D876: cmp      edi, 7
  0x0042D879: je       0x42d885
  0x0042D85B: mov      ebp, 0x802
  0x0042D860: jmp      0x42d867
  0x0042D851: cmp      edi, 6
  0x0042D854: je       0x42d85b
  0x0042D7B3: mov      eax, dword ptr [esp + 0x48]
  0x0042D7B7: lea      ecx, [esp + 0x34]
  0x0042D7BB: neg      eax
  0x0042D7BD: push     eax
  0x0042D7BE: push     eax
  0x0042D7BF: push     ecx
  0x0042D7C0: call     dword ptr [0x4a24c4]
  0x0042DA0E: lea      ecx, [esp + 0x34]
  0x0042DA12: push     ecx
  0x0042DA13: call     dword ptr [0x4a209c]
  0x0042DA05: mov      eax, edx
  0x0042DA07: mov      ecx, dword ptr [eax + 0x6c]
  0x0042DA0A: test     ecx, ecx
  0x0042DA0C: jne      0x42da31
  0x0042D8B5: mov      ecx, dword ptr [esp + 0x3c]
  0x0042D8B9: mov      edx, dword ptr [esp + 0x34]
  0x0042D8BD: mov      eax, dword ptr [esp + 0x18]
  0x0042D8C1: sub      ecx, edx
  0x0042D8C3: cmp      eax, ecx
  0x0042D8C5: jge      0x42d8cc
  0x0042D8E6: mov      edi, dword ptr [esi]
  0x0042D8E8: lea      ecx, [esp + 0x88]
  0x0042D8EF: call     0x436e20
  0x0042D8D9: mov      ecx, dword ptr [eax + 0x6c]
  0x0042D8DC: test     ecx, ecx
  0x0042D8DE: je       0x42d8e6
  0x0042D885: or       ebp, 8
  0x0042D888: jmp      0x42d88d
  0x0042D87B: cmp      edi, 8
  0x0042D87E: je       0x42d885
  0x0042D867: cmp      edi, 4
  0x0042D86A: je       0x42d88a
  0x0042D856: cmp      edi, 9
  0x0042D859: jne      0x42d867
  0x0042DA19: push     eax
  0x0042DA1A: lea      ecx, [esp + 0x1c]
  0x0042DA1E: call     0x499e1d
  0x0042DA31: mov      edx, dword ptr [esp + 0x24]
  0x0042DA35: xor      eax, eax
  0x0042DA37: mov      dword ptr [esp + 0x68], eax
  0x0042DA3B: mov      dword ptr [esp + 0x64], eax
  0x0042DA3F: mov      dword ptr [esp + 0x74], eax
  0x0042DA43: mov      dword ptr [esp + 0x78], eax
  0x0042DA47: mov      dword ptr [esp + 0x6c], eax
  0x0042DA4B: mov      dword ptr [esp + 0x70], eax
  0x0042DA4F: mov      eax, dword ptr [esp + 0x14]
  0x0042DA53: lea      ecx, [esp + 0x64]
  0x0042DA57: push     eax
  0x0042DA58: push     ecx
  0x0042DA59: push     edx
  0x0042DA5A: push     esi
  0x0042DA5B: call     0x4226d0
  0x0042D8C7: or       ebp, 0x20
  0x0042D8CA: jmp      0x42d8cf
  0x0042D8F4: push     eax
  0x0042D8F5: mov      ecx, esi
  0x0042D8F7: call     dword ptr [edi + 0x30]
  0x0042D8E0: or       ebp, 0x100
  0x0042D8E6: mov      edi, dword ptr [esi]
  0x0042D8E8: lea      ecx, [esp + 0x88]
  0x0042D8EF: call     0x436e20
  0x0042D88D: push     0xd
  0x0042D88F: lea      ecx, [esp + 0x14]
  0x0042D893: call     0x493651
  0x0042D880: cmp      edi, 9
  0x0042D883: jne      0x42d88d
  0x0042DA23: lea      edx, [esp + 0x18]
  0x0042DA27: push     1
  0x0042DA29: push     edx
  0x0042DA2A: mov      ecx, esi
  0x0042DA2C: call     0x499a5b
  0x0042DA60: cmp      eax, 1
  0x0042DA63: jne      0x42dc99
  0x0042D8CF: mov      eax, dword ptr [esp + 0x20]
  0x0042D8D3: test     byte ptr [eax + 0x44], 8
  0x0042D8D7: je       0x42d8e6
  0x0042D8FA: push     1
  0x0042D8FC: mov      ecx, esi
  0x0042D8FE: call     0x49954d
  0x0042DA69: mov      ebp, dword ptr [esp + 0x34]
  0x0042DA6D: mov      eax, dword ptr [esp + 0x38]
  0x0042DA71: mov      ebx, dword ptr [esp + 0x3c]
  0x0042DA75: mov      ecx, dword ptr [esp + 0x40]
  0x0042DA79: sub      ebx, ebp
  0x0042DA7B: sub      ecx, eax
  0x0042DA7D: cmp      edi, 0xa
  0x0042DA80: mov      dword ptr [esp + 0x50], ebp
  0x0042DA84: mov      dword ptr [esp + 0x10], eax
  0x0042DA88: mov      dword ptr [esp + 0x24], ebx
  0x0042DA8C: mov      dword ptr [esp + 0x14], ecx
  0x0042DA90: jne      0x42daa0
  0x0042DC99: cmp      ebp, 1
  0x0042DC9C: jne      0x42dcab
  0x0042D903: mov      eax, dword ptr [esp + 0x10]
  0x0042D907: mov      edx, dword ptr [esi]
  0x0042D909: lea      edi, [esp + 0x34]
  0x0042D90D: push     ebp
  0x0042D90E: mov      ecx, dword ptr [eax - 8]
  0x0042D911: push     edi
  0x0042D912: push     ecx
  0x0042D913: push     eax
  0x0042D914: mov      ecx, esi
  0x0042D916: call     dword ptr [edx + 0x68]
  0x0042DA92: push     0xcc0020
  0x0042DA97: push     ecx
  0x0042DA98: push     ebx
  0x0042DA99: push     eax
  0x0042DA9A: push     ebp
  0x0042DA9B: jmp      0x42dc7a
  0x0042DAA0: cmp      edi, 0xd
  0x0042DAA3: je       0x42db5f
  0x0042DC9E: mov      eax, dword ptr [esi + 4]
  0x0042DCA1: push     ebx
  0x0042DCA2: push     eax
  0x0042DCA3: call     dword ptr [0x4a208c]
  0x0042DCAB: push     0
  0x0042DCAD: mov      ecx, esi
  0x0042DCAF: call     0x49989e
  0x0042D919: mov      ecx, dword ptr [esp + 0x24]
  0x0042D91D: mov      eax, dword ptr [esi]
  0x0042D91F: push     ecx
  0x0042D920: mov      ecx, esi
  0x0042D922: call     dword ptr [eax + 0x28]
  0x0042DC7A: lea      ecx, [esp + 0x78]
  0x0042DC7E: push     ecx
  0x0042DC7F: call     0x422b10
  0x0042DB5F: mov      edx, dword ptr [esp + 0x70]
  0x0042DB63: mov      ebp, dword ptr [esp + 0x6c]
  0x0042DB67: cmp      edi, 0xd
  0x0042DB6A: mov      dword ptr [esp + 0x48], edx
  0x0042DB6E: je       0x42dbdb
  0x0042DAA9: cmp      edi, 0xe
  0x0042DAAC: je       0x42db5f
  0x0042DCA9: jmp      0x42dcb4
  0x0042DCB4: push     ebx
  0x0042DCB5: call     dword ptr [0x4a2088]
  0x0042D925: mov      dword ptr [esp + 0x54], 0x2f96400
  0x0042D92D: lea      ecx, [esp + 0x54]
  0x0042D931: mov      byte ptr [esp + 0xcc], 6
  0x0042D939: call     0x499e74
  0x0042DC84: lea      edx, [esp + 0x64]
  0x0042DC88: push     edx
  0x0042DC89: call     0x422eb0
  0x0042DBDB: cmp      edi, 0xc
  0x0042DBDE: je       0x42dc4d
  0x0042DB70: fild     dword ptr [esp + 0x6c]
  0x0042DB74: fst      qword ptr [esp + 0x48]
  0x0042DB78: fidivr   dword ptr [esp + 0x24]
  0x0042DB7C: fild     dword ptr [esp + 0x70]
  0x0042DB80: fst      qword ptr [esp + 0x24]
  0x0042DB84: fild     dword ptr [esp + 0x14]
  0x0042DB88: fdiv     st(1)
  0x0042DB8A: fstp     qword ptr [esp + 0x7c]
  0x0042DB8E: fstp     st(0)
  0x0042DB90: fcom     qword ptr [esp + 0x7c]
  0x0042DB94: fnstsw   ax
  0x0042DB96: test     ah, 1
  0x0042DB99: jne      0x42dba1
  0x0042DAB2: cmp      edi, 0xc
  0x0042DAB5: je       0x42db5f
  0x0042DCBB: mov      edx, dword ptr [esi]
  0x0042DCBD: push     -1
  0x0042DCBF: mov      ecx, esi
  0x0042DCC1: call     dword ptr [edx + 0x20]
  0x0042D93E: mov      ebp, dword ptr [esp + 0xd8]
  0x0042D945: lea      ecx, [esp + 0x10]
  0x0042D949: mov      byte ptr [esp + 0xcc], 0
  0x0042D951: call     0x4931d6
  0x0042DC8E: mov      ebx, dword ptr [esp + 0x84]
  0x0042DC95: mov      ebp, dword ptr [esp + 0x54]
  0x0042DC99: cmp      ebp, 1
  0x0042DC9C: jne      0x42dcab
  0x0042DC4D: mov      ecx, dword ptr [esp + 0x48]
  0x0042DC51: mov      eax, dword ptr [esp + 0x14]
  0x0042DC55: mov      edi, dword ptr [esp + 0x38]
  0x0042DC59: sub      eax, ecx
  0x0042DC5B: cdq      
  0x0042DC5C: sub      eax, edx
  0x0042DC5E: push     0xcc0020
  0x0042DC63: sar      eax, 1
  0x0042DC65: push     ecx
  0x0042DC66: add      eax, edi
  0x0042DC68: push     ebp
  0x0042DC69: push     eax
  0x0042DC6A: mov      eax, ebx
  0x0042DC6C: sub      eax, ebp
  0x0042DC6E: cdq      
  0x0042DC6F: sub      eax, edx
  0x0042DC71: mov      edx, dword ptr [esp + 0x44]
  0x0042DC75: sar      eax, 1
  0x0042DC77: add      eax, edx
  0x0042DC79: push     eax
  0x0042DC7A: lea      ecx, [esp + 0x78]
  0x0042DC7E: push     ecx
  0x0042DC7F: call     0x422b10
  0x0042DBE0: cmp      edi, 0xb
  0x0042DBE3: je       0x42dc4d
  0x0042DB9B: fstp     st(0)
  0x0042DB9D: fld      qword ptr [esp + 0x7c]
  0x0042DBA1: cmp      edi, 0xb
  0x0042DBA4: jne      0x42dbbd
  0x0042DBA1: cmp      edi, 0xb
  0x0042DBA4: jne      0x42dbbd
  0x0042DABB: cmp      edi, 0xb
  0x0042DABE: je       0x42db5f
  0x0042DCC4: mov      dword ptr [esp + 0x18], 0x2f96400
  0x0042DCCC: lea      ecx, [esp + 0x18]
  0x0042DCD0: mov      byte ptr [esp + 0xcc], 8
  0x0042DCD8: call     0x499e74
  0x0042DBE5: mov      eax, dword ptr [esp + 0x14]
  0x0042DBE9: mov      dword ptr [esp + 0x24], 0
  0x0042DBF1: test     eax, eax
  0x0042DBF3: jle      0x42dc84
  0x0042DBA6: fld      qword ptr [0x2f96428]
  0x0042DBAC: fcomp    st(1)
  0x0042DBAE: fnstsw   ax
  0x0042DBB0: test     ah, 1
  0x0042DBB3: je       0x42dbbd
  0x0042DBBD: fld      qword ptr [esp + 0x48]
  0x0042DBC1: fmul     st(1)
  0x0042DBC3: call     0x482498
  0x0042DAC4: cmp      edi, 2
  0x0042DAC7: je       0x42daee
  0x0042DCDD: mov      ebx, dword ptr [esp + 0xdc]
  0x0042DCE4: mov      byte ptr [esp + 0xcc], 0
  0x0042DCEC: mov      ebp, dword ptr [esp + 0xd8]
  0x0042DCF3: mov      eax, dword ptr [esp + 0x44]
  0x0042DCF7: mov      ecx, dword ptr [esp + 0xe8]
  0x0042DCFE: push     eax
  0x0042DCFF: mov      eax, dword ptr [esp + 0xe8]
  0x0042DD06: lea      edx, [esp + 0x30]
  0x0042DD0A: push     ecx
  0x0042DD0B: mov      ecx, dword ptr [esp + 0xe8]
  0x0042DD12: push     edx
  0x0042DD13: push     eax
  0x0042DD14: push     ecx
  0x0042DD15: mov      ecx, dword ptr [esp + 0x34]
  0x0042DD19: push     ebx
  0x0042DD1A: push     ebp
  0x0042DD1B: push     esi
  0x0042DD1C: call     0x42dd60
  0x0042DBF9: mov      eax, dword ptr [esp + 0x24]
  0x0042DBFD: xor      edi, edi
  0x0042DBFF: test     ebx, ebx
  0x0042DC01: jle      0x42dc39
  0x0042DBB5: fstp     st(0)
  0x0042DBB7: fld      qword ptr [0x2f96428]
  0x0042DBBD: fld      qword ptr [esp + 0x48]
  0x0042DBC1: fmul     st(1)
  0x0042DBC3: call     0x482498
  0x0042DBC8: fld      qword ptr [esp + 0x24]
  0x0042DBCC: fmul     st(1)
  0x0042DBCE: mov      ebp, eax
  0x0042DBD0: call     0x482498
  0x0042DAEE: mov      edx, dword ptr [esp + 0x6c]
  0x0042DAF2: mov      eax, ebx
  0x0042DAF4: sub      eax, edx
  0x0042DAF6: cdq      
  0x0042DAF7: sub      eax, edx
  0x0042DAF9: sar      eax, 1
  0x0042DAFB: add      eax, ebp
  0x0042DAFD: mov      dword ptr [esp + 0x50], eax
  0x0042DB01: cmp      edi, 4
  0x0042DB04: je       0x42db31
  0x0042DAC9: cmp      edi, 5
  0x0042DACC: je       0x42daee
  0x0042DC39: mov      edx, dword ptr [esp + 0x48]
  0x0042DC3D: mov      ecx, dword ptr [esp + 0x14]
  0x0042DC41: add      eax, edx
  0x0042DC43: cmp      eax, ecx
  0x0042DC45: mov      dword ptr [esp + 0x24], eax
  0x0042DC49: jl       0x42dbfd
  0x0042DC03: mov      ecx, dword ptr [esp + 0x10]
  0x0042DC07: add      eax, ecx
  0x0042DC09: mov      dword ptr [esp + 0x7c], eax
  0x0042DC0D: mov      edx, dword ptr [esp + 0x48]
  0x0042DC11: mov      ecx, dword ptr [esp + 0x50]
  0x0042DC15: mov      eax, dword ptr [esp + 0x7c]
  0x0042DC19: push     0xcc0020
  0x0042DC1E: push     edx
  0x0042DC1F: push     ebp
  0x0042DC20: push     eax
  0x0042DC21: lea      edx, [edi + ecx]
  0x0042DC24: lea      eax, [esp + 0x74]
  0x0042DC28: push     edx
  0x0042DC29: push     eax
  0x0042DC2A: call     0x422b10
  0x0042DBD5: fstp     st(0)
  0x0042DBD7: mov      dword ptr [esp + 0x48], eax
  0x0042DBDB: cmp      edi, 0xc
  0x0042DBDE: je       0x42dc4d
  0x0042DB31: mov      ebx, dword ptr [esp + 0x70]
  0x0042DB35: mov      eax, ecx
  0x0042DB37: mov      ecx, dword ptr [esp + 0x38]
  0x0042DB3B: sub      eax, ebx
  0x0042DB3D: cdq      
  0x0042DB3E: sub      eax, edx
  0x0042DB40: sar      eax, 1
  0x0042DB42: add      eax, ecx
  0x0042DB44: mov      dword ptr [esp + 0x10], eax
  0x0042DB48: mov      edx, dword ptr [esp + 0x10]
  0x0042DB4C: mov      eax, dword ptr [esp + 0x50]
  0x0042DB50: push     0xcc0020
  0x0042DB55: push     -1
  0x0042DB57: push     -1
  0x0042DB59: push     edx
  0x0042DB5A: jmp      0x42dc79
  0x0042DB06: cmp      edi, 5
  0x0042DB09: je       0x42db31
  0x0042DACE: cmp      edi, 8
  0x0042DAD1: je       0x42daee
  0x0042DBFD: xor      edi, edi
  0x0042DBFF: test     ebx, ebx
  0x0042DC01: jle      0x42dc39
  0x0042DC4B: jmp      0x42dc84
  0x0042DC2F: add      edi, ebp
  0x0042DC31: cmp      edi, ebx
  0x0042DC33: jl       0x42dc0d
  0x0042DC79: push     eax
  0x0042DC7A: lea      ecx, [esp + 0x78]
  0x0042DC7E: push     ecx
  0x0042DC7F: call     0x422b10
  0x0042DB0B: cmp      edi, 6
  0x0042DB0E: je       0x42db31
  0x0042DAD3: cmp      edi, 3
  0x0042DAD6: je       0x42dae2
  0x0042DC0D: mov      edx, dword ptr [esp + 0x48]
  0x0042DC11: mov      ecx, dword ptr [esp + 0x50]
  0x0042DC15: mov      eax, dword ptr [esp + 0x7c]
  0x0042DC19: push     0xcc0020
  0x0042DC1E: push     edx
  0x0042DC1F: push     ebp
  0x0042DC20: push     eax
  0x0042DC21: lea      edx, [edi + ecx]
  0x0042DC24: lea      eax, [esp + 0x74]
  0x0042DC28: push     edx
  0x0042DC29: push     eax
  0x0042DC2A: call     0x422b10
  0x0042DC35: mov      eax, dword ptr [esp + 0x24]
  0x0042DC39: mov      edx, dword ptr [esp + 0x48]
  0x0042DC3D: mov      ecx, dword ptr [esp + 0x14]
  0x0042DC41: add      eax, edx
  0x0042DC43: cmp      eax, ecx
  0x0042DC45: mov      dword ptr [esp + 0x24], eax
  0x0042DC49: jl       0x42dbfd
  0x0042DB10: cmp      edi, 7
  0x0042DB13: je       0x42db1f
  0x0042DAE2: sub      ebx, dword ptr [esp + 0x6c]
  0x0042DAE6: add      ebx, ebp
  0x0042DAE8: mov      dword ptr [esp + 0x50], ebx
  0x0042DAEC: jmp      0x42db01
  0x0042DAD8: cmp      edi, 6
  0x0042DADB: je       0x42dae2
  0x0042DB1F: mov      edx, dword ptr [esp + 0x70]
  0x0042DB23: mov      eax, dword ptr [esp + 0x38]
  0x0042DB27: sub      ecx, edx
  0x0042DB29: add      ecx, eax
  0x0042DB2B: mov      dword ptr [esp + 0x10], ecx
  0x0042DB2F: jmp      0x42db48
  0x0042DB15: cmp      edi, 8
  0x0042DB18: je       0x42db1f
  0x0042DB01: cmp      edi, 4
  0x0042DB04: je       0x42db31
  0x0042DADD: cmp      edi, 9
  0x0042DAE0: jne      0x42db01
  0x0042DB48: mov      edx, dword ptr [esp + 0x10]
  0x0042DB4C: mov      eax, dword ptr [esp + 0x50]
  0x0042DB50: push     0xcc0020
  0x0042DB55: push     -1
  0x0042DB57: push     -1
  0x0042DB59: push     edx
  0x0042DB5A: jmp      0x42dc79
  0x0042DB1A: cmp      edi, 9
  0x0042DB1D: jne      0x42db48

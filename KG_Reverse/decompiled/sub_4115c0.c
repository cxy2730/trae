/**
 * Function: sub_4115c0
 * Address: 0x004115C0
 * Blocks: 256
 * Instructions: 1072
 * Analyzed with angr + capstone
 */
void* sub_4115c0(void) {

  /* Block 1 @ 0x004115C0 */
  // sub esp, 0xd4
  // push ebx
  // push ebp
  // push esi
  // xor esi, esi
  // push edi
  // push esi
  // push esi
  // push 0x3e9
  // mov dword ptr [esp + 0x38], 0x64
  // mov dword ptr [esp + 0x24], esi
  // call 0x00413D70
  call(0x00413D70);
  /* Block 2 @ 0x004115E4 */
  // mov ebp, eax
  // push esi
  // mov ebx, dword ptr [esp + 0xec]
  // push esi
  // mov dword ptr [esp + 0x58], ebp
  // lea edi, [ebx + 0x14]
  // mov ecx, edi
  // mov dword ptr [esp + 0x1c], edi
  // call 0x0040E730
  call(0x0040E730);
  /* Block 3 @ 0x00411601 */
  // CMP eax, esi (set flags)
  // if (equal) goto 0x411b5a
  /* Block 4 @ 0x00411B5A */
  // pop edi
  // pop esi
  // pop ebp
  // xor eax, eax
  // pop ebx
  // add esp, 0xd4
  return;
  /* Block 5 @ 0x00411609 */
  // CMP dword ptr [esp + 0xec], esi (set flags)
  // if (not equal) goto 0x411653
  /* Block 6 @ 0x00411612 */
  // lea esi, [eax + 0x18]
  // push esi
  // call 0x00406CF0
  call(0x00406CF0);
  /* Block 7 @ 0x00411653 */
  // CMP dword ptr [esp + 0xf4], 1 (set flags)
  // if (not equal) goto 0x4116b1
  /* Block 8 @ 0x0041161B */
  // add esi, eax
  // push esi
  // call 0x00406CF0
  call(0x00406CF0);
  /* Block 9 @ 0x0041165D */
  // mov dword ptr [esp + 0xf8], esi
  goto 0x4116cb;
  /* Block 10 @ 0x004116B1 */
  // mov eax, dword ptr [esp + 0xf8]
  // CMP eax, esi (set flags)
  // if (equal) goto 0x4116cb
  /* Block 11 @ 0x00411623 */
  // add esi, eax
  // add esp, 8
  // mov esi, dword ptr [esi]
  // TEST esi, esi (set flags)
  // if (equal) goto 0x411651
  /* Block 12 @ 0x004116CB */
  // push esi
  // push esi
  // push 0x7d9
  // call 0x00413D70
  call(0x00413D70);
  /* Block 13 @ 0x004116BC */
  // push eax
  // call dword ptr [0x4a2558]
  call(dword ptr [0x4a2558]);
  /* Block 14 @ 0x00411651 */
  // xor esi, esi
  // CMP dword ptr [esp + 0xf4], 1 (set flags)
  // if (not equal) goto 0x4116b1
  /* Block 15 @ 0x0041162E */
  // mov eax, dword ptr [esi + 0x1c]
  // push eax
  // call dword ptr [0x4a2558]
  call(dword ptr [0x4a2558]);
  /* Block 16 @ 0x004116D7 */
  // lea ecx, [ebx + 0x34]
  // push edi
  // mov dword ptr [esp + 0x24], ecx
  // call 0x0040E6C0
  call(0x0040E6C0);
  /* Block 17 @ 0x004116C3 */
  // TEST eax, eax (set flags)
  // if (equal) goto 0x411b5a
  /* Block 18 @ 0x00411638 */
  // TEST eax, eax (set flags)
  // if (equal) goto 0x411651
  /* Block 19 @ 0x004116E4 */
  // push ebx
  // mov ecx, ebp
  // call 0x0040EBA0
  call(0x0040EBA0);
  /* Block 20 @ 0x0041163C */
  // mov eax, dword ptr [esi + 0x1b4]
  // TEST eax, eax (set flags)
  // if (equal) goto 0x411666
  /* Block 21 @ 0x004116EC */
  // CMP eax, esi (set flags)
  // mov dword ptr [esp + 0x4c], eax
  // if (equal) goto 0x411b5a
  /* Block 22 @ 0x00411666 */
  // mov ecx, dword ptr [esi + 0x1c]
  // push ecx
  // call dword ptr [0x4a240c]
  call(dword ptr [0x4a240c]);
  /* Block 23 @ 0x00411646 */
  // push 0
  // push 0
  // mov ecx, esi
  // call 0x00417EB0
  call(0x00417EB0);
  /* Block 24 @ 0x004116F8 */
  // lea eax, [esp + 0xb4]
  // mov ecx, edi
  // push eax
  // mov dword ptr [esp + 0xa0], esi
  // mov dword ptr [esp + 0x14], esi
  // call 0x0040F200
  call(0x0040F200);
  /* Block 25 @ 0x00411670 */
  // TEST eax, eax (set flags)
  // if (equal) goto 0x41168f
  /* Block 26 @ 0x00411712 */
  // CMP eax, esi (set flags)
  // mov dword ptr [esp + 0x28], esi
  // if (less or equal) goto 0x411741
  /* Block 27 @ 0x0041168F */
  // mov edx, dword ptr [esi + 0x1c]
  // push edx
  // call dword ptr [0x4a2504]
  call(dword ptr [0x4a2504]);
  /* Block 28 @ 0x00411674 */
  // push 9
  // mov ecx, esi
  // call 0x00497580
  call(0x00497580);
  /* Block 29 @ 0x00411741 */
  // lea ecx, [esp + 0x54]
  // call 0x004062A0
  call(0x004062A0);
  /* Block 30 @ 0x0041171A */
  // mov edx, dword ptr [esp + 0xb4]
  // lea ecx, [esp + 0x28]
  // push esi
  // push ecx
  // push esi
  // push -1
  // push eax
  // push esi
  // push edx
  // mov ecx, edi
  // call 0x0040E730
  call(0x0040E730);
  /* Block 31 @ 0x00411699 */
  // push eax
  // call 0x00494BB2
  call(0x00494BB2);
  /* Block 32 @ 0x0041167D */
  // pop edi
  // pop esi
  // pop ebp
  // mov eax, 1
  // pop ebx
  // add esp, 0xd4
  return;
  /* Block 33 @ 0x0041174A */
  // mov esi, 0x2f954b0
  // lea ecx, [esp + 0x7c]
  // mov dword ptr [esp + 0x54], esi
  // call 0x004062A0
  call(0x004062A0);
  /* Block 34 @ 0x00411734 */
  // push eax
  // call 0x0041FCB0
  call(0x0041FCB0);
  /* Block 35 @ 0x0041169F */
  // pop edi
  // pop esi
  // pop ebp
  // mov eax, 1
  // pop ebx
  // add esp, 0xd4
  return;
  /* Block 36 @ 0x0041175C */
  // lea ecx, [esp + 0x68]
  // mov dword ptr [esp + 0x7c], esi
  // call 0x004062A0
  call(0x004062A0);
  /* Block 37 @ 0x0041173A */
  // add esp, 0x18
  // mov dword ptr [esp + 0x10], eax
  // lea ecx, [esp + 0x54]
  // call 0x004062A0
  call(0x004062A0);
  /* Block 38 @ 0x00411769 */
  // lea ecx, [esp + 0x34]
  // mov dword ptr [esp + 0x68], esi
  // call 0x004062A0
  call(0x004062A0);
  /* Block 39 @ 0x00411776 */
  // mov esi, dword ptr [ebx + 0x18]
  // mov ebx, esi
  // mov dword ptr [esp + 0x30], esi
  // TEST esi, esi (set flags)
  // mov dword ptr [esp + 0x1c], ebx
  // if (less or equal) goto 0x411a49
  /* Block 40 @ 0x00411A49 */
  // mov eax, dword ptr [esp + 0x78]
  // mov esi, dword ptr [esp + 0x70]
  // mov ecx, dword ptr [esp + 0x5c]
  // and eax, esi
  // mov ebx, dword ptr [esp + 0x84]
  // mov dword ptr [esp + 0x48], eax
  // mov eax, dword ptr [esp + 0x64]
  // mov edi, eax
  // mov edx, dword ptr [esp + 0x3c]
  // mov esi, dword ptr [esp + 0x14]
  // and edi, ecx
  // mov ecx, dword ptr [esp + 0x8c]
  // and ecx, ebx
  // mov ebx, 1
  // mov dword ptr [esp + 0x20], ecx
  // mov ecx, dword ptr [esp + 0x44]
  // mov dword ptr [esp + 0x10], ebx
  // and ecx, edx
  // shr eax, 2
  // mov dword ptr [esp + 0x24], ecx
  // mov dword ptr [esp + 0x1c], eax
  // push 0
  // push ebx
  // mov ecx, esi
  // call 0x0040E730
  call(0x0040E730);
  /* Block 41 @ 0x0041178B */
  // mov edi, ebx
  // mov ecx, dword ptr [esp + 0x14]
  // sub edi, esi
  // push 0
  // and edi, ebx
  // push edi
  // call 0x0040E730
  call(0x0040E730);
  /* Block 42 @ 0x00411AB3 */
  // mov ebp, eax
  // TEST ebp, ebp (set flags)
  // if (equal) goto 0x411c72
  /* Block 43 @ 0x004117A1 */
  // mov ebp, eax
}
/* ============================================ */
/*           FULL ASSEMBLY LISTING              */
/* ============================================ */

  0x004115C0: sub      esp, 0xd4
  0x004115C6: push     ebx
  0x004115C7: push     ebp
  0x004115C8: push     esi
  0x004115C9: xor      esi, esi
  0x004115CB: push     edi
  0x004115CC: push     esi
  0x004115CD: push     esi
  0x004115CE: push     0x3e9
  0x004115D3: mov      dword ptr [esp + 0x38], 0x64
  0x004115DB: mov      dword ptr [esp + 0x24], esi
  0x004115DF: call     0x413d70
  0x004115E4: mov      ebp, eax
  0x004115E6: push     esi
  0x004115E7: mov      ebx, dword ptr [esp + 0xec]
  0x004115EE: push     esi
  0x004115EF: mov      dword ptr [esp + 0x58], ebp
  0x004115F3: lea      edi, [ebx + 0x14]
  0x004115F6: mov      ecx, edi
  0x004115F8: mov      dword ptr [esp + 0x1c], edi
  0x004115FC: call     0x40e730
  0x00411601: cmp      eax, esi
  0x00411603: je       0x411b5a
  0x00411B5A: pop      edi
  0x00411B5B: pop      esi
  0x00411B5C: pop      ebp
  0x00411B5D: xor      eax, eax
  0x00411B5F: pop      ebx
  0x00411B60: add      esp, 0xd4
  0x00411B66: ret      0x14
  0x00411609: cmp      dword ptr [esp + 0xec], esi
  0x00411610: jne      0x411653
  0x00411612: lea      esi, [eax + 0x18]
  0x00411615: push     esi
  0x00411616: call     0x406cf0
  0x00411653: cmp      dword ptr [esp + 0xf4], 1
  0x0041165B: jne      0x4116b1
  0x0041161B: add      esi, eax
  0x0041161D: push     esi
  0x0041161E: call     0x406cf0
  0x0041165D: mov      dword ptr [esp + 0xf8], esi
  0x00411664: jmp      0x4116cb
  0x004116B1: mov      eax, dword ptr [esp + 0xf8]
  0x004116B8: cmp      eax, esi
  0x004116BA: je       0x4116cb
  0x00411623: add      esi, eax
  0x00411625: add      esp, 8
  0x00411628: mov      esi, dword ptr [esi]
  0x0041162A: test     esi, esi
  0x0041162C: je       0x411651
  0x004116CB: push     esi
  0x004116CC: push     esi
  0x004116CD: push     0x7d9
  0x004116D2: call     0x413d70
  0x004116BC: push     eax
  0x004116BD: call     dword ptr [0x4a2558]
  0x00411651: xor      esi, esi
  0x00411653: cmp      dword ptr [esp + 0xf4], 1
  0x0041165B: jne      0x4116b1
  0x0041162E: mov      eax, dword ptr [esi + 0x1c]
  0x00411631: push     eax
  0x00411632: call     dword ptr [0x4a2558]
  0x004116D7: lea      ecx, [ebx + 0x34]
  0x004116DA: push     edi
  0x004116DB: mov      dword ptr [esp + 0x24], ecx
  0x004116DF: call     0x40e6c0
  0x004116C3: test     eax, eax
  0x004116C5: je       0x411b5a
  0x00411638: test     eax, eax
  0x0041163A: je       0x411651
  0x004116E4: push     ebx
  0x004116E5: mov      ecx, ebp
  0x004116E7: call     0x40eba0
  0x0041163C: mov      eax, dword ptr [esi + 0x1b4]
  0x00411642: test     eax, eax
  0x00411644: je       0x411666
  0x004116EC: cmp      eax, esi
  0x004116EE: mov      dword ptr [esp + 0x4c], eax
  0x004116F2: je       0x411b5a
  0x00411666: mov      ecx, dword ptr [esi + 0x1c]
  0x00411669: push     ecx
  0x0041166A: call     dword ptr [0x4a240c]
  0x00411646: push     0
  0x00411648: push     0
  0x0041164A: mov      ecx, esi
  0x0041164C: call     0x417eb0
  0x004116F8: lea      eax, [esp + 0xb4]
  0x004116FF: mov      ecx, edi
  0x00411701: push     eax
  0x00411702: mov      dword ptr [esp + 0xa0], esi
  0x00411709: mov      dword ptr [esp + 0x14], esi
  0x0041170D: call     0x40f200
  0x00411670: test     eax, eax
  0x00411672: je       0x41168f
  0x00411712: cmp      eax, esi
  0x00411714: mov      dword ptr [esp + 0x28], esi
  0x00411718: jle      0x411741
  0x0041168F: mov      edx, dword ptr [esi + 0x1c]
  0x00411692: push     edx
  0x00411693: call     dword ptr [0x4a2504]
  0x00411674: push     9
  0x00411676: mov      ecx, esi
  0x00411678: call     0x497580
  0x00411741: lea      ecx, [esp + 0x54]
  0x00411745: call     0x4062a0
  0x0041171A: mov      edx, dword ptr [esp + 0xb4]
  0x00411721: lea      ecx, [esp + 0x28]
  0x00411725: push     esi
  0x00411726: push     ecx
  0x00411727: push     esi
  0x00411728: push     -1
  0x0041172A: push     eax
  0x0041172B: push     esi
  0x0041172C: push     edx
  0x0041172D: mov      ecx, edi
  0x0041172F: call     0x40e730
  0x00411699: push     eax
  0x0041169A: call     0x494bb2
  0x0041167D: pop      edi
  0x0041167E: pop      esi
  0x0041167F: pop      ebp
  0x00411680: mov      eax, 1
  0x00411685: pop      ebx
  0x00411686: add      esp, 0xd4
  0x0041168C: ret      0x14
  0x0041174A: mov      esi, 0x2f954b0
  0x0041174F: lea      ecx, [esp + 0x7c]
  0x00411753: mov      dword ptr [esp + 0x54], esi
  0x00411757: call     0x4062a0
  0x00411734: push     eax
  0x00411735: call     0x41fcb0
  0x0041169F: pop      edi
  0x004116A0: pop      esi
  0x004116A1: pop      ebp
  0x004116A2: mov      eax, 1
  0x004116A7: pop      ebx
  0x004116A8: add      esp, 0xd4
  0x004116AE: ret      0x14
  0x0041175C: lea      ecx, [esp + 0x68]
  0x00411760: mov      dword ptr [esp + 0x7c], esi
  0x00411764: call     0x4062a0
  0x0041173A: add      esp, 0x18
  0x0041173D: mov      dword ptr [esp + 0x10], eax
  0x00411741: lea      ecx, [esp + 0x54]
  0x00411745: call     0x4062a0
  0x00411769: lea      ecx, [esp + 0x34]
  0x0041176D: mov      dword ptr [esp + 0x68], esi
  0x00411771: call     0x4062a0
  0x00411776: mov      esi, dword ptr [ebx + 0x18]
  0x00411779: mov      ebx, esi
  0x0041177B: mov      dword ptr [esp + 0x30], esi
  0x0041177F: test     esi, esi
  0x00411781: mov      dword ptr [esp + 0x1c], ebx
  0x00411785: jle      0x411a49
  0x00411A49: mov      eax, dword ptr [esp + 0x78]
  0x00411A4D: mov      esi, dword ptr [esp + 0x70]
  0x00411A51: neg      eax
  0x00411A53: sbb      eax, eax
  0x00411A55: mov      ecx, dword ptr [esp + 0x5c]
  0x00411A59: and      eax, esi
  0x00411A5B: mov      ebx, dword ptr [esp + 0x84]
  0x00411A62: mov      dword ptr [esp + 0x48], eax
  0x00411A66: mov      eax, dword ptr [esp + 0x64]
  0x00411A6A: mov      edi, eax
  0x00411A6C: mov      edx, dword ptr [esp + 0x3c]
  0x00411A70: neg      edi
  0x00411A72: sbb      edi, edi
  0x00411A74: mov      esi, dword ptr [esp + 0x14]
  0x00411A78: and      edi, ecx
  0x00411A7A: mov      ecx, dword ptr [esp + 0x8c]
  0x00411A81: neg      ecx
  0x00411A83: sbb      ecx, ecx
  0x00411A85: and      ecx, ebx
  0x00411A87: mov      ebx, 1
  0x00411A8C: mov      dword ptr [esp + 0x20], ecx
  0x00411A90: mov      ecx, dword ptr [esp + 0x44]
  0x00411A94: neg      ecx
  0x00411A96: sbb      ecx, ecx
  0x00411A98: mov      dword ptr [esp + 0x10], ebx
  0x00411A9C: and      ecx, edx
  0x00411A9E: shr      eax, 2
  0x00411AA1: mov      dword ptr [esp + 0x24], ecx
  0x00411AA5: mov      dword ptr [esp + 0x1c], eax
  0x00411AA9: push     0
  0x00411AAB: push     ebx
  0x00411AAC: mov      ecx, esi
  0x00411AAE: call     0x40e730
  0x0041178B: mov      edi, ebx
  0x0041178D: mov      ecx, dword ptr [esp + 0x14]
  0x00411791: sub      edi, esi
  0x00411793: push     0
  0x00411795: neg      edi
  0x00411797: sbb      edi, edi
  0x00411799: and      edi, ebx
  0x0041179B: push     edi
  0x0041179C: call     0x40e730
  0x00411AB3: mov      ebp, eax
  0x00411AB5: test     ebp, ebp
  0x00411AB7: je       0x411c72
  0x004117A1: mov      ebp, eax
  0x004117A3: test     ebp, ebp
  0x004117A5: je       0x411a49
  0x00411C72: mov      ebx, 1
  0x00411C77: mov      dword ptr [esp + 0x10], ebx
  0x00411C7B: push     0
  0x00411C7D: push     ebx
  0x00411C7E: mov      ecx, esi
  0x00411C80: call     0x40e730
  0x00411ABD: push     ebx
  0x00411ABE: mov      ecx, esi
  0x00411AC0: call     0x40ee10
  0x004117AB: mov      ecx, dword ptr [esp + 0x14]
  0x004117AF: push     edi
  0x004117B0: call     0x40ee10
  0x00411C85: mov      edi, eax
  0x00411C87: test     edi, edi
  0x00411C89: je       0x411d78
  0x00411AC5: cmp      eax, 1
  0x00411AC8: jne      0x411b92
  0x004117B5: cmp      eax, 1
  0x004117B8: jne      0x4117c4
  0x00411D78: xor      esi, esi
  0x00411D7A: mov      ebx, dword ptr [esp + 0x14]
  0x00411D7E: mov      eax, esi
  0x00411D80: push     0
  0x00411D82: push     eax
  0x00411D83: mov      ecx, ebx
  0x00411D85: inc      esi
  0x00411D86: call     0x40e730
  0x00411C8F: push     ebx
  0x00411C90: mov      ecx, esi
  0x00411C92: call     0x40ee10
  0x00411ACE: inc      ebx
  0x00411ACF: mov      dword ptr [esp + 0x10], ebx
  0x00411AD3: jmp      0x411aa9
  0x00411B92: mov      eax, dword ptr [esp + 0x10]
  0x00411B96: mov      ecx, dword ptr [esp + 0x14]
  0x00411B9A: push     eax
  0x00411B9B: call     0x40e780
  0x004117BA: dec      ebx
  0x004117BB: mov      dword ptr [esp + 0x1c], ebx
  0x004117BF: jmp      0x411a41
  0x004117C4: mov      eax, dword ptr [ebp]
  0x004117C7: push     0
  0x004117C9: push     eax
  0x004117CA: push     0x3ea
  0x004117CF: call     0x413d70
  0x00411D8B: mov      edi, eax
  0x00411D8D: test     edi, edi
  0x00411D8F: je       0x411df7
  0x00411C97: cmp      eax, 1
  0x00411C9A: jne      0x411c9f
  0x00411AA9: push     0
  0x00411AAB: push     ebx
  0x00411AAC: mov      ecx, esi
  0x00411AAE: call     0x40e730
  0x00411BA0: push     eax
  0x00411BA1: mov      ecx, dword ptr [esp + 0x20]
  0x00411BA5: push     ecx
  0x00411BA6: push     edi
  0x00411BA7: call     0x406d80
  0x00411A41: test     ebx, ebx
  0x00411A43: jg       0x41178b
  0x004117D4: mov      ebx, eax
  0x004117D6: test     ebx, ebx
  0x004117D8: je       0x411b69
  0x00411DF7: mov      edx, dword ptr [esp + 0xe8]
  0x00411DFE: mov      ebx, dword ptr [edx + 0x18]
  0x00411E01: dec      ebx
  0x00411E02: js       0x411e6d
  0x00411D91: lea      edx, [esi - 1]
  0x00411D94: mov      ecx, ebx
  0x00411D96: push     edx
  0x00411D97: call     0x40ee10
  0x00411C9C: inc      ebx
  0x00411C9D: jmp      0x411c77
  0x00411C9F: add      edi, 0x18
  0x00411CA2: push     edi
  0x00411CA3: call     0x406cf0
  0x00411BAC: mov      edx, dword ptr [esp + 0x2c]
  0x00411BB0: mov      ebx, eax
  0x00411BB2: lea      esi, [ebp + 0x18]
  0x00411BB5: mov      eax, dword ptr [edx + ebx*4]
  0x00411BB8: push     esi
  0x00411BB9: mov      dword ptr [esp + 0x40], eax
  0x00411BBD: call     0x406cf0
  0x00411B69: mov      eax, dword ptr [esp + 0x28]
  0x00411B6D: test     eax, eax
  0x00411B6F: je       0x411b78
  0x004117DE: mov      eax, dword ptr [ebx + 0x2c]
  0x004117E1: test     eax, eax
  0x004117E3: je       0x411b69
  0x00411E6D: xor      ebp, ebp
  0x00411E6F: mov      edx, dword ptr [esp + 0x18]
  0x00411E73: push     ebp
  0x00411E74: push     ebp
  0x00411E75: push     0x8004
  0x00411E7A: mov      eax, dword ptr [edx + 0x1c]
  0x00411E7D: push     eax
  0x00411E7E: call     dword ptr [0x4a2564]
  0x00411E04: lea      esi, [ebx + 1]
  0x00411E07: xor      ebp, ebp
  0x00411E09: mov      ecx, dword ptr [esp + 0x14]
  0x00411E0D: mov      eax, ebx
  0x00411E0F: push     ebp
  0x00411E10: dec      ebx
  0x00411E11: push     eax
  0x00411E12: dec      esi
  0x00411E13: call     0x40e730
  0x00411D9C: cmp      eax, 1
  0x00411D9F: je       0x411d7a
  0x00411C77: mov      dword ptr [esp + 0x10], ebx
  0x00411C7B: push     0
  0x00411C7D: push     ebx
  0x00411C7E: mov      ecx, esi
  0x00411C80: call     0x40e730
  0x00411CA8: add      edi, eax
  0x00411CAA: push     edi
  0x00411CAB: call     0x406cf0
  0x00411BC2: add      esi, eax
  0x00411BC4: push     esi
  0x00411BC5: call     0x406cf0
  0x00411B78: mov      eax, dword ptr [esp + 0x10]
  0x00411B7C: test     eax, eax
  0x00411B7E: je       0x411b87
  0x00411B71: push     eax
  0x00411B72: call     dword ptr [0x4a23f4]
  0x004117E9: push     1
  0x004117EB: call     eax
  0x00411E84: mov      edi, 1
  0x00411E89: mov      esi, dword ptr [esp + 0x1c]
  0x00411E8D: cmp      esi, edi
  0x00411E8F: jle      0x411ebd
  0x00411E18: mov      edi, eax
  0x00411E1A: cmp      edi, ebp
  0x00411E1C: je       0x411e6f
  0x00411D7A: mov      ebx, dword ptr [esp + 0x14]
  0x00411D7E: mov      eax, esi
  0x00411D80: push     0
  0x00411D82: push     eax
  0x00411D83: mov      ecx, ebx
  0x00411D85: inc      esi
  0x00411D86: call     0x40e730
  0x00411DA1: lea      ebx, [edi + 0x18]
  0x00411DA4: mov      edi, ebx
  0x00411DA6: push     edi
  0x00411DA7: call     0x406cf0
  0x00411CB0: mov      edx, dword ptr [esp + 0x18]
  0x00411CB4: mov      ecx, dword ptr [eax + edi]
  0x00411CB7: mov      ebp, dword ptr [eax + edi + 0x18]
  0x00411CBB: add      eax, edi
  0x00411CBD: mov      eax, edx
  0x00411CBF: add      esp, 8
  0x00411CC2: cmp      eax, 2
  0x00411CC5: mov      dword ptr [esp + 0x2c], ecx
  0x00411CC9: lea      ebx, [edx - 1]
  0x00411CCC: jl       0x411d07
  0x00411BCA: lea      esi, [eax + esi + 0x18]
  0x00411BCE: add      esp, 0x14
  0x00411BD1: mov      eax, dword ptr [esi]
  0x00411BD3: test     eax, eax
  0x00411BD5: je       0x411bef
  0x00411B87: mov      ecx, dword ptr [esp + 0x20]
  0x00411B8B: mov      edx, dword ptr [ecx]
  0x00411B8D: call     dword ptr [edx + 8]
  0x00411B80: push     eax
  0x00411B81: call     dword ptr [0x4a2528]
  0x004117ED: test     eax, eax
  0x004117EF: mov      dword ptr [esp + 0x24], eax
  0x004117F3: je       0x411b69
  0x00411EBD: mov      eax, dword ptr [esp + 0x18]
  0x00411EC1: mov      eax, dword ptr [eax + 0x1dc]
  0x00411EC7: cmp      eax, ebp
  0x00411EC9: je       0x411ed2
  0x00411E91: mov      ecx, dword ptr [esp + 0x20]
  0x00411E95: mov      ebp, dword ptr [esp + 0x24]
  0x00411E99: lea      ebx, [ecx + 4]
  0x00411E9C: mov      dl, byte ptr [edi + ebp]
  0x00411E9F: mov      ecx, dword ptr [ebx]
  0x00411EA1: dec      dl
  0x00411EA3: neg      dl
  0x00411EA5: sbb      edx, edx
  0x00411EA7: and      edx, 0xfffffff8
  0x00411EAA: add      edx, 8
  0x00411EAD: push     edx
  0x00411EAE: call     0x497580
  0x00411E6F: mov      edx, dword ptr [esp + 0x18]
  0x00411E73: push     ebp
  0x00411E74: push     ebp
  0x00411E75: push     0x8004
  0x00411E7A: mov      eax, dword ptr [edx + 0x1c]
  0x00411E7D: push     eax
  0x00411E7E: call     dword ptr [0x4a2564]
  0x00411E1E: mov      ecx, dword ptr [esp + 0x14]
  0x00411E22: push     esi
  0x00411E23: call     0x40ee10
  0x00411DAC: add      edi, eax
  0x00411DAE: push     edi
  0x00411DAF: call     0x406cf0
  0x00411D07: mov      eax, dword ptr [esp + 0x2c]
  0x00411D0B: push     0x13
  0x00411D0D: push     0
  0x00411D0F: push     0
  0x00411D11: mov      ecx, dword ptr [eax + 0x1c]
  0x00411D14: push     0
  0x00411D16: push     0
  0x00411D18: push     0
  0x00411D1A: push     ecx
  0x00411D1B: call     dword ptr [0x4a2568]
  0x00411CCE: push     0
  0x00411CD0: push     ebx
  0x00411CD1: mov      ecx, esi
  0x00411CD3: call     0x40e730
  0x00411BEF: mov      eax, dword ptr [esp + 0x18]
  0x00411BF3: test     eax, eax
  0x00411BF5: je       0x411bfa
  0x00411BD7: mov      ecx, dword ptr [esp + 0x1c]
  0x00411BDB: push     eax
  0x00411BDC: push     ecx
  0x00411BDD: push     edi
  0x00411BDE: call     0x406d80
  0x00411B90: jmp      0x411b21
  0x004117F9: lea      esi, [ebp + 0x18]
  0x004117FC: push     esi
  0x004117FD: call     0x406cf0
  0x00411ED2: mov      edx, dword ptr [esp + 0x18]
  0x00411ED6: mov      ecx, dword ptr [esp + 0x28]
  0x00411EDA: push     ebp
  0x00411EDB: push     ebp
  0x00411EDC: push     0x7da
  0x00411EE1: mov      dword ptr [edx + 0x1dc], ecx
  0x00411EE7: call     0x413d70
  0x00411ECB: push     eax
  0x00411ECC: call     dword ptr [0x4a23f4]
  0x00411EB3: inc      edi
  0x00411EB4: add      ebx, 4
  0x00411EB7: cmp      edi, esi
  0x00411EB9: jl       0x411e9c
  0x00411E28: test     eax, eax
  0x00411E2A: jne      0x411e67
  0x00411DB4: mov      ecx, dword ptr [edi + eax + 0x1c]
  0x00411DB8: lea      eax, [edi + eax + 0x1c]
  0x00411DBC: mov      edi, ebx
  0x00411DBE: push     edi
  0x00411DBF: lea      ebp, [eax + ecx*4 + 4]
  0x00411DC3: call     0x406cf0
  0x00411D21: mov      eax, dword ptr [esp + 0x10]
  0x00411D25: inc      eax
  0x00411D26: mov      dword ptr [esp + 0x10], eax
  0x00411D2A: mov      ebx, eax
  0x00411D2C: jmp      0x411c7b
  0x00411CD8: push     ebx
  0x00411CD9: mov      ecx, esi
  0x00411CDB: mov      edi, eax
  0x00411CDD: call     0x40ee10
  0x00411BFA: push     eax
  0x00411BFB: mov      eax, dword ptr [esp + 0x34]
  0x00411BFF: mov      ecx, dword ptr [eax + 0x1c]
  0x00411C02: push     ecx
  0x00411C03: call     dword ptr [0x4a255c]
  0x00411BF7: mov      eax, dword ptr [eax + 0x1c]
  0x00411BFA: push     eax
  0x00411BFB: mov      eax, dword ptr [esp + 0x34]
  0x00411BFF: mov      ecx, dword ptr [eax + 0x1c]
  0x00411C02: push     ecx
  0x00411C03: call     dword ptr [0x4a255c]
  0x00411BE3: mov      edx, dword ptr [esp + 0x2c]
  0x00411BE7: add      esp, 0xc
  0x00411BEA: mov      eax, dword ptr [edx + eax*4]
  0x00411BED: jmp      0x411bf3
  0x00411B21: mov      esi, 0x2f95460
  0x00411B26: lea      ecx, [esp + 0x34]
  0x00411B2A: mov      dword ptr [esp + 0x34], esi
  0x00411B2E: call     0x4064a0
  0x00411802: add      esi, eax
  0x00411804: push     esi
  0x00411805: call     0x406cf0
  0x00411EEC: push     ebp
  0x00411EED: mov      ecx, dword ptr [esp + 0x18]
  0x00411EF1: call     0x40e780
  0x00411E9C: mov      dl, byte ptr [edi + ebp]
  0x00411E9F: mov      ecx, dword ptr [ebx]
  0x00411EA1: dec      dl
  0x00411EA3: neg      dl
  0x00411EA5: sbb      edx, edx
  0x00411EA7: and      edx, 0xfffffff8
  0x00411EAA: add      edx, 8
  0x00411EAD: push     edx
  0x00411EAE: call     0x497580
  0x00411EBB: xor      ebp, ebp
  0x00411EBD: mov      eax, dword ptr [esp + 0x18]
  0x00411EC1: mov      eax, dword ptr [eax + 0x1dc]
  0x00411EC7: cmp      eax, ebp
  0x00411EC9: je       0x411ed2
  0x00411E2C: add      edi, 0x18
  0x00411E2F: push     edi
  0x00411E30: call     0x406cf0
  0x00411E67: cmp      ebx, ebp
  0x00411E69: jge      0x411e09
  0x00411DC8: add      edi, eax
  0x00411DCA: push     edi
  0x00411DCB: call     0x406cf0
  0x00411C7B: push     0
  0x00411C7D: push     ebx
  0x00411C7E: mov      ecx, esi
  0x00411C80: call     0x40e730
  0x00411CE2: test     eax, eax
  0x00411CE4: jne      0x411d01
  0x00411C09: push     eax
  0x00411C0A: call     0x494bb2
  0x00411BF3: test     eax, eax
  0x00411BF5: je       0x411bfa
  0x00411B33: lea      ecx, [esp + 0x68]
  0x00411B37: mov      dword ptr [esp + 0x68], esi
  0x00411B3B: call     0x4064a0
  0x0041180A: add      esp, 8
  0x0041180D: lea      ecx, [esp + 0x90]
  0x00411814: add      esi, eax
  0x00411816: push     ecx
  0x00411817: push     ebp
  0x00411818: mov      ebp, dword ptr [esp + 0x1c]
  0x0041181C: mov      dword ptr [esp + 0x50], esi
  0x00411820: mov      ecx, ebp
  0x00411822: add      esi, 4
  0x00411825: call     0x40ee30
  0x00411EF6: mov      edi, eax
  0x00411EF8: lea      eax, [esp + 0xb8]
  0x00411EFF: mov      esi, dword ptr [esp + 0x4c]
  0x00411F03: push     ebp
  0x00411F04: push     eax
  0x00411F05: push     0x7d8
  0x00411F0A: mov      dword ptr [esp + 0xc4], esi
  0x00411F11: mov      dword ptr [esp + 0xc8], edi
  0x00411F18: mov      dword ptr [esp + 0xcc], ebp
  0x00411F1F: mov      dword ptr [esp + 0xd0], ebp
  0x00411F26: mov      dword ptr [esp + 0xe8], ebp
  0x00411F2D: mov      dword ptr [esp + 0xec], ebp
  0x00411F34: call     0x413d70
  0x00411E35: add      edi, eax
  0x00411E37: push     edi
  0x00411E38: call     0x406cf0
  0x00411E6B: jmp      0x411e6f
  0x00411E09: mov      ecx, dword ptr [esp + 0x14]
  0x00411E0D: mov      eax, ebx
  0x00411E0F: push     ebp
  0x00411E10: dec      ebx
  0x00411E11: push     eax
  0x00411E12: dec      esi
  0x00411E13: call     0x40e730
  0x00411DD0: lea      edi, [eax + edi + 0x14]
  0x00411DD4: mov      eax, dword ptr [ebp]
  0x00411DD7: add      esp, 0x10
  0x00411DDA: test     eax, eax
  0x00411DDC: jle      0x411def
  0x00411CE6: add      edi, 0x18
  0x00411CE9: push     edi
  0x00411CEA: call     0x406cf0
  0x00411D01: dec      ebx
  0x00411D02: cmp      ebx, 1
  0x00411D05: jge      0x411cce
  0x00411C0F: mov      edx, dword ptr [esp + 0x48]
  0x00411C13: cmp      dword ptr [edx + ebx*4], 0
  0x00411C17: je       0x411c5e
  0x00411B40: lea      ecx, [esp + 0x7c]
  0x00411B44: mov      dword ptr [esp + 0x7c], esi
  0x00411B48: call     0x4064a0
  0x0041182A: push     edi
  0x0041182B: mov      ecx, ebp
  0x0041182D: mov      dword ptr [esp + 0xac], eax
  0x00411834: call     0x40e780
  0x00411F39: mov      ebx, dword ptr [esp + 0x9c]
  0x00411F40: push     ebx
  0x00411F41: call     dword ptr [0x4a2558]
  0x00411E3D: add      edi, eax
  0x00411E3F: add      esp, 8
  0x00411E42: mov      edi, dword ptr [edi]
  0x00411E44: cmp      edi, ebp
  0x00411E46: je       0x411e67
  0x00411DEF: mov      dword ptr [edi], 0
  0x00411DF5: jmp      0x411d7a
  0x00411DDE: add      ebp, 4
  0x00411DE1: push     eax
  0x00411DE2: push     ebp
  0x00411DE3: call     0x41cc40
  0x00411CEF: add      edi, eax
  0x00411CF1: push     edi
  0x00411CF2: call     0x406cf0
  0x00411C5E: mov      eax, dword ptr [esp + 0x10]
  0x00411C62: mov      esi, dword ptr [esp + 0x14]
  0x00411C66: inc      eax
  0x00411C67: mov      dword ptr [esp + 0x10], eax
  0x00411C6B: mov      ebx, eax
  0x00411C6D: jmp      0x411aa9
  0x00411C19: mov      eax, dword ptr [esi + 4]
  0x00411C1C: add      esi, 4
  0x00411C1F: add      esi, 4
  0x00411C22: test     eax, eax
  0x00411C24: jle      0x411c5e
  0x00411B4D: lea      ecx, [esp + 0x54]
  0x00411B51: mov      dword ptr [esp + 0x54], esi
  0x00411B55: call     0x4064a0
  0x00411839: mov      edx, dword ptr [ebx + 0x14]
  0x0041183C: lea      ecx, [esp + 0x68]
  0x00411840: shr      edx, 8
  0x00411843: and      edx, 1
  0x00411846: mov      dword ptr [esp + 0xb0], eax
  0x0041184D: push     edx
  0x0041184E: call     0x4065a0
  0x00411F47: test     eax, eax
  0x00411F49: je       0x4121a0
  0x00411E48: mov      eax, dword ptr [edi + 0x1c]
  0x00411E4B: push     eax
  0x00411E4C: call     dword ptr [0x4a2558]
  0x00411DE8: add      esp, 8
  0x00411DEB: mov      dword ptr [edi], eax
  0x00411DED: jmp      0x411d7a
  0x00411CF7: add      edi, eax
  0x00411CF9: add      esp, 8
  0x00411CFC: cmp      dword ptr [edi + 0x18], ebp
  0x00411CFF: je       0x411d31
  0x00411C26: cmp      dword ptr [esi], 0
  0x00411C29: je       0x411c35
  0x00411853: mov      eax, dword ptr [esi]
  0x00411855: mov      ecx, dword ptr [esi + 4]
  0x00411858: mov      edx, dword ptr [esi + 8]
  0x0041185B: mov      dword ptr [esp + 0x94], eax
  0x00411862: mov      eax, dword ptr [esi + 0xc]
  0x00411865: add      esi, 0x18
  0x00411868: mov      dword ptr [esp + 0xa4], ecx
  0x0041186F: mov      dword ptr [esp + 0xac], eax
  0x00411876: mov      ecx, dword ptr [esi]
  0x00411878: mov      dword ptr [esp + 0xa0], edx
  0x0041187F: xor      ebp, ebp
  0x00411881: mov      edx, dword ptr [esi + ecx*4 + 4]
  0x00411885: lea      eax, [esi + ecx*4 + 4]
  0x00411889: lea      esi, [eax + edx + 4]
  0x0041188D: push     esi
  0x0041188E: call     0x406cf0
  0x004121A0: mov      esi, 0x2f95460
  0x004121A5: lea      ecx, [esp + 0x34]
  0x004121A9: mov      dword ptr [esp + 0x34], esi
  0x004121AD: call     0x4064a0
  0x00411F4F: lea      ecx, [esp + 0xb8]
  0x00411F56: push     ebp
  0x00411F57: push     ecx
  0x00411F58: push     0x7d8
  0x00411F5D: mov      dword ptr [esp + 0xc4], esi
  0x00411F64: mov      dword ptr [esp + 0xc8], edi
  0x00411F6B: mov      dword ptr [esp + 0xcc], 3
  0x00411F76: mov      dword ptr [esp + 0xd0], ebp
  0x00411F7D: mov      dword ptr [esp + 0xe8], ebp
  0x00411F84: mov      dword ptr [esp + 0xec], ebp
  0x00411F8B: call     0x413d70
  0x00411E52: test     eax, eax
  0x00411E54: je       0x411e67
  0x00411D31: cmp      ebx, 1
  0x00411D34: jl       0x411d07
  0x00411C35: test     eax, eax
  0x00411C37: jle      0x411c5e
  0x00411C2B: dec      eax
  0x00411C2C: add      esi, 4
  0x00411C2F: test     eax, eax
  0x00411C31: jg       0x411c26
  0x00411893: mov      ecx, dword ptr [ebx + 0x14]
  0x00411896: lea      esi, [esi + eax + 4]
  0x0041189A: add      esp, 4
  0x0041189D: mov      eax, dword ptr [esi]
  0x0041189F: test     ch, 0x80
  0x004118A2: mov      dword ptr [esp + 0x98], eax
  0x004118A9: je       0x4118b7
  0x004121B2: lea      ecx, [esp + 0x68]
  0x004121B6: mov      dword ptr [esp + 0x68], esi
  0x004121BA: call     0x4064a0
  0x00411F90: push     ebx
  0x00411F91: call     dword ptr [0x4a2558]
  0x00411E56: mov      ecx, dword ptr [edi + 0x1c]
  0x00411E59: push     ebp
  0x00411E5A: push     ebp
  0x00411E5B: push     0x806f
  0x00411E60: push     ecx
  0x00411E61: call     dword ptr [0x4a2564]
  0x00411D36: push     0
  0x00411D38: push     ebx
  0x00411D39: mov      ecx, esi
  0x00411D3B: call     0x40e730
  0x00411C39: mov      ebx, dword ptr [esp + 0x24]
  0x00411C3D: mov      ebp, eax
  0x00411C3F: mov      eax, dword ptr [esi]
  0x00411C41: test     eax, eax
  0x00411C43: je       0x411c58
  0x00411C33: jmp      0x411c5e
  0x004118B7: mov      ecx, dword ptr [esp + 0xec]
  0x004118BE: test     ecx, ecx
  0x004118C0: je       0x4118d3
  0x004118AB: push     ebp
  0x004118AC: lea      ecx, [esp + 0x38]
  0x004118B0: call     0x406570
  0x004121BF: lea      ecx, [esp + 0x7c]
  0x004121C3: mov      dword ptr [esp + 0x7c], esi
  0x004121C7: call     0x4064a0
  0x00411F97: test     eax, eax
  0x00411F99: je       0x4121a0
  0x00411D40: test     eax, eax
  0x00411D42: je       0x411d21
  0x00411C58: add      esi, 4
  0x00411C5B: dec      ebp
  0x00411C5C: jne      0x411c3f
  0x00411C45: push     eax
  0x00411C46: mov      eax, dword ptr [esp + 0x20]
  0x00411C4A: push     eax
  0x00411C4B: push     edi
  0x00411C4C: call     0x406d80
  0x004118D3: and      al, 1
  0x004118D5: lea      ecx, [esp + 0x34]
  0x004118D9: push     eax
  0x004118DA: call     0x406570
  0x004118C2: test     edi, edi
  0x004118C4: jne      0x4118d3
  0x004118B5: jmp      0x4118ee
  0x004121CC: lea      ecx, [esp + 0x54]
  0x004121D0: mov      dword ptr [esp + 0x54], esi
  0x004121D4: call     0x4064a0
  0x00411F9F: lea      edx, [esp + 0xb8]
  0x00411FA6: push     ebp
  0x00411FA7: push     edx
  0x00411FA8: push     0x7d8
  0x00411FAD: mov      dword ptr [esp + 0xc4], esi
  0x00411FB4: mov      dword ptr [esp + 0xc8], edi
  0x00411FBB: mov      dword ptr [esp + 0xcc], 4
  0x00411FC6: mov      dword ptr [esp + 0xd0], ebp
  0x00411FCD: mov      dword ptr [esp + 0xe8], ebp
  0x00411FD4: mov      dword ptr [esp + 0xec], ebp
  0x00411FDB: call     0x413d70
  0x00411D44: lea      edi, [eax + 0x18]
  0x00411D47: push     edi
  0x00411D48: call     0x406cf0
  0x00411C3F: mov      eax, dword ptr [esi]
  0x00411C41: test     eax, eax
  0x00411C43: je       0x411c58
  0x00411C51: add      esp, 0xc
  0x00411C54: mov      byte ptr [eax + ebx], 0
  0x00411C58: add      esi, 4
  0x00411C5B: dec      ebp
  0x00411C5C: jne      0x411c3f
  0x004118DF: test     byte ptr [esp + 0x98], 2
  0x004118E7: je       0x4118ee
  0x004118C6: push     1
  0x004118C8: lea      ecx, [esp + 0x38]
  0x004118CC: call     0x406570
  0x004118EE: test     byte ptr [esp + 0x98], 4
  0x004118F6: je       0x4118fe
  0x004121D9: pop      edi
  0x004121DA: pop      esi
  0x004121DB: pop      ebp
  0x004121DC: mov      eax, 1
  0x004121E1: pop      ebx
  0x004121E2: add      esp, 0xd4
  0x004121E8: ret      0x14
  0x00411FE0: push     ebx
  0x00411FE1: call     dword ptr [0x4a2558]
  0x00411D4D: add      edi, eax
  0x00411D4F: push     edi
  0x00411D50: call     0x406cf0
  0x004118E9: mov      ebp, 0x8000000
  0x004118EE: test     byte ptr [esp + 0x98], 4
  0x004118F6: je       0x4118fe
  0x004118D1: jmp      0x4118ee
  0x004118FE: test     edi, edi
  0x00411900: jne      0x4119af
  0x004118F8: or       ebp, 0x10000
  0x004118FE: test     edi, edi
  0x00411900: jne      0x4119af
  0x00411FE7: test     eax, eax
  0x00411FE9: je       0x4121a0
  0x00411D55: add      edi, eax
  0x00411D57: add      esp, 8
  0x00411D5A: mov      edi, dword ptr [edi]
  0x00411D5C: test     edi, edi
  0x00411D5E: je       0x411d21
  0x00411906: mov      eax, dword ptr [esp + 0xf4]
  0x0041190D: mov      ecx, dword ptr [esp + 0x4c]
  0x00411911: mov      edx, dword ptr [esp + 0xac]
  0x00411918: push     edi
  0x00411919: mov      ebx, dword ptr [esp + 0x14]
  0x0041191D: push     edi
  0x0041191E: mov      edi, dword ptr [esp + 0xb8]
  0x00411925: mov      dword ptr [0x2fe8638], eax
  0x0041192A: mov      eax, dword ptr [esp + 0xa8]
  0x00411931: push     edi
  0x00411932: push     ecx
  0x00411933: mov      ecx, dword ptr [esp + 0xb4]
  0x0041193A: push     edx
  0x0041193B: mov      edx, dword ptr [esp + 0xa8]
  0x00411942: push     eax
  0x00411943: mov      eax, dword ptr [esp + 0x110]
  0x0041194A: push     ecx
  0x0041194B: mov      ecx, dword ptr [esp + 0xac]
  0x00411952: push     edx
  0x00411953: mov      edx, dword ptr [esp + 0xc8]
  0x0041195A: push     ebx
  0x0041195B: push     0
  0x0041195D: push     eax
  0x0041195E: push     ebp
  0x0041195F: push     ecx
  0x00411960: push     edx
  0x00411961: call     dword ptr [esp + 0x5c]
  0x004119AF: mov      edi, dword ptr [esp + 0xb0]
  0x004119B6: mov      ecx, dword ptr [esp + 0x4c]
  0x004119BA: mov      edx, dword ptr [esp + 0xac]
  0x004119C1: mov      eax, dword ptr [esp + 0xa0]
  0x004119C8: push     0
  0x004119CA: mov      ebx, dword ptr [esp + 0x30]
  0x004119CE: push     0
  0x004119D0: push     edi
  0x004119D1: push     ecx
  0x004119D2: mov      ecx, dword ptr [esp + 0xb4]
  0x004119D9: push     edx
  0x004119DA: mov      edx, dword ptr [esp + 0xa8]
  0x004119E1: push     eax
  0x004119E2: mov      eax, dword ptr [esp + 0x30]
  0x004119E6: push     ecx
  0x004119E7: push     edx
  0x004119E8: mov      ecx, dword ptr [eax + 0x1c]
  0x004119EB: mov      edx, dword ptr [esp + 0xb0]
  0x004119F2: mov      eax, dword ptr [esp + 0xc8]
  0x004119F9: push     0
  0x004119FB: push     ebx
  0x004119FC: push     ecx
  0x004119FD: push     ebp
  0x004119FE: push     edx
  0x004119FF: push     eax
  0x00411A00: call     dword ptr [esp + 0x5c]
  0x00411FEF: mov      eax, dword ptr [esp + 0x44]
  0x00411FF3: mov      edx, dword ptr [esp + 0x3c]
  0x00411FF7: neg      eax
  0x00411FF9: sbb      eax, eax
  0x00411FFB: and      eax, edx
  0x00411FFD: cmp      byte ptr [eax], 0
  0x00412000: je       0x41201d
  0x00411D60: mov      ecx, dword ptr [esp + 0x2c]
  0x00411D64: mov      eax, dword ptr [edi + 0x1c]
  0x00411D67: push     0x13
  0x00411D69: push     0
  0x00411D6B: mov      edx, dword ptr [ecx + 0x1c]
  0x00411D6E: push     0
  0x00411D70: push     0
  0x00411D72: push     0
  0x00411D74: push     eax
  0x00411D75: push     edx
  0x00411D76: jmp      0x411d1b
  0x00411965: mov      esi, eax
  0x00411967: xor      ebp, ebp
  0x00411969: cmp      esi, ebp
  0x0041196B: mov      dword ptr [0x2fe8638], ebp
  0x00411971: mov      dword ptr [esp + 0x18], esi
  0x00411975: je       0x411ad5
  0x00411A04: add      ebx, 0xa
  0x00411A07: mov      esi, eax
  0x00411A09: mov      dword ptr [esp + 0x2c], ebx
  0x00411A0D: test     esi, esi
  0x00411A0F: je       0x411afa
  0x0041201D: push     ebx
  0x0041201E: call     dword ptr [0x4a2558]
  0x00412002: mov      eax, dword ptr [esp + 0xec]
  0x00412009: mov      ecx, dword ptr [esp + 0xe8]
  0x00412010: push     eax
  0x00412011: push     ecx
  0x00412012: push     esi
  0x00412013: mov      ecx, 0x2fe8230
  0x00412018: call     0x4114b0
  0x00411D1B: call     dword ptr [0x4a2568]
  0x00411AD5: mov      eax, dword ptr [esp + 0x28]
  0x00411AD9: cmp      eax, ebp
  0x00411ADB: je       0x411ae4
  0x0041197B: mov      eax, dword ptr [esi + 0x1c]
  0x0041197E: cmp      eax, ebp
  0x00411980: mov      dword ptr [esp + 0x9c], eax
  0x00411987: je       0x411ad5
  0x00411AFA: mov      eax, dword ptr [esp + 0x28]
  0x00411AFE: test     eax, eax
  0x00411B00: je       0x411b09
  0x00411A15: mov      ecx, dword ptr [esp + 0x48]
  0x00411A19: push     edi
  0x00411A1A: mov      dword ptr [ecx], esi
  0x00411A1C: lea      ecx, [esp + 0x58]
  0x00411A20: call     0x4065a0
  0x00412024: test     eax, eax
  0x00412026: je       0x4120f0
  0x00411AE4: cmp      ebx, ebp
  0x00411AE6: je       0x411aef
  0x00411ADD: push     eax
  0x00411ADE: call     dword ptr [0x4a23f4]
  0x0041198D: push     eax
  0x0041198E: call     dword ptr [0x4a2558]
  0x00411B09: mov      eax, dword ptr [esp + 0x10]
  0x00411B0D: test     eax, eax
  0x00411B0F: je       0x411b18
  0x00411B02: push     eax
  0x00411B03: call     dword ptr [0x4a23f4]
  0x00411A25: push     esi
  0x00411A26: lea      ecx, [esp + 0x80]
  0x00411A2D: call     0x4065a0
  0x004120F0: call     dword ptr [0x4a2548]
  0x0041202C: mov      ecx, dword ptr [esp + 0xf4]
  0x00412033: mov      eax, 1
  0x00412038: cmp      ecx, eax
  0x0041203A: jne      0x4120f0
  0x00411AEF: mov      ecx, dword ptr [esp + 0x20]
  0x00411AF3: mov      edx, dword ptr [ecx]
  0x00411AF5: call     dword ptr [edx + 8]
  0x00411AE8: push     ebx
  0x00411AE9: call     dword ptr [0x4a2528]
  0x00411994: test     eax, eax
  0x00411996: je       0x411ad5
  0x00411B18: mov      ecx, dword ptr [esp + 0x20]
  0x00411B1C: mov      eax, dword ptr [ecx]
  0x00411B1E: call     dword ptr [eax + 8]
  0x00411B11: push     eax
  0x00411B12: call     dword ptr [0x4a2528]
  0x00411A32: mov      eax, dword ptr [esp + 0x1c]
  0x00411A36: mov      esi, dword ptr [esp + 0x30]
  0x00411A3A: dec      eax
  0x00411A3B: mov      dword ptr [esp + 0x1c], eax
  0x00411A3F: mov      ebx, eax
  0x00411A41: test     ebx, ebx
  0x00411A43: jg       0x41178b
  0x004120F6: mov      esi, eax
  0x004120F8: mov      eax, dword ptr [esp + 0xe8]
  0x004120FF: mov      dword ptr [esp + 0x50], esi
  0x00412103: mov      ebx, dword ptr [eax + 0x18]
  0x00412106: dec      ebx
  0x00412107: js       0x412172
  0x00412040: mov      edx, dword ptr [esp + 0x18]
  0x00412044: xor      esi, esi
  0x00412046: mov      dword ptr [edx + 0x1bc], eax
  0x0041204C: lea      ecx, [esp + 0x30]
  0x00412050: mov      eax, esi
  0x00412052: push     ecx
  0x00412053: mov      ecx, dword ptr [esp + 0x54]
  0x00412057: push     eax
  0x00412058: inc      esi
  0x00412059: call     0x40ebf0
  0x00411AF8: jmp      0x411b21
  0x0041199C: mov      eax, dword ptr [esp + 0xec]
  0x004119A3: mov      dword ptr [esp + 0x10], ebp
  0x004119A7: mov      dword ptr [esi + 0xd8], eax
  0x004119AD: jmp      0x411a0d
  0x00412172: cmp      esi, ebp
  0x00412174: je       0x412192
  0x00412109: lea      esi, [ebx + 1]
  0x0041210C: mov      ecx, dword ptr [esp + 0x14]
  0x00412110: mov      eax, ebx
  0x00412112: push     ebp
  0x00412113: dec      ebx
  0x00412114: push     eax
  0x00412115: dec      esi
  0x00412116: call     0x40e730
  0x0041205E: test     eax, eax
  0x00412060: je       0x4120f0
  0x00411A0D: test     esi, esi
  0x00411A0F: je       0x411afa
  0x00412192: mov      eax, dword ptr [esp + 0x18]
  0x00412196: mov      dword ptr [eax + 0x1b8], 1
  0x004121A0: mov      esi, 0x2f95460
  0x004121A5: lea      ecx, [esp + 0x34]
  0x004121A9: mov      dword ptr [esp + 0x34], esi
  0x004121AD: call     0x4064a0
  0x00412176: push     esi
  0x00412177: call     dword ptr [0x4a2558]
  0x0041211B: mov      edi, eax
  0x0041211D: cmp      edi, ebp
  0x0041211F: je       0x41216e
  0x00412066: mov      eax, dword ptr [esp + 0x30]
  0x0041206A: mov      ecx, dword ptr [esp + 0xe8]
  0x00412071: cmp      eax, ecx
  0x00412073: je       0x41204c
  0x0041217D: test     eax, eax
  0x0041217F: je       0x412192
  0x0041216E: mov      esi, dword ptr [esp + 0x50]
  0x00412172: cmp      esi, ebp
  0x00412174: je       0x412192
  0x00412121: mov      ecx, dword ptr [esp + 0x14]
  0x00412125: push     esi
  0x00412126: call     0x40ee10
  0x0041204C: lea      ecx, [esp + 0x30]
  0x00412050: mov      eax, esi
  0x00412052: push     ecx
  0x00412053: mov      ecx, dword ptr [esp + 0x54]
  0x00412057: push     eax
  0x00412058: inc      esi
  0x00412059: call     0x40ebf0
  0x00412075: push     ebp
  0x00412076: push     ebp
  0x00412077: lea      ecx, [eax + 0x14]
  0x0041207A: call     0x40e730
  0x00412181: call     dword ptr [0x4a2548]
  0x0041212B: test     eax, eax
  0x0041212D: jne      0x41216a
  0x0041207F: mov      edi, eax
  0x00412081: add      edi, 0x18
  0x00412084: push     edi
  0x00412085: call     0x406cf0
  0x00412187: cmp      eax, esi
  0x00412189: je       0x412192
  0x0041212F: add      edi, 0x18
  0x00412132: push     edi
  0x00412133: call     0x406cf0
  0x0041216A: cmp      ebx, ebp
  0x0041216C: jge      0x41210c
  0x0041208A: add      edi, eax
  0x0041208C: push     edi
  0x0041208D: call     0x406cf0
  0x0041218B: push     esi
  0x0041218C: call     dword ptr [0x4a2408]
  0x00412138: add      edi, eax
  0x0041213A: push     edi
  0x0041213B: call     0x406cf0
  0x0041210C: mov      ecx, dword ptr [esp + 0x14]
  0x00412110: mov      eax, ebx
  0x00412112: push     ebp
  0x00412113: dec      ebx
  0x00412114: push     eax
  0x00412115: dec      esi
  0x00412116: call     0x40e730
  0x00412092: add      edi, eax
  0x00412094: add      esp, 8
  0x00412097: mov      edi, dword ptr [edi]
  0x00412099: cmp      edi, ebp
  0x0041209B: je       0x41204c
  0x00412140: add      edi, eax
  0x00412142: add      esp, 8
  0x00412145: mov      edi, dword ptr [edi]
  0x00412147: cmp      edi, ebp
  0x00412149: je       0x41216a
  0x0041209D: mov      edx, dword ptr [edi + 0x1c]
  0x004120A0: push     edx
  0x004120A1: call     dword ptr [0x4a2558]
  0x0041214B: mov      ecx, dword ptr [edi + 0x1c]
  0x0041214E: push     ecx
  0x0041214F: call     dword ptr [0x4a2558]
  0x004120A7: test     eax, eax
  0x004120A9: je       0x41204c
  0x00412155: test     eax, eax
  0x00412157: je       0x41216a
  0x004120AB: mov      eax, dword ptr [edi + 0x1c]
  0x004120AE: push     eax
  0x004120AF: call     dword ptr [0x4a254c]
  0x00412159: mov      edx, dword ptr [edi + 0x1c]
  0x0041215C: push     ebp
  0x0041215D: push     ebp
  0x0041215E: push     0x8076
  0x00412163: push     edx
  0x00412164: call     dword ptr [0x4a2564]
  0x004120B5: push     eax
  0x004120B6: call     0x494bb2
  0x004120BB: test     eax, eax
  0x004120BD: jne      0x41204c
  0x004120BF: mov      ecx, dword ptr [esp + 0x18]
  0x004120C3: mov      edx, dword ptr [edi + 0x1c]
  0x004120C6: push     edx
  0x004120C7: lea      ebx, [ecx + 0x1c0]
  0x004120CD: mov      ecx, ebx
  0x004120CF: call     0x4065a0
  0x004120D4: mov      ecx, edi
  0x004120D6: call     0x4975a7
  0x004120DB: push     eax
  0x004120DC: mov      ecx, ebx
  0x004120DE: call     0x4065a0
  0x004120E3: push     ebp
  0x004120E4: mov      ecx, edi
  0x004120E6: call     0x4975c2
  0x004120EB: jmp      0x41204c

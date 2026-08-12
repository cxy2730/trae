; Function: FUN_0040feb0
; Entry:    0040feb0
; Size:     47 bytes

0040feb0  PUSH ESI
0040feb1  MOV ESI,ECX
0040feb3  MOV EAX,dword ptr [ESI + 0x4]
0040feb6  MOV dword ptr [ESI],0x2f95644
0040febc  TEST EAX,EAX
0040febe  JNZ 0x0040fec9
0040fec0  MOV EAX,dword ptr [ESI + 0xc]
0040fec3  TEST EAX,EAX
0040fec5  JZ 0x0040fec9
0040fec7  CALL EAX
0040fec9  TEST byte ptr [ESP + 0x8],0x1
0040fece  JZ 0x0040fed9
0040fed0  PUSH ESI
0040fed1  CALL 0x00492f40
0040fed6  ADD ESP,0x4
0040fed9  MOV EAX,ESI
0040fedb  POP ESI
0040fedc  RET 0x4

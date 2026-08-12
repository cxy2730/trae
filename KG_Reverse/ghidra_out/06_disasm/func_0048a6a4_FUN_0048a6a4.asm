; Function: FUN_0048a6a4
; Entry:    0048a6a4
; Size:     35 bytes

0048a6a4  MOV ECX,dword ptr [ESP + 0x8]
0048a6a8  PUSH ESI
0048a6a9  MOV ESI,dword ptr [ESP + 0x8]
0048a6ad  MOV EAX,dword ptr [ECX]
0048a6af  MOV EDX,dword ptr [ECX + 0x4]
0048a6b2  ADD EAX,ESI
0048a6b4  TEST EDX,EDX
0048a6b6  JL 0x0048a6c5
0048a6b8  MOV ESI,dword ptr [EDX + ESI*0x1]
0048a6bb  MOV ECX,dword ptr [ECX + 0x8]
0048a6be  MOV ECX,dword ptr [ESI + ECX*0x1]
0048a6c1  ADD ECX,EDX
0048a6c3  ADD EAX,ECX
0048a6c5  POP ESI
0048a6c6  RET

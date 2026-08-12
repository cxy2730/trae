; Function: FUN_0044ffd0
; Entry:    0044ffd0
; Size:     47 bytes

0044ffd0  MOV EDX,dword ptr [ESP + 0x4]
0044ffd4  CMP byte ptr [EDX + 0x9],0x10
0044ffd8  JNZ 0x0044fffe
0044ffda  XOR ECX,ECX
0044ffdc  MOV EAX,dword ptr [ESP + 0x8]
0044ffe0  MOV CL,byte ptr [EDX + 0xa]
0044ffe3  IMUL ECX,dword ptr [EDX]
0044ffe6  TEST ECX,ECX
0044ffe8  JBE 0x0044fffe
0044ffea  PUSH ESI
0044ffeb  MOV ESI,ECX
0044ffed  MOV CL,byte ptr [EAX]
0044ffef  MOV DL,byte ptr [EAX + 0x1]
0044fff2  MOV byte ptr [EAX],DL
0044fff4  MOV byte ptr [EAX + 0x1],CL
0044fff7  ADD EAX,0x2
0044fffa  DEC ESI
0044fffb  JNZ 0x0044ffed
0044fffd  POP ESI
0044fffe  RET

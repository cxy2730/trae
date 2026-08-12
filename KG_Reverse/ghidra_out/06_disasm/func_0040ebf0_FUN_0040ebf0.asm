; Function: FUN_0040ebf0
; Entry:    0040ebf0
; Size:     54 bytes

0040ebf0  MOV EAX,dword ptr [ECX + 0x18]
0040ebf3  MOV EDX,dword ptr [ESP + 0x4]
0040ebf7  SHR EAX,0x3
0040ebfa  CMP EDX,EAX
0040ebfc  JGE 0x0040ec21
0040ebfe  PUSH ESI
0040ebff  MOV ESI,dword ptr [ECX + 0x18]
0040ec02  TEST ESI,ESI
0040ec04  POP ESI
0040ec05  JNZ 0x0040ec0b
0040ec07  XOR ECX,ECX
0040ec09  JMP 0x0040ec0e
0040ec0b  MOV ECX,dword ptr [ECX + 0x10]
0040ec0e  ADD EAX,EDX
0040ec10  MOV EAX,dword ptr [ECX + EAX*0x4]
0040ec13  MOV ECX,dword ptr [ESP + 0x8]
0040ec17  MOV dword ptr [ECX],EAX
0040ec19  MOV EAX,0x1
0040ec1e  RET 0x8
0040ec21  XOR EAX,EAX
0040ec23  RET 0x8

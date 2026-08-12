; Function: FUN_0049afa0
; Entry:    0049afa0
; Size:     76 bytes

0049afa0  PUSH ESI
0049afa1  PUSH EDI
0049afa2  MOV EDI,dword ptr [ESP + 0x14]
0049afa6  CMP dword ptr [EDI + 0x1c],0x0
0049afaa  JNZ 0x0049afe7
0049afac  MOV ESI,dword ptr [ESP + 0xc]
0049afb0  PUSH dword ptr [ESP + 0x10]
0049afb4  MOV ECX,ESI
0049afb6  CALL 0x0049af71
0049afbb  PUSH EAX
0049afbc  MOV ECX,EDI
0049afbe  CALL 0x004972d5
0049afc3  TEST EAX,EAX
0049afc5  JNZ 0x0049afce
0049afc7  CALL 0x00491343
0049afcc  JMP 0x0049afe7
0049afce  PUSH dword ptr [EDI + 0x1c]
0049afd1  MOV ESI,dword ptr [ESI + 0x4]
0049afd4  CALL dword ptr [0x004a254c]
0049afda  CMP dword ptr [ESI + 0x1c],EAX
0049afdd  JZ 0x0049afe7
0049afdf  PUSH ESI
0049afe0  MOV ECX,EDI
0049afe2  CALL 0x00497647
0049afe7  POP EDI
0049afe8  POP ESI
0049afe9  RET 0xc

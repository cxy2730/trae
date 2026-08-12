; Function: Realloc
; Entry:    0049bf44
; Size:     56 bytes

0049bf44  PUSH ESI
0049bf45  MOV ESI,ECX
0049bf47  CMP dword ptr [ESI + 0x30],0x0
0049bf4b  JZ 0x0049bf6a
0049bf4d  PUSH dword ptr [ESI + 0x2c]
0049bf50  CALL dword ptr [0x004a2324]
0049bf56  PUSH dword ptr [ESI + 0x28]
0049bf59  PUSH dword ptr [ESP + 0x10]
0049bf5d  PUSH dword ptr [ESI + 0x2c]
0049bf60  CALL dword ptr [0x004a22e4]
0049bf66  TEST EAX,EAX
0049bf68  JNZ 0x0049bf6e
0049bf6a  XOR EAX,EAX
0049bf6c  JMP 0x0049bf78
0049bf6e  PUSH EAX
0049bf6f  MOV dword ptr [ESI + 0x2c],EAX
0049bf72  CALL dword ptr [0x004a2320]
0049bf78  POP ESI
0049bf79  RET 0x8

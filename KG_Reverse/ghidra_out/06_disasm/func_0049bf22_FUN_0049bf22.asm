; Function: FUN_0049bf22
; Entry:    0049bf22
; Size:     34 bytes

0049bf22  PUSH ESI
0049bf23  MOV ESI,ECX
0049bf25  PUSH dword ptr [ESP + 0x8]
0049bf29  PUSH dword ptr [ESI + 0x28]
0049bf2c  CALL dword ptr [0x004a231c]
0049bf32  MOV dword ptr [ESI + 0x2c],EAX
0049bf35  POP ESI
0049bf36  TEST EAX,EAX
0049bf38  JZ 0x0049bf41
0049bf3a  PUSH EAX
0049bf3b  CALL dword ptr [0x004a2320]
0049bf41  RET 0x4

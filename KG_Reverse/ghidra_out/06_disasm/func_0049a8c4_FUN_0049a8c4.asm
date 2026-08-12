; Function: FUN_0049a8c4
; Entry:    0049a8c4
; Size:     48 bytes

0049a8c4  PUSH ESI
0049a8c5  MOV ESI,ECX
0049a8c7  CALL 0x004937c4
0049a8cc  MOV EAX,dword ptr [ESP + 0x8]
0049a8d0  MOV dword ptr [ESI],0x2f9ab38
0049a8d6  MOV dword ptr [ESI + 0x10],EAX
0049a8d9  XOR EAX,EAX
0049a8db  MOV dword ptr [ESI + 0x14],EAX
0049a8de  MOV dword ptr [ESI + 0x18],EAX
0049a8e1  MOV dword ptr [ESI + 0x1c],EAX
0049a8e4  MOV dword ptr [ESI + 0x20],EAX
0049a8e7  MOV dword ptr [ESI + 0x24],0x1
0049a8ee  MOV EAX,ESI
0049a8f0  POP ESI
0049a8f1  RET 0x4

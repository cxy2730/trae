; Function: FUN_0046bcb0
; Entry:    0046bcb0
; Size:     33 bytes

0046bcb0  PUSH ESI
0046bcb1  MOV ESI,ECX
0046bcb3  MOV ECX,dword ptr [ESI + 0xc]
0046bcb6  CALL 0x0046bae0
0046bcbb  MOV EAX,dword ptr [ESI + 0x24]
0046bcbe  MOV ECX,dword ptr [ESP + 0x8]
0046bcc2  MOV dword ptr [EAX + 0x28],ECX
0046bcc5  MOV ECX,dword ptr [ESI + 0xc]
0046bcc8  CALL 0x0046baf0
0046bccd  POP ESI
0046bcce  RET 0x4

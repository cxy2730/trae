; Function: FUN_0046bd00
; Entry:    0046bd00
; Size:     30 bytes

0046bd00  PUSH ESI
0046bd01  MOV ESI,ECX
0046bd03  MOV ECX,dword ptr [ESI + 0xc]
0046bd06  CALL 0x0046bae0
0046bd0b  MOV EAX,dword ptr [ESP + 0x8]
0046bd0f  MOV ECX,dword ptr [ESI + 0xc]
0046bd12  MOV dword ptr [ESI + 0x20],EAX
0046bd15  CALL 0x0046baf0
0046bd1a  POP ESI
0046bd1b  RET 0x4

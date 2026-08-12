; Function: FUN_0046bce0
; Entry:    0046bce0
; Size:     30 bytes

0046bce0  PUSH ESI
0046bce1  MOV ESI,ECX
0046bce3  MOV ECX,dword ptr [ESI + 0xc]
0046bce6  CALL 0x0046bae0
0046bceb  MOV EAX,dword ptr [ESP + 0x8]
0046bcef  MOV ECX,dword ptr [ESI + 0xc]
0046bcf2  MOV dword ptr [ESI + 0x24],EAX
0046bcf5  CALL 0x0046baf0
0046bcfa  POP ESI
0046bcfb  RET 0x4

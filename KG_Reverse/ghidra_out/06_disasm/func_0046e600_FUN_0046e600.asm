; Function: FUN_0046e600
; Entry:    0046e600
; Size:     32 bytes

0046e600  PUSH ESI
0046e601  MOV ESI,ECX
0046e603  MOV ECX,dword ptr [ESI + 0xc]
0046e606  CALL 0x0046bae0
0046e60b  MOV EAX,dword ptr [ESI]
0046e60d  MOV ECX,ESI
0046e60f  MOV byte ptr [ESI + 0x1c],0x1
0046e613  CALL dword ptr [EAX + 0xc]
0046e616  MOV ECX,dword ptr [ESI + 0xc]
0046e619  CALL 0x0046baf0
0046e61e  POP ESI
0046e61f  RET

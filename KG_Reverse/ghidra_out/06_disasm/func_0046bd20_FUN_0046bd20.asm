; Function: FUN_0046bd20
; Entry:    0046bd20
; Size:     29 bytes

0046bd20  PUSH ESI
0046bd21  MOV ESI,ECX
0046bd23  CALL 0x0046e600
0046bd28  MOV ECX,dword ptr [ESI + 0x20]
0046bd2b  PUSH 0x1
0046bd2d  MOV EAX,dword ptr [ECX]
0046bd2f  CALL dword ptr [EAX + 0x48]
0046bd32  MOV EDX,dword ptr [ESI]
0046bd34  PUSH 0x1
0046bd36  MOV ECX,ESI
0046bd38  CALL dword ptr [EDX + 0x24]
0046bd3b  POP ESI
0046bd3c  RET

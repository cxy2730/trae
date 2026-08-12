; Function: FUN_00496a83
; Entry:    00496a83
; Size:     29 bytes

00496a83  MOV EAX,dword ptr [EBP + -0x18]
00496a86  MOV ECX,dword ptr [EBP + -0xc]
00496a89  MOV dword ptr [EDI + 0xb8],EAX
00496a8f  MOV EAX,dword ptr [EBP + 0x8]
00496a92  POP EDI
00496a93  POP ESI
00496a94  MOV dword ptr FS:[0x0],ECX
00496a9b  POP EBX
00496a9c  LEAVE
00496a9d  RET 0x4

; Function: FUN_00497a60
; Entry:    00497a60
; Size:     26 bytes

00497a60  MOV EAX,ECX
00497a62  PUSH 0x1
00497a64  POP ECX
00497a65  XOR EDX,EDX
00497a67  MOV dword ptr [EAX + 0x4],ECX
00497a6a  MOV dword ptr [EAX + 0x8],EDX
00497a6d  MOV dword ptr [EAX + 0xc],EDX
00497a70  MOV dword ptr [EAX + 0x10],EDX
00497a73  MOV dword ptr [EAX + 0x14],ECX
00497a76  MOV dword ptr [EAX + 0x18],EDX
00497a79  RET

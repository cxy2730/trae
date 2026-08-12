; Function: FUN_00446d70
; Entry:    00446d70
; Size:     39 bytes

00446d70  MOV EAX,dword ptr [ESP + 0x4]
00446d74  TEST EAX,EAX
00446d76  JZ 0x00446d96
00446d78  MOV ECX,dword ptr [ESP + 0x8]
00446d7c  MOV EDX,dword ptr [ESP + 0xc]
00446d80  MOV dword ptr [EAX + 0x270],ECX
00446d86  MOV ECX,dword ptr [ESP + 0x10]
00446d8a  MOV dword ptr [EAX + 0x274],EDX
00446d90  MOV dword ptr [EAX + 0x278],ECX
00446d96  RET

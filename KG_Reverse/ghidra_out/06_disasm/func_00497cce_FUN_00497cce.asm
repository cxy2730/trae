; Function: FUN_00497cce
; Entry:    00497cce
; Size:     21 bytes

00497cce  CALL 0x0049c724
00497cd3  MOV EAX,dword ptr [EAX + 0x4]
00497cd6  PUSH 0x1
00497cd8  MOV ECX,EAX
00497cda  MOV EDX,dword ptr [EAX]
00497cdc  CALL dword ptr [EDX + 0x90]
00497ce2  RET

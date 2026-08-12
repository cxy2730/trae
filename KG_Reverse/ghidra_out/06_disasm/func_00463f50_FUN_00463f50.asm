; Function: FUN_00463f50
; Entry:    00463f50
; Size:     14 bytes

00463f50  MOV EAX,dword ptr [ESP + 0x8]
00463f54  MOV ECX,dword ptr [ESP + 0x4]
00463f58  DEC EAX
00463f59  NOT EAX
00463f5b  AND EAX,ECX
00463f5d  RET

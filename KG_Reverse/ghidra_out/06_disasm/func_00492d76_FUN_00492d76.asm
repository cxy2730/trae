; Function: FUN_00492d76
; Entry:    00492d76
; Size:     41 bytes

00492d76  MOV EAX,0x4a1c60
00492d7b  CALL 0x004858b8
00492d80  PUSH ECX
00492d81  MOV dword ptr [EBP + -0x10],ECX
00492d84  MOV dword ptr [ECX],0x2f9c9dc
00492d8a  AND dword ptr [EBP + -0x4],0x0
00492d8e  CALL 0x00492d24
00492d93  MOV ECX,dword ptr [EBP + -0xc]
00492d96  MOV dword ptr FS:[0x0],ECX
00492d9d  LEAVE
00492d9e  RET

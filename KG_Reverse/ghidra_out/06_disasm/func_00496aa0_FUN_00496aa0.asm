; Function: FUN_00496aa0
; Entry:    00496aa0
; Size:     22 bytes

00496aa0  MOV EAX,ECX
00496aa2  MOV ECX,dword ptr [ESP + 0x8]
00496aa6  AND dword ptr [EAX + 0x8],0x0
00496aaa  MOV dword ptr [EAX],ECX
00496aac  MOV ECX,dword ptr [ESP + 0x4]
00496ab0  MOV dword ptr [EAX + 0x4],ECX
00496ab3  RET 0x8

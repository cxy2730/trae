; Function: FUN_004937fa
; Entry:    004937fa
; Size:     31 bytes

004937fa  MOV EAX,ECX
004937fc  MOV ECX,dword ptr [0x02fd8088]
00493802  MOV dword ptr [EAX + 0xc],ECX
00493805  MOV ECX,dword ptr [ESP + 0x4]
00493809  AND dword ptr [EAX + 0x8],0x0
0049380d  MOV dword ptr [EAX],0x2f9aaa4
00493813  MOV dword ptr [EAX + 0x4],ECX
00493816  RET 0x4

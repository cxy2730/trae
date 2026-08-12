; Function: FUN_00487e75
; Entry:    00487e75
; Size:     23 bytes

00487e75  MOV EDX,dword ptr [ESP + 0x4]
00487e79  AND EDX,0x300
00487e7f  OR EDX,0x7f
00487e82  MOV word ptr [ESP + 0x6],DX
00487e87  FLDCW word ptr [ESP + 0x6]
00487e8b  RET

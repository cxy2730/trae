; Function: FUN_004816ee
; Entry:    004816ee
; Size:     42 bytes

004816ee  PUSH ESI
004816ef  MOV ESI,ECX
004816f1  PUSH dword ptr [ESP + 0x8]
004816f5  CALL 0x004936f5
004816fa  MOV EAX,dword ptr [ESP + 0xc]
004816fe  AND dword ptr [ESI + 0xc],0x0
00481702  AND dword ptr [ESI + 0x10],0x0
00481706  MOV dword ptr [ESI + 0x94],EAX
0048170c  MOV dword ptr [ESI],0x2f9aa68
00481712  MOV EAX,ESI
00481714  POP ESI
00481715  RET 0x8

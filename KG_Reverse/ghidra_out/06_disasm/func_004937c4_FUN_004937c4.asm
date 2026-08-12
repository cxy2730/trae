; Function: FUN_004937c4
; Entry:    004937c4
; Size:     26 bytes

004937c4  MOV EAX,ECX
004937c6  MOV ECX,dword ptr [0x02fd8088]
004937cc  MOV dword ptr [EAX + 0xc],ECX
004937cf  OR dword ptr [EAX + 0x4],0xffffffff
004937d3  AND dword ptr [EAX + 0x8],0x0
004937d7  MOV dword ptr [EAX],0x2f9aaa4
004937dd  RET

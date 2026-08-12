; Function: FUN_004816a1
; Entry:    004816a1
; Size:     42 bytes

004816a1  PUSH ESI
004816a2  MOV ESI,ECX
004816a4  PUSH dword ptr [ESP + 0x8]
004816a8  CALL 0x004936f5
004816ad  MOV EAX,dword ptr [ESP + 0xc]
004816b1  AND dword ptr [ESI + 0xc],0x0
004816b5  AND dword ptr [ESI + 0x10],0x0
004816b9  MOV dword ptr [ESI + 0x94],EAX
004816bf  MOV dword ptr [ESI],0x2f9aa50
004816c5  MOV EAX,ESI
004816c7  POP ESI
004816c8  RET 0x8

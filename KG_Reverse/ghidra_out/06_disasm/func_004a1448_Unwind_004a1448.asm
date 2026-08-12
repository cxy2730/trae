; Function: Unwind@004a1448
; Entry:    004a1448
; Size:     23 bytes

004a1448  MOV EAX,dword ptr [EBP + -0x14]
004a144b  AND EAX,0x1
004a144e  TEST EAX,EAX
004a1450  JZ 0x004a145e
004a1456  MOV ECX,dword ptr [EBP + 0x8]
004a1459  JMP 0x004931d6
004a145e  RET

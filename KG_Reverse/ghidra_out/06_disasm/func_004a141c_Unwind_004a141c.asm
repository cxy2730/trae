; Function: Unwind@004a141c
; Entry:    004a141c
; Size:     23 bytes

004a141c  MOV EAX,dword ptr [EBP + -0x14]
004a141f  AND EAX,0x1
004a1422  TEST EAX,EAX
004a1424  JZ 0x004a1432
004a142a  MOV ECX,dword ptr [EBP + 0x8]
004a142d  JMP 0x004931d6
004a1432  RET

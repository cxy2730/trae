; Function: FUN_004279e0
; Entry:    004279e0
; Size:     15 bytes

004279e0  MOV ECX,dword ptr [ECX + 0xc]
004279e3  TEST ECX,ECX
004279e5  JZ 0x004279ec
004279e7  MOV EAX,dword ptr [ECX]
004279e9  JMP dword ptr [EAX + 0x18]
004279ec  XOR EAX,EAX
004279ee  RET

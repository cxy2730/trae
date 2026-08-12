; Function: FUN_004279f0
; Entry:    004279f0
; Size:     15 bytes

004279f0  MOV ECX,dword ptr [ECX + 0xc]
004279f3  TEST ECX,ECX
004279f5  JZ 0x004279fc
004279f7  MOV EAX,dword ptr [ECX]
004279f9  JMP dword ptr [EAX + 0x1c]
004279fc  XOR EAX,EAX
004279fe  RET

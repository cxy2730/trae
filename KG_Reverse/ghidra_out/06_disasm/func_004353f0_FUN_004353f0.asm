; Function: FUN_004353f0
; Entry:    004353f0
; Size:     14 bytes

004353f0  CMP dword ptr [ECX + 0x4c],0x1
004353f4  JNZ 0x004353fa
004353f6  MOV EAX,dword ptr [ECX + 0x48]
004353f9  RET
004353fa  MOV EAX,dword ptr [ECX + 0x44]
004353fd  RET

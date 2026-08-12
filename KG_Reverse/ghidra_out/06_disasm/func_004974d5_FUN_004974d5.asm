; Function: FUN_004974d5
; Entry:    004974d5
; Size:     27 bytes

004974d5  MOV EAX,dword ptr [ECX + 0x38]
004974d8  TEST EAX,EAX
004974da  JNZ 0x004974e6
004974dc  PUSH dword ptr [ECX + 0x1c]
004974df  CALL dword ptr [0x004a2458]
004974e5  RET
004974e6  MOV EDX,dword ptr [EAX]
004974e8  MOV ECX,EAX
004974ea  JMP dword ptr [EDX + 0x90]

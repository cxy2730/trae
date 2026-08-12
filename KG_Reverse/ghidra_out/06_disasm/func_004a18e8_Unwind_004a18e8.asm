; Function: Unwind@004a18e8
; Entry:    004a18e8
; Size:     23 bytes

004a18e8  MOV EAX,dword ptr [EBP + -0x14]
004a18eb  AND EAX,0x1
004a18ee  TEST EAX,EAX
004a18f0  JZ 0x004a18fe
004a18f6  MOV ECX,dword ptr [EBP + 0x8]
004a18f9  JMP 0x004931d6
004a18fe  RET

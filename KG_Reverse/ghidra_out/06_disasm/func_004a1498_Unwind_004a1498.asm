; Function: Unwind@004a1498
; Entry:    004a1498
; Size:     23 bytes

004a1498  MOV EAX,dword ptr [EBP + -0x10]
004a149b  AND EAX,0x1
004a149e  TEST EAX,EAX
004a14a0  JZ 0x004a14ae
004a14a6  MOV ECX,dword ptr [EBP + 0x8]
004a14a9  JMP 0x004931d6
004a14ae  RET

; Function: Unwind@004a14c4
; Entry:    004a14c4
; Size:     23 bytes

004a14c4  MOV EAX,dword ptr [EBP + -0x10]
004a14c7  AND EAX,0x1
004a14ca  TEST EAX,EAX
004a14cc  JZ 0x004a14da
004a14d2  MOV ECX,dword ptr [EBP + 0x8]
004a14d5  JMP 0x004931d6
004a14da  RET

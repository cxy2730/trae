; Function: Unwind@004a197c
; Entry:    004a197c
; Size:     23 bytes

004a197c  MOV EAX,dword ptr [EBP + -0x10]
004a197f  AND EAX,0x1
004a1982  TEST EAX,EAX
004a1984  JZ 0x004a1992
004a198a  MOV ECX,dword ptr [EBP + 0x8]
004a198d  JMP 0x004931d6
004a1992  RET

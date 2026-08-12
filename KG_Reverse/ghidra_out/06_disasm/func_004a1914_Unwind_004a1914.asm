; Function: Unwind@004a1914
; Entry:    004a1914
; Size:     23 bytes

004a1914  MOV EAX,dword ptr [EBP + -0x14]
004a1917  AND EAX,0x1
004a191a  TEST EAX,EAX
004a191c  JZ 0x004a192a
004a1922  MOV ECX,dword ptr [EBP + 0x8]
004a1925  JMP 0x004931d6
004a192a  RET

; Function: Unwind@004a1474
; Entry:    004a1474
; Size:     23 bytes

004a1474  MOV EAX,dword ptr [EBP + -0x14]
004a1477  AND EAX,0x1
004a147a  TEST EAX,EAX
004a147c  JZ 0x004a148a
004a1482  MOV ECX,dword ptr [EBP + 0x8]
004a1485  JMP 0x004931d6
004a148a  RET

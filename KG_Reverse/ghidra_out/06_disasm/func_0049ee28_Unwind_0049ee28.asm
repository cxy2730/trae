; Function: Unwind@0049ee28
; Entry:    0049ee28
; Size:     23 bytes

0049ee28  MOV EAX,dword ptr [EBP + -0x10]
0049ee2b  AND EAX,0x1
0049ee2e  TEST EAX,EAX
0049ee30  JZ 0x0049ee3e
0049ee36  MOV ECX,dword ptr [EBP + 0x4]
0049ee39  JMP 0x004931d6
0049ee3e  RET

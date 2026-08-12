; Function: FUN_0048ed7c
; Entry:    0048ed7c
; Size:     27 bytes

0048ed7c  MOV EAX,dword ptr [ESP + 0x8]
0048ed80  MOV ECX,dword ptr [ESP + 0x4]
0048ed84  PUSH ESI
0048ed85  PUSH 0x3
0048ed87  SUB ECX,EAX
0048ed89  POP EDX
0048ed8a  MOV ESI,dword ptr [EAX]
0048ed8c  MOV dword ptr [ECX + EAX*0x1],ESI
0048ed8f  ADD EAX,0x4
0048ed92  DEC EDX
0048ed93  JNZ 0x0048ed8a
0048ed95  POP ESI
0048ed96  RET

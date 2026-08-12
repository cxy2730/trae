; Function: FUN_0040ed90
; Entry:    0040ed90
; Size:     29 bytes

0040ed90  MOV EAX,dword ptr [ESP + 0x4]
0040ed94  MOV EDX,dword ptr [EAX + 0x18]
0040ed97  SHR EDX,0x3
0040ed9a  PUSH EDX
0040ed9b  PUSH 0x0
0040ed9d  PUSH EAX
0040ed9e  MOV EAX,dword ptr [ECX + 0x18]
0040eda1  SHR EAX,0x3
0040eda4  PUSH EAX
0040eda5  CALL 0x0040ecd0
0040edaa  RET 0x4

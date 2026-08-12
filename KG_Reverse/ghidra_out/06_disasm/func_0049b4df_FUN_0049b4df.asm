; Function: FUN_0049b4df
; Entry:    0049b4df
; Size:     37 bytes

0049b4df  MOV EAX,dword ptr [ECX]
0049b4e1  PUSH 0x0
0049b4e3  PUSH dword ptr [ESP + 0x8]
0049b4e7  PUSH 0x199
0049b4ec  CALL dword ptr [EAX + 0xa0]
0049b4f2  CMP EAX,-0x1
0049b4f5  JZ 0x0049b4ff
0049b4f7  TEST EAX,EAX
0049b4f9  JZ 0x0049b4ff
0049b4fb  MOV EAX,dword ptr [EAX]
0049b4fd  JMP 0x0049b501
0049b4ff  XOR EAX,EAX
0049b501  RET 0x4

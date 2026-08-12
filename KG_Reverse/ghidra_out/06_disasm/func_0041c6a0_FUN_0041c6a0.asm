; Function: FUN_0041c6a0
; Entry:    0041c6a0
; Size:     24 bytes

0041c6a0  MOV EAX,dword ptr [ESP + 0x4]
0041c6a4  TEST EAX,EAX
0041c6a6  JL 0x0041c6b7
0041c6a8  CMP EAX,dword ptr [0x02fab724]
0041c6ae  JGE 0x0041c6b7
0041c6b0  MOV EAX,dword ptr [EAX*0x4 + 0x2fab6e8]
0041c6b7  RET

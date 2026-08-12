; Function: FUN_0041ce50
; Entry:    0041ce50
; Size:     26 bytes

0041ce50  MOV EAX,dword ptr [ESP + 0x4]
0041ce54  MOV EAX,dword ptr [EAX + 0x8]
0041ce57  CMP EAX,0xb
0041ce5a  JZ 0x0041ce64
0041ce5c  CMP EAX,0xc
0041ce5f  JZ 0x0041ce64
0041ce61  XOR EAX,EAX
0041ce63  RET
0041ce64  MOV EAX,0x1
0041ce69  RET

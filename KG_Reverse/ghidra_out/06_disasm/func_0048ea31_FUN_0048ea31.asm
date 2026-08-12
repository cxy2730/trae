; Function: FUN_0048ea31
; Entry:    0048ea31
; Size:     49 bytes

0048ea31  MOVZX EAX,byte ptr [ESP + 0x4]
0048ea36  MOV CL,byte ptr [ESP + 0xc]
0048ea3a  TEST byte ptr [EAX + 0x30150e1],CL
0048ea40  JNZ 0x0048ea5e
0048ea42  CMP dword ptr [ESP + 0x8],0x0
0048ea47  JZ 0x0048ea57
0048ea49  MOVZX EAX,word ptr [EAX*0x2 + 0x2fd98be]
0048ea51  AND EAX,dword ptr [ESP + 0x8]
0048ea55  JMP 0x0048ea59
0048ea57  XOR EAX,EAX
0048ea59  TEST EAX,EAX
0048ea5b  JNZ 0x0048ea5e
0048ea5d  RET
0048ea5e  PUSH 0x1
0048ea60  POP EAX
0048ea61  RET

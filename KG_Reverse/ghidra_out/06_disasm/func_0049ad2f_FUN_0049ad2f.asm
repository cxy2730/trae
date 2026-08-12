; Function: FUN_0049ad2f
; Entry:    0049ad2f
; Size:     56 bytes

0049ad2f  PUSH EBP
0049ad30  MOV EBP,ESP
0049ad32  CALL 0x0049c724
0049ad37  MOV EAX,dword ptr [EAX + 0x4]
0049ad3a  TEST EAX,EAX
0049ad3c  JZ 0x0049ad53
0049ad3e  PUSH dword ptr [EBP + 0x10]
0049ad41  MOV EDX,dword ptr [EAX]
0049ad43  MOV ECX,EAX
0049ad45  PUSH dword ptr [EBP + 0xc]
0049ad48  PUSH dword ptr [EBP + 0x8]
0049ad4b  CALL dword ptr [EDX + 0x8c]
0049ad51  JMP 0x0049ad63
0049ad53  PUSH dword ptr [EBP + 0x10]
0049ad56  XOR ECX,ECX
0049ad58  PUSH dword ptr [EBP + 0xc]
0049ad5b  PUSH dword ptr [EBP + 0x8]
0049ad5e  CALL 0x0049ac48
0049ad63  POP EBP
0049ad64  RET 0xc

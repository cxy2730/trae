; Function: FUN_0041b250
; Entry:    0041b250
; Size:     172 bytes

0041b250  PUSH EBP
0041b251  MOV EBP,ESP
0041b253  SUB ESP,0x18
0041b256  PUSH EBX
0041b257  PUSH ESI
0041b258  PUSH EDI
0041b259  MOV dword ptr [EBP + -0x18],ECX
0041b25c  MOV EAX,dword ptr [EBP + 0x8]
0041b25f  MOV ECX,dword ptr [EAX + 0xc]
0041b262  PUSH ECX
0041b263  MOV EDX,dword ptr [EBP + 0x8]
0041b266  MOV EAX,dword ptr [EDX + 0x8]
0041b269  PUSH EAX
0041b26a  MOV ECX,dword ptr [EBP + 0x8]
0041b26d  MOV EDX,dword ptr [ECX + 0x4]
0041b270  PUSH EDX
0041b271  MOV EAX,dword ptr [EBP + 0x8]
0041b274  MOV ECX,dword ptr [EAX]
0041b276  PUSH ECX
0041b277  MOV ECX,dword ptr [EBP + -0x18]
0041b27a  CALL 0x00414b60
0041b27f  MOV dword ptr [EBP + -0x4],EAX
0041b282  CMP dword ptr [EBP + -0x4],0x0
0041b286  JNZ 0x0041b28c
0041b288  XOR EAX,EAX
0041b28a  JMP 0x0041b2f3
0041b28c  PUSH ESI
0041b28d  PUSH EDI
0041b28e  MOV EDX,dword ptr [EBP + 0x8]
0041b291  MOV EAX,dword ptr [EDX + 0xc]
0041b294  SUB EAX,0x1
0041b297  MOV dword ptr [EBP + -0x14],EAX
0041b29a  JMP 0x0041b2a5
0041b29c  MOV ECX,dword ptr [EBP + -0x14]
0041b29f  SUB ECX,0x1
0041b2a2  MOV dword ptr [EBP + -0x14],ECX
0041b2a5  CMP dword ptr [EBP + -0x14],0x0
0041b2a9  JL 0x0041b2bd
0041b2ab  MOV EDX,dword ptr [EBP + -0x14]
0041b2ae  MOV EAX,dword ptr [EBP + 0x8]
0041b2b1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x10]
0041b2b5  MOV dword ptr [EBP + -0x10],ECX
0041b2b8  PUSH dword ptr [EBP + -0x10]
0041b2bb  JMP 0x0041b29c
0041b2bd  CALL dword ptr [EBP + -0x4]
0041b2c0  POP EDI
0041b2c1  POP ESI
0041b2c2  MOV dword ptr [EBP + -0xc],EBX
0041b2c5  MOV dword ptr [EBP + -0x8],EAX
0041b2c8  MOV EDX,dword ptr [EBP + -0x18]
0041b2cb  MOV dword ptr [EDX + 0x1e4],0x0
0041b2d5  CMP dword ptr [EBP + -0xc],0x0
0041b2d9  JZ 0x0041b2ee
0041b2db  MOV EAX,dword ptr [EBP + 0x8]
0041b2de  MOV dword ptr [EAX + 0x24],0x1
0041b2e5  MOV ECX,dword ptr [EBP + 0x8]
0041b2e8  MOV EDX,dword ptr [EBP + -0x8]
0041b2eb  MOV dword ptr [ECX + 0x28],EDX
0041b2ee  MOV EAX,0x1
0041b2f3  POP EDI
0041b2f4  POP ESI
0041b2f5  POP EBX
0041b2f6  MOV ESP,EBP
0041b2f8  POP EBP
0041b2f9  RET 0x4

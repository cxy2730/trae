; Function: FUN_0044fe60
; Entry:    0044fe60
; Size:     145 bytes

0044fe60  MOV EAX,dword ptr [ESP + 0x4]
0044fe64  TEST EAX,EAX
0044fe66  JZ 0x0044fef0
0044fe6c  MOV ECX,dword ptr [EAX + 0x74]
0044fe6f  MOV EDX,0x8000
0044fe74  TEST EDX,ECX
0044fe76  JZ 0x0044fe86
0044fe78  MOV CX,word ptr [ESP + 0x8]
0044fe7d  MOV word ptr [EAX + 0x160],CX
0044fe84  JMP 0x0044fec0
0044fe86  XOR ECX,ECX
0044fe88  MOV CL,byte ptr [EAX + 0x157]
0044fe8e  SUB ECX,0x0
0044fe91  JZ 0x0044feb0
0044fe93  SUB ECX,0x2
0044fe96  JZ 0x0044fea7
0044fe98  PUSH 0x2fb2d88
0044fe9d  PUSH EAX
0044fe9e  CALL 0x00446650
0044fea3  ADD ESP,0x8
0044fea6  RET
0044fea7  MOV byte ptr [EAX + 0x15c],0x4
0044feae  JMP 0x0044fec0
0044feb0  CMP byte ptr [EAX + 0x158],0x8
0044feb7  JC 0x0044fee2
0044feb9  MOV byte ptr [EAX + 0x15c],0x2
0044fec0  MOV ECX,dword ptr [EAX + 0x7c]
0044fec3  OR ECX,EDX
0044fec5  MOV dword ptr [EAX + 0x7c],ECX
0044fec8  MOV ECX,dword ptr [ESP + 0xc]
0044fecc  CMP ECX,0x1
0044fecf  MOV ECX,dword ptr [EAX + 0x78]
0044fed2  JNZ 0x0044fedb
0044fed4  OR CL,0x80
0044fed7  MOV dword ptr [EAX + 0x78],ECX
0044feda  RET
0044fedb  AND CL,0x7f
0044fede  MOV dword ptr [EAX + 0x78],ECX
0044fee1  RET
0044fee2  PUSH 0x2fb2d50
0044fee7  PUSH EAX
0044fee8  CALL 0x00446650
0044feed  ADD ESP,0x8
0044fef0  RET

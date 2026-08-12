; Function: FUN_0041d680
; Entry:    0041d680
; Size:     117 bytes

0041d680  PUSH EBP
0041d681  MOV EBP,ESP
0041d683  SUB ESP,0x8
0041d686  MOV EAX,dword ptr [EBP + 0x10]
0041d689  PUSH EBX
0041d68a  PUSH ESI
0041d68b  PUSH EDI
0041d68c  MOV CL,byte ptr [EAX + 0x100]
0041d692  MOV DL,byte ptr [EAX + 0x101]
0041d698  MOV dword ptr [EBP + -0x8],EAX
0041d69b  MOV byte ptr [EBP + -0x1],CL
0041d69e  MOV byte ptr [EBP + -0x2],DL
0041d6a1  XOR EBX,EBX
0041d6a3  MOV BL,byte ptr [EBP + -0x1]
0041d6a6  XOR EDX,EDX
0041d6a8  MOV DL,byte ptr [EBP + -0x2]
0041d6ab  MOV ESI,dword ptr [EBP + -0x8]
0041d6ae  MOV EDI,dword ptr [EBP + 0x8]
0041d6b1  XOR EAX,EAX
0041d6b3  MOV ECX,dword ptr [EBP + 0xc]
0041d6b6  TEST ECX,ECX
0041d6b8  JLE 0x0041d6d3
0041d6ba  INC BL
0041d6bc  MOV AL,byte ptr [ESI + EBX*0x1]
0041d6bf  ADD DL,AL
0041d6c1  XCHG byte ptr [ESI + EDX*0x1],AL
0041d6c4  MOV byte ptr [ESI + EBX*0x1],AL
0041d6c7  ADD AL,byte ptr [ESI + EDX*0x1]
0041d6ca  MOV AL,byte ptr [ESI + EAX*0x1]
0041d6cd  XOR byte ptr [EDI],AL
0041d6cf  INC EDI
0041d6d0  DEC ECX
0041d6d1  JNZ 0x0041d6ba
0041d6d3  MOV byte ptr [EBP + -0x1],BL
0041d6d6  MOV byte ptr [EBP + -0x2],DL
0041d6d9  MOV EAX,dword ptr [EBP + 0x10]
0041d6dc  MOV CL,byte ptr [EBP + -0x1]
0041d6df  MOV DL,byte ptr [EBP + -0x2]
0041d6e2  POP EDI
0041d6e3  POP ESI
0041d6e4  MOV byte ptr [EAX + 0x100],CL
0041d6ea  MOV byte ptr [EAX + 0x101],DL
0041d6f0  POP EBX
0041d6f1  MOV ESP,EBP
0041d6f3  POP EBP
0041d6f4  RET

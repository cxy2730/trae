; Function: FUN_0046dfb0
; Entry:    0046dfb0
; Size:     117 bytes

0046dfb0  PUSH EBP
0046dfb1  MOV EBP,ESP
0046dfb3  SUB ESP,0x8
0046dfb6  MOV EAX,dword ptr [EBP + 0x10]
0046dfb9  PUSH EBX
0046dfba  PUSH ESI
0046dfbb  PUSH EDI
0046dfbc  MOV CL,byte ptr [EAX + 0x100]
0046dfc2  MOV DL,byte ptr [EAX + 0x101]
0046dfc8  MOV dword ptr [EBP + -0x8],EAX
0046dfcb  MOV byte ptr [EBP + -0x1],CL
0046dfce  MOV byte ptr [EBP + -0x2],DL
0046dfd1  XOR EBX,EBX
0046dfd3  MOV BL,byte ptr [EBP + -0x1]
0046dfd6  XOR EDX,EDX
0046dfd8  MOV DL,byte ptr [EBP + -0x2]
0046dfdb  MOV ESI,dword ptr [EBP + -0x8]
0046dfde  MOV EDI,dword ptr [EBP + 0x8]
0046dfe1  XOR EAX,EAX
0046dfe3  MOV ECX,dword ptr [EBP + 0xc]
0046dfe6  TEST ECX,ECX
0046dfe8  JLE 0x0046e003
0046dfea  INC BL
0046dfec  MOV AL,byte ptr [ESI + EBX*0x1]
0046dfef  ADD DL,AL
0046dff1  XCHG byte ptr [ESI + EDX*0x1],AL
0046dff4  MOV byte ptr [ESI + EBX*0x1],AL
0046dff7  ADD AL,byte ptr [ESI + EDX*0x1]
0046dffa  MOV AL,byte ptr [ESI + EAX*0x1]
0046dffd  XOR byte ptr [EDI],AL
0046dfff  INC EDI
0046e000  DEC ECX
0046e001  JNZ 0x0046dfea
0046e003  MOV byte ptr [EBP + -0x1],BL
0046e006  MOV byte ptr [EBP + -0x2],DL
0046e009  MOV EAX,dword ptr [EBP + 0x10]
0046e00c  MOV CL,byte ptr [EBP + -0x1]
0046e00f  MOV DL,byte ptr [EBP + -0x2]
0046e012  POP EDI
0046e013  POP ESI
0046e014  MOV byte ptr [EAX + 0x100],CL
0046e01a  MOV byte ptr [EAX + 0x101],DL
0046e020  POP EBX
0046e021  MOV ESP,EBP
0046e023  POP EBP
0046e024  RET

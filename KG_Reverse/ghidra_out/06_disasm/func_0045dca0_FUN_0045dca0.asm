; Function: FUN_0045dca0
; Entry:    0045dca0
; Size:     157 bytes

0045dca0  MOV EAX,dword ptr [ESP + 0x4]
0045dca4  MOV ECX,dword ptr [EAX + 0x16b4]
0045dcaa  CMP ECX,0xd
0045dcad  JLE 0x0045dd11
0045dcaf  MOV EDX,dword ptr [ESP + 0x10]
0045dcb3  PUSH EBX
0045dcb4  PUSH ESI
0045dcb5  MOV ESI,EDX
0045dcb7  SHL ESI,CL
0045dcb9  MOV ECX,dword ptr [EAX + 0x8]
0045dcbc  PUSH EDI
0045dcbd  OR word ptr [EAX + 0x16b0],SI
0045dcc4  MOV ESI,dword ptr [EAX + 0x14]
0045dcc7  MOV BL,byte ptr [EAX + 0x16b0]
0045dccd  MOV byte ptr [ECX + ESI*0x1],BL
0045dcd0  MOV ESI,dword ptr [EAX + 0x14]
0045dcd3  MOV EDI,dword ptr [EAX + 0x8]
0045dcd6  XOR ECX,ECX
0045dcd8  MOV CL,byte ptr [EAX + 0x16b1]
0045dcde  INC ESI
0045dcdf  MOV dword ptr [EAX + 0x14],ESI
0045dce2  MOV byte ptr [EDI + ESI*0x1],CL
0045dce5  MOV ECX,dword ptr [EAX + 0x14]
0045dce8  MOV ESI,dword ptr [EAX + 0x16b4]
0045dcee  INC ECX
0045dcef  MOV dword ptr [EAX + 0x14],ECX
0045dcf2  MOV CX,0x10
0045dcf6  SUB CX,SI
0045dcf9  POP EDI
0045dcfa  SHR DX,CL
0045dcfd  ADD ESI,-0xd
0045dd00  MOV dword ptr [EAX + 0x16b4],ESI
0045dd06  POP ESI
0045dd07  POP EBX
0045dd08  MOV word ptr [EAX + 0x16b0],DX
0045dd0f  JMP 0x0045dd27
0045dd11  MOV EDX,dword ptr [ESP + 0x10]
0045dd15  SHL EDX,CL
0045dd17  OR word ptr [EAX + 0x16b0],DX
0045dd1e  ADD ECX,0x3
0045dd21  MOV dword ptr [EAX + 0x16b4],ECX
0045dd27  MOV ECX,dword ptr [ESP + 0xc]
0045dd2b  MOV EDX,dword ptr [ESP + 0x8]
0045dd2f  PUSH 0x1
0045dd31  PUSH ECX
0045dd32  PUSH EDX
0045dd33  PUSH EAX
0045dd34  CALL 0x0045f3b0
0045dd39  ADD ESP,0x10
0045dd3c  RET

; Function: FUN_0045bfb0
; Entry:    0045bfb0
; Size:     119 bytes

0045bfb0  PUSH ESI
0045bfb1  MOV ESI,dword ptr [ESP + 0x8]
0045bfb5  PUSH 0x58
0045bfb7  PUSH 0x1
0045bfb9  MOV EAX,dword ptr [ESI + 0x4]
0045bfbc  PUSH ESI
0045bfbd  CALL dword ptr [EAX]
0045bfbf  XOR ECX,ECX
0045bfc1  MOV dword ptr [ESI + 0x1c8],EAX
0045bfc7  MOV dword ptr [EAX],0x45c420
0045bfcd  MOV dword ptr [EAX + 0x8],0x45a5d0
0045bfd4  MOV dword ptr [EAX + 0xc],0x45cb90
0045bfdb  MOV dword ptr [EAX + 0x44],ECX
0045bfde  MOV dword ptr [EAX + 0x34],ECX
0045bfe1  MOV EAX,dword ptr [ESI + 0x78]
0045bfe4  ADD ESP,0xc
0045bfe7  CMP EAX,0x4
0045bfea  JLE 0x0045bff4
0045bfec  MOV ECX,dword ptr [ESI]
0045bfee  PUSH ESI
0045bfef  CALL dword ptr [ECX]
0045bff1  ADD ESP,0x4
0045bff4  CMP dword ptr [ESI + 0x60],0x100
0045bffb  JLE 0x0045c005
0045bffd  MOV EDX,dword ptr [ESI]
0045bfff  PUSH ESI
0045c000  CALL dword ptr [EDX]
0045c002  ADD ESP,0x4
0045c005  PUSH ESI
0045c006  CALL 0x0045c030
0045c00b  PUSH ESI
0045c00c  CALL 0x0045c280
0045c011  MOV EAX,dword ptr [ESI + 0x58]
0045c014  ADD ESP,0x8
0045c017  CMP EAX,0x2
0045c01a  JNZ 0x0045c025
0045c01c  PUSH ESI
0045c01d  CALL 0x0045c3e0
0045c022  ADD ESP,0x4
0045c025  POP ESI
0045c026  RET

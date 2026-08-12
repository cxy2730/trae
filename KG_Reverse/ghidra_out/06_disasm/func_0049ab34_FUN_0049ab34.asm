; Function: FUN_0049ab34
; Entry:    0049ab34
; Size:     42 bytes

0049ab34  PUSH ESI
0049ab35  MOV ESI,ECX
0049ab37  PUSH EDI
0049ab38  XOR EDI,EDI
0049ab3a  MOV EAX,dword ptr [ESI + 0x20]
0049ab3d  MOV dword ptr [ESI + 0x10],EDI
0049ab40  CMP EAX,EDI
0049ab42  MOV dword ptr [ESI + 0x14],EDI
0049ab45  MOV dword ptr [ESI + 0x18],EDI
0049ab48  MOV dword ptr [ESI + 0x1c],EDI
0049ab4b  JZ 0x0049ab58
0049ab4d  CMP dword ptr [ESI + 0x24],EDI
0049ab50  JZ 0x0049ab58
0049ab52  MOV EDX,dword ptr [ESI]
0049ab54  PUSH EAX
0049ab55  CALL dword ptr [EDX + 0x60]
0049ab58  MOV dword ptr [ESI + 0x20],EDI
0049ab5b  POP EDI
0049ab5c  POP ESI
0049ab5d  RET

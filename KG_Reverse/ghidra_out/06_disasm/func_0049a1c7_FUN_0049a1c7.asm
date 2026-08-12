; Function: FUN_0049a1c7
; Entry:    0049a1c7
; Size:     66 bytes

0049a1c7  PUSH ESI
0049a1c8  PUSH EDI
0049a1c9  MOV ESI,ECX
0049a1cb  XOR EDI,EDI
0049a1cd  CMP dword ptr [ESI + 0x18],EDI
0049a1d0  MOV dword ptr [ESI + 0x20],EDI
0049a1d3  JNZ 0x0049a1e4
0049a1d5  PUSH dword ptr [ESI + 0x2c]
0049a1d8  CALL 0x00492f40
0049a1dd  POP ECX
0049a1de  MOV dword ptr [ESI + 0x2c],EDI
0049a1e1  MOV dword ptr [ESI + 0x24],EDI
0049a1e4  MOV ECX,dword ptr [ESI + 0x38]
0049a1e7  CMP ECX,EDI
0049a1e9  JZ 0x0049a1f2
0049a1eb  MOV EAX,dword ptr [ECX]
0049a1ed  PUSH 0x1
0049a1ef  CALL dword ptr [EAX + 0x4]
0049a1f2  MOV ECX,dword ptr [ESI + 0x34]
0049a1f5  MOV dword ptr [ESI + 0x38],EDI
0049a1f8  CMP ECX,EDI
0049a1fa  JZ 0x0049a203
0049a1fc  MOV EAX,dword ptr [ECX]
0049a1fe  PUSH 0x1
0049a200  CALL dword ptr [EAX + 0x4]
0049a203  MOV dword ptr [ESI + 0x34],EDI
0049a206  POP EDI
0049a207  POP ESI
0049a208  RET

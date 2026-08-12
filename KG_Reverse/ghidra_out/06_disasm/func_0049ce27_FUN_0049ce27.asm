; Function: FUN_0049ce27
; Entry:    0049ce27
; Size:     234 bytes

0049ce27  MOV EAX,0x4a1954
0049ce2c  CALL 0x004858b8
0049ce31  PUSH ECX
0049ce32  PUSH EBX
0049ce33  PUSH ESI
0049ce34  MOV ESI,ECX
0049ce36  PUSH EDI
0049ce37  MOV dword ptr [EBP + -0x10],ESI
0049ce3a  CALL 0x0049d2f0
0049ce3f  XOR EDI,EDI
0049ce41  MOV dword ptr [ESI],0x2f9bfd8
0049ce47  CMP dword ptr [EBP + 0x8],EDI
0049ce4a  MOV dword ptr [EBP + -0x4],EDI
0049ce4d  JZ 0x0049ce5d
0049ce4f  PUSH dword ptr [EBP + 0x8]
0049ce52  CALL 0x00485551
0049ce57  POP ECX
0049ce58  MOV dword ptr [ESI + 0x78],EAX
0049ce5b  JMP 0x0049ce60
0049ce5d  MOV dword ptr [ESI + 0x78],EDI
0049ce60  CALL 0x0049c724
0049ce65  MOV EBX,EAX
0049ce67  PUSH 0x49c796
0049ce6c  LEA ECX,[EBX + 0x1070]
0049ce72  CALL 0x0049ccac
0049ce77  MOV dword ptr [EAX + 0x4],ESI
0049ce7a  CALL dword ptr [0x004a21ec]
0049ce80  MOV dword ptr [ESI + 0x28],EAX
0049ce83  CALL dword ptr [0x004a22b4]
0049ce89  MOV ECX,dword ptr [EBP + -0xc]
0049ce8c  MOV dword ptr [ESI + 0x2c],EAX
0049ce8f  MOV dword ptr [EBX + 0x4],ESI
0049ce92  MOV dword ptr [ESI + 0x68],EDI
0049ce95  MOV dword ptr [ESI + 0x8c],EDI
0049ce9b  MOV dword ptr [ESI + 0x90],EDI
0049cea1  MOV dword ptr [ESI + 0x7c],EDI
0049cea4  MOV dword ptr [ESI + 0x88],EDI
0049ceaa  MOV dword ptr [ESI + 0xa8],EDI
0049ceb0  MOV dword ptr [ESI + 0x80],EDI
0049ceb6  MOV word ptr [ESI + 0xb2],DI
0049cebd  MOV word ptr [ESI + 0xb0],DI
0049cec4  MOV dword ptr [ESI + 0x70],EDI
0049cec7  MOV dword ptr [ESI + 0xac],EDI
0049cecd  MOV dword ptr [ESI + 0xa0],EDI
0049ced3  MOV dword ptr [ESI + 0xa4],EDI
0049ced9  MOV dword ptr [ESI + 0x94],EDI
0049cedf  MOV dword ptr [ESI + 0x98],EDI
0049cee5  MOV dword ptr [ESI + 0xb4],EDI
0049ceeb  MOV dword ptr [ESI + 0xbc],EDI
0049cef1  MOV dword ptr [ESI + 0x84],EDI
0049cef7  MOV dword ptr [ESI + 0xb8],0x200
0049cf01  MOV EAX,ESI
0049cf03  POP EDI
0049cf04  POP ESI
0049cf05  POP EBX
0049cf06  MOV dword ptr FS:[0x0],ECX
0049cf0d  LEAVE
0049cf0e  RET 0x4

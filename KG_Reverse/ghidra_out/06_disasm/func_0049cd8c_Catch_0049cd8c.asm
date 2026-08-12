; Function: Catch@0049cd8c
; Entry:    0049cd8c
; Size:     53 bytes

0049cd8c  PUSH 0x10
0049cd8e  CALL 0x0049d9fa
0049cd93  XOR EDI,EDI
0049cd95  PUSH EDI
0049cd96  PUSH EDI
0049cd97  CALL 0x0048534c
0049cd9c  PUSH EBP
0049cd9d  MOV EBP,ESP
0049cd9f  PUSH ECX
0049cda0  CMP dword ptr [ECX],0x0
0049cda3  JZ 0x0049cdbf
0049cda5  MOV EAX,dword ptr [ECX]
0049cda7  MOV dword ptr [EBP + -0x4],EAX
0049cdaa  MOV EAX,dword ptr [EBP + -0x4]
0049cdad  MOV dword ptr [EBP + -0x4],EAX
0049cdb0  CMP dword ptr [EBP + -0x4],0x0
0049cdb4  JZ 0x0049cdbf
0049cdb6  MOV ECX,dword ptr [EBP + -0x4]
0049cdb9  MOV EAX,dword ptr [ECX]
0049cdbb  PUSH 0x1
0049cdbd  CALL dword ptr [EAX]
0049cdbf  LEAVE
0049cdc0  RET

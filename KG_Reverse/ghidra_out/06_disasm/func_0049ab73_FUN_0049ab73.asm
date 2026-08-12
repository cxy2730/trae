; Function: FUN_0049ab73
; Entry:    0049ab73
; Size:     167 bytes

0049ab73  PUSH EBP
0049ab74  MOV EBP,ESP
0049ab76  PUSH EBX
0049ab77  MOV EBX,dword ptr [EBP + 0x8]
0049ab7a  PUSH ESI
0049ab7b  CMP EBX,0x3
0049ab7e  MOV ESI,ECX
0049ab80  JNZ 0x0049ab8a
0049ab82  PUSH 0x1
0049ab84  POP EAX
0049ab85  JMP 0x0049ac14
0049ab8a  CMP EBX,0x2
0049ab8d  JNZ 0x0049aba4
0049ab8f  MOV EAX,dword ptr [EBP + 0xc]
0049ab92  ADD dword ptr [ESI + 0x14],EAX
0049ab95  MOV EAX,dword ptr [ESI + 0x14]
0049ab98  CMP EAX,dword ptr [ESI + 0x1c]
0049ab9b  JBE 0x0049aba0
0049ab9d  MOV dword ptr [ESI + 0x1c],EAX
0049aba0  XOR EAX,EAX
0049aba2  JMP 0x0049ac14
0049aba4  PUSH EDI
0049aba5  MOV EDI,dword ptr [EBP + 0xc]
0049aba8  CMP EBX,0x1
0049abab  JNZ 0x0049abbf
0049abad  MOV EAX,dword ptr [ESI + 0x14]
0049abb0  ADD EAX,EDI
0049abb2  CMP EAX,dword ptr [ESI + 0x18]
0049abb5  JBE 0x0049abbf
0049abb7  MOV EDX,dword ptr [ESI]
0049abb9  PUSH EAX
0049abba  MOV ECX,ESI
0049abbc  CALL dword ptr [EDX + 0x64]
0049abbf  MOV EAX,dword ptr [ESI + 0x14]
0049abc2  MOV EDX,dword ptr [EBP + 0x10]
0049abc5  ADD EAX,dword ptr [ESI + 0x20]
0049abc8  CMP EBX,0x1
0049abcb  MOV dword ptr [EDX],EAX
0049abcd  JNZ 0x0049abe7
0049abcf  MOV EAX,dword ptr [ESI + 0x14]
0049abd2  MOV ECX,dword ptr [ESI + 0x18]
0049abd5  ADD EAX,EDI
0049abd7  CMP ECX,EAX
0049abd9  JNC 0x0049abdd
0049abdb  MOV EAX,ECX
0049abdd  ADD EAX,dword ptr [ESI + 0x20]
0049abe0  MOV ECX,dword ptr [EBP + 0x14]
0049abe3  MOV dword ptr [ECX],EAX
0049abe5  JMP 0x0049ac0f
0049abe7  CMP EDI,-0x1
0049abea  JNZ 0x0049abf2
0049abec  MOV EDI,dword ptr [ESI + 0x18]
0049abef  SUB EDI,dword ptr [ESI + 0x14]
0049abf2  MOV EAX,dword ptr [ESI + 0x14]
0049abf5  MOV ECX,dword ptr [ESI + 0x1c]
0049abf8  ADD EAX,EDI
0049abfa  CMP ECX,EAX
0049abfc  JNC 0x0049ac00
0049abfe  MOV EAX,ECX
0049ac00  MOV ECX,dword ptr [ESI + 0x20]
0049ac03  ADD EAX,ECX
0049ac05  MOV ECX,dword ptr [EBP + 0x14]
0049ac08  MOV dword ptr [ECX],EAX
0049ac0a  SUB EAX,dword ptr [EDX]
0049ac0c  ADD dword ptr [ESI + 0x14],EAX
0049ac0f  MOV EAX,dword ptr [ECX]
0049ac11  POP EDI
0049ac12  SUB EAX,dword ptr [EDX]
0049ac14  POP ESI
0049ac15  POP EBX
0049ac16  POP EBP
0049ac17  RET 0x10

; Function: FUN_0049bb94
; Entry:    0049bb94
; Size:     129 bytes

0049bb94  PUSH EBP
0049bb95  MOV EBP,ESP
0049bb97  PUSH EBX
0049bb98  PUSH ESI
0049bb99  PUSH EDI
0049bb9a  MOV EDI,ECX
0049bb9c  CALL 0x00497418
0049bba1  TEST AL,0x42
0049bba3  JZ 0x0049bbbc
0049bba5  PUSH dword ptr [EBP + 0xc]
0049bba8  MOV EAX,dword ptr [EDI]
0049bbaa  MOV ECX,EDI
0049bbac  PUSH dword ptr [EBP + 0x8]
0049bbaf  PUSH 0x1a2
0049bbb4  CALL dword ptr [EAX + 0xa0]
0049bbba  JMP 0x0049bc0e
0049bbbc  MOV EAX,dword ptr [EBP + 0x8]
0049bbbf  CMP EAX,-0x1
0049bbc2  MOV dword ptr [EBP + 0x8],EAX
0049bbc5  JNZ 0x0049bbcb
0049bbc7  AND dword ptr [EBP + 0x8],0x0
0049bbcb  MOV ESI,dword ptr [0x004a2564]
0049bbd1  PUSH 0x0
0049bbd3  MOV EBX,0x18b
0049bbd8  PUSH 0x0
0049bbda  PUSH EBX
0049bbdb  PUSH dword ptr [EDI + 0x1c]
0049bbde  CALL ESI
0049bbe0  CMP dword ptr [EBP + 0x8],EAX
0049bbe3  JGE 0x0049bc0b
0049bbe5  PUSH 0x0
0049bbe7  PUSH dword ptr [EBP + 0x8]
0049bbea  PUSH 0x199
0049bbef  PUSH dword ptr [EDI + 0x1c]
0049bbf2  CALL ESI
0049bbf4  CMP dword ptr [EBP + 0xc],EAX
0049bbf7  JZ 0x0049bc06
0049bbf9  INC dword ptr [EBP + 0x8]
0049bbfc  PUSH 0x0
0049bbfe  PUSH 0x0
0049bc00  PUSH EBX
0049bc01  PUSH dword ptr [EDI + 0x1c]
0049bc04  JMP 0x0049bbde
0049bc06  MOV EAX,dword ptr [EBP + 0x8]
0049bc09  JMP 0x0049bc0e
0049bc0b  OR EAX,0xffffffff
0049bc0e  POP EDI
0049bc0f  POP ESI
0049bc10  POP EBX
0049bc11  POP EBP
0049bc12  RET 0x8

; Function: FUN_0049bcca
; Entry:    0049bcca
; Size:     144 bytes

0049bcca  PUSH EBP
0049bccb  MOV EBP,ESP
0049bccd  PUSH EBX
0049bcce  PUSH ESI
0049bccf  PUSH EDI
0049bcd0  MOV EDI,ECX
0049bcd2  CALL 0x00497418
0049bcd7  TEST AL,0x40
0049bcd9  JZ 0x0049bcf2
0049bcdb  PUSH dword ptr [EBP + 0xc]
0049bcde  MOV EAX,dword ptr [EDI]
0049bce0  MOV ECX,EDI
0049bce2  PUSH dword ptr [EBP + 0x8]
0049bce5  PUSH 0x18c
0049bcea  CALL dword ptr [EAX + 0xa0]
0049bcf0  JMP 0x0049bd53
0049bcf2  MOV EAX,dword ptr [EBP + 0x8]
0049bcf5  CMP EAX,-0x1
0049bcf8  MOV dword ptr [EBP + 0x8],EAX
0049bcfb  JNZ 0x0049bd01
0049bcfd  AND dword ptr [EBP + 0x8],0x0
0049bd01  MOV ESI,dword ptr [0x004a2564]
0049bd07  PUSH 0x0
0049bd09  MOV EBX,0x18b
0049bd0e  PUSH 0x0
0049bd10  PUSH EBX
0049bd11  PUSH dword ptr [EDI + 0x1c]
0049bd14  CALL ESI
0049bd16  CMP dword ptr [EBP + 0x8],EAX
0049bd19  JGE 0x0049bd50
0049bd1b  PUSH 0x0
0049bd1d  PUSH dword ptr [EBP + 0x8]
0049bd20  PUSH 0x199
0049bd25  PUSH dword ptr [EDI + 0x1c]
0049bd28  CALL ESI
0049bd2a  CMP dword ptr [EBP + 0xc],EAX
0049bd2d  JZ 0x0049bd3c
0049bd2f  INC dword ptr [EBP + 0x8]
0049bd32  PUSH 0x0
0049bd34  PUSH 0x0
0049bd36  PUSH EBX
0049bd37  PUSH dword ptr [EDI + 0x1c]
0049bd3a  JMP 0x0049bd14
0049bd3c  PUSH 0x0
0049bd3e  PUSH dword ptr [EBP + 0x8]
0049bd41  PUSH 0x186
0049bd46  PUSH dword ptr [EDI + 0x1c]
0049bd49  CALL ESI
0049bd4b  MOV EAX,dword ptr [EBP + 0x8]
0049bd4e  JMP 0x0049bd53
0049bd50  OR EAX,0xffffffff
0049bd53  POP EDI
0049bd54  POP ESI
0049bd55  POP EBX
0049bd56  POP EBP
0049bd57  RET 0x8

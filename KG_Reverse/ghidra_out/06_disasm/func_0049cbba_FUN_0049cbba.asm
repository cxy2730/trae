; Function: FUN_0049cbba
; Entry:    0049cbba
; Size:     153 bytes

0049cbba  PUSH EBP
0049cbbb  MOV EBP,ESP
0049cbbd  PUSH ECX
0049cbbe  PUSH EBX
0049cbbf  PUSH ESI
0049cbc0  MOV ESI,dword ptr [EBP + 0x8]
0049cbc3  PUSH EDI
0049cbc4  PUSH 0x1
0049cbc6  MOV EBX,ECX
0049cbc8  POP EDI
0049cbc9  CMP dword ptr [ESI + 0x8],EDI
0049cbcc  MOV dword ptr [EBP + -0x4],EDI
0049cbcf  JLE 0x0049cc13
0049cbd1  MOV EAX,dword ptr [EBP + 0xc]
0049cbd4  TEST EAX,EAX
0049cbd6  JZ 0x0049cbf0
0049cbd8  MOV ECX,dword ptr [EBX + 0x10]
0049cbdb  CMP dword ptr [ECX + EDI*0x8 + 0x4],EAX
0049cbdf  JZ 0x0049cbf0
0049cbe1  MOV EAX,dword ptr [ESI + 0xc]
0049cbe4  CMP dword ptr [EAX + EDI*0x4],0x0
0049cbe8  JZ 0x0049cc07
0049cbea  AND dword ptr [EBP + -0x4],0x0
0049cbee  JMP 0x0049cc07
0049cbf0  MOV EAX,dword ptr [ESI + 0xc]
0049cbf3  MOV ECX,dword ptr [EAX + EDI*0x4]
0049cbf6  TEST ECX,ECX
0049cbf8  JZ 0x0049cc00
0049cbfa  MOV EAX,dword ptr [ECX]
0049cbfc  PUSH 0x1
0049cbfe  CALL dword ptr [EAX]
0049cc00  MOV EAX,dword ptr [ESI + 0xc]
0049cc03  AND dword ptr [EAX + EDI*0x4],0x0
0049cc07  INC EDI
0049cc08  CMP EDI,dword ptr [ESI + 0x8]
0049cc0b  JL 0x0049cbd1
0049cc0d  CMP dword ptr [EBP + -0x4],0x0
0049cc11  JZ 0x0049cc4c
0049cc13  LEA EDI,[EBX + 0x1c]
0049cc16  PUSH EDI
0049cc17  CALL dword ptr [0x004a2278]
0049cc1d  PUSH ESI
0049cc1e  LEA ECX,[EBX + 0x14]
0049cc21  CALL 0x0049c834
0049cc26  PUSH EDI
0049cc27  CALL dword ptr [0x004a227c]
0049cc2d  PUSH dword ptr [ESI + 0xc]
0049cc30  CALL dword ptr [0x004a2248]
0049cc36  TEST ESI,ESI
0049cc38  JZ 0x0049cc42
0049cc3a  MOV EAX,dword ptr [ESI]
0049cc3c  PUSH 0x1
0049cc3e  MOV ECX,ESI
0049cc40  CALL dword ptr [EAX]
0049cc42  PUSH 0x0
0049cc44  PUSH dword ptr [EBX]
0049cc46  CALL dword ptr [0x004a21fc]
0049cc4c  POP EDI
0049cc4d  POP ESI
0049cc4e  POP EBX
0049cc4f  LEAVE
0049cc50  RET 0x8

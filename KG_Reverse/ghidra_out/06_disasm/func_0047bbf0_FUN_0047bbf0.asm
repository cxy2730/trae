; Function: FUN_0047bbf0
; Entry:    0047bbf0
; Size:     251 bytes

0047bbf0  SUB ESP,0x18
0047bbf3  MOV EAX,dword ptr [ESP + 0x1c]
0047bbf7  PUSH EBP
0047bbf8  MOV EBP,dword ptr [ESP + 0x24]
0047bbfc  SAR EBP,0x1
0047bbfe  TEST EAX,EAX
0047bc00  MOV dword ptr [ESP + 0x18],EBP
0047bc04  LEA ECX,[EBP + -0x1]
0047bc07  JLE 0x0047bce6
0047bc0d  LEA EDX,[EBP*0x4 + 0x0]
0047bc14  PUSH EBX
0047bc15  PUSH ESI
0047bc16  MOV ESI,dword ptr [ESP + 0x30]
0047bc1a  MOV dword ptr [ESP + 0x10],EDX
0047bc1e  MOV EDX,dword ptr [ESP + 0x34]
0047bc22  SHL ECX,0x2
0047bc25  SUB ESI,EDX
0047bc27  PUSH EDI
0047bc28  MOV dword ptr [ESP + 0x2c],0x1
0047bc30  MOV dword ptr [ESP + 0x10],0x0
0047bc38  MOV dword ptr [ESP + 0x20],ECX
0047bc3c  MOV dword ptr [ESP + 0x1c],ESI
0047bc40  MOV dword ptr [ESP + 0x18],EAX
0047bc44  JMP 0x0047bc4a
0047bc46  MOV ESI,dword ptr [ESP + 0x1c]
0047bc4a  MOV ECX,dword ptr [ESP + 0x10]
0047bc4e  TEST EBP,EBP
0047bc50  JLE 0x0047bc69
0047bc52  MOV ECX,dword ptr [ESP + 0x14]
0047bc56  MOV EAX,EDX
0047bc58  ADD ESI,EDX
0047bc5a  MOV EDI,EBP
0047bc5c  MOV EBX,dword ptr [ESI]
0047bc5e  ADD ESI,0x4
0047bc61  MOV dword ptr [EAX],EBX
0047bc63  ADD EAX,0x8
0047bc66  DEC EDI
0047bc67  JNZ 0x0047bc5c
0047bc69  MOV EDI,dword ptr [ESP + 0x2c]
0047bc6d  LEA EBX,[EBP + -0x1]
0047bc70  TEST EBX,EBX
0047bc72  JLE 0x0047bc9b
0047bc74  MOV EAX,dword ptr [ESP + 0x34]
0047bc78  MOV EBP,dword ptr [ESP + 0x20]
0047bc7c  ADD EAX,ECX
0047bc7e  LEA ESI,[EDX + 0x4]
0047bc81  LEA EDI,[EDI + EBX*0x2]
0047bc84  ADD ECX,EBP
0047bc86  MOV EBP,dword ptr [EAX + 0x4]
0047bc89  ADD ESI,0x8
0047bc8c  ADD EBP,dword ptr [EAX]
0047bc8e  ADD EAX,0x4
0047bc91  DEC EBX
0047bc92  MOV dword ptr [ESI + -0x8],EBP
0047bc95  JNZ 0x0047bc86
0047bc97  MOV EBP,dword ptr [ESP + 0x24]
0047bc9b  MOV EAX,dword ptr [ESP + 0x34]
0047bc9f  MOV ESI,dword ptr [ESP + 0x10]
0047bca3  MOV ECX,dword ptr [ECX + EAX*0x1]
0047bca6  MOV EAX,dword ptr [ESP + 0x38]
0047bcaa  MOV dword ptr [EAX + EDI*0x4],ECX
0047bcad  MOV ECX,dword ptr [ESP + 0x30]
0047bcb1  MOV EDI,dword ptr [ESP + 0x14]
0047bcb5  LEA EAX,[ECX*0x4 + 0x0]
0047bcbc  ADD ESI,EAX
0047bcbe  ADD EDX,EAX
0047bcc0  MOV dword ptr [ESP + 0x10],ESI
0047bcc4  MOV ESI,dword ptr [ESP + 0x2c]
0047bcc8  ADD EDI,EAX
0047bcca  MOV EAX,dword ptr [ESP + 0x18]
0047bcce  ADD ESI,ECX
0047bcd0  DEC EAX
0047bcd1  MOV dword ptr [ESP + 0x14],EDI
0047bcd5  MOV dword ptr [ESP + 0x2c],ESI
0047bcd9  MOV dword ptr [ESP + 0x18],EAX
0047bcdd  JNZ 0x0047bc46
0047bce3  POP EDI
0047bce4  POP ESI
0047bce5  POP EBX
0047bce6  POP EBP
0047bce7  ADD ESP,0x18
0047bcea  RET

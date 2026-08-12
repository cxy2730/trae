; Function: FUN_0047bae0
; Entry:    0047bae0
; Size:     191 bytes

0047bae0  SUB ESP,0x10
0047bae3  MOV EAX,dword ptr [ESP + 0x18]
0047bae7  MOV ECX,dword ptr [ESP + 0x14]
0047baeb  PUSH EBX
0047baec  MOV EBX,EAX
0047baee  SAR EBX,0x1
0047baf0  TEST ECX,ECX
0047baf2  MOV dword ptr [ESP + 0xc],EBX
0047baf6  JLE 0x0047bb9a
0047bafc  MOV EDX,dword ptr [ESP + 0x24]
0047bb00  PUSH EBP
0047bb01  MOV EBP,dword ptr [ESP + 0x24]
0047bb05  PUSH ESI
0047bb06  SHL EAX,0x2
0047bb09  LEA EDX,[EDX + EBX*0x4]
0047bb0c  PUSH EDI
0047bb0d  LEA ESI,[EAX + EBP*0x1 + -0x4]
0047bb11  MOV dword ptr [ESP + 0x1c],EAX
0047bb15  MOV dword ptr [ESP + 0x24],EBP
0047bb19  MOV dword ptr [ESP + 0x10],EDX
0047bb1d  MOV dword ptr [ESP + 0x28],ESI
0047bb21  MOV dword ptr [ESP + 0x14],ECX
0047bb25  TEST EBX,EBX
0047bb27  JLE 0x0047bb6e
0047bb29  MOV EDI,dword ptr [ESP + 0x30]
0047bb2d  MOV ESI,dword ptr [ESP + 0x34]
0047bb31  MOV EAX,dword ptr [ESP + 0x24]
0047bb35  MOV ECX,dword ptr [ESP + 0x28]
0047bb39  SUB EDI,EBP
0047bb3b  MOV EBP,dword ptr [ECX]
0047bb3d  ADD EDX,0x4
0047bb40  ADD EBP,dword ptr [EAX]
0047bb42  ADD EAX,0x4
0047bb45  SUB ECX,0x4
0047bb48  ADD ESI,0x4
0047bb4b  MOV dword ptr [EDI + EAX*0x1 + -0x4],EBP
0047bb4f  MOV EBP,dword ptr [EAX + -0x4]
0047bb52  SUB EBP,dword ptr [ECX + 0x4]
0047bb55  IMUL EBP,dword ptr [ESI + -0x4]
0047bb59  SAR EBP,0xa
0047bb5c  MOV dword ptr [EDX + -0x4],EBP
0047bb5f  DEC EBX
0047bb60  JNZ 0x0047bb3b
0047bb62  MOV EBP,dword ptr [ESP + 0x2c]
0047bb66  MOV EBX,dword ptr [ESP + 0x18]
0047bb6a  MOV EAX,dword ptr [ESP + 0x1c]
0047bb6e  MOV ECX,dword ptr [ESP + 0x28]
0047bb72  MOV EDI,dword ptr [ESP + 0x24]
0047bb76  MOV EDX,dword ptr [ESP + 0x10]
0047bb7a  ADD ECX,EAX
0047bb7c  MOV dword ptr [ESP + 0x28],ECX
0047bb80  MOV ECX,dword ptr [ESP + 0x14]
0047bb84  ADD EDI,EAX
0047bb86  ADD EDX,EAX
0047bb88  DEC ECX
0047bb89  MOV dword ptr [ESP + 0x24],EDI
0047bb8d  MOV dword ptr [ESP + 0x10],EDX
0047bb91  MOV dword ptr [ESP + 0x14],ECX
0047bb95  JNZ 0x0047bb25
0047bb97  POP EDI
0047bb98  POP ESI
0047bb99  POP EBP
0047bb9a  POP EBX
0047bb9b  ADD ESP,0x10
0047bb9e  RET

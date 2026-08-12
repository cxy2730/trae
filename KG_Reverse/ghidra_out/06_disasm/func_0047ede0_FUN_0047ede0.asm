; Function: FUN_0047ede0
; Entry:    0047ede0
; Size:     181 bytes

0047ede0  MOV EAX,dword ptr [ESP + 0x8]
0047ede4  MOV ECX,dword ptr [ESP + 0x4]
0047ede8  SUB ESP,0xc
0047edeb  PUSH EBP
0047edec  MOV EBP,EAX
0047edee  SAR EBP,0x1
0047edf0  TEST ECX,ECX
0047edf2  JLE 0x0047ee90
0047edf8  MOV EDX,dword ptr [ESP + 0x20]
0047edfc  PUSH EBX
0047edfd  MOV EBX,dword ptr [ESP + 0x20]
0047ee01  PUSH ESI
0047ee02  SHL EAX,0x2
0047ee05  LEA EDX,[EDX + EBP*0x4]
0047ee08  PUSH EDI
0047ee09  LEA ESI,[EAX + EBX*0x1 + -0x4]
0047ee0d  MOV dword ptr [ESP + 0x18],EAX
0047ee11  MOV dword ptr [ESP + 0x20],EBX
0047ee15  MOV dword ptr [ESP + 0x10],EDX
0047ee19  MOV dword ptr [ESP + 0x24],ESI
0047ee1d  MOV dword ptr [ESP + 0x14],ECX
0047ee21  TEST EBP,EBP
0047ee23  JLE 0x0047ee64
0047ee25  MOV EDI,dword ptr [ESP + 0x2c]
0047ee29  MOV ESI,dword ptr [ESP + 0x30]
0047ee2d  MOV ECX,dword ptr [ESP + 0x24]
0047ee31  MOV EAX,dword ptr [ESP + 0x20]
0047ee35  SUB EDI,EBX
0047ee37  MOV EBX,EBP
0047ee39  FLD float ptr [EAX]
0047ee3b  FADD float ptr [ECX]
0047ee3d  ADD EAX,0x4
0047ee40  ADD EDX,0x4
0047ee43  SUB ECX,0x4
0047ee46  ADD ESI,0x4
0047ee49  DEC EBX
0047ee4a  FSTP float ptr [EDI + EAX*0x1 + -0x4]
0047ee4e  FLD float ptr [EAX + -0x4]
0047ee51  FSUB float ptr [ECX + 0x4]
0047ee54  FMUL float ptr [ESI + -0x4]
0047ee57  FSTP float ptr [EDX + -0x4]
0047ee5a  JNZ 0x0047ee39
0047ee5c  MOV EBX,dword ptr [ESP + 0x28]
0047ee60  MOV EAX,dword ptr [ESP + 0x18]
0047ee64  MOV ECX,dword ptr [ESP + 0x24]
0047ee68  MOV EDI,dword ptr [ESP + 0x20]
0047ee6c  MOV EDX,dword ptr [ESP + 0x10]
0047ee70  ADD ECX,EAX
0047ee72  MOV dword ptr [ESP + 0x24],ECX
0047ee76  MOV ECX,dword ptr [ESP + 0x14]
0047ee7a  ADD EDI,EAX
0047ee7c  ADD EDX,EAX
0047ee7e  DEC ECX
0047ee7f  MOV dword ptr [ESP + 0x20],EDI
0047ee83  MOV dword ptr [ESP + 0x10],EDX
0047ee87  MOV dword ptr [ESP + 0x14],ECX
0047ee8b  JNZ 0x0047ee21
0047ee8d  POP EDI
0047ee8e  POP ESI
0047ee8f  POP EBX
0047ee90  POP EBP
0047ee91  ADD ESP,0xc
0047ee94  RET

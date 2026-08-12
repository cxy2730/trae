; Function: FUN_0047cc90
; Entry:    0047cc90
; Size:     395 bytes

0047cc90  SUB ESP,0x18
0047cc93  MOV ECX,dword ptr [ESP + 0x24]
0047cc97  PUSH EBX
0047cc98  PUSH EBP
0047cc99  MOV EBP,dword ptr [ESP + 0x30]
0047cc9d  MOV EAX,dword ptr [ECX + 0x20]
0047cca0  MOV ECX,dword ptr [ECX + 0x1c]
0047cca3  PUSH ESI
0047cca4  PUSH EDI
0047cca5  LEA EDX,[ECX + ECX*0x4]
0047cca8  LEA EDX,[ECX + EDX*0x2]
0047ccab  LEA EDX,[EAX + EDX*0x2]
0047ccae  INC EAX
0047ccaf  MOV EDI,dword ptr [EDX*0x4 + 0x30128c0]
0047ccb6  SUB EBP,EDI
0047ccb8  TEST ECX,ECX
0047ccba  MOV dword ptr [ESP + 0x34],EBP
0047ccbe  JZ 0x0047cda0
0047ccc4  CMP EAX,0xc
0047ccc7  JGE 0x0047ce13
0047cccd  MOV ECX,dword ptr [ESP + 0x30]
0047ccd1  MOV ESI,dword ptr [ESP + 0x3c]
0047ccd5  LEA EBX,[EAX*0x4 + 0x30129f8]
0047ccdc  LEA EDX,[ECX + EAX*0x4 + 0x5c]
0047cce0  MOV dword ptr [ESP + 0x30],EDX
0047cce4  XOR ECX,ECX
0047cce6  MOV EAX,dword ptr [EDX]
0047cce8  ADD ECX,0x4
0047cceb  ADD EDX,0x34
0047ccee  LEA EAX,[EAX + ESI*0x8]
0047ccf1  SHL EAX,0x3
0047ccf4  CMP ECX,0xc
0047ccf7  MOV EBP,dword ptr [EAX + 0x300dc5c]
0047ccfd  MOV EAX,dword ptr [EAX + 0x300dc60]
0047cd03  MOV dword ptr [ESP + ECX*0x1 + 0x18],EBP
0047cd07  MOV dword ptr [ESP + ECX*0x1 + 0xc],EAX
0047cd0b  JL 0x0047cce6
0047cd0d  MOV EDX,dword ptr [EBX]
0047cd0f  XOR ECX,ECX
0047cd11  TEST EDX,EDX
0047cd13  JLE 0x0047cd7e
0047cd15  MOV EAX,dword ptr [ESP + 0x2c]
0047cd19  LEA EAX,[EAX + EDI*0x4 + 0x4]
0047cd1d  MOV EBP,dword ptr [ESP + 0x34]
0047cd21  SUB EBP,0x3
0047cd24  MOV dword ptr [ESP + 0x34],EBP
0047cd28  JS 0x0047ce13
0047cd2e  FLD float ptr [ESP + 0x10]
0047cd32  FMUL float ptr [EAX + -0x4]
0047cd35  ADD EDI,0x3
0047cd38  ADD EAX,0xc
0047cd3b  INC ECX
0047cd3c  CMP ECX,EDX
0047cd3e  FSTP float ptr [EAX + 0x11f0]
0047cd44  FLD float ptr [ESP + 0x1c]
0047cd48  FMUL float ptr [EAX + -0x10]
0047cd4b  FSTP float ptr [EAX + -0x10]
0047cd4e  FLD float ptr [ESP + 0x14]
0047cd52  FMUL float ptr [EAX + -0xc]
0047cd55  FSTP float ptr [EAX + 0x11f4]
0047cd5b  FLD float ptr [ESP + 0x20]
0047cd5f  FMUL float ptr [EAX + -0xc]
0047cd62  FSTP float ptr [EAX + -0xc]
0047cd65  FLD float ptr [ESP + 0x18]
0047cd69  FMUL float ptr [EAX + -0x8]
0047cd6c  FSTP float ptr [EAX + 0x11f8]
0047cd72  FLD float ptr [ESP + 0x24]
0047cd76  FMUL float ptr [EAX + -0x8]
0047cd79  FSTP float ptr [EAX + -0x8]
0047cd7c  JL 0x0047cd1d
0047cd7e  MOV EDX,dword ptr [ESP + 0x30]
0047cd82  ADD EBX,0x4
0047cd85  ADD EDX,0x4
0047cd88  CMP EBX,0x3012a28
0047cd8e  MOV dword ptr [ESP + 0x30],EDX
0047cd92  JL 0x0047cce4
0047cd98  POP EDI
0047cd99  POP ESI
0047cd9a  POP EBP
0047cd9b  POP EBX
0047cd9c  ADD ESP,0x18
0047cd9f  RET
0047cda0  CMP EAX,0x15
0047cda3  JGE 0x0047ce13
0047cda5  MOV EBX,dword ptr [ESP + 0x30]
0047cda9  LEA ESI,[EAX*0x4 + 0x30129a0]
0047cdb0  SUB EBX,0x30129a0
0047cdb6  MOV EAX,dword ptr [EBX + ESI*0x1]
0047cdb9  MOV ECX,dword ptr [ESP + 0x3c]
0047cdbd  MOV EDX,dword ptr [ESI]
0047cdbf  LEA EAX,[EAX + ECX*0x8]
0047cdc2  SHL EAX,0x3
0047cdc5  MOV ECX,dword ptr [EAX + 0x300dc5c]
0047cdcb  MOV EAX,dword ptr [EAX + 0x300dc60]
0047cdd1  MOV dword ptr [ESP + 0x34],ECX
0047cdd5  XOR ECX,ECX
0047cdd7  TEST EDX,EDX
0047cdd9  MOV dword ptr [ESP + 0x30],EAX
0047cddd  JLE 0x0047ce08
0047cddf  MOV EAX,dword ptr [ESP + 0x2c]
0047cde3  LEA EAX,[EAX + EDI*0x4]
0047cde6  DEC EBP
0047cde7  JS 0x0047ce13
0047cde9  FLD float ptr [ESP + 0x30]
0047cded  FMUL float ptr [EAX]
0047cdef  INC ECX
0047cdf0  INC EDI
0047cdf1  ADD EAX,0x4
0047cdf4  CMP ECX,EDX
0047cdf6  FSTP float ptr [EAX + 0x11fc]
0047cdfc  FLD float ptr [ESP + 0x34]
0047ce00  FMUL float ptr [EAX + -0x4]
0047ce03  FSTP float ptr [EAX + -0x4]
0047ce06  JL 0x0047cde6
0047ce08  ADD ESI,0x4
0047ce0b  CMP ESI,0x30129f4
0047ce11  JL 0x0047cdb6
0047ce13  POP EDI
0047ce14  POP ESI
0047ce15  POP EBP
0047ce16  POP EBX
0047ce17  ADD ESP,0x18
0047ce1a  RET

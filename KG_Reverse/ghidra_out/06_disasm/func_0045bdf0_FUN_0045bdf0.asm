; Function: FUN_0045bdf0
; Entry:    0045bdf0
; Size:     406 bytes

0045bdf0  SUB ESP,0x30
0045bdf3  PUSH EBX
0045bdf4  MOV EBX,dword ptr [ESP + 0x38]
0045bdf8  PUSH EBP
0045bdf9  PUSH ESI
0045bdfa  MOV EAX,dword ptr [EBX + 0x1c8]
0045be00  PUSH EDI
0045be01  XOR EDI,EDI
0045be03  MOV ECX,dword ptr [EAX + 0x18]
0045be06  MOV EAX,dword ptr [ESP + 0x48]
0045be0a  MOV dword ptr [ESP + 0x2c],ECX
0045be0e  MOV dword ptr [ESP + 0x14],EDI
0045be12  MOV EDX,dword ptr [EAX + 0xc]
0045be15  MOV ECX,dword ptr [EAX + 0x4]
0045be18  MOV ESI,dword ptr [EAX + 0x8]
0045be1b  MOV EBP,dword ptr [EAX + 0x10]
0045be1e  MOV dword ptr [ESP + 0x30],EDX
0045be22  MOV EDX,dword ptr [EAX + 0x14]
0045be25  MOV EAX,dword ptr [EAX]
0045be27  MOV dword ptr [ESP + 0x18],EDI
0045be2b  CMP EAX,ECX
0045be2d  MOV dword ptr [ESP + 0x1c],EDI
0045be31  MOV dword ptr [ESP + 0x3c],ESI
0045be35  MOV dword ptr [ESP + 0x34],EBP
0045be39  MOV dword ptr [ESP + 0x20],EDX
0045be3d  JG 0x0045bf37
0045be43  LEA EDX,[EAX*0x8 + 0x4]
0045be4a  SUB ECX,EAX
0045be4c  MOV dword ptr [ESP + 0x10],EDX
0045be50  MOV EDX,dword ptr [ESP + 0x2c]
0045be54  INC ECX
0045be55  LEA EDX,[EDX + EAX*0x4]
0045be58  MOV dword ptr [ESP + 0x2c],ECX
0045be5c  MOV dword ptr [ESP + 0x48],EDX
0045be60  MOV EAX,dword ptr [ESP + 0x30]
0045be64  CMP ESI,EAX
0045be66  JG 0x0045bf12
0045be6c  MOV EBX,dword ptr [ESP + 0x48]
0045be70  MOV ECX,ESI
0045be72  SHL ECX,0x5
0045be75  MOV EBX,dword ptr [EBX]
0045be77  ADD ECX,EBP
0045be79  SUB EAX,ESI
0045be7b  LEA EDX,[ESI*0x4 + 0x2]
0045be82  LEA EBX,[EBX + ECX*0x2]
0045be85  INC EAX
0045be86  MOV dword ptr [ESP + 0x24],EBX
0045be8a  MOV dword ptr [ESP + 0x28],EAX
0045be8e  CMP EBP,dword ptr [ESP + 0x20]
0045be92  JG 0x0045bef9
0045be94  MOV ESI,dword ptr [ESP + 0x20]
0045be98  LEA ECX,[EBP*0x8 + 0x4]
0045be9f  SUB ESI,EBP
0045bea1  INC ESI
0045bea2  XOR EAX,EAX
0045bea4  MOV AX,word ptr [EBX]
0045bea7  ADD EBX,0x2
0045beaa  TEST EAX,EAX
0045beac  MOV dword ptr [ESP + 0x38],EBX
0045beb0  JZ 0x0045beeb
0045beb2  MOV EBX,dword ptr [ESP + 0x10]
0045beb6  MOV EBP,dword ptr [ESP + 0x14]
0045beba  IMUL EBX,EAX
0045bebd  ADD EBP,EBX
0045bebf  MOV EBX,EDX
0045bec1  IMUL EBX,EAX
0045bec4  MOV dword ptr [ESP + 0x14],EBP
0045bec8  MOV EBP,dword ptr [ESP + 0x18]
0045becc  ADD EBP,EBX
0045bece  MOV EBX,ECX
0045bed0  IMUL EBX,EAX
0045bed3  ADD EDI,EAX
0045bed5  MOV EAX,dword ptr [ESP + 0x1c]
0045bed9  ADD EAX,EBX
0045bedb  MOV EBX,dword ptr [ESP + 0x38]
0045bedf  MOV dword ptr [ESP + 0x18],EBP
0045bee3  MOV EBP,dword ptr [ESP + 0x34]
0045bee7  MOV dword ptr [ESP + 0x1c],EAX
0045beeb  ADD ECX,0x8
0045beee  DEC ESI
0045beef  JNZ 0x0045bea2
0045bef1  MOV EAX,dword ptr [ESP + 0x28]
0045bef5  MOV ESI,dword ptr [ESP + 0x3c]
0045bef9  MOV EBX,dword ptr [ESP + 0x24]
0045befd  ADD EDX,0x4
0045bf00  ADD EBX,0x40
0045bf03  DEC EAX
0045bf04  MOV dword ptr [ESP + 0x24],EBX
0045bf08  MOV dword ptr [ESP + 0x28],EAX
0045bf0c  JNZ 0x0045be8e
0045bf0e  MOV EBX,dword ptr [ESP + 0x44]
0045bf12  MOV EDX,dword ptr [ESP + 0x48]
0045bf16  MOV ECX,dword ptr [ESP + 0x10]
0045bf1a  MOV EAX,dword ptr [ESP + 0x2c]
0045bf1e  ADD EDX,0x4
0045bf21  ADD ECX,0x8
0045bf24  DEC EAX
0045bf25  MOV dword ptr [ESP + 0x48],EDX
0045bf29  MOV dword ptr [ESP + 0x10],ECX
0045bf2d  MOV dword ptr [ESP + 0x2c],EAX
0045bf31  JNZ 0x0045be60
0045bf37  MOV EDX,dword ptr [ESP + 0x14]
0045bf3b  MOV ECX,EDI
0045bf3d  SAR ECX,0x1
0045bf3f  MOV ESI,dword ptr [ESP + 0x4c]
0045bf43  LEA EAX,[ECX + EDX*0x1]
0045bf46  CDQ
0045bf47  IDIV EDI
0045bf49  MOV EDX,dword ptr [EBX + 0x88]
0045bf4f  MOV EDX,dword ptr [EDX]
0045bf51  MOV byte ptr [EDX + ESI*0x1],AL
0045bf54  MOV EAX,dword ptr [ESP + 0x18]
0045bf58  ADD EAX,ECX
0045bf5a  CDQ
0045bf5b  IDIV EDI
0045bf5d  MOV EDX,dword ptr [EBX + 0x88]
0045bf63  MOV EDX,dword ptr [EDX + 0x4]
0045bf66  MOV byte ptr [EDX + ESI*0x1],AL
0045bf69  MOV EAX,dword ptr [ESP + 0x1c]
0045bf6d  ADD EAX,ECX
0045bf6f  MOV ECX,dword ptr [EBX + 0x88]
0045bf75  CDQ
0045bf76  IDIV EDI
0045bf78  MOV EDX,dword ptr [ECX + 0x8]
0045bf7b  POP EDI
0045bf7c  MOV byte ptr [EDX + ESI*0x1],AL
0045bf7f  POP ESI
0045bf80  POP EBP
0045bf81  POP EBX
0045bf82  ADD ESP,0x30
0045bf85  RET

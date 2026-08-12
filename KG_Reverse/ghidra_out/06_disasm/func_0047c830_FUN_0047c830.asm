; Function: FUN_0047c830
; Entry:    0047c830
; Size:     792 bytes

0047c830  SUB ESP,0x10
0047c833  PUSH EBX
0047c834  PUSH EBP
0047c835  PUSH ESI
0047c836  MOV ESI,dword ptr [ESP + 0x2c]
0047c83a  CMP ESI,0x2
0047c83d  PUSH EDI
0047c83e  JNZ 0x0047c846
0047c840  XOR ESI,ESI
0047c842  MOV dword ptr [ESP + 0x30],ESI
0047c846  MOV EAX,dword ptr [ESP + 0x34]
0047c84a  MOV EDI,dword ptr [ESP + 0x24]
0047c84e  MOV EBX,dword ptr [ESP + 0x28]
0047c852  LEA ECX,[EAX + 0x11]
0047c855  MOV EAX,0x38e38e39
0047c85a  IMUL ECX
0047c85c  SAR EDX,0x2
0047c85f  MOV ECX,EDX
0047c861  SHR ECX,0x1f
0047c864  ADD EDX,ECX
0047c866  XOR ECX,ECX
0047c868  TEST EDX,EDX
0047c86a  JLE 0x0047c9b1
0047c870  LEA EAX,[ESI + ESI*0x8]
0047c873  MOV dword ptr [ESP + 0x14],EDX
0047c877  SHL EAX,0x2
0047c87a  MOV dword ptr [ESP + 0x1c],EAX
0047c87e  MOV EAX,dword ptr [ESP + 0x2c]
0047c882  MOV dword ptr [ESP + 0x24],EAX
0047c886  MOV dword ptr [ESP + 0x28],EDX
0047c88a  JMP 0x0047c890
0047c88c  MOV ESI,dword ptr [ESP + 0x30]
0047c890  PUSH EDI
0047c891  CALL 0x004809c0
0047c896  LEA ECX,[ESI + ESI*0x8]
0047c899  ADD ESP,0x4
0047c89c  LEA EAX,[EDI + 0x44]
0047c89f  MOV dword ptr [ESP + 0x10],0x9
0047c8a7  SHL ECX,0x4
0047c8aa  LEA ESI,[EAX + -0x20]
0047c8ad  MOV dword ptr [ESP + 0x34],EAX
0047c8b1  MOV EAX,dword ptr [ESP + 0x24]
0047c8b5  LEA EDX,[ECX + 0x30116a4]
0047c8bb  FLD float ptr [EDX + -0x24]
0047c8be  FMUL float ptr [ESI]
0047c8c0  MOV EBP,dword ptr [ESP + 0x34]
0047c8c4  ADD ESI,0x4
0047c8c7  SUB EBP,0x4
0047c8ca  ADD EDX,0x4
0047c8cd  FADD float ptr [EAX]
0047c8cf  MOV dword ptr [ESP + 0x34],EBP
0047c8d3  ADD EAX,0x80
0047c8d8  FSTP float ptr [EAX + -0x80]
0047c8db  FLD float ptr [EBP + 0x4]
0047c8de  FMUL float ptr [EDX + -0x4]
0047c8e1  MOV EBP,dword ptr [ESP + 0x10]
0047c8e5  DEC EBP
0047c8e6  FADD float ptr [EAX + 0x400]
0047c8ec  MOV dword ptr [ESP + 0x10],EBP
0047c8f0  FSTP float ptr [EAX + 0x400]
0047c8f6  JNZ 0x0047c8bb
0047c8f8  MOV EBP,EDI
0047c8fa  LEA EDX,[ECX + 0x30116ec]
0047c900  SUB EBP,EBX
0047c902  LEA ESI,[ECX + 0x301170c]
0047c908  MOV EAX,EBX
0047c90a  LEA ECX,[EBX + 0x20]
0047c90d  MOV dword ptr [ESP + 0x18],EBP
0047c911  MOV dword ptr [ESP + 0x10],0x4
0047c919  MOV EBP,dword ptr [ESP + 0x18]
0047c91d  ADD EAX,0x4
0047c920  ADD EDX,0x4
0047c923  SUB ECX,0x4
0047c926  FLD float ptr [EAX + EBP*0x1 + -0x4]
0047c92a  FLD float ptr [ECX + EBP*0x1 + 0x4]
0047c92e  MOV EBP,dword ptr [ESP + 0x10]
0047c932  SUB ESI,0x4
0047c935  FST float ptr [ESP + 0x34]
0047c939  FMUL float ptr [EDX + -0x28]
0047c93c  DEC EBP
0047c93d  MOV dword ptr [ESP + 0x10],EBP
0047c941  FADD float ptr [EAX + -0x4]
0047c944  FSTP float ptr [EAX + -0x4]
0047c947  FLD ST0
0047c949  FMUL float ptr [ESI + -0x20]
0047c94c  FADD float ptr [ECX + 0x4]
0047c94f  FSTP float ptr [ECX + 0x4]
0047c952  FMUL float ptr [EDX + -0x4]
0047c955  FADD float ptr [EAX + 0x20]
0047c958  FSTP float ptr [EAX + 0x20]
0047c95b  FLD float ptr [ESP + 0x34]
0047c95f  FMUL float ptr [ESI + 0x4]
0047c962  FADD float ptr [ECX + 0x28]
0047c965  FSTP float ptr [ECX + 0x28]
0047c968  JNZ 0x0047c919
0047c96a  FLD float ptr [EDI + 0x10]
0047c96d  MOV EAX,dword ptr [ESP + 0x1c]
0047c971  MOV ECX,dword ptr [ESP + 0x24]
0047c975  FLD ST0
0047c977  FMUL float ptr [EAX*0x4 + 0x30116d8]
0047c97e  ADD EDI,0x48
0047c981  ADD EBX,0x48
0047c984  ADD ECX,0x4
0047c987  FADD float ptr [EBX + -0x38]
0047c98a  MOV dword ptr [ESP + 0x24],ECX
0047c98e  FSTP float ptr [EBX + -0x38]
0047c991  FMUL float ptr [EAX*0x4 + 0x30116fc]
0047c998  MOV EAX,dword ptr [ESP + 0x14]
0047c99c  DEC EAX
0047c99d  FADD float ptr [EBX + -0x14]
0047c9a0  MOV dword ptr [ESP + 0x14],EAX
0047c9a4  FSTP float ptr [EBX + -0x14]
0047c9a7  JNZ 0x0047c88c
0047c9ad  MOV ECX,dword ptr [ESP + 0x28]
0047c9b1  MOV EDX,dword ptr [ESP + 0x38]
0047c9b5  MOV EAX,0x38e38e39
0047c9ba  ADD EDX,0x11
0047c9bd  IMUL EDX
0047c9bf  SAR EDX,0x2
0047c9c2  MOV EAX,EDX
0047c9c4  SHR EAX,0x1f
0047c9c7  ADD EDX,EAX
0047c9c9  CMP ECX,EDX
0047c9cb  JGE 0x0047cb3b
0047c9d1  MOV EAX,0x30117a0
0047c9d6  MOV ESI,0x30117a0
0047c9db  SUB EAX,EBX
0047c9dd  SUB EDX,ECX
0047c9df  MOV dword ptr [ESP + 0x24],EAX
0047c9e3  MOV EAX,dword ptr [ESP + 0x2c]
0047c9e7  SUB ESI,EDI
0047c9e9  MOV dword ptr [ESP + 0x34],EDX
0047c9ed  LEA EAX,[EAX + ECX*0x4 + 0x480]
0047c9f4  ADD ECX,EDX
0047c9f6  MOV dword ptr [ESP + 0x30],EAX
0047c9fa  MOV dword ptr [ESP + 0x28],ECX
0047c9fe  PUSH EDI
0047c9ff  CALL 0x00480e60
0047ca04  MOV ECX,dword ptr [ESP + 0x34]
0047ca08  ADD ESP,0x4
0047ca0b  LEA EAX,[EDI + 0x24]
0047ca0e  LEA EDX,[EDI + 0x8]
0047ca11  MOV EBP,0x3
0047ca16  FLD float ptr [EAX + -0x18]
0047ca19  FMUL float ptr [ESI + EAX*0x1 + -0x24]
0047ca1d  ADD ECX,0x80
0047ca23  SUB EDX,0x4
0047ca26  ADD EAX,0x4
0047ca29  DEC EBP
0047ca2a  FADD float ptr [ECX + 0xfffffe00]
0047ca30  FSTP float ptr [ECX + 0xfffffe00]
0047ca36  FLD float ptr [EDX + 0x10]
0047ca39  FMUL float ptr [ESI + EAX*0x1 + -0x1c]
0047ca3d  FADD float ptr [ECX + -0x80]
0047ca40  FSTP float ptr [ECX + -0x80]
0047ca43  FLD float ptr [ESI + EAX*0x1 + -0x10]
0047ca47  FMUL float ptr [EDX + 0x4]
0047ca4a  FLD float ptr [ESI + EAX*0x1 + -0x28]
0047ca4e  FMUL float ptr [EAX + -0x4]
0047ca51  FADDP
0047ca53  FADD float ptr [ECX + 0x100]
0047ca59  FSTP float ptr [ECX + 0x100]
0047ca5f  FLD float ptr [ESI + EAX*0x1 + -0x4]
0047ca63  FMUL float ptr [EAX + -0x28]
0047ca66  FLD float ptr [EDX + 0x28]
0047ca69  FMUL float ptr [ESI + EAX*0x1 + -0x1c]
0047ca6d  FADDP
0047ca6f  FADD float ptr [ECX + 0x280]
0047ca75  FSTP float ptr [ECX + 0x280]
0047ca7b  JNZ 0x0047ca16
0047ca7d  MOV ECX,EBX
0047ca7f  LEA EAX,[EDI + 0x18]
0047ca82  LEA EDX,[EDI + 0x44]
0047ca85  MOV EBP,0x3
0047ca8a  FLD float ptr [EAX + ESI*0x1]
0047ca8d  FMUL float ptr [EDX + -0x24]
0047ca90  FLD float ptr [EAX + ESI*0x1 + -0x18]
0047ca94  FMUL float ptr [EAX + 0x24]
0047ca97  SUB EDX,0x4
0047ca9a  ADD ECX,0x4
0047ca9d  ADD EAX,0x4
0047caa0  DEC EBP
0047caa1  FADDP
0047caa3  FADD float ptr [ECX + -0x4]
0047caa6  FSTP float ptr [ECX + -0x4]
0047caa9  FLD float ptr [ESI + EAX*0x1 + 0x8]
0047caad  FMUL float ptr [EAX + -0x4]
0047cab0  FLD float ptr [EAX + ESI*0x1 + -0x10]
0047cab4  FMUL float ptr [EDX + 0x4]
0047cab7  FADDP
0047cab9  FADD float ptr [ECX + 0x8]
0047cabc  FSTP float ptr [ECX + 0x8]
0047cabf  JNZ 0x0047ca8a
0047cac1  MOV ECX,dword ptr [ESP + 0x24]
0047cac5  LEA EAX,[EBX + 0x24]
0047cac8  LEA EBP,[EDI + 0x30]
0047cacb  LEA EDX,[EDI + 0x38]
0047cace  MOV dword ptr [ESP + 0x2c],0x3
0047cad6  JMP 0x0047cadc
0047cad8  MOV EBP,dword ptr [ESP + 0x24]
0047cadc  FLD float ptr [ECX + EAX*0x1 + -0xc]
0047cae0  FMUL float ptr [EDX]
0047cae2  ADD EBP,0x4
0047cae5  SUB EDX,0x4
0047cae8  MOV dword ptr [ESP + 0x24],EBP
0047caec  FADD float ptr [EAX + -0xc]
0047caef  ADD EAX,0x4
0047caf2  FSTP float ptr [EAX + -0x10]
0047caf5  FLD float ptr [ECX + EAX*0x1 + -0x4]
0047caf9  FMUL float ptr [EBP + -0x4]
0047cafc  MOV EBP,dword ptr [ESP + 0x2c]
0047cb00  DEC EBP
0047cb01  FADD float ptr [EAX + -0x4]
0047cb04  MOV dword ptr [ESP + 0x2c],EBP
0047cb08  FSTP float ptr [EAX + -0x4]
0047cb0b  JNZ 0x0047cad8
0047cb0d  MOV EAX,dword ptr [ESP + 0x34]
0047cb11  SUB ECX,0x48
0047cb14  MOV dword ptr [ESP + 0x24],ECX
0047cb18  MOV ECX,dword ptr [ESP + 0x30]
0047cb1c  ADD EDI,0x48
0047cb1f  SUB ESI,0x48
0047cb22  ADD EBX,0x48
0047cb25  ADD ECX,0x4
0047cb28  DEC EAX
0047cb29  MOV dword ptr [ESP + 0x30],ECX
0047cb2d  MOV dword ptr [ESP + 0x34],EAX
0047cb31  JNZ 0x0047c9fe
0047cb37  MOV ECX,dword ptr [ESP + 0x28]
0047cb3b  POP EDI
0047cb3c  LEA EAX,[ECX + ECX*0x8]
0047cb3f  POP ESI
0047cb40  POP EBP
0047cb41  SHL EAX,0x1
0047cb43  POP EBX
0047cb44  ADD ESP,0x10
0047cb47  RET

; Function: FUN_00480e60
; Entry:    00480e60
; Size:     297 bytes

00480e60  MOV EDX,dword ptr [ESP + 0x4]
00480e64  SUB ESP,0x48
00480e67  MOV ECX,EDX
00480e69  LEA EAX,[ESP + 0x4]
00480e6d  PUSH ESI
00480e6e  MOV ESI,0x3
00480e73  FLD float ptr [0x03011440]
00480e79  FMUL float ptr [EDX]
00480e7b  FLD float ptr [0x03011454]
00480e81  FMUL float ptr [EDX + 0x3c]
00480e84  ADD EAX,0x18
00480e87  ADD EDX,0x4
00480e8a  DEC ESI
00480e8b  FLD ST0
00480e8d  FADD ST0,ST2
00480e8f  FSTP float ptr [EAX + -0x1c]
00480e92  FXCH
00480e94  FSUB ST0,ST1
00480e96  FMUL float ptr [0x03011460]
00480e9c  FSTP float ptr [EAX + -0x10]
00480e9f  FSTP ST0
00480ea1  FLD float ptr [0x03011444]
00480ea7  FMUL float ptr [EDX + 0x8]
00480eaa  FLD float ptr [0x03011450]
00480eb0  FMUL float ptr [EDX + 0x2c]
00480eb3  FLD ST0
00480eb5  FADD ST0,ST2
00480eb7  FSTP float ptr [EAX + -0x18]
00480eba  FXCH
00480ebc  FSUB ST0,ST1
00480ebe  FMUL float ptr [0x03011464]
00480ec4  FSTP float ptr [EAX + -0xc]
00480ec7  FSTP ST0
00480ec9  FLD float ptr [0x03011448]
00480ecf  FMUL float ptr [EDX + 0x14]
00480ed2  FLD float ptr [0x0301144c]
00480ed8  FMUL float ptr [EDX + 0x20]
00480edb  FLD ST0
00480edd  FADD ST0,ST2
00480edf  FSTP float ptr [EAX + -0x14]
00480ee2  FXCH
00480ee4  FSUB ST0,ST1
00480ee6  FMUL float ptr [0x03011468]
00480eec  FSTP float ptr [EAX + -0x8]
00480eef  FSTP ST0
00480ef1  JNZ 0x00480e73
00480ef3  LEA EAX,[ESP + 0x10]
00480ef7  MOV EDX,0x3
00480efc  POP ESI
00480efd  FLD float ptr [EAX + -0x4]
00480f00  FADD float ptr [EAX + -0xc]
00480f03  FLD float ptr [EAX + 0x8]
00480f06  FADD float ptr [EAX]
00480f08  FLD ST1
00480f0a  FADD float ptr [EAX + -0x8]
00480f0d  ADD EAX,0x18
00480f10  ADD ECX,0x18
00480f13  DEC EDX
00480f14  FST float ptr [ECX + -0x18]
00480f17  FLD ST1
00480f19  FADD float ptr [EAX + -0x14]
00480f1c  FST float ptr [ECX + -0x14]
00480f1f  FLD float ptr [EAX + -0x24]
00480f22  FSUB float ptr [EAX + -0x1c]
00480f25  FMUL float ptr [0x030115b0]
00480f2b  FSTP float ptr [ECX + -0x10]
00480f2e  FLD float ptr [EAX + -0x18]
00480f31  FSUB float ptr [EAX + -0x10]
00480f34  FMUL float ptr [0x030115b0]
00480f3a  FSUB ST0,ST1
00480f3c  FSTP float ptr [ECX + -0xc]
00480f3f  FSUBRP
00480f41  FST float ptr [ECX + -0x14]
00480f44  FSUBR float ptr [ECX + -0x10]
00480f47  FST float ptr [ESP + 0x4c]
00480f4b  FSTP float ptr [ECX + -0x10]
00480f4e  FSUB float ptr [EAX + -0x14]
00480f51  FSUB float ptr [EAX + -0x14]
00480f54  FSUB float ptr [ECX + -0xc]
00480f57  FSTP float ptr [ECX + -0x4]
00480f5a  FLD float ptr [ECX + -0xc]
00480f5d  FSUB float ptr [ESP + 0x4c]
00480f61  FST float ptr [ECX + -0xc]
00480f64  FXCH
00480f66  FSUB float ptr [EAX + -0x20]
00480f69  FSUB float ptr [EAX + -0x20]
00480f6c  FSUB ST0,ST1
00480f6e  FXCH
00480f70  FSTP ST0
00480f72  FST float ptr [ECX + -0x8]
00480f75  FLD float ptr [ECX + -0x4]
00480f78  FSUB ST0,ST1
00480f7a  FSTP float ptr [ECX + -0x4]
00480f7d  FSTP ST0
00480f7f  JNZ 0x00480efd
00480f85  ADD ESP,0x48
00480f88  RET

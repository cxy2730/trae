; Function: FUN_0047ea60
; Entry:    0047ea60
; Size:     162 bytes

0047ea60  PUSH EBP
0047ea61  MOV EBP,ESP
0047ea63  AND ESP,0xfffffff8
0047ea66  SUB ESP,0x8
0047ea69  CALL 0x0047cbe0
0047ea6e  FLD double ptr [0x02f9a830]
0047ea74  FLD1
0047ea76  XOR EDX,EDX
0047ea78  LEA ECX,[EAX + 0x40]
0047ea7b  FPATAN
0047ea7d  MOV dword ptr [ESP],EDX
0047ea81  FMUL double ptr [0x02f9a888]
0047ea87  FMUL double ptr [0x02f9a868]
0047ea8d  FLD double ptr [0x02f9a858]
0047ea93  FSQRT
0047ea95  FILD dword ptr [ESP]
0047ea99  INC EDX
0047ea9a  ADD ECX,0x8
0047ea9d  CMP EDX,0x7
0047eaa0  FMUL ST2
0047eaa2  FLD ST0
0047eaa4  FSIN
0047eaa6  FSTP double ptr [ESP]
0047eaaa  FCOS
0047eaac  FLD ST0
0047eaae  FADD double ptr [ESP]
0047eab2  FLD double ptr [ESP]
0047eab6  FDIV ST0,ST1
0047eab8  FST double ptr [ESP]
0047eabc  FSTP float ptr [ECX + -0x48]
0047eabf  FXCH
0047eac1  FDIV ST0,ST1
0047eac3  FXCH
0047eac5  FSTP ST0
0047eac7  FST float ptr [ECX + -0x44]
0047eaca  FLD ST1
0047eacc  FMUL double ptr [ESP]
0047ead0  FSTP float ptr [ECX + -0x8]
0047ead3  FLD ST1
0047ead5  FMUL ST1
0047ead7  FSTP float ptr [ECX + -0x4]
0047eada  MOV dword ptr [ESP],EDX
0047eade  FSTP ST0
0047eae0  JL 0x0047ea95
0047eae2  MOV ECX,0x3f800000
0047eae7  MOV dword ptr [EAX + EDX*0x8],ECX
0047eaea  MOV dword ptr [EAX + EDX*0x8 + 0x4],0x0
0047eaf2  FSTP ST0
0047eaf4  MOV dword ptr [EAX + EDX*0x8 + 0x40],ECX
0047eaf8  MOV dword ptr [EAX + EDX*0x8 + 0x44],ECX
0047eafc  FSTP ST0
0047eafe  MOV ESP,EBP
0047eb00  POP EBP
0047eb01  RET

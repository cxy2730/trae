; Function: FUN_0041bc00
; Entry:    0041bc00
; Size:     262 bytes

0041bc00  PUSH EBP
0041bc01  MOV EBP,ESP
0041bc03  SUB ESP,0x10
0041bc06  PUSH EBX
0041bc07  PUSH ESI
0041bc08  MOV AX,word ptr [EBP + 0xa]
0041bc0c  SHL AX,0x1
0041bc0f  SUB AH,0x7f
0041bc12  MOVSX EBX,AH
0041bc15  MOV dword ptr [EBP + -0x4],EBX
0041bc18  FILD dword ptr [EBP + -0x4]
0041bc1b  FMUL double ptr [0x02fe8690]
0041bc21  CALL 0x00482498
0041bc26  FLD double ptr [0x02f959e8]
0041bc2c  MOV ESI,EAX
0041bc2e  CDQ
0041bc2f  XOR EAX,EDX
0041bc31  SUB EAX,EDX
0041bc33  MOV dword ptr [EBP + -0x4],EAX
0041bc36  FILD dword ptr [EBP + -0x4]
0041bc39  CALL 0x00482010
0041bc3e  FSTP double ptr [EBP + -0x8]
0041bc41  FLD float ptr [EBP + 0x8]
0041bc44  TEST ESI,ESI
0041bc46  FABS
0041bc48  JLE 0x0041bc4f
0041bc4a  FDIV double ptr [EBP + -0x8]
0041bc4d  JMP 0x0041bc52
0041bc4f  FMUL double ptr [EBP + -0x8]
0041bc52  FCOM double ptr [0x02f959e8]
0041bc58  FNSTSW AX
0041bc5a  TEST AH,0x1
0041bc5d  JNZ 0x0041bc74
0041bc5f  FLD double ptr [EBP + -0x8]
0041bc62  FMUL double ptr [0x02f959e8]
0041bc68  INC ESI
0041bc69  FSTP double ptr [EBP + -0x8]
0041bc6c  FMUL double ptr [0x02f959e0]
0041bc72  JMP 0x0041bc9c
0041bc74  FCOM double ptr [0x02f959d8]
0041bc7a  FNSTSW AX
0041bc7c  TEST AH,0x1
0041bc7f  JZ 0x0041bc96
0041bc81  FLD double ptr [EBP + -0x8]
0041bc84  FMUL double ptr [0x02f959e8]
0041bc8a  DEC ESI
0041bc8b  FSTP double ptr [EBP + -0x8]
0041bc8e  FMUL double ptr [0x02f959d0]
0041bc94  JMP 0x0041bc9c
0041bc96  FMUL double ptr [0x02f959c8]
0041bc9c  FSTP double ptr [EBP + -0x10]
0041bc9f  MOV ECX,dword ptr [EBP + -0xc]
0041bca2  MOV EDX,dword ptr [EBP + -0x10]
0041bca5  LEA EAX,[EBP + -0x10]
0041bca8  PUSH EAX
0041bca9  PUSH ECX
0041bcaa  PUSH EDX
0041bcab  CALL 0x0048222d
0041bcb0  FCOMP double ptr [0x02f959c0]
0041bcb6  FLD double ptr [EBP + -0x10]
0041bcb9  ADD ESP,0xc
0041bcbc  FNSTSW AX
0041bcbe  TEST AH,0x1
0041bcc1  JNZ 0x0041bcc9
0041bcc3  FADD double ptr [0x02f959d8]
0041bcc9  FLD float ptr [EBP + 0x8]
0041bccc  FCOMP float ptr [0x02f959b8]
0041bcd2  TEST ESI,ESI
0041bcd4  POP ESI
0041bcd5  POP EBX
0041bcd6  FNSTSW AX
0041bcd8  JLE 0x0041bcf0
0041bcda  FLD double ptr [EBP + -0x8]
0041bcdd  TEST AH,0x1
0041bce0  JZ 0x0041bce4
0041bce2  FCHS
0041bce4  FMUL double ptr [0x02f959b0]
0041bcea  FMULP
0041bcec  MOV ESP,EBP
0041bcee  POP EBP
0041bcef  RET
0041bcf0  FLD double ptr [EBP + -0x8]
0041bcf3  TEST AH,0x1
0041bcf6  JZ 0x0041bcfa
0041bcf8  FCHS
0041bcfa  FMUL double ptr [0x02f959c8]
0041bd00  FDIVP
0041bd02  MOV ESP,EBP
0041bd04  POP EBP
0041bd05  RET

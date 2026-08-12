; Function: FUN_0049aaed
; Entry:    0049aaed
; Size:     70 bytes

0049aaed  PUSH EBP
0049aaee  MOV EBP,ESP
0049aaf0  CMP dword ptr [EBP + 0xc],0x0
0049aaf4  PUSH ESI
0049aaf5  PUSH EDI
0049aaf6  MOV EDI,ECX
0049aaf8  MOV ESI,dword ptr [EDI + 0x14]
0049aafb  JNZ 0x0049ab02
0049aafd  MOV ESI,dword ptr [EBP + 0x8]
0049ab00  JMP 0x0049ab14
0049ab02  CMP dword ptr [EBP + 0xc],0x1
0049ab06  JZ 0x0049ab11
0049ab08  CMP dword ptr [EBP + 0xc],0x2
0049ab0c  JNZ 0x0049ab2a
0049ab0e  MOV ESI,dword ptr [EDI + 0x1c]
0049ab11  ADD ESI,dword ptr [EBP + 0x8]
0049ab14  TEST ESI,ESI
0049ab16  JGE 0x0049ab23
0049ab18  PUSH 0x0
0049ab1a  PUSH -0x1
0049ab1c  PUSH 0x9
0049ab1e  CALL 0x00498672
0049ab23  MOV dword ptr [EDI + 0x14],ESI
0049ab26  MOV EAX,ESI
0049ab28  JMP 0x0049ab2d
0049ab2a  OR EAX,0xffffffff
0049ab2d  POP EDI
0049ab2e  POP ESI
0049ab2f  POP EBP
0049ab30  RET 0x8

; Function: FUN_0044fc50
; Entry:    0044fc50
; Size:     72 bytes

0044fc50  PUSH ESI
0044fc51  MOV ESI,dword ptr [ESP + 0x8]
0044fc55  CMP byte ptr [ESI + 0x9],0x8
0044fc59  JNZ 0x0044fc96
0044fc5b  CMP byte ptr [ESI + 0x8],0x3
0044fc5f  JZ 0x0044fc96
0044fc61  MOV EAX,dword ptr [ESI + 0x4]
0044fc64  MOV ECX,dword ptr [ESP + 0xc]
0044fc68  ADD ECX,EAX
0044fc6a  ADD EAX,ECX
0044fc6c  CMP EAX,ECX
0044fc6e  JBE 0x0044fc81
0044fc70  MOV DL,byte ptr [ECX + -0x1]
0044fc73  DEC ECX
0044fc74  MOV byte ptr [EAX + -0x1],DL
0044fc77  MOV byte ptr [EAX + -0x2],DL
0044fc7a  ADD EAX,-0x2
0044fc7d  CMP EAX,ECX
0044fc7f  JA 0x0044fc70
0044fc81  MOV EDX,dword ptr [ESI + 0x4]
0044fc84  MOV AL,byte ptr [ESI + 0xa]
0044fc87  SHL EDX,0x1
0044fc89  SHL AL,0x4
0044fc8c  MOV dword ptr [ESI + 0x4],EDX
0044fc8f  MOV byte ptr [ESI + 0x9],0x10
0044fc93  MOV byte ptr [ESI + 0xb],AL
0044fc96  POP ESI
0044fc97  RET

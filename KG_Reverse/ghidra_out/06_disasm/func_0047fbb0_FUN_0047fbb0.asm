; Function: FUN_0047fbb0
; Entry:    0047fbb0
; Size:     427 bytes

0047fbb0  PUSH ECX
0047fbb1  MOV AL,byte ptr [ESP + 0xc]
0047fbb5  PUSH EBX
0047fbb6  ADD AL,0x8
0047fbb8  PUSH EBP
0047fbb9  MOV BL,AL
0047fbbb  PUSH ESI
0047fbbc  ADD BL,0x10
0047fbbf  PUSH EDI
0047fbc0  MOV EDI,dword ptr [ESP + 0x18]
0047fbc4  MOV byte ptr [ESP + 0x1c],AL
0047fbc8  MOV byte ptr [ESP + 0x10],BL
0047fbcc  MOV ESI,0x2fd7c48
0047fbd1  MOV EBP,0x8
0047fbd6  JMP 0x0047fbdc
0047fbd8  MOV AL,byte ptr [ESP + 0x1c]
0047fbdc  FLD float ptr [0x02f9a8b4]
0047fbe2  MOV ECX,0x8
0047fbe7  MOV EDX,dword ptr [ESP + 0x1c]
0047fbeb  ADD ESI,0x4
0047fbee  AND EDX,0xff
0047fbf4  ADD AL,0x20
0047fbf6  ADD ESI,0x4
0047fbf9  ADD BL,0x20
0047fbfc  FLD float ptr [EDI + EDX*0x4]
0047fbff  FMUL float ptr [ESI + -0x8]
0047fc02  MOV EDX,dword ptr [ESP + 0x10]
0047fc06  MOV byte ptr [ESP + 0x1c],AL
0047fc0a  AND EDX,0xff
0047fc10  DEC ECX
0047fc11  FADDP
0047fc13  FLD float ptr [EDI + EDX*0x4]
0047fc16  FMUL float ptr [ESI + -0x4]
0047fc19  MOV byte ptr [ESP + 0x10],BL
0047fc1d  FSUBP
0047fc1f  JNZ 0x0047fbe7
0047fc21  INC AL
0047fc23  DEC BL
0047fc25  MOV byte ptr [ESP + 0x1c],AL
0047fc29  MOV byte ptr [ESP + 0x10],BL
0047fc2d  ADD ESI,0x40
0047fc30  CALL 0x00482498
0047fc35  CMP EAX,0x7fff
0047fc3a  JLE 0x0047fc43
0047fc3c  MOV EAX,0x7fff
0047fc41  JMP 0x0047fc4f
0047fc43  CMP EAX,0xffff8000
0047fc48  JGE 0x0047fc4f
0047fc4a  MOV EAX,0xffff8000
0047fc4f  MOV ECX,dword ptr [ESP + 0x20]
0047fc53  MOV word ptr [ECX],AX
0047fc56  ADD ECX,0x4
0047fc59  DEC EBP
0047fc5a  MOV dword ptr [ESP + 0x20],ECX
0047fc5e  JNZ 0x0047fbd8
0047fc64  FLD float ptr [0x02f9a8b4]
0047fc6a  MOV EAX,0x8
0047fc6f  MOV ECX,dword ptr [ESP + 0x10]
0047fc73  ADD ESI,0x4
0047fc76  AND ECX,0xff
0047fc7c  ADD BL,0x20
0047fc7f  DEC EAX
0047fc80  MOV byte ptr [ESP + 0x10],BL
0047fc84  FLD float ptr [EDI + ECX*0x4]
0047fc87  FMUL float ptr [ESI + -0x4]
0047fc8a  FADDP
0047fc8c  JNZ 0x0047fc6f
0047fc8e  CALL 0x00482498
0047fc93  CMP EAX,0x7fff
0047fc98  JLE 0x0047fca1
0047fc9a  MOV EAX,0x7fff
0047fc9f  JMP 0x0047fcad
0047fca1  CMP EAX,0xffff8000
0047fca6  JGE 0x0047fcad
0047fca8  MOV EAX,0xffff8000
0047fcad  MOV ECX,dword ptr [ESP + 0x20]
0047fcb1  MOV ESI,0x2fd8044
0047fcb6  MOV EBP,0x7
0047fcbb  MOV word ptr [ECX],AX
0047fcbe  ADD ECX,0x4
0047fcc1  MOV dword ptr [ESP + 0x20],ECX
0047fcc5  MOV CL,byte ptr [ESP + 0x1c]
0047fcc9  SUB ESI,0x40
0047fccc  FLD float ptr [0x02f9a8b4]
0047fcd2  DEC CL
0047fcd4  INC BL
0047fcd6  MOV byte ptr [ESP + 0x1c],CL
0047fcda  MOV byte ptr [ESP + 0x10],BL
0047fcde  MOV EAX,0x8
0047fce3  MOV EDX,dword ptr [ESP + 0x1c]
0047fce7  MOV CL,byte ptr [ESP + 0x1c]
0047fceb  AND EDX,0xff
0047fcf1  ADD CL,0x20
0047fcf4  MOV byte ptr [ESP + 0x1c],CL
0047fcf8  MOV ECX,dword ptr [ESP + 0x10]
0047fcfc  FLD float ptr [EDI + EDX*0x4]
0047fcff  FMUL float ptr [ESI]
0047fd01  AND ECX,0xff
0047fd07  SUB ESI,0x4
0047fd0a  SUB ESI,0x4
0047fd0d  ADD BL,0x20
0047fd10  FADDP
0047fd12  FLD float ptr [EDI + ECX*0x4]
0047fd15  FMUL float ptr [ESI + 0x4]
0047fd18  DEC EAX
0047fd19  MOV byte ptr [ESP + 0x10],BL
0047fd1d  FADDP
0047fd1f  JNZ 0x0047fce3
0047fd21  CALL 0x00482498
0047fd26  CMP EAX,0x7fff
0047fd2b  JLE 0x0047fd34
0047fd2d  MOV EAX,0x7fff
0047fd32  JMP 0x0047fd40
0047fd34  CMP EAX,0xffff8000
0047fd39  JGE 0x0047fd40
0047fd3b  MOV EAX,0xffff8000
0047fd40  MOV ECX,dword ptr [ESP + 0x20]
0047fd44  MOV word ptr [ECX],AX
0047fd47  ADD ECX,0x4
0047fd4a  DEC EBP
0047fd4b  MOV dword ptr [ESP + 0x20],ECX
0047fd4f  JNZ 0x0047fcc5
0047fd55  POP EDI
0047fd56  POP ESI
0047fd57  POP EBP
0047fd58  POP EBX
0047fd59  POP ECX
0047fd5a  RET

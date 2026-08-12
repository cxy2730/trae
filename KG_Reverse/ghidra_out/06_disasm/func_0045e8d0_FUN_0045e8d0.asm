; Function: FUN_0045e8d0
; Entry:    0045e8d0
; Size:     1397 bytes

0045e8d0  SUB ESP,0x8
0045e8d3  MOV EAX,dword ptr [ESP + 0x10]
0045e8d7  PUSH EBX
0045e8d8  XOR EBX,EBX
0045e8da  XOR EDX,EDX
0045e8dc  MOV BX,word ptr [EAX + 0x2]
0045e8e0  PUSH ESI
0045e8e1  TEST EBX,EBX
0045e8e3  PUSH EDI
0045e8e4  MOV dword ptr [ESP + 0xc],0xffffffff
0045e8ec  MOV ECX,0x7
0045e8f1  MOV ESI,0x4
0045e8f6  JNZ 0x0045e902
0045e8f8  MOV ECX,0x8a
0045e8fd  MOV ESI,0x3
0045e902  MOV EDI,dword ptr [ESP + 0x20]
0045e906  TEST EDI,EDI
0045e908  JL 0x0045ee3e
0045e90e  ADD EAX,0x6
0045e911  INC EDI
0045e912  MOV dword ptr [ESP + 0x20],EAX
0045e916  MOV EAX,dword ptr [ESP + 0x18]
0045e91a  PUSH EBP
0045e91b  MOV dword ptr [ESP + 0x14],EDI
0045e91f  MOV EDI,dword ptr [ESP + 0x24]
0045e923  MOV EBP,EBX
0045e925  XOR EBX,EBX
0045e927  INC EDX
0045e928  MOV BX,word ptr [EDI]
0045e92b  CMP EDX,ECX
0045e92d  MOV dword ptr [ESP + 0x1c],EBX
0045e931  MOV dword ptr [ESP + 0x20],EDX
0045e935  JGE 0x0045e93f
0045e937  CMP EBP,EBX
0045e939  JZ 0x0045ee23
0045e93f  CMP EDX,ESI
0045e941  JGE 0x0045e9f3
0045e947  MOV ECX,dword ptr [EAX + 0x16b4]
0045e94d  XOR ESI,ESI
0045e94f  MOV SI,word ptr [EAX + EBP*0x4 + 0xa76]
0045e957  MOV EDI,0x10
0045e95c  SUB EDI,ESI
0045e95e  CMP ECX,EDI
0045e960  JLE 0x0045e9c9
0045e962  XOR EDX,EDX
0045e964  MOV DX,word ptr [EAX + EBP*0x4 + 0xa74]
0045e96c  MOV EDI,EDX
0045e96e  SHL EDI,CL
0045e970  MOV ECX,dword ptr [EAX + 0x8]
0045e973  OR word ptr [EAX + 0x16b0],DI
0045e97a  MOV EDI,dword ptr [EAX + 0x14]
0045e97d  MOV BL,byte ptr [EAX + 0x16b0]
0045e983  MOV byte ptr [ECX + EDI*0x1],BL
0045e986  MOV EDI,dword ptr [EAX + 0x14]
0045e989  MOV EBX,dword ptr [EAX + 0x8]
0045e98c  XOR ECX,ECX
0045e98e  MOV CL,byte ptr [EAX + 0x16b1]
0045e994  INC EDI
0045e995  MOV dword ptr [EAX + 0x14],EDI
0045e998  MOV byte ptr [EDI + EBX*0x1],CL
0045e99b  MOV ECX,dword ptr [EAX + 0x14]
0045e99e  MOV EDI,dword ptr [EAX + 0x16b4]
0045e9a4  INC ECX
0045e9a5  MOV dword ptr [EAX + 0x14],ECX
0045e9a8  MOV CX,0x10
0045e9ac  SUB CX,DI
0045e9af  SHR DX,CL
0045e9b2  MOV word ptr [EAX + 0x16b0],DX
0045e9b9  LEA EDX,[EDI + ESI*0x1 + -0x10]
0045e9bd  MOV dword ptr [EAX + 0x16b4],EDX
0045e9c3  MOV EDX,dword ptr [ESP + 0x20]
0045e9c7  JMP 0x0045e9e3
0045e9c9  MOV DI,word ptr [EAX + EBP*0x4 + 0xa74]
0045e9d1  SHL DI,CL
0045e9d4  OR word ptr [EAX + 0x16b0],DI
0045e9db  ADD ECX,ESI
0045e9dd  MOV dword ptr [EAX + 0x16b4],ECX
0045e9e3  DEC EDX
0045e9e4  MOV dword ptr [ESP + 0x20],EDX
0045e9e8  JNZ 0x0045e947
0045e9ee  JMP 0x0045edef
0045e9f3  TEST EBP,EBP
0045e9f5  JZ 0x0045ebbc
0045e9fb  CMP EBP,dword ptr [ESP + 0x10]
0045e9ff  JZ 0x0045eaa6
0045ea05  MOV ECX,dword ptr [EAX + 0x16b4]
0045ea0b  XOR ESI,ESI
0045ea0d  MOV SI,word ptr [EAX + EBP*0x4 + 0xa76]
0045ea15  MOV EDI,0x10
0045ea1a  SUB EDI,ESI
0045ea1c  CMP ECX,EDI
0045ea1e  JLE 0x0045ea87
0045ea20  XOR EDX,EDX
0045ea22  MOV DX,word ptr [EAX + EBP*0x4 + 0xa74]
0045ea2a  MOV EDI,EDX
0045ea2c  SHL EDI,CL
0045ea2e  MOV ECX,dword ptr [EAX + 0x8]
0045ea31  OR word ptr [EAX + 0x16b0],DI
0045ea38  MOV EDI,dword ptr [EAX + 0x14]
0045ea3b  MOV BL,byte ptr [EAX + 0x16b0]
0045ea41  MOV byte ptr [ECX + EDI*0x1],BL
0045ea44  MOV EDI,dword ptr [EAX + 0x14]
0045ea47  MOV EBX,dword ptr [EAX + 0x8]
0045ea4a  XOR ECX,ECX
0045ea4c  MOV CL,byte ptr [EAX + 0x16b1]
0045ea52  INC EDI
0045ea53  MOV dword ptr [EAX + 0x14],EDI
0045ea56  MOV byte ptr [EDI + EBX*0x1],CL
0045ea59  MOV ECX,dword ptr [EAX + 0x14]
0045ea5c  MOV EDI,dword ptr [EAX + 0x16b4]
0045ea62  INC ECX
0045ea63  MOV dword ptr [EAX + 0x14],ECX
0045ea66  MOV CX,0x10
0045ea6a  SUB CX,DI
0045ea6d  SHR DX,CL
0045ea70  MOV word ptr [EAX + 0x16b0],DX
0045ea77  LEA EDX,[EDI + ESI*0x1 + -0x10]
0045ea7b  MOV dword ptr [EAX + 0x16b4],EDX
0045ea81  MOV EDX,dword ptr [ESP + 0x20]
0045ea85  JMP 0x0045eaa1
0045ea87  MOV DI,word ptr [EAX + EBP*0x4 + 0xa74]
0045ea8f  SHL DI,CL
0045ea92  OR word ptr [EAX + 0x16b0],DI
0045ea99  ADD ECX,ESI
0045ea9b  MOV dword ptr [EAX + 0x16b4],ECX
0045eaa1  DEC EDX
0045eaa2  MOV dword ptr [ESP + 0x20],EDX
0045eaa6  MOV ECX,dword ptr [EAX + 0x16b4]
0045eaac  XOR ESI,ESI
0045eaae  MOV SI,word ptr [EAX + 0xab6]
0045eab5  MOV EDI,0x10
0045eaba  SUB EDI,ESI
0045eabc  CMP ECX,EDI
0045eabe  JLE 0x0045eb26
0045eac0  XOR EDX,EDX
0045eac2  MOV DX,word ptr [EAX + 0xab4]
0045eac9  MOV EDI,EDX
0045eacb  SHL EDI,CL
0045eacd  MOV ECX,dword ptr [EAX + 0x8]
0045ead0  OR word ptr [EAX + 0x16b0],DI
0045ead7  MOV EDI,dword ptr [EAX + 0x14]
0045eada  MOV BL,byte ptr [EAX + 0x16b0]
0045eae0  MOV byte ptr [ECX + EDI*0x1],BL
0045eae3  MOV EDI,dword ptr [EAX + 0x14]
0045eae6  MOV EBX,dword ptr [EAX + 0x8]
0045eae9  XOR ECX,ECX
0045eaeb  MOV CL,byte ptr [EAX + 0x16b1]
0045eaf1  INC EDI
0045eaf2  MOV dword ptr [EAX + 0x14],EDI
0045eaf5  MOV byte ptr [EDI + EBX*0x1],CL
0045eaf8  MOV ECX,dword ptr [EAX + 0x14]
0045eafb  MOV EDI,dword ptr [EAX + 0x16b4]
0045eb01  INC ECX
0045eb02  MOV dword ptr [EAX + 0x14],ECX
0045eb05  MOV CX,0x10
0045eb09  SUB CX,DI
0045eb0c  SHR DX,CL
0045eb0f  MOV word ptr [EAX + 0x16b0],DX
0045eb16  LEA EDX,[EDI + ESI*0x1 + -0x10]
0045eb1a  MOV dword ptr [EAX + 0x16b4],EDX
0045eb20  MOV EDX,dword ptr [ESP + 0x20]
0045eb24  JMP 0x0045eb3f
0045eb26  MOV DI,word ptr [EAX + 0xab4]
0045eb2d  SHL DI,CL
0045eb30  OR word ptr [EAX + 0x16b0],DI
0045eb37  ADD ECX,ESI
0045eb39  MOV dword ptr [EAX + 0x16b4],ECX
0045eb3f  MOV ECX,dword ptr [EAX + 0x16b4]
0045eb45  CMP ECX,0xe
0045eb48  JLE 0x0045eba8
0045eb4a  ADD EDX,-0x3
0045eb4d  MOV ESI,EDX
0045eb4f  SHL ESI,CL
0045eb51  MOV ECX,dword ptr [EAX + 0x8]
0045eb54  OR word ptr [EAX + 0x16b0],SI
0045eb5b  MOV ESI,dword ptr [EAX + 0x14]
0045eb5e  MOV BL,byte ptr [EAX + 0x16b0]
0045eb64  MOV byte ptr [ECX + ESI*0x1],BL
0045eb67  MOV ESI,dword ptr [EAX + 0x14]
0045eb6a  MOV EDI,dword ptr [EAX + 0x8]
0045eb6d  XOR ECX,ECX
0045eb6f  MOV CL,byte ptr [EAX + 0x16b1]
0045eb75  INC ESI
0045eb76  MOV dword ptr [EAX + 0x14],ESI
0045eb79  MOV byte ptr [ESI + EDI*0x1],CL
0045eb7c  MOV ECX,dword ptr [EAX + 0x14]
0045eb7f  MOV ESI,dword ptr [EAX + 0x16b4]
0045eb85  INC ECX
0045eb86  MOV dword ptr [EAX + 0x14],ECX
0045eb89  MOV CX,0x10
0045eb8d  SUB CX,SI
0045eb90  SHR DX,CL
0045eb93  ADD ESI,-0xe
0045eb96  MOV dword ptr [EAX + 0x16b4],ESI
0045eb9c  MOV word ptr [EAX + 0x16b0],DX
0045eba3  JMP 0x0045edef
0045eba8  ADD EDX,-0x3
0045ebab  SHL EDX,CL
0045ebad  OR word ptr [EAX + 0x16b0],DX
0045ebb4  ADD ECX,0x2
0045ebb7  JMP 0x0045ede9
0045ebbc  CMP EDX,0xa
0045ebbf  JG 0x0045ecdb
0045ebc5  MOV ECX,dword ptr [EAX + 0x16b4]
0045ebcb  XOR ESI,ESI
0045ebcd  MOV SI,word ptr [EAX + 0xaba]
0045ebd4  MOV EDI,0x10
0045ebd9  SUB EDI,ESI
0045ebdb  CMP ECX,EDI
0045ebdd  JLE 0x0045ec45
0045ebdf  XOR EDX,EDX
0045ebe1  MOV DX,word ptr [EAX + 0xab8]
0045ebe8  MOV EDI,EDX
0045ebea  SHL EDI,CL
0045ebec  MOV ECX,dword ptr [EAX + 0x8]
0045ebef  OR word ptr [EAX + 0x16b0],DI
0045ebf6  MOV EDI,dword ptr [EAX + 0x14]
0045ebf9  MOV BL,byte ptr [EAX + 0x16b0]
0045ebff  MOV byte ptr [ECX + EDI*0x1],BL
0045ec02  MOV EDI,dword ptr [EAX + 0x14]
0045ec05  MOV EBX,dword ptr [EAX + 0x8]
0045ec08  XOR ECX,ECX
0045ec0a  MOV CL,byte ptr [EAX + 0x16b1]
0045ec10  INC EDI
0045ec11  MOV dword ptr [EAX + 0x14],EDI
0045ec14  MOV byte ptr [EDI + EBX*0x1],CL
0045ec17  MOV ECX,dword ptr [EAX + 0x14]
0045ec1a  MOV EDI,dword ptr [EAX + 0x16b4]
0045ec20  INC ECX
0045ec21  MOV dword ptr [EAX + 0x14],ECX
0045ec24  MOV CX,0x10
0045ec28  SUB CX,DI
0045ec2b  SHR DX,CL
0045ec2e  MOV word ptr [EAX + 0x16b0],DX
0045ec35  LEA EDX,[EDI + ESI*0x1 + -0x10]
0045ec39  MOV dword ptr [EAX + 0x16b4],EDX
0045ec3f  MOV EDX,dword ptr [ESP + 0x20]
0045ec43  JMP 0x0045ec5e
0045ec45  MOV DI,word ptr [EAX + 0xab8]
0045ec4c  SHL DI,CL
0045ec4f  OR word ptr [EAX + 0x16b0],DI
0045ec56  ADD ECX,ESI
0045ec58  MOV dword ptr [EAX + 0x16b4],ECX
0045ec5e  MOV ECX,dword ptr [EAX + 0x16b4]
0045ec64  CMP ECX,0xd
0045ec67  JLE 0x0045ecc7
0045ec69  ADD EDX,-0x3
0045ec6c  MOV ESI,EDX
0045ec6e  SHL ESI,CL
0045ec70  MOV ECX,dword ptr [EAX + 0x8]
0045ec73  OR word ptr [EAX + 0x16b0],SI
0045ec7a  MOV ESI,dword ptr [EAX + 0x14]
0045ec7d  MOV BL,byte ptr [EAX + 0x16b0]
0045ec83  MOV byte ptr [ECX + ESI*0x1],BL
0045ec86  MOV ESI,dword ptr [EAX + 0x14]
0045ec89  MOV EDI,dword ptr [EAX + 0x8]
0045ec8c  XOR ECX,ECX
0045ec8e  MOV CL,byte ptr [EAX + 0x16b1]
0045ec94  INC ESI
0045ec95  MOV dword ptr [EAX + 0x14],ESI
0045ec98  MOV byte ptr [ESI + EDI*0x1],CL
0045ec9b  MOV ECX,dword ptr [EAX + 0x14]
0045ec9e  MOV ESI,dword ptr [EAX + 0x16b4]
0045eca4  INC ECX
0045eca5  MOV dword ptr [EAX + 0x14],ECX
0045eca8  MOV CX,0x10
0045ecac  SUB CX,SI
0045ecaf  SHR DX,CL
0045ecb2  ADD ESI,-0xd
0045ecb5  MOV dword ptr [EAX + 0x16b4],ESI
0045ecbb  MOV word ptr [EAX + 0x16b0],DX
0045ecc2  JMP 0x0045edef
0045ecc7  ADD EDX,-0x3
0045ecca  SHL EDX,CL
0045eccc  OR word ptr [EAX + 0x16b0],DX
0045ecd3  ADD ECX,0x3
0045ecd6  JMP 0x0045ede9
0045ecdb  MOV ECX,dword ptr [EAX + 0x16b4]
0045ece1  XOR ESI,ESI
0045ece3  MOV SI,word ptr [EAX + 0xabe]
0045ecea  MOV EDI,0x10
0045ecef  SUB EDI,ESI
0045ecf1  CMP ECX,EDI
0045ecf3  JLE 0x0045ed5b
0045ecf5  XOR EDX,EDX
0045ecf7  MOV DX,word ptr [EAX + 0xabc]
0045ecfe  MOV EDI,EDX
0045ed00  SHL EDI,CL
0045ed02  MOV ECX,dword ptr [EAX + 0x8]
0045ed05  OR word ptr [EAX + 0x16b0],DI
0045ed0c  MOV EDI,dword ptr [EAX + 0x14]
0045ed0f  MOV BL,byte ptr [EAX + 0x16b0]
0045ed15  MOV byte ptr [ECX + EDI*0x1],BL
0045ed18  MOV EDI,dword ptr [EAX + 0x14]
0045ed1b  MOV EBX,dword ptr [EAX + 0x8]
0045ed1e  XOR ECX,ECX
0045ed20  MOV CL,byte ptr [EAX + 0x16b1]
0045ed26  INC EDI
0045ed27  MOV dword ptr [EAX + 0x14],EDI
0045ed2a  MOV byte ptr [EDI + EBX*0x1],CL
0045ed2d  MOV ECX,dword ptr [EAX + 0x14]
0045ed30  MOV EDI,dword ptr [EAX + 0x16b4]
0045ed36  INC ECX
0045ed37  MOV dword ptr [EAX + 0x14],ECX
0045ed3a  MOV CX,0x10
0045ed3e  SUB CX,DI
0045ed41  SHR DX,CL
0045ed44  MOV word ptr [EAX + 0x16b0],DX
0045ed4b  LEA EDX,[EDI + ESI*0x1 + -0x10]
0045ed4f  MOV dword ptr [EAX + 0x16b4],EDX
0045ed55  MOV EDX,dword ptr [ESP + 0x20]
0045ed59  JMP 0x0045ed74
0045ed5b  MOV DI,word ptr [EAX + 0xabc]
0045ed62  SHL DI,CL
0045ed65  OR word ptr [EAX + 0x16b0],DI
0045ed6c  ADD ECX,ESI
0045ed6e  MOV dword ptr [EAX + 0x16b4],ECX
0045ed74  MOV ECX,dword ptr [EAX + 0x16b4]
0045ed7a  CMP ECX,0x9
0045ed7d  JLE 0x0045edda
0045ed7f  ADD EDX,-0xb
0045ed82  MOV ESI,EDX
0045ed84  SHL ESI,CL
0045ed86  MOV ECX,dword ptr [EAX + 0x8]
0045ed89  OR word ptr [EAX + 0x16b0],SI
0045ed90  MOV ESI,dword ptr [EAX + 0x14]
0045ed93  MOV BL,byte ptr [EAX + 0x16b0]
0045ed99  MOV byte ptr [ECX + ESI*0x1],BL
0045ed9c  MOV ESI,dword ptr [EAX + 0x14]
0045ed9f  MOV EDI,dword ptr [EAX + 0x8]
0045eda2  XOR ECX,ECX
0045eda4  MOV CL,byte ptr [EAX + 0x16b1]
0045edaa  INC ESI
0045edab  MOV dword ptr [EAX + 0x14],ESI
0045edae  MOV byte ptr [ESI + EDI*0x1],CL
0045edb1  MOV ECX,dword ptr [EAX + 0x14]
0045edb4  MOV ESI,dword ptr [EAX + 0x16b4]
0045edba  INC ECX
0045edbb  MOV dword ptr [EAX + 0x14],ECX
0045edbe  MOV CX,0x10
0045edc2  SUB CX,SI
0045edc5  SHR DX,CL
0045edc8  ADD ESI,-0x9
0045edcb  MOV dword ptr [EAX + 0x16b4],ESI
0045edd1  MOV word ptr [EAX + 0x16b0],DX
0045edd8  JMP 0x0045edef
0045edda  ADD EDX,-0xb
0045eddd  SHL EDX,CL
0045eddf  OR word ptr [EAX + 0x16b0],DX
0045ede6  ADD ECX,0x7
0045ede9  MOV dword ptr [EAX + 0x16b4],ECX
0045edef  MOV EBX,dword ptr [ESP + 0x1c]
0045edf3  XOR EDX,EDX
0045edf5  TEST EBX,EBX
0045edf7  MOV dword ptr [ESP + 0x10],EBP
0045edfb  JNZ 0x0045ee09
0045edfd  MOV ECX,0x8a
0045ee02  MOV ESI,0x3
0045ee07  JMP 0x0045ee23
0045ee09  CMP EBP,EBX
0045ee0b  JNZ 0x0045ee19
0045ee0d  MOV ECX,0x6
0045ee12  MOV ESI,0x3
0045ee17  JMP 0x0045ee23
0045ee19  MOV ECX,0x7
0045ee1e  MOV ESI,0x4
0045ee23  MOV EBP,dword ptr [ESP + 0x24]
0045ee27  MOV EDI,dword ptr [ESP + 0x14]
0045ee2b  ADD EBP,0x4
0045ee2e  DEC EDI
0045ee2f  MOV dword ptr [ESP + 0x24],EBP
0045ee33  MOV dword ptr [ESP + 0x14],EDI
0045ee37  JNZ 0x0045e91f
0045ee3d  POP EBP
0045ee3e  POP EDI
0045ee3f  POP ESI
0045ee40  POP EBX
0045ee41  ADD ESP,0x8
0045ee44  RET

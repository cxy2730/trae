; Function: FUN_0043bc50
; Entry:    0043bc50
; Size:     772 bytes

0043bc50  PUSH EBP
0043bc51  MOV EBP,ESP
0043bc53  PUSH -0x1
0043bc55  PUSH 0x4a0cb0
0043bc5a  MOV EAX,FS:[0x0]
0043bc60  PUSH EAX
0043bc61  MOV dword ptr FS:[0x0],ESP
0043bc68  PUSH ECX
0043bc69  MOV EAX,0x108c
0043bc6e  CALL 0x004835e0
0043bc73  MOV EAX,dword ptr [EBP + 0xc]
0043bc76  MOV ECX,dword ptr [EBP + 0x10]
0043bc79  PUSH EBX
0043bc7a  PUSH ESI
0043bc7b  PUSH EDI
0043bc7c  MOV dword ptr [EAX],0x0
0043bc82  MOV EAX,dword ptr [EBP + 0x8]
0043bc85  MOV dword ptr [EBP + -0x10],ESP
0043bc88  LEA EDX,[EBP + 0xffffff7c]
0043bc8e  PUSH 0x36
0043bc90  PUSH EDX
0043bc91  PUSH EAX
0043bc92  MOV dword ptr [ECX],0x0
0043bc98  MOV dword ptr [EBP + -0x14],0x36
0043bc9f  CALL 0x0043bbb0
0043bca4  ADD ESP,0xc
0043bca7  CMP EAX,0x36
0043bcaa  JNZ 0x0043c014
0043bcb0  CMP byte ptr [EBP + 0xffffff7c],0x42
0043bcb7  JZ 0x0043bcc6
0043bcb9  CMP byte ptr [EBP + 0xffffff7d],0x4d
0043bcc0  JNZ 0x0043c014
0043bcc6  MOV EAX,dword ptr [EBP + -0x72]
0043bcc9  MOV ECX,dword ptr [EBP + -0x7a]
0043bccc  CDQ
0043bccd  MOV EDI,EAX
0043bccf  MOV EAX,dword ptr [EBP + -0x6e]
0043bcd2  XOR EDI,EDX
0043bcd4  MOV EBX,dword ptr [EBP + -0x68]
0043bcd7  SUB EDI,EDX
0043bcd9  MOV dword ptr [EBP + -0x20],ECX
0043bcdc  MOV ECX,dword ptr [EBP + -0x66]
0043bcdf  MOV word ptr [EBP + 0xffffff76],BX
0043bce6  CDQ
0043bce7  MOV ESI,EAX
0043bce9  MOV EAX,dword ptr [EBP + -0x56]
0043bcec  XOR ESI,EDX
0043bcee  MOV dword ptr [EBP + -0x1c],EAX
0043bcf1  SUB ESI,EDX
0043bcf3  TEST ECX,ECX
0043bcf5  JNZ 0x0043c014
0043bcfb  TEST EAX,EAX
0043bcfd  JNZ 0x0043bd0b
0043bcff  MOV EAX,0x1
0043bd04  MOV CL,BL
0043bd06  SHL EAX,CL
0043bd08  MOV dword ptr [EBP + -0x1c],EAX
0043bd0b  AND EBX,0xffff
0043bd11  MOV dword ptr [EBP + -0x18],0x0
0043bd18  LEA EAX,[EBX + -0x1]
0043bd1b  CMP EAX,0x1f
0043bd1e  JA 0x0043c014
0043bd24  XOR EDX,EDX
0043bd26  MOV DL,byte ptr [EAX + 0x43c164]
0043bd2c  JMP dword ptr [EDX*0x4 + 0x43c158]
0043bd33  MOV EAX,dword ptr [EBP + -0x1c]
0043bd36  LEA ECX,[EAX*0x4 + 0x0]
0043bd3d  PUSH ECX
0043bd3e  CALL 0x00492f17
0043bd43  MOV ECX,dword ptr [EBP + -0x1c]
0043bd46  ADD ESP,0x4
0043bd49  TEST ECX,ECX
0043bd4b  MOV dword ptr [EBP + -0x30],EAX
0043bd4e  MOV dword ptr [EBP + -0x18],EAX
0043bd51  MOV dword ptr [EBP + -0x28],0x0
0043bd58  JLE 0x0043bdb2
0043bd5a  INC EAX
0043bd5b  MOV dword ptr [EBP + -0x24],EAX
0043bd5e  MOV EAX,dword ptr [EBP + 0x8]
0043bd61  LEA EDX,[EBP + 0xffffff7c]
0043bd67  PUSH 0x4
0043bd69  PUSH EDX
0043bd6a  PUSH EAX
0043bd6b  CALL 0x0043bbb0
0043bd70  ADD ESP,0xc
0043bd73  CMP EAX,0x4
0043bd76  JNZ 0x0043bdcc
0043bd78  MOV EAX,dword ptr [EBP + -0x14]
0043bd7b  MOV CL,byte ptr [EBP + 0xffffff7e]
0043bd81  ADD EAX,0x4
0043bd84  MOV dword ptr [EBP + -0x14],EAX
0043bd87  MOV EAX,dword ptr [EBP + -0x24]
0043bd8a  MOV byte ptr [EAX + 0x1],CL
0043bd8d  MOV DL,byte ptr [EBP + 0xffffff7d]
0043bd93  MOV byte ptr [EAX],DL
0043bd95  MOV CL,byte ptr [EBP + 0xffffff7c]
0043bd9b  MOV byte ptr [EAX + -0x1],CL
0043bd9e  MOV ECX,dword ptr [EBP + -0x28]
0043bda1  ADD EAX,0x4
0043bda4  INC ECX
0043bda5  MOV dword ptr [EBP + -0x24],EAX
0043bda8  MOV EAX,dword ptr [EBP + -0x1c]
0043bdab  CMP ECX,EAX
0043bdad  MOV dword ptr [EBP + -0x28],ECX
0043bdb0  JL 0x0043bd5e
0043bdb2  MOV ECX,dword ptr [EBP + -0x14]
0043bdb5  MOV EAX,dword ptr [EBP + -0x20]
0043bdb8  CMP ECX,EAX
0043bdba  JLE 0x0043bdd5
0043bdbc  MOV EAX,dword ptr [EBP + -0x18]
0043bdbf  TEST EAX,EAX
0043bdc1  JZ 0x0043c014
0043bdc7  JMP 0x0043c00b
0043bdcc  MOV EDX,dword ptr [EBP + -0x30]
0043bdcf  PUSH EDX
0043bdd0  JMP 0x0043c00c
0043bdd5  JGE 0x0043be0f
0043bdd7  LEA ECX,[EBP + -0x44]
0043bdda  CALL 0x00493768
0043bddf  MOV EAX,dword ptr [EBP + 0x8]
0043bde2  MOV ECX,dword ptr [EBP + -0x14]
0043bde5  PUSH 0x1
0043bde7  MOV dword ptr [EBP + -0x4],0x0
0043bdee  MOV EDX,dword ptr [EAX]
0043bdf0  MOV EAX,dword ptr [EBP + -0x20]
0043bdf3  SUB EAX,ECX
0043bdf5  MOV ECX,dword ptr [EBP + 0x8]
0043bdf8  PUSH EAX
0043bdf9  MOV byte ptr [EBP + -0x4],0x1
0043bdfd  CALL dword ptr [EDX + 0x28]
0043be00  MOV dword ptr [EBP + -0x4],0xffffffff
0043be07  CALL 0x004937a6
0043be0c  MOV EAX,dword ptr [EBP + -0x20]
0043be0f  MOV EDX,dword ptr [EBP + 0xc]
0043be12  MOV dword ptr [EBP + -0x14],EAX
0043be15  MOV EAX,dword ptr [EBP + 0x10]
0043be18  MOV dword ptr [EDX],EDI
0043be1a  MOV dword ptr [EAX],ESI
0043be1c  MOV EAX,ESI
0043be1e  IMUL EAX,EDI
0043be21  LEA EAX,[EAX + EAX*0x2]
0043be24  PUSH EAX
0043be25  CALL 0x00492f17
0043be2a  SHR EBX,0x3
0043be2d  MOV dword ptr [EBP + -0x3c],EBX
0043be30  IMUL EBX,EDI
0043be33  MOV dword ptr [EBP + 0x10],EAX
0043be36  ADD ESP,0x4
0043be39  XOR EAX,EAX
0043be3b  DEC ESI
0043be3c  MOV dword ptr [EBP + -0x1c],EAX
0043be3f  MOV dword ptr [EBP + 0xc],EAX
0043be42  MOV dword ptr [EBP + -0x2c],EAX
0043be45  MOV dword ptr [EBP + -0x24],EBX
0043be48  MOV dword ptr [EBP + -0x28],ESI
0043be4b  TEST ESI,ESI
0043be4d  JL 0x0043c126
0043be53  LEA ECX,[EDI + EDI*0x2]
0043be56  IMUL ESI,ECX
0043be59  MOV CX,word ptr [EBP + 0xffffff76]
0043be60  CMP CX,0x18
0043be64  JZ 0x0043c027
0043be6a  CMP CX,0x20
0043be6e  JZ 0x0043c027
0043be74  MOV ECX,dword ptr [EBP + 0xffffff76]
0043be7a  MOV EBX,0x1
0043be7f  AND ECX,0xffff
0043be85  XOR EDX,EDX
0043be87  SHL EBX,CL
0043be89  MOV dword ptr [EBP + -0x34],ECX
0043be8c  MOV byte ptr [EBP + -0x38],DL
0043be8f  MOV dword ptr [EBP + -0x30],EDX
0043be92  DEC EBX
0043be93  TEST EDI,EDI
0043be95  JLE 0x0043bf8f
0043be9b  MOV ECX,dword ptr [EBP + 0x10]
0043be9e  LEA ESI,[ESI + ECX*0x1 + 0x1]
0043bea2  TEST EDX,EDX
0043bea4  JG 0x0043bef7
0043bea6  MOV EDX,dword ptr [EBP + 0xc]
0043bea9  MOV EAX,dword ptr [EBP + -0x2c]
0043beac  CMP EDX,EAX
0043beae  JL 0x0043beda
0043beb0  MOV ECX,dword ptr [EBP + 0x8]
0043beb3  LEA EAX,[EBP + 0xffffef64]
0043beb9  PUSH 0x1000
0043bebe  PUSH EAX
0043bebf  PUSH ECX
0043bec0  CALL 0x0043bbb0
0043bec5  ADD ESP,0xc
0043bec8  MOV dword ptr [EBP + -0x2c],EAX
0043becb  TEST EAX,EAX
0043becd  MOV dword ptr [EBP + 0xc],0x0
0043bed4  JLE 0x0043bf76
0043beda  MOV EAX,dword ptr [EBP + 0xc]
0043bedd  MOV EDX,0x8
0043bee2  MOV CL,byte ptr [EBP + EAX*0x1 + 0xffffef64]
0043bee9  INC EAX
0043beea  MOV dword ptr [EBP + 0xc],EAX
0043beed  MOV EAX,dword ptr [EBP + -0x14]
0043bef0  INC EAX
0043bef1  MOV byte ptr [EBP + -0x38],CL
0043bef4  MOV dword ptr [EBP + -0x14],EAX
0043bef7  MOV EAX,dword ptr [EBP + -0x34]
0043befa  ADD ESI,0x3
0043befd  SUB EDX,EAX
0043beff  MOV EAX,dword ptr [EBP + -0x38]
0043bf02  AND EAX,0xff
0043bf07  MOV CL,DL
0043bf09  SHR EAX,CL
0043bf0b  MOV ECX,dword ptr [EBP + -0x18]
0043bf0e  AND EAX,EBX
0043bf10  MOV CL,byte ptr [ECX + EAX*0x4]
0043bf13  MOV byte ptr [ESI + -0x2],CL
0043bf16  MOV ECX,dword ptr [EBP + -0x18]
0043bf19  MOV CL,byte ptr [ECX + EAX*0x4 + 0x1]
0043bf1d  MOV byte ptr [ESI + -0x3],CL
0043bf20  MOV ECX,dword ptr [EBP + -0x18]
0043bf23  MOV AL,byte ptr [ECX + EAX*0x4 + 0x2]
0043bf27  MOV byte ptr [ESI + -0x4],AL
0043bf2a  MOV EAX,dword ptr [EBP + -0x30]
0043bf2d  INC EAX
0043bf2e  CMP EAX,EDI
0043bf30  MOV dword ptr [EBP + -0x30],EAX
0043bf33  JL 0x0043bea2
0043bf39  JMP 0x0043bf8f
0043bf76  MOV ECX,dword ptr [EBP + 0x10]
0043bf79  PUSH ECX
0043bf7a  CALL 0x00492f40
0043bf7f  MOV EAX,dword ptr [EBP + -0x18]
0043bf82  ADD ESP,0x4
0043bf85  TEST EAX,EAX
0043bf87  JZ 0x0043c014
0043bf8d  JMP 0x0043c00b

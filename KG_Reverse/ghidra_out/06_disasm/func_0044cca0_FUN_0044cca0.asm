; Function: FUN_0044cca0
; Entry:    0044cca0
; Size:     488 bytes

0044cca0  PUSH ESI
0044cca1  MOV ESI,dword ptr [ESP + 0xc]
0044cca5  PUSH EDI
0044cca6  MOV EDI,dword ptr [ESP + 0xc]
0044ccaa  MOV EAX,dword ptr [EDI + 0x7c]
0044ccad  TEST AH,0x10
0044ccb0  JZ 0x0044cd18
0044ccb2  MOV CL,byte ptr [ESI + 0x19]
0044ccb5  CMP CL,0x3
0044ccb8  JNZ 0x0044ccf1
0044ccba  XOR AX,AX
0044ccbd  CMP AX,word ptr [EDI + 0x150]
0044ccc4  MOV byte ptr [ESI + 0x18],0x8
0044ccc8  MOV word ptr [ESI + 0x16],AX
0044cccc  SBB CL,CL
0044ccce  AND CL,0x4
0044ccd1  ADD CL,0x2
0044ccd4  MOV byte ptr [ESI + 0x19],CL
0044ccd7  MOV EAX,dword ptr [EDI + 0x144]
0044ccdd  TEST EAX,EAX
0044ccdf  JNZ 0x0044cd18
0044cce1  PUSH 0x2fb2c94
0044cce6  PUSH EDI
0044cce7  CALL 0x004463d0
0044ccec  ADD ESP,0x8
0044ccef  JMP 0x0044cd18
0044ccf1  CMP word ptr [EDI + 0x150],0x0
0044ccf9  JZ 0x0044cd08
0044ccfb  TEST EAX,0x2000000
0044cd00  JZ 0x0044cd08
0044cd02  OR CL,0x4
0044cd05  MOV byte ptr [ESI + 0x19],CL
0044cd08  CMP byte ptr [ESI + 0x18],0x8
0044cd0c  JNC 0x0044cd12
0044cd0e  MOV byte ptr [ESI + 0x18],0x8
0044cd12  MOV word ptr [ESI + 0x16],0x0
0044cd18  TEST byte ptr [EDI + 0x7c],0x80
0044cd1c  JZ 0x0044cd3c
0044cd1e  LEA EDX,[EDI + 0x168]
0044cd24  LEA EAX,[ESI + 0xaa]
0044cd2a  MOV ECX,dword ptr [EDX]
0044cd2c  MOV dword ptr [EAX],ECX
0044cd2e  MOV ECX,dword ptr [EDX + 0x4]
0044cd31  MOV dword ptr [EAX + 0x4],ECX
0044cd34  MOV DX,word ptr [EDX + 0x8]
0044cd38  MOV word ptr [EAX + 0x8],DX
0044cd3c  MOV EAX,dword ptr [EDI + 0x2dc]
0044cd42  MOV CL,0x10
0044cd44  MOV dword ptr [ESI + 0x28],EAX
0044cd47  MOV AL,byte ptr [ESI + 0x18]
0044cd4a  CMP AL,CL
0044cd4c  JNZ 0x0044cd67
0044cd4e  TEST dword ptr [EDI + 0x7c],0x4000000
0044cd55  JZ 0x0044cd5b
0044cd57  MOV byte ptr [ESI + 0x18],0x8
0044cd5b  MOV EAX,dword ptr [EDI + 0x7c]
0044cd5e  TEST AH,0x4
0044cd61  JZ 0x0044cd67
0044cd63  MOV byte ptr [ESI + 0x18],0x8
0044cd67  MOV EAX,dword ptr [EDI + 0x7c]
0044cd6a  TEST AH,0x40
0044cd6d  JZ 0x0044cd73
0044cd6f  OR byte ptr [ESI + 0x19],0x2
0044cd73  TEST dword ptr [EDI + 0x7c],0x600000
0044cd7a  JZ 0x0044cd80
0044cd7c  AND byte ptr [ESI + 0x19],0xfd
0044cd80  TEST byte ptr [EDI + 0x7c],0x40
0044cd84  JZ 0x0044cda5
0044cd86  MOV AL,byte ptr [ESI + 0x19]
0044cd89  CMP AL,0x2
0044cd8b  JZ 0x0044cd91
0044cd8d  CMP AL,0x6
0044cd8f  JNZ 0x0044cda5
0044cd91  MOV EAX,dword ptr [EDI + 0x208]
0044cd97  TEST EAX,EAX
0044cd99  JZ 0x0044cda5
0044cd9b  CMP byte ptr [ESI + 0x18],0x8
0044cd9f  JNZ 0x0044cda5
0044cda1  MOV byte ptr [ESI + 0x19],0x3
0044cda5  MOV EAX,dword ptr [EDI + 0x7c]
0044cda8  TEST AH,0x2
0044cdab  JZ 0x0044cdbc
0044cdad  CMP byte ptr [ESI + 0x18],0x8
0044cdb1  JNZ 0x0044cdbc
0044cdb3  CMP byte ptr [ESI + 0x19],0x3
0044cdb7  JZ 0x0044cdbc
0044cdb9  MOV byte ptr [ESI + 0x18],CL
0044cdbc  TEST byte ptr [EDI + 0x7c],0x4
0044cdc0  JZ 0x0044cdcc
0044cdc2  CMP byte ptr [ESI + 0x18],0x8
0044cdc6  JNC 0x0044cdcc
0044cdc8  MOV byte ptr [ESI + 0x18],0x8
0044cdcc  MOV AL,byte ptr [ESI + 0x19]
0044cdcf  CMP AL,0x3
0044cdd1  JZ 0x0044cddd
0044cdd3  TEST AL,0x2
0044cdd5  JZ 0x0044cddd
0044cdd7  MOV byte ptr [ESI + 0x1d],0x3
0044cddb  JMP 0x0044cde1
0044cddd  MOV byte ptr [ESI + 0x1d],0x1
0044cde1  TEST dword ptr [EDI + 0x7c],0x40000
0044cde8  JZ 0x0044cdf5
0044cdea  AND AL,0xfb
0044cdec  MOV word ptr [ESI + 0x16],0x0
0044cdf2  MOV byte ptr [ESI + 0x19],AL
0044cdf5  MOV AL,byte ptr [ESI + 0x19]
0044cdf8  TEST AL,0x4
0044cdfa  JZ 0x0044cdff
0044cdfc  INC byte ptr [ESI + 0x1d]
0044cdff  MOV ECX,dword ptr [EDI + 0x7c]
0044ce02  TEST CH,0x80
0044ce05  JZ 0x0044ce27
0044ce07  CMP AL,0x2
0044ce09  JZ 0x0044ce0f
0044ce0b  TEST AL,AL
0044ce0d  JNZ 0x0044ce27
0044ce0f  MOV DL,byte ptr [ESI + 0x1d]
0044ce12  INC DL
0044ce14  MOV byte ptr [ESI + 0x1d],DL
0044ce17  MOV ECX,dword ptr [EDI + 0x7c]
0044ce1a  TEST ECX,0x1000000
0044ce20  JZ 0x0044ce27
0044ce22  OR AL,0x4
0044ce24  MOV byte ptr [ESI + 0x19],AL
0044ce27  TEST dword ptr [EDI + 0x7c],0x100000
0044ce2e  JZ 0x0044ce4a
0044ce30  MOV AL,byte ptr [EDI + 0x70]
0044ce33  MOV CL,byte ptr [ESI + 0x18]
0044ce36  CMP CL,AL
0044ce38  JNC 0x0044ce3d
0044ce3a  MOV byte ptr [ESI + 0x18],AL
0044ce3d  MOV AL,byte ptr [EDI + 0x71]
0044ce40  MOV CL,byte ptr [ESI + 0x1d]
0044ce43  CMP CL,AL
0044ce45  JNC 0x0044ce4a
0044ce47  MOV byte ptr [ESI + 0x1d],AL
0044ce4a  MOV AL,byte ptr [ESI + 0x18]
0044ce4d  IMUL byte ptr [ESI + 0x1d]
0044ce50  CMP AL,0x8
0044ce52  MOV byte ptr [ESI + 0x1e],AL
0044ce55  JC 0x0044ce6e
0044ce57  AND EAX,0xff
0044ce5c  SHR EAX,0x3
0044ce5f  IMUL EAX,dword ptr [ESI]
0044ce62  MOV dword ptr [ESI + 0xc],EAX
0044ce65  MOV dword ptr [EDI + 0x138],EAX
0044ce6b  POP EDI
0044ce6c  POP ESI
0044ce6d  RET
0044ce6e  AND EAX,0xff
0044ce73  IMUL EAX,dword ptr [ESI]
0044ce76  ADD EAX,0x7
0044ce79  SHR EAX,0x3
0044ce7c  MOV dword ptr [ESI + 0xc],EAX
0044ce7f  MOV dword ptr [EDI + 0x138],EAX
0044ce85  POP EDI
0044ce86  POP ESI
0044ce87  RET

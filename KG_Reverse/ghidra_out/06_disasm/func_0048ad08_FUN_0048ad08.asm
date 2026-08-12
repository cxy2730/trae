; Function: FUN_0048ad08
; Entry:    0048ad08
; Size:     809 bytes

0048ad08  PUSH EBP
0048ad09  MOV EBP,ESP
0048ad0b  SUB ESP,0x10
0048ad0e  MOV ECX,dword ptr [EBP + 0x8]
0048ad11  PUSH EBX
0048ad12  PUSH ESI
0048ad13  MOV ESI,dword ptr [EBP + 0xc]
0048ad16  MOV EAX,dword ptr [ECX + 0x10]
0048ad19  PUSH EDI
0048ad1a  MOV EDI,ESI
0048ad1c  ADD ESI,-0x4
0048ad1f  SUB EDI,dword ptr [ECX + 0xc]
0048ad22  SHR EDI,0xf
0048ad25  MOV ECX,EDI
0048ad27  IMUL ECX,ECX,0x204
0048ad2d  LEA ECX,[ECX + EAX*0x1 + 0x144]
0048ad34  MOV dword ptr [EBP + -0x10],ECX
0048ad37  MOV ECX,dword ptr [ESI]
0048ad39  DEC ECX
0048ad3a  TEST CL,0x1
0048ad3d  MOV dword ptr [EBP + -0x4],ECX
0048ad40  JNZ 0x0048b02c
0048ad46  MOV EDX,dword ptr [ECX + ESI*0x1]
0048ad49  LEA EBX,[ECX + ESI*0x1]
0048ad4c  MOV dword ptr [EBP + -0xc],EDX
0048ad4f  MOV EDX,dword ptr [ESI + -0x4]
0048ad52  MOV dword ptr [EBP + -0x8],EDX
0048ad55  MOV EDX,dword ptr [EBP + -0xc]
0048ad58  TEST DL,0x1
0048ad5b  MOV dword ptr [EBP + 0xc],EBX
0048ad5e  JNZ 0x0048adde
0048ad60  SAR EDX,0x4
0048ad63  DEC EDX
0048ad64  CMP EDX,0x3f
0048ad67  JBE 0x0048ad6c
0048ad69  PUSH 0x3f
0048ad6b  POP EDX
0048ad6c  MOV ECX,dword ptr [EBX + 0x4]
0048ad6f  CMP ECX,dword ptr [EBX + 0x8]
0048ad72  JNZ 0x0048adc0
0048ad74  CMP EDX,0x20
0048ad77  JNC 0x0048ad97
0048ad79  MOV EBX,0x80000000
0048ad7e  MOV ECX,EDX
0048ad80  SHR EBX,CL
0048ad82  LEA ECX,[EDX + EAX*0x1 + 0x4]
0048ad86  NOT EBX
0048ad88  AND dword ptr [EAX + EDI*0x4 + 0x44],EBX
0048ad8c  DEC byte ptr [ECX]
0048ad8e  JNZ 0x0048adb8
0048ad90  MOV ECX,dword ptr [EBP + 0x8]
0048ad93  AND dword ptr [ECX],EBX
0048ad95  JMP 0x0048adb8
0048ad97  LEA ECX,[EDX + -0x20]
0048ad9a  MOV EBX,0x80000000
0048ad9f  SHR EBX,CL
0048ada1  LEA ECX,[EDX + EAX*0x1 + 0x4]
0048ada5  NOT EBX
0048ada7  AND dword ptr [EAX + EDI*0x4 + 0xc4],EBX
0048adae  DEC byte ptr [ECX]
0048adb0  JNZ 0x0048adb8
0048adb2  MOV ECX,dword ptr [EBP + 0x8]
0048adb5  AND dword ptr [ECX + 0x4],EBX
0048adb8  MOV ECX,dword ptr [EBP + -0x4]
0048adbb  MOV EBX,dword ptr [EBP + 0xc]
0048adbe  JMP 0x0048adc3
0048adc0  MOV ECX,dword ptr [EBP + -0x4]
0048adc3  MOV EDX,dword ptr [EBX + 0x8]
0048adc6  MOV EBX,dword ptr [EBX + 0x4]
0048adc9  ADD ECX,dword ptr [EBP + -0xc]
0048adcc  MOV dword ptr [EDX + 0x4],EBX
0048adcf  MOV EDX,dword ptr [EBP + 0xc]
0048add2  MOV dword ptr [EBP + -0x4],ECX
0048add5  MOV EBX,dword ptr [EDX + 0x4]
0048add8  MOV EDX,dword ptr [EDX + 0x8]
0048addb  MOV dword ptr [EBX + 0x8],EDX
0048adde  MOV EDX,ECX
0048ade0  SAR EDX,0x4
0048ade3  DEC EDX
0048ade4  CMP EDX,0x3f
0048ade7  JBE 0x0048adec
0048ade9  PUSH 0x3f
0048adeb  POP EDX
0048adec  MOV EBX,dword ptr [EBP + -0x8]
0048adef  AND EBX,0x1
0048adf2  MOV dword ptr [EBP + -0xc],EBX
0048adf5  JNZ 0x0048ae8f
0048adfb  SUB ESI,dword ptr [EBP + -0x8]
0048adfe  MOV EBX,dword ptr [EBP + -0x8]
0048ae01  SAR EBX,0x4
0048ae04  PUSH 0x3f
0048ae06  MOV dword ptr [EBP + 0xc],ESI
0048ae09  DEC EBX
0048ae0a  POP ESI
0048ae0b  CMP EBX,ESI
0048ae0d  JBE 0x0048ae11
0048ae0f  MOV EBX,ESI
0048ae11  ADD ECX,dword ptr [EBP + -0x8]
0048ae14  MOV EDX,ECX
0048ae16  MOV dword ptr [EBP + -0x4],ECX
0048ae19  SAR EDX,0x4
0048ae1c  DEC EDX
0048ae1d  CMP EDX,ESI
0048ae1f  JBE 0x0048ae23
0048ae21  MOV EDX,ESI
0048ae23  CMP EBX,EDX
0048ae25  JZ 0x0048ae8a
0048ae27  MOV ECX,dword ptr [EBP + 0xc]
0048ae2a  MOV ESI,dword ptr [ECX + 0x4]
0048ae2d  CMP ESI,dword ptr [ECX + 0x8]
0048ae30  JNZ 0x0048ae72
0048ae32  CMP EBX,0x20
0048ae35  JNC 0x0048ae53
0048ae37  MOV ESI,0x80000000
0048ae3c  MOV ECX,EBX
0048ae3e  SHR ESI,CL
0048ae40  NOT ESI
0048ae42  AND dword ptr [EAX + EDI*0x4 + 0x44],ESI
0048ae46  DEC byte ptr [EBX + EAX*0x1 + 0x4]
0048ae4a  JNZ 0x0048ae72
0048ae4c  MOV ECX,dword ptr [EBP + 0x8]
0048ae4f  AND dword ptr [ECX],ESI
0048ae51  JMP 0x0048ae72
0048ae53  LEA ECX,[EBX + -0x20]
0048ae56  MOV ESI,0x80000000
0048ae5b  SHR ESI,CL
0048ae5d  NOT ESI
0048ae5f  AND dword ptr [EAX + EDI*0x4 + 0xc4],ESI
0048ae66  DEC byte ptr [EBX + EAX*0x1 + 0x4]
0048ae6a  JNZ 0x0048ae72
0048ae6c  MOV ECX,dword ptr [EBP + 0x8]
0048ae6f  AND dword ptr [ECX + 0x4],ESI
0048ae72  MOV ECX,dword ptr [EBP + 0xc]
0048ae75  MOV ESI,dword ptr [ECX + 0x8]
0048ae78  MOV ECX,dword ptr [ECX + 0x4]
0048ae7b  MOV dword ptr [ESI + 0x4],ECX
0048ae7e  MOV ECX,dword ptr [EBP + 0xc]
0048ae81  MOV ESI,dword ptr [ECX + 0x4]
0048ae84  MOV ECX,dword ptr [ECX + 0x8]
0048ae87  MOV dword ptr [ESI + 0x8],ECX
0048ae8a  MOV ESI,dword ptr [EBP + 0xc]
0048ae8d  JMP 0x0048ae92
0048ae8f  MOV EBX,dword ptr [EBP + 0x8]
0048ae92  CMP dword ptr [EBP + -0xc],0x0
0048ae96  JNZ 0x0048aea0
0048ae98  CMP EBX,EDX
0048ae9a  JZ 0x0048af21
0048aea0  MOV ECX,dword ptr [EBP + -0x10]
0048aea3  MOV EBX,dword ptr [ECX + EDX*0x8 + 0x4]
0048aea7  LEA ECX,[ECX + EDX*0x8]
0048aeaa  MOV dword ptr [ESI + 0x4],EBX
0048aead  MOV dword ptr [ESI + 0x8],ECX
0048aeb0  MOV dword ptr [ECX + 0x4],ESI
0048aeb3  MOV ECX,dword ptr [ESI + 0x4]
0048aeb6  MOV dword ptr [ECX + 0x8],ESI
0048aeb9  MOV ECX,dword ptr [ESI + 0x4]
0048aebc  CMP ECX,dword ptr [ESI + 0x8]
0048aebf  JNZ 0x0048af21
0048aec1  MOV CL,byte ptr [EDX + EAX*0x1 + 0x4]
0048aec5  CMP EDX,0x20
0048aec8  MOV byte ptr [EBP + 0xf],CL
0048aecb  INC CL
0048aecd  MOV byte ptr [EDX + EAX*0x1 + 0x4],CL
0048aed1  JNC 0x0048aef8
0048aed3  CMP byte ptr [EBP + 0xf],0x0
0048aed7  JNZ 0x0048aee7
0048aed9  MOV EBX,0x80000000
0048aede  MOV ECX,EDX
0048aee0  SHR EBX,CL
0048aee2  MOV ECX,dword ptr [EBP + 0x8]
0048aee5  OR dword ptr [ECX],EBX
0048aee7  MOV EBX,0x80000000
0048aeec  MOV ECX,EDX
0048aeee  SHR EBX,CL
0048aef0  LEA EAX,[EAX + EDI*0x4 + 0x44]
0048aef4  OR dword ptr [EAX],EBX
0048aef6  JMP 0x0048af21
0048aef8  CMP byte ptr [EBP + 0xf],0x0
0048aefc  JNZ 0x0048af0e
0048aefe  LEA ECX,[EDX + -0x20]
0048af01  MOV EBX,0x80000000
0048af06  SHR EBX,CL
0048af08  MOV ECX,dword ptr [EBP + 0x8]
0048af0b  OR dword ptr [ECX + 0x4],EBX
0048af0e  LEA ECX,[EDX + -0x20]
0048af11  MOV EDX,0x80000000
0048af16  SHR EDX,CL
0048af18  LEA EAX,[EAX + EDI*0x4 + 0xc4]
0048af1f  OR dword ptr [EAX],EDX
0048af21  MOV EAX,dword ptr [EBP + -0x4]
0048af24  MOV dword ptr [ESI],EAX
0048af26  MOV dword ptr [EAX + ESI*0x1 + -0x4],EAX
0048af2a  MOV EAX,dword ptr [EBP + -0x10]
0048af2d  DEC dword ptr [EAX]
0048af2f  JNZ 0x0048b02c
0048af35  MOV EAX,[0x03014e94]
0048af3a  TEST EAX,EAX
0048af3c  JZ 0x0048b01e
0048af42  MOV ECX,dword ptr [0x03014e8c]
0048af48  MOV ESI,dword ptr [0x004a2264]
0048af4e  SHL ECX,0xf
0048af51  ADD ECX,dword ptr [EAX + 0xc]
0048af54  MOV EBX,0x8000
0048af59  PUSH 0x4000
0048af5e  PUSH EBX
0048af5f  PUSH ECX
0048af60  CALL ESI
0048af62  MOV ECX,dword ptr [0x03014e8c]
0048af68  MOV EAX,[0x03014e94]
0048af6d  MOV EDX,0x80000000
0048af72  SHR EDX,CL
0048af74  OR dword ptr [EAX + 0x8],EDX
0048af77  MOV EAX,[0x03014e94]
0048af7c  MOV ECX,dword ptr [0x03014e8c]
0048af82  MOV EAX,dword ptr [EAX + 0x10]
0048af85  AND dword ptr [EAX + ECX*0x4 + 0xc4],0x0
0048af8d  MOV EAX,[0x03014e94]
0048af92  MOV EAX,dword ptr [EAX + 0x10]
0048af95  DEC byte ptr [EAX + 0x43]
0048af98  MOV EAX,[0x03014e94]
0048af9d  MOV ECX,dword ptr [EAX + 0x10]
0048afa0  CMP byte ptr [ECX + 0x43],0x0
0048afa4  JNZ 0x0048afaf
0048afa6  AND dword ptr [EAX + 0x4],0xfffffffe
0048afaa  MOV EAX,[0x03014e94]
0048afaf  CMP dword ptr [EAX + 0x8],-0x1
0048afb3  JNZ 0x0048b01e
0048afb5  PUSH EBX
0048afb6  PUSH 0x0
0048afb8  PUSH dword ptr [EAX + 0xc]
0048afbb  CALL ESI
0048afbd  MOV EAX,[0x03014e94]
0048afc2  PUSH dword ptr [EAX + 0x10]
0048afc5  PUSH 0x0
0048afc7  PUSH dword ptr [0x03014ea4]
0048afcd  CALL dword ptr [0x004a22e8]
0048afd3  MOV EAX,[0x03014e98]
0048afd8  MOV EDX,dword ptr [0x03014e9c]
0048afde  LEA EAX,[EAX + EAX*0x4]
0048afe1  SHL EAX,0x2
0048afe4  MOV ECX,EAX
0048afe6  MOV EAX,[0x03014e94]
0048afeb  SUB ECX,EAX
0048afed  LEA ECX,[ECX + EDX*0x1 + -0x14]
0048aff1  PUSH ECX
0048aff2  LEA ECX,[EAX + 0x14]
0048aff5  PUSH ECX
0048aff6  PUSH EAX
0048aff7  CALL 0x00483180
0048affc  MOV EAX,dword ptr [EBP + 0x8]
0048afff  ADD ESP,0xc
0048b002  DEC dword ptr [0x03014e98]
0048b008  CMP EAX,dword ptr [0x03014e94]
0048b00e  JBE 0x0048b014
0048b010  SUB dword ptr [EBP + 0x8],0x14
0048b014  MOV EAX,[0x03014e9c]
0048b019  MOV [0x03014e90],EAX
0048b01e  MOV EAX,dword ptr [EBP + 0x8]
0048b021  MOV dword ptr [0x03014e8c],EDI
0048b027  MOV [0x03014e94],EAX
0048b02c  POP EDI
0048b02d  POP ESI
0048b02e  POP EBX
0048b02f  LEAVE
0048b030  RET

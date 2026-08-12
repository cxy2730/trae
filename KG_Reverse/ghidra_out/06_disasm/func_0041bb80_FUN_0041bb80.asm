; Function: FUN_0041bb80
; Entry:    0041bb80
; Size:     69 bytes

0041bb80  CMP dword ptr [ESP + 0x8],0xc
0041bb85  JC 0x0041bbc2
0041bb87  MOV EAX,dword ptr [ESP + 0x4]
0041bb8b  CMP byte ptr [EAX],0x52
0041bb8e  JNZ 0x0041bbc2
0041bb90  CMP byte ptr [EAX + 0x1],0x49
0041bb94  JNZ 0x0041bbc2
0041bb96  MOV DL,byte ptr [EAX + 0x2]
0041bb99  MOV CL,0x46
0041bb9b  CMP DL,CL
0041bb9d  JNZ 0x0041bbc2
0041bb9f  CMP byte ptr [EAX + 0x3],CL
0041bba2  JNZ 0x0041bbc2
0041bba4  CMP byte ptr [EAX + 0x8],0x57
0041bba8  JNZ 0x0041bbc2
0041bbaa  CMP byte ptr [EAX + 0x9],0x41
0041bbae  JNZ 0x0041bbc2
0041bbb0  CMP byte ptr [EAX + 0xa],0x56
0041bbb4  JNZ 0x0041bbc2
0041bbb6  CMP byte ptr [EAX + 0xb],0x45
0041bbba  JNZ 0x0041bbc2
0041bbbc  MOV EAX,0x1
0041bbc1  RET
0041bbc2  XOR EAX,EAX
0041bbc4  RET

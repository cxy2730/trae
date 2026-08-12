; Function: FUN_0041b300
; Entry:    0041b300
; Size:     569 bytes

0041b300  PUSH EBP
0041b301  MOV EBP,ESP
0041b303  SUB ESP,0x44
0041b306  PUSH EBX
0041b307  PUSH ESI
0041b308  PUSH EDI
0041b309  MOV dword ptr [EBP + -0x34],ECX
0041b30c  MOV EAX,dword ptr [EBP + 0x8]
0041b30f  MOV ECX,dword ptr [EAX + 0xc]
0041b312  PUSH ECX
0041b313  MOV EDX,dword ptr [EBP + 0x8]
0041b316  MOV EAX,dword ptr [EDX + 0x8]
0041b319  PUSH EAX
0041b31a  MOV ECX,dword ptr [EBP + 0x8]
0041b31d  MOV EDX,dword ptr [ECX + 0x4]
0041b320  PUSH EDX
0041b321  MOV EAX,dword ptr [EBP + 0x8]
0041b324  MOV ECX,dword ptr [EAX]
0041b326  PUSH ECX
0041b327  MOV ECX,dword ptr [EBP + -0x34]
0041b32a  CALL 0x00414b60
0041b32f  MOV dword ptr [EBP + -0x4],EAX
0041b332  CMP dword ptr [EBP + -0x4],0x0
0041b336  JNZ 0x0041b33f
0041b338  XOR EAX,EAX
0041b33a  JMP 0x0041b530
0041b33f  PUSH ESI
0041b340  PUSH EDI
0041b341  MOV EDX,dword ptr [EBP + 0x8]
0041b344  MOV EAX,dword ptr [EDX + 0xc]
0041b347  SUB EAX,0x1
0041b34a  MOV dword ptr [EBP + -0x1c],EAX
0041b34d  JMP 0x0041b358
0041b34f  MOV ECX,dword ptr [EBP + -0x1c]
0041b352  SUB ECX,0x1
0041b355  MOV dword ptr [EBP + -0x1c],ECX
0041b358  CMP dword ptr [EBP + -0x1c],0x0
0041b35c  JL 0x0041b4d8
0041b362  MOV EDX,dword ptr [EBP + -0x1c]
0041b365  SHL EDX,0x4
0041b368  MOV EAX,dword ptr [EBP + 0x8]
0041b36b  LEA ECX,[EAX + EDX*0x1 + 0x10]
0041b36f  MOV dword ptr [EBP + -0x28],ECX
0041b372  MOV dword ptr [EBP + -0x18],0x0
0041b379  MOV EDX,dword ptr [EBP + -0x28]
0041b37c  MOV EAX,dword ptr [EDX + 0xc]
0041b37f  AND EAX,0x1
0041b382  TEST EAX,EAX
0041b384  JZ 0x0041b393
0041b386  MOV ECX,dword ptr [EBP + -0x28]
0041b389  MOV EDX,dword ptr [ECX]
0041b38b  MOV dword ptr [EBP + -0x20],EDX
0041b38e  JMP 0x0041b4c7
0041b393  MOV EAX,dword ptr [EBP + -0x28]
0041b396  MOV ECX,dword ptr [EAX + 0xc]
0041b399  AND ECX,0x2
0041b39c  TEST ECX,ECX
0041b39e  JNZ 0x0041b3ac
0041b3a0  MOV EDX,dword ptr [EBP + -0x28]
0041b3a3  CMP dword ptr [EDX + 0x8],0x10003
0041b3aa  JNZ 0x0041b3d7
0041b3ac  MOV dword ptr [EBP + -0x18],0x1
0041b3b3  MOV EAX,dword ptr [EBP + -0x28]
0041b3b6  MOV dword ptr [EBP + -0xc],EAX
0041b3b9  MOV ECX,dword ptr [EBP + -0xc]
0041b3bc  MOV EDX,dword ptr [ECX]
0041b3be  MOV dword ptr [EBP + -0x20],EDX
0041b3c1  MOV EAX,dword ptr [EBP + -0xc]
0041b3c4  ADD EAX,0x4
0041b3c7  MOV dword ptr [EBP + -0xc],EAX
0041b3ca  MOV ECX,dword ptr [EBP + -0xc]
0041b3cd  MOV EDX,dword ptr [ECX]
0041b3cf  MOV dword ptr [EBP + -0x14],EDX
0041b3d2  JMP 0x0041b4c7
0041b3d7  MOV EAX,dword ptr [EBP + -0x28]
0041b3da  MOV dword ptr [EBP + -0x2c],EAX
0041b3dd  MOV ECX,dword ptr [EBP + -0x2c]
0041b3e0  MOV EDX,dword ptr [ECX + 0x8]
0041b3e3  MOV dword ptr [EBP + -0x38],EDX
0041b3e6  CMP dword ptr [EBP + -0x38],0x80000201
0041b3ed  JA 0x0041b418
0041b3ef  CMP dword ptr [EBP + -0x38],0x80000201
0041b3f6  JZ 0x0041b43e
0041b3f8  CMP dword ptr [EBP + -0x38],0x80000003
0041b3ff  JZ 0x0041b449
0041b401  CMP dword ptr [EBP + -0x38],0x80000008
0041b408  JZ 0x0041b449
0041b40a  CMP dword ptr [EBP + -0x38],0x80000101
0041b411  JZ 0x0041b42f
0041b413  JMP 0x0041b4bf
0041b418  CMP dword ptr [EBP + -0x38],0x80000401
0041b41f  JZ 0x0041b449
0041b421  CMP dword ptr [EBP + -0x38],0x80000601
0041b428  JZ 0x0041b449
0041b42a  JMP 0x0041b4bf
0041b42f  MOV EAX,dword ptr [EBP + -0x2c]
0041b432  XOR ECX,ECX
0041b434  MOV CL,byte ptr [EAX]
0041b436  MOV dword ptr [EBP + -0x20],ECX
0041b439  JMP 0x0041b4c7
0041b43e  MOV EDX,dword ptr [EBP + -0x2c]
0041b441  MOVSX EAX,word ptr [EDX]
0041b444  MOV dword ptr [EBP + -0x20],EAX
0041b447  JMP 0x0041b4c7
0041b449  MOV dword ptr [EBP + -0x18],0x1
0041b450  MOV ECX,dword ptr [EBP + -0x2c]
0041b453  CMP dword ptr [ECX + 0x8],0x80000401
0041b45a  JNZ 0x0041b464
0041b45c  MOV EDX,dword ptr [EBP + -0x2c]
0041b45f  MOV dword ptr [EBP + -0x3c],EDX
0041b462  JMP 0x0041b49e
0041b464  MOV EAX,dword ptr [EBP + -0x2c]
0041b467  CMP dword ptr [EAX + 0x8],0x80000601
0041b46e  JNZ 0x0041b478
0041b470  MOV ECX,dword ptr [EBP + -0x2c]
0041b473  MOV dword ptr [EBP + -0x40],ECX
0041b476  JMP 0x0041b498
0041b478  MOV EDX,dword ptr [EBP + -0x2c]
0041b47b  CMP dword ptr [EDX + 0x8],0x80000008
0041b482  JNZ 0x0041b48c
0041b484  MOV EAX,dword ptr [EBP + -0x2c]
0041b487  MOV dword ptr [EBP + -0x44],EAX
0041b48a  JMP 0x0041b492
0041b48c  MOV ECX,dword ptr [EBP + -0x2c]
0041b48f  MOV dword ptr [EBP + -0x44],ECX
0041b492  MOV EDX,dword ptr [EBP + -0x44]
0041b495  MOV dword ptr [EBP + -0x40],EDX
0041b498  MOV EAX,dword ptr [EBP + -0x40]
0041b49b  MOV dword ptr [EBP + -0x3c],EAX
0041b49e  MOV ECX,dword ptr [EBP + -0x3c]
0041b4a1  MOV dword ptr [EBP + -0xc],ECX
0041b4a4  MOV EDX,dword ptr [EBP + -0xc]
0041b4a7  MOV EAX,dword ptr [EDX]
0041b4a9  MOV dword ptr [EBP + -0x20],EAX
0041b4ac  MOV ECX,dword ptr [EBP + -0xc]
0041b4af  ADD ECX,0x4
0041b4b2  MOV dword ptr [EBP + -0xc],ECX
0041b4b5  MOV EDX,dword ptr [EBP + -0xc]
0041b4b8  MOV EAX,dword ptr [EDX]
0041b4ba  MOV dword ptr [EBP + -0x14],EAX
0041b4bd  JMP 0x0041b4c7
0041b4bf  MOV ECX,dword ptr [EBP + -0x2c]
0041b4c2  MOV EDX,dword ptr [ECX]
0041b4c4  MOV dword ptr [EBP + -0x20],EDX
0041b4c7  CMP dword ptr [EBP + -0x18],0x0
0041b4cb  JZ 0x0041b4d0
0041b4cd  PUSH dword ptr [EBP + -0x14]
0041b4d0  PUSH dword ptr [EBP + -0x20]
0041b4d3  JMP 0x0041b34f
0041b4d8  CALL dword ptr [EBP + -0x4]
0041b4db  POP EDI
0041b4dc  POP ESI
0041b4dd  MOV dword ptr [EBP + -0x10],EBX
0041b4e0  MOV dword ptr [EBP + -0x8],EAX
0041b4e3  MOV dword ptr [EBP + -0x24],EDX
0041b4e6  MOV EAX,dword ptr [EBP + -0x34]
0041b4e9  MOV dword ptr [EAX + 0x1e4],0x0
0041b4f3  CMP dword ptr [EBP + -0x10],0x0
0041b4f7  JZ 0x0041b52b
0041b4f9  MOV ECX,dword ptr [EBP + 0x8]
0041b4fc  MOV dword ptr [ECX + 0xd0],0x1
0041b506  MOV EDX,dword ptr [EBP + 0x8]
0041b509  ADD EDX,0xd4
0041b50f  MOV dword ptr [EBP + -0x30],EDX
0041b512  MOV EAX,dword ptr [EBP + -0x30]
0041b515  MOV ECX,dword ptr [EBP + -0x8]
0041b518  MOV dword ptr [EAX],ECX
0041b51a  MOV EDX,dword ptr [EBP + -0x30]
0041b51d  ADD EDX,0x4
0041b520  MOV dword ptr [EBP + -0x30],EDX
0041b523  MOV EAX,dword ptr [EBP + -0x30]
0041b526  MOV ECX,dword ptr [EBP + -0x24]
0041b529  MOV dword ptr [EAX],ECX
0041b52b  MOV EAX,0x1
0041b530  POP EDI
0041b531  POP ESI
0041b532  POP EBX
0041b533  MOV ESP,EBP
0041b535  POP EBP
0041b536  RET 0x4

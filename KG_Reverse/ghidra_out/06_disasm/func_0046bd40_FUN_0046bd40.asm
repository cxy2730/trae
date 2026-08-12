; Function: FUN_0046bd40
; Entry:    0046bd40
; Size:     66 bytes

0046bd40  PUSH ESI
0046bd41  MOV ESI,ECX
0046bd43  PUSH 0x0
0046bd45  MOV ECX,dword ptr [ESI + 0x20]
0046bd48  MOV EAX,dword ptr [ECX]
0046bd4a  CALL dword ptr [EAX + 0x48]
0046bd4d  TEST AL,AL
0046bd4f  JZ 0x0046bd79
0046bd51  MOV ECX,dword ptr [ESI + 0x24]
0046bd54  MOV EDX,dword ptr [ECX]
0046bd56  CALL dword ptr [EDX + 0x4]
0046bd59  MOV ECX,dword ptr [ESI + 0x20]
0046bd5c  MOV EAX,dword ptr [ECX]
0046bd5e  CALL dword ptr [EAX + 0x4]
0046bd61  MOV ECX,dword ptr [ESI + 0x24]
0046bd64  MOV EDX,dword ptr [ECX]
0046bd66  CALL dword ptr [EDX + 0x10]
0046bd69  MOV ECX,dword ptr [ESI + 0x20]
0046bd6c  MOV EAX,dword ptr [ECX]
0046bd6e  CALL dword ptr [EAX + 0x8]
0046bd71  MOV ECX,dword ptr [ESI + 0x24]
0046bd74  MOV EDX,dword ptr [ECX]
0046bd76  CALL dword ptr [EDX + 0x8]
0046bd79  MOV ECX,ESI
0046bd7b  CALL 0x0046e620
0046bd80  POP ESI
0046bd81  RET

; Function: FUN_0046bed0
; Entry:    0046bed0
; Size:     181 bytes

0046bed0  PUSH -0x1
0046bed2  PUSH 0x4a1288
0046bed7  MOV EAX,FS:[0x0]
0046bedd  PUSH EAX
0046bede  MOV dword ptr FS:[0x0],ESP
0046bee5  PUSH ECX
0046bee6  PUSH ESI
0046bee7  MOV ESI,ECX
0046bee9  MOV dword ptr [ESP + 0x4],ESI
0046beed  MOV dword ptr [ESI],0x2f99e58
0046bef3  MOV EAX,dword ptr [ESI + 0x84]
0046bef9  MOV dword ptr [ESP + 0x10],0x0
0046bf01  TEST EAX,EAX
0046bf03  JZ 0x0046bf3e
0046bf05  MOV ECX,dword ptr [ESI + 0x8]
0046bf08  MOV byte ptr [ESI + 0x1d],0x1
0046bf0c  CALL 0x0046bb50
0046bf11  MOV ECX,dword ptr [ESI + 0x4]
0046bf14  CALL 0x0046bb50
0046bf19  MOV ECX,dword ptr [ESI + 0x84]
0046bf1f  MOV EAX,dword ptr [ECX]
0046bf21  CALL dword ptr [EAX + 0x14]
0046bf24  MOV ECX,dword ptr [ESI + 0x84]
0046bf2a  TEST ECX,ECX
0046bf2c  JZ 0x0046bf34
0046bf2e  MOV EDX,dword ptr [ECX]
0046bf30  PUSH 0x1
0046bf32  CALL dword ptr [EDX]
0046bf34  MOV dword ptr [ESI + 0x84],0x0
0046bf3e  MOV EAX,dword ptr [ESI + 0xa0]
0046bf44  TEST EAX,EAX
0046bf46  JZ 0x0046bf60
0046bf48  MOV EAX,dword ptr [EAX + 0x18]
0046bf4b  PUSH EAX
0046bf4c  CALL 0x00492f40
0046bf51  MOV EAX,dword ptr [ESI + 0xa0]
0046bf57  PUSH EAX
0046bf58  CALL 0x00492f40
0046bf5d  ADD ESP,0x8
0046bf60  MOV ECX,ESI
0046bf62  MOV dword ptr [ESP + 0x10],0xffffffff
0046bf6a  MOV dword ptr [ESI],0x2f99e8c
0046bf70  CALL 0x0046e510
0046bf75  MOV ECX,dword ptr [ESP + 0x8]
0046bf79  POP ESI
0046bf7a  MOV dword ptr FS:[0x0],ECX
0046bf81  ADD ESP,0x10
0046bf84  RET

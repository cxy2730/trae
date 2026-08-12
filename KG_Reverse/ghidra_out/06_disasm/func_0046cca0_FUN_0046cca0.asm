; Function: FUN_0046cca0
; Entry:    0046cca0
; Size:     61 bytes

0046cca0  PUSH ESI
0046cca1  MOV ESI,ECX
0046cca3  MOV EAX,dword ptr [ESI + 0xa4]
0046cca9  TEST EAX,EAX
0046ccab  JZ 0x0046cccc
0046ccad  MOV EAX,dword ptr [ESI + 0xa8]
0046ccb3  PUSH EAX
0046ccb4  CALL 0x00492f40
0046ccb9  ADD ESP,0x4
0046ccbc  MOV dword ptr [ESI + 0xa8],0x0
0046ccc6  XOR EAX,EAX
0046ccc8  POP ESI
0046ccc9  RET 0x4
0046cccc  MOV ECX,dword ptr [ESI + 0x18]
0046cccf  MOV EAX,dword ptr [ESP + 0x8]
0046ccd3  PUSH EAX
0046ccd4  MOV EDX,dword ptr [ECX]
0046ccd6  CALL dword ptr [EDX + 0x10]
0046ccd9  POP ESI
0046ccda  RET 0x4

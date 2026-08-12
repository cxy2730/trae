; Function: FUN_0046bbc0
; Entry:    0046bbc0
; Size:     144 bytes

0046bbc0  PUSH -0x1
0046bbc2  PUSH 0x4a1268
0046bbc7  MOV EAX,FS:[0x0]
0046bbcd  PUSH EAX
0046bbce  MOV dword ptr FS:[0x0],ESP
0046bbd5  PUSH ECX
0046bbd6  PUSH ESI
0046bbd7  MOV ESI,ECX
0046bbd9  MOV dword ptr [ESP + 0x4],ESI
0046bbdd  MOV dword ptr [ESI],0x2f99e14
0046bbe3  MOV ECX,dword ptr [ESI + 0x24]
0046bbe6  MOV dword ptr [ESP + 0x10],0x0
0046bbee  TEST ECX,ECX
0046bbf0  MOV byte ptr [ESI + 0x1d],0x1
0046bbf4  JZ 0x0046bbfb
0046bbf6  MOV EAX,dword ptr [ECX]
0046bbf8  CALL dword ptr [EAX + 0x4]
0046bbfb  MOV ECX,dword ptr [ESI + 0x20]
0046bbfe  TEST ECX,ECX
0046bc00  JZ 0x0046bc07
0046bc02  MOV EDX,dword ptr [ECX]
0046bc04  CALL dword ptr [EDX + 0x4]
0046bc07  MOV ECX,dword ptr [ESI + 0x8]
0046bc0a  CALL 0x0046bb50
0046bc0f  MOV ECX,dword ptr [ESI + 0x4]
0046bc12  CALL 0x0046bb50
0046bc17  MOV ECX,dword ptr [ESI + 0x24]
0046bc1a  TEST ECX,ECX
0046bc1c  JZ 0x0046bc24
0046bc1e  MOV EAX,dword ptr [ECX]
0046bc20  PUSH 0x1
0046bc22  CALL dword ptr [EAX]
0046bc24  MOV ECX,dword ptr [ESI + 0x20]
0046bc27  TEST ECX,ECX
0046bc29  JZ 0x0046bc31
0046bc2b  MOV EDX,dword ptr [ECX]
0046bc2d  PUSH 0x1
0046bc2f  CALL dword ptr [EDX]
0046bc31  MOV ECX,ESI
0046bc33  MOV dword ptr [ESP + 0x10],0xffffffff
0046bc3b  CALL 0x0046e510
0046bc40  MOV ECX,dword ptr [ESP + 0x8]
0046bc44  POP ESI
0046bc45  MOV dword ptr FS:[0x0],ECX
0046bc4c  ADD ESP,0x10
0046bc4f  RET

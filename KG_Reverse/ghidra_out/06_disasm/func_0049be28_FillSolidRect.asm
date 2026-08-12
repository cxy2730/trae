; Function: FillSolidRect
; Entry:    0049be28
; Size:     42 bytes

0049be28  PUSH ESI
0049be29  MOV ESI,ECX
0049be2b  PUSH dword ptr [ESP + 0xc]
0049be2f  PUSH dword ptr [ESI + 0x4]
0049be32  CALL dword ptr [0x004a20a0]
0049be38  XOR EAX,EAX
0049be3a  PUSH EAX
0049be3b  PUSH EAX
0049be3c  PUSH EAX
0049be3d  PUSH dword ptr [ESP + 0x14]
0049be41  PUSH 0x2
0049be43  PUSH EAX
0049be44  PUSH EAX
0049be45  PUSH dword ptr [ESI + 0x4]
0049be48  CALL dword ptr [0x004a20d8]
0049be4e  POP ESI
0049be4f  RET 0x8

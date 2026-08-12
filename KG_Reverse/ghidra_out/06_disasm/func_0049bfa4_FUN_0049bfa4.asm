; Function: FUN_0049bfa4
; Entry:    0049bfa4
; Size:     16 bytes

0049bfa4  CALL 0x0049c724
0049bfa9  XOR ECX,ECX
0049bfab  CMP dword ptr [EAX + 0x2c],ECX
0049bfae  SETZ CL
0049bfb1  MOV EAX,ECX
0049bfb3  RET

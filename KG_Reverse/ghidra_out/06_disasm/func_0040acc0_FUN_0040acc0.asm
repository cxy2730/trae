; Function: FUN_0040acc0
; Entry:    0040acc0
; Size:     39 bytes

0040acc0  PUSH ESI
0040acc1  MOV ESI,ECX
0040acc3  PUSH 0x5
0040acc5  CALL 0x0040ae10
0040acca  CMP EAX,0x1
0040accd  MOV dword ptr [ESI + 0x84],EAX
0040acd3  JNZ 0x0040ace3
0040acd5  MOV EAX,dword ptr [ESI + 0x1c]
0040acd8  PUSH 0x0
0040acda  PUSH 0x0
0040acdc  PUSH EAX
0040acdd  CALL dword ptr [0x004a2540]
0040ace3  POP ESI
0040ace4  RET 0xc

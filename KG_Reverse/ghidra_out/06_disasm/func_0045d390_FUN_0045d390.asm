; Function: FUN_0045d390
; Entry:    0045d390
; Size:     20 bytes

0045d390  MOV EAX,dword ptr [ESP + 0x4]
0045d394  PUSH EAX
0045d395  MOV EAX,dword ptr [ESP + 0xc]
0045d399  MOV ECX,dword ptr [EAX + 0x28]
0045d39c  PUSH ECX
0045d39d  CALL dword ptr [EAX + 0x24]
0045d3a0  ADD ESP,0x8
0045d3a3  RET

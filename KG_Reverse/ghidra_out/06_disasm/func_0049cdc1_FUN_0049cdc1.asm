; Function: FUN_0049cdc1
; Entry:    0049cdc1
; Size:     26 bytes

0049cdc1  MOV ECX,dword ptr [0x03010be0]
0049cdc7  TEST ECX,ECX
0049cdc9  JZ 0x0049cdd8
0049cdcb  PUSH dword ptr [ESP + 0x8]
0049cdcf  PUSH dword ptr [ESP + 0x8]
0049cdd3  CALL 0x0049cc53
0049cdd8  RET 0x8

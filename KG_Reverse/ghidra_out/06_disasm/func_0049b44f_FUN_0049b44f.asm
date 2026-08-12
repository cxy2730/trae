; Function: FUN_0049b44f
; Entry:    0049b44f
; Size:     21 bytes

0049b44f  MOV dword ptr [ECX],0x2f9bdc4
0049b455  MOV ECX,dword ptr [ECX + 0x4]
0049b458  TEST ECX,ECX
0049b45a  JZ 0x0049b463
0049b45c  PUSH ECX
0049b45d  CALL dword ptr [0x004a2088]
0049b463  RET

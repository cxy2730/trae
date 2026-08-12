; Function: FUN_0044fdd0
; Entry:    0044fdd0
; Size:     13 bytes

0044fdd0  MOV EAX,dword ptr [ESP + 0x4]
0044fdd4  TEST EAX,EAX
0044fdd6  JZ 0x0044fddc
0044fdd8  OR dword ptr [EAX + 0x7c],0x1
0044fddc  RET

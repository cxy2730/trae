; Function: FUN_0044ff30
; Entry:    0044ff30
; Size:     16 bytes

0044ff30  MOV EAX,dword ptr [ESP + 0x4]
0044ff34  TEST EAX,EAX
0044ff36  JZ 0x0044ff3f
0044ff38  OR dword ptr [EAX + 0x7c],0x20000
0044ff3f  RET

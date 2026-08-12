; Function: FUN_0044fe00
; Entry:    0044fe00
; Size:     36 bytes

0044fe00  MOV EAX,dword ptr [ESP + 0x4]
0044fe04  TEST EAX,EAX
0044fe06  JZ 0x0044fe23
0044fe08  MOV DL,byte ptr [EAX + 0x158]
0044fe0e  MOV CL,0x8
0044fe10  CMP DL,CL
0044fe12  JNC 0x0044fe23
0044fe14  MOV EDX,dword ptr [EAX + 0x7c]
0044fe17  MOV byte ptr [EAX + 0x159],CL
0044fe1d  OR EDX,0x4
0044fe20  MOV dword ptr [EAX + 0x7c],EDX
0044fe23  RET

; Function: FUN_0044fe30
; Entry:    0044fe30
; Size:     39 bytes

0044fe30  MOV EAX,dword ptr [ESP + 0x4]
0044fe34  TEST EAX,EAX
0044fe36  JZ 0x0044fe51
0044fe38  MOV CL,byte ptr [EAX + 0x154]
0044fe3e  TEST CL,CL
0044fe40  JZ 0x0044fe51
0044fe42  MOV ECX,dword ptr [EAX + 0x7c]
0044fe45  OR ECX,0x2
0044fe48  MOV dword ptr [EAX + 0x7c],ECX
0044fe4b  MOV EAX,0x7
0044fe50  RET
0044fe51  MOV EAX,0x1
0044fe56  RET

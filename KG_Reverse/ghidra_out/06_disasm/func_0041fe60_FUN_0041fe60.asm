; Function: FUN_0041fe60
; Entry:    0041fe60
; Size:     24 bytes

0041fe60  MOV EAX,dword ptr [ESP + 0x4]
0041fe64  TEST EAX,EAX
0041fe66  JLE 0x0041fe75
0041fe68  CMP EAX,0x4e
0041fe6b  JNC 0x0041fe75
0041fe6d  MOV EAX,dword ptr [EAX*0x4 + 0x2fafccc]
0041fe74  RET
0041fe75  XOR EAX,EAX
0041fe77  RET

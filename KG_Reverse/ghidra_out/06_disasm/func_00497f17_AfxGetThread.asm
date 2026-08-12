; Function: AfxGetThread
; Entry:    00497f17
; Size:     21 bytes

00497f17  CALL 0x0049c74a
00497f1c  MOV EAX,dword ptr [EAX + 0x4]
00497f1f  TEST EAX,EAX
00497f21  JNZ 0x00497f2b
00497f23  CALL 0x0049c724
00497f28  MOV EAX,dword ptr [EAX + 0x4]
00497f2b  RET

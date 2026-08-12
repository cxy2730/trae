; Function: GetOwner
; Entry:    00481b7e
; Size:     23 bytes

00481b7e  MOV EAX,dword ptr [ECX + 0x20]
00481b81  TEST EAX,EAX
00481b83  JNZ 0x00481b8e
00481b85  PUSH dword ptr [ECX + 0x1c]
00481b88  CALL dword ptr [0x004a254c]
00481b8e  PUSH EAX
00481b8f  CALL 0x00494bb2
00481b94  RET

; Function: FUN_00493ba4
; Entry:    00493ba4
; Size:     44 bytes

00493ba4  PUSH ESI
00493ba5  MOV ESI,ECX
00493ba7  PUSH 0x0
00493ba9  MOV EAX,dword ptr [ESI]
00493bab  PUSH dword ptr [ESP + 0xc]
00493baf  CALL dword ptr [EAX + 0x28]
00493bb2  PUSH dword ptr [ESI + 0x4]
00493bb5  CALL dword ptr [0x004a2228]
00493bbb  TEST EAX,EAX
00493bbd  POP ESI
00493bbe  JNZ 0x00493bcd
00493bc0  PUSH EAX
00493bc1  CALL dword ptr [0x004a2304]
00493bc7  PUSH EAX
00493bc8  CALL 0x004985b1
00493bcd  RET 0x4

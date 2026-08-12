; Function: FUN_00406fe0
; Entry:    00406fe0
; Size:     20 bytes

00406fe0  MOV EAX,dword ptr [ESP + 0x4]
00406fe4  CMP EAX,0xff000000
00406fe9  JNZ 0x00406ff3
00406feb  PUSH 0xf
00406fed  CALL dword ptr [0x004a2500]
00406ff3  RET

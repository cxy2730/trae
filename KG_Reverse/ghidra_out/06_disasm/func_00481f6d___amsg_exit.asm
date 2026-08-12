; Function: __amsg_exit
; Entry:    00481f6d
; Size:     34 bytes

00481f6d  CMP dword ptr [0x03010f40],0x1
00481f74  JNZ 0x00481f7b
00481f76  CALL 0x004873f3
00481f7b  PUSH dword ptr [ESP + 0x4]
00481f7f  CALL 0x0048742c
00481f84  PUSH 0xff
00481f89  CALL dword ptr [0x02fd8970]

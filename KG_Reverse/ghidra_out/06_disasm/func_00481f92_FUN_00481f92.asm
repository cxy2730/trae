; Function: FUN_00481f92
; Entry:    00481f92
; Size:     35 bytes

00481f92  CMP dword ptr [0x03010f40],0x1
00481f99  JNZ 0x00481fa0
00481f9b  CALL 0x004873f3
00481fa0  PUSH dword ptr [ESP + 0x4]
00481fa4  CALL 0x0048742c
00481fa9  POP ECX
00481faa  PUSH 0xff
00481faf  CALL dword ptr [0x004a22b8]

; Function: FUN_0048dedf
; Entry:    0048dedf
; Size:     23 bytes

0048dedf  CMP dword ptr [ESP + 0x4],-0x1
0048dee4  JZ 0x0048def5
0048dee6  PUSH dword ptr [ESP + 0x8]
0048deea  PUSH dword ptr [ESP + 0x8]
0048deee  CALL 0x0049026f
0048def3  POP ECX
0048def4  POP ECX
0048def5  RET

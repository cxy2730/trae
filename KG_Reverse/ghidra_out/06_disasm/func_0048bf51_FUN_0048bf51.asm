; Function: FUN_0048bf51
; Entry:    0048bf51
; Size:     42 bytes

0048bf51  CMP dword ptr [ESP + 0x4],0x0
0048bf56  PUSH ESI
0048bf57  JZ 0x0048bf79
0048bf59  MOV ESI,dword ptr [ESP + 0xc]
0048bf5d  TEST byte ptr [ESI + 0xd],0x10
0048bf61  JZ 0x0048bf79
0048bf63  PUSH ESI
0048bf64  CALL 0x00484552
0048bf69  AND byte ptr [ESI + 0xd],0xee
0048bf6d  AND dword ptr [ESI + 0x18],0x0
0048bf71  AND dword ptr [ESI],0x0
0048bf74  AND dword ptr [ESI + 0x8],0x0
0048bf78  POP ECX
0048bf79  POP ESI
0048bf7a  RET

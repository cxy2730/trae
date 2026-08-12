; Function: `scalar_deleting_destructor'
; Entry:    0049d2d4
; Size:     28 bytes

0049d2d4  PUSH ESI
0049d2d5  MOV ESI,ECX
0049d2d7  CALL 0x0049db4b
0049d2dc  TEST byte ptr [ESP + 0x8],0x1
0049d2e1  JZ 0x0049d2ea
0049d2e3  PUSH ESI
0049d2e4  CALL 0x00492f40
0049d2e9  POP ECX
0049d2ea  MOV EAX,ESI
0049d2ec  POP ESI
0049d2ed  RET 0x4

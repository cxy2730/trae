; Function: FUN_004943ea
; Entry:    004943ea
; Size:     35 bytes

004943ea  PUSH ESI
004943eb  MOV ESI,ECX
004943ed  TEST byte ptr [ESI + 0x24],0x18
004943f1  JZ 0x004943fc
004943f3  MOV EAX,dword ptr [ESI]
004943f5  PUSH dword ptr [ESP + 0x8]
004943f9  CALL dword ptr [EAX + 0x74]
004943fc  PUSH dword ptr [ESP + 0x8]
00494400  PUSH dword ptr [ESI + 0x1c]
00494403  CALL dword ptr [0x004a2610]
00494409  POP ESI
0049440a  RET 0x4

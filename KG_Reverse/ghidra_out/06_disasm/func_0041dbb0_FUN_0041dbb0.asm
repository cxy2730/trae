; Function: FUN_0041dbb0
; Entry:    0041dbb0
; Size:     36 bytes

0041dbb0  PUSH ESI
0041dbb1  MOV ESI,ECX
0041dbb3  CALL dword ptr [0x004a24ac]
0041dbb9  PUSH EAX
0041dbba  CALL 0x00494bb2
0041dbbf  CMP EAX,ESI
0041dbc1  JNZ 0x0041dbc9
0041dbc3  CALL dword ptr [0x004a24a8]
0041dbc9  MOV ECX,ESI
0041dbcb  CALL 0x00494b19
0041dbd0  POP ESI
0041dbd1  RET 0xc

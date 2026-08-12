; Function: FUN_00487efe
; Entry:    00487efe
; Size:     13 bytes

00487efe  CMP word ptr [ESP],0x27f
00487f04  JZ 0x00487f09
00487f06  FLDCW word ptr [ESP]
00487f09  POP EDX
00487f0a  RET

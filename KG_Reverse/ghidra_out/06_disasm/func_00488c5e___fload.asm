; Function: __fload
; Entry:    00488c5e
; Size:     60 bytes

00488c5e  PUSH EBP
00488c5f  MOV EBP,ESP
00488c61  ADD ESP,-0xc
00488c64  PUSH EBX
00488c65  MOV AX,word ptr [EBP + 0xe]
00488c69  MOV BX,AX
00488c6c  AND AX,0x7ff0
00488c70  CMP AX,0x7ff0
00488c74  JNZ 0x00488c94
00488c76  OR BX,0x7fff
00488c7b  MOV word ptr [EBP + -0x2],BX
00488c7f  MOV EAX,dword ptr [EBP + 0xc]
00488c82  MOV EBX,dword ptr [EBP + 0x8]
00488c85  SHLD EAX,EBX,0xb
00488c89  MOV dword ptr [EBP + -0x6],EAX
00488c8c  MOV dword ptr [EBP + -0xa],EBX
00488c8f  FLD extended double ptr [EBP + -0xa]
00488c92  JMP 0x00488c97
00488c94  FLD double ptr [EBP + 0x8]
00488c97  POP EBX
00488c98  LEAVE
00488c99  RET

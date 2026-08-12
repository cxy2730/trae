; Function: __cintrindisp1
; Entry:    00488a6e
; Size:     61 bytes

00488a6e  PUSH EBP
00488a6f  MOV EBP,ESP
00488a71  ADD ESP,0xfffffd30
00488a77  PUSH EBX
00488a78  FSTCW word ptr [EBP + 0xffffff5c]
00488a7f  CMP dword ptr [0x02fdbe28],0x0
00488a86  JZ 0x00488aa3
00488a88  CALL 0x00487c30
00488a8d  OR byte ptr [EBP + 0xfffffd38],0x1
00488a94  AND byte ptr [EBP + 0xfffffd38],0xfd
00488a9b  CALL 0x00488afa
00488aa0  POP EBX
00488aa1  LEAVE
00488aa2  RET
00488aa3  FST double ptr [EBP + 0xffffff7a]
00488aa9  JMP 0x00488a88

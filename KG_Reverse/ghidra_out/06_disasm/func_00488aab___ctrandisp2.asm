; Function: __ctrandisp2
; Entry:    00488aab
; Size:     72 bytes

00488aab  PUSH EBP
00488aac  MOV EBP,ESP
00488aae  ADD ESP,0xfffffd30
00488ab4  PUSH EBX
00488ab5  PUSH dword ptr [EBP + 0xc]
00488ab8  PUSH dword ptr [EBP + 0x8]
00488abb  CALL 0x00488c5e
00488ac0  ADD ESP,0x8
00488ac3  PUSH dword ptr [EBP + 0x14]
00488ac6  PUSH dword ptr [EBP + 0x10]
00488ac9  CALL 0x00488c5e
00488ace  ADD ESP,0x8
00488ad1  FSTCW word ptr [EBP + 0xffffff5c]
00488ad8  OR byte ptr [EBP + 0xfffffd38],0x2
00488adf  MOV byte ptr [EBP + 0xffffff71],0x1
00488ae6  CALL 0x00487c97
00488aeb  CALL 0x00488af3
00488af0  POP EBX
00488af1  LEAVE
00488af2  RET

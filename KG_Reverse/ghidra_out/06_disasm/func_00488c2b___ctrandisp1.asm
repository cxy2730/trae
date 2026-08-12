; Function: __ctrandisp1
; Entry:    00488c2b
; Size:     51 bytes

00488c2b  PUSH EBP
00488c2c  MOV EBP,ESP
00488c2e  ADD ESP,0xfffffd30
00488c34  PUSH EBX
00488c35  PUSH dword ptr [EBP + 0xc]
00488c38  PUSH dword ptr [EBP + 0x8]
00488c3b  CALL 0x00488c5e
00488c40  ADD ESP,0x8
00488c43  FSTCW word ptr [EBP + 0xffffff5c]
00488c4a  AND byte ptr [EBP + 0xfffffd38],0xfd
00488c51  CALL 0x00487c30
00488c56  CALL 0x00488af3
00488c5b  POP EBX
00488c5c  LEAVE
00488c5d  RET

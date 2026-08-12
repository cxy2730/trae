; Function: FUN_00401c3a
; Entry:    00401c3a
; Size:     39 bytes

00401c3a  PUSH EBP
00401c3b  MOV EBP,ESP
00401c3d  ADD ESP,-0xc
00401c40  FNSTCW word ptr [EBP + -0x2]
00401c43  MOV AX,word ptr [EBP + -0x2]
00401c47  OR AH,0xc
00401c4a  MOV word ptr [EBP + -0x4],AX
00401c4e  FLDCW word ptr [EBP + -0x4]
00401c51  FISTP qword ptr [EBP + -0xc]
00401c54  FLDCW word ptr [EBP + -0x2]
00401c57  MOV EAX,dword ptr [EBP + -0xc]
00401c5a  MOV EDX,dword ptr [EBP + -0x8]
00401c5d  MOV ESP,EBP
00401c5f  POP EBP
00401c60  RET

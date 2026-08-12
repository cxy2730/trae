; Function: Catch@00431dc6
; Entry:    00431dc6
; Size:     24 bytes

00431dc6  MOV EAX,dword ptr [EBP + 0x8]
00431dc9  PUSH EAX
00431dca  MOV dword ptr [EBP + -0x18],EAX
00431dcd  CALL 0x00430aa0
00431dd2  MOV dword ptr [EBP + 0xc],EAX
00431dd5  ADD ESP,0x4
00431dd8  MOV EAX,0x431df1
00431ddd  RET

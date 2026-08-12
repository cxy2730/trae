; Function: FUN_00432b50
; Entry:    00432b50
; Size:     20 bytes

00432b50  MOV EAX,dword ptr [ESP + 0x8]
00432b54  MOV EDX,dword ptr [ESP + 0x4]
00432b58  PUSH EAX
00432b59  PUSH EDX
00432b5a  CALL 0x00432b10
00432b5f  MOV EAX,dword ptr [EAX]
00432b61  RET 0x8

; Function: FUN_00498dd8
; Entry:    00498dd8
; Size:     14 bytes

00498dd8  MOV EAX,dword ptr [ECX]
00498dda  TEST EAX,EAX
00498ddc  JZ 0x00498de5
00498dde  PUSH EAX
00498ddf  CALL dword ptr [0x004a22c0]
00498de5  RET

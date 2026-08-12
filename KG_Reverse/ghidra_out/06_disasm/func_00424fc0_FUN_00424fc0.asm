; Function: FUN_00424fc0
; Entry:    00424fc0
; Size:     28 bytes

00424fc0  CMP dword ptr [ESP + 0x8],0x4
00424fc5  JBE 0x00424fd9
00424fc7  MOV EAX,dword ptr [ESP + 0x4]
00424fcb  CMP dword ptr [EAX],0x6468544d
00424fd1  JNZ 0x00424fd9
00424fd3  MOV EAX,0x1
00424fd8  RET
00424fd9  XOR EAX,EAX
00424fdb  RET

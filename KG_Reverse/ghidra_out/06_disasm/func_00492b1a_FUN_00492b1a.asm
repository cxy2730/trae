; Function: FUN_00492b1a
; Entry:    00492b1a
; Size:     25 bytes

00492b1a  MOV EAX,dword ptr [ESP + 0x4]
00492b1e  MOV EDX,dword ptr [ECX + 0x10]
00492b21  MOV dword ptr [EAX],EDX
00492b23  DEC dword ptr [ECX + 0xc]
00492b26  MOV dword ptr [ECX + 0x10],EAX
00492b29  JNZ 0x00492b30
00492b2b  CALL 0x00492a79
00492b30  RET 0x4

; Function: __abnormal_termination
; Entry:    00482b6e
; Size:     35 bytes

00482b6e  XOR EAX,EAX
00482b70  MOV ECX,dword ptr FS:[0x0]
00482b77  CMP dword ptr [ECX + 0x4],0x482ae4
00482b7e  JNZ 0x00482b90
00482b80  MOV EDX,dword ptr [ECX + 0xc]
00482b83  MOV EDX,dword ptr [EDX + 0xc]
00482b86  CMP dword ptr [ECX + 0x8],EDX
00482b89  JNZ 0x00482b90
00482b8b  MOV EAX,0x1
00482b90  RET

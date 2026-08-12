; Function: FUN_00469bc0
; Entry:    00469bc0
; Size:     34 bytes

00469bc0  MOV EAX,[0x02fecb84]
00469bc5  TEST EAX,EAX
00469bc7  JZ 0x00469bdd
00469bc9  MOV ECX,dword ptr [ESP + 0xc]
00469bcd  MOV EDX,dword ptr [ESP + 0x8]
00469bd1  PUSH ECX
00469bd2  MOV ECX,dword ptr [ESP + 0x8]
00469bd6  PUSH EDX
00469bd7  PUSH ECX
00469bd8  CALL EAX
00469bda  RET 0xc
00469bdd  XOR EAX,EAX
00469bdf  RET 0xc

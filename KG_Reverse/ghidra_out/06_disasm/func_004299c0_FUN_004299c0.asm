; Function: FUN_004299c0
; Entry:    004299c0
; Size:     38 bytes

004299c0  TEST dword ptr [ECX],0x18000
004299c6  JNZ 0x004299d7
004299c8  MOV EAX,dword ptr [ESP + 0x4]
004299cc  MOV dword ptr [EAX],0x0
004299d2  XOR EAX,EAX
004299d4  RET 0x4
004299d7  MOV EAX,dword ptr [ESP + 0x4]
004299db  MOV EDX,dword ptr [ECX + 0x34]
004299de  MOV dword ptr [EAX],EDX
004299e0  MOV EAX,dword ptr [ECX + 0x30]
004299e3  RET 0x4

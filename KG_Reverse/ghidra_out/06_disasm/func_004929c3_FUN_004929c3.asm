; Function: FUN_004929c3
; Entry:    004929c3
; Size:     25 bytes

004929c3  MOV EAX,dword ptr [ESP + 0x4]
004929c7  MOV EDX,dword ptr [ECX + 0x10]
004929ca  MOV dword ptr [EAX],EDX
004929cc  DEC dword ptr [ECX + 0xc]
004929cf  MOV dword ptr [ECX + 0x10],EAX
004929d2  JNZ 0x004929d9
004929d4  CALL 0x004929a3
004929d9  RET 0x4

; Function: FUN_004975a7
; Entry:    004975a7
; Size:     27 bytes

004975a7  MOV EAX,dword ptr [ECX + 0x38]
004975aa  TEST EAX,EAX
004975ac  JNZ 0x004975b8
004975ae  PUSH dword ptr [ECX + 0x1c]
004975b1  CALL dword ptr [0x004a25d0]
004975b7  RET
004975b8  MOV EDX,dword ptr [EAX]
004975ba  MOV ECX,EAX
004975bc  JMP dword ptr [EDX + 0xa4]

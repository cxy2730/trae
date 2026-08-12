; Function: FUN_004975c2
; Entry:    004975c2
; Size:     39 bytes

004975c2  MOV EAX,dword ptr [ECX + 0x38]
004975c5  TEST EAX,EAX
004975c7  JNZ 0x004975d8
004975c9  PUSH dword ptr [ESP + 0x4]
004975cd  PUSH dword ptr [ECX + 0x1c]
004975d0  CALL dword ptr [0x004a24f0]
004975d6  JMP 0x004975e6
004975d8  MOV EDX,dword ptr [EAX]
004975da  PUSH dword ptr [ESP + 0x4]
004975de  MOV ECX,EAX
004975e0  CALL dword ptr [EDX + 0xa8]
004975e6  RET 0x4

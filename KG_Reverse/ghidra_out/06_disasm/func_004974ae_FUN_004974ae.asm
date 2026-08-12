; Function: FUN_004974ae
; Entry:    004974ae
; Size:     39 bytes

004974ae  MOV EAX,dword ptr [ECX + 0x38]
004974b1  TEST EAX,EAX
004974b3  JNZ 0x004974c4
004974b5  PUSH dword ptr [ESP + 0x4]
004974b9  PUSH dword ptr [ECX + 0x1c]
004974bc  CALL dword ptr [0x004a2660]
004974c2  JMP 0x004974d2
004974c4  MOV EDX,dword ptr [EAX]
004974c6  PUSH dword ptr [ESP + 0x4]
004974ca  MOV ECX,EAX
004974cc  CALL dword ptr [EDX + 0x80]
004974d2  RET 0x4

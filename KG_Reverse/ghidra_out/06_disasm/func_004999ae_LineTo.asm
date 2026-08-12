; Function: LineTo
; Entry:    004999ae
; Size:     53 bytes

004999ae  PUSH ESI
004999af  MOV ESI,ECX
004999b1  MOV EAX,dword ptr [ESI + 0x8]
004999b4  TEST EAX,EAX
004999b6  JZ 0x004999ce
004999b8  CMP dword ptr [ESI + 0x4],EAX
004999bb  JZ 0x004999ce
004999bd  PUSH 0x0
004999bf  PUSH dword ptr [ESP + 0x10]
004999c3  PUSH dword ptr [ESP + 0x10]
004999c7  PUSH EAX
004999c8  CALL dword ptr [0x004a2030]
004999ce  PUSH dword ptr [ESP + 0xc]
004999d2  PUSH dword ptr [ESP + 0xc]
004999d6  PUSH dword ptr [ESI + 0x4]
004999d9  CALL dword ptr [0x004a202c]
004999df  POP ESI
004999e0  RET 0x8

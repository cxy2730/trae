; Function: FUN_0047cc60
; Entry:    0047cc60
; Size:     44 bytes

0047cc60  MOV ECX,dword ptr [ESP + 0x8]
0047cc64  TEST ECX,ECX
0047cc66  JLE 0x0047cc8b
0047cc68  MOV EAX,dword ptr [ESP + 0x4]
0047cc6c  FLD float ptr [EAX]
0047cc6e  FSUB float ptr [EAX + 0x1200]
0047cc74  FLD float ptr [EAX + 0x1200]
0047cc7a  FADD float ptr [EAX]
0047cc7c  ADD EAX,0x4
0047cc7f  DEC ECX
0047cc80  FSTP float ptr [EAX + -0x4]
0047cc83  FSTP float ptr [EAX + 0x11fc]
0047cc89  JNZ 0x0047cc6c
0047cc8b  RET

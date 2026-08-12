; Function: FUN_0047cb50
; Entry:    0047cb50
; Size:     33 bytes

0047cb50  MOV EDX,dword ptr [ESP + 0xc]
0047cb54  TEST EDX,EDX
0047cb56  JLE 0x0047cb70
0047cb58  MOV EAX,dword ptr [ESP + 0x4]
0047cb5c  MOV ECX,dword ptr [ESP + 0x8]
0047cb60  SUB ECX,EAX
0047cb62  FLD float ptr [ECX + EAX*0x1]
0047cb65  FADD float ptr [EAX]
0047cb67  ADD EAX,0x4
0047cb6a  DEC EDX
0047cb6b  FSTP float ptr [EAX + -0x4]
0047cb6e  JNZ 0x0047cb62
0047cb70  RET

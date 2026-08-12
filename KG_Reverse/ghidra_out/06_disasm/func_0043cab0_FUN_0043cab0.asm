; Function: FUN_0043cab0
; Entry:    0043cab0
; Size:     147 bytes

0043cab0  MOV EAX,dword ptr [ESP + 0x4]
0043cab4  MOV ECX,dword ptr [EAX + 0x9c]
0043caba  TEST ECX,ECX
0043cabc  JNZ 0x0043cb42
0043cac2  MOV ECX,dword ptr [ESP + 0x8]
0043cac6  ADD ECX,0x7
0043cac9  CMP ECX,0x9
0043cacc  JA 0x0043cb38
0043cace  JMP dword ptr [ECX*0x4 + 0x43cb44]
0043cad5  MOV dword ptr [EAX + 0x9c],0x2fb1350
0043cadf  RET
0043cae0  MOV dword ptr [EAX + 0x9c],0x2fb1338
0043caea  RET
0043caeb  MOV dword ptr [EAX + 0x9c],0x2fb1328
0043caf5  RET
0043caf6  MOV dword ptr [EAX + 0x9c],0x2fb1310
0043cb00  RET
0043cb01  MOV dword ptr [EAX + 0x9c],0x2fb12fc
0043cb0b  RET
0043cb0c  MOV dword ptr [EAX + 0x9c],0x2fb12e8
0043cb16  RET
0043cb17  MOV dword ptr [EAX + 0x9c],0x2fb12dc
0043cb21  RET
0043cb22  MOV dword ptr [EAX + 0x9c],0x2fb12c0
0043cb2c  RET
0043cb2d  MOV dword ptr [EAX + 0x9c],0x2fb12a8
0043cb37  RET
0043cb38  MOV dword ptr [EAX + 0x9c],0x2fb128c
0043cb42  RET

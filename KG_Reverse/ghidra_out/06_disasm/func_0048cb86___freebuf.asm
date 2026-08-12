; Function: __freebuf
; Entry:    0048cb86
; Size:     43 bytes

0048cb86  PUSH ESI
0048cb87  MOV ESI,dword ptr [ESP + 0x8]
0048cb8b  MOV EAX,dword ptr [ESI + 0xc]
0048cb8e  TEST AL,0x83
0048cb90  JZ 0x0048cbaf
0048cb92  TEST AL,0x8
0048cb94  JZ 0x0048cbaf
0048cb96  PUSH dword ptr [ESI + 0x8]
0048cb99  CALL 0x004837fe
0048cb9e  AND word ptr [ESI + 0xc],0xfbf7
0048cba4  XOR EAX,EAX
0048cba6  POP ECX
0048cba7  MOV dword ptr [ESI],EAX
0048cba9  MOV dword ptr [ESI + 0x8],EAX
0048cbac  MOV dword ptr [ESI + 0x4],EAX
0048cbaf  POP ESI
0048cbb0  RET

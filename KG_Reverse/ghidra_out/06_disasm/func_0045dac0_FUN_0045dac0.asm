; Function: FUN_0045dac0
; Entry:    0045dac0
; Size:     46 bytes

0045dac0  MOV EAX,dword ptr [ESP + 0x4]
0045dac4  MOV ECX,dword ptr [0x02fb3338]
0045daca  MOV EDX,dword ptr [ESP + 0x8]
0045dace  MOV dword ptr [EAX],ECX
0045dad0  MOV EAX,[0x02fb333c]
0045dad5  MOV ECX,dword ptr [ESP + 0xc]
0045dad9  MOV dword ptr [EDX],EAX
0045dadb  MOV EDX,dword ptr [ESP + 0x10]
0045dadf  XOR EAX,EAX
0045dae1  MOV dword ptr [ECX],0x2fb3340
0045dae7  MOV dword ptr [EDX],0x2fb4340
0045daed  RET

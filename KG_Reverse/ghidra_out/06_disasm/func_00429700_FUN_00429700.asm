; Function: FUN_00429700
; Entry:    00429700
; Size:     45 bytes

00429700  MOV EAX,ECX
00429702  XOR ECX,ECX
00429704  MOV dword ptr [EAX],0x1
0042970a  MOV dword ptr [EAX + 0x4],ECX
0042970d  MOV dword ptr [EAX + 0x8],0xff000000
00429714  MOV byte ptr [EAX + 0xc],CL
00429717  MOV word ptr [EAX + 0x2c],0x28
0042971d  MOV word ptr [EAX + 0x2e],0x9
00429723  MOV dword ptr [EAX + 0x30],ECX
00429726  MOV dword ptr [EAX + 0x34],ECX
00429729  MOV dword ptr [EAX + 0x38],ECX
0042972c  RET

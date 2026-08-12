; Function: FUN_0040fe90
; Entry:    0040fe90
; Size:     23 bytes

0040fe90  MOV EAX,dword ptr [ECX + 0x4]
0040fe93  MOV dword ptr [ECX],0x2f95644
0040fe99  TEST EAX,EAX
0040fe9b  JNZ 0x0040fea6
0040fe9d  MOV ECX,dword ptr [ECX + 0xc]
0040fea0  TEST ECX,ECX
0040fea2  JZ 0x0040fea6
0040fea4  JMP ECX
0040fea6  RET

; Function: FUN_00471bd0
; Entry:    00471bd0
; Size:     56 bytes

00471bd0  PUSH ESI
00471bd1  MOV ESI,dword ptr [ESP + 0x8]
00471bd5  PUSH ESI
00471bd6  CALL 0x00474020
00471bdb  MOV dword ptr [ESI + 0x8],0x1f40
00471be2  MOV EAX,[0x03006ce8]
00471be7  ADD ESP,0x4
00471bea  CMP EAX,0x1
00471bed  JZ 0x00471bf6
00471bef  MOV dword ptr [ESI + 0xc],0x8
00471bf6  CMP dword ptr [0x03006ce8],0x3
00471bfd  JNZ 0x00471c06
00471bff  MOV dword ptr [ESI + 0x14],0xa
00471c06  POP ESI
00471c07  RET

; Function: FUN_0048b920
; Entry:    0048b920
; Size:     86 bytes

0048b920  PUSH ESI
0048b921  MOV ESI,dword ptr [ESP + 0x8]
0048b925  PUSH 0x8000
0048b92a  PUSH 0x0
0048b92c  PUSH dword ptr [ESI + 0x10]
0048b92f  CALL dword ptr [0x004a2264]
0048b935  CMP dword ptr [0x02fdbaf0],ESI
0048b93b  JNZ 0x0048b945
0048b93d  MOV EAX,dword ptr [ESI + 0x4]
0048b940  MOV [0x02fdbaf0],EAX
0048b945  CMP ESI,0x2fd9ad0
0048b94b  JZ 0x0048b96d
0048b94d  MOV EAX,dword ptr [ESI + 0x4]
0048b950  MOV ECX,dword ptr [ESI]
0048b952  PUSH ESI
0048b953  PUSH 0x0
0048b955  MOV dword ptr [EAX],ECX
0048b957  MOV EAX,dword ptr [ESI]
0048b959  MOV ECX,dword ptr [ESI + 0x4]
0048b95c  MOV dword ptr [EAX + 0x4],ECX
0048b95f  PUSH dword ptr [0x03014ea4]
0048b965  CALL dword ptr [0x004a22e8]
0048b96b  POP ESI
0048b96c  RET
0048b96d  OR dword ptr [0x02fd9ae0],0xffffffff
0048b974  POP ESI
0048b975  RET

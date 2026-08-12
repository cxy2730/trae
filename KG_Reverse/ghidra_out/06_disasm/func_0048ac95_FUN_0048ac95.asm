; Function: FUN_0048ac95
; Entry:    0048ac95
; Size:     72 bytes

0048ac95  PUSH 0x140
0048ac9a  PUSH 0x0
0048ac9c  PUSH dword ptr [0x03014ea4]
0048aca2  CALL dword ptr [0x004a22f4]
0048aca8  TEST EAX,EAX
0048acaa  MOV [0x03014e9c],EAX
0048acaf  JNZ 0x0048acb2
0048acb1  RET
0048acb2  MOV ECX,dword ptr [ESP + 0x4]
0048acb6  AND dword ptr [0x03014e94],0x0
0048acbd  AND dword ptr [0x03014e98],0x0
0048acc4  PUSH 0x1
0048acc6  MOV [0x03014e90],EAX
0048accb  MOV dword ptr [0x03014ea0],ECX
0048acd1  MOV dword ptr [0x03014e88],0x10
0048acdb  POP EAX
0048acdc  RET

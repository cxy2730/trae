; Function: FUN_0048a334
; Entry:    0048a334
; Size:     165 bytes

0048a334  PUSH EBP
0048a335  MOV EBP,ESP
0048a337  PUSH -0x1
0048a339  PUSH 0x2f9d090
0048a33e  PUSH 0x485274
0048a343  MOV EAX,FS:[0x0]
0048a349  PUSH EAX
0048a34a  MOV dword ptr FS:[0x0],ESP
0048a351  SUB ESP,0x1c
0048a354  PUSH EBX
0048a355  PUSH ESI
0048a356  PUSH EDI
0048a357  MOV dword ptr [EBP + -0x18],ESP
0048a35a  MOV EBX,dword ptr [EBP + 0x18]
0048a35d  MOV dword ptr [EBP + -0x2c],EBX
0048a360  AND dword ptr [EBP + -0x24],0x0
0048a364  MOV ESI,dword ptr [EBP + 0xc]
0048a367  MOV EAX,dword ptr [ESI + -0x4]
0048a36a  MOV dword ptr [EBP + -0x28],EAX
0048a36d  CALL 0x004871ba
0048a372  MOV EAX,dword ptr [EAX + 0x6c]
0048a375  MOV dword ptr [EBP + -0x1c],EAX
0048a378  CALL 0x004871ba
0048a37d  MOV EAX,dword ptr [EAX + 0x70]
0048a380  MOV dword ptr [EBP + -0x20],EAX
0048a383  CALL 0x004871ba
0048a388  MOV EDI,dword ptr [EBP + 0x8]
0048a38b  MOV dword ptr [EAX + 0x6c],EDI
0048a38e  CALL 0x004871ba
0048a393  MOV ECX,dword ptr [EBP + 0x10]
0048a396  MOV dword ptr [EAX + 0x70],ECX
0048a399  AND dword ptr [EBP + -0x4],0x0
0048a39d  MOV dword ptr [EBP + -0x4],0x1
0048a3a4  PUSH dword ptr [EBP + 0x20]
0048a3a7  PUSH dword ptr [EBP + 0x1c]
0048a3aa  PUSH EBX
0048a3ab  PUSH dword ptr [EBP + 0x14]
0048a3ae  PUSH ESI
0048a3af  CALL 0x004828a5
0048a3b4  ADD ESP,0x14
0048a3b7  MOV dword ptr [EBP + -0x2c],EAX
0048a3ba  AND dword ptr [EBP + -0x4],0x0
0048a3be  OR dword ptr [EBP + -0x4],0xffffffff
0048a3c2  CALL 0x0048a401
0048a3c7  MOV EAX,dword ptr [EBP + -0x2c]
0048a3ca  MOV ECX,dword ptr [EBP + -0x10]
0048a3cd  MOV dword ptr FS:[0x0],ECX
0048a3d4  POP EDI
0048a3d5  POP ESI
0048a3d6  POP EBX
0048a3d7  LEAVE
0048a3d8  RET

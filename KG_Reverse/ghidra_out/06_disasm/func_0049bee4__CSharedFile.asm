; Function: ~CSharedFile
; Entry:    0049bee4
; Size:     62 bytes

0049bee4  MOV EAX,0x4a1a6c
0049bee9  CALL 0x004858b8
0049beee  PUSH ECX
0049beef  PUSH ESI
0049bef0  MOV ESI,ECX
0049bef2  MOV dword ptr [EBP + -0x10],ESI
0049bef5  MOV dword ptr [ESI],0x2f9c2b0
0049befb  AND dword ptr [EBP + -0x4],0x0
0049beff  CMP dword ptr [ESI + 0x20],0x0
0049bf03  JZ 0x0049bf0a
0049bf05  CALL 0x0049ab34
0049bf0a  OR dword ptr [EBP + -0x4],0xffffffff
0049bf0e  MOV ECX,ESI
0049bf10  CALL 0x0049a94d
0049bf15  MOV ECX,dword ptr [EBP + -0xc]
0049bf18  POP ESI
0049bf19  MOV dword ptr FS:[0x0],ECX
0049bf20  LEAVE
0049bf21  RET

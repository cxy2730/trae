; Function: Catch@00494dd2
; Entry:    00494dd2
; Size:     60 bytes

00494dd2  MOV EAX,dword ptr [EBP + 0x8]
00494dd5  MOV dword ptr [EBP + -0x4c],EAX
00494dd8  MOV EAX,dword ptr [EBP + 0xc]
00494ddb  MOV dword ptr [EBP + -0x48],EAX
00494dde  MOV EAX,dword ptr [EBP + 0x10]
00494de1  MOV dword ptr [EBP + -0x44],EAX
00494de4  MOV EAX,dword ptr [EBP + 0x14]
00494de7  MOV dword ptr [EBP + -0x40],EAX
00494dea  CALL 0x00497f17
00494def  MOV EDX,dword ptr [EAX]
00494df1  LEA ECX,[EBP + -0x4c]
00494df4  PUSH ECX
00494df5  MOV ECX,EAX
00494df7  PUSH dword ptr [EBP + -0x20]
00494dfa  CALL dword ptr [EDX + 0x6c]
00494dfd  MOV ECX,dword ptr [EBP + -0x20]
00494e00  MOV dword ptr [EBP + -0x14],EAX
00494e03  CALL 0x00493701
00494e08  MOV EAX,0x494d40
00494e0d  RET

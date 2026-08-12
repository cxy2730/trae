; Function: FUN_00450bb0
; Entry:    00450bb0
; Size:     56 bytes

00450bb0  MOV EAX,dword ptr [ESP + 0x4]
00450bb4  TEST EAX,EAX
00450bb6  JZ 0x00450be7
00450bb8  MOV EAX,dword ptr [ESP + 0x8]
00450bbc  TEST EAX,EAX
00450bbe  JZ 0x00450be7
00450bc0  MOV ECX,dword ptr [ESP + 0xc]
00450bc4  TEST ECX,ECX
00450bc6  JZ 0x00450be7
00450bc8  PUSH ESI
00450bc9  MOV ESI,dword ptr [ECX]
00450bcb  LEA EDX,[EAX + 0x94]
00450bd1  MOV dword ptr [EAX + 0x94],ESI
00450bd7  MOV CL,byte ptr [ECX + 0x4]
00450bda  POP ESI
00450bdb  MOV byte ptr [EDX + 0x4],CL
00450bde  MOV ECX,dword ptr [EAX + 0x8]
00450be1  OR ECX,0x2
00450be4  MOV dword ptr [EAX + 0x8],ECX
00450be7  RET

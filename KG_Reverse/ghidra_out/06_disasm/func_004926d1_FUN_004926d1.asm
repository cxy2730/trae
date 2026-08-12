; Function: FUN_004926d1
; Entry:    004926d1
; Size:     45 bytes

004926d1  MOV EAX,0x4a1b0c
004926d6  CALL 0x004858b8
004926db  PUSH ECX
004926dc  MOV dword ptr [EBP + -0x10],ECX
004926df  MOV dword ptr [ECX],0x2f9c564
004926e5  PUSH dword ptr [ECX + 0x4]
004926e8  AND dword ptr [EBP + -0x4],0x0
004926ec  CALL 0x00492f40
004926f1  POP ECX
004926f2  MOV ECX,dword ptr [EBP + -0xc]
004926f5  MOV dword ptr FS:[0x0],ECX
004926fc  LEAVE
004926fd  RET

; Function: FUN_004889ac
; Entry:    004889ac
; Size:     35 bytes

004889ac  PUSH EBP
004889ad  MOV EBP,ESP
004889af  PUSH ECX
004889b0  FSTCW word ptr [EBP + -0x4]
004889b4  MOV EAX,dword ptr [EBP + 0xc]
004889b7  MOV ECX,EAX
004889b9  AND EAX,dword ptr [EBP + 0x8]
004889bc  NOT ECX
004889be  AND ECX,dword ptr [EBP + -0x4]
004889c1  OR ECX,EAX
004889c3  MOV dword ptr [EBP + 0xc],ECX
004889c6  FLDCW word ptr [EBP + 0xc]
004889c9  MOVSX EAX,word ptr [EBP + -0x4]
004889cd  LEAVE
004889ce  RET

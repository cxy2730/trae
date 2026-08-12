// Function: FUN_004377f0
// Entry:    004377f0
// Size:     98 bytes
// Conv:     unknown
// Signature: undefined FUN_004377f0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004377f0(LPVOID param_1)

{
  HANDLE hObject;
  LPVOID local_4;
  
  if ((((*(int *)((int)param_1 + 0xcc) != 1) && (*(int *)((int)param_1 + 0x1c) != 0)) &&
      (*(int *)((int)param_1 + 0xb0) != 0)) && (*(int *)((int)param_1 + 0xbc) != 5)) {
    *(int *)((int)param_1 + 0xb4) = *(int *)((int)param_1 + 0xb0);
    *(undefined4 *)((int)param_1 + 0x94) = 0;
    *(undefined4 *)((int)param_1 + 0xbc) = 5;
    local_4 = param_1;
    hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00437890,
                           param_1,0,(LPDWORD)&local_4);
    CloseHandle(hObject);
  }
  return;
}


// Function: FUN_00495080
// Entry:    00495080
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_00495080(void)
// Decompiled by Ghidra 12.1.2


void FUN_00495080(int param_1)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  
  iVar1 = FUN_0049ccac(&LAB_0049c02d);
  if (*(int *)(iVar1 + 0x14) != param_1) {
    if (*(int *)(iVar1 + 0x2c) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExA(5,FUN_00494e8a,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(iVar1 + 0x2c) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
        FUN_0049132a();
      }
    }
    *(int *)(iVar1 + 0x14) = param_1;
  }
  return;
}


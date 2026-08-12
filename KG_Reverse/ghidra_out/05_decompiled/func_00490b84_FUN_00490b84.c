// Function: FUN_00490b84
// Entry:    00490b84
// Size:     126 bytes
// Conv:     unknown
// Signature: undefined FUN_00490b84(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00490b84(undefined4 param_1)

{
  LONG LVar1;
  
  if (DAT_03011370 != 2) {
    if (DAT_03011370 == 0) {
      LVar1 = InterlockedExchange(&DAT_03011370,1);
      if (LVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_03011358);
        FUN_00483c3b(&LAB_00490c02);
        DAT_03011370 = 2;
        goto LAB_00490bf6;
      }
      if (LVar1 == 2) {
        DAT_03011370 = 2;
      }
    }
    while (DAT_03011370 == 1) {
      Sleep(1);
    }
    if (DAT_03011370 != 2) {
      return param_1;
    }
  }
LAB_00490bf6:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_03011358);
  return param_1;
}


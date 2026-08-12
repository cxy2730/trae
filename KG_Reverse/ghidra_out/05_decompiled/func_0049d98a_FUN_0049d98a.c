// Function: FUN_0049d98a
// Entry:    0049d98a
// Size:     112 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d98a(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049d98a(int param_1)

{
  int *piVar1;
  
  if (DAT_03010f0c == 0) {
    FUN_0049d8f7();
  }
  if (DAT_03010f08 == 0) {
    piVar1 = &DAT_03010d10 + param_1;
    if ((&DAT_03010d10)[param_1] == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_03010d58);
      if (*piVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_03010d70 + param_1 * 0x18));
        *piVar1 = *piVar1 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_03010d58);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_03010d70 + param_1 * 0x18));
  }
  return;
}


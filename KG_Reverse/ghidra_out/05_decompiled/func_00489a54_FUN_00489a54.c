// Function: FUN_00489a54
// Entry:    00489a54
// Size:     97 bytes
// Conv:     unknown
// Signature: undefined FUN_00489a54(void)
// Decompiled by Ghidra 12.1.2


void FUN_00489a54(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = (int *)(&DAT_02fd97e0 + param_1 * 4);
  if (*(int *)(&DAT_02fd97e0 + param_1 * 4) == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_00489a54(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_004837fe();
    }
    FUN_00489ab5(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}


// Function: FUN_0048fdcf
// Entry:    0048fdcf
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_0048fdcf(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048fdcf(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_03014ec0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_00489a54(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_00489ab5(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_03014ec0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}


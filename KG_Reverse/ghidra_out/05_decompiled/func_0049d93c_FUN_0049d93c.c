// Function: FUN_0049d93c
// Entry:    0049d93c
// Size:     78 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d93c(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049d93c(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  
  if ((DAT_03010f0c != 0) && (DAT_03010f0c = DAT_03010f0c + -1, DAT_03010f08 == 0)) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_03010d58);
    piVar1 = &DAT_03010d10;
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_03010d70;
    do {
      if (*piVar1 != 0) {
        DeleteCriticalSection(lpCriticalSection);
        *piVar1 = *piVar1 + -1;
      }
      lpCriticalSection = lpCriticalSection + 1;
      piVar1 = piVar1 + 1;
    } while ((int)lpCriticalSection < 0x3010f08);
  }
  return;
}


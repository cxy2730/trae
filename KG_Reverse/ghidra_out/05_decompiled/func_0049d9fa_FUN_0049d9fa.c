// Function: FUN_0049d9fa
// Entry:    0049d9fa
// Size:     33 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d9fa(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049d9fa(int param_1)

{
  if (DAT_03010f08 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_03010d70 + param_1 * 0x18));
  }
  return;
}


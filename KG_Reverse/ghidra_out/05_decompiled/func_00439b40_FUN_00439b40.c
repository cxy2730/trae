// Function: FUN_00439b40
// Entry:    00439b40
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_00439b40(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00439b40(void)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_02fe8cd0);
  for (uVar1 = 0; (DAT_02fe8cec != 0 && (uVar1 < (uint)(DAT_02fe8cf0 - DAT_02fe8cec >> 2)));
      uVar1 = uVar1 + 1) {
    SetEvent(*(HANDLE *)(*(int *)(DAT_02fe8cec + uVar1 * 4) + 0x2c));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_02fe8cd0);
  return 1;
}


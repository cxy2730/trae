// Function: FUN_00483b6b
// Entry:    00483b6b
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_00483b6b(void)
// Decompiled by Ghidra 12.1.2


void FUN_00483b6b(uint param_1)

{
  if ((0x2fd8a2f < param_1) && (param_1 < 0x2fd8c91)) {
    FUN_00489ab5(((int)(param_1 + 0xfd0275d0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


// Function: FUN_00483b9a
// Entry:    00483b9a
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_00483b9a(void)
// Decompiled by Ghidra 12.1.2


void FUN_00483b9a(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_00489ab5(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


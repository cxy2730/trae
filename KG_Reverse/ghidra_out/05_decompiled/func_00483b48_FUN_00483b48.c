// Function: FUN_00483b48
// Entry:    00483b48
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_00483b48(void)
// Decompiled by Ghidra 12.1.2


void FUN_00483b48(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_00489a54(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


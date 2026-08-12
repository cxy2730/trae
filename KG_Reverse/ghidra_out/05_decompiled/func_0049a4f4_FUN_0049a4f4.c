// Function: FUN_0049a4f4
// Entry:    0049a4f4
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a4f4(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049a4f4(uint param_1)

{
  if (param_1 < 0xffff) {
    FUN_0048131b(param_1);
  }
  else {
    FUN_0048131b(0xffff);
    FUN_00481342(param_1);
  }
  return;
}


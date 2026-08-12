// Function: FUN_0049313e
// Entry:    0049313e
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_0049313e(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049313e(LONG *param_1)

{
  LONG LVar1;
  
  if (param_1 != (LONG *)PTR_DAT_02fd808c) {
    LVar1 = InterlockedDecrement(param_1);
    if (LVar1 < 1) {
      FUN_004930c5();
    }
  }
  return;
}


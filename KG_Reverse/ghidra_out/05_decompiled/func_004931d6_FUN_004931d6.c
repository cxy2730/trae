// Function: FUN_004931d6
// Entry:    004931d6
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_004931d6(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004931d6(int *param_1)

{
  LONG LVar1;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_02fd808c) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_004930c5();
    }
  }
  return;
}


// Function: FUN_0049310d
// Entry:    0049310d
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_0049310d(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0049310d(int *param_1)

{
  LONG LVar1;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_02fd808c) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_004930c5();
    }
    *param_1 = (int)PTR_DAT_02fd8088;
  }
  return;
}


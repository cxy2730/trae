// Function: FUN_0043e600
// Entry:    0043e600
// Size:     90 bytes
// Conv:     unknown
// Signature: undefined FUN_0043e600(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043e600(uint param_1)

{
  float10 fVar1;
  
  if ((param_1 != 0) && (param_1 < 0xff)) {
    fVar1 = (float10)FUN_00482010(param_1,0);
    FUN_004823c8((double)(fVar1 * (float10)255.0 + (float10)0.5));
    __ftol();
  }
  return;
}


// Function: FUN_0043e5b0
// Entry:    0043e5b0
// Size:     70 bytes
// Conv:     unknown
// Signature: undefined FUN_0043e5b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043e5b0(int param_1,int param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_004823c8((1e+15 / (double)param_1) / (double)param_2 + 0.5);
  if ((fVar2 <= (float10)2147483647.0) && ((float10)-2147483648.0 <= fVar2)) {
    uVar1 = __ftol();
    return uVar1;
  }
  return 0;
}


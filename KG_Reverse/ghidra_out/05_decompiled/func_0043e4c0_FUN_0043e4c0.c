// Function: FUN_0043e4c0
// Entry:    0043e4c0
// Size:     120 bytes
// Conv:     unknown
// Signature: undefined FUN_0043e4c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043e4c0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (param_4 != 0) {
    if ((param_2 == 0) || (param_3 == 0)) {
      *param_1 = 0;
      return 1;
    }
    fVar2 = (float10)FUN_004823c8(((double)param_2 * (double)param_3) / (double)param_4 + 0.5);
    if ((fVar2 <= (float10)2147483647.0) && ((float10)-2147483648.0 <= fVar2)) {
      uVar1 = __ftol();
      *param_1 = uVar1;
      return 1;
    }
  }
  return 0;
}


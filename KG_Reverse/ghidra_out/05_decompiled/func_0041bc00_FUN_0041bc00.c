// Function: FUN_0041bc00
// Entry:    0041bc00
// Size:     262 bytes
// Conv:     unknown
// Signature: undefined FUN_0041bc00(void)
// Decompiled by Ghidra 12.1.2


float10 FUN_0041bc00(float param_1)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  double local_14;
  undefined8 local_c;
  
  local_c = (double)CONCAT44((int)(char)((char)((ushort)(param_1._2_2_ << 1) >> 8) + -0x7f),
                             (undefined4)local_c);
  uVar2 = __ftol();
  local_c = (double)CONCAT44((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f),(undefined4)local_c
                            );
  fVar3 = (float10)FUN_00482010();
  local_c = (double)fVar3;
  if ((int)uVar2 < 1) {
    fVar1 = ABS(param_1) * (float)fVar3;
  }
  else {
    fVar1 = ABS(param_1) / (float)fVar3;
  }
  if (fVar1 < 10.0) {
    if (1.0 <= fVar1) {
      fVar1 = fVar1 * 100000.0;
    }
    else {
      local_c = local_c * 10.0;
      uVar2 = uVar2 - 1;
      fVar1 = fVar1 * 1e+06;
    }
  }
  else {
    local_c = local_c * 10.0;
    uVar2 = uVar2 + 1;
    fVar1 = fVar1 * 10000.0;
  }
  local_14 = (double)fVar1;
  fVar3 = (float10)FUN_0048222d(local_14,&local_14);
  fVar4 = (float10)local_14;
  if ((float10)0.5 <= fVar3) {
    fVar4 = fVar4 + (float10)1.0;
  }
  if (0 < (int)uVar2) {
    fVar3 = (float10)local_c;
    if (param_1 < 0.0) {
      fVar3 = -fVar3;
    }
    return fVar3 * (float10)1e-05 * fVar4;
  }
  fVar3 = (float10)local_c;
  if (param_1 < 0.0) {
    fVar3 = -fVar3;
  }
  return fVar4 / (fVar3 * (float10)100000.0);
}


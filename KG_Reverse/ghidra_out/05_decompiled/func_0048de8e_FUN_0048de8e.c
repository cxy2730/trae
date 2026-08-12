// Function: FUN_0048de8e
// Entry:    0048de8e
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_0048de8e(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0048de8e(uint param_1)

{
  uint uVar1;
  
  if (DAT_02fd9ac0 < 2) {
    uVar1 = (byte)PTR_DAT_02fd98b4[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_0048a852(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}


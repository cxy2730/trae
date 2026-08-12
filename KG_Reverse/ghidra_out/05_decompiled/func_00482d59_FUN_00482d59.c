// Function: FUN_00482d59
// Entry:    00482d59
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_00482d59(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00482d59(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_02fd9ac0) {
    uVar1 = FUN_0048a852(param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_02fd98b4[param_1 * 2] & 8;
}


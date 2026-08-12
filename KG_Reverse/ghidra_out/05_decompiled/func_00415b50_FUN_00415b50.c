// Function: FUN_00415b50
// Entry:    00415b50
// Size:     110 bytes
// Conv:     unknown
// Signature: undefined FUN_00415b50(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00415b50(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  if (uVar1 < 0x80000402) {
    if (uVar1 != 0x80000401) {
      if (uVar1 == 0x80000101) {
        return (uint)(byte)*param_1;
      }
      if (uVar1 == 0x80000201) {
        return (int)(short)*param_1;
      }
      if (uVar1 != 0x80000301) goto LAB_00415b95;
    }
    return *param_1;
  }
  if (uVar1 == 0x80000501) {
    uVar1 = __ftol();
    return uVar1;
  }
  if (uVar1 == 0x80000601) {
    uVar1 = __ftol();
    return uVar1;
  }
LAB_00415b95:
  FUN_00412f90(&DAT_02faaf84,0,0,0);
  return 0;
}


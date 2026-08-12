// Function: FUN_00440b90
// Entry:    00440b90
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_00440b90(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00440b90(int param_1)

{
  undefined4 uVar1;
  
  if (99999 < param_1) {
    return 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_0043e590((param_1 * 0xb + 2) / 5);
  return uVar1;
}


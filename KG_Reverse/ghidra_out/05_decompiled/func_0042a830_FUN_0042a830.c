// Function: FUN_0042a830
// Entry:    0042a830
// Size:     61 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a830(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0042a830(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042a650();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004279f0();
  if (iVar1 <= param_1) {
    iVar1 = FUN_00427960();
    if (param_1 <= iVar1 + -1) {
      return 1;
    }
  }
  return 0;
}


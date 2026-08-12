// Function: FUN_0042a7f0
// Entry:    0042a7f0
// Size:     61 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a7f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0042a7f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042a650();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004279e0();
  if (iVar1 <= param_1) {
    iVar1 = FUN_00427920();
    if (param_1 <= iVar1 + -1) {
      return 1;
    }
  }
  return 0;
}


// Function: FUN_0048bea9
// Entry:    0048bea9
// Size:     27 bytes
// Conv:     unknown
// Signature: undefined FUN_0048bea9(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048bea9(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0301117c != (code *)0x0) {
    iVar1 = (*DAT_0301117c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


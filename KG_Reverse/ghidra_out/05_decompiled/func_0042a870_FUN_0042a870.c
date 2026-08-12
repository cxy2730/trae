// Function: FUN_0042a870
// Entry:    0042a870
// Size:     82 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a870(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0042a870(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042a650();
  if (iVar1 != 0) {
    iVar1 = FUN_0042a7f0(*(undefined4 *)(param_1 + 0x48));
    if (iVar1 == 1) {
      iVar1 = FUN_0042a7f0(*(undefined4 *)(param_1 + 0x50));
      if (iVar1 == 1) {
        iVar1 = FUN_0042a830(*(undefined4 *)(param_1 + 0x4c));
        if (iVar1 == 1) {
          iVar1 = FUN_0042a830(*(undefined4 *)(param_1 + 0x54));
          if (iVar1 == 1) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


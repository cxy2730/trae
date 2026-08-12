// Function: FUN_004477a0
// Entry:    004477a0
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_004477a0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004477a0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_0048465b(param_2,1,param_3,*(undefined4 *)(param_1 + 0x60));
    if (iVar1 != param_3) {
      FUN_004463d0(param_1,s_Read_Error_02fb24f0);
    }
  }
  return;
}


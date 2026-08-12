// Function: FUN_0049ad2f
// Entry:    0049ad2f
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_0049ad2f(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049ad2f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0049c724();
  if (*(int **)(iVar1 + 4) == (int *)0x0) {
    FUN_0049ac48(param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)(iVar1 + 4) + 0x8c))(param_1,param_2,param_3);
  }
  return;
}


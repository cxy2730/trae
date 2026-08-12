// Function: FUN_004236b0
// Entry:    004236b0
// Size:     166 bytes
// Conv:     unknown
// Signature: undefined FUN_004236b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004236b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f4b8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  FUN_00493768();
  local_8 = 1;
  iVar1 = (**(code **)(*param_1 + 0x34))(local_20,8);
  if (iVar1 == 8) {
    (**(code **)(*param_1 + 0x28))();
    uVar2 = FUN_004235b0(local_20,8);
    local_8 = 0xffffffff;
    FUN_004937a6();
    ExceptionList = local_10;
    return uVar2;
  }
  (**(code **)(*param_1 + 0x28))(0,0);
  local_8 = 0xffffffff;
  FUN_004937a6();
  ExceptionList = local_10;
  return 0;
}


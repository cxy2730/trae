// Function: FUN_00424390
// Entry:    00424390
// Size:     184 bytes
// Conv:     unknown
// Signature: undefined FUN_00424390(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00424390(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*param_1 + 0x30))();
  uVar2 = FUN_00492f17(iVar1);
  FUN_00493768();
  local_8 = 1;
  iVar3 = (**(code **)(*param_1 + 0x34))(uVar2,iVar1);
  if (iVar3 != iVar1) {
    FUN_00492f40(uVar2);
    local_8 = 0xffffffff;
    FUN_004937a6();
    ExceptionList = local_10;
    return 0;
  }
  local_8 = 0xffffffff;
  FUN_004937a6();
  uVar4 = FUN_00424460(uVar2,iVar1);
  FUN_00492f40(uVar2);
  ExceptionList = local_10;
  return uVar4;
}


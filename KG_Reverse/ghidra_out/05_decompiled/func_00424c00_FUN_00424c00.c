// Function: FUN_00424c00
// Entry:    00424c00
// Size:     160 bytes
// Conv:     unknown
// Signature: undefined FUN_00424c00(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00424c00(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f5e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00493768();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  uVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_004062a0();
  local_8._0_1_ = 2;
  uVar2 = FUN_004062c0(uVar1);
  uVar1 = (**(code **)(*param_1 + 0x34))(uVar2,uVar1);
  uVar1 = FUN_004249f0(uVar2,uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004064a0();
  local_8 = 0xffffffff;
  FUN_004937a6();
  ExceptionList = local_10;
  return uVar1;
}


// Function: FUN_004177d0
// Entry:    004177d0
// Size:     395 bytes
// Conv:     unknown
// Signature: undefined FUN_004177d0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004177d0(undefined4 param_1,undefined4 *param_2,code *param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined4 uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = PTR_DAT_02fd8088;
  puStack_8 = &LAB_0049eb17;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004062a0();
  local_4._0_1_ = 1;
  FUN_004062a0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004062a0();
  local_4 = 3;
  iVar2 = FUN_00406ef0(param_1,*param_2);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    (*param_3)(puVar1,0,param_4);
    (*param_3)(uStack_38,0,param_4);
    (*param_3)(uStack_28,0,param_4);
    uVar3 = FUN_00406dd0(param_2);
  }
  local_4 = 8;
  FUN_004931d6();
  local_4._0_1_ = 7;
  FUN_004931d6();
  local_4._0_1_ = 6;
  FUN_004064a0();
  local_4._0_1_ = 5;
  FUN_004064a0();
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004064a0();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return uVar3;
}


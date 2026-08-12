// Function: FUN_00423bc0
// Entry:    00423bc0
// Size:     354 bytes
// Conv:     unknown
// Signature: undefined FUN_00423bc0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00423bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_44;
  undefined4 local_40;
  int local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f543;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00493768();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar1 = (**(code **)(*param_1 + 0x30))();
  iVar2 = FUN_00492f17(iVar1);
  if (iVar2 == 0) {
    local_8 = 0xffffffff;
    FUN_004937a6();
    puVar3 = (undefined4 *)FUN_00423d4a();
    return puVar3;
  }
  iVar6 = iVar1;
  iVar4 = (**(code **)(*param_1 + 0x34))(iVar2,iVar1);
  if (iVar4 != iVar1) {
    FUN_00492f40(iVar2);
    local_8 = 0xffffffff;
    FUN_004937a6();
    puVar3 = (undefined4 *)FUN_00423d4a(iVar6);
    return puVar3;
  }
  FUN_00437170();
  local_8._0_1_ = 2;
  iVar1 = FUN_00437e30(iVar2,iVar1);
  FUN_00492f40(iVar2);
  if (iVar1 == 1) {
    FUN_00438060();
    if (local_2c != 0) {
      puVar5 = (undefined4 *)FUN_00492f17(0x18);
      puVar3 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar3 = puVar5;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      puVar3[1] = local_44;
      puVar3[2] = local_40;
      puVar3[4] = local_2c;
      puVar3[5] = local_28;
      *puVar3 = 5;
      FUN_00437210();
      local_8 = 0xffffffff;
      FUN_004937a6();
      ExceptionList = local_10;
      return puVar3;
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00437210();
  local_8 = 0xffffffff;
  FUN_004937a6();
  puVar3 = (undefined4 *)FUN_00423d4a(iVar6);
  return puVar3;
}


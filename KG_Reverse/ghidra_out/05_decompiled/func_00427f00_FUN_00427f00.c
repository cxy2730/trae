// Function: FUN_00427f00
// Entry:    00427f00
// Size:     474 bytes
// Conv:     unknown
// Signature: undefined FUN_00427f00(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall
FUN_00427f00(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_78 [36];
  int *local_54;
  int *local_50;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f790;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff7c;
  if (((int *)param_1[3] == (int *)0x0) || (param_3 < 0)) {
    return 0;
  }
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*(int *)param_1[3] + 8))();
  iVar3 = param_4;
  if (iVar1 < iVar2) {
    ExceptionList = local_10;
    return 0;
  }
  if (-1 < param_4) {
    iVar2 = (**(code **)(*(int *)param_1[3] + 0x10))();
    if (iVar2 < iVar3) {
      ExceptionList = local_10;
      return 0;
    }
    FUN_00493768();
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    FUN_0049a0a5(param_2,1,0x1000,0);
    local_8._0_1_ = 2;
    if (local_50 < local_54 + 1) {
      FUN_0049a432((int)local_54 + (4 - (int)local_50));
    }
    iVar2 = *local_54;
    local_54 = local_54 + 1;
    if (iVar2 == 0x57545354) {
      FUN_004278f0();
      iVar2 = (**(code **)(*(int *)param_1[3] + 8))();
      iVar3 = (**(code **)(*(int *)param_1[3] + 0x10))();
      FUN_00429d10(local_78,param_3,param_4,param_5,&param_2,&local_18,param_9);
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = param_2;
      }
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = local_18;
      }
      iVar1 = (**(code **)(*(int *)param_1[3] + 8))();
      if ((iVar2 == iVar1) && (iVar2 = (**(code **)(*(int *)param_1[3] + 0x10))(), iVar3 == iVar2))
      {
        local_34 = param_3;
        local_28 = local_18;
        local_30 = param_4;
        local_2c = param_2;
        (**(code **)(*param_1 + 4))(1,10,&local_34,0);
        if (param_8 != (undefined4 *)0x0) {
          *param_8 = 0;
        }
      }
      else {
        param_1[2] = 0;
        (**(code **)(*param_1 + 4))(1,0,0,0);
        if (param_8 != (undefined4 *)0x0) {
          *param_8 = 1;
        }
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0049a181();
      local_8 = 0xffffffff;
      FUN_004937a6();
      ExceptionList = local_10;
      return 1;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0049a181();
    local_8 = 0xffffffff;
    FUN_004937a6();
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 0;
}


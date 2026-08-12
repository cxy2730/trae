// Function: FUN_004280f0
// Entry:    004280f0
// Size:     240 bytes
// Conv:     unknown
// Signature: undefined FUN_004280f0(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_004280f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined1 local_60 [36];
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f7b0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  ExceptionList = &local_10;
  iVar1 = FUN_004278b0(param_2,&param_4,param_3,&param_5);
  if (iVar1 != 0) {
    FUN_00493768();
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    FUN_0049a0a5(param_1,0,0x1000,0);
    local_8._0_1_ = 2;
    if (local_38 < local_3c + 1) {
      FUN_0049a3b6();
    }
    *local_3c = 0x57545354;
    local_3c = local_3c + 1;
    FUN_00429f10(local_60,param_2,param_3,param_4,param_5);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0049a181();
    local_8 = 0xffffffff;
    FUN_004937a6();
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


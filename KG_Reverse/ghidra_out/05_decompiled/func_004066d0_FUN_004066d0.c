// Function: FUN_004066d0
// Entry:    004066d0
// Size:     265 bytes
// Conv:     unknown
// Signature: undefined FUN_004066d0(void)
// Decompiled by Ghidra 12.1.2


int FUN_004066d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049dcb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00493768();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_004937c4();
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar1 = FUN_004938d6(*param_1,0x20,0);
  if (iVar1 == 1) {
    if (param_2 == -1) {
      param_2 = FUN_00493bd0();
    }
    if (param_2 < 1) {
      FUN_004064a0();
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00493819();
      local_8 = 0xffffffff;
      FUN_004937a6();
      ExceptionList = local_10;
      return 0;
    }
    iVar1 = FUN_004062c0(param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_004939f3(iVar1,param_2);
      if (iVar1 != param_2) {
        FUN_00406390(iVar1);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00493819();
      local_8 = 0xffffffff;
      FUN_004937a6();
      ExceptionList = local_10;
      return iVar1;
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00493819();
  iVar1 = FUN_004067e8();
  return iVar1;
}


// Function: FUN_00406820
// Entry:    00406820
// Size:     251 bytes
// Conv:     unknown
// Signature: undefined FUN_00406820(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00406820(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049dcd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00493768();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if ((param_3 == -1) || (*(int *)(param_1 + 0x10) <= param_3)) {
    param_3 = *(int *)(param_1 + 0x10);
  }
  FUN_004937c4();
  local_8._0_1_ = 2;
  iVar1 = FUN_004938d6(*param_2,(-(uint)(param_4 != 0) & 0x30) + 0x10 | 0x1001,0);
  if (iVar1 == 1) {
    if (0 < param_3) {
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 8);
      }
      FUN_00493a2d(uVar2,param_3);
    }
    FUN_00493af1();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00493819();
    local_8 = 0xffffffff;
    FUN_004937a6();
    ExceptionList = local_10;
    return 1;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00493819();
  local_8 = 0xffffffff;
  FUN_004937a6();
  ExceptionList = local_10;
  return 0;
}


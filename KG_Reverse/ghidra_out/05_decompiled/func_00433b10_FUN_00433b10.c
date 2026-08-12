// Function: FUN_00433b10
// Entry:    00433b10
// Size:     395 bytes
// Conv:     unknown
// Signature: undefined FUN_00433b10(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00433b10(int param_1,undefined4 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0540;
  local_c = ExceptionList;
  if ((int)param_2[3] < 2) {
    if (param_2[2] == *(int *)(param_1 + 0x3c)) {
      ExceptionList = &local_c;
      FUN_00406ca0(param_3,*(undefined4 *)(*(int *)(param_1 + 4) + 8));
      *param_3 = 0;
      iVar5 = FUN_00431e20(param_2[2],param_3);
    }
    else {
      ExceptionList = &local_c;
      iVar5 = FUN_00431ee0(param_2[2],param_3);
      if (iVar5 == 0) {
        FUN_004062a0();
        local_4 = 0;
        FUN_004062a0();
        local_4._0_1_ = 1;
        uVar2 = FUN_004062c0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
        uVar3 = FUN_004062c0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
        iVar5 = FUN_00433ca0(*param_2,param_3,uVar3,uVar2);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004064a0();
        local_4 = 0xffffffff;
        FUN_004064a0();
      }
    }
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_00432b10(param_3,param_2[4]);
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 0xc);
    iVar4 = ((param_2[3] - param_2[4]) + -1) * (iVar5 + 4);
    if (iVar4 < 1) {
      iVar5 = FUN_004339d0(param_2,iVar1 - iVar5);
      if (iVar5 != 0) {
        ExceptionList = local_c;
        return iVar5;
      }
    }
    else {
      FUN_00483180(iVar1,iVar5 + 4 + iVar1,iVar4);
    }
    param_2[3] = param_2[3] + -1;
    param_3[1] = param_3[1] + -1;
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 0xc) + 4;
    uVar2 = FUN_00432b10(param_3,param_2[3]);
    FUN_00406ca0(uVar2,iVar5);
    iVar5 = FUN_00431e20(param_2[2],param_3);
  }
  ExceptionList = local_c;
  return iVar5;
}


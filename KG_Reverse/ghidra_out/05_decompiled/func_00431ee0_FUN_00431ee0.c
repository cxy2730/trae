// Function: FUN_00431ee0
// Entry:    00431ee0
// Size:     679 bytes
// Conv:     unknown
// Signature: undefined FUN_00431ee0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00431ee0(undefined4 *param_1,int param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004a0400;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004062a0();
  local_8 = 0;
  if (param_3 == (byte *)0x0) {
    param_3 = (byte *)FUN_004062c0(*(undefined4 *)(param_1[1] + 8));
  }
  if (param_2 == param_1[0xc] + -1) {
    while (iVar3 = param_2 + -1, 1 < iVar3) {
      iVar2 = FUN_00431c90(iVar3,param_3);
      if (iVar2 != 0) goto LAB_00431f69;
      if ((*param_3 & 2) == 0) break;
      iVar1 = *(int *)(param_3 + 8);
      iVar5 = *(int *)(param_3 + 4);
      if (iVar3 == param_1[0xe]) {
        iVar5 = 0;
        param_1[0xe] = iVar1;
      }
      else if (iVar5 != 0) {
        iVar2 = FUN_00431c90(iVar5,param_3);
        if (iVar2 != 0) goto LAB_00431f69;
        *(int *)(param_3 + 8) = iVar1;
        iVar2 = FUN_00431e20(iVar5,param_3);
        if (iVar2 != 0) goto LAB_00431f69;
      }
      if (iVar1 != 0) {
        iVar2 = FUN_00431c90(iVar1,param_3);
        if (iVar2 != 0) goto LAB_00431f69;
        *(int *)(param_3 + 4) = iVar5;
        iVar2 = FUN_00431e20(iVar1,param_3);
        if (iVar2 != 0) {
          local_8 = 0xffffffff;
          FUN_004064a0();
          ExceptionList = local_10;
          return iVar2;
        }
      }
      param_2 = iVar3;
      if (0 < (int)param_1[0xd]) {
        param_1[0xd] = param_1[0xd] + -1;
      }
    }
    iVar3 = param_1[0x76] + -1;
    param_1[0xc] = param_2;
    if (-1 < iVar3) {
      piVar4 = param_1 + param_1[0x76] + 0x76;
      do {
        if (((int)param_1[0xc] <= *piVar4) && (iVar2 = (param_1[0x76] - iVar3) + -1, 0 < iVar2)) {
          FUN_00483180(piVar4,piVar4 + 1,iVar2 * 4);
          FUN_00483180(iVar3 + 0x224 + (int)param_1,iVar3 + 0x225 + (int)param_1,iVar2);
          FUN_00406b50(*(int *)(param_1[1] + 8) * iVar3,*(int *)(param_1[1] + 8));
          param_1[0x76] = param_1[0x76] + -1;
        }
        iVar3 = iVar3 + -1;
        piVar4 = piVar4 + -1;
      } while (-1 < iVar3);
    }
    FUN_00493768();
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(*(int *)*param_1 + 0x2c))(*(int *)(param_1[1] + 8) * param_1[0xc]);
    iVar3 = FUN_004321b5();
    return iVar3;
  }
  if (0 < (int)param_1[0xd]) {
    iVar2 = FUN_00431c90(param_1[0xe],param_3);
    if (iVar2 == 0) {
      *(int *)(param_3 + 4) = param_2;
      iVar2 = FUN_00431e20(param_1[0xe],param_3);
      if (iVar2 == 0) goto LAB_00431f95;
    }
LAB_00431f69:
    param_3 = (byte *)iVar2;
    local_8 = 0xffffffff;
    FUN_004064a0();
    ExceptionList = local_10;
    return (int)param_3;
  }
LAB_00431f95:
  param_3[0] = 2;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  *(undefined4 *)(param_3 + 8) = param_1[0xe];
  FUN_00406ca0(param_3 + 0xc,*(int *)(param_1[1] + 8) + -0xc);
  iVar3 = FUN_00431e20(param_2,param_3);
  if (iVar3 == 0) {
    param_1[0xe] = param_2;
    param_1[0xd] = param_1[0xd] + 1;
  }
  local_8 = 0xffffffff;
  FUN_004064a0();
  ExceptionList = local_10;
  return iVar3;
}


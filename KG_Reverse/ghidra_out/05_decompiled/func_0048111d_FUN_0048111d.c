// Function: FUN_0048111d
// Entry:    0048111d
// Size:     475 bytes
// Conv:     unknown
// Signature: undefined FUN_0048111d(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048111d(double param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 extraout_ST0;
  int local_8;
  
  if ((2958465.0 < param_1) || (param_1 < -657434.0)) {
    return 0;
  }
  bVar1 = true;
  iVar2 = __ftol();
  FUN_00485b2c((double)extraout_ST0);
  FUN_004823c8();
  iVar3 = __ftol();
  param_2[6] = (iVar2 + 0xa96c6) % 7 + 1;
  iVar6 = (iVar2 + 0xa96c7) % 0x23ab1;
  iVar4 = (iVar6 + -1) / 0x8eac;
  if (iVar4 == 0) {
    local_8 = iVar6 / 0x5b5;
LAB_0048126a:
    iVar6 = iVar6 % 0x5b5;
    iVar7 = iVar6 + -1;
    iVar5 = iVar7 / 0x16d;
    if (iVar5 != 0) goto LAB_00481218;
  }
  else {
    iVar7 = (iVar6 + -1) % 0x8eac;
    iVar6 = iVar7 + 1;
    local_8 = iVar6 / 0x5b5;
    if (local_8 != 0) goto LAB_0048126a;
    bVar1 = false;
    iVar5 = iVar7 / 0x16d;
LAB_00481218:
    iVar6 = iVar7 % 0x16d;
  }
  param_2[7] = iVar6 + 1;
  param_2[5] = iVar5 + ((iVar4 + ((iVar2 + 0xa96c7) / 0x23ab1) * 4) * 0x19 + local_8) * 4;
  if ((iVar5 == 0) && (bVar1)) {
    if (iVar6 == 0x3b) {
      param_2[4] = 2;
      param_2[3] = 0x1d;
      goto LAB_004812b9;
    }
    if (0x3b < iVar6) {
      iVar6 = iVar6 + -1;
    }
  }
  iVar6 = iVar6 + 1;
  iVar2 = (iVar6 >> 5) + 1;
  param_2[4] = iVar2;
  while (*(int *)(&DAT_02fd80a0 + iVar2 * 4) < iVar6) {
    param_2[4] = param_2[4] + 1;
    iVar2 = param_2[4];
  }
  param_2[3] = iVar6 - *(int *)(&DAT_02fd809c + param_2[4] * 4);
LAB_004812b9:
  if (iVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    *param_2 = iVar3 % 0x3c;
    param_2[1] = (iVar3 / 0x3c) % 0x3c;
    param_2[2] = (iVar3 / 0x3c) / 0x3c;
  }
  return 1;
}


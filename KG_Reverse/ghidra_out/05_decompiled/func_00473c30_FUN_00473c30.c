// Function: FUN_00473c30
// Entry:    00473c30
// Size:     717 bytes
// Conv:     unknown
// Signature: undefined FUN_00473c30(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00473c30(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  
  if (DAT_02fd2fbc != 0) {
    FUN_00473f00();
    DAT_02fd2fbc = 0;
  }
  PTR_FUN_02fd2c90 = (&PTR_FUN_02fd2fac)[*(uint *)(param_1 + 8) & 3];
  if (*(int *)(param_1 + 8) == 3) {
    uVar1 = FUN_004747e0(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = FUN_00477f40(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  uVar10 = (uint)((param_5 & 8) != 0);
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (2 < param_3) {
    param_3 = 2;
  }
  iVar9 = param_6;
  if (param_6 < 1000) {
    iVar9 = 1000;
  }
  DAT_03006ef4 = param_2;
  if (*(int *)(param_1 + 8) != 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) == 3) {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    param_6 = 4;
  }
  else {
    param_6 = (int)(char)(&DAT_02fd2cec)
                         [*(int *)(param_1 + 0x10) +
                          (*(int *)(param_1 + 0x20) +
                          *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x20) * 2) * 0x10];
    if (param_6 < 0) {
      return 0;
    }
  }
  puVar4 = &DAT_03006df4;
  puVar11 = &DAT_02fd2dcc + param_6 * 0x40;
  do {
    iVar2 = 0;
    puVar5 = puVar4;
    do {
      puVar4 = puVar5 + 1;
      pbVar6 = puVar11 + iVar2;
      iVar2 = iVar2 + 1;
      *puVar5 = (uint)*pbVar6;
      puVar5 = puVar4;
    } while (iVar2 < 0x10);
    puVar11 = puVar11 + 0x10;
  } while ((int)puVar4 < 0x3006ef4);
  pbVar6 = &DAT_02fd2f0c + param_6 * 4;
  puVar4 = (uint *)&DAT_02fd2c7c;
  do {
    puVar5 = puVar4 + 1;
    bVar3 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *puVar4 = (uint)bVar3;
    puVar4 = puVar5;
  } while ((int)puVar5 < 0x2fd2c8c);
  DAT_03007058 = DAT_02fd2c88 + DAT_02fd2c84 + DAT_02fd2c80 + DAT_02fd2c7c;
  _DAT_03012a68 =
       *(int *)(&DAT_02fd2dac + (*(int *)(param_1 + 0x14) + *(int *)(param_1 + 4) * 4) * 4);
  DAT_02fd2c30 = (_DAT_03012a68 / 2 + iVar9 * 0x40) / _DAT_03012a68;
  bVar3 = (byte)param_3;
  iVar9 = 0x20 >> (bVar3 & 0x1f);
  if (8 < iVar9) {
    iVar9 = iVar9 + -1;
  }
  if (iVar9 < DAT_02fd2c30) {
    DAT_02fd2c30 = iVar9;
  }
  if (DAT_03007058 < DAT_02fd2c30) {
    DAT_02fd2c30 = DAT_03007058;
  }
  if (*(int *)(param_1 + 0x20) != 3) {
    piVar7 = &DAT_02fd2c7c;
    do {
      piVar8 = piVar7 + 1;
      *piVar7 = *piVar7 << 1;
      piVar7 = piVar8;
    } while ((int)piVar8 < 0x2fd2c8c);
    DAT_03007058 = DAT_03007058 * 2;
    DAT_02fd2c30 = DAT_02fd2c30 * 2;
  }
  iVar9 = (param_5 & 3) + 1;
  if (*(int *)(param_1 + 0x20) == 3) {
    iVar9 = 0;
  }
  DAT_03012a60 = (&DAT_02fd2f98)[iVar9];
  PTR_FUN_02fd2c8c = (&PTR_FUN_02fd2f20)[iVar9 + (param_3 + uVar10 * 3) * 5];
  _DAT_03008b68 = DAT_03012a60 * (0x480 >> (bVar3 & 0x1f));
  DAT_03007060 = _DAT_03008b68;
  if (uVar10 == 0) {
    DAT_03007060 = _DAT_03008b68 * 2;
  }
  _DAT_03012a68 = _DAT_03012a68 >> (bVar3 & 0x1f);
  _DAT_03012a70 = param_2;
  _DAT_03012a6c = (-(uint)(uVar10 != 0) & 0xfffffff8) + 0x10;
  puVar12 = &DAT_03012a80;
  DAT_03012a64 = _DAT_03008b68;
  for (iVar9 = 0x900; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  _DAT_03012a74 = 0;
  FUN_00478330();
  return 1;
}


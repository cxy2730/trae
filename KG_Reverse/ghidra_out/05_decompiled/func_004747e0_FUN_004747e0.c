// Function: FUN_004747e0
// Entry:    004747e0
// Size:     462 bytes
// Conv:     unknown
// Signature: undefined FUN_004747e0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004747e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,int param_6)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (DAT_02fd3008 != 0) {
    iVar5 = 4;
    pfVar2 = (float *)&DAT_03008f50;
    do {
      iVar1 = iVar5 + -1;
      pfVar3 = pfVar2 + 1;
      iVar5 = iVar5 << 1;
      *pfVar2 = 2.0 / (float)iVar1;
      pfVar2 = pfVar3;
    } while ((int)pfVar3 < 0x3008f8c);
    DAT_02fd3008 = 0;
  }
  uVar6 = (uint)((param_5 & 8) != 0);
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (2 < param_3) {
    param_3 = 2;
  }
  if (param_6 < 1000) {
    param_6 = 1000;
  }
  DAT_03006ef4 = param_2;
  if (*(int *)(param_1 + 8) != 3) {
    return 0;
  }
  DAT_02fd3004 = 0x20;
  DAT_03007058 = 0x20;
  _DAT_03012a68 =
       *(int *)(&DAT_02fd2dac + (*(int *)(param_1 + 0x14) + *(int *)(param_1 + 4) * 4) * 4);
  DAT_02fd2c30 = (_DAT_03012a68 / 2 + param_6 * 0x40) / _DAT_03012a68;
  bVar4 = (byte)param_3;
  iVar5 = 0x20 >> (bVar4 & 0x1f);
  if (8 < iVar5) {
    iVar5 = iVar5 + -1;
  }
  if (iVar5 < DAT_02fd2c30) {
    DAT_02fd2c30 = iVar5;
  }
  if (0x20 < DAT_02fd2c30) {
    DAT_02fd2c30 = 0x20;
  }
  if (*(int *)(param_1 + 0x20) != 3) {
    DAT_02fd3004 = 0x40;
    DAT_03007058 = 0x40;
    DAT_02fd2c30 = DAT_02fd2c30 * 2;
  }
  iVar5 = (param_5 & 3) + 1;
  if (*(int *)(param_1 + 0x20) == 3) {
    iVar5 = 0;
  }
  DAT_03012a60 = (&DAT_02fd2f98)[iVar5];
  PTR_FUN_02fd2c8c = (&PTR_FUN_02fd2f20)[iVar5 + (param_3 + uVar6 * 3) * 5];
  _DAT_03008b68 = DAT_03012a60 * (0x180 >> (bVar4 & 0x1f));
  DAT_03007060 = _DAT_03008b68;
  if (uVar6 == 0) {
    DAT_03007060 = _DAT_03008b68 * 2;
  }
  _DAT_03012a68 = _DAT_03012a68 >> (bVar4 & 0x1f);
  _DAT_03012a70 = param_2;
  _DAT_03012a6c = (-(uint)(uVar6 != 0) & 0xfffffff8) + 0x10;
  puVar7 = &DAT_03012a80;
  DAT_03012a64 = _DAT_03008b68;
  for (iVar5 = 0x300; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  _DAT_03012a74 = 0;
  FUN_00478330();
  return 1;
}


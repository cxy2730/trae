// Function: FUN_00477f40
// Entry:    00477f40
// Size:     1002 bytes
// Conv:     unknown
// Signature: undefined FUN_00477f40(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477f40(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  
  DAT_0300bfa8 = 0;
  DAT_0300bfac = 0;
  if (*(int *)(param_1 + 8) != 1) {
    return;
  }
  DAT_030090a0 = (-(uint)(*(int *)(param_1 + 4) != 0) & 2) + 6;
  DAT_030090a8 = param_2;
  uVar8 = (uint)((param_5 & 8) != 0);
  param_5 = param_5 & 3;
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (2 < param_3) {
    param_3 = 2;
  }
  if (param_6 < 1000) {
    param_6 = 1000;
  }
  _DAT_03012a68 =
       *(int *)(&DAT_02f9a0f8 + (*(int *)(param_1 + 0x14) + *(int *)(param_1 + 4) * 4) * 4);
  if ((*param_1 & 1) == 0) {
    _DAT_03012a68 = _DAT_03012a68 / 2;
  }
  _DAT_02fd36cc = (_DAT_03012a68 / 2 + param_6 * 0x40) / _DAT_03012a68;
  bVar3 = (byte)param_3;
  iVar4 = 0x20 >> (bVar3 & 0x1f);
  if (8 < iVar4) {
    iVar4 = iVar4 + -1;
  }
  if (iVar4 < _DAT_02fd36cc) {
    _DAT_02fd36cc = iVar4;
  }
  iVar4 = *(int *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    iVar4 = 2;
  }
  else if (iVar4 == 1) {
    iVar9 = *(int *)(&DAT_02f9a364 + *(int *)(param_1 + 0x14) * 0x94);
    DAT_02fd36c0 = *(int *)(&DAT_02f9a32c + *(int *)(param_1 + 0x14) * 0x94);
    goto LAB_00478057;
  }
  iVar9 = *(int *)(&DAT_02f9a1a4 + (*(int *)(param_1 + 0x14) + iVar4 * 3) * 0x94);
  DAT_02fd36c0 = *(int *)(&DAT_02f9a16c + (*(int *)(param_1 + 0x14) + iVar4 * 3) * 0x94);
LAB_00478057:
  DAT_02fd36c4 = iVar9 * 3;
  DAT_02fd36bc = DAT_02fd36c0 + 8;
  if (_DAT_02fd36cc * 0x12 < DAT_02fd36c0 + 8) {
    DAT_02fd36bc = _DAT_02fd36cc * 0x12;
  }
  if (DAT_02fd36bc < DAT_02fd36c0) {
    DAT_02fd36c0 = DAT_02fd36bc;
  }
  if (DAT_02fd36bc < DAT_02fd36c4) {
    DAT_02fd36c4 = DAT_02fd36bc;
  }
  DAT_02fd36c8 = (DAT_02fd36bc + 0x11) / 0x12;
  DAT_0300bfa0 = 0;
  if ((*(int *)(param_1 + 0x20) != 3) && (param_5 == 1)) {
    DAT_0300bfa0 = 0xfffffffc;
  }
  _DAT_0300bdb0 = 0x480 >> (bVar3 & 0x1f);
  if (*(int *)(param_1 + 4) == 0) {
    _DAT_0300bdb0 = _DAT_0300bdb0 / 2;
  }
  DAT_03012a60 = 2;
  if (*(int *)(param_1 + 0x20) == 3) {
    DAT_03012a60 = 1;
  }
  if (param_5 != 0) {
    DAT_03012a60 = 1;
  }
  PTR_FUN_02fd36d0 = (&PTR_LAB_02fd36d8)[DAT_03012a60 + (param_3 + uVar8 * 3) * 2];
  iVar4 = param_5 + 1;
  if (*(int *)(param_1 + 0x20) == 3) {
    iVar4 = 0;
  }
  _DAT_0300bdb0 = _DAT_0300bdb0 * DAT_03012a60;
  PTR_FUN_02fd36d4 = (&PTR_LAB_02fd370c)[iVar4];
  if (uVar8 == 0) {
    DAT_0300b9bc = _DAT_0300bdb0 * 2;
    _DAT_0300bfa4 = 0;
  }
  else {
    _DAT_0300bfa4 = 0x80;
    DAT_0300b9bc = _DAT_0300bdb0;
  }
  _DAT_03012a68 = _DAT_03012a68 >> (bVar3 & 0x1f);
  _DAT_03012a70 = param_2;
  _DAT_03012a6c = (-(uint)(uVar8 != 0) & 0xfffffff8) + 0x10;
  _DAT_03012a74 = 0;
  DAT_0300be58 = DAT_0300b9bc / 2;
  iVar4 = *(int *)(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    iVar4 = 2;
  }
  iVar9 = 0;
  iVar4 = iVar4 * 3;
  puVar2 = &DAT_030128c0;
  DAT_03012a64 = _DAT_0300bdb0;
  do {
    puVar5 = puVar2 + 1;
    iVar1 = (*(int *)(param_1 + 0x14) + iVar4) * 0x25 + iVar9;
    iVar9 = iVar9 + 1;
    *puVar2 = *(undefined4 *)(&DAT_02f9a11c + iVar1 * 4);
    puVar2 = puVar5;
  } while ((int)puVar5 < 0x3012918);
  iVar9 = 0;
  piVar7 = &DAT_03012918;
  do {
    piVar6 = piVar7 + 1;
    iVar1 = (*(int *)(param_1 + 0x14) + iVar4) * 0x25 + iVar9;
    iVar9 = iVar9 + 1;
    *piVar7 = *(int *)(&DAT_02f9a178 + iVar1 * 4) * 3;
    piVar7 = piVar6;
  } while ((int)piVar6 < 0x301294c);
  iVar9 = 0;
  piVar7 = &DAT_030129a0;
  do {
    piVar6 = piVar7 + 1;
    iVar1 = ((*(int *)(param_1 + 0x14) + iVar4) * 0x25 + iVar9) * 4;
    iVar9 = iVar9 + 1;
    *piVar7 = *(int *)(&DAT_02f9a11c + iVar1) - *(int *)(&DAT_02f9a118 + iVar1);
    piVar7 = piVar6;
  } while ((int)piVar6 < 0x30129f8);
  iVar9 = 0;
  piVar7 = &DAT_030129f8;
  do {
    piVar6 = piVar7 + 1;
    iVar1 = ((*(int *)(param_1 + 0x14) + iVar4) * 0x25 + iVar9) * 4;
    iVar9 = iVar9 + 1;
    *piVar7 = *(int *)(&DAT_02f9a178 + iVar1) - *(int *)(&DAT_02f9a174 + iVar1);
    piVar7 = piVar6;
  } while ((int)piVar6 < 0x3012a2c);
  FUN_0047e5b0();
  FUN_0047ea60();
  FUN_00478330();
  puVar2 = &DAT_0300b0b4;
  for (iVar4 = 0x240; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_03012a80;
  do {
    iVar4 = 2;
    do {
      iVar9 = 0x240;
      do {
        *puVar2 = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  } while ((int)puVar2 < 0x3014e80);
  PTR_LAB_02fd36d8 = &LAB_00477110;
  if (*(int *)(param_1 + 4) != 1) {
    PTR_LAB_02fd36d8 = &LAB_00477ae0;
  }
  return;
}


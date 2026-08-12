// Function: FUN_0046e790
// Entry:    0046e790
// Size:     635 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e790(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046e790(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *local_30;
  undefined4 *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar7 = 0;
  DAT_03003994 = 0;
  local_c = DAT_03003998;
  local_10 = 0;
  local_14 = 0;
  iVar6 = DAT_03003784;
  uVar8 = DAT_03003474;
  pbVar9 = DAT_02fff1a0;
  do {
    iVar1 = *(int *)((int)&DAT_02fd27e0 + local_14);
    local_20 = 0;
    if (0 < iVar1) {
      local_18 = &DAT_03003588 + iVar7;
      piVar10 = &DAT_030039dc + iVar7;
      local_1c = &DAT_02fff1a8 + iVar7;
      local_24 = &DAT_030039e0 + iVar7;
      local_28 = &DAT_03003688 + iVar7;
      local_2c = &DAT_03003584 + iVar7;
      local_30 = &DAT_02fff1a4 + iVar7;
      piVar11 = &DAT_03003684 + iVar7;
      DAT_03003474 = uVar8;
      do {
        iVar5 = DAT_02fd2794;
        if (iVar6 < 4) {
          for (; iVar6 < 0x19; iVar6 = iVar6 + 8) {
            DAT_03003474 = DAT_03003474 << 8 | (uint)*pbVar9;
            pbVar9 = pbVar9 + 1;
            DAT_02fff1a0 = pbVar9;
          }
        }
        iVar6 = iVar6 - *(int *)(&DAT_02fd27fc + local_14);
        DAT_03003908 = DAT_03003474 >> ((byte)iVar6 & 0x1f);
        DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)iVar6 & 0x1f));
        iVar2 = (&DAT_02fff2a4)[local_10 + DAT_03003908];
        DAT_03003784 = iVar6;
        *piVar10 = iVar2;
        *piVar11 = iVar2;
        if (iVar5 <= iVar7) {
          DAT_03003994 = DAT_03003994 + *(int *)(&DAT_02fd2798 + iVar2 * 4);
        }
        uVar3 = *(undefined4 *)(&DAT_0300394c + iVar2 * 4);
        *local_30 = uVar3;
        uVar4 = *(undefined4 *)(&DAT_02fff52c + iVar2 * 4);
        *local_2c = uVar4;
        local_c = local_c + -1;
        if (local_c < 0) {
          piVar11 = piVar11 + 1;
          *local_28 = iVar2;
          iVar7 = iVar7 + 1;
          *piVar10 = iVar2 + 0x12;
          *local_24 = iVar2 + 0x12;
          *local_1c = uVar3;
          *local_18 = uVar4;
          local_30 = local_30 + 1;
          local_2c = local_2c + 1;
          local_28 = local_28 + 1;
          local_24 = local_24 + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          local_20 = local_20 + 1;
          piVar10 = piVar10 + 1;
        }
        local_30 = local_30 + 1;
        piVar11 = piVar11 + 1;
        local_2c = local_2c + 1;
        piVar10 = piVar10 + 1;
        local_28 = local_28 + 1;
        local_20 = local_20 + 1;
        local_24 = local_24 + 1;
        iVar7 = iVar7 + 1;
        local_1c = local_1c + 1;
        local_18 = local_18 + 1;
        uVar8 = DAT_03003474;
        pbVar9 = DAT_02fff1a0;
      } while (local_20 < iVar1);
    }
    local_14 = local_14 + 4;
    local_10 = local_10 + 0x10;
  } while (local_14 < 0x10);
  (&DAT_030039dc)[DAT_02fd2794] = 0x25;
  (&DAT_030039dc)[iVar7] = 0x24;
  return;
}


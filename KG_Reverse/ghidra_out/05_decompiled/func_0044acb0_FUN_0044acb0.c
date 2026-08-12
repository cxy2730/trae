// Function: FUN_0044acb0
// Entry:    0044acb0
// Size:     1126 bytes
// Conv:     unknown
// Signature: undefined FUN_0044acb0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044acb0(uint *param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint local_18;
  uint local_14;
  uint local_10;
  byte *local_c;
  uint local_8 [2];
  
  if ((param_2 != 0) && (param_1 != (uint *)0x0)) {
    uVar2 = *(uint *)(&DAT_02f985fc + param_3 * 4);
    uVar3 = *param_1;
    uVar12 = uVar3 * uVar2;
    bVar1 = *(byte *)((int)param_1 + 0xb);
    if (bVar1 == 1) {
      pbVar6 = (byte *)((uVar3 - 1 >> 3) + param_2);
      pbVar8 = (byte *)((uVar12 - 1 >> 3) + param_2);
      if ((param_4 & 0x10000) == 0) {
        param_4 = 7 - (uVar3 - 1 & 7);
        uVar4 = 7 - (uVar12 - 1 & 7);
        local_14 = 0;
        param_3 = 7;
        local_18 = 1;
      }
      else {
        param_4 = uVar3 - 1 & 7;
        uVar4 = uVar12 - 1 & 7;
        local_14 = 7;
        param_3 = 0;
        local_18 = -1;
      }
      local_10 = 0;
      local_c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          local_8[0] = uVar2;
          if (0 < (int)uVar2) {
            do {
              *pbVar8 = (byte)(0x7f7f >> (7 - (byte)uVar4 & 0x1f)) & *pbVar8 |
                        (bVar1 >> ((byte)param_4 & 0x1f) & 1) << ((byte)uVar4 & 0x1f);
              if (uVar4 == param_3) {
                pbVar8 = pbVar8 + -1;
                uVar4 = local_14;
              }
              else {
                uVar4 = uVar4 + local_18;
              }
              local_8[0] = local_8[0] - 1;
              pbVar6 = local_c;
            } while (local_8[0] != 0);
          }
          if (param_4 == param_3) {
            pbVar6 = pbVar6 + -1;
            param_4 = local_14;
            local_c = pbVar6;
          }
          else {
            param_4 = param_4 + local_18;
          }
          local_10 = local_10 + 1;
        } while (local_10 < *param_1);
      }
    }
    else if (bVar1 == 2) {
      pbVar6 = (byte *)((uVar3 - 1 >> 2) + param_2);
      pbVar8 = (byte *)((uVar12 - 1 >> 2) + param_2);
      if ((param_4 & 0x10000) == 0) {
        local_18 = 0;
        param_3 = 6;
        uVar4 = (3 - (uVar3 - 1 & 3)) * 2;
        uVar11 = (3 - (uVar12 - 1 & 3)) * 2;
        local_14 = 2;
      }
      else {
        uVar4 = uVar3 * 2 - 2 & 6;
        uVar11 = uVar12 * 2 - 2 & 6;
        local_18 = 6;
        param_3 = 0;
        local_14 = -2;
      }
      local_10 = 0;
      local_c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          local_8[0] = uVar2;
          if (0 < (int)uVar2) {
            do {
              *pbVar8 = (byte)(0x3f3f >> (6 - (byte)uVar11 & 0x1f)) & *pbVar8 |
                        (bVar1 >> ((byte)uVar4 & 0x1f) & 3) << ((byte)uVar11 & 0x1f);
              if (uVar11 == param_3) {
                pbVar8 = pbVar8 + -1;
                uVar11 = local_18;
              }
              else {
                uVar11 = uVar11 + local_14;
              }
              local_8[0] = local_8[0] - 1;
              pbVar6 = local_c;
            } while (local_8[0] != 0);
          }
          if (uVar4 == param_3) {
            pbVar6 = pbVar6 + -1;
            uVar4 = local_18;
            local_c = pbVar6;
          }
          else {
            uVar4 = uVar4 + local_14;
          }
          local_10 = local_10 + 1;
        } while (local_10 < *param_1);
      }
    }
    else if (bVar1 == 4) {
      pbVar6 = (byte *)((uVar3 - 1 >> 1) + param_2);
      pbVar8 = (byte *)((uVar12 - 1 >> 1) + param_2);
      if ((param_4 & 0x10000) == 0) {
        param_3 = 0;
        param_4 = (uVar3 - 1 & 1) * -4 + 4;
        iVar10 = (uVar12 - 1 & 1) * -4 + 4;
        iVar14 = 4;
        local_18 = 4;
      }
      else {
        param_4 = (-(-1 - uVar3) & 1) << 2;
        iVar10 = (-(-1 - uVar12) & 1) << 2;
        param_3 = 4;
        iVar14 = 0;
        local_18 = -4;
      }
      local_8[0] = 0;
      local_c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          local_10 = uVar2;
          if (0 < (int)uVar2) {
            do {
              *pbVar8 = (byte)(0xf0f >> (4 - (byte)iVar10 & 0x1f)) & *pbVar8 |
                        (bVar1 >> ((byte)param_4 & 0x1f) & 0xf) << ((byte)iVar10 & 0x1f);
              if (iVar10 == iVar14) {
                pbVar8 = pbVar8 + -1;
                iVar10 = param_3;
              }
              else {
                iVar10 = iVar10 + local_18;
              }
              local_10 = local_10 - 1;
              pbVar6 = local_c;
            } while (local_10 != 0);
          }
          if (param_4 == iVar14) {
            pbVar6 = pbVar6 + -1;
            param_4 = param_3;
            local_c = pbVar6;
          }
          else {
            param_4 = param_4 + local_18;
          }
          local_8[0] = local_8[0] + 1;
        } while (local_8[0] < *param_1);
      }
    }
    else {
      uVar4 = (uint)(bVar1 >> 3);
      puVar7 = (uint *)((uVar3 - 1) * uVar4 + param_2);
      puVar5 = (uint *)((uVar12 - 1) * uVar4 + param_2);
      param_3 = 0;
      if (uVar3 != 0) {
        do {
          puVar9 = puVar7;
          puVar13 = local_8;
          for (uVar3 = (uint)(bVar1 >> 5); uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar13 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(char *)puVar13 = (char)*puVar9;
            puVar9 = (uint *)((int)puVar9 + 1);
            puVar13 = (uint *)((int)puVar13 + 1);
          }
          param_4 = uVar2;
          if (0 < (int)uVar2) {
            do {
              puVar9 = local_8;
              puVar13 = puVar5;
              for (uVar3 = (uint)(bVar1 >> 5); uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar13 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar5 = (uint *)((int)puVar5 - uVar4);
              param_4 = param_4 - 1;
              for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *(char *)puVar13 = (char)*puVar9;
                puVar9 = (uint *)((int)puVar9 + 1);
                puVar13 = (uint *)((int)puVar13 + 1);
              }
            } while (param_4 != 0);
          }
          puVar7 = (uint *)((int)puVar7 - uVar4);
          param_3 = param_3 + 1;
        } while (param_3 < *param_1);
      }
    }
    bVar1 = *(byte *)((int)param_1 + 0xb);
    *param_1 = uVar12;
    if (7 < bVar1) {
      param_1[1] = (bVar1 >> 3) * uVar12;
      return;
    }
    param_1[1] = bVar1 * uVar12 + 7 >> 3;
  }
  return;
}


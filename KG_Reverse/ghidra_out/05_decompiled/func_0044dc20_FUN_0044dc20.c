// Function: FUN_0044dc20
// Entry:    0044dc20
// Size:     1170 bytes
// Conv:     unknown
// Signature: undefined FUN_0044dc20(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0044dc20(int param_1,int *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 local_20;
  uint local_c;
  uint local_4;
  
  bVar7 = *(byte *)(param_2 + 2);
  local_20 = 0;
  if (((bVar7 & 1) != 0) || ((bVar7 & 2) == 0)) {
    return 0;
  }
  iVar1 = *param_2;
  uVar13 = (uint)*(ushort *)(param_1 + 0x264);
  uVar16 = (uint)*(ushort *)(param_1 + 0x262);
  uVar9 = (bVar7 & 4) >> 2;
  iVar15 = (0x8000 - uVar13) - uVar16;
  if (*(char *)((int)param_2 + 9) == '\b') {
    iVar5 = iVar1;
    pbVar6 = param_3;
    if ((*(int *)(param_1 + 0x198) == 0) || (*(int *)(param_1 + 0x19c) == 0)) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        bVar7 = *param_3;
        local_4 = (uint)bVar7;
        pbVar17 = param_3 + 3;
        if ((bVar7 != param_3[1]) || (bVar7 != param_3[2])) {
          local_20 = 1;
          bVar7 = (byte)((uint)param_3[2] * iVar15 + param_3[1] * uVar13 + local_4 * uVar16 >> 0xf);
        }
        *pbVar6 = bVar7;
        pbVar14 = pbVar6 + 1;
        if (uVar9 != 0) {
          *pbVar14 = *pbVar17;
          pbVar14 = pbVar6 + 2;
          pbVar17 = param_3 + 4;
        }
        param_3 = pbVar17;
        pbVar6 = pbVar14;
      }
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        bVar7 = *pbVar6;
        local_c = (uint)bVar7;
        pbVar17 = pbVar6 + 3;
        if ((bVar7 == pbVar6[1]) && (bVar7 == pbVar6[2])) {
          if (*(int *)(param_1 + 400) != 0) {
            bVar7 = *(byte *)(local_c + *(int *)(param_1 + 400));
          }
          *param_3 = bVar7;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x19c);
          local_20 = 1;
          *param_3 = *(byte *)(((uint)*(byte *)((uint)pbVar6[2] + iVar2) * iVar15 +
                                *(byte *)((uint)pbVar6[1] + iVar2) * uVar13 + 0x4000 +
                                *(byte *)(local_c + iVar2) * uVar16 >> 0xf) +
                              *(int *)(param_1 + 0x198));
        }
        pbVar14 = param_3 + 1;
        if (uVar9 != 0) {
          *pbVar14 = *pbVar17;
          pbVar14 = param_3 + 2;
          pbVar17 = pbVar6 + 4;
        }
        param_3 = pbVar14;
        pbVar6 = pbVar17;
      }
    }
  }
  else {
    iVar5 = iVar1;
    pbVar6 = param_3;
    if ((*(int *)(param_1 + 0x1a4) == 0) || (*(int *)(param_1 + 0x1a0) == 0)) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar12 = CONCAT11(*pbVar6,pbVar6[1]);
        pbVar17 = pbVar6 + 6;
        if ((uVar12 != CONCAT11(pbVar6[2],pbVar6[3])) || (uVar12 != CONCAT11(pbVar6[4],pbVar6[5])))
        {
          local_20 = 1;
        }
        uVar10 = (uint)CONCAT11(pbVar6[4],pbVar6[5]) * iVar15 +
                 CONCAT11(pbVar6[2],pbVar6[3]) * uVar13 + 0x4000 + uVar12 * uVar16 >> 0xf;
        *param_3 = (byte)(uVar10 >> 8);
        param_3[1] = (byte)uVar10;
        pbVar14 = param_3 + 2;
        if (uVar9 != 0) {
          *pbVar14 = *pbVar17;
          param_3[3] = pbVar6[7];
          pbVar14 = param_3 + 4;
          pbVar17 = pbVar6 + 8;
        }
        param_3 = pbVar14;
        pbVar6 = pbVar17;
      }
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        bVar7 = *param_3;
        uVar12 = CONCAT11(bVar7,param_3[1]);
        uVar3 = CONCAT11(param_3[2],param_3[3]);
        uVar4 = CONCAT11(param_3[4],param_3[5]);
        pbVar17 = param_3 + 6;
        if ((uVar12 == uVar3) && (uVar12 == uVar4)) {
          if (*(int *)(param_1 + 0x194) != 0) {
            uVar12 = *(ushort *)
                      (*(int *)(*(int *)(param_1 + 0x194) +
                               ((uVar12 & 0xff) >> (*(byte *)(param_1 + 0x188) & 0x1f)) * 4) +
                      (uint)bVar7 * 2);
          }
        }
        else {
          bVar11 = (byte)*(undefined2 *)(param_1 + 0x188);
          uVar10 = *(ushort *)
                    (*(int *)(*(int *)(param_1 + 0x1a4) + ((uVar12 & 0xff) >> (bVar11 & 0x1f)) * 4)
                    + (uint)bVar7 * 2) * uVar16 + 0x4000 +
                   *(ushort *)
                    (*(int *)(*(int *)(param_1 + 0x1a4) + ((uVar3 & 0xff) >> (bVar11 & 0x1f)) * 4) +
                    (uint)param_3[2] * 2) * uVar13 +
                   (uint)*(ushort *)
                          (*(int *)(*(int *)(param_1 + 0x1a4) +
                                   ((uVar4 & 0xff) >> (bVar11 & 0x1f)) * 4) + (uint)param_3[4] * 2)
                   * iVar15 >> 0xf;
          uVar12 = *(ushort *)
                    (*(int *)(*(int *)(param_1 + 0x1a0) + ((uVar10 & 0xff) >> (bVar11 & 0x1f)) * 4)
                    + ((uVar10 & 0xffff) >> 8) * 2);
          local_20 = 1;
        }
        *pbVar6 = (byte)(uVar12 >> 8);
        pbVar6[1] = (byte)uVar12;
        pbVar14 = pbVar6 + 2;
        if (uVar9 != 0) {
          *pbVar14 = *pbVar17;
          pbVar6[3] = param_3[7];
          pbVar14 = pbVar6 + 4;
          pbVar17 = param_3 + 8;
        }
        param_3 = pbVar17;
        pbVar6 = pbVar14;
      }
    }
  }
  cVar8 = *(char *)((int)param_2 + 10) + -2;
  *(char *)((int)param_2 + 10) = cVar8;
  bVar7 = cVar8 * *(char *)((int)param_2 + 9);
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfd;
  *(byte *)((int)param_2 + 0xb) = bVar7;
  if (7 < bVar7) {
    param_2[1] = (uint)(bVar7 >> 3) * iVar1;
    return local_20;
  }
  param_2[1] = (uint)bVar7 * iVar1 + 7 >> 3;
  return local_20;
}


// Function: FUN_00424740
// Entry:    00424740
// Size:     417 bytes
// Conv:     unknown
// Signature: undefined FUN_00424740(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00424740(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  uint local_18;
  int local_c;
  int local_8;
  
  uVar9 = ((uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(param_1 + 4)) + 1;
  local_8 = ((uint)*(ushort *)(param_1 + 10) - (uint)*(ushort *)(param_1 + 6)) + 1;
  if ((0 < (int)uVar9) && (0 < local_8)) {
    local_18 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 7U)) >> 3;
    uVar3 = uVar9 & 0x80000007;
    bVar12 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar12 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar12) {
      local_18 = local_18 + 1;
    }
    uVar3 = local_18 & 0x80000001;
    bVar12 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar12 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar12) {
      local_18 = local_18 + 1;
    }
    puVar4 = (undefined4 *)FUN_00492f17(0x18);
    puVar7 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar7 = puVar4;
    }
    *puVar7 = 7;
    puVar7[1] = uVar9;
    puVar7[2] = local_8;
    puVar7[5] = local_18 * local_8;
    puVar4 = (undefined4 *)FUN_00492f17(local_18 * local_8);
    uVar3 = puVar7[5];
    puVar7[4] = puVar4;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    pbVar6 = (byte *)(param_1 + 0x80);
    if (0 < local_8) {
      local_c = 0;
      do {
        pbVar8 = (byte *)(puVar7[4] + local_c);
        param_1 = 0;
        if (0 < (int)uVar9) {
          do {
            bVar1 = *pbVar6;
            if (bVar1 < 0xc1) {
              *pbVar8 = bVar1;
            }
            else {
              uVar3 = bVar1 - 0xc0;
              pbVar6 = pbVar6 + 1;
              if ((int)uVar3 < 2) {
                *pbVar8 = *pbVar6;
              }
              else {
                bVar2 = *pbVar6;
                iVar10 = bVar1 - 0xc1;
                pbVar11 = pbVar8;
                for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *(uint *)pbVar11 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2));
                  pbVar11 = pbVar11 + 4;
                }
                pbVar8 = pbVar8 + iVar10;
                for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                  *pbVar11 = bVar2;
                  pbVar11 = pbVar11 + 1;
                }
                param_1 = param_1 + iVar10 * 8;
              }
            }
            pbVar8 = pbVar8 + 1;
            param_1 = param_1 + 8;
            pbVar6 = pbVar6 + 1;
          } while (param_1 < (int)uVar9);
        }
        local_c = local_c + local_18;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    return puVar7;
  }
  return (undefined4 *)0x0;
}


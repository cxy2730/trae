// Function: FUN_0047eb10
// Entry:    0047eb10
// Size:     414 bytes
// Conv:     unknown
// Signature: undefined FUN_0047eb10(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047eb10(void)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  float local_18 [2];
  double local_10;
  
  local_18[0] = 1.0;
  local_18[1] = 1.4142135;
  iVar5 = FUN_0047cbf0();
  local_34 = 0;
  local_2c = 0;
  do {
    fVar9 = (float10)FUN_00482010();
    local_10 = (double)fVar9;
    iVar7 = 0;
    do {
      local_30 = 1;
      iVar8 = 0;
      local_24 = 6;
      do {
        uVar6 = 0;
        if (local_30 != 1 && -1 < local_30 + -1) {
          do {
            if (uVar6 == 0) {
              fVar4 = local_18[iVar7];
              pfVar2 = (float *)(iVar5 + ((iVar7 + local_34 * 2) * 0x40 + iVar8) * 8);
              *pfVar2 = fVar4;
              pfVar2[1] = fVar4;
            }
            else {
              iVar1 = iVar7 + local_34 * 2;
              if ((uVar6 & 1) == 0) {
                pfVar2 = (float *)(iVar5 + (iVar1 * 0x40 + iVar8) * 8);
                *pfVar2 = local_18[iVar7];
                fVar9 = (float10)FUN_00482010();
                pfVar2[1] = (float)(fVar9 * (float10)local_18[iVar7]);
              }
              else {
                pfVar2 = (float *)(iVar5 + (iVar1 * 0x40 + iVar8) * 8);
                fVar9 = (float10)FUN_00482010();
                fVar4 = local_18[iVar7];
                *pfVar2 = (float)(fVar9 * (float10)local_18[iVar7]);
                pfVar2[1] = fVar4;
              }
            }
            uVar6 = uVar6 + 1;
            iVar8 = iVar8 + 1;
          } while ((int)uVar6 < local_30 + -1);
        }
        if (iVar7 == 0) {
          puVar3 = (undefined4 *)(iVar5 + (local_2c + iVar8) * 8);
          *puVar3 = 0x3f800000;
          puVar3[1] = 0;
        }
        else {
          puVar3 = (undefined4 *)(iVar5 + ((iVar7 + local_34 * 2) * 0x40 + iVar8) * 8);
          *puVar3 = 0x3f800000;
          puVar3[1] = 0x3f800000;
        }
        iVar8 = iVar8 + 1;
        local_30 = local_30 * 2;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    local_2c = local_2c + 0x80;
    local_34 = local_34 + 1;
  } while (local_2c < 0x100);
  return;
}


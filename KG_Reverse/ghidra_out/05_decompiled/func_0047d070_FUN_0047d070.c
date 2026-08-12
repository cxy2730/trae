// Function: FUN_0047d070
// Entry:    0047d070
// Size:     954 bytes
// Conv:     unknown
// Signature: undefined FUN_0047d070(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047d070(int param_1,int *param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  float10 fVar14;
  uint local_68;
  int *local_64;
  int *local_58;
  int *local_54;
  float *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  uint local_20 [3];
  float local_14 [4];
  
  iVar2 = *param_2;
  local_58 = (int *)0x16;
  uVar11 = 0xc;
  if (*(int *)(param_4 + 0x14) == 2) {
    uVar11 = 0;
    local_58 = (int *)0x0;
    if (*(int *)(param_4 + 0x18) != 0) {
      uVar11 = 3;
      local_58 = (int *)param_6;
    }
  }
  iVar12 = 0;
  param_5[2] = uVar11;
  param_5[3] = local_58;
  local_20[0] = 0;
  local_64 = (int *)0x0;
  fVar1 = *(float *)(&DAT_0300dd14 + *(int *)(param_4 + 8) * 4);
  local_68 = 0;
  piVar7 = local_64;
  if (0 < (int)local_58) {
    local_64 = &DAT_030129a0;
    do {
      bVar6 = false;
      local_4c = (int *)*local_64;
      fVar5 = fVar1 * *(float *)(&DAT_0300ea14 +
                                ((*(int *)(&DAT_02fd3724 +
                                          (local_68 + *(int *)(param_4 + 0x3c) * 0x16) * 4) +
                                 *(int *)(param_4 + 0x40) * 4) * 0x20 +
                                *(int *)(param_3 + -0x30129a0 + (int)local_64)) * 4);
      if (0 < (int)local_4c) {
        pfVar10 = (float *)(param_1 + iVar12 * 4);
        iVar12 = iVar12 + (int)local_4c;
        do {
          fVar3 = *pfVar10;
          if (fVar3 == 0.0) {
            *pfVar10 = 0.0;
          }
          else {
            bVar6 = true;
            if (((int)fVar3 < -0x20) || (0x1f < (int)fVar3)) {
              fVar14 = (float10)FUN_00482010();
              fVar14 = fVar14 * (float10)fVar5 * (float10)(int)fVar3;
            }
            else {
              fVar14 = (float10)fVar5 * (float10)*(float *)(&DAT_0300ee94 + (int)fVar3 * 4);
            }
            *pfVar10 = (float)fVar14;
          }
          pfVar10 = pfVar10 + 1;
          local_4c = (int *)((int)local_4c + -1);
        } while (local_4c != (int *)0x0);
        if (bVar6) {
          local_20[0] = local_68;
        }
      }
      piVar7 = (int *)iVar12;
      if (iVar2 <= iVar12) break;
      local_68 = local_68 + 1;
      local_64 = local_64 + 1;
    } while ((int)local_68 < (int)local_58);
  }
  local_64 = piVar7;
  piVar7 = local_64;
  param_5[1] = local_20[0];
  *param_5 = 0;
  if (uVar11 < 0xc) {
    piVar9 = (int *)(param_4 + 0x28);
    local_50 = (float *)&DAT_0300e114;
    iVar12 = 3;
    pfVar10 = local_14;
    do {
      iVar4 = *piVar9;
      piVar9 = piVar9 + 1;
      iVar12 = iVar12 + -1;
      *pfVar10 = fVar1 * *(float *)(&DAT_0300dcdc + iVar4 * 4);
      pfVar10 = pfVar10 + 1;
    } while (iVar12 != 0);
    piVar9 = local_64;
    local_20[0] = uVar11;
    local_20[1] = uVar11;
    local_20[2] = uVar11;
    if (uVar11 < 0xd) {
      piVar8 = &DAT_030129f8 + uVar11;
      local_4c = (int *)(param_3 + 0x5c + uVar11 * 4);
      local_68 = uVar11;
      do {
        iVar12 = *piVar8;
        local_40 = 3;
        local_48 = (int *)(param_1 + (int)piVar9 * 4);
        local_54 = local_4c;
        pfVar10 = local_50;
        do {
          bVar6 = false;
          fVar1 = *(float *)(&DAT_0300ea14 + (*(int *)(param_4 + 0x40) * 0x80 + *local_54) * 4) *
                  *(float *)((int)local_14 + -(int)local_50 + (int)pfVar10);
          if (0 < iVar12) {
            piVar9 = (int *)((int)local_64 + iVar12);
            local_58 = local_48;
            local_48 = local_48 + iVar12;
            pfVar13 = pfVar10;
            local_44 = iVar12;
            do {
              iVar4 = *local_58;
              if (iVar4 == 0) {
                *pfVar13 = 0.0;
              }
              else {
                bVar6 = true;
                if ((iVar4 < -0x20) || (0x1f < iVar4)) {
                  fVar14 = (float10)FUN_00482010();
                  fVar14 = fVar14 * (float10)fVar1 * (float10)iVar4;
                }
                else {
                  fVar14 = (float10)fVar1 * (float10)*(float *)(&DAT_0300ee94 + iVar4 * 4);
                }
                *pfVar13 = (float)fVar14;
              }
              pfVar13 = pfVar13 + 3;
              local_58 = local_58 + 1;
              local_44 = local_44 + -1;
            } while (local_44 != 0);
            local_64 = piVar9;
            if (bVar6) {
              *(uint *)((int)local_20 + -(int)local_50 + (int)pfVar10) = local_68;
            }
          }
          local_54 = local_54 + 0xd;
          pfVar10 = pfVar10 + 1;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
        if (iVar2 <= (int)piVar9) break;
        local_68 = local_68 + 1;
        local_50 = local_50 + iVar12 * 3;
        piVar8 = piVar8 + 1;
        local_4c = local_4c + 1;
      } while ((int)piVar8 < 0x3012a2c);
    }
    FUN_00483180(param_1 + (int)piVar7 * 4,&DAT_0300e114,
                 ((int)piVar7 * 0x3fffffff + (int)piVar9) * 4);
    *param_2 = (int)piVar9;
    param_5[4] = local_20[0];
    param_5[5] = local_20[1];
    param_5[6] = local_20[2];
    if ((int)local_20[0] < (int)local_20[1]) {
      local_20[0] = local_20[1];
    }
    if ((int)local_20[0] < (int)local_20[2]) {
      local_20[0] = local_20[2];
    }
    param_5[1] = local_20[0];
    *param_5 = 1;
  }
  return;
}


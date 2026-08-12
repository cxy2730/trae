// Function: FUN_004548c0
// Entry:    004548c0
// Size:     3263 bytes
// Conv:     unknown
// Signature: undefined FUN_004548c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004548c0(uint *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *local_30;
  byte *local_2c;
  uint local_28;
  byte *local_24;
  byte *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar3 = param_1;
  local_30 = (byte *)*param_2;
  local_2c = (byte *)param_2[1];
  local_28 = param_1[8];
  pbVar8 = (byte *)param_1[7];
  pbVar4 = (byte *)param_1[0xd];
  if (pbVar4 < (byte *)param_1[0xc]) {
    local_24 = (byte *)param_1[0xc] + (-1 - (int)pbVar4);
    param_1 = (uint *)pbVar4;
  }
  else {
    local_24 = (byte *)(param_1[0xb] - (int)pbVar4);
    param_1 = (uint *)pbVar4;
  }
switchD_00454971_default:
  uVar11 = local_28;
  switch(*puVar3) {
  case 0:
    goto switchD_0045490d_caseD_0;
  case 1:
    for (; pbVar8 < (byte *)0x20; pbVar8 = pbVar8 + 8) {
      if (local_2c == (byte *)0x0) {
        puVar3[8] = local_28;
        puVar3[7] = (uint)pbVar8;
        iVar6 = *param_2;
        param_2[1] = 0;
        *param_2 = (int)local_30;
        param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
        puVar3[0xd] = (uint)param_1;
        FUN_0045daf0(puVar3,param_2,param_3);
        return;
      }
      param_3 = 0;
      local_2c = local_2c + -1;
      local_28 = local_28 | (uint)*local_30 << ((byte)pbVar8 & 0x1f);
      local_30 = local_30 + 1;
    }
    uVar11 = local_28 & 0xffff;
    if (~local_28 >> 0x10 != uVar11) {
      *puVar3 = 9;
      param_2[6] = (int)s_invalid_stored_block_lengths_02fb3218;
      puVar3[8] = local_28;
      puVar3[7] = (uint)pbVar8;
      iVar6 = *param_2;
      *param_2 = (int)local_30;
      param_2[1] = (int)local_2c;
      param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
      puVar3[0xd] = (uint)param_1;
      FUN_0045daf0(puVar3,param_2,0xfffffffd);
      return;
    }
    pbVar8 = (byte *)0x0;
    puVar3[1] = uVar11;
    local_28 = 0;
    if (uVar11 != 0) {
      *puVar3 = 2;
      goto switchD_00454971_default;
    }
    break;
  case 2:
    if (local_2c == (byte *)0x0) {
      puVar3[8] = local_28;
      puVar3[7] = (uint)pbVar8;
      iVar6 = *param_2;
      *param_2 = (int)local_30;
      param_2[1] = 0;
      param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
      puVar3[0xd] = (uint)param_1;
      FUN_0045daf0(puVar3,param_2,param_3);
      return;
    }
    if (local_24 == (byte *)0x0) {
      if (param_1 == (uint *)puVar3[0xb]) {
        pbVar4 = (byte *)puVar3[0xc];
        pbVar9 = (byte *)puVar3[10];
        if (pbVar4 != pbVar9) {
          if (pbVar9 < pbVar4) {
            local_24 = pbVar4 + (-1 - (int)pbVar9);
          }
          else {
            local_24 = (byte *)puVar3[0xb] + -(int)pbVar9;
          }
          param_1 = (uint *)pbVar9;
          if (local_24 != (byte *)0x0) goto LAB_00454b36;
        }
      }
      puVar3[0xd] = (uint)param_1;
      uVar7 = FUN_0045daf0(puVar3,param_2,param_3);
      param_1 = (uint *)puVar3[0xd];
      pbVar4 = (byte *)puVar3[0xc];
      if (param_1 < pbVar4) {
        local_24 = pbVar4 + (-1 - (int)param_1);
      }
      else {
        local_24 = (byte *)(puVar3[0xb] - (int)param_1);
      }
      local_20 = (byte *)puVar3[0xb];
      if ((param_1 == (uint *)local_20) && (pbVar9 = (byte *)puVar3[10], pbVar4 != pbVar9)) {
        param_1 = (uint *)pbVar9;
        if (pbVar9 < pbVar4) {
          local_24 = pbVar4 + (-1 - (int)pbVar9);
        }
        else {
          local_24 = local_20 + -(int)pbVar9;
        }
      }
      if (local_24 == (byte *)0x0) {
        puVar3[8] = local_28;
        puVar3[7] = (uint)pbVar8;
        iVar6 = *param_2;
        param_2[1] = (int)local_2c;
        *param_2 = (int)local_30;
        param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
        puVar3[0xd] = (uint)param_1;
        FUN_0045daf0(puVar3,param_2,uVar7);
        return;
      }
    }
LAB_00454b36:
    param_3 = 0;
    pbVar4 = (byte *)puVar3[1];
    if (local_2c < (byte *)puVar3[1]) {
      pbVar4 = local_2c;
    }
    if (local_24 < pbVar4) {
      pbVar4 = local_24;
    }
    pbVar9 = local_30;
    pbVar10 = (byte *)param_1;
    for (uVar11 = (uint)pbVar4 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar10 = pbVar10 + 4;
    }
    local_24 = local_24 + -(int)pbVar4;
    for (uVar11 = (uint)pbVar4 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar10 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    }
    local_30 = local_30 + (int)pbVar4;
    uVar11 = puVar3[1];
    local_2c = local_2c + -(int)pbVar4;
    param_1 = (uint *)((int)param_1 + (int)pbVar4);
    puVar3[1] = uVar11 - (int)pbVar4;
    if (uVar11 - (int)pbVar4 != 0) goto switchD_00454971_default;
    break;
  case 3:
    for (; pbVar8 < (byte *)0xe; pbVar8 = pbVar8 + 8) {
      if (local_2c == (byte *)0x0) {
        puVar3[8] = local_28;
        puVar3[7] = (uint)pbVar8;
        iVar6 = *param_2;
        *param_2 = (int)local_30;
        param_2[1] = 0;
        param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
        puVar3[0xd] = (uint)param_1;
        FUN_0045daf0(puVar3,param_2,param_3);
        return;
      }
      local_2c = local_2c + -1;
      param_3 = 0;
      local_28 = local_28 | (uint)*local_30 << ((byte)pbVar8 & 0x1f);
      local_30 = local_30 + 1;
    }
    puVar3[1] = local_28 & 0x3fff;
    if ((0x1d < (local_28 & 0x1f)) || (0x3a0 < (local_28 & 0x3e0))) {
      *puVar3 = 9;
      param_2[6] = (int)s_too_many_length_or_distance_symb_02fb31f4;
      puVar3[8] = local_28;
      puVar3[7] = (uint)pbVar8;
      iVar6 = *param_2;
      param_2[1] = (int)local_2c;
      *param_2 = (int)local_30;
      param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
      puVar3[0xd] = (uint)param_1;
      FUN_0045daf0(puVar3,param_2,0xfffffffd);
      return;
    }
    uVar11 = (*(code *)param_2[8])
                       (param_2[10],((local_28 & 0x3fff) >> 5 & 0x1f) + 0x102 + (local_28 & 0x1f),4)
    ;
    puVar3[3] = uVar11;
    if (uVar11 == 0) {
      puVar3[8] = local_28;
      puVar3[7] = (uint)pbVar8;
      iVar6 = *param_2;
      param_2[1] = (int)local_2c;
      *param_2 = (int)local_30;
      param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
      puVar3[0xd] = (uint)param_1;
      FUN_0045daf0(puVar3,param_2,0xfffffffc);
      return;
    }
    local_28 = local_28 >> 0xe;
    pbVar8 = pbVar8 + -0xe;
    puVar3[2] = 0;
    *puVar3 = 4;
    goto LAB_00454c5d;
  case 4:
LAB_00454c5d:
    if (puVar3[2] < (puVar3[1] >> 10) + 4) {
      do {
        for (; pbVar8 < (byte *)0x3; pbVar8 = pbVar8 + 8) {
          if (local_2c == (byte *)0x0) {
            puVar3[8] = local_28;
            puVar3[7] = (uint)pbVar8;
            iVar6 = *param_2;
            *param_2 = (int)local_30;
            param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
            param_2[1] = 0;
            puVar3[0xd] = (uint)param_1;
            FUN_0045daf0(puVar3,param_2,param_3);
            return;
          }
          local_2c = local_2c + -1;
          param_3 = 0;
          local_28 = local_28 | (uint)*local_30 << ((byte)pbVar8 & 0x1f);
          local_30 = local_30 + 1;
        }
        uVar11 = local_28 & 7;
        pbVar8 = pbVar8 + -3;
        local_28 = local_28 >> 3;
        *(uint *)(puVar3[3] + *(int *)(&DAT_02f98c20 + puVar3[2] * 4) * 4) = uVar11;
        uVar11 = puVar3[2];
        puVar3[2] = uVar11 + 1;
      } while (uVar11 + 1 < (puVar3[1] >> 10) + 4);
    }
    uVar11 = puVar3[2];
    while (uVar11 < 0x13) {
      *(undefined4 *)(puVar3[3] + *(int *)(&DAT_02f98c20 + puVar3[2] * 4) * 4) = 0;
      uVar11 = puVar3[2] + 1;
      puVar3[2] = uVar11;
    }
    puVar3[4] = 7;
    iVar6 = FUN_0045d3b0(puVar3[3],puVar3 + 4,puVar3 + 5,puVar3[9],param_2);
    uVar11 = local_28;
    if (iVar6 == 0) {
      puVar3[2] = 0;
      *puVar3 = 5;
LAB_00454d46:
      if (puVar3[2] < (puVar3[1] >> 5 & 0x1f) + 0x102 + (puVar3[1] & 0x1f)) {
        do {
          for (; pbVar8 < (byte *)puVar3[4]; pbVar8 = pbVar8 + 8) {
            if (local_2c == (byte *)0x0) goto LAB_00455329;
            local_2c = local_2c + -1;
            param_3 = 0;
            uVar11 = uVar11 | (uint)*local_30 << ((byte)pbVar8 & 0x1f);
            local_30 = local_30 + 1;
          }
          bVar1 = *(byte *)(puVar3[5] + 1 +
                           (*(uint *)(&DAT_02fb4530 + (int)puVar3[4] * 4) & uVar11) * 8);
          uVar5 = (uint)bVar1;
          local_c = *(uint *)(puVar3[5] +
                              (*(uint *)(&DAT_02fb4530 + (int)puVar3[4] * 4) & uVar11) * 8 + 4);
          if (local_c < 0x10) {
            pbVar8 = pbVar8 + -uVar5;
            uVar11 = uVar11 >> (bVar1 & 0x1f);
            *(uint *)(puVar3[3] + puVar3[2] * 4) = local_c;
            pbVar4 = (byte *)(puVar3[2] + 1);
          }
          else {
            local_24 = (byte *)0x7;
            if (local_c != 0x12) {
              local_24 = (byte *)(local_c - 0xe);
            }
            local_20 = local_24 + uVar5;
            for (; pbVar8 < local_20; pbVar8 = pbVar8 + 8) {
              if (local_2c == (byte *)0x0) {
LAB_00455329:
                puVar3[8] = uVar11;
                puVar3[7] = (uint)pbVar8;
                iVar6 = *param_2;
                *param_2 = (int)local_30;
                param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
                param_2[1] = 0;
                puVar3[0xd] = (uint)param_1;
                FUN_0045daf0(puVar3,param_2,param_3);
                return;
              }
              local_2c = local_2c + -1;
              param_3 = 0;
              uVar11 = uVar11 | (uint)*local_30 << ((byte)pbVar8 & 0x1f);
              local_30 = local_30 + 1;
            }
            uVar11 = uVar11 >> (bVar1 & 0x1f);
            local_28 = (-(uint)(local_c != 0x12) & 0xfffffff8) + 0xb +
                       (*(uint *)(&DAT_02fb4530 + (int)local_24 * 4) & uVar11);
            uVar11 = uVar11 >> ((byte)local_24 & 0x1f);
            pbVar8 = pbVar8 + -(int)(local_24 + uVar5);
            local_24 = (byte *)puVar3[2];
            if ((byte *)((puVar3[1] >> 5 & 0x1f) + 0x102 + (puVar3[1] & 0x1f)) < local_24 + local_28
               ) {
LAB_00455368:
              (*(code *)param_2[9])(param_2[10],puVar3[3]);
              *puVar3 = 9;
              param_2[6] = (int)s_invalid_bit_length_repeat_02fb31d8;
              puVar3[8] = uVar11;
              puVar3[7] = (uint)pbVar8;
              iVar6 = *param_2;
              param_2[1] = (int)local_2c;
              *param_2 = (int)local_30;
              param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
              puVar3[0xd] = (uint)param_1;
              FUN_0045daf0(puVar3,param_2,0xfffffffd);
              return;
            }
            pbVar4 = local_24;
            if (local_c == 0x10) {
              if (local_24 == (byte *)0x0) goto LAB_00455368;
              uVar7 = *(undefined4 *)((puVar3[3] - 4) + (int)local_24 * 4);
            }
            else {
              uVar7 = 0;
            }
            do {
              pbVar4 = pbVar4 + 1;
              *(undefined4 *)((puVar3[3] - 4) + (int)pbVar4 * 4) = uVar7;
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          puVar3[2] = (uint)pbVar4;
        } while (puVar3[2] < (puVar3[1] >> 5 & 0x1f) + 0x102 + (puVar3[1] & 0x1f));
      }
      puVar3[5] = 0;
      local_20 = (byte *)0x9;
      local_24 = (byte *)0x6;
      local_28 = FUN_0045d930((puVar3[1] & 0x1f) + 0x101,(puVar3[1] >> 5 & 0x1f) + 1,puVar3[3],
                              &local_20,&local_24,&local_4,&local_8,puVar3[9],param_2);
      (*(code *)param_2[9])(param_2[10],puVar3[3]);
      if (local_28 == 0) {
        uVar5 = FUN_0045cba0(local_20,local_24,local_4,local_8,param_2);
        if (uVar5 == 0) {
          puVar3[8] = uVar11;
          puVar3[7] = (uint)pbVar8;
          param_2[1] = (int)local_2c;
          param_2[2] = (int)(local_30 + (param_2[2] - *param_2));
          *param_2 = (int)local_30;
          puVar3[0xd] = (uint)param_1;
          FUN_0045daf0(puVar3,param_2,0xfffffffc);
          return;
        }
        puVar3[1] = uVar5;
        *puVar3 = 6;
LAB_00454f96:
        puVar3[8] = uVar11;
        puVar3[7] = (uint)pbVar8;
        iVar6 = *param_2;
        param_2[1] = (int)local_2c;
        *param_2 = (int)local_30;
        param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
        puVar3[0xd] = (uint)param_1;
        iVar6 = FUN_0045cbe0(puVar3,param_2,param_3);
        if (iVar6 == 1) {
          param_3 = 0;
          FUN_0045d390(puVar3[1],param_2);
          local_28 = puVar3[8];
          param_1 = (uint *)puVar3[0xd];
          local_30 = (byte *)*param_2;
          local_2c = (byte *)param_2[1];
          pbVar8 = (byte *)puVar3[7];
          if (param_1 < (byte *)puVar3[0xc]) {
            local_24 = (byte *)puVar3[0xc] + (-1 - (int)param_1);
          }
          else {
            local_24 = (byte *)(puVar3[0xb] - (int)param_1);
          }
          if (puVar3[6] == 0) {
            *puVar3 = 0;
            goto switchD_00454971_default;
          }
          *puVar3 = 7;
LAB_00455458:
          puVar3[0xd] = (uint)param_1;
          iVar6 = FUN_0045daf0(puVar3,param_2,param_3);
          param_1 = (uint *)puVar3[0xd];
          if ((uint *)puVar3[0xc] == param_1) {
            *puVar3 = 8;
LAB_004554bf:
            puVar3[8] = local_28;
            puVar3[7] = (uint)pbVar8;
            param_2[1] = (int)local_2c;
            param_2[2] = (int)(local_30 + (param_2[2] - *param_2));
            *param_2 = (int)local_30;
            puVar3[0xd] = (uint)param_1;
            FUN_0045daf0(puVar3,param_2,1);
            return;
          }
          puVar3[7] = (uint)pbVar8;
          puVar3[8] = local_28;
          iVar2 = *param_2;
          param_2[1] = (int)local_2c;
          *param_2 = (int)local_30;
          param_2[2] = (int)(local_30 + (param_2[2] - iVar2));
          puVar3[0xd] = (uint)param_1;
        }
        FUN_0045daf0(puVar3,param_2,iVar6);
        return;
      }
    }
    else {
      (*(code *)param_2[9])(param_2[10],puVar3[3]);
      local_28 = iVar6;
    }
    if (local_28 == -3) {
      *puVar3 = 9;
    }
    puVar3[8] = uVar11;
    puVar3[7] = (uint)pbVar8;
    iVar6 = *param_2;
    param_2[1] = (int)local_2c;
    *param_2 = (int)local_30;
    param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
    puVar3[0xd] = (uint)param_1;
    FUN_0045daf0(puVar3,param_2,local_28);
    return;
  case 5:
    goto LAB_00454d46;
  case 6:
    goto LAB_00454f96;
  case 7:
    goto LAB_00455458;
  case 8:
    goto LAB_004554bf;
  case 9:
    puVar3[8] = local_28;
    puVar3[7] = (uint)pbVar8;
    iVar6 = *param_2;
    param_2[1] = (int)local_2c;
    *param_2 = (int)local_30;
    param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
    puVar3[0xd] = (uint)param_1;
    FUN_0045daf0(puVar3,param_2,0xfffffffd);
    return;
  default:
    puVar3[8] = local_28;
    puVar3[7] = (uint)pbVar8;
    iVar6 = *param_2;
    param_2[1] = (int)local_2c;
    *param_2 = (int)local_30;
    param_2[2] = (int)(local_30 + (param_2[2] - iVar6));
    puVar3[0xd] = (uint)param_1;
    FUN_0045daf0(puVar3,param_2,0xfffffffe);
    return;
  }
  *puVar3 = -(uint)(puVar3[6] != 0) & 7;
  goto switchD_00454971_default;
switchD_0045490d_caseD_0:
  for (; pbVar8 < (byte *)0x3; pbVar8 = pbVar8 + 8) {
    if (local_2c == (byte *)0x0) {
      puVar3[8] = local_28;
      puVar3[7] = (uint)pbVar8;
      param_2[1] = 0;
      param_2[2] = (int)(local_30 + (param_2[2] - *param_2));
      *param_2 = (int)local_30;
      puVar3[0xd] = (uint)param_1;
      FUN_0045daf0(puVar3,param_2,param_3);
      return;
    }
    local_2c = local_2c + -1;
    param_3 = 0;
    local_28 = local_28 | (uint)*local_30 << ((byte)pbVar8 & 0x1f);
    local_30 = local_30 + 1;
  }
  puVar3[6] = local_28 & 1;
  switch((local_28 & 7) >> 1) {
  case 0:
    *puVar3 = 1;
    uVar11 = (uint)(pbVar8 + -3) & 7;
    local_28 = (local_28 >> 3) >> (sbyte)uVar11;
    pbVar8 = pbVar8 + -3 + -uVar11;
    break;
  case 1:
    FUN_0045dac0(&local_10,&local_14,&local_18,&local_1c,param_2);
    uVar11 = FUN_0045cba0(local_10,local_14,local_18,local_1c,param_2);
    puVar3[1] = uVar11;
    if (uVar11 == 0) {
      puVar3[8] = local_28;
      puVar3[7] = (uint)pbVar8;
      param_2[1] = (int)local_2c;
      param_2[2] = (int)(local_30 + (param_2[2] - *param_2));
      *param_2 = (int)local_30;
      puVar3[0xd] = (uint)param_1;
      FUN_0045daf0(puVar3,param_2,0xfffffffc);
      return;
    }
    local_28 = local_28 >> 3;
    pbVar8 = pbVar8 + -3;
    *puVar3 = 6;
    break;
  case 2:
    local_28 = local_28 >> 3;
    pbVar8 = pbVar8 + -3;
    *puVar3 = 3;
    break;
  case 3:
    *puVar3 = 9;
    param_2[6] = (int)s_invalid_block_type_02fb3238;
    puVar3[8] = local_28 >> 3;
    puVar3[7] = (uint)(pbVar8 + -3);
    param_2[1] = (int)local_2c;
    param_2[2] = (int)(local_30 + (param_2[2] - *param_2));
    *param_2 = (int)local_30;
    puVar3[0xd] = (uint)param_1;
    FUN_0045daf0(puVar3,param_2,0xfffffffd);
    return;
  }
  goto switchD_00454971_default;
}


// Function: FUN_0044a770
// Entry:    0044a770
// Size:     1333 bytes
// Conv:     unknown
// Signature: undefined FUN_0044a770(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044a770(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  bool bVar15;
  byte *local_18;
  byte local_c;
  byte *local_4;
  
  bVar1 = *(byte *)(param_1 + 0x15f);
  uVar7 = (uint)bVar1;
  uVar12 = *(uint *)(param_1 + 0x100);
  local_18 = (byte *)(*(int *)(param_1 + 0x124) + 1);
  bVar2 = *(byte *)(param_1 + 0x155);
  uVar13 = (uint)bVar2;
  local_4 = (byte *)0x0;
  bVar3 = 0;
  if (uVar7 == 0) {
    FUN_004463d0(param_1,s_internal_row_logic_error_02fb2a50);
  }
  if (*(uint *)(param_1 + 0x138) != 0) {
    if (uVar7 < 8) {
      uVar6 = uVar12 * uVar7 + 7 >> 3;
    }
    else {
      uVar6 = (bVar1 >> 3) * uVar12;
    }
    if (*(uint *)(param_1 + 0x138) != uVar6) {
      FUN_004463d0(param_1,s_internal_row_size_calculation_er_02fb2a2c);
    }
  }
  if (uVar12 == 0) {
    FUN_004463d0(param_1,s_internal_row_width_error_02fb2a10);
  }
  uVar6 = uVar12 * uVar7;
  local_c = (byte)(uVar6 & 7);
  if ((uVar6 & 7) != 0) {
    if (uVar7 < 8) {
      uVar9 = uVar6 + 7 >> 3;
    }
    else {
      uVar9 = (bVar1 >> 3) * uVar12;
    }
    local_4 = param_2 + (uVar9 - 1);
    bVar3 = *local_4;
    if ((*(uint *)(param_1 + 0x7c) & 0x10000) == 0) {
      local_c = (byte)(0xff >> local_c);
    }
    else {
      local_c = (byte)(0xff << local_c);
    }
  }
  if ((((*(char *)(param_1 + 0x154) == '\0') || ((*(uint *)(param_1 + 0x7c) & 2) == 0)) ||
      (5 < uVar13)) || ((param_3 != 0 && ((param_3 != 1 || ((bVar2 & 1) == 0)))))) {
    if (uVar7 < 8) {
      uVar12 = uVar6 + 7 >> 3;
    }
    else {
      uVar12 = (bVar1 >> 3) * uVar12;
    }
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)local_18;
      local_18 = local_18 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *param_2 = *local_18;
      local_18 = local_18 + 1;
      param_2 = param_2 + 1;
    }
  }
  else {
    uVar6 = (uVar13 & 1) << (3U - (char)(uVar13 + 1 >> 1) & 0x1f) & 7;
    if (uVar12 <= uVar6) {
      return;
    }
    if (7 < uVar7) {
      if ((bVar1 & 7) != 0) {
        FUN_004463d0(param_1,s_invalid_user_transform_pixel_dep_02fb29ec);
      }
      uVar7 = (uint)(bVar1 >> 3);
      iVar8 = uVar6 * uVar7;
      uVar12 = uVar12 * uVar7 - iVar8;
      param_2 = param_2 + iVar8;
      local_18 = local_18 + iVar8;
      bVar15 = param_3 != 0;
      param_3 = uVar7;
      if ((bVar15) &&
         (param_3 = (1 << ((byte)(6 - uVar13 >> 1) & 0x1f)) * uVar7,
         uVar12 <= param_3 && param_3 - uVar12 != 0)) {
        param_3 = uVar12;
      }
      uVar6 = param_3;
      uVar7 = (1 << ((byte)(7 - uVar13 >> 1) & 0x1f)) * uVar7;
      if (param_3 == 1) {
        *param_2 = *local_18;
        if (uVar12 <= uVar7) {
          return;
        }
        do {
          pbVar11 = local_18 + uVar7;
          local_18 = local_18 + uVar7;
          param_2 = param_2 + uVar7;
          uVar12 = uVar12 - uVar7;
          *param_2 = *pbVar11;
        } while (uVar7 < uVar12);
        return;
      }
      if (param_3 == 2) {
        *param_2 = *local_18;
        param_2[1] = local_18[1];
        if (uVar12 <= uVar7) {
          return;
        }
        do {
          uVar12 = uVar12 - uVar7;
          local_18 = local_18 + uVar7;
          param_2 = param_2 + uVar7;
          if (uVar12 < 2) {
            *param_2 = *local_18;
            return;
          }
          *param_2 = *local_18;
          param_2[1] = local_18[1];
        } while (uVar7 < uVar12);
        return;
      }
      if (param_3 != 3) {
        if ((((param_3 < 0x10) && (((uint)param_2 & 1) == 0)) && (((uint)local_18 & 1) == 0)) &&
           (((param_3 & 1) == 0 && ((uVar7 & 1) == 0)))) {
          if (((((uint)param_2 & 3) == 0) && (((uint)local_18 & 3) == 0)) &&
             (((param_3 & 3) == 0 && ((uVar7 & 3) == 0)))) {
            uVar13 = uVar7 - param_3;
            param_3 = uVar6;
            while( true ) {
              do {
                uVar5 = *(undefined4 *)local_18;
                local_18 = local_18 + 4;
                *(undefined4 *)param_2 = uVar5;
                param_2 = param_2 + 4;
                param_3 = param_3 - 4;
              } while (param_3 != 0);
              if (uVar12 <= uVar7) break;
              uVar9 = uVar13 & 0xfffffffc;
              uVar12 = uVar12 - uVar7;
              param_2 = param_2 + uVar9;
              local_18 = local_18 + uVar9;
              param_3 = uVar6;
              if (uVar12 < uVar6) {
                iVar8 = (int)local_18 - (int)param_2;
                do {
                  *param_2 = param_2[iVar8];
                  param_2 = param_2 + 1;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
                return;
              }
            }
            return;
          }
          uVar13 = uVar7 - param_3;
          param_3 = uVar6;
          while( true ) {
            do {
              uVar4 = *(undefined2 *)local_18;
              local_18 = local_18 + 2;
              *(undefined2 *)param_2 = uVar4;
              param_2 = param_2 + 2;
              param_3 = param_3 - 2;
            } while (param_3 != 0);
            if (uVar12 <= uVar7) break;
            uVar9 = uVar13 & 0xfffffffe;
            uVar12 = uVar12 - uVar7;
            param_2 = param_2 + uVar9;
            local_18 = local_18 + uVar9;
            param_3 = uVar6;
            if (uVar12 < uVar6) {
              iVar8 = (int)local_18 - (int)param_2;
              do {
                *param_2 = param_2[iVar8];
                param_2 = param_2 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
              return;
            }
          }
          return;
        }
        pbVar11 = local_18;
        pbVar14 = param_2;
        for (uVar13 = param_3 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pbVar14 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar14 = pbVar14 + 4;
        }
        for (uVar13 = param_3 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pbVar14 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar14 = pbVar14 + 1;
        }
        if (uVar12 <= uVar7) {
          return;
        }
        do {
          uVar12 = uVar12 - uVar7;
          local_18 = local_18 + uVar7;
          param_2 = param_2 + uVar7;
          if (uVar12 < param_3) {
            param_3 = uVar12;
          }
          pbVar11 = local_18;
          pbVar14 = param_2;
          for (uVar13 = param_3 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar14 = *(undefined4 *)pbVar11;
            pbVar11 = pbVar11 + 4;
            pbVar14 = pbVar14 + 4;
          }
          for (uVar13 = param_3 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar14 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            pbVar14 = pbVar14 + 1;
          }
        } while (uVar7 < uVar12);
        return;
      }
      *param_2 = *local_18;
      param_2[1] = local_18[1];
      param_2[2] = local_18[2];
      if (uVar12 <= uVar7) {
        return;
      }
      do {
        pbVar11 = local_18 + uVar7;
        local_18 = local_18 + uVar7;
        param_2 = param_2 + uVar7;
        uVar12 = uVar12 - uVar7;
        *param_2 = *pbVar11;
        param_2[1] = local_18[1];
        param_2[2] = local_18[2];
      } while (uVar7 < uVar12);
      return;
    }
    uVar6 = (uint)(8 / (ulonglong)uVar7);
    if ((*(uint *)(param_1 + 0x7c) & 0x10000) == 0) {
      if (param_3 == 0) {
        if (uVar7 == 1) {
          iVar8 = 0;
        }
        else {
          iVar8 = (uVar7 != 2) + 1;
        }
        puVar10 = *(undefined **)(&DAT_02f9856c + (uVar13 + iVar8 * 6) * 4);
      }
      else {
        if (uVar7 == 1) {
          iVar8 = 0;
        }
        else {
          iVar8 = (uVar7 != 2) + 1;
        }
        puVar10 = *(undefined **)(&DAT_02f985d8 + ((uint)(bVar2 >> 1) + iVar8 * 3) * 4);
      }
    }
    else if (param_3 == 0) {
      if (uVar7 == 1) {
        iVar8 = 0;
      }
      else {
        iVar8 = (uVar7 != 2) + 1;
      }
      puVar10 = (&PTR_DAT_02f98524)[uVar13 + iVar8 * 6];
    }
    else {
      if (uVar7 == 1) {
        iVar8 = 0;
      }
      else {
        iVar8 = (uVar7 != 2) + 1;
      }
      puVar10 = *(undefined **)(&DAT_02f985b4 + ((uint)(bVar2 >> 1) + iVar8 * 3) * 4);
    }
    while( true ) {
      if (((uint)puVar10 & 0xff) != 0) {
        if (((uint)puVar10 & 0xff) == 0xff) {
          *param_2 = *local_18;
        }
        else {
          *param_2 = ~(byte)puVar10 & *param_2 | *local_18 & (byte)puVar10;
        }
      }
      if (uVar12 <= uVar6) break;
      uVar12 = uVar12 - uVar6;
      param_2 = param_2 + 1;
      local_18 = local_18 + 1;
      puVar10 = (undefined *)((uint)puVar10 >> 8 | (int)puVar10 << 0x18);
    }
  }
  if (local_4 != (byte *)0x0) {
    *local_4 = ~local_c & *local_4 | local_c & bVar3;
  }
  return;
}


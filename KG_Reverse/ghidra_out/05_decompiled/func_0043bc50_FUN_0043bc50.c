// Function: FUN_0043bc50
// Entry:    0043bc50
// Size:     772 bytes
// Conv:     unknown
// Signature: undefined FUN_0043bc50(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Type propagation algorithm not settling */

int FUN_0043bc50(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined1 local_10a0 [4114];
  uint local_8e;
  char local_88;
  char local_87;
  char local_86;
  undefined1 *local_7e;
  uint local_76;
  uint local_72;
  ushort local_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  int local_5a;
  uint local_40;
  uint local_3c;
  undefined1 *local_38;
  int local_34;
  int local_30;
  int *local_2c;
  char *local_28;
  undefined1 *local_24;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004a0cb0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FUN_004835e0();
  *param_2 = 0;
  local_28 = &local_88;
  local_24 = (undefined1 *)0x36;
  local_2c = param_1;
  *param_3 = 0;
  iVar13 = 0x36;
  local_30 = 0x43bca4;
  iVar1 = FUN_0043bbb0();
  if ((iVar1 == 0x36) && ((local_88 == 'B' || (local_87 == 'M')))) {
    iVar10 = (local_76 ^ (int)local_76 >> 0x1f) - ((int)local_76 >> 0x1f);
    local_24 = local_7e;
    local_8e = CONCAT22(local_8e._2_2_,local_6c);
    iVar1 = (local_72 ^ (int)local_72 >> 0x1f) - ((int)local_72 >> 0x1f);
    if (CONCAT22(uStack_68,uStack_6a) == 0) {
      iVar2 = local_5a;
      if (local_5a == 0) {
        iVar2 = 1 << ((byte)local_6c & 0x1f);
      }
      iVar12 = 0;
      switch(local_6c) {
      case 1:
      case 4:
      case 8:
        local_24 = (undefined1 *)(iVar2 * 4);
        local_28 = (char *)0x43bd43;
        iVar12 = FUN_00492f17();
        local_2c = (int *)0x0;
        local_34 = iVar12;
        if (0 < iVar2) {
          do {
            local_28 = &local_88;
            local_24 = (undefined1 *)0x4;
            local_2c = param_1;
            local_30 = 0x43bd70;
            iVar3 = FUN_0043bbb0();
            if (iVar3 != 4) {
              local_24 = (undefined1 *)local_34;
              goto LAB_0043c00c;
            }
            iVar13 = iVar13 + 4;
            local_28[1] = local_86;
            *local_28 = local_87;
            local_28[-1] = local_88;
            local_28 = local_28 + 4;
            local_2c = (int *)((int)local_2c + 1);
          } while ((int)local_2c < iVar2);
        }
      case 0x18:
      case 0x20:
        if (iVar13 <= (int)local_24) {
          puVar5 = local_24;
          if (iVar13 < (int)local_24) {
            local_24 = (undefined1 *)0x43bddf;
            FUN_00493768();
            local_24 = (undefined1 *)0x1;
            local_28 = (char *)(1 - iVar13);
            local_8 = 1;
            local_2c = (int *)0x43be00;
            (**(code **)(*param_1 + 0x28))();
            local_8 = 0xffffffff;
            local_24 = (undefined1 *)0x43be0c;
            FUN_004937a6();
            puVar5 = local_24;
          }
          *param_2 = iVar10;
          *param_3 = iVar1;
          local_24 = (undefined1 *)(iVar1 * iVar10 * 3);
          local_28 = (char *)0x43be2a;
          iVar13 = FUN_00492f17();
          local_40 = (uint)(local_6c >> 3);
          pcVar9 = (char *)(local_40 * iVar10);
          local_2c = (int *)(iVar1 + -1);
          puVar11 = (undefined1 *)0x0;
          param_2 = (int *)0x0;
          local_30 = 0;
          local_28 = pcVar9;
          while( true ) {
            while( true ) {
              if ((int)local_2c < 0) {
                if (puVar11 != (undefined1 *)0x0) {
                  local_28 = (char *)0x43c130;
                  local_24 = puVar11;
                  FUN_00492f40();
                }
                if (iVar12 != 0) {
                  local_28 = (char *)0x43c140;
                  local_24 = (undefined1 *)iVar12;
                  FUN_00492f40();
                }
                ExceptionList = pvStack_10;
                return iVar13;
              }
              iVar1 = (int)local_2c * iVar10 * 3;
              if (((short)local_8e == 0x18) || ((short)local_8e == 0x20)) break;
              local_38 = (undefined1 *)(local_8e & 0xffff);
              iVar2 = 0;
              bVar7 = (byte)local_38;
              local_3c = local_3c & 0xffffff00;
              local_34 = 0;
              if (0 < iVar10) {
                puVar5 = (undefined1 *)(iVar1 + 1 + iVar13);
                goto LAB_0043bea2;
              }
              uVar4 = (int)puVar5 - (int)local_24;
              pcVar9 = local_28;
              while (local_28 = pcVar9, (uVar4 & 3) != 0) {
                if (local_30 <= (int)param_2) {
                  local_28 = local_10a0;
                  local_24 = (undefined1 *)0x1000;
                  local_2c = param_1;
                  local_30 = 0x43bfbb;
                  local_30 = FUN_0043bbb0();
                  param_2 = (int *)0x0;
                  if (local_30 < 1) {
                    local_28 = (char *)0x43c001;
                    local_24 = (undefined1 *)iVar13;
                    FUN_00492f40();
                    goto joined_r0x0043bf87;
                  }
                }
                param_2 = (int *)((int)param_2 + 1);
                puVar5 = puVar5 + 1;
                pcVar9 = local_28;
                uVar4 = (int)puVar5 - (int)local_24;
              }
              local_2c = (int *)((int)local_2c + -1);
            }
            if (puVar11 == (undefined1 *)0x0) {
              local_28 = (char *)0x43c031;
              local_24 = pcVar9;
              puVar11 = (undefined1 *)FUN_00492f17();
            }
            local_2c = param_1;
            local_30 = 0x43c042;
            local_28 = puVar11;
            local_24 = pcVar9;
            puVar6 = (undefined1 *)FUN_0043bbb0();
            if (puVar6 != pcVar9) break;
            puVar6 = (undefined1 *)(iVar1 + iVar13);
            if (0 < iVar10) {
              puVar8 = puVar11 + 1;
              local_38 = puVar11 + (2 - (int)puVar8);
              iVar2 = (int)puVar11 - (int)puVar8;
              iVar1 = iVar10;
              do {
                *puVar6 = puVar8[(int)local_38];
                puVar6[1] = *puVar8;
                puVar6[2] = puVar8[iVar2];
                puVar6 = puVar6 + 3;
                puVar8 = puVar8 + local_40;
                iVar1 = iVar1 + -1;
                pcVar9 = local_28;
              } while (iVar1 != 0);
            }
            local_24 = (undefined1 *)0x43c0af;
            FUN_00493768();
            local_8 = 4;
            for (puVar5 = puVar5 + (int)pcVar9; ((int)puVar5 - (int)local_24 & 3U) != 0;
                puVar5 = puVar5 + 1) {
              local_24 = (undefined1 *)0x1;
              local_28 = (undefined1 *)0x1;
              local_2c = (int *)0x43c0d1;
              (**(code **)(*param_1 + 0x28))();
            }
            local_8 = 0xffffffff;
            local_24 = (undefined1 *)0x43c114;
            FUN_004937a6();
            local_2c = (int *)((int)local_2c + -1);
          }
          local_28 = (char *)0x43c052;
          local_24 = puVar11;
          FUN_00492f40();
          local_2c = (int *)0x43c05b;
          local_28 = (char *)iVar13;
          FUN_00492f40();
        }
joined_r0x0043bf87:
        local_24 = (undefined1 *)iVar12;
        if (iVar12 != 0) {
LAB_0043c00c:
          local_28 = (char *)0x43c011;
          FUN_00492f40();
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return 0;
LAB_0043bea2:
  if (iVar2 < 1) {
    if (local_30 <= (int)param_2) {
      local_28 = local_10a0;
      local_24 = (undefined1 *)0x1000;
      local_2c = param_1;
      local_30 = 0x43bec5;
      local_30 = FUN_0043bbb0();
      param_2 = (int *)0x0;
      if (local_30 < 1) {
        local_28 = (char *)0x43bf7f;
        local_24 = (undefined1 *)iVar13;
        FUN_00492f40();
        goto joined_r0x0043bf87;
      }
    }
    iVar2 = 8;
    puVar11 = local_10a0 + (int)param_2;
    param_2 = (int *)((int)param_2 + 1);
    local_3c = CONCAT31(local_3c._1_3_,*puVar11);
  }
  iVar2 = iVar2 - (int)local_38;
  uVar4 = (local_3c & 0xff) >> ((byte)iVar2 & 0x1f) & (1 << (bVar7 & 0x1f)) - 1U;
  puVar5[1] = *(undefined1 *)(iVar12 + uVar4 * 4);
  *puVar5 = *(undefined1 *)(iVar12 + 1 + uVar4 * 4);
  puVar5[-1] = *(undefined1 *)(iVar12 + 2 + uVar4 * 4);
  local_34 = local_34 + 1;
  puVar5 = puVar5 + 3;
  if (iVar10 <= local_34) {
    iVar1 = FUN_0043bf8f();
    return iVar1;
  }
  goto LAB_0043bea2;
}


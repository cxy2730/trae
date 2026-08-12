// Function: FUN_004115c0
// Entry:    004115c0
// Size:     3115 bytes
// Conv:     unknown
// Signature: undefined FUN_004115c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004115c0(uint param_1,int param_2,undefined4 param_3,int param_4,HWND param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int iVar8;
  HWND pHVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  HWND pHVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  HACCEL *ppHVar20;
  undefined4 uVar21;
  HMENU local_d4;
  int local_cc;
  HACCEL local_bc;
  int local_b8;
  uint local_b4;
  undefined **local_b0;
  uint local_a8;
  int local_a0;
  int *local_9c;
  int local_98;
  HWND local_94;
  undefined **local_90;
  uint local_88;
  uint local_80;
  undefined **local_7c;
  uint local_74;
  int local_6c;
  undefined **local_68;
  uint local_60;
  int local_58;
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  HWND local_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_8;
  undefined4 local_4;
  
  local_b8 = 100;
  local_cc = 0;
  local_94 = (HWND)FUN_00413d70(0x3e9,0,0);
  iVar2 = FUN_0040e730(0,0);
  if (iVar2 != 0) {
    if (param_2 == 0) {
      iVar3 = FUN_00406cf0(iVar2 + 0x18);
      iVar3 = iVar2 + 0x18 + iVar3;
      iVar2 = FUN_00406cf0(iVar3);
      iVar2 = *(int *)(iVar3 + iVar2);
      if ((iVar2 != 0) && (BVar4 = IsWindow(*(HWND *)(iVar2 + 0x1c)), BVar4 != 0)) {
        if (*(int *)(iVar2 + 0x1b4) == 0) {
          BVar4 = IsIconic(*(HWND *)(iVar2 + 0x1c));
          if (BVar4 != 0) {
            FUN_00497580(9);
            return 1;
          }
          pHVar9 = SetActiveWindow(*(HWND *)(iVar2 + 0x1c));
          FUN_00494bb2(pHVar9);
          return 1;
        }
        FUN_00417eb0(0,0);
      }
    }
    if (param_4 == 1) {
      param_5 = (HWND)0x0;
    }
    else if ((param_5 != (HWND)0x0) && (BVar4 = IsWindow(param_5), BVar4 == 0)) {
      return 0;
    }
    FUN_00413d70(0x7d9,0,0);
    piVar1 = (int *)(param_1 + 0x34);
    FUN_0040e6c0(param_1 + 0x14);
    local_98 = FUN_0040eba0(param_1);
    if (local_98 != 0) {
      local_48 = (HWND)0x0;
      local_d4 = (HMENU)0x0;
      iVar2 = FUN_0040f200(&local_30);
      local_bc = (HACCEL)0x0;
      if (0 < iVar2) {
        ppHVar20 = &local_bc;
        uVar21 = 0;
        uVar19 = 0;
        uVar18 = 0xffffffff;
        uVar5 = FUN_0040e730(local_30,0);
        local_d4 = (HMENU)FUN_0041fcb0(uVar5,iVar2,uVar18,uVar19,ppHVar20,uVar21);
      }
      FUN_004062a0();
      local_90 = &PTR_FUN_02f954b0;
      FUN_004062a0();
      local_68 = &PTR_FUN_02f954b0;
      FUN_004062a0();
      local_7c = &PTR_FUN_02f954b0;
      FUN_004062a0();
      uVar13 = *(uint *)(param_1 + 0x18);
      uVar12 = uVar13;
      local_b4 = uVar13;
      for (; 0 < (int)uVar13; uVar13 = uVar13 - 1) {
        uVar15 = -(uint)(uVar13 != uVar12) & uVar13;
        puVar6 = (undefined4 *)FUN_0040e730(uVar15,0);
        if (puVar6 == (undefined4 *)0x0) break;
        iVar2 = FUN_0040ee10(uVar15);
        if (iVar2 != 1) {
          iVar2 = FUN_00413d70(0x3ea,*puVar6,0);
          if (((iVar2 == 0) || (*(code **)(iVar2 + 0x2c) == (code *)0x0)) ||
             (pcVar7 = (code *)(**(code **)(iVar2 + 0x2c))(1), pcVar7 == (code *)0x0)) {
            if (local_bc != (HACCEL)0x0) {
              DestroyAcceleratorTable(local_bc);
            }
            if (local_d4 != (HMENU)0x0) {
              DestroyMenu(local_d4);
            }
            (**(code **)(*piVar1 + 8))();
LAB_00411b21:
            local_b0 = &PTR_FUN_02f95460;
            FUN_004064a0();
            local_7c = &PTR_FUN_02f95460;
            FUN_004064a0();
            local_68 = &PTR_FUN_02f95460;
            FUN_004064a0();
            local_90 = &PTR_FUN_02f95460;
            FUN_004064a0();
            return 0;
          }
          iVar3 = FUN_00406cf0(puVar6 + 6);
          iVar3 = (int)(puVar6 + 6) + iVar3;
          iVar8 = FUN_00406cf0(iVar3);
          piVar14 = (int *)(iVar3 + iVar8);
          local_9c = piVar14;
          uStack_3c = FUN_0040ee30(puVar6,&uStack_54);
          uStack_34 = FUN_0040e780(uVar15);
          FUN_004065a0(*(uint *)(iVar2 + 0x14) >> 8 & 1);
          iStack_50 = piVar14[1];
          iStack_40 = piVar14[2];
          iStack_44 = piVar14[3];
          iStack_38 = piVar14[4];
          uVar12 = 0;
          iVar3 = (int)piVar14 + piVar14[piVar14[7] + 8] + piVar14[7] * 4 + 0x24;
          iVar8 = FUN_00406cf0(iVar3);
          uStack_4c = *(uint *)(iVar3 + 4 + iVar8);
          if ((*(uint *)(iVar2 + 0x14) & 0x8000) == 0) {
            if ((param_2 == 0) || (uVar15 != 0)) {
              FUN_00406570(uStack_4c & 0xffffff01);
              if ((uStack_4c & 2) != 0) {
                uVar12 = 0x8000000;
              }
            }
            else {
              FUN_00406570(1);
            }
          }
          else {
            FUN_00406570(0);
          }
          uVar5 = uStack_34;
          iVar2 = local_b8;
          if ((uStack_4c & 4) != 0) {
            uVar12 = uVar12 | 0x10000;
          }
          if (uVar15 == 0) {
            DAT_02fe8638 = param_4;
            iVar3 = (*pcVar7)(uStack_3c,uStack_54,uVar12,param_5,0,local_d4,iStack_50,iStack_40,
                              iStack_44,iStack_38,local_98,uStack_34,0,0);
            DAT_02fe8638 = 0;
            if (((iVar3 == 0) || (local_48 = *(HWND *)(iVar3 + 0x1c), local_48 == (HWND)0x0)) ||
               (BVar4 = IsWindow(local_48), BVar4 == 0)) {
              if (local_bc != (HACCEL)0x0) {
                DestroyAcceleratorTable(local_bc);
              }
              if (local_d4 != (HMENU)0x0) {
                DestroyMenu(local_d4);
              }
              (**(code **)(*piVar1 + 8))();
              goto LAB_00411b21;
            }
            local_d4 = (HMENU)0x0;
            *(int *)(iVar3 + 0xd8) = param_2;
            local_cc = iVar3;
          }
          else {
            iVar3 = (*pcVar7)(uStack_3c,uStack_54,uVar12,*(undefined4 *)(local_cc + 0x1c),local_b8,0
                              ,iStack_50,iStack_40,iStack_44,iStack_38,local_98,uStack_34,0,0);
            local_b8 = iVar2 + 10;
          }
          if (iVar3 == 0) {
            if (local_bc != (HACCEL)0x0) {
              DestroyAcceleratorTable(local_bc);
            }
            if (local_d4 != (HMENU)0x0) {
              DestroyMenu(local_d4);
            }
            (**(code **)(*piVar1 + 8))();
            goto LAB_00411b21;
          }
          *local_9c = iVar3;
          FUN_004065a0(uVar5);
          FUN_004065a0(iVar3);
          uVar12 = local_b4;
        }
      }
      local_9c = (int *)(-(uint)(local_6c != 0) & local_74);
      uVar16 = -(uint)(local_80 != 0) & local_88;
      uVar12 = -(uint)(local_58 != 0) & local_60;
      local_d4 = (HMENU)0x1;
      uVar15 = -(uint)(local_a0 != 0) & local_a8;
      uVar13 = local_80 >> 2;
      while (iVar2 = FUN_0040e730(local_d4,0), iVar2 != 0) {
        iVar3 = FUN_0040ee10(local_d4);
        if (iVar3 == 1) {
          local_d4 = (HMENU)((int)local_d4 + 1);
        }
        else {
          uVar5 = FUN_0040e780(local_d4);
          iVar3 = FUN_00406d80(uVar16,uVar13,uVar5);
          local_b4 = *(uint *)(uVar12 + iVar3 * 4);
          iVar8 = FUN_00406cf0(iVar2 + 0x18);
          iVar8 = iVar2 + 0x18 + iVar8;
          iVar2 = FUN_00406cf0(iVar8);
          piVar1 = (int *)(iVar2 + 0x18 + iVar8);
          iVar2 = local_cc;
          if (*piVar1 != 0) {
            iVar2 = FUN_00406d80(uVar16,uVar13,*piVar1);
            iVar2 = *(int *)(uVar12 + iVar2 * 4);
          }
          pHVar9 = (HWND)0x0;
          if (iVar2 != 0) {
            pHVar9 = *(HWND *)(iVar2 + 0x1c);
          }
          pHVar9 = SetParent(*(HWND *)(local_b4 + 0x1c),pHVar9);
          FUN_00494bb2(pHVar9);
          if (*(int *)((int)local_9c + iVar3 * 4) != 0) {
            piVar14 = piVar1 + 2;
            for (iVar2 = piVar1[1]; 0 < iVar2; iVar2 = iVar2 + -1) {
              if (*piVar14 == 0) {
                if (0 < iVar2) {
                  do {
                    if (*piVar14 != 0) {
                      iVar3 = FUN_00406d80(uVar16,uVar13,*piVar14);
                      *(undefined1 *)(iVar3 + uVar15) = 0;
                    }
                    piVar14 = piVar14 + 1;
                    iVar2 = iVar2 + -1;
                  } while (iVar2 != 0);
                }
                break;
              }
              piVar14 = piVar14 + 1;
            }
          }
          local_d4 = (HMENU)((int)local_d4 + 1);
        }
      }
      iVar2 = 1;
      while (iVar3 = FUN_0040e730(iVar2,0), iVar3 != 0) {
        iVar8 = FUN_0040ee10(iVar2);
        if (iVar8 == 1) {
          iVar2 = iVar2 + 1;
        }
        else {
          iVar8 = FUN_00406cf0(iVar3 + 0x18);
          iVar8 = iVar3 + 0x18 + iVar8;
          iVar3 = FUN_00406cf0(iVar8);
          local_b8 = *(int *)(iVar3 + iVar8);
          iVar8 = *(int *)(iVar3 + 0x18 + iVar8);
          iVar3 = iVar2 + -1;
          if (1 < iVar2) {
            do {
              iVar10 = FUN_0040e730(iVar3,0);
              iVar11 = FUN_0040ee10(iVar3);
              if (iVar11 == 0) {
                iVar11 = FUN_00406cf0(iVar10 + 0x18);
                iVar11 = iVar10 + 0x18 + iVar11;
                iVar10 = FUN_00406cf0(iVar11);
                if (*(int *)(iVar11 + iVar10 + 0x18) == iVar8) {
                  if (0 < iVar3) {
                    iVar3 = FUN_0040e730(iVar3,0);
                    if (iVar3 == 0) goto LAB_00411d21;
                    iVar8 = FUN_00406cf0(iVar3 + 0x18);
                    iVar8 = iVar3 + 0x18 + iVar8;
                    iVar3 = FUN_00406cf0(iVar8);
                    iVar3 = *(int *)(iVar8 + iVar3);
                    if (iVar3 == 0) goto LAB_00411d21;
                    pHVar17 = *(HWND *)(iVar3 + 0x1c);
                    pHVar9 = *(HWND *)(local_b8 + 0x1c);
                    goto LAB_00411d1b;
                  }
                  break;
                }
              }
              iVar3 = iVar3 + -1;
            } while (0 < iVar3);
          }
          pHVar9 = *(HWND *)(local_b8 + 0x1c);
          pHVar17 = (HWND)0x0;
LAB_00411d1b:
          SetWindowPos(pHVar9,pHVar17,0,0,0,0,0x13);
LAB_00411d21:
          iVar2 = iVar2 + 1;
        }
      }
      iVar2 = 0;
      while( true ) {
        iVar8 = iVar2 + 1;
        iVar3 = FUN_0040e730(iVar2,0);
        if (iVar3 == 0) break;
        iVar10 = FUN_0040ee10(iVar2);
        iVar2 = iVar8;
        if (iVar10 != 1) {
          iVar3 = iVar3 + 0x18;
          iVar8 = FUN_00406cf0(iVar3);
          iVar8 = iVar3 + iVar8;
          iVar10 = FUN_00406cf0(iVar8);
          piVar1 = (int *)(iVar8 + iVar10 + 0x20 + *(int *)(iVar8 + 0x1c + iVar10) * 4);
          iVar8 = FUN_00406cf0(iVar3);
          iVar10 = FUN_00406cf0(iVar3 + iVar8);
          puVar6 = (undefined4 *)(iVar10 + 0x14 + iVar3 + iVar8);
          iVar3 = *piVar1;
          if (iVar3 < 1) {
            *puVar6 = 0;
          }
          else {
            uVar5 = FUN_0041cc40(piVar1 + 1,iVar3);
            *puVar6 = uVar5;
          }
        }
      }
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        iVar2 = iVar2 + -1;
        iVar8 = FUN_0040e730(iVar3,0);
        if (iVar8 == 0) break;
        iVar10 = FUN_0040ee10(iVar2);
        if (iVar10 == 0) {
          iVar10 = FUN_00406cf0(iVar8 + 0x18);
          iVar10 = iVar8 + 0x18 + iVar10;
          iVar8 = FUN_00406cf0(iVar10);
          iVar8 = *(int *)(iVar10 + iVar8);
          if ((iVar8 != 0) && (BVar4 = IsWindow(*(HWND *)(iVar8 + 0x1c)), BVar4 != 0)) {
            SendMessageA(*(HWND *)(iVar8 + 0x1c),0x806f,0,0);
          }
        }
      }
      SendMessageA(*(HWND *)(local_cc + 0x1c),0x8004,0,0);
      iVar2 = 1;
      if (1 < uVar13) {
        do {
          FUN_00497580((-(uint)(*(char *)(iVar2 + uVar15) != '\x01') & 0xfffffff8) + 8);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar13);
      }
      if (*(HACCEL *)(local_cc + 0x1dc) != (HACCEL)0x0) {
        DestroyAcceleratorTable(*(HACCEL *)(local_cc + 0x1dc));
      }
      *(HACCEL *)(local_cc + 0x1dc) = local_bc;
      FUN_00413d70(0x7da,0,0);
      uVar5 = FUN_0040e780(0);
      iVar2 = local_98;
      local_2c = local_98;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_4 = 0;
      local_28 = uVar5;
      FUN_00413d70(0x7d8,&local_2c,0);
      pHVar9 = local_48;
      BVar4 = IsWindow(local_48);
      if (BVar4 != 0) {
        local_2c = iVar2;
        local_24 = 3;
        local_20 = 0;
        local_8 = 0;
        local_4 = 0;
        local_28 = uVar5;
        FUN_00413d70(0x7d8,&local_2c,0);
        BVar4 = IsWindow(pHVar9);
        if (BVar4 != 0) {
          local_2c = iVar2;
          local_24 = 4;
          local_20 = 0;
          local_8 = 0;
          local_4 = 0;
          local_28 = uVar5;
          FUN_00413d70(0x7d8,&local_2c,0);
          BVar4 = IsWindow(pHVar9);
          if (BVar4 != 0) {
            if (*(char *)(-(uint)(local_a0 != 0) & local_a8) != '\0') {
              FUN_004114b0(iVar2,param_1,param_2);
            }
            BVar4 = IsWindow(pHVar9);
            if ((BVar4 != 0) && (param_4 == 1)) {
              *(undefined4 *)(local_cc + 0x1bc) = 1;
              iVar2 = 0;
              while( true ) {
                iVar3 = iVar2 + 1;
                iVar2 = FUN_0040ebf0(iVar2,&local_b4);
                if (iVar2 == 0) break;
                iVar2 = iVar3;
                if (local_b4 != param_1) {
                  iVar3 = FUN_0040e730(0,0);
                  iVar8 = FUN_00406cf0(iVar3 + 0x18);
                  iVar8 = iVar3 + 0x18 + iVar8;
                  iVar3 = FUN_00406cf0(iVar8);
                  iVar3 = *(int *)(iVar8 + iVar3);
                  if ((iVar3 != 0) && (BVar4 = IsWindow(*(HWND *)(iVar3 + 0x1c)), BVar4 != 0)) {
                    pHVar9 = GetParent(*(HWND *)(iVar3 + 0x1c));
                    iVar8 = FUN_00494bb2(pHVar9);
                    if (iVar8 == 0) {
                      FUN_004065a0(*(undefined4 *)(iVar3 + 0x1c));
                      uVar5 = FUN_004975a7();
                      FUN_004065a0(uVar5);
                      FUN_004975c2(0);
                    }
                  }
                }
              }
            }
            local_94 = GetFocus();
            iVar2 = *(int *)(param_1 + 0x18);
            iVar3 = iVar2;
            while (iVar3 = iVar3 + -1, -1 < iVar3) {
              iVar2 = iVar2 + -1;
              iVar8 = FUN_0040e730(iVar3,0);
              if (iVar8 == 0) break;
              iVar10 = FUN_0040ee10(iVar2);
              if (iVar10 == 0) {
                iVar10 = FUN_00406cf0(iVar8 + 0x18);
                iVar10 = iVar8 + 0x18 + iVar10;
                iVar8 = FUN_00406cf0(iVar10);
                iVar8 = *(int *)(iVar10 + iVar8);
                if ((iVar8 != 0) && (BVar4 = IsWindow(*(HWND *)(iVar8 + 0x1c)), BVar4 != 0)) {
                  SendMessageA(*(HWND *)(iVar8 + 0x1c),0x8076,0,0);
                }
              }
            }
            pHVar9 = local_94;
            if (((local_94 != (HWND)0x0) && (BVar4 = IsWindow(local_94), BVar4 != 0)) &&
               (pHVar17 = GetFocus(), pHVar17 != pHVar9)) {
              SetFocus(pHVar9);
            }
            *(undefined4 *)(local_cc + 0x1b8) = 1;
          }
        }
      }
      local_b0 = &PTR_FUN_02f95460;
      FUN_004064a0();
      local_7c = &PTR_FUN_02f95460;
      FUN_004064a0();
      local_68 = &PTR_FUN_02f95460;
      FUN_004064a0();
      local_90 = &PTR_FUN_02f95460;
      FUN_004064a0();
      return 1;
    }
  }
  return 0;
}


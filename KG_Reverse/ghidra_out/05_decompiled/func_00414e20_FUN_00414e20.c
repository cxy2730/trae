// Function: FUN_00414e20
// Entry:    00414e20
// Size:     3232 bytes
// Conv:     unknown
// Signature: undefined FUN_00414e20(void)
// Decompiled by Ghidra 12.1.2


void FUN_00414e20(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  BOOL BVar11;
  HWND pHVar12;
  int iVar13;
  uint *puVar14;
  HGDIOBJ h;
  code *pcVar15;
  uint uVar16;
  int unaff_EBX;
  char *pcVar17;
  int *piVar18;
  uint uVar19;
  char *pcVar20;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  tagRECT local_6c;
  undefined **local_5c;
  uint local_54;
  int local_4c;
  int local_48 [4];
  uint local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = FUN_0040ec30(param_1,&local_80,0);
  if (iVar5 == 0) {
    FUN_00412f90(&DAT_02faaeec,0,param_1,param_2);
    ExceptionList = local_c;
    return;
  }
  piVar6 = (int *)FUN_0040e7b0(param_2,0,&local_78);
  local_6c.left = (LONG)piVar6;
  iVar5 = FUN_0040ede0(param_2);
  if (iVar5 != 0) {
    iVar5 = FUN_00406cf0(piVar6 + 6);
    pcVar17 = (char *)((int)(piVar6 + 6) + iVar5);
    iVar5 = FUN_00406cf0(pcVar17);
    puVar14 = (uint *)(pcVar17 + iVar5 + 8);
    switch(param_3) {
    case 0:
      if (param_5 == (int *)0x0) {
        param_5 = (int *)&DAT_02fe8208;
      }
      puVar14 = puVar14 + 1;
      iVar5 = FUN_00482dc4(puVar14,param_5);
      if (iVar5 == 0) {
        ExceptionList = local_c;
        return;
      }
      uVar7 = FUN_00406cf0(param_5);
      uVar8 = FUN_00406cf0(puVar14,param_5,uVar7);
      FUN_0040e850(local_78,(int)puVar14 - (int)piVar6,uVar8,param_5,uVar7);
      FUN_00414d20(local_80);
      ExceptionList = local_c;
      return;
    case 1:
      goto switchD_00414ed5_caseD_1;
    case 2:
      uVar19 = *puVar14;
      if ((uint)(param_5 != (int *)0x0) == (uVar19 >> 1 & 1)) {
        ExceptionList = local_c;
        return;
      }
      if ((param_5 != (int *)0x0) == 1) {
        *puVar14 = uVar19 | 2;
        FUN_00414d20(local_80);
        ExceptionList = local_c;
        return;
      }
      *puVar14 = uVar19 & 0xfffffffd;
      FUN_00414d20(local_80);
      ExceptionList = local_c;
      return;
    case 3:
      uVar19 = *puVar14;
      if ((uint)(param_5 != (int *)0x0) == (~uVar19 & 1)) {
        ExceptionList = local_c;
        return;
      }
      if ((param_5 != (int *)0x0) == 0) {
        *puVar14 = uVar19 | 1;
        FUN_00414d20(local_80);
        ExceptionList = local_c;
        return;
      }
      *puVar14 = uVar19 & 0xfffffffe;
      FUN_00414d20(local_80);
      ExceptionList = local_c;
      return;
    default:
      ExceptionList = local_c;
      return;
    }
  }
  local_70 = FUN_00413290(*piVar6,0);
  piVar18 = piVar6 + 6;
  iVar5 = *(int *)(local_70 + 0x28);
  iVar9 = FUN_00406cf0(piVar18);
  iVar10 = FUN_00406cf0((char *)((int)piVar18 + iVar9));
  iVar9 = *(int *)((char *)((int)piVar18 + iVar9) + iVar10);
  if ((iVar9 == 0) || (BVar11 = IsWindow(*(HWND *)(iVar9 + 0x1c)), BVar11 == 0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = 1;
  }
  local_74 = iVar10;
  FUN_004062a0();
  iVar13 = local_7c;
  local_4 = 0;
  if (param_3 < 8) {
    switch(param_3) {
    case 0:
    case 1:
      if ((int)param_5 < 0x7f74) {
        if ((int)param_5 < -0x7f73) {
          param_5 = (int *)0xffff808d;
        }
      }
      else {
        param_5 = (int *)0x7f73;
      }
      iVar5 = FUN_00406cf0(piVar18);
      iVar13 = FUN_00406cf0((char *)((int)piVar18 + iVar5));
      pcVar17 = (char *)((int)piVar18 + iVar5) + iVar13 + 4;
      if (param_3 == 1) {
        pcVar17 = pcVar17 + 4;
      }
      *(int **)pcVar17 = param_5;
      if (iVar10 == 1) {
        GetWindowRect(*(HWND *)(iVar9 + 0x1c),&local_6c);
        pHVar12 = GetParent(*(HWND *)(iVar9 + 0x1c));
        iVar5 = FUN_00494bb2(pHVar12);
        if ((iVar5 != 0) && (uVar19 = FUN_00497418(), (uVar19 & 0x80000000) == 0)) {
          FUN_004999e3(&local_6c);
        }
        if (param_3 == 0) {
          local_6c.right = (local_6c.right - local_6c.left) + (int)param_5;
          local_6c.left = (LONG)param_5;
        }
        else {
          local_6c.bottom = (local_6c.bottom - local_6c.top) + (int)param_5;
          local_6c.top = (LONG)param_5;
        }
        FUN_004974f0(local_6c.left,local_6c.top,local_6c.right - local_6c.left,
                     local_6c.bottom - local_6c.top,1);
      }
      break;
    case 2:
    case 3:
      if ((int)param_5 < 0x7f74) {
        if ((int)param_5 < 0) {
          param_5 = (int *)0x0;
        }
      }
      else {
        param_5 = (int *)0x7f73;
      }
      iVar5 = FUN_00406cf0(piVar18);
      iVar13 = FUN_00406cf0((char *)((int)piVar18 + iVar5));
      pcVar17 = (char *)((int)piVar18 + iVar5) + iVar13 + 0xc;
      if (param_3 == 3) {
        pcVar17 = pcVar17 + 4;
      }
      *(int **)pcVar17 = param_5;
      if (iVar10 == 1) {
        GetWindowRect(*(HWND *)(iVar9 + 0x1c),&local_6c);
        if (param_3 == 2) {
          FUN_00497531(0,0,0,param_5,local_6c.bottom - local_6c.top,0x16);
        }
        else {
          FUN_00497531(0,0,0,local_6c.right - local_6c.left,param_5,0x16);
        }
      }
      break;
    case 4:
      if (param_5 == (int *)0x0) {
        param_5 = (int *)&DAT_02fe8208;
      }
      iVar5 = FUN_00406cf0(piVar18);
      iVar9 = FUN_00406cf0((char *)((int)piVar18 + iVar5));
      piVar18 = (int *)((char *)((int)piVar18 + iVar5) + iVar9 + 0x1c);
      pcVar17 = (char *)((int)piVar18 + piVar18[*piVar18 + 1] + *piVar18 * 4 + 8);
      uVar7 = FUN_00406cf0(param_5);
      uVar8 = FUN_00406cf0(pcVar17,param_5,uVar7);
      FUN_0040e850(local_78,(int)pcVar17 - (int)piVar6,uVar8,param_5,uVar7);
      break;
    case 5:
      if (param_5 != (int *)0x0) {
        iVar5 = FUN_00406cf0(piVar18);
        pcVar17 = (char *)((int)piVar18 + iVar5);
        iVar5 = FUN_00406cf0(pcVar17);
        pcVar17 = pcVar17 + *(int *)(pcVar17 + *(int *)(pcVar17 + iVar5 + 0x1c) * 4 + iVar5 + 0x20)
                            + *(int *)(pcVar17 + iVar5 + 0x1c) * 4 + iVar5 + 0x24;
        iVar5 = FUN_00406cf0(pcVar17);
        puVar14 = (uint *)(pcVar17 + iVar5 + 4);
        uVar19 = *(uint *)(pcVar17 + iVar5 + 4) | 1;
      }
      else {
        iVar5 = FUN_00406cf0(piVar18);
        pcVar17 = (char *)((int)piVar18 + iVar5);
        iVar5 = FUN_00406cf0(pcVar17);
        pcVar17 = pcVar17 + *(int *)(pcVar17 + *(int *)(pcVar17 + iVar5 + 0x1c) * 4 + iVar5 + 0x20)
                            + *(int *)(pcVar17 + iVar5 + 0x1c) * 4 + iVar5 + 0x24;
        iVar5 = FUN_00406cf0(pcVar17);
        puVar14 = (uint *)(pcVar17 + iVar5 + 4);
        uVar19 = *(uint *)(pcVar17 + iVar5 + 4) & 0xfffffffe;
      }
      *puVar14 = uVar19;
      if (iVar10 == 1) {
        if (param_5 != (int *)0x0) {
          if ((param_2 == 0) || (iVar5 = FUN_0040e780(0), param_2 == iVar5)) {
            FUN_00411100(param_1,1);
          }
          else {
            iVar5 = FUN_00413290(*piVar6,0);
            if ((iVar5 != 0) && ((*(uint *)(iVar5 + 0x14) & 0x8000) == 0)) {
              bVar3 = true;
              local_7c = 0;
LAB_0041539f:
              iVar5 = local_7c;
              local_7c = local_7c + 1;
              piVar6 = (int *)FUN_0040e730(iVar5,0);
              if (piVar6 != (int *)0x0) {
                if (*piVar6 == 0x10015) {
                  piVar6 = piVar6 + 6;
                  iVar5 = FUN_00406cf0(piVar6);
                  iVar9 = FUN_00406cf0((int)piVar6 + iVar5);
                  iVar9 = (int)piVar6 + iVar5 + iVar9;
                  iVar5 = *(int *)(iVar9 + 0x1c);
                  piVar18 = (int *)(iVar9 + 0x20);
                  iVar9 = FUN_00406d80(piVar18,iVar5,param_2);
                  if (iVar9 != -1) {
                    iVar9 = FUN_00406cf0(piVar6);
                    iVar10 = FUN_00406cf0((int)piVar6 + iVar9);
                    iVar9 = *(int *)((int)piVar6 + iVar9 + iVar10);
                    if ((iVar9 == 0) || (BVar11 = IsWindow(*(HWND *)(iVar9 + 0x1c)), BVar11 == 0))
                    goto LAB_004154b8;
                    iVar9 = FUN_00408280();
                    if (iVar9 < 0) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = FUN_00408280();
                    }
                    bVar3 = false;
                    bVar4 = false;
                    do {
                      if (iVar9 < 1) {
                        if ((!bVar4) && (0 < iVar5)) goto LAB_0041548e;
                        break;
                      }
                      iVar10 = *piVar18;
                      while (iVar10 != 0) {
                        if (iVar10 == param_2) {
                          bVar4 = true;
                          break;
                        }
                        piVar6 = piVar18 + 1;
                        piVar18 = piVar18 + 1;
                        iVar5 = iVar5 + -1;
                        iVar10 = *piVar6;
                      }
                      piVar18 = piVar18 + 1;
                      iVar5 = iVar5 + -1;
                      iVar9 = iVar9 + -1;
                    } while (!bVar4);
                  }
                }
                goto LAB_0041539f;
              }
LAB_004154b8:
              if (bVar3) {
                FUN_00497580(5);
              }
            }
          }
        }
        else {
          FUN_00497580(0);
        }
      }
      break;
    case 6:
      if (param_5 == (int *)0x0) {
        iVar5 = FUN_00406cf0(piVar18);
        pcVar17 = (char *)((int)piVar18 + iVar5);
        iVar5 = FUN_00406cf0(pcVar17);
        pcVar17 = pcVar17 + *(int *)(pcVar17 + *(int *)(pcVar17 + iVar5 + 0x1c) * 4 + iVar5 + 0x20)
                            + *(int *)(pcVar17 + iVar5 + 0x1c) * 4 + iVar5 + 0x24;
        iVar5 = FUN_00406cf0(pcVar17);
        puVar14 = (uint *)(pcVar17 + iVar5 + 4);
        uVar19 = *(uint *)(pcVar17 + iVar5 + 4) & 0xfffffffd;
      }
      else {
        iVar5 = FUN_00406cf0(piVar18);
        pcVar17 = (char *)((int)piVar18 + iVar5);
        iVar5 = FUN_00406cf0(pcVar17);
        pcVar17 = pcVar17 + *(int *)(pcVar17 + *(int *)(pcVar17 + iVar5 + 0x1c) * 4 + iVar5 + 0x20)
                            + *(int *)(pcVar17 + iVar5 + 0x1c) * 4 + iVar5 + 0x24;
        iVar5 = FUN_00406cf0(pcVar17);
        puVar14 = (uint *)(pcVar17 + iVar5 + 4);
        uVar19 = *(uint *)(pcVar17 + iVar5 + 4) | 2;
      }
      *puVar14 = uVar19;
      if (iVar10 == 1) {
        FUN_004975c2(param_5 == (int *)0x0);
      }
      break;
    case 7:
      if (param_5 == (int *)0x0) {
        uVar19 = 0;
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = param_5 + 2;
        if (piVar6 == (int *)0x0) {
          uVar19 = 0;
        }
        else {
          uVar19 = param_5[1];
          if (3 < uVar19) {
            local_4c = 0;
            FUN_004069d0(piVar6,uVar19);
            piVar6 = (int *)(-(uint)(local_4c != 0) & local_54);
            iVar5 = FUN_0041c6a0(*piVar6);
            *piVar6 = iVar5;
          }
        }
      }
      iVar5 = FUN_00406cf0(piVar18);
      pcVar17 = (char *)((int)piVar18 + iVar5);
      iVar5 = FUN_00406cf0(pcVar17);
      if (*(HCURSOR *)(pcVar17 + iVar5 + 0x14) != (HCURSOR)0x0) {
        DestroyCursor(*(HCURSOR *)(pcVar17 + iVar5 + 0x14));
      }
      if (uVar19 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_0041cc40(piVar6,uVar19);
      }
      *(undefined4 *)(pcVar17 + iVar5 + 0x14) = uVar7;
      iVar5 = FUN_00406cf0(piVar18);
      pcVar17 = (char *)((int)piVar18 + iVar5);
      iVar5 = FUN_00406cf0(pcVar17);
      puVar14 = (uint *)(pcVar17 + *(int *)(pcVar17 + iVar5 + 0x1c) * 4 + iVar5 + 0x20);
      uVar16 = *puVar14;
      *puVar14 = uVar19;
      FUN_0040e850(local_78,(char *)((int)puVar14 + (4 - local_6c.left)),uVar16,piVar6,uVar19);
      if (local_74 == 1) {
        GetCursorPos((LPPOINT)&local_6c);
        SetCursorPos(local_6c.left,local_6c.top);
      }
    }
    goto switchD_004150b3_default;
  }
  if (iVar10 == 0) {
    FUN_00412f90(&DAT_02faaf60,0,param_1,param_2);
  }
  local_6c.left = 0;
  local_6c.top = 0;
  sVar2 = *(short *)(iVar5 + param_3 * 0x14 + 0xc);
  switch(sVar2) {
  case 1000:
  case 0x3e9:
LAB_004156dd:
    local_6c.left = (LONG)param_5;
    break;
  case 0x3ea:
  case 0x3ec:
    local_6c.left = (LONG)param_5;
    local_6c.top = (LONG)param_6;
    break;
  case 0x3eb:
    local_6c.left = (LONG)(param_5 != (int *)0x0);
    break;
  case 0x3ed:
  case 0x3ef:
  case 0x3f0:
  case 0x3f8:
  case 0x3fa:
  case 0x3fb:
  case 0x3fc:
  case 0x3fd:
  case 0x3fe:
    if (param_5 != (int *)0x0) goto LAB_004156dd;
    local_6c.left = (LONG)&DAT_02fe8208;
    break;
  case 0x3ee:
    local_6c.left = ((int)param_5 < 0) - 1 & (uint)param_5;
    break;
  case 0x3f1:
  case 0x3f2:
  case 0x3f3:
  case 0x3f4:
  case 0x3ff:
  case 0x400:
    if (param_5 == (int *)0x0) {
      local_6c.left = 0;
      local_6c.top = 0;
    }
    else {
      local_6c.top = param_5[1];
      if ((sVar2 == 0x3f3) && ((int *)0x3 < (uint)local_6c.top)) {
        local_4c = 0;
        FUN_004069d0(param_5 + 2,local_6c.top);
        piVar6 = (int *)(-(uint)(local_4c != 0) & local_54);
        iVar5 = FUN_0041c6a0(*piVar6);
        *piVar6 = iVar5;
        local_6c.left = (LONG)piVar6;
      }
      else {
        local_6c.left = (LONG)(param_5 + 2);
      }
    }
    break;
  case 0x3f5:
    if (param_4 == -1) {
      if (param_5 != (int *)0x0) {
        piVar6 = local_48;
        for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        local_48[2] = *param_5;
        local_38 = -(uint)(param_5[1] != 0) & 700;
        local_34 = param_5[2] != 0;
        local_32 = param_5[3] != 0;
        local_33 = param_5[4] != 0;
        local_48[3] = local_48[2];
        FUN_0041cef0(local_48,param_5[5] & (param_5[5] < 0) - 1);
        pcVar17 = (char *)param_5[6];
        if ((pcVar17 == (char *)0x0) || (iVar5 = FUN_00406cf0(pcVar17), 0x1f < iVar5)) {
          pcVar17 = &DAT_02faaf0c;
        }
        uVar19 = 0xffffffff;
        do {
          pcVar20 = pcVar17;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar20 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar20 = pcVar20 + -uVar19;
        goto LAB_004159df;
      }
    }
    else {
      pcVar15 = (code *)(**(code **)(local_70 + 0x2c))(6);
      iVar5 = (*pcVar15)(unaff_EBX,param_2 + -8,&local_70);
      if ((iVar5 == 0) || ((int *)local_6c.top != (int *)0x3c)) {
        piVar6 = local_48;
        iVar5 = 0x3c;
        h = GetStockObject(0x11);
        GetObjectA(h,iVar5,piVar6);
      }
      else {
        piVar6 = (int *)local_6c.left;
        piVar18 = local_48;
        for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar18 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar18 = piVar18 + 1;
        }
      }
      switch(param_4) {
      case 0:
        local_48[2] = (int)param_5 % 0xe10;
        local_48[3] = local_48[2];
        if (local_48[2] < 0) {
          local_48[2] = local_48[2] + 0xe10;
          local_48[3] = local_48[2];
        }
        break;
      case 1:
        local_38 = -(uint)(param_5 != (int *)0x0) & 700;
        break;
      case 2:
        local_34 = param_5 != (int *)0x0;
        break;
      case 3:
        local_32 = param_5 != (int *)0x0;
        break;
      case 4:
        local_33 = param_5 != (int *)0x0;
        break;
      case 5:
        FUN_0041cef0(local_48,((int)param_5 < 0) - 1 & (uint)param_5);
        break;
      case 6:
        if (param_5 == (int *)0x0) {
          param_5 = (int *)&DAT_02fe8208;
        }
        uVar19 = 0xffffffff;
        piVar6 = param_5;
        do {
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          iVar5 = *piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
        } while ((char)iVar5 != '\0');
        if (((int)(~uVar19 - 1) < 1) || (0x1f < (int)(~uVar19 - 1))) {
          param_5 = (int *)&DAT_02faaf0c;
        }
        uVar19 = 0xffffffff;
        do {
          piVar6 = param_5;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          piVar6 = (int *)((int)param_5 + 1);
          iVar5 = *param_5;
          param_5 = piVar6;
        } while ((char)iVar5 != '\0');
        uVar19 = ~uVar19;
        pcVar20 = (char *)((int)piVar6 - uVar19);
LAB_004159df:
        pcVar17 = local_2c;
        for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar20;
          pcVar20 = pcVar20 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar17 = *pcVar20;
          pcVar20 = pcVar20 + 1;
          pcVar17 = pcVar17 + 1;
        }
      }
      local_6c.left = (LONG)local_48;
      local_6c.top = 0x3c;
      iVar13 = local_7c;
    }
    break;
  case 0x3f6:
  case 0x3f7:
  case 0x3f9:
    local_6c.left = (LONG)param_5;
  }
  pcVar15 = (code *)(**(code **)(local_70 + 0x2c))(4);
  pHVar12 = *(HWND *)(unaff_EBX + 0x1c);
  iVar5 = (*pcVar15)(unaff_EBX,param_2 + -8,&local_70,0);
  if (((iVar5 == 1) && (BVar11 = IsWindow(pHVar12), BVar11 != 0)) &&
     (local_78 = FUN_0040f4c0(pHVar12,0), 0 < local_78)) {
    FUN_00412670();
    *(int *)(iVar13 + 0x1d4) = *(int *)(iVar13 + 0x1d4) + 1;
    FUN_004126d0(param_1,local_80,local_78);
    FUN_00412670();
    if (0 < *(int *)(iVar13 + 0x1d4)) {
      *(int *)(iVar13 + 0x1d4) = *(int *)(iVar13 + 0x1d4) + -1;
    }
  }
switchD_004150b3_default:
  local_4 = 0xffffffff;
  local_5c = &PTR_FUN_02f95460;
  FUN_004064a0();
  ExceptionList = local_c;
  return;
  while( true ) {
    if (*piVar18 == param_2) {
      bVar3 = true;
      break;
    }
    iVar5 = iVar5 + -1;
    piVar18 = piVar18 + 1;
    if (iVar5 < 1) break;
LAB_0041548e:
    if (*piVar18 == 0) break;
  }
  goto LAB_0041539f;
switchD_00414ed5_caseD_1:
  uVar19 = *puVar14;
  if ((uint)(param_5 != (int *)0x0) == (uVar19 >> 2 & 1)) {
    ExceptionList = local_c;
    return;
  }
  if ((param_5 != (int *)0x0) == 1) {
    *puVar14 = uVar19 | 4;
    FUN_00414d20(local_80);
    ExceptionList = local_c;
    return;
  }
  *puVar14 = uVar19 & 0xfffffffb;
  FUN_00414d20(local_80);
  ExceptionList = local_c;
  return;
}


// Function: FUN_0041e020
// Entry:    0041e020
// Size:     2003 bytes
// Conv:     unknown
// Signature: undefined FUN_0041e020(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x0041e1eb) */
/* WARNING: Removing unreachable block (ram,0x0041e231) */

bool __fastcall FUN_0041e020(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  LRESULT LVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float fVar10;
  uint uVar11;
  double *pdVar12;
  float *pfVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  double *pdVar17;
  bool bVar18;
  float10 fVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined **local_58 [2];
  uint local_50;
  int local_48;
  int local_44;
  int *local_40;
  int local_3c;
  undefined4 local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  char *local_1c;
  float *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f02e;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd10;
  if ((*(byte *)(param_1 + 0x170) & 1) != 0) {
    return true;
  }
  if (*(int *)(param_1 + 0x160) == 0) {
    return true;
  }
  ExceptionList = &local_10;
  local_3c = param_1;
  FUN_004062a0();
  local_8 = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x160) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x158);
  }
  FUN_004069d0(uVar5,*(int *)(param_1 + 0x160));
  if (*(int *)(param_1 + 0x160) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(int *)(param_1 + 0x158);
  }
  local_18 = (float *)PTR_DAT_02fd8088;
  local_2c = (int *)(-(uint)(local_48 != 0) & local_50);
  local_8._0_1_ = 1;
  local_1c = (char *)0x0;
  local_24 = 0;
  if (*(int *)(param_1 + 0x120) < 1) {
LAB_0041e36c:
    if (*(uint *)(param_1 + 0x14c) == (uint)(*local_2c < 0)) {
      if (*(int *)(param_1 + 0x148) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x140);
      }
      iVar7 = FUN_00406d30(uVar5,*(int *)(param_1 + 0x148),1);
      if (iVar7 == -1) {
        local_8 = CONCAT31(local_8._1_3_,iVar7 != -1);
        FUN_004931d6();
        local_8 = 0xffffffff;
        local_58[0] = &PTR_FUN_02f95d48;
        FUN_004064a0();
        ExceptionList = local_10;
        return true;
      }
    }
  }
  else {
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x11c) + local_24 * 4);
      iVar8 = *(int *)(*(int *)(param_1 + 0x74) + 4 + local_24 * 8);
      pdVar12 = (double *)(*(int *)(iVar7 + 0x18) + (int)local_2c);
      local_20 = iVar7;
      FUN_0049557d(&local_18);
      switch(*(undefined4 *)(iVar7 + 0x14)) {
      case 1:
        iVar8 = FUN_00482c94(local_18);
        if ((iVar8 < 0x100) && (iVar8 = FUN_00482c94(local_18), iVar8 < 0)) {
          *(undefined1 *)pdVar12 = 0;
        }
        else {
          iVar8 = FUN_00482c94(local_18);
          if (iVar8 < 0x100) {
            uVar3 = FUN_00482c94(local_18);
            *(undefined1 *)pdVar12 = uVar3;
          }
          else {
            *(undefined1 *)pdVar12 = 0xff;
          }
        }
        break;
      case 2:
        iVar8 = FUN_00482c94(local_18);
        if ((iVar8 < 0x8000) && (iVar8 = FUN_00482c94(local_18), iVar8 < -0x8000)) {
          *(undefined2 *)pdVar12 = 0x8000;
        }
        else {
          iVar8 = FUN_00482c94(local_18);
          if (iVar8 < 0x8000) {
            uVar4 = FUN_00482c94(local_18);
            *(undefined2 *)pdVar12 = uVar4;
          }
          else {
            *(undefined2 *)pdVar12 = 0x7fff;
          }
        }
        break;
      case 3:
      case 9:
        lVar20 = FUN_00482c9f(local_18);
        if (lVar20 < 0x80000000) {
          uVar21 = FUN_00482c9f(local_18);
          if ((0x7fffffffffffffff < uVar21) &&
             (((longlong)uVar21 < -0x100000000 || ((uint)uVar21 < 0x80000000)))) {
            local_34 = 0xffffffff;
            *(float *)pdVar12 = -0.0;
            break;
          }
        }
        lVar20 = FUN_00482c9f(local_18);
        if (lVar20 < 0x80000000) {
          uVar22 = FUN_00482c9f(local_18);
          local_34 = (undefined4)((ulonglong)uVar22 >> 0x20);
          *(float *)pdVar12 = (float)uVar22;
        }
        else {
          local_34 = 0;
          *(float *)pdVar12 = NAN;
        }
        break;
      case 4:
        dVar23 = (double)FUN_00482c9f(local_18);
        *pdVar12 = dVar23;
        break;
      case 5:
        fVar19 = (float10)FUN_00482bb2(local_18);
        *(float *)pdVar12 = (float)fVar19;
        break;
      case 6:
        fVar19 = (float10)FUN_00482bb2(local_18);
        *pdVar12 = (double)fVar19;
        break;
      case 7:
        LVar6 = SendMessageA(*(HWND *)(iVar8 + 0x1c),0xf0,0,0);
        *(bool *)pdVar12 = LVar6 == 1;
        break;
      case 8:
        FUN_0041c080(local_18,pdVar12);
        break;
      case 10:
        FUN_00406ca0(pdVar12,*(undefined4 *)(iVar7 + 0x1c));
        fVar10 = *(float *)(iVar7 + 0x1c);
        if ((int)local_18[-2] <= (int)*(float *)(iVar7 + 0x1c)) {
          fVar10 = local_18[-2];
        }
        pfVar13 = local_18;
        pdVar17 = pdVar12;
        for (uVar11 = (uint)fVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(float *)pdVar17 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          pdVar17 = (double *)((int)pdVar17 + 4);
        }
        for (uVar11 = (uint)fVar10 & 3; iVar7 = local_20, uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)pdVar17 = *(undefined1 *)pfVar13;
          pfVar13 = (float *)((int)pfVar13 + 1);
          pdVar17 = (double *)((int)pdVar17 + 1);
        }
        break;
      default:
        goto switchD_0041e10d_default;
      }
      if (local_1c == (char *)0x0) {
        if (*(int *)(iVar7 + 0x14) == 10) {
          iVar7 = *(int *)(iVar7 + 0x1c);
        }
        else {
          switch(*(int *)(iVar7 + 0x14)) {
          case 1:
          case 7:
            iVar7 = 1;
            break;
          case 2:
            iVar7 = 2;
            break;
          case 3:
          case 5:
          case 9:
          case 0xb:
          case 0xc:
            iVar7 = 4;
            break;
          case 4:
          case 6:
          case 8:
            iVar7 = 8;
            break;
          case 10:
            iVar7 = 0;
            break;
          default:
            iVar7 = -1;
          }
        }
        bVar18 = true;
        pcVar14 = (char *)(*(int *)(local_20 + 0x18) + local_30);
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar18 = *pcVar14 == *(char *)pdVar12;
          pcVar14 = pcVar14 + 1;
          pdVar12 = (double *)((int)pdVar12 + 1);
        } while (bVar18);
        if (!bVar18) {
          local_1c = (char *)0x1;
        }
      }
switchD_0041e10d_default:
      local_24 = local_24 + 1;
      param_1 = local_3c;
    } while (local_24 < *(int *)(local_3c + 0x120));
    if (local_1c == (char *)0x0) goto LAB_0041e36c;
  }
  FUN_00493161();
  iVar7 = *(int *)(*(int *)(param_1 + 0x68) + 0xc4);
  if (iVar7 < 0) {
    iVar7 = -0x3c;
  }
  else {
    iVar7 = FUN_00430cf0(iVar7,1);
    local_28 = iVar7;
    if (iVar7 == 0) {
      FUN_00493768();
      iVar8 = *(int *)(param_1 + 0x68);
      local_8._0_1_ = 3;
      local_40 = *(int **)(iVar8 + 0x1c);
      iVar15 = *(int *)(iVar8 + 0xc4) * *(int *)(iVar8 + 0x60) + *(int *)(iVar8 + 0xc0);
      iVar8 = (**(code **)(*local_40 + 0x28))(0,2);
      if (iVar15 < iVar8) {
        FUN_00431300(*(undefined4 *)(*(int *)(param_1 + 0x68) + 200));
        local_24 = 0;
        local_8._0_1_ = 4;
        if (*(int *)(param_1 + 0x148) == 0) {
          local_1c = (char *)0x0;
        }
        else {
          local_1c = *(char **)(param_1 + 0x140);
        }
        local_20 = 0;
        for (; local_24 < *(int *)(param_1 + 0x120); local_24 = local_24 + 1) {
          local_44 = *(int *)(*(int *)(param_1 + 0x11c) + local_24 * 4);
          iVar8 = *(int *)(local_44 + 0x14);
          if ((iVar8 == 0xc) || (iVar8 == 0xb)) {
            if (*local_1c != '\0') {
              iVar7 = *(int *)(*(int *)(param_1 + 300) + local_20 * 4);
              iVar16 = *(int *)(iVar7 + 0x10);
              if (iVar16 == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = *(undefined4 *)(iVar7 + 8);
              }
              if ((iVar8 == 0xc) && (iVar7 = FUN_00406d30(uVar5,iVar16,0), iVar7 != -1)) {
                iVar16 = iVar7;
              }
              puVar9 = (undefined4 *)(*(int *)(local_44 + 0x18) + (int)local_2c);
              local_28 = FUN_00431360(uVar5,iVar16,*puVar9,puVar9);
              if (local_28 != 0) goto LAB_0041e541;
            }
            local_1c = local_1c + 1;
            local_20 = local_20 + 1;
            iVar7 = local_28;
          }
        }
        if (iVar7 == 0) {
          if (*(int *)(param_1 + 0x148) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(param_1 + 0x140);
          }
          FUN_00406ca0(uVar5,*(int *)(param_1 + 0x148));
          piVar1 = local_40;
          (**(code **)(*local_40 + 0x28))(iVar15,0);
          piVar2 = local_2c;
          (**(code **)(*piVar1 + 0x38))(local_2c,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0x60));
          *(uint *)(param_1 + 0x14c) = (uint)(*piVar2 < 0);
          FUN_004065e0(local_58);
          FUN_004062a0();
          local_8._0_1_ = 5;
          FUN_004062a0();
          local_8._0_1_ = 6;
          local_24 = 0;
          while (local_24 < *(int *)(*(int *)(param_1 + 0x68) + 0xd0)) {
            local_20 = *(int *)(param_1 + 0x68) + 0xfc + local_24 * 0x5c;
            for (local_1c = (char *)0x0; (int)local_1c < *(int *)(local_20 + 0x18);
                local_1c = local_1c + 1) {
              iVar8 = *(int *)(local_20 + 0x1c + (int)local_1c * 4);
              iVar7 = *(int *)(*(int *)(param_1 + 0x68) + 0xbc);
              iVar15 = *(int *)(iVar7 + 0x14 + iVar8 * 0x48);
              iVar7 = iVar7 + iVar8 * 0x48;
              if (iVar15 == 10) {
                uVar5 = *(undefined4 *)(iVar7 + 0x1c);
              }
              else {
                switch(iVar15) {
                case 1:
                case 7:
                  uVar5 = 1;
                  break;
                case 2:
                  uVar5 = 2;
                  break;
                case 3:
                case 5:
                case 9:
                case 0xb:
                case 0xc:
                  uVar5 = 4;
                  break;
                case 4:
                case 6:
                case 8:
                  uVar5 = 8;
                  break;
                case 10:
                  uVar5 = 0;
                  break;
                default:
                  uVar5 = 0xffffffff;
                }
              }
              FUN_004069d0(local_30 + *(int *)(iVar7 + 0x18),uVar5);
              FUN_004069d0((int)local_2c + *(int *)(iVar7 + 0x18),uVar5);
            }
            if (*(int *)(local_20 + 0xc) == 0) {
              FUN_00431a40(*(undefined4 *)(*(int *)(param_1 + 0x68) + 0xd4 + local_24 * 4),local_20)
              ;
              local_8._0_1_ = 7;
              iVar7 = FUN_004346b0(0,0,*(undefined4 *)(*(int *)(param_1 + 0x68) + 0xc4));
              local_8._0_1_ = 6;
              FUN_00431ab0();
              if (iVar7 == 0) goto LAB_0041e72f;
              local_24 = local_24 + 1;
              local_28 = iVar7;
            }
            else {
              local_28 = -0x40;
LAB_0041e72f:
              local_24 = local_24 + 1;
            }
          }
          local_8._0_1_ = 5;
          FUN_004064a0();
          local_8._0_1_ = 4;
          FUN_004064a0();
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00431340();
          local_8._0_1_ = 1;
          local_8._1_3_ = 0;
          FUN_004937a6();
          iVar7 = local_28;
          param_1 = local_3c;
        }
        else {
LAB_0041e541:
          local_8._0_1_ = 3;
          FUN_00431340();
          local_8._0_1_ = 1;
          FUN_004937a6();
          local_8._0_1_ = 1;
          iVar7 = local_28;
        }
      }
      else {
        local_8._0_1_ = 1;
        FUN_004937a6();
        local_8._0_1_ = 1;
        iVar7 = -0x3c;
      }
      FUN_00430cf0(*(undefined4 *)(*(int *)(param_1 + 0x68) + 0xc4),0);
      if (iVar7 == 0) goto LAB_0041e7ae;
    }
  }
  uVar5 = FUN_00430a70(iVar7);
  FUN_00493313(uVar5);
LAB_0041e7ae:
  FUN_0041dec0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004931d6();
  local_8 = 0xffffffff;
  local_58[0] = &PTR_FUN_02f95d48;
  FUN_004064a0();
  ExceptionList = local_10;
  return iVar7 == 0;
}


// Function: FUN_00410350
// Entry:    00410350
// Size:     3275 bytes
// Conv:     unknown
// Signature: undefined FUN_00410350(void)
// Decompiled by Ghidra 12.1.2


HWND__ * __thiscall FUN_00410350(int param_1,int param_2,CWnd *param_3,int *param_4)

{
  char cVar1;
  HCURSOR hCursor;
  CWnd *pCVar2;
  void **ppvVar3;
  HWND__ *pHVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  BOOL BVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  CWnd *pCVar16;
  char *pcVar17;
  char *pcVar18;
  CWnd *pCVar19;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  CWnd *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar10 = param_4;
  pCVar2 = param_3;
  iVar6 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e7e2;
  local_c = ExceptionList;
  if (param_2 < 0x7d1) {
    if (param_2 == 2000) {
      if (*(int *)(param_1 + 0x1d8) != 0) {
        return (HWND__ *)0x0;
      }
      ExceptionList = &local_c;
      iVar6 = FUN_0040ec30(param_3,&param_3,0);
      piVar10 = param_4;
      if (iVar6 != 1) {
        ExceptionList = local_c;
        return (HWND__ *)0x0;
      }
      if ((param_4 != (int *)0x0) && (piVar7 = (int *)FUN_0040e780(0), piVar10 != piVar7)) {
        iVar6 = FUN_0040e7b0(piVar10,0,0);
        if (iVar6 == 0) {
          ExceptionList = local_c;
          return (HWND__ *)0x0;
        }
        iVar6 = iVar6 + 0x18;
        iVar8 = FUN_00406cf0(iVar6);
        iVar9 = FUN_00406cf0(iVar6 + iVar8);
        puVar5 = (undefined4 *)(iVar9 + 0x14 + iVar6 + iVar8);
        hCursor = (HCURSOR)*puVar5;
        if (hCursor != (HCURSOR)0x0) {
          DestroyCursor(hCursor);
          *puVar5 = 0;
        }
        iVar8 = FUN_00406cf0(iVar6);
        iVar9 = FUN_00406cf0(iVar6 + iVar8);
        *(undefined4 *)(iVar9 + iVar6 + iVar8) = 0;
        ExceptionList = local_c;
        return (HWND__ *)0x0;
      }
      FUN_0040e700(param_3 + 0x34);
      (**(code **)(*(int *)(param_3 + 0x34) + 8))();
      if (*(CWnd **)(param_1 + 0x1e0) != pCVar2) {
        ExceptionList = local_c;
        return (HWND__ *)0x0;
      }
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      ExceptionList = local_c;
      return (HWND__ *)0x0;
    }
    switch(param_2) {
    case 1000:
      ExceptionList = &local_c;
      FUN_004138e0(param_3,param_3 + 4);
      ExceptionList = local_c;
      return (HWND__ *)0x0;
    case 0x3e9:
      return (HWND__ *)(param_1 + 0x104);
    case 0x3ea:
      ExceptionList = &local_c;
      pHVar4 = (HWND__ *)FUN_00413290(param_3,0);
      ExceptionList = local_c;
      return pHVar4;
    case 0x3eb:
      ExceptionList = &local_c;
      pHVar4 = (HWND__ *)FUN_00422f50(param_3,param_4);
      ExceptionList = local_c;
      return pHVar4;
    case 0x3ec:
      return (HWND__ *)0x1;
    case 0x3ed:
      return (HWND__ *)0x70005;
    case 0x3ee:
      goto switchD_00410393_caseD_3ee;
    case 0x3ef:
      pHVar4 = (HWND__ *)0x0;
      if (param_3 == (CWnd *)0x0) {
        return (HWND__ *)0x0;
      }
      ExceptionList = &local_c;
      param_3 = (CWnd *)FUN_00492f17(0x3c);
      local_4 = 0;
      if (param_3 != (CWnd *)0x0) {
        pHVar4 = (HWND__ *)FUN_00494787();
      }
      local_4 = 0xffffffff;
      FUN_00494bf7(pCVar2);
      ExceptionList = local_c;
      return pHVar4;
    case 0x3f0:
      if (param_3 == (CWnd *)0x0) {
        return (HWND__ *)0x0;
      }
      ExceptionList = &local_c;
      (**(code **)(*(int *)param_3 + 4))(1);
      ExceptionList = local_c;
      return (HWND__ *)0x0;
    case 0x3f1:
      if (param_3 == (CWnd *)0x0) {
        return (HWND__ *)0x0;
      }
      ExceptionList = &local_c;
      pHVar4 = CWnd::Detach(param_3);
      ExceptionList = local_c;
      return pHVar4;
    case 0x3f2:
      if (param_3 == (CWnd *)0x0) {
        return (HWND__ *)0x0;
      }
      return *(HWND__ **)(param_3 + 0x1c);
    case 0x3f3:
      if (param_3 == (CWnd *)0x0) {
        return (HWND__ *)0x0;
      }
      ExceptionList = &local_c;
      iVar6 = FUN_00494bd9(param_3);
      if (iVar6 != 0) {
        ExceptionList = local_c;
        return (HWND__ *)0x0;
      }
      if (param_4 == (int *)0x0) {
        ExceptionList = local_c;
        return (HWND__ *)0x0;
      }
      if (param_4[7] != 0) {
        ExceptionList = local_c;
        return (HWND__ *)0x0;
      }
      FUN_00494bf7(pCVar2);
      ExceptionList = local_c;
      return (HWND__ *)0x1;
    case 0x3f4:
      if (param_3 == (CWnd *)0x0) {
        return (HWND__ *)0x0;
      }
      ExceptionList = &local_c;
      FUN_00412410(*(undefined4 *)param_3,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8))
      ;
      ExceptionList = local_c;
      return (HWND__ *)0x0;
    case 0x3f5:
      ExceptionList = &local_c;
      FUN_00412490(param_3);
      ExceptionList = local_c;
      return (HWND__ *)0x0;
    case 0x3f6:
      ExceptionList = &local_c;
      pHVar4 = (HWND__ *)FUN_004102a0(param_3);
      ExceptionList = local_c;
      return pHVar4;
    default:
      return (HWND__ *)0x0;
    }
  }
  switch(param_2) {
  case 0x7d1:
    ExceptionList = &local_c;
    pHVar4 = (HWND__ *)FUN_00415b50(param_3);
    ExceptionList = local_c;
    return pHVar4;
  case 0x7d3:
    return *(HWND__ **)(param_1 + 0xd0);
  case 0x7d4:
    return *(HWND__ **)(param_1 + 0xd4);
  case 0x7d5:
    if (param_3 == (CWnd *)0x0) {
      return (HWND__ *)0xffffffff;
    }
    ExceptionList = &local_c;
    iVar6 = FUN_0040ec30(*(undefined4 *)param_3,&param_3,0);
    if (iVar6 == 0) {
      ExceptionList = local_c;
      return (HWND__ *)0xffffffff;
    }
    uVar13 = 0;
    if (*(int *)(pCVar2 + 4) != 0) {
      uVar13 = *(undefined4 *)(*(int *)(pCVar2 + 4) + 0x1c);
    }
    iVar6 = FUN_004115c0(param_3,0,0,*(undefined4 *)(pCVar2 + 8),uVar13);
    if (iVar6 == 0) {
      ExceptionList = local_c;
      return (HWND__ *)0xffffffff;
    }
    iVar6 = FUN_0040e730(0,0);
    iVar9 = FUN_00406cf0(iVar6 + 0x18);
    iVar9 = iVar6 + 0x18 + iVar9;
    iVar6 = FUN_00406cf0(iVar9);
    iVar8 = *(int *)(iVar9 + 0x1c + iVar6);
    iVar6 = iVar9 + 0x1c + iVar6;
    iVar6 = iVar6 + iVar8 * 4 + 8 + *(int *)(iVar6 + 4 + iVar8 * 4);
    iVar8 = FUN_00406cf0(iVar6);
    if ((*(byte *)(iVar8 + 4 + iVar6) & 1) == 0) {
      ExceptionList = local_c;
      return (HWND__ *)0x0;
    }
    FUN_00411100(*(undefined4 *)pCVar2,0);
    ExceptionList = local_c;
    return (HWND__ *)0x0;
  case 0x7d6:
  case 0x7d7:
    ExceptionList = &local_c;
    if ((param_3 != (CWnd *)0x0) &&
       (ExceptionList = &local_c, iVar8 = FUN_0040ec30(param_3,&param_3,0), piVar10 = param_4,
       iVar8 != 0)) {
      if (param_4 == (int *)0x0) {
        iVar8 = FUN_0040e730(0,0);
        piVar10 = (int *)FUN_0040e780(0);
      }
      else {
        iVar8 = FUN_0040e7b0(param_4,0,0);
      }
      iVar6 = param_2;
      if ((iVar8 != 0) && (iVar9 = FUN_0040ede0(piVar10), iVar6 = param_2, iVar9 != 1)) {
        iVar6 = FUN_00406cf0(iVar8 + 0x18);
        iVar6 = iVar8 + 0x18 + iVar6;
        iVar8 = FUN_00406cf0(iVar6);
        pHVar4 = *(HWND__ **)(iVar6 + iVar8);
        iVar6 = param_2;
        if ((pHVar4 != (HWND__ *)0x0) &&
           (BVar12 = IsWindow((HWND)pHVar4[7].unused), iVar6 = param_2, BVar12 != 0)) {
          ExceptionList = local_c;
          return pHVar4;
        }
      }
    }
    if (iVar6 == 0x7d7) {
      FUN_00412f90(&DAT_02faad6c,0,pCVar2,piVar10);
    }
    break;
  case 0x7d8:
    ExceptionList = &local_c;
    pHVar4 = (HWND__ *)FUN_0041b250(param_3);
    ExceptionList = local_c;
    return pHVar4;
  case 0x7d9:
    ExceptionList = &local_c;
    FUN_00412670();
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
    break;
  case 0x7da:
    ExceptionList = &local_c;
    FUN_00412670();
    if (0 < *(int *)(param_1 + 0x1d4)) {
      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
    }
    break;
  case 0x7db:
    if (((*(uint *)(param_1 + 0x23c) != 0) && (*(int *)(param_1 + 0x234) != 0)) &&
       (ExceptionList = &local_c,
       pbVar11 = (byte *)FUN_00406d80(*(int *)(param_1 + 0x234),*(uint *)(param_1 + 0x23c) >> 2,
                                      param_3), pbVar11 != (byte *)0xffffffff)) {
      if (*(int *)(param_1 + 0x250) != 0) {
        ExceptionList = local_c;
        return (HWND__ *)(uint)pbVar11[*(int *)(param_1 + 0x248)];
      }
      ExceptionList = local_c;
      return (HWND__ *)(uint)*pbVar11;
    }
    ExceptionList = local_c;
    return (HWND__ *)0xffffffff;
  case 0x7dc:
    ExceptionList = &local_c;
    if (((*(uint *)(param_1 + 0x23c) == 0) ||
        (ExceptionList = &local_c, *(int *)(param_1 + 0x234) == 0)) ||
       (ExceptionList = &local_c,
       iVar6 = FUN_00406d80(*(int *)(param_1 + 0x234),*(uint *)(param_1 + 0x23c) >> 2,param_3),
       iVar6 == -1)) {
      FUN_004065a0(pCVar2);
      FUN_00406570(param_4);
    }
    break;
  case 0x7dd:
    if (((*(uint *)(param_1 + 0x23c) != 0) && (*(int *)(param_1 + 0x234) != 0)) &&
       (ExceptionList = &local_c,
       iVar6 = FUN_00406d80(*(int *)(param_1 + 0x234),*(uint *)(param_1 + 0x23c) >> 2,param_3),
       iVar6 != -1)) {
      FUN_00406b50(iVar6 * 4,4);
      FUN_00406b50(iVar6,1);
      ExceptionList = local_c;
      return (HWND__ *)0x1;
    }
    break;
  case 0x7de:
    ExceptionList = &local_c;
    FUN_00411300();
    break;
  case 0x7df:
    if ((param_3 != (CWnd *)0x0) &&
       (ExceptionList = &local_c,
       iVar6 = FUN_00411400(*(undefined4 *)param_3,*(undefined4 *)(param_3 + 4),
                            *(undefined4 *)(param_3 + 8)), iVar6 == 1)) {
      ExceptionList = local_c;
      return (HWND__ *)0x1;
    }
    break;
  case 0x7e0:
    ExceptionList = &local_c;
    FUN_00415c00(0);
    break;
  case 0x7e1:
    if ((param_3 != (CWnd *)0x0) && (*(int *)(param_1 + 0x1e4) != 0)) {
      *(int *)param_3 = *(int *)(param_1 + 0x1e4);
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x1e8);
      return (HWND__ *)0x1;
    }
    break;
  case 0x7e2:
    ExceptionList = &local_c;
    FUN_00412670();
    break;
  case 0x7e3:
    ExceptionList = &local_c;
    if (((*(uint *)(param_1 + 0x264) == 0) ||
        (ExceptionList = &local_c, *(int *)(param_1 + 0x25c) == 0)) ||
       (ExceptionList = &local_c,
       iVar6 = FUN_00406d80(*(int *)(param_1 + 0x25c),*(uint *)(param_1 + 0x264) >> 2,param_3),
       iVar6 == -1)) {
      FUN_004065a0(pCVar2);
    }
    break;
  case 0x7e4:
    if (((param_3 != (CWnd *)0x0) && (*(uint *)(param_1 + 0x264) != 0)) &&
       ((*(int *)(param_1 + 0x25c) != 0 &&
        (ExceptionList = &local_c,
        iVar6 = FUN_00406d80(*(int *)(param_1 + 0x25c),*(uint *)(param_1 + 0x264) >> 2,param_3),
        iVar6 != -1)))) {
      FUN_00406b50(iVar6 * 4,4);
      *(undefined4 *)pCVar2 = 0;
      *(undefined4 *)(pCVar2 + 4) = 0;
      *(undefined4 *)(pCVar2 + 8) = 0;
      *(undefined4 *)(pCVar2 + 0x14) = 0;
      if (*(HICON *)(pCVar2 + 0xc) != (HICON)0x0) {
        DestroyIcon(*(HICON *)(pCVar2 + 0xc));
        *(undefined4 *)(pCVar2 + 0xc) = 0;
      }
      if (*(int *)(pCVar2 + 0x10) != 0) {
        FUN_00492f40(*(int *)(pCVar2 + 0x10));
        *(undefined4 *)(pCVar2 + 0x10) = 0;
      }
      FUN_00492f40(pCVar2);
    }
    break;
  case 0x7e5:
    if (((*(uint *)(param_1 + 0x264) != 0) && (*(int *)(param_1 + 0x25c) != 0)) &&
       (ExceptionList = &local_c,
       iVar6 = FUN_00406d80(*(int *)(param_1 + 0x25c),*(uint *)(param_1 + 0x264) >> 2,param_3),
       iVar6 != -1)) {
      ExceptionList = local_c;
      return (HWND__ *)0x1;
    }
    break;
  case 0x7e6:
    ExceptionList = &local_c;
    iVar6 = FUN_0040ec30(param_3,&param_3,0);
    if (iVar6 == 1) {
      if (param_4 == (int *)0x0) {
        puVar5 = (undefined4 *)FUN_0040e730(0,0);
      }
      else {
        puVar5 = (undefined4 *)FUN_0040e7b0(param_4,0,0);
      }
      if (puVar5 != (undefined4 *)0x0) {
        ExceptionList = local_c;
        return (HWND__ *)*puVar5;
      }
    }
    break;
  case 0x7e7:
    if (param_4 != (int *)0x0) {
      if ((((uint)param_3 & 0xdfffffff) == 0x80000004) ||
         (ExceptionList = &local_c, ((uint)param_3 & 0xdfffffff) == 0x80000005)) {
        iVar6 = *param_4;
        piVar7 = param_4 + 1;
        iVar8 = 1;
        if (0 < iVar6) {
          do {
            iVar8 = iVar8 * *piVar7;
            piVar7 = piVar7 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        ExceptionList = &local_c;
        ppvVar3 = &local_c;
        if (0 < iVar8) {
          do {
            ExceptionList = ppvVar3;
            iVar6 = *piVar7;
            piVar7 = piVar7 + 1;
            FUN_0041b7c0(iVar6);
            iVar8 = iVar8 + -1;
            ppvVar3 = ExceptionList;
          } while (iVar8 != 0);
        }
      }
      FUN_0041b7c0(piVar10);
    }
    break;
  case 0x7e8:
    if (param_4 != (int *)0x0) {
      ExceptionList = &local_c;
      pHVar4 = (HWND__ *)FUN_0041b610(param_3);
      ExceptionList = local_c;
      return pHVar4;
    }
    ExceptionList = &local_c;
    pHVar4 = (HWND__ *)FUN_0041b6c0(param_3);
    ExceptionList = local_c;
    return pHVar4;
  case 0x7e9:
    ExceptionList = &local_c;
    FUN_0041b7c0(param_3);
    break;
  case 0x7ea:
    ExceptionList = &local_c;
    pHVar4 = (HWND__ *)FUN_0041b700(param_3,param_4);
    ExceptionList = local_c;
    return pHVar4;
  case 0x7eb:
    ExceptionList = &local_c;
    FUN_00412f90(param_3,0,0,0);
    break;
  case 0x7ec:
    ExceptionList = &local_c;
    FUN_0041b6a0(param_3);
    break;
  case 0x7ed:
    ExceptionList = &local_c;
    iVar6 = FUN_00413290(param_3,0);
    if (iVar6 != 0) {
      if ((*(uint *)(iVar6 + 0x14) & 4) != 0) {
        ExceptionList = local_c;
        return (HWND__ *)0x2;
      }
      if ((*(uint *)(iVar6 + 0x14) & 0x40) != 0) {
        ExceptionList = local_c;
        return (HWND__ *)0x1;
      }
    }
    break;
  case 0x7ee:
    return *(HWND__ **)(param_1 + 0xc4);
  case 0x7ef:
    ExceptionList = &local_c;
    pHVar4 = (HWND__ *)FUN_0041b300(param_3);
    ExceptionList = local_c;
    return pHVar4;
  case 0x7f0:
    return (HWND__ *)(*(uint *)(param_1 + 0x11c) >> 3);
  case 0x7f1:
    ExceptionList = &local_c;
    iVar6 = FUN_0040f8c0(param_3);
    if ((iVar6 != 0) && (BVar12 = IsWindow(*(HWND *)(iVar6 + 0x1c)), BVar12 != 0)) {
      ExceptionList = local_c;
      return *(HWND__ **)(iVar6 + 0x1c);
    }
    break;
  case 0x7f2:
    ExceptionList = &local_c;
    pHVar4 = (HWND__ *)FUN_00420a60(param_3);
    ExceptionList = local_c;
    return pHVar4;
  case 0x7f3:
    ExceptionList = &local_c;
    FUN_00430a20(param_3);
    break;
  case 0x7f4:
    if (param_3 == (CWnd *)0x10030) {
      *param_4 = 0;
      param_4[1] = 0;
      param_4[2] = 0xc0;
      param_4[3] = 0x46000000;
      return (HWND__ *)0x1;
    }
    uVar14 = (uint)param_3 >> 0x10;
    if ((((short)((uint)param_3 >> 0x10) != 0) &&
        (ExceptionList = &local_c, iVar6 = FUN_0041b960(param_3), iVar6 == 3)) &&
       (iVar6 = uVar14 - 1, iVar6 < (int)(*(uint *)(param_1 + 0x130) >> 2))) {
      iVar8 = ((uint)pCVar2 & 0xffff) - 1;
      iVar6 = *(int *)(*(int *)(param_1 + 0x128) + iVar6 * 4);
      if ((iVar6 != 0) && (iVar8 < *(int *)(iVar6 + 0x54))) {
        pHVar4 = (HWND__ *)(**(code **)(iVar6 + 0x78))(8,iVar8,param_4);
        ExceptionList = local_c;
        return pHVar4;
      }
    }
    break;
  case 0x7f5:
    ExceptionList = &local_c;
    iVar6 = FUN_0040ec30(param_3,&param_3,0);
    if (iVar6 == 0) {
      ExceptionList = local_c;
      return (HWND__ *)0x0;
    }
    iVar6 = FUN_0040e730(0,0);
    iVar8 = FUN_00406cf0(iVar6 + 0x18);
    iVar8 = iVar6 + 0x18 + iVar8;
    iVar6 = FUN_00406cf0(iVar8);
    piVar10 = (int *)(iVar8 + 0x1c + iVar6);
    iVar6 = (int)piVar10 + piVar10[*piVar10 + 1] + *piVar10 * 4 + 8;
    iVar8 = FUN_00406cf0(iVar6);
    *(uint *)(iVar8 + 4 + iVar6) = *(uint *)(iVar8 + 4 + iVar6) | 8;
    local_10 = param_3;
    goto LAB_00410ffd;
  case 0x7f6:
    ExceptionList = &local_c;
    iVar6 = FUN_0040ec30(*(undefined4 *)param_3,&param_4,0);
    if (iVar6 != 0) {
      iVar8 = *(int *)(pCVar2 + 4) + -20000;
      iVar6 = FUN_0040f200(&param_2);
      if ((-1 < iVar8) && (iVar8 < iVar6)) {
        iVar8 = iVar8 + param_2;
        iVar6 = FUN_0040e730(iVar8,0);
        iVar9 = FUN_00406cf0(iVar6 + 0x18);
        iVar9 = iVar6 + 0x18 + iVar9;
        iVar6 = FUN_00406cf0(iVar9);
        uVar13 = *(undefined4 *)(iVar9 + iVar6);
        iVar9 = iVar9 + iVar6;
        *(undefined4 *)(pCVar2 + 0x10c) = *(undefined4 *)(iVar9 + 4);
        *(uint *)(pCVar2 + 0x110) = ~*(uint *)(iVar9 + 8) & 1;
        FUN_00493244(iVar9 + 0xc);
        local_4 = 1;
        iVar6 = FUN_0041fe60(uVar13);
        if (iVar6 != 0) {
          FUN_00493566(&DAT_02faad68);
          FUN_00493566(iVar6);
        }
        puVar5 = (undefined4 *)FUN_00490ead(local_14,0xfa);
        uVar14 = 0xffffffff;
        pcVar17 = (char *)*puVar5;
        do {
          pcVar18 = pcVar17;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar1 != '\0');
        uVar14 = ~uVar14;
        pCVar16 = (CWnd *)(pcVar18 + -uVar14);
        pCVar19 = pCVar2 + 8;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pCVar19 = *(undefined4 *)pCVar16;
          pCVar16 = pCVar16 + 4;
          pCVar19 = pCVar19 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pCVar19 = *pCVar16;
          pCVar16 = pCVar16 + 1;
          pCVar19 = pCVar19 + 1;
        }
        FUN_004931d6();
        uVar13 = FUN_0040e780(iVar8);
        *(undefined4 *)(pCVar2 + 0x108) = uVar13;
        local_4 = 0xffffffff;
        FUN_004931d6();
        ExceptionList = local_c;
        return (HWND__ *)0x1;
      }
    }
    break;
  case 0x7f7:
    ExceptionList = &local_c;
    iVar6 = FUN_0040ec30(param_3,&param_3,0);
    if ((iVar6 != 0) && (iVar6 = FUN_0040e7b0(param_4,0,0), iVar6 != 0)) {
      FUN_0040eeb0(iVar6,1,0x7fffffff);
    }
    break;
  case 0x7f8:
    ExceptionList = &local_c;
    iVar6 = FUN_0040ec30(param_3,&local_10,0);
    if (iVar6 == 0) {
      ExceptionList = local_c;
      return (HWND__ *)0x0;
    }
LAB_00410ffd:
    FUN_00414d20(local_10);
  }
  ExceptionList = local_c;
  return (HWND__ *)0x0;
switchD_00410393_caseD_3ee:
  if (param_3 == (CWnd *)0x1) {
    ExceptionList = &local_c;
    puVar5 = (undefined4 *)FUN_0049341f(local_18,param_1 + 0xd0,&DAT_02faaca8);
    uVar14 = 0xffffffff;
    pcVar17 = (char *)*puVar5;
    do {
      pcVar18 = pcVar17;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar18;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    piVar10 = (int *)(pcVar18 + -uVar14);
    piVar7 = param_4;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *piVar7 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar7 = piVar7 + 1;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(char *)piVar7 = (char)*piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      piVar7 = (int *)((int)piVar7 + 1);
    }
    FUN_004931d6();
    ExceptionList = local_c;
    return (HWND__ *)0x0;
  }
  if (param_3 == (CWnd *)0x7d1) {
    ExceptionList = &local_c;
    puVar5 = (undefined4 *)FUN_0049341f(local_1c,param_1 + 0xd0,&DAT_02faaca8);
    uVar14 = 0xffffffff;
    pcVar17 = (char *)*puVar5;
    do {
      pcVar18 = pcVar17;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar18;
    } while (cVar1 != '\0');
    uVar14 = ~uVar14;
    piVar10 = (int *)(pcVar18 + -uVar14);
    piVar7 = param_4;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *piVar7 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar7 = piVar7 + 1;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(char *)piVar7 = (char)*piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      piVar7 = (int *)((int)piVar7 + 1);
    }
    FUN_004931d6();
    ExceptionList = local_c;
    return (HWND__ *)0x0;
  }
  if (param_3 != (CWnd *)0x7d2) {
    *(char *)param_4 = '\0';
    return (HWND__ *)0x0;
  }
  uVar14 = 0xffffffff;
  pcVar17 = *(char **)(param_1 + 0xd4);
  do {
    pcVar18 = pcVar17;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar18 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar18;
  } while (cVar1 != '\0');
  uVar14 = ~uVar14;
  piVar10 = (int *)(pcVar18 + -uVar14);
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *param_4 = *piVar10;
    piVar10 = piVar10 + 1;
    param_4 = param_4 + 1;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(char *)param_4 = (char)*piVar10;
    piVar10 = (int *)((int)piVar10 + 1);
    param_4 = (int *)((int)param_4 + 1);
  }
  return (HWND__ *)0x0;
}


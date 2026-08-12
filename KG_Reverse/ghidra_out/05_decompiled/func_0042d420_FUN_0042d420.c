// Function: FUN_0042d420
// Entry:    0042d420
// Size:     2355 bytes
// Conv:     unknown
// Signature: undefined FUN_0042d420(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_0042d420(undefined4 param_1,CDC *param_2,undefined **param_3,int param_4,int param_5,int param_6
            ,uint param_7,RECT *param_8,LPRECT param_9)

{
  double dVar1;
  LONG LVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  HRGN hrgn;
  HRGN pHVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [4];
  LPCSTR unaff_EBX;
  int unaff_EBP;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined *puVar15;
  undefined *puStack_c0;
  tagSIZE tStack_bc;
  uint uStack_b4;
  undefined8 local_b0;
  int iStack_a4;
  undefined1 auStack_a0 [4];
  tagRECT tStack_9c;
  undefined8 uStack_8c;
  int iStack_84;
  uint uStack_80;
  RECT RStack_7c;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double dStack_58;
  HRGN pHStack_50;
  undefined1 auStack_48 [60];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004a007a;
  pvStack_c = ExceptionList;
  local_b0 = (double)CONCAT44(local_b0._4_4_,param_1);
  ExceptionList = &pvStack_c;
  iVar3 = FUN_0042a650();
  local_b0 = (double)CONCAT44(iVar3,(int)local_b0);
  if (iVar3 == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  bVar14 = (param_7 & 0x1e) != param_7;
  if ((bVar14) && (iVar3 = FUN_0042e310(param_5,param_6), iVar3 == 0)) {
    if (param_9 == (LPRECT)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    SetRectEmpty(param_9);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00429700();
  uStack_4._0_1_ = 0;
  uStack_4._1_3_ = 0;
  FUN_00427a00(auStack_48,param_5,param_6,1);
  if (bVar14) {
    piVar4 = (int *)FUN_0042e0a0(&tStack_bc.cy,param_5,param_6);
    iStack_a4 = *piVar4;
    auStack_a0 = (undefined1  [4])piVar4[1];
  }
  else {
    iStack_a4 = FUN_0042a180(param_6);
    auStack_a0 = (undefined1  [4])FUN_0042a0a0(param_5);
  }
  uVar5 = FUN_004297e0();
  uStack_8c = (double)CONCAT44(uStack_8c._4_4_,uVar5);
  uVar5 = uVar5 & 0xf;
  uVar6 = FUN_00429830();
  uStack_8c = (double)CONCAT44(uVar6,(undefined *)uStack_8c);
  tStack_9c.right = iStack_a4 + (int)param_3;
  tStack_9c.bottom = (int)auStack_a0 + param_4;
  tStack_9c.left = (LONG)param_3;
  tStack_9c.top = param_4;
  if (param_9 != (LPRECT)0x0) {
    param_9->left = (LONG)param_3;
    param_9->top = param_4;
    param_9->right = tStack_9c.right;
    param_9->bottom = tStack_9c.bottom;
  }
  ppuVar7 = (undefined **)FUN_00427c00();
  if (ppuVar7 == (undefined **)0xff000000) {
    ppuVar7 = *(undefined ***)((int)local_b0 + 0x40);
  }
  tStack_bc.cx = (LONG)ppuVar7;
  if ((*(int *)((int)local_b0 + 0x6c) == 0) &&
     ((iVar3 = FUN_004279e0(), param_5 < iVar3 || (iVar3 = FUN_004279f0(), param_6 < iVar3)))) {
    ppuVar7 = (undefined **)GetSysColor(0xf);
    tStack_bc.cx = (LONG)ppuVar7;
  }
  if ((param_7 & 0x20) != 0) {
    RStack_7c.right = tStack_9c.right;
    RStack_7c.left = tStack_9c.left;
    RStack_7c.top = tStack_9c.top;
    RStack_7c.bottom = tStack_9c.bottom;
    if (param_8 != (RECT *)0x0) {
      IntersectRect(&RStack_7c,&RStack_7c,param_8);
    }
    FUN_00499eda(ppuVar7);
    FillRect(*(HDC *)(param_2 + 4),&RStack_7c,
             (HBRUSH)(-(uint)(&stack0x00000000 != (undefined1 *)0xb8) & uStack_b4));
    tStack_bc.cy = (LONG)&PTR_LAB_02f96400;
    uStack_4._0_1_ = 1;
    FUN_00499e74();
    uStack_4._0_1_ = 0;
  }
  if ((param_7 & 1) == 0) goto LAB_0042dcf3;
  iVar3 = FUN_004297b0();
  if (iVar3 != 0) {
    if ((iVar3 != 1) && (iVar3 != 2)) goto LAB_0042dcf3;
    iVar3 = FUN_00429840();
    local_b0 = (double)CONCAT44(iVar3,(int)local_b0);
    if (iVar3 == 0) goto LAB_0042dcf3;
    InflateRect((LPRECT)(auStack_a0 + 4),-uStack_8c._4_4_,-uStack_8c._4_4_);
    LPtoDP(*(HDC *)(param_2 + 8),(LPPOINT)(auStack_a0 + 4),2);
    (**(code **)(*(int *)param_2 + 0x1c))();
    (**(code **)(*(int *)param_2 + 0x34))(1);
    hrgn = CreateRectRgn(0,0,0,0);
    pHStack_50 = hrgn;
    iVar3 = GetClipRgn(*(HDC *)(param_2 + 4),hrgn);
    tStack_bc.cy = 0;
    tStack_bc.cx = (LONG)&PTR_LAB_02f96418;
    uVar12 = (uint)(iVar3 == 1);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
    uStack_80 = uVar12;
    if (((*(byte *)(uStack_b4 + 0x44) & 8) == 0) || (*(int *)(uStack_b4 + 0x6c) == 0)) {
      pHVar8 = CreateRectRgnIndirect((RECT *)auStack_a0);
      FUN_00499e1d(pHVar8);
      FUN_00499a5b(&tStack_bc,1);
    }
    uStack_6c = 0;
    RStack_7c.bottom = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    iStack_68 = 0;
    iStack_64 = 0;
    iVar3 = FUN_004226d0(param_2,(int)local_b0,&RStack_7c.bottom,puStack_c0);
    LVar2 = tStack_9c.left;
    if (iVar3 == 1) {
      iVar3 = tStack_9c.top - (int)auStack_a0;
      puStack_c0 = (undefined *)(tStack_9c.right + -tStack_9c.left);
      iStack_84 = (int)auStack_a0;
      local_b0 = (double)CONCAT44(local_b0._4_4_,iVar3);
      auVar11 = auStack_a0;
      ppuVar7 = (undefined **)tStack_9c.left;
      puVar15 = puStack_c0;
      if (uVar5 == 10) {
LAB_0042dc7a:
        FUN_00422b10(&RStack_7c.bottom,auVar11,ppuVar7,iVar3,puVar15,&DAT_00cc0020);
      }
      else {
        if ((((uVar5 != 0xd) && (uVar5 != 0xe)) && (uVar5 != 0xc)) && (uVar5 != 0xb)) {
          if (((uVar5 == 2) || (uVar5 == 5)) || (uVar5 == 8)) {
            iStack_84 = (iVar3 - iStack_68) / 2 + (int)auStack_a0;
          }
          else if (((uVar5 == 3) || (uVar5 == 6)) || (uVar5 == 9)) {
            iStack_84 = (iVar3 - iStack_68) + (int)auStack_a0;
          }
          if (((uVar5 == 4) || (uVar5 == 5)) || (uVar5 == 6)) {
            ppuVar7 = (undefined **)(((int)puStack_c0 - iStack_64) / 2 + tStack_9c.left);
          }
          else if (((uVar5 == 7) || (uVar5 == 8)) || (uVar5 == 9)) {
            ppuVar7 = (undefined **)(puStack_c0 + (tStack_9c.left - iStack_64));
          }
          auVar11 = (undefined1  [4])iStack_84;
          iVar3 = -1;
          puVar15 = (undefined *)0xffffffff;
          goto LAB_0042dc7a;
        }
        uStack_8c = (double)CONCAT44(uStack_8c._4_4_,iStack_64);
        iVar9 = iStack_68;
        if (uVar5 != 0xd) {
          uStack_8c = (double)iStack_68;
          local_b0 = (double)iStack_64;
          dStack_58 = (double)(int)puStack_c0 / local_b0;
          iVar9 = __ftol();
          uVar6 = __ftol();
          uStack_8c = (double)CONCAT44(uStack_8c._4_4_,uVar6);
        }
        if ((uVar5 == 0xc) || (uVar5 == 0xb)) {
          auVar11 = (undefined1  [4])((iVar3 - iVar9) / 2 + (int)auStack_a0);
          ppuVar7 = (undefined **)
                    (((int)puStack_c0 - (int)(undefined *)uStack_8c) / 2 + tStack_9c.left);
          iVar3 = iVar9;
          puVar15 = (undefined *)uStack_8c;
          goto LAB_0042dc7a;
        }
        local_b0 = (double)((ulonglong)local_b0 & 0xffffffff00000000);
        dVar1 = local_b0;
        if (0 < (int)puStack_c0) {
          local_b0._0_4_ = 0;
          iVar10 = (int)local_b0;
          local_b0 = dVar1;
          do {
            iVar13 = 0;
            if (0 < iVar3) {
              dStack_58 = (double)CONCAT44(dStack_58._4_4_,(undefined *)(iVar10 + LVar2));
              do {
                FUN_00422b10(&RStack_7c.bottom,iVar13 + iStack_84,dStack_58._0_4_,iVar9,
                             (undefined *)uStack_8c,&DAT_00cc0020);
                iVar13 = iVar13 + iVar9;
              } while (iVar13 < iVar3);
              iVar10 = (int)local_b0;
            }
            iVar10 = iVar10 + (int)(undefined *)uStack_8c;
            local_b0 = (double)CONCAT44(local_b0._4_4_,iVar10);
          } while (iVar10 < (int)puStack_c0);
        }
      }
      FUN_00422eb0(&RStack_7c.bottom);
      hrgn = pHStack_50;
      uVar12 = uStack_80;
    }
    if (uVar12 == 1) {
      SelectClipRgn(*(HDC *)(param_2 + 4),hrgn);
    }
    else {
      FUN_0049989e(0);
    }
    DeleteObject(hrgn);
    (**(code **)(*(int *)param_2 + 0x20))(0xffffffff);
    tStack_bc.cy = (LONG)&PTR_LAB_02f96400;
    uStack_4._0_1_ = 8;
    FUN_00499e74();
    uStack_4._0_1_ = 0;
    goto LAB_0042dcf3;
  }
  if (((ulonglong)uStack_8c & 0x700) != 0) {
    FUN_00499e8a(0,(*(int *)((int)local_b0 + 0x6c) != 2) - 1U & 3,
                 *(undefined4 *)((int)local_b0 + 0x3c));
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    uVar6 = FUN_00499471(&tStack_bc.cy);
    local_b0 = (double)CONCAT44(uVar6,(int)local_b0);
    FUN_00499962(&RStack_7c,param_3,param_4);
    iVar3 = iStack_a4;
    if (((ulonglong)uStack_8c & 0x100) == 0) {
      if (((ulonglong)uStack_8c & 0x400) == 0) {
        CDC::LineTo(param_2,(int)(iStack_a4 + (int)param_3),(int)auStack_a0 / 2 + param_4);
        FUN_00499962(&RStack_7c,param_3,param_4);
        iVar3 = iStack_a4 / 2;
        goto LAB_0042d77b;
      }
      CDC::LineTo(param_2,(int)(iStack_a4 + (int)param_3),(int)auStack_a0 + param_4);
      FUN_00499962(&RStack_7c,(undefined *)(iStack_a4 + (int)param_3),param_4);
      ppuVar7 = param_3;
    }
    else {
LAB_0042d77b:
      ppuVar7 = (undefined **)(iVar3 + (int)param_3);
    }
    CDC::LineTo(param_2,(int)ppuVar7,(int)auStack_a0 + param_4);
    FUN_00499471(local_b0._4_4_);
    tStack_bc.cy = (LONG)&PTR_LAB_02f96400;
    uStack_4._0_1_ = 3;
    FUN_00499e74();
  }
  InflateRect((LPRECT)(auStack_a0 + 4),-uStack_8c._4_4_,-uStack_8c._4_4_);
  puStack_c0 = PTR_DAT_02fd8088;
  uStack_4._0_1_ = 4;
  FUN_004298d0(&puStack_c0);
  if (*(int *)(puStack_c0 + -8) != 0) {
    RStack_7c.top = 0;
    RStack_7c.left = (LONG)&PTR_LAB_02f9640c;
    uStack_4 = CONCAT31(uStack_4._1_3_,5);
    FUN_0042d2b0(auStack_48,&RStack_7c,0);
    uVar6 = (**(code **)(*(int *)param_2 + 0x28))(&RStack_7c);
    local_b0 = (double)CONCAT44(local_b0._4_4_,uVar6);
    uVar12 = 0x800;
    if (((uVar5 == 2) || (uVar5 == 5)) || (uVar5 == 8)) {
      uVar12 = 0x801;
    }
    else if (((uVar5 == 3) || (uVar5 == 6)) || (uVar5 == 9)) {
      uVar12 = 0x802;
    }
    if (((uVar5 == 4) || (uVar5 == 5)) || (uVar5 == 6)) {
      uVar12 = uVar12 | 4;
    }
    else if (((uVar5 == 7) || (uVar5 == 8)) || (uVar5 == 9)) {
      uVar12 = uVar12 | 8;
    }
    iVar3 = FUN_00493651(0xd);
    if ((iVar3 == -1) &&
       (GetTextExtentPoint32A(*(HDC *)(param_2 + 8),unaff_EBX,*(int *)(unaff_EBX + -8),&tStack_bc),
       tStack_bc.cx < tStack_9c.top - (int)auStack_a0)) {
      uVar12 = uVar12 | 0x20;
    }
    else {
      uVar12 = uVar12 | 0x10;
    }
    if (((*(byte *)(uStack_b4 + 0x44) & 8) != 0) && (*(int *)(uStack_b4 + 0x6c) != 0)) {
      uVar12 = uVar12 | 0x100;
    }
    iVar3 = *(int *)param_2;
    uVar6 = FUN_00436e20();
    (**(code **)(iVar3 + 0x30))(uVar6);
    FUN_0049954d(1);
    (**(code **)(*(int *)param_2 + 0x68))
              (unaff_EBP,*(undefined4 *)(unaff_EBP + -8),&iStack_a4,uVar12);
    (**(code **)(*(int *)param_2 + 0x28))(unaff_EBX);
    RStack_7c.left = (LONG)&PTR_LAB_02f96400;
    uStack_4._0_1_ = 6;
    FUN_00499e74();
  }
  uStack_4._0_1_ = 0;
  FUN_004931d6();
LAB_0042dcf3:
  FUN_0042dd60(param_2,param_3,param_4,param_5,param_6,&iStack_a4,param_7,(undefined *)uStack_8c);
  uStack_4 = 0xffffffff;
  thunk_FUN_00429740();
  ExceptionList = pvStack_c;
  return;
}


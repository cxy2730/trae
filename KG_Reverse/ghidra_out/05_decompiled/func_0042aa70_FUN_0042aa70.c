// Function: FUN_0042aa70
// Entry:    0042aa70
// Size:     5773 bytes
// Conv:     unknown
// Signature: undefined FUN_0042aa70(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0042aa70(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  RECT *pRVar7;
  uint uVar8;
  int iVar9;
  HBRUSH pHVar10;
  RECT RStack_274;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  tagPOINT tStack_258;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  undefined **ppuStack_240;
  uint uStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  undefined **ppuStack_220;
  HRGN pHStack_21c;
  int iStack_218;
  RECT RStack_214;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined **ppuStack_1f8;
  HGDIOBJ pvStack_1f4;
  tagRECT tStack_1f0;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined *puStack_1d8;
  undefined **ppuStack_1d4;
  int local_1cc;
  HDC pHStack_1c8;
  HDC pHStack_1c4;
  undefined **ppuStack_178;
  RECT RStack_170;
  RECT RStack_160;
  undefined **ppuStack_150;
  int iStack_148;
  uint uStack_144;
  undefined **ppuStack_140;
  undefined4 uStack_13c;
  undefined **ppuStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined **ppuStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined **ppuStack_114;
  int *piStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  RECT RStack_f0;
  int iStack_dc;
  undefined4 uStack_d8;
  RECT local_d4;
  undefined **ppuStack_c4;
  tagRECT tStack_bc;
  RECT RStack_ac;
  undefined1 auStack_9c [92];
  CHAR aCStack_40 [52];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049fedf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00499cdd();
  local_4 = 0;
  FUN_0049988e();
  iStack_238 = FUN_0042a650();
  if (((iStack_238 == 0) || (iVar1 = FUN_00427920(), iVar1 == 0)) ||
     (iVar1 = FUN_00427960(), iVar1 == 0)) {
    iVar1 = FUN_00499eda();
    if (iVar1 == 0) {
      pHVar10 = (HBRUSH)0x0;
    }
    else {
      pHVar10 = *(HBRUSH *)(iVar1 + 4);
    }
    FillRect(pHStack_1c8,&local_d4,pHVar10);
    ppuStack_1d4 = &PTR_LAB_02f96400;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00499e74();
  }
  else {
    if (*(int *)(param_1 + 0x44c) != 0) {
      FUN_0042c270();
    }
    uStack_fc = FUN_0042a5e0();
    FUN_0042a5f0();
    FUN_00442c00();
    FUN_0042a070();
    RStack_214.top = local_d4.top;
    RStack_214.right = local_d4.right;
    RStack_214.left = local_d4.left;
    local_4._0_1_ = 2;
    RStack_214.bottom = local_d4.bottom;
    DPtoLP(pHStack_1c4,(LPPOINT)&RStack_214,2);
    GetClientRect(*(HWND *)(param_1 + 0x1c),&tStack_1f0);
    DPtoLP(pHStack_1c4,(LPPOINT)&tStack_1f0,2);
    RStack_170.left = tStack_1f0.left;
    RStack_160.left = tStack_1f0.left;
    RStack_170.top = tStack_1f0.top;
    RStack_160.top = tStack_1f0.top;
    RStack_170.right = tStack_1f0.right;
    RStack_170.bottom = tStack_1f0.bottom;
    RStack_160.right = tStack_1f0.right;
    RStack_160.bottom = tStack_1f0.bottom;
    piVar2 = (int *)FUN_0042c1c0();
    iVar1 = *piVar2;
    tStack_1f0.left = tStack_1f0.left + iVar1;
    iVar3 = piVar2[1];
    tStack_1f0.top = tStack_1f0.top + iVar3;
    IntersectRect(&tStack_1f0,&tStack_1f0,&RStack_214);
    RStack_274.left = tStack_1f0.left;
    RStack_274.top = tStack_1f0.top;
    RStack_274.right = tStack_1f0.right;
    RStack_274.bottom = tStack_1f0.bottom;
    LPtoDP(pHStack_1c4,(LPPOINT)&RStack_274,2);
    uStack_13c = 0;
    ppuStack_140 = &PTR_LAB_02f96418;
    local_4._0_1_ = 3;
    CreateRectRgnIndirect(&RStack_274);
    FUN_00499e1d();
    RStack_170.left = RStack_170.left + iVar1;
    IntersectRect(&RStack_170,&RStack_170,&RStack_214);
    RStack_274.top = RStack_170.top;
    RStack_274.right = RStack_170.right;
    RStack_274.left = RStack_170.left;
    RStack_274.bottom = RStack_170.bottom;
    LPtoDP(pHStack_1c4,(LPPOINT)&RStack_274,2);
    uStack_134 = 0;
    ppuStack_138 = &PTR_LAB_02f96418;
    local_4._0_1_ = 4;
    CreateRectRgnIndirect(&RStack_274);
    FUN_00499e1d();
    RStack_160.top = RStack_160.top + iVar3;
    IntersectRect(&RStack_160,&RStack_160,&RStack_214);
    RStack_274.top = RStack_160.top;
    RStack_274.right = RStack_160.right;
    RStack_274.left = RStack_160.left;
    RStack_274.bottom = RStack_160.bottom;
    LPtoDP(pHStack_1c4,(LPPOINT)&RStack_274,2);
    uStack_128 = 0;
    ppuStack_12c = &PTR_LAB_02f96418;
    local_4._0_1_ = 5;
    CreateRectRgnIndirect(&RStack_274);
    FUN_00499e1d();
    pHStack_21c = (HRGN)0x0;
    ppuStack_220 = &PTR_LAB_02f96418;
    uStack_23c = 0;
    ppuStack_240 = &PTR_LAB_02f96418;
    local_4._0_1_ = 7;
    CreateRectRgnIndirect(&local_d4);
    FUN_00499e1d();
    GetCurrentObject(pHStack_1c4,6);
    uStack_f8 = FUN_00499e08();
    GetCurrentObject(pHStack_1c4,1);
    uStack_f4 = FUN_00499e08();
    GetCurrentObject(pHStack_1c4,2);
    uStack_d8 = FUN_00499e08();
    FUN_0049954d();
    uStack_144 = *(uint *)(param_1 + 0x44) >> 1 & 1;
    iStack_224 = FUN_00427920();
    iVar1 = FUN_004279e0();
    iStack_230 = iVar1;
    iStack_244 = FUN_00427960();
    iVar3 = FUN_004279f0();
    iStack_250 = iVar3;
    iStack_260 = FUN_0049633f();
    iStack_260 = iStack_260 + iVar1;
    iVar1 = FUN_0049633f();
    iVar1 = iVar1 + iVar3;
    piVar2 = (int *)FUN_0042a260();
    iStack_24c = *piVar2;
    iStack_248 = piVar2[1];
    pvStack_1f4 = (HGDIOBJ)0x0;
    ppuStack_1f8 = &PTR_LAB_02f9640c;
    local_4._0_1_ = 8;
    FUN_0042a6a0();
    GetSysColor(0xf);
    FUN_00499eda();
    local_4._0_1_ = 9;
    FUN_00499e8a();
    local_4._0_1_ = 10;
    FUN_00499e8a();
    local_4._0_1_ = 0xb;
    FUN_00499e8a();
    iStack_124 = 0;
    uStack_11c = 0;
    iStack_120 = 0;
    uStack_118 = 5;
    piStack_10c = (int *)0x0;
    uStack_104 = 0;
    iStack_108 = 0;
    uStack_100 = 5;
    local_4._0_1_ = 0xe;
    FUN_00429700();
    puStack_1d8 = PTR_DAT_02fd8088;
    local_4._0_1_ = 0x10;
    iStack_234 = 1;
    do {
      iVar3 = iStack_234;
      if (iStack_234 == 2) {
        FUN_00499634();
        iVar4 = FUN_00499eda();
        if (iVar4 == 0) {
          pHVar10 = (HBRUSH)0x0;
        }
        else {
          pHVar10 = *(HBRUSH *)(iVar4 + 4);
        }
        FillRgn(pHStack_1c8,
                (HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x220) & (uint)pHStack_21c),pHVar10
               );
        ppuStack_1d4 = &PTR_LAB_02f96400;
        local_4._0_1_ = 0x11;
        FUN_00499e74();
        local_4._0_1_ = 0x10;
        FUN_00442c00();
      }
      if (uStack_144 == 1) {
        if (RStack_214.top <= iStack_248) {
          if (iVar3 == 1) {
            iVar3 = 0;
            iVar4 = 0;
            if (0 < iStack_250) {
              do {
                FUN_0042a180();
                iVar3 = FUN_0042a340();
                iVar4 = iVar4 + 1;
              } while (iVar4 < iStack_250);
            }
            iVar4 = iVar1;
            if (iVar1 < iStack_244) {
              do {
                FUN_0042a180();
                iVar3 = FUN_0042a340();
                iVar4 = iVar4 + 1;
              } while (iVar4 < iStack_244);
            }
            RStack_274.right = iVar3 + iStack_24c;
            RStack_274.bottom = iStack_248;
            RStack_274.left = 0;
            RStack_274.top = 0;
            IntersectRect(&RStack_274,&RStack_274,&RStack_214);
            BVar5 = IsRectEmpty(&RStack_274);
            if (BVar5 == 0) {
              LPtoDP(pHStack_1c4,(LPPOINT)&RStack_274,2);
              CreateRectRgnIndirect(&RStack_274);
              FUN_00499e1d();
              CombineRgn(pHStack_21c,
                         (HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x220) & (uint)pHStack_21c
                               ),(HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x240) &
                                       uStack_23c),4);
              FUN_00499e74();
              DPtoLP(pHStack_1c4,(LPPOINT)&RStack_274,2);
              FUN_00499471();
              PatBlt(pHStack_1c8,RStack_274.left,RStack_274.top,RStack_274.right - RStack_274.left,
                     RStack_274.bottom - RStack_274.top,0xf00021);
            }
          }
          else {
            iStack_25c = iVar1 - iStack_250;
            iStack_264 = iStack_25c + -1;
            iVar3 = 0;
            if (iStack_264 < iStack_244) {
              do {
                if (RStack_214.right < iVar3) break;
                if (iStack_25c <= iStack_264) {
                  RStack_274.left = iVar3;
                  FUN_0042a180();
                  RStack_274.right = FUN_0042a340();
                  RStack_274.bottom = iStack_248;
                  RStack_274.top = 0;
                  IntersectRect(&tStack_bc,&RStack_274,&RStack_214);
                  RStack_ac.top = tStack_bc.top;
                  RStack_ac.left = tStack_bc.left;
                  RStack_ac.right = tStack_bc.right;
                  RStack_ac.bottom = tStack_bc.bottom;
                  BVar5 = IsRectEmpty(&RStack_ac);
                  if (BVar5 == 0) {
                    FUN_004279a0();
                    if ((&stack0x00000000 != (undefined1 *)0x1f8) && (pvStack_1f4 != (HGDIOBJ)0x0))
                    {
                      SelectObject(pHStack_1c8,pvStack_1f4);
                    }
                    FUN_00499605();
                    (**(code **)(local_1cc + 0x68))(puStack_1d8);
                  }
                }
                iVar4 = iStack_264;
                FUN_00499471();
                if (iVar4 == iStack_25c + -1) {
                  iVar6 = iStack_24c;
                  if (RStack_214.left <= iStack_24c) {
                    tStack_258.x = 1;
                    tStack_258.y = 1;
                    DPtoLP(pHStack_1c4,&tStack_258,1);
                    FUN_00499471();
                    iVar3 = iStack_248;
                    FUN_00499962();
                    CDC::LineTo((CDC *)&local_1cc,tStack_258.x,tStack_258.y);
                    CDC::LineTo((CDC *)&local_1cc,iStack_24c,tStack_258.y);
                    FUN_00499471();
                    FUN_00499962();
                    CDC::LineTo((CDC *)&local_1cc,0,0);
                    CDC::LineTo((CDC *)&local_1cc,iStack_24c,0);
                    CDC::LineTo((CDC *)&local_1cc,iStack_24c,iVar3);
                    CDC::LineTo((CDC *)&local_1cc,0,iVar3);
                    iVar6 = iStack_24c;
                  }
                }
                else {
                  FUN_0042a180();
                  iVar6 = FUN_0042a340();
                  iVar4 = iStack_264;
                  if (RStack_214.left <= iVar6) {
                    tStack_258.y = 0;
                    tStack_258.x = iVar3;
                    LPtoDP(pHStack_1c4,&tStack_258,1);
                    tStack_258.x = tStack_258.x + 1;
                    DPtoLP(pHStack_1c4,&tStack_258,1);
                    FUN_00499471();
                    FUN_00499962();
                    CDC::LineTo((CDC *)&local_1cc,tStack_258.x,0);
                    FUN_00499471();
                    CDC::LineTo((CDC *)&local_1cc,iVar6,0);
                    CDC::LineTo((CDC *)&local_1cc,iVar6,iStack_248);
                    CDC::LineTo((CDC *)&local_1cc,iVar3,iStack_248);
                    iVar4 = iStack_264;
                  }
                }
                iStack_264 = iVar4 + 1;
                iVar3 = iVar6;
              } while (iStack_264 < iStack_244);
            }
          }
        }
        iVar3 = iStack_248;
        if ((RStack_214.left <= iStack_24c) &&
           (iStack_264 = iStack_260 - iStack_230, iVar4 = iStack_248, iStack_264 < iStack_224)) {
          do {
            iVar3 = iStack_248;
            if (RStack_214.bottom < iVar4) break;
            FUN_0042a0a0();
            iVar6 = FUN_0042a470();
            if (RStack_214.top <= iVar6) {
              RStack_274.left = 0;
              RStack_274.right = iStack_24c;
              RStack_274.top = iVar4;
              RStack_274.bottom = iVar6;
              if (iStack_234 == 1) {
                IntersectRect(&RStack_274,&RStack_274,&RStack_214);
                BVar5 = IsRectEmpty(&RStack_274);
                if (BVar5 == 0) {
                  FUN_00499471();
                  PatBlt(pHStack_1c8,RStack_274.left,RStack_274.top,
                         RStack_274.right - RStack_274.left,RStack_274.bottom - RStack_274.top,
                         0xf00021);
                  LPtoDP(pHStack_1c4,(LPPOINT)&RStack_274,2);
                  CreateRectRgnIndirect(&RStack_274);
                  FUN_00499e1d();
                  CombineRgn(pHStack_21c,
                             (HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x220) &
                                   (uint)pHStack_21c),
                             (HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x240) & uStack_23c),4
                            );
                  FUN_00499e74();
                }
              }
              else {
                tStack_258.x = 0;
                tStack_258.y = iVar4;
                LPtoDP(pHStack_1c4,&tStack_258,1);
                tStack_258.y = tStack_258.y + 1;
                DPtoLP(pHStack_1c4,&tStack_258,1);
                FUN_00499471();
                FUN_00499962();
                CDC::LineTo((CDC *)&local_1cc,iStack_24c,tStack_258.y);
                FUN_00499471();
                CDC::LineTo((CDC *)&local_1cc,iStack_24c,iVar6);
                CDC::LineTo((CDC *)&local_1cc,0,iVar6);
                CDC::LineTo((CDC *)&local_1cc,0,iVar4);
                wsprintfA(aCStack_40,&DAT_02fb0400);
                if ((&stack0x00000000 != (undefined1 *)0x1f8) && (pvStack_1f4 != (HGDIOBJ)0x0)) {
                  SelectObject(pHStack_1c8,pvStack_1f4);
                }
                FUN_00499605();
                FUN_00493244();
                local_4._0_1_ = 0x12;
                (**(code **)(local_1cc + 0x68))(uStack_130);
                local_4._0_1_ = 0x10;
                FUN_004931d6();
              }
            }
            iStack_264 = iStack_264 + 1;
            iVar3 = iStack_248;
            iVar4 = iVar6;
          } while (iStack_264 < iStack_224);
        }
      }
      else {
        if (iVar3 == 2) {
          if (((RStack_214.top < 5) && (iStack_230 == 0)) && (0 < iStack_260)) {
            iVar3 = iVar1 - iStack_250;
            iStack_25c = 0;
            uStack_1dc = 0;
            if (iVar3 < iStack_244) {
              do {
                iVar4 = iVar3;
                if (iVar3 < iVar1) {
                  iVar4 = (iVar3 - iVar1) + iStack_250;
                }
                uStack_1e0 = FUN_0042a180();
                FUN_00427a40();
                FUN_0042dd60(&local_1cc,iStack_25c,0,iStack_260 + -1,iVar4);
                iStack_25c = FUN_0042a340();
                iVar3 = iVar3 + 1;
              } while (iVar3 < iStack_244);
            }
          }
          if (((RStack_214.left < 5) && (iStack_250 == 0)) && (0 < iVar1)) {
            iVar3 = iStack_260 - iStack_230;
            iStack_25c = 0;
            uStack_1e0 = 0;
            if (iVar3 < iStack_224) {
              do {
                iVar4 = iVar3;
                if (iVar3 < iStack_260) {
                  iVar4 = (iVar3 - iStack_260) + iStack_230;
                }
                uStack_1dc = FUN_0042a0a0();
                FUN_00427a40();
                FUN_0042dd60(&local_1cc,0,iStack_25c,iVar4,iVar1 + -1);
                iStack_25c = FUN_0042a470();
                iVar3 = iVar3 + 1;
              } while (iVar3 < iStack_224);
            }
          }
        }
        iVar3 = 0;
      }
      iStack_200 = iVar3;
      FUN_00415c70();
      FUN_00415c70();
      iVar4 = iStack_260 - iStack_230;
      iStack_264 = iVar4;
      if (iVar4 < iStack_224) {
        do {
          iStack_264 = iVar4;
          if (RStack_214.bottom < iVar3) break;
          iVar3 = iVar4;
          if (iVar4 < iStack_260) {
            iVar3 = (iVar4 - iStack_260) + iStack_230;
          }
          iStack_22c = iVar3;
          FUN_0042a0a0();
          iStack_dc = FUN_0042a470();
          if (RStack_214.top <= iStack_dc) {
            iStack_1fc = iStack_24c;
            iStack_25c = iVar1 - iStack_250;
            if (iStack_25c < iStack_244) {
              do {
                iVar9 = iStack_200;
                iVar6 = iStack_22c;
                iVar4 = iStack_25c;
                if (iStack_25c < iVar1) {
                  iVar4 = (iStack_25c - iVar1) + iStack_250;
                }
                if (iVar3 < iStack_260) {
                  if (iVar4 < iVar1) {
                    pRVar7 = &RStack_214;
                  }
                  else {
                    pRVar7 = &RStack_170;
                  }
                }
                else {
                  pRVar7 = &RStack_160;
                  if (iVar1 <= iVar4) {
                    pRVar7 = &tStack_1f0;
                  }
                }
                RStack_f0.left = pRVar7->left;
                RStack_f0.top = pRVar7->top;
                RStack_f0.right = pRVar7->right;
                RStack_f0.bottom = pRVar7->bottom;
                iStack_204 = iStack_1fc;
                iStack_228 = iVar4;
                FUN_00427a00(auStack_9c);
                uVar8 = FUN_004297e0();
                if ((uVar8 & 0x3c0000) != 0) {
                  uVar8 = FUN_004297e0();
                  while ((uVar8 & 0x40000) != 0) {
                    iVar4 = iVar4 + -1;
                    FUN_00427a00(auStack_9c);
                    FUN_0042a180();
                    iStack_204 = FUN_0042a340();
                    uVar8 = FUN_004297e0();
                  }
                  uVar8 = FUN_004297e0();
                  while ((uVar8 & 0x80000) != 0) {
                    iVar6 = iVar6 + -1;
                    FUN_00427a00(auStack_9c);
                    FUN_0042a0a0();
                    iVar9 = FUN_0042a470();
                    uVar8 = FUN_004297e0();
                  }
                  iStack_148 = 0;
                  if (0 < iStack_120) {
                    iStack_218 = iStack_124 - (int)piStack_10c;
                    piVar2 = piStack_10c;
                    do {
                      if ((*(int *)(iStack_218 + (int)piVar2) == iVar6) && (*piVar2 == iVar4)) {
                        iVar6 = -1;
                        goto LAB_0042bc9f;
                      }
                      piVar2 = piVar2 + 1;
                      iStack_148 = iStack_148 + 1;
                    } while (iStack_148 < iStack_120);
                  }
                  if (iVar6 != -1) {
                    iStack_218 = iStack_120;
                    FUN_00415c70();
                    *(int *)(iStack_124 + iStack_218 * 4) = iVar6;
                    iStack_218 = iStack_108;
                    FUN_00415c70();
                    piStack_10c[iStack_218] = iVar4;
                  }
                }
LAB_0042bc9f:
                if (iStack_234 == 2) {
                  FUN_0049989e();
                }
                if (iVar6 == -1) {
LAB_0042bde3:
                  if (iStack_234 == 2) {
                    FUN_0042d420(&local_1cc,iStack_1fc,iStack_200,iStack_22c,iStack_228);
                  }
                }
                else {
                  if (iStack_234 != 1) {
                    FUN_0042d420(&local_1cc,iStack_204,iVar9,iVar6,iVar4);
                    goto LAB_0042bde3;
                  }
                  FUN_0042d420(&local_1cc,iStack_204,iVar9,iVar6,iVar4);
                  IntersectRect(&RStack_274,&RStack_274,&RStack_f0);
                  BVar5 = IsRectEmpty(&RStack_274);
                  if (BVar5 == 0) {
                    LPtoDP(pHStack_1c4,(LPPOINT)&RStack_274,2);
                    CreateRectRgnIndirect(&RStack_274);
                    FUN_00499e1d();
                    CombineRgn(pHStack_21c,
                               (HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x220) &
                                     (uint)pHStack_21c),
                               (HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x240) & uStack_23c)
                               ,4);
                    FUN_00499e74();
                  }
                }
                FUN_0042a180();
                iStack_1fc = FUN_0042a340();
                iStack_25c = iStack_25c + 1;
                iVar3 = iStack_22c;
                iVar4 = iStack_264;
              } while (iStack_25c < iStack_244);
            }
          }
          iVar4 = iVar4 + 1;
          iVar3 = iStack_dc;
          iStack_264 = iVar4;
          iStack_200 = iStack_dc;
        } while (iVar4 < iStack_224);
      }
      FUN_0049989e();
      iStack_234 = iStack_234 + 1;
    } while (iStack_234 < 3);
    if (*(int *)(param_1 + 0x44c) != 0) {
      FUN_0042c270();
    }
    FUN_0049989e();
    FUN_00499471();
    FUN_00499471();
    FUN_00499471();
    FUN_0042a5f0();
    local_4._0_1_ = 0xf;
    FUN_004931d6();
    local_4 = CONCAT31(local_4._1_3_,0xe);
    thunk_FUN_00429740();
    if (piStack_10c != (int *)0x0) {
      FUN_00492f40();
    }
    if (iStack_124 != 0) {
      FUN_00492f40();
    }
    ppuStack_c4 = &PTR_LAB_02f96400;
    local_4._0_1_ = 0x13;
    FUN_00499e74();
    ppuStack_178 = &PTR_LAB_02f96400;
    local_4._0_1_ = 0x14;
    FUN_00499e74();
    ppuStack_150 = &PTR_LAB_02f96400;
    local_4._0_1_ = 0x15;
    FUN_00499e74();
    ppuStack_114 = &PTR_LAB_02f96400;
    local_4._0_1_ = 0x16;
    FUN_00499e74();
    ppuStack_1f8 = &PTR_LAB_02f96400;
    local_4._0_1_ = 0x17;
    FUN_00499e74();
    ppuStack_240 = &PTR_LAB_02f96400;
    local_4._0_1_ = 0x18;
    FUN_00499e74();
    ppuStack_220 = &PTR_LAB_02f96400;
    local_4._0_1_ = 0x19;
    FUN_00499e74();
    ppuStack_12c = &PTR_LAB_02f96400;
    local_4._0_1_ = 0x1a;
    FUN_00499e74();
    ppuStack_138 = &PTR_LAB_02f96400;
    local_4._0_1_ = 0x1b;
    FUN_00499e74();
    ppuStack_140 = &PTR_LAB_02f96400;
    local_4 = CONCAT31(local_4._1_3_,0x1c);
    FUN_00499e74();
    FUN_0042a090();
  }
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC((CPaintDC *)&local_1cc);
  ExceptionList = pvStack_c;
  return;
}


// Function: FUN_00420640
// Entry:    00420640
// Size:     849 bytes
// Conv:     unknown
// Signature: undefined FUN_00420640(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00420640(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int cy;
  int cx;
  uint uVar1;
  LOGPALETTE *plpal;
  UINT UVar2;
  HPALETTE pHVar3;
  HGLOBAL hMem;
  HBITMAP pHVar4;
  HDC pHVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined **local_68;
  undefined4 local_64;
  undefined **local_60;
  uint local_5c;
  HDC local_54;
  uint local_44;
  HDC local_34;
  HDC local_30;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f300;
  local_c = ExceptionList;
  if ((param_1 != 0) && (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0)) {
    ExceptionList = &local_c;
    GetObjectA(*(HANDLE *)(param_1 + 4),0x18,local_24);
    cy = local_1c;
    if ((param_4 != 0) && (cy = param_4, param_4 < 0)) {
      param_4 = -param_4;
      if (param_4 < 10) {
        param_4 = 10;
      }
      cy = MulDiv(local_1c,param_4,100);
    }
    cx = local_20;
    if ((param_3 != 0) && (cx = param_3, param_3 < 0)) {
      param_3 = -param_3;
      if (param_3 < 10) {
        param_3 = 10;
      }
      cx = MulDiv(local_20,param_3,100);
    }
    if ((0 < cx) && (0 < cy)) {
      FUN_00499b75(0);
      local_64 = 0;
      local_68 = &PTR_LAB_02f95fc4;
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      uVar1 = GetDeviceCaps(local_30,0x26);
      if ((uVar1 & 0x100) != 0) {
        plpal = (LOGPALETTE *)FUN_00492f17(0x408);
        plpal->palVersion = 0x300;
        UVar2 = GetSystemPaletteEntries
                          ((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x38) & (uint)local_34),0
                           ,0xff,plpal->palPalEntry);
        plpal->palNumEntries = (WORD)UVar2;
        pHVar3 = CreatePalette(plpal);
        FUN_00499e1d(pHVar3);
        FUN_00492f40(plpal);
      }
      if ((cx == local_20) && (cy == local_1c)) {
        hMem = (HGLOBAL)FUN_004202f0(param_1,0,&local_68);
      }
      else {
        local_5c = 0;
        local_60 = &PTR_LAB_02f95fac;
        local_4._0_1_ = 2;
        pHVar4 = CreateCompatibleBitmap(local_34,cx,cy);
        FUN_00499e1d(pHVar4);
        FUN_00499226();
        local_4._0_1_ = 3;
        pHVar5 = CreateCompatibleDC((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x38) &
                                         (uint)local_34));
        FUN_004992dd(pHVar5);
        iVar6 = FUN_0049941e(local_44,*(undefined4 *)(param_1 + 4));
        FUN_00499226();
        local_4._0_1_ = 4;
        pHVar5 = CreateCompatibleDC((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x38) &
                                         (uint)local_34));
        FUN_004992dd(pHVar5);
        iVar7 = FUN_0049941e(local_54,-(uint)(&stack0x00000000 != (undefined1 *)0x60) & local_5c);
        uVar8 = FUN_0041d1e0();
        FUN_004995d7(uVar8);
        StretchBlt(local_54,0,0,cx,cy,
                   (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x48) & local_44),0,0,local_20,
                   local_1c,0xcc0020);
        uVar8 = 0;
        if (iVar6 != 0) {
          uVar8 = *(undefined4 *)(iVar6 + 4);
        }
        FUN_0049941e(local_44,uVar8);
        uVar8 = 0;
        if (iVar7 != 0) {
          uVar8 = *(undefined4 *)(iVar7 + 4);
        }
        FUN_0049941e(local_54,uVar8);
        hMem = (HGLOBAL)FUN_004202f0(&local_60,0,&local_68);
        local_4._0_1_ = 3;
        FUN_0049935b();
        local_4._0_1_ = 2;
        FUN_0049935b();
        local_60 = &PTR_LAB_02f95fb8;
        local_4._0_1_ = 5;
        FUN_00499e74();
        local_4._0_1_ = 1;
      }
      if (hMem != (HGLOBAL)0x0) {
        uVar8 = FUN_00420530(param_2,hMem);
        GlobalFree(hMem);
        local_68 = &PTR_LAB_02f95fb8;
        local_4 = CONCAT31(local_4._1_3_,7);
        FUN_00499e74();
        local_4 = 0xffffffff;
        FID_conflict__CClientDC();
        ExceptionList = local_c;
        return uVar8;
      }
      local_68 = &PTR_LAB_02f95fb8;
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_00499e74();
      local_4 = 0xffffffff;
      FID_conflict__CClientDC();
    }
  }
  ExceptionList = local_c;
  return 0;
}


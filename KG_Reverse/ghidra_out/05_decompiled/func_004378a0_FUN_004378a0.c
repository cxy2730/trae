// Function: FUN_004378a0
// Entry:    004378a0
// Size:     1414 bytes
// Conv:     unknown
// Signature: undefined FUN_004378a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_004378a0(int param_1)

{
  HDC pHVar1;
  int iVar2;
  HDC hdcSrc;
  HBITMAP h;
  undefined4 uVar3;
  undefined4 uVar4;
  HGDIOBJ ho;
  HDC hdc;
  HGDIOBJ pvVar5;
  BOOL BVar6;
  HDC unaff_EBP;
  code *pcVar7;
  HDC unaff_EDI;
  HDC local_50;
  HGDIOBJ local_44;
  HBITMAP local_40;
  HBITMAP local_3c;
  HGDIOBJ local_38;
  HDC local_34;
  int local_28;
  HDC local_24 [3];
  HDC local_18;
  undefined **local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0af8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pHVar1 = GetDC(*(HWND *)(param_1 + 0x1c));
  local_24[0] = pHVar1;
  iVar2 = FUN_0041d1e0();
  SetStretchBltMode(pHVar1,iVar2);
  hdcSrc = CreateCompatibleDC(pHVar1);
  local_50 = CreateCompatibleDC(pHVar1);
  *(HDC *)(param_1 + 0xa4) = pHVar1;
  iVar2 = *(int *)(param_1 + 0xc4);
  while (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xc4);
  }
  *(undefined4 *)(param_1 + 0xc4) = 1;
  pcVar7 = SelectObject_exref;
  if (*(int *)(param_1 + 0xc0) == 0) {
    h = CreateCompatibleBitmap(pHVar1,*(int *)(param_1 + 0xd4),*(int *)(param_1 + 0xd8));
    pcVar7 = SelectObject_exref;
    *(HBITMAP *)(param_1 + 0xc0) = h;
    local_44 = SelectObject(local_50,h);
    FUN_00499eda(*(undefined4 *)(param_1 + 0xdc));
    local_34 = SelectObject(local_50,(HGDIOBJ)(-(uint)(&stack0x00000000 != (undefined1 *)0x14) &
                                              local_10));
    PatBlt(local_50,0,0,*(int *)(param_1 + 0xd4),*(int *)(param_1 + 0xd8),0xf00021);
    SelectObject(local_50,local_34);
    SelectObject(local_50,local_44);
    local_14 = &PTR_LAB_02f96e54;
    local_4 = 0;
    FUN_00499e74();
    local_4 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x84) = 4;
  if (*(int *)(param_1 + 0xbc) != 1) {
    do {
      local_34 = (HDC)GetTickCount();
      iVar2 = *(int *)(param_1 + 0xc4);
      while (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0xc4);
      }
      *(undefined4 *)(param_1 + 0xc4) = 1;
      local_18 = local_34;
      uVar3 = (*pcVar7)(local_50,*(undefined4 *)(param_1 + 0xc0));
      if ((*(int *)(param_1 + 0x84) == 8) || (*(int *)(param_1 + 0x84) == 0xc)) {
        uVar4 = (*pcVar7)(hdcSrc,local_50);
        BitBlt(unaff_EDI,*(int *)(param_1 + 0x60),*(int *)(param_1 + 0x5c),*(int *)(param_1 + 0x54),
               *(int *)(param_1 + 0x58),hdcSrc,0,0,0xcc0020);
        (*pcVar7)(hdcSrc,uVar4);
        DeleteObject(local_50);
        local_50 = (HDC)0x0;
      }
      *(undefined4 *)(param_1 + 0x84) = 0;
      ho = (HGDIOBJ)FUN_00438080();
      if (ho != (HGDIOBJ)0x0) {
        if ((*(int *)(param_1 + 0x84) == 8) || (*(int *)(param_1 + 0x84) == 0xc)) {
          local_50 = (HDC)CreateCompatibleBitmap
                                    (pHVar1,*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58));
          uVar4 = (*pcVar7)(hdcSrc,local_50);
          BitBlt(hdcSrc,0,0,*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),unaff_EDI,
                 *(int *)(param_1 + 0x60),*(int *)(param_1 + 0x5c),0xcc0020);
          (*pcVar7)(hdcSrc,uVar4);
        }
        uVar4 = (*pcVar7)(hdcSrc,ho);
        if (*(int *)(param_1 + 0x88) == 0) {
          BitBlt(unaff_EDI,*(int *)(param_1 + 0x60),*(int *)(param_1 + 0x5c),
                 *(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),hdcSrc,0,0,0xcc0020);
        }
        else {
          hdc = CreateCompatibleDC(pHVar1);
          pHVar1 = CreateCompatibleDC(pHVar1);
          local_40 = CreateBitmap(*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),1,1,(void *)0x0)
          ;
          local_3c = CreateBitmap(*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),1,1,(void *)0x0)
          ;
          local_40 = SelectObject(hdc,local_40);
          local_38 = SelectObject(pHVar1,local_3c);
          local_3c = (HBITMAP)SetBkColor(hdcSrc,*(COLORREF *)(param_1 + 0xa0));
          BitBlt(pHVar1,0,0,*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),hdcSrc,0,0,0xcc0020);
          SetBkColor(hdcSrc,(COLORREF)local_3c);
          BitBlt(hdc,0,0,*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),pHVar1,0,0,0x330008);
          BitBlt(unaff_EDI,*(int *)(param_1 + 0x60),*(int *)(param_1 + 0x5c),
                 *(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),pHVar1,0,0,0x8800c6);
          BitBlt(hdcSrc,0,0,*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),hdc,0,0,0x8800c6);
          BitBlt(unaff_EDI,*(int *)(param_1 + 0x60),*(int *)(param_1 + 0x5c),
                 *(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),hdcSrc,0,0,0xee0086);
          pvVar5 = SelectObject(hdc,local_40);
          DeleteObject(pvVar5);
          pvVar5 = SelectObject(pHVar1,local_38);
          DeleteObject(pvVar5);
          DeleteDC(hdc);
          DeleteDC(pHVar1);
          pcVar7 = SelectObject_exref;
          pHVar1 = local_34;
        }
        (*pcVar7)(hdcSrc,uVar4);
        DeleteObject(ho);
      }
      BVar6 = IsWindow(*(HWND *)(param_1 + 0x1c));
      if (BVar6 != 0) {
        FUN_004373e0(&local_40,&local_44,local_24,&local_28);
        if (*(int *)(param_1 + 0xd0) == 0) {
          BitBlt(pHVar1,(int)local_40,(int)local_44,*(int *)(param_1 + 0xd4),
                 *(int *)(param_1 + 0xd8),unaff_EBP,0,0,0xcc0020);
        }
        else {
          StretchBlt(pHVar1,(int)local_40,(int)local_44,(int)local_24[0],local_28,unaff_EBP,0,0,
                     *(int *)(param_1 + 0xd4),*(int *)(param_1 + 0xd8),0xcc0020);
        }
      }
      (*pcVar7)(unaff_EBP,uVar3);
      *(undefined4 *)(param_1 + 0xc4) = 0;
      if (*(int *)(param_1 + 0x90) == 0) {
        local_44 = *(HGDIOBJ *)(param_1 + 0x9c);
      }
      else {
        local_44 = (HGDIOBJ)(*(int *)(param_1 + 0x90) * 10);
      }
      if (*(int *)(param_1 + 0xbc) == 1) break;
      do {
        if (local_44 <= (HGDIOBJ)((int)local_34 - (int)local_18)) break;
        Sleep(10);
        local_34 = (HDC)GetTickCount();
      } while (*(int *)(param_1 + 0xbc) != 1);
    } while (*(int *)(param_1 + 0xbc) != 1);
    if (ho != (HGDIOBJ)0x0) {
      DeleteObject(ho);
    }
  }
  DeleteDC(hdcSrc);
  DeleteDC(local_50);
  ReleaseDC(*(HWND *)(param_1 + 0x1c),pHVar1);
  *(undefined4 *)(param_1 + 0xbc) = 2;
  ExceptionList = local_c;
  return 1;
}


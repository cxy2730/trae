// Function: FUN_004202f0
// Entry:    004202f0
// Size:     575 bytes
// Conv:     unknown
// Signature: undefined FUN_004202f0(void)
// Decompiled by Ghidra 12.1.2


HGLOBAL FUN_004202f0(int param_1,int param_2,int param_3)

{
  HPALETTE pHVar1;
  HGLOBAL hMem;
  LPBITMAPINFO ptVar2;
  uint uVar3;
  HGLOBAL hMem_00;
  int iVar4;
  DWORD *pDVar5;
  LPBITMAPINFO ptVar6;
  HDC local_5c;
  undefined1 local_4c [4];
  int local_48;
  UINT local_44;
  DWORD local_34 [2];
  UINT local_2c;
  undefined2 local_28;
  ushort local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f288;
  local_c = ExceptionList;
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) && (param_2 != 3)) {
    if ((param_3 == 0) ||
       (pHVar1 = *(HPALETTE *)(param_3 + 4), ExceptionList = &local_c, pHVar1 == (HPALETTE)0x0)) {
      ExceptionList = &local_c;
      pHVar1 = GetStockObject(0xf);
    }
    GetObjectA(*(HANDLE *)(param_1 + 4),0x18,local_4c);
    local_34[0] = 0x28;
    local_34[1] = local_48;
    local_2c = local_44;
    local_28 = 1;
    local_26 = 0x18;
    uStack_24 = (undefined2)param_2;
    uStack_22 = (undefined2)((uint)param_2 >> 0x10);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_00499b75(0);
    pHVar1 = SelectPalette(local_5c,pHVar1,0);
    RealizePalette(local_5c);
    hMem = GlobalAlloc(2,0x28);
    if (hMem == (HGLOBAL)0x0) {
      SelectPalette(local_5c,pHVar1,0);
    }
    else {
      ptVar2 = GlobalLock(hMem);
      pDVar5 = local_34;
      ptVar6 = ptVar2;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        (ptVar6->bmiHeader).biSize = *pDVar5;
        pDVar5 = pDVar5 + 1;
        ptVar6 = (LPBITMAPINFO)&(ptVar6->bmiHeader).biWidth;
      }
      GetDIBits(local_5c,*(HBITMAP *)(param_1 + 4),0,local_2c,(LPVOID)0x0,ptVar2,0);
      pDVar5 = local_34;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pDVar5 = (ptVar2->bmiHeader).biSize;
        ptVar2 = (LPBITMAPINFO)&(ptVar2->bmiHeader).biWidth;
        pDVar5 = pDVar5 + 1;
      }
      uVar3 = local_20;
      if ((local_20 == 0) &&
         (uVar3 = local_26 * local_34[1] + 0x1f,
         uVar3 = ((int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3) * local_2c,
         param_2 != 0)) {
        uVar3 = uVar3 * 3 >> 1;
      }
      GlobalUnlock(hMem);
      hMem_00 = GlobalReAlloc(hMem,uVar3 + 0x28,2);
      if (hMem_00 == (HGLOBAL)0x0) {
        GlobalFree(hMem);
        SelectPalette(local_5c,pHVar1,0);
      }
      else {
        ptVar2 = GlobalLock(hMem_00);
        iVar4 = GetDIBits(local_5c,*(HBITMAP *)(param_1 + 4),0,local_2c,
                          (LPVOID)((int)&(((tagBITMAPINFO *)(ptVar2->bmiColors + -10))->bmiHeader).
                                         biSize + local_34[0]),ptVar2,0);
        SelectPalette(local_5c,pHVar1,0);
        GlobalUnlock(hMem_00);
        if (iVar4 != 0) {
          local_4 = 0xffffffff;
          FID_conflict__CClientDC();
          ExceptionList = local_c;
          return hMem_00;
        }
        GlobalFree(hMem_00);
      }
    }
    local_4 = 0xffffffff;
    FID_conflict__CClientDC();
  }
  ExceptionList = local_c;
  return (HGLOBAL)0x0;
}


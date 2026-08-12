// Function: FUN_00418030
// Entry:    00418030
// Size:     729 bytes
// Conv:     unknown
// Signature: undefined FUN_00418030(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00418030(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  HRGN pHVar4;
  undefined4 uVar5;
  int y2;
  ushort *puVar6;
  int x2;
  undefined1 local_38 [8];
  tagRECT local_30;
  CDC local_20 [4];
  HDC local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ec98;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xc0) == 0) {
    ExceptionList = &local_c;
    SetWindowRgn(*(HWND *)(param_1 + 0x1c),(HRGN)0x0,1);
    FUN_00499e74();
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  GetWindowRect(*(HWND *)(param_1 + 0x1c),&local_30);
  x2 = local_30.right - local_30.left;
  y2 = local_30.bottom - local_30.top;
  iVar2 = *(int *)(param_1 + 0xc0);
  local_4 = 0;
  if (iVar2 == 1) {
    pHVar4 = CreateEllipticRgn(0,0,x2,y2);
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        local_4._0_1_ = 1;
        local_4._1_3_ = 0;
        pHVar4 = CreateEllipticRgn(0,0,x2,y2);
        FUN_00499e1d(pHVar4);
        iVar3 = (int)(y2 + (y2 >> 0x1f & 3U)) >> 2;
        iVar2 = (int)(x2 + (x2 >> 0x1f & 3U)) >> 2;
        pHVar4 = CreateEllipticRgn(iVar2,iVar3,x2 - iVar2,y2 - iVar3);
        FUN_00499e1d(pHVar4);
        CombineRgn((HRGN)0x0,(HRGN)0x0,(HRGN)0x0,4);
        local_4._0_1_ = 2;
        FUN_00499e74();
        local_4 = (uint)local_4._1_3_ << 8;
      }
      else {
        iVar2 = iVar2 + -4;
        puVar6 = &DAT_02fab234;
        if (0 < iVar2) {
          do {
            uVar1 = *puVar6;
            while (puVar6 = puVar6 + 1, uVar1 != 0xffff) {
              uVar1 = *puVar6;
            }
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00499b75(param_1);
        local_4 = CONCAT31(local_4._1_3_,3);
        BeginPath(local_1c);
        iVar2 = MulDiv((uint)puVar6[1],y2,0x7fff);
        iVar3 = MulDiv((uint)*puVar6,x2,0x7fff);
        FUN_00499962(local_38,iVar3,iVar2);
        puVar6 = puVar6 + 2;
        uVar1 = *puVar6;
        while (uVar1 != 0xffff) {
          iVar2 = MulDiv((uint)puVar6[1],y2,0x7fff);
          iVar3 = MulDiv((uint)*puVar6,x2,0x7fff);
          CDC::LineTo(local_20,iVar3,iVar2);
          puVar6 = puVar6 + 2;
          uVar1 = *puVar6;
        }
        EndPath(local_1c);
        pHVar4 = PathToRegion(local_1c);
        FUN_00499e1d(pHVar4);
        local_4 = local_4 & 0xffffff00;
        FID_conflict__CClientDC();
      }
      goto LAB_004182a4;
    }
    iVar2 = y2 / 5;
    if (x2 / 5 < y2 / 5) {
      iVar2 = x2 / 5;
    }
    pHVar4 = CreateRoundRectRgn(0,0,x2,y2,iVar2,iVar2);
  }
  FUN_00499e1d(pHVar4);
LAB_004182a4:
  SetWindowRgn(*(HWND *)(param_1 + 0x1c),(HRGN)0x0,1);
  FUN_00499e74();
  uVar5 = Detach();
  FUN_00499e1d(uVar5);
  local_4 = 4;
  FUN_00499e74();
  ExceptionList = local_c;
  return;
}


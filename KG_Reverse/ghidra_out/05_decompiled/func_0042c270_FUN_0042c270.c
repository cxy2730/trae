// Function: FUN_0042c270
// Entry:    0042c270
// Size:     570 bytes
// Conv:     unknown
// Signature: undefined FUN_0042c270(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0042c270(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  RECT *lprcSrc;
  BOOL BVar4;
  int *piVar5;
  HRGN pHVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined **local_68;
  undefined4 local_64;
  undefined **local_60 [2];
  undefined1 local_58 [8];
  tagRECT local_50;
  tagRECT local_40;
  undefined1 local_30 [16];
  undefined1 local_20 [4];
  HDC local_1c;
  HDC local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ff78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0042a870();
  if (iVar1 != 0) {
    uVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
    uVar8 = (int)uVar2 >> 0x1f;
    uVar3 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48);
    uVar9 = (int)uVar3 >> 0x1f;
    iVar1 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0x4c)) {
      iVar1 = *(int *)(param_1 + 0x54);
    }
    iVar10 = *(int *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x50) <= *(int *)(param_1 + 0x48)) {
      iVar10 = *(int *)(param_1 + 0x50);
    }
    lprcSrc = (RECT *)FUN_0042d0b0(local_30,iVar10,iVar1,((uVar3 ^ uVar9) - uVar9) + 1,
                                   ((uVar2 ^ uVar8) - uVar8) + 1);
    CopyRect(&local_50,lprcSrc);
    BVar4 = IsRectEmpty(&local_50);
    if (BVar4 == 0) {
      FUN_00499b75(param_1);
      local_4 = 0;
      FUN_00442c00(local_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
      GetClientRect(*(HWND *)(param_1 + 0x1c),&local_40);
      DPtoLP(local_18,(LPPOINT)&local_40,2);
      piVar5 = (int *)FUN_0042c1c0(local_58);
      iVar1 = *piVar5;
      iVar10 = piVar5[1];
      local_40.left = local_40.left + iVar1;
      local_40.top = local_40.top + iVar10;
      LPtoDP(local_18,(LPPOINT)&local_40,2);
      local_64 = 0;
      local_68 = &PTR_LAB_02f96418;
      local_4._0_1_ = 1;
      pHVar6 = CreateRectRgnIndirect(&local_40);
      FUN_00499e1d(pHVar6);
      FUN_004994b7(&local_68);
      OffsetRect(&local_50,iVar1,iVar10);
      LPtoDP(local_18,(LPPOINT)&local_50,2);
      local_50.left = local_50.left + 1;
      local_50.top = local_50.top + 1;
      FUN_00499634(1);
      FUN_00499e8a(0,2,0xffffff);
      local_4._0_1_ = 2;
      uVar7 = FUN_00499471(local_60);
      FUN_00499435(5);
      FUN_004995a9(7);
      Rectangle(local_1c,local_50.left,local_50.top,local_50.right,local_50.bottom);
      FUN_00499471(uVar7);
      FUN_0049989e(0);
      local_60[0] = &PTR_LAB_02f96400;
      local_4._0_1_ = 3;
      FUN_00499e74();
      local_68 = &PTR_LAB_02f96400;
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_00499e74();
      local_4 = 0xffffffff;
      FID_conflict__CClientDC();
    }
  }
  ExceptionList = local_c;
  return;
}


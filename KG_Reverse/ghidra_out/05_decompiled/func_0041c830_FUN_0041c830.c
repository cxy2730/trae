// Function: FUN_0041c830
// Entry:    0041c830
// Size:     643 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c830(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041c830(int param_1,uint param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  HBITMAP pHVar5;
  HDC pHVar6;
  uint uVar7;
  uint uVar8;
  HANDLE local_b4;
  undefined **local_b0 [3];
  uint local_a4;
  RECT local_98;
  tagRECT local_88;
  CPaintDC local_78 [4];
  HDC local_74;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049eec5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_0049988e(&local_98);
  BVar1 = IsRectEmpty(&local_98);
  if (BVar1 != 1) {
    DVar2 = GetSysColor(0xf);
    FUN_00499eda(DVar2);
    local_4._0_1_ = 1;
    uVar3 = FUN_00499471(local_b0);
    PatBlt(local_74,local_98.left,local_98.top,local_98.right - local_98.left,
           local_98.bottom - local_98.top,0xf00021);
    FUN_00499471(uVar3);
    GetClientRect(*(HWND *)(param_1 + 0x1c),&local_88);
    FUN_0041cae0();
    local_4._0_1_ = 2;
    iVar4 = FUN_0049c724();
    pHVar5 = LoadBitmapA(*(HINSTANCE *)(iVar4 + 0xc),(LPCSTR)(param_2 & 0xffff));
    iVar4 = FUN_00499e1d(pHVar5);
    if (iVar4 == 0) {
      local_4._0_1_ = 3;
      FUN_00499e74();
      local_4 = CONCAT31(local_4._1_3_,4);
    }
    else {
      GetObjectA(local_b4,0x18,local_24);
      FUN_00499226();
      local_4._0_1_ = 5;
      pHVar6 = CreateCompatibleDC((HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x78) &
                                       (uint)local_74));
      FUN_004992dd(pHVar6);
      iVar4 = FUN_0049941e(local_a4,-(uint)(&stack0x00000000 != (undefined1 *)0xb8) & (uint)local_b4
                          );
      uVar7 = ((local_88.bottom - local_88.top) - local_1c) / 2;
      uVar8 = ((local_88.right - local_20) - local_88.left) / 2;
      BitBlt(local_74,((int)uVar8 < 0) - 1 & uVar8,((int)uVar7 < 0) - 1 & uVar7,local_20,local_1c,
             (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0xa8) & local_a4),0,0,0xcc0020);
      uVar3 = 0;
      if (iVar4 != 0) {
        uVar3 = *(undefined4 *)(iVar4 + 4);
      }
      FUN_0049941e(local_a4,uVar3);
      local_4._0_1_ = 2;
      FUN_0049935b();
      local_4._0_1_ = 6;
      FUN_00499e74();
      local_4 = CONCAT31(local_4._1_3_,7);
    }
    local_b0[0] = &PTR_LAB_02f95a04;
    FUN_00499e74();
  }
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_78);
  ExceptionList = local_c;
  return;
}


// Function: FUN_00409380
// Entry:    00409380
// Size:     1228 bytes
// Conv:     unknown
// Signature: undefined FUN_00409380(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00409380(int param_1)

{
  int iVar1;
  BOOL BVar2;
  HGDIOBJ pvVar3;
  HPEN pHVar4;
  undefined4 uVar5;
  undefined ***pppuVar6;
  HBRUSH pHVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  COLORREF color;
  tagRECT local_bc;
  int local_ac;
  undefined **local_a8;
  undefined4 local_a4;
  undefined **local_a0;
  undefined4 local_9c;
  undefined **local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined **local_8c [2];
  undefined4 local_84;
  RECT local_80;
  CPaintDC local_70 [4];
  HDC local_6c;
  HDC local_68;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049dfc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_0049988e(&local_80);
  BVar2 = IsRectEmpty(&local_80);
  if (BVar2 == 1) {
    local_4 = 0xffffffff;
    CPaintDC::~CPaintDC(local_70);
    ExceptionList = local_c;
    return;
  }
  pvVar3 = GetCurrentObject(local_68,2);
  local_84 = FUN_00499e08(pvVar3);
  pvVar3 = GetCurrentObject(local_68,1);
  local_90 = FUN_00499e08(pvVar3);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    iVar8 = 5;
  }
  else if (iVar1 == 1) {
    iVar8 = 6;
  }
  else if (iVar1 == 2) {
    iVar8 = 1;
  }
  else if (iVar1 == 3) {
    iVar8 = 2;
  }
  else {
    iVar8 = (iVar1 != 4) + 3;
  }
  if ((*(int *)(param_1 + 0x48) == 0) && (iVar1 == 1)) {
    uVar9 = *(uint *)(param_1 + 0x50);
  }
  else {
    uVar9 = 1;
  }
  local_a4 = 0;
  local_a8 = &PTR_LAB_02f954a4;
  local_9c = 0;
  local_a0 = &PTR_LAB_02f954a4;
  local_4 = CONCAT31(local_4._1_3_,2);
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_bc);
  if (*(int *)(param_1 + 0x48) == 0) {
    pHVar4 = CreatePen(iVar8,-(uint)(uVar9 != 1) & uVar9,*(COLORREF *)(param_1 + 0x54));
    FUN_00499e1d(pHVar4);
  }
  else {
    if (*(int *)(param_1 + 0x48) == 1) {
      pHVar4 = CreatePen(iVar8,0,0xffffff);
      FUN_00499e1d(pHVar4);
      color = 0;
    }
    else {
      pHVar4 = CreatePen(iVar8,0,0);
      FUN_00499e1d(pHVar4);
      color = 0xffffff;
    }
    pHVar4 = CreatePen(iVar8,0,color);
    FUN_00499e1d(pHVar4);
    if (*(int *)(param_1 + 0x44) != 6) {
      if (*(int *)(param_1 + 0x44) == 7) {
        local_bc.left = local_bc.left + 1;
        goto LAB_00409534;
      }
      local_bc.left = local_bc.left + 1;
    }
    local_bc.top = local_bc.top + 1;
  }
LAB_00409534:
  uVar5 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x40));
  FUN_00499eda(uVar5);
  local_4._0_1_ = 3;
  FUN_00499471(local_8c);
  PatBlt(local_6c,local_80.left,local_80.top,local_80.right - local_80.left,
         local_80.bottom - local_80.top,0xf00021);
  iVar1 = *(int *)(param_1 + 0x44);
  iVar8 = local_bc.right - local_bc.left;
  iVar10 = local_bc.bottom - local_bc.top;
  if (((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 5)) {
    if (iVar10 < iVar8) {
      local_bc.left = local_bc.left + (iVar8 - iVar10) / 2;
      local_bc.right = iVar10 + local_bc.left;
    }
    else if (iVar8 < iVar10) {
      local_bc.top = local_bc.top + (iVar10 - iVar8) / 2;
      local_bc.bottom = iVar8 + local_bc.top;
    }
  }
  local_98 = &PTR_LAB_02f95464;
  local_94 = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0049954d(1);
  local_ac = 0;
  do {
    if (local_ac == 0) {
      pppuVar6 = &local_a8;
    }
    else {
      if (*(int *)(param_1 + 0x48) == 0) break;
      pppuVar6 = &local_a0;
    }
    FUN_00499471(pppuVar6);
    if ((local_ac == 1) || (*(COLORREF *)(param_1 + 0x58) == 0xff000000)) {
      FUN_00499435(5);
    }
    else {
      pHVar7 = CreateSolidBrush(*(COLORREF *)(param_1 + 0x58));
      FUN_00499e1d(pHVar7);
      FUN_00499471(&local_98);
    }
    switch(*(undefined4 *)(param_1 + 0x44)) {
    case 0:
    case 1:
      Rectangle(local_6c,local_bc.left,local_bc.top,local_bc.right,local_bc.bottom);
      OffsetRect(&local_bc,-1,-1);
      break;
    case 2:
    case 3:
      Ellipse(local_6c,local_bc.left,local_bc.top,local_bc.right,local_bc.bottom);
      OffsetRect(&local_bc,-1,-1);
      break;
    case 4:
    case 5:
      RoundRect(local_6c,local_bc.left,local_bc.top,local_bc.right,local_bc.bottom,iVar8 / 5,
                iVar10 / 5);
      OffsetRect(&local_bc,-1,-1);
      break;
    case 6:
      FUN_00499962(local_14,local_bc.left,local_bc.top);
      CDC::LineTo((CDC *)local_70,local_bc.right,local_bc.top);
      local_bc.top = local_bc.top + -1;
      break;
    case 7:
      FUN_00499962(local_1c,local_bc.left,local_bc.top);
      CDC::LineTo((CDC *)local_70,local_bc.left,local_bc.bottom);
      local_bc.left = local_bc.left + -1;
    }
    local_ac = local_ac + 1;
  } while (local_ac < 2);
  FUN_00499471(local_90);
  FUN_00499471(local_84);
  local_98 = &PTR_LAB_02f9547c;
  local_4._0_1_ = 5;
  FUN_00499e74();
  local_8c[0] = &PTR_LAB_02f9547c;
  local_4._0_1_ = 6;
  FUN_00499e74();
  local_a0 = &PTR_LAB_02f9547c;
  local_4._0_1_ = 7;
  FUN_00499e74();
  local_a8 = &PTR_LAB_02f9547c;
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00499e74();
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_70);
  ExceptionList = local_c;
  return;
}


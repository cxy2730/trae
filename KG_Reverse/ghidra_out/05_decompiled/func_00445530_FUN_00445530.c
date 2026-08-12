// Function: FUN_00445530
// Entry:    00445530
// Size:     1325 bytes
// Conv:     unknown
// Signature: undefined FUN_00445530(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00445530(int param_1,CDC *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  HPEN pHVar8;
  undefined4 uVar9;
  HDC pHVar10;
  UINT UVar11;
  tagRECT *local_58;
  undefined **local_54;
  undefined4 local_50;
  undefined **local_4c [2];
  undefined **local_44;
  undefined1 auStack_40 [8];
  int local_38;
  LONG local_34;
  LONG local_30;
  tagRECT local_2c;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a1060;
  local_c = ExceptionList;
  if ((*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) && (param_3 == -2)) {
    piVar1 = (int *)(param_1 + 0x60);
    auStack_40._4_4_ = *piVar1;
    local_34 = *(LONG *)(param_1 + 0x68);
    local_30 = *(undefined4 *)(param_1 + 0x6c);
    local_38 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x4c) * 2;
    ExceptionList = &local_c;
    DVar4 = GetSysColor(0xf);
    CDC::FillSolidRect(param_2,(tagRECT *)(auStack_40 + 4),DVar4);
    iVar2 = *(int *)(param_1 + 0x68);
    iVar6 = *piVar1;
    iVar3 = *(int *)(param_1 + 0x4c);
    DVar4 = GetSysColor(0x10);
    FUN_0049be52(*piVar1 + iVar3 * 2,*(undefined4 *)(param_1 + 100),(iVar2 - iVar6) + iVar3 * -4,1,
                 DVar4);
    iVar2 = *(int *)(param_1 + 0x68);
    iVar6 = *piVar1;
    iVar3 = *(int *)(param_1 + 0x4c);
    DVar4 = GetSysColor(0x14);
    FUN_0049be52(*piVar1 + iVar3 * 2,*(int *)(param_1 + 100) + 1,(iVar2 - iVar6) + iVar3 * -4,1,
                 DVar4);
    InflateRect((LPRECT)(auStack_40 + 4),-1,-1);
    if ((*(int *)(param_1 + 0x54) == -2) && (*(int *)(param_1 + 0x50) != -2)) {
      DVar4 = GetSysColor(0x16);
    }
    else {
      DVar4 = GetSysColor(0xf);
    }
    CDC::FillSolidRect(param_2,(tagRECT *)(auStack_40 + 4),DVar4);
    if (*(int *)(param_1 + 0x50) == -2) {
      pHVar10 = *(HDC *)(param_2 + 4);
      UVar11 = 4;
    }
    else {
      if (*(int *)(param_1 + 0x54) != -2) goto LAB_0044568a;
      pHVar10 = *(HDC *)(param_2 + 4);
      UVar11 = 2;
    }
    DrawEdge(pHVar10,(LPRECT)(auStack_40 + 4),UVar11,0xf);
LAB_0044568a:
    uVar5 = (**(code **)(*(int *)param_2 + 0x28))(param_1 + 0x90);
    FUN_0049954d(1);
    (**(code **)(*(int *)param_2 + 0x68))
              (*(int *)(param_1 + 0x5c),*(undefined4 *)(*(int *)(param_1 + 0x5c) + -8),auStack_40,
               0x25);
    (**(code **)(*(int *)param_2 + 0x28))(uVar5);
    ExceptionList = local_c;
    return;
  }
  if ((*(int *)(*(int *)(param_1 + 0x58) + -8) == 0) || (param_3 != -3)) {
    local_58 = &local_2c;
    ExceptionList = &local_c;
    iVar6 = FUN_00444f40(param_3,&local_58);
    if (iVar6 == 0) {
      ExceptionList = local_c;
      return;
    }
    param_3 = 0;
    uVar7 = GetDeviceCaps(*(HDC *)(param_2 + 8),0x26);
    if ((uVar7 & 0x100) != 0) {
      param_3 = FUN_004994fc(param_1 + 0x98,0);
      RealizePalette(*(HDC *)(param_2 + 4));
    }
    if ((*(int *)(param_1 + 0x54) == iVar2) && (*(int *)(param_1 + 0x50) != iVar2)) {
      DVar4 = GetSysColor(0x14);
    }
    else {
      DVar4 = GetSysColor(0xf);
    }
    CDC::FillSolidRect(param_2,&local_2c,DVar4);
    if (*(int *)(param_1 + 0x50) == iVar2) {
      pHVar10 = *(HDC *)(param_2 + 4);
      UVar11 = 4;
LAB_00445910:
      DrawEdge(pHVar10,&local_2c,UVar11,0xf);
    }
    else if (*(int *)(param_1 + 0x54) == iVar2) {
      pHVar10 = *(HDC *)(param_2 + 4);
      UVar11 = 2;
      goto LAB_00445910;
    }
    uVar7 = (&DAT_02fb21a4)[iVar2 * 2];
    FUN_00499eda(((uint)CONCAT11(2,(char)(uVar7 >> 0x10)) << 8 | uVar7 >> 8 & 0xff) << 8 |
                 uVar7 & 0xff);
    local_50 = 0;
    local_54 = &PTR_LAB_02f980dc;
    local_4 = 3;
    DVar4 = GetSysColor(0x10);
    pHVar8 = CreatePen(0,1,DVar4);
    FUN_00499e1d(pHVar8);
    uVar5 = FUN_00499471(local_4c);
    uVar9 = FUN_00499471(&local_54);
    iVar2 = *(int *)(param_1 + 0x4c) + 1;
    InflateRect(&local_2c,-iVar2,-iVar2);
    Rectangle(*(HDC *)(param_2 + 4),local_2c.left,local_2c.top,local_2c.right,local_2c.bottom);
    FUN_00499471(uVar5);
    FUN_00499471(uVar9);
    FUN_00499e74();
    FUN_00499e74();
    if ((param_3 != 0) && (uVar7 = GetDeviceCaps(*(HDC *)(param_2 + 8),0x26), (uVar7 & 0x100) != 0))
    {
      FUN_004994fc(param_3,0);
    }
    local_54 = &PTR_LAB_02f980d0;
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_00499e74();
    local_4c[0] = &PTR_LAB_02f980d0;
    local_4 = 5;
    goto LAB_00445a43;
  }
  ExceptionList = &local_c;
  DVar4 = GetSysColor(0xf);
  CDC::FillSolidRect(param_2,(tagRECT *)(param_1 + 0x70),DVar4);
  local_38 = *(int *)(param_1 + 0x74);
  auStack_40._4_4_ = ((tagRECT *)(param_1 + 0x70))->left;
  local_34 = *(int *)(param_1 + 0x78);
  local_30 = *(LONG *)(param_1 + 0x7c);
  InflateRect((LPRECT)(auStack_40 + 4),-1,-1);
  if ((*(int *)(param_1 + 0x54) == -3) && (*(int *)(param_1 + 0x50) != -3)) {
    DVar4 = GetSysColor(0x16);
  }
  else {
    DVar4 = GetSysColor(0xf);
  }
  CDC::FillSolidRect(param_2,(tagRECT *)(auStack_40 + 4),DVar4);
  local_1c.top = local_38;
  local_1c.right = local_34;
  local_1c.left = auStack_40._4_4_;
  local_1c.bottom = local_30;
  InflateRect(&local_1c,*(int *)(param_1 + 0x4c) * -2,*(int *)(param_1 + 0x4c) * -2);
  DVar4 = GetSysColor(0x10);
  FUN_00499e8a(0,1,DVar4);
  local_4 = 0;
  uVar5 = FUN_00499471(&local_44);
  (**(code **)(*(int *)param_2 + 0x24))(5);
  Rectangle(*(HDC *)(param_2 + 4),local_2c.bottom,local_1c.left,local_1c.top,local_1c.right);
  FUN_00499471(uVar5);
  if (*(int *)(param_1 + 0x50) == -3) {
    pHVar10 = *(HDC *)(param_2 + 4);
    UVar11 = 4;
LAB_00445809:
    DrawEdge(pHVar10,(LPRECT)auStack_40,UVar11,0xf);
  }
  else if (*(int *)(param_1 + 0x54) == -3) {
    pHVar10 = *(HDC *)(param_2 + 4);
    UVar11 = 2;
    goto LAB_00445809;
  }
  uVar5 = (**(code **)(*(int *)param_2 + 0x28))(param_1 + 0x90);
  FUN_0049954d(1);
  (**(code **)(*(int *)param_2 + 0x68))
            (*(int *)(param_1 + 0x58),*(undefined4 *)(*(int *)(param_1 + 0x58) + -8),&local_44,0x25)
  ;
  (**(code **)(*(int *)param_2 + 0x28))(uVar5);
  local_44 = &PTR_LAB_02f980d0;
  local_4 = 1;
LAB_00445a43:
  FUN_00499e74();
  ExceptionList = local_c;
  return;
}


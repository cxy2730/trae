// Function: FUN_004086e0
// Entry:    004086e0
// Size:     1546 bytes
// Conv:     unknown
// Signature: undefined FUN_004086e0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x00408ad9) */

void __fastcall FUN_004086e0(int param_1)

{
  BOOL BVar1;
  int iVar2;
  HRGN pHVar3;
  undefined4 uVar4;
  HGDIOBJ pvVar5;
  HBRUSH hbr;
  undefined4 uVar6;
  uint uVar7;
  undefined *local_14c;
  undefined **local_148;
  uint local_144;
  tagRECT local_140;
  tagRECT local_130;
  undefined **local_120;
  undefined4 local_11c;
  undefined **local_118;
  undefined **local_114;
  RECT local_110;
  int local_100;
  HDC local_fc;
  HDC local_f8;
  undefined **local_ac;
  undefined **local_54;
  undefined **local_34;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049debe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_0049988e(&local_110);
  BVar1 = IsRectEmpty(&local_110);
  if (BVar1 == 1) goto LAB_00408cbd;
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_130);
  if ((*(int *)(param_1 + 0x48) == 6) && (0 < *(int *)(param_1 + 0x4c))) {
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 != -0x1000000) {
      local_140.left = iVar2;
    }
    uVar7 = (uint)(iVar2 != -0x1000000);
    if (*(int *)(param_1 + 0x54) != -0x1000000) {
      (&local_140.left)[uVar7] = *(int *)(param_1 + 0x54);
      uVar7 = uVar7 + 1;
    }
    if (*(int *)(param_1 + 0x58) != -0x1000000) {
      (&local_140.left)[uVar7] = *(int *)(param_1 + 0x58);
      uVar7 = uVar7 + 1;
    }
    if (1 < uVar7) {
      FUN_00420bc0();
      local_118 = *(undefined ***)(param_1 + 0x4c);
      local_4 = CONCAT31(local_4._1_3_,1);
      local_114 = local_118;
      iVar2 = FUN_00421cd0(&local_100,&local_130,0,&local_110,&local_118,&local_140,uVar7,1,
                           &DAT_00cc0020);
      if (iVar2 == 1) {
        InflateRect(&local_130,-*(int *)(param_1 + 0x4c),-*(int *)(param_1 + 0x4c));
      }
      local_ac = &PTR_FUN_02f9549c;
      local_4._0_1_ = 2;
      local_34 = &PTR_FUN_02f95460;
      FUN_004064a0();
      local_4 = (uint)local_4._1_3_ << 8;
      local_54 = &PTR_FUN_02f95460;
      FUN_004064a0();
    }
  }
  local_144 = 0;
  local_148 = &PTR_LAB_02f95490;
  local_4._0_1_ = 3;
  IntersectRect(&local_110,&local_110,&local_130);
  pHVar3 = CreateRectRgn(local_110.left,local_110.top,local_110.right,local_110.bottom);
  FUN_00499e1d(pHVar3);
  FUN_0049989e(&local_148);
  if (*(int *)(param_1 + 0x88) == 0) {
    if (*(int *)(param_1 + 0x90) != 0) {
      iVar2 = *(int *)(param_1 + 0x94);
      if (iVar2 != -0x1000000) {
        local_140.left = iVar2;
      }
      uVar7 = (uint)(iVar2 != -0x1000000);
      if (*(int *)(param_1 + 0x98) != -0x1000000) {
        (&local_140.left)[uVar7] = *(int *)(param_1 + 0x98);
        uVar7 = uVar7 + 1;
      }
      if (*(int *)(param_1 + 0x9c) != -0x1000000) {
        (&local_140.left)[uVar7] = *(int *)(param_1 + 0x9c);
        uVar7 = uVar7 + 1;
      }
      if (1 < uVar7) {
        FUN_00420bc0();
        local_4 = CONCAT31(local_4._1_3_,4);
        iVar2 = FUN_00421aa0(&local_100,&local_130,&local_110,*(undefined4 *)(param_1 + 0x90),
                             &local_140,uVar7,&DAT_00cc0020);
        if (iVar2 == 1) {
          FUN_00499e74();
        }
        local_ac = &PTR_FUN_02f9549c;
        local_4._0_1_ = 5;
        local_34 = &PTR_FUN_02f95460;
        FUN_004064a0();
        local_4._0_1_ = 3;
        local_54 = &PTR_FUN_02f95460;
        FUN_004064a0();
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0xbc) == 0) {
      if (*(int *)(param_1 + 0x88) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x80);
      }
      iVar2 = FUN_004225f0(uVar4,*(int *)(param_1 + 0x88));
      *(int *)(param_1 + 0xbc) = iVar2;
      if (iVar2 == 0) {
        FUN_004064a0();
      }
    }
    uVar4 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x74));
    FUN_00408d90(*(undefined4 *)(param_1 + 0x8c),&local_100,*(undefined4 *)(param_1 + 0xbc),
                 &local_130,&local_110,&local_148,uVar4);
  }
  if ((&stack0x00000000 != (undefined1 *)0x148) && (local_144 != 0)) {
    uVar4 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x74));
    iVar2 = FUN_00499eda(uVar4);
    if (iVar2 == 0) {
      hbr = (HBRUSH)0x0;
    }
    else {
      hbr = *(HBRUSH *)(iVar2 + 4);
    }
    FillRgn(local_fc,(HRGN)(-(uint)(&stack0x00000000 != (undefined1 *)0x148) & local_144),hbr);
    local_118 = &PTR_LAB_02f9547c;
    local_4._0_1_ = 6;
    FUN_00499e74();
  }
  local_14c = PTR_DAT_02fd8088;
  local_4._0_1_ = 7;
  FUN_0049557d(&local_14c);
  if (*(int *)(local_14c + -8) == 0) {
    local_4._0_1_ = 3;
    FUN_004931d6();
    local_4 = CONCAT31(local_4._1_3_,8);
  }
  else {
    local_11c = 0;
    local_120 = &PTR_LAB_02f95470;
    local_4 = CONCAT31(local_4._1_3_,9);
    pvVar5 = GetCurrentObject(local_f8,6);
    uVar4 = FUN_00499e08(pvVar5);
    if ((*(int *)(param_1 + 0x6c) == 0x3c) &&
       (iVar2 = FUN_00407020(&local_120,*(undefined4 *)(param_1 + 100)), iVar2 != 0)) {
      FUN_00499471(&local_120);
    }
    else {
      FUN_00499435(0x11);
    }
    uVar7 = 0x100;
    if (*(int *)(param_1 + 0xa0) == 1) {
      uVar7 = 0x101;
    }
    else if (*(int *)(param_1 + 0xa0) == 2) {
      uVar7 = 0x102;
    }
    if (*(int *)(param_1 + 0xa4) == 1) {
      uVar7 = uVar7 | 0x14;
    }
    else if (*(int *)(param_1 + 0xa8) == 1) {
      uVar7 = uVar7 | 0x24;
    }
    else if (*(int *)(param_1 + 0xa8) == 2) {
      uVar7 = uVar7 | 0x28;
    }
    else {
      uVar7 = uVar7 | 0x20;
    }
    FUN_0049954d(1);
    iVar2 = *(int *)(param_1 + 0x44);
    if (iVar2 == 2) {
      FUN_00499605(0xffffff);
      (**(code **)(local_100 + 0x68))(local_14c,*(undefined4 *)(local_14c + -8),&local_130,uVar7);
      OffsetRect(&local_130,1,1);
    }
    else {
      if (iVar2 == 1) {
        FUN_00499605(0xffffff);
        local_140.top = local_130.top;
        local_140.left = local_130.left;
        local_140.right = local_130.right;
        local_140.bottom = local_130.bottom;
        OffsetRect(&local_140,1,1);
        uVar6 = *(undefined4 *)(local_14c + -8);
      }
      else {
        if (iVar2 != 3) goto LAB_00408c51;
        FUN_00499605(0);
        local_140.top = local_130.top;
        local_140.left = local_130.left;
        local_140.right = local_130.right;
        local_140.bottom = local_130.bottom;
        OffsetRect(&local_140,2,2);
        uVar6 = *(undefined4 *)(local_14c + -8);
      }
      (**(code **)(local_100 + 0x68))(local_14c,uVar6,&local_140,uVar7);
    }
LAB_00408c51:
    FUN_00499605(*(undefined4 *)(param_1 + 0x70));
    (**(code **)(local_100 + 0x68))(local_14c,*(undefined4 *)(local_14c + -8),&local_130,uVar7);
    FUN_00499471(uVar4);
    local_120 = &PTR_LAB_02f9547c;
    local_4._0_1_ = 10;
    FUN_00499e74();
    local_4._0_1_ = 3;
    FUN_004931d6();
    local_4 = CONCAT31(local_4._1_3_,0xb);
  }
  local_148 = &PTR_LAB_02f9547c;
  FUN_00499e74();
LAB_00408cbd:
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC((CPaintDC *)&local_100);
  ExceptionList = local_c;
  return;
}


// Function: FUN_0040afe0
// Entry:    0040afe0
// Size:     617 bytes
// Conv:     unknown
// Signature: undefined FUN_0040afe0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x0040b16c) */

void __fastcall FUN_0040afe0(int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  HGDIOBJ pvVar3;
  int iVar4;
  undefined *local_94;
  undefined **local_90;
  undefined4 local_8c;
  undefined1 local_88 [8];
  RECT local_80;
  int local_70;
  HDC local_6c;
  HDC local_68;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e0ef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_0049988e(&local_80);
  BVar1 = IsRectEmpty(&local_80);
  if (BVar1 != 1) {
    uVar2 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x5c));
    FUN_00499eda(uVar2);
    local_4._0_1_ = 1;
    uVar2 = FUN_00499471(local_88);
    PatBlt(local_6c,local_80.left,local_80.top,local_80.right - local_80.left,
           local_80.bottom - local_80.top,0xf00021);
    FUN_00499471(uVar2);
    local_94 = PTR_DAT_02fd8088;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0049557d(&local_94);
    if (*(int *)(local_94 + -8) == 0) {
      iVar4 = param_1 + 0x48;
      if (*(int *)(param_1 + 0x44) != 0) {
        iVar4 = param_1 + 0x4c;
      }
      FUN_004932c3(iVar4);
    }
    FUN_0049954d(1);
    if (*(int *)(param_1 + 0x80) == 1) {
      uVar2 = *(undefined4 *)(param_1 + 0x58);
    }
    else if (*(int *)(param_1 + 0x84) == 1) {
      uVar2 = *(undefined4 *)(param_1 + 0x54);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x50);
    }
    FUN_00499605(uVar2);
    pvVar3 = GetCurrentObject(local_68,6);
    uVar2 = FUN_00499e08(pvVar3);
    local_8c = 0;
    local_90 = &PTR_LAB_02f95470;
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((*(int *)(param_1 + 0x74) == 0x3c) &&
       (iVar4 = FUN_00407020(&local_90,*(undefined4 *)(param_1 + 0x6c)), iVar4 != 0)) {
      FUN_00499471(&local_90);
    }
    else {
      FUN_00499435(0x11);
    }
    GetClientRect(*(HWND *)(param_1 + 0x1c),&local_1c);
    (**(code **)(local_70 + 0x68))(local_94,*(undefined4 *)(local_94 + -8),&local_1c,0x925);
    FUN_00499471(uVar2);
    local_1c.right._0_1_ = 4;
    FUN_00499e74();
    local_1c.right._0_1_ = 1;
    FUN_004931d6();
    local_1c.right = CONCAT31(local_1c.right._1_3_,5);
    FUN_00499e74();
    local_1c.right = -1;
    CPaintDC::~CPaintDC((CPaintDC *)&local_80);
    ExceptionList = (void *)local_1c.left;
    return;
  }
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC((CPaintDC *)&local_70);
  ExceptionList = local_c;
  return;
}


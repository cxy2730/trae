// Function: FUN_00413ed0
// Entry:    00413ed0
// Size:     1117 bytes
// Conv:     unknown
// Signature: undefined FUN_00413ed0(void)
// Decompiled by Ghidra 12.1.2


undefined8 FUN_00413ed0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  HWND pHVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined1 local_40 [4];
  int local_3c;
  uint local_38;
  undefined4 local_34;
  tagRECT local_30;
  undefined **local_20;
  uint local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e8d8;
  local_c = ExceptionList;
  local_38 = 0;
  local_34 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_0040ec30(param_1,local_40,0);
  if (iVar2 == 0) {
    FUN_00412f90(&DAT_02faaeec,0,param_1,param_2);
    ExceptionList = local_c;
    return CONCAT44(local_34,local_38);
  }
  puVar3 = (undefined4 *)FUN_0040e7b0(param_2,0,0);
  FUN_004062a0();
  local_4 = 0;
  iVar2 = FUN_0040ede0(param_2);
  if (iVar2 != 0) {
    iVar2 = FUN_00406cf0(puVar3 + 6);
    iVar2 = (int)(puVar3 + 6) + iVar2;
    iVar4 = FUN_00406cf0(iVar2);
    puVar9 = (uint *)(iVar2 + 8 + iVar4);
    switch(param_3) {
    case 0:
      local_38 = FUN_0040f920(puVar9 + 1);
      break;
    case 1:
      local_38 = *puVar9 >> 2 & 1;
      break;
    case 2:
      local_38 = *puVar9 >> 1 & 1;
      break;
    case 3:
      local_38 = ~*puVar9 & 1;
    }
    goto switchD_00413f95_default;
  }
  local_3c = FUN_00413290(*puVar3,0);
  iVar2 = *(int *)(local_3c + 0x28);
  puVar3 = puVar3 + 6;
  iVar4 = FUN_00406cf0(puVar3);
  iVar5 = FUN_00406cf0((int)puVar3 + iVar4);
  iVar4 = *(int *)((int)puVar3 + iVar4 + iVar5);
  if ((iVar4 == 0) || (BVar6 = IsWindow(*(HWND *)(iVar4 + 0x1c)), BVar6 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (7 < param_3) {
    if (!bVar1) {
      FUN_00412f90(&DAT_02faaec8,0,param_1,param_2);
    }
    pcVar11 = (code *)(**(code **)(local_3c + 0x2c))(6);
    local_34 = 0;
    local_30.left = 0;
    (*pcVar11)(iVar4,param_3 + -8,&local_34);
    FUN_00414800(iVar2 + param_3 * 0x14,param_4,&local_30,&local_38);
    goto switchD_00413f95_default;
  }
  switch(param_3) {
  case 0:
  case 1:
    if (bVar1) {
      GetWindowRect(*(HWND *)(iVar4 + 0x1c),&local_30);
      pHVar7 = GetParent(*(HWND *)(iVar4 + 0x1c));
      iVar2 = FUN_00494bb2(pHVar7);
      if ((iVar2 != 0) && (uVar8 = FUN_00497418(), (uVar8 & 0x80000000) == 0)) {
        FUN_004999e3(&local_30);
      }
      local_38 = local_30.left;
      if (param_3 != 0) {
        local_38 = local_30.top;
      }
      break;
    }
    iVar2 = FUN_00406cf0(puVar3);
    iVar4 = FUN_00406cf0((int)puVar3 + iVar2);
    puVar9 = (uint *)((int)puVar3 + iVar2 + 4 + iVar4);
    if (param_3 == 1) {
      puVar9 = puVar9 + 1;
    }
    goto LAB_004140c6;
  case 2:
  case 3:
    if (bVar1) {
      GetWindowRect(*(HWND *)(iVar4 + 0x1c),&local_30);
      if (param_3 == 2) {
        local_38 = local_30.right - local_30.left;
      }
      else {
        local_38 = local_30.bottom - local_30.top;
      }
      break;
    }
    iVar2 = FUN_00406cf0(puVar3);
    iVar4 = FUN_00406cf0((int)puVar3 + iVar2);
    puVar9 = (uint *)((int)puVar3 + iVar2 + 0xc + iVar4);
    if (param_3 == 3) {
      local_38 = puVar9[1];
      break;
    }
LAB_004140c6:
    local_38 = *puVar9;
    break;
  case 4:
    iVar5 = FUN_00406cf0(puVar3);
    iVar5 = (int)puVar3 + iVar5;
    iVar2 = FUN_00406cf0(iVar5);
    iVar4 = *(int *)(iVar5 + 0x1c + iVar2);
    iVar2 = iVar5 + 0x1c + iVar2;
    local_38 = FUN_0040f920(*(int *)(iVar2 + 4 + iVar4 * 4) + iVar2 + 8 + iVar4 * 4);
    break;
  case 5:
    if (bVar1) {
      BVar6 = IsWindowVisible(*(HWND *)(iVar4 + 0x1c));
      local_38 = (uint)(BVar6 != 0);
    }
    else {
      iVar5 = FUN_00406cf0(puVar3);
      iVar5 = (int)puVar3 + iVar5;
      iVar2 = FUN_00406cf0(iVar5);
      iVar4 = *(int *)(iVar5 + 0x1c + iVar2);
      iVar2 = iVar5 + 0x1c + iVar2;
      iVar2 = *(int *)(iVar2 + 4 + iVar4 * 4) + iVar2 + 8 + iVar4 * 4;
      iVar4 = FUN_00406cf0(iVar2);
      local_38 = *(uint *)(iVar4 + 4 + iVar2) & 1;
    }
    break;
  case 6:
    if (bVar1) {
      iVar2 = FUN_004975a7();
      local_38 = (uint)(iVar2 == 0);
    }
    else {
      iVar5 = FUN_00406cf0(puVar3);
      iVar5 = (int)puVar3 + iVar5;
      iVar2 = FUN_00406cf0(iVar5);
      iVar4 = *(int *)(iVar5 + 0x1c + iVar2);
      iVar2 = iVar5 + 0x1c + iVar2;
      iVar2 = iVar2 + iVar4 * 4 + 8 + *(int *)(iVar2 + 4 + iVar4 * 4);
      iVar4 = FUN_00406cf0(iVar2);
      local_38 = *(uint *)(iVar4 + 4 + iVar2) >> 1 & 1;
    }
    break;
  case 7:
    iVar5 = FUN_00406cf0(puVar3);
    iVar5 = (int)puVar3 + iVar5;
    iVar2 = FUN_00406cf0(iVar5);
    iVar4 = *(int *)(iVar5 + 0x1c + iVar2);
    iVar2 = iVar5 + 0x1c + iVar2;
    uVar8 = *(uint *)(iVar2 + 4 + iVar4 * 4);
    puVar3 = (undefined4 *)(iVar2 + 4 + iVar4 * 4);
    if (uVar8 < 4) {
      local_38 = FUN_0040f9b0(puVar3 + 1,uVar8);
    }
    else {
      local_10 = 0;
      FUN_004069d0(puVar3 + 1,*puVar3);
      puVar3 = (undefined4 *)(-(uint)(local_10 != 0) & local_18);
      uVar10 = FUN_0041cc10(*puVar3);
      *puVar3 = uVar10;
      local_38 = FUN_0040f9b0(puVar3,local_10);
    }
  }
switchD_00413f95_default:
  uVar10 = local_34;
  uVar8 = local_38;
  local_4 = 0xffffffff;
  local_20 = &PTR_FUN_02f95460;
  FUN_004064a0();
  ExceptionList = local_c;
  return CONCAT44(uVar10,uVar8);
}


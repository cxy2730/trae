// Function: FUN_0041ab50
// Entry:    0041ab50
// Size:     592 bytes
// Conv:     unknown
// Signature: undefined FUN_0041ab50(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041ab50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_48 [4];
  tagRECT local_44;
  undefined **local_34;
  int local_2c;
  uint local_24;
  undefined **local_20;
  int local_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ed90;
  local_c = ExceptionList;
  iVar6 = 0;
  if (*(int *)(param_1 + 0x1e0) != 0) {
    ExceptionList = &local_c;
    FUN_004062a0();
    local_20 = &PTR_FUN_02f959a4;
    local_4 = 0;
    FUN_004062a0();
    local_34 = &PTR_FUN_02f959a4;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00413d70(0x3e9,0,0);
    iVar1 = FUN_0040ec30(*(undefined4 *)(param_1 + 0xdc),local_48,0);
    if (iVar1 == 1) {
      while (puVar2 = (undefined4 *)FUN_0040e730(iVar6,0), puVar2 != (undefined4 *)0x0) {
        iVar1 = FUN_00413d70(0x3ea,*puVar2,0);
        if ((iVar1 == 0) || ((*(uint *)(iVar1 + 0x14) & 0x100000) == 0)) {
LAB_0041ac73:
          iVar6 = iVar6 + 1;
        }
        else {
          iVar1 = FUN_00406cf0(puVar2 + 6);
          iVar1 = (int)(puVar2 + 6) + iVar1;
          iVar3 = FUN_00406cf0(iVar1);
          iVar1 = *(int *)(iVar1 + iVar3);
          if ((iVar1 == 0) || (BVar4 = IsWindow(*(HWND *)(iVar1 + 0x1c)), BVar4 == 0))
          goto LAB_0041ac73;
          SendMessageA(*(HWND *)(iVar1 + 0x1c),0x8003,0,0);
          uVar5 = FUN_00497418();
          if ((uVar5 & 3) != 1) {
            if ((uVar5 & 3) == 3) {
              FUN_004065a0(iVar1);
            }
            goto LAB_0041ac73;
          }
          FUN_004065a0(iVar1);
          iVar6 = iVar6 + 1;
        }
      }
    }
    iVar6 = 0;
    uVar5 = local_10 >> 2;
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      GetWindowRect(*(HWND *)(*(int *)(local_18 + uVar5 * 4) + 0x1c),&local_44);
      FUN_004999e3(&local_44);
      iVar1 = local_44.bottom - local_44.top;
      if (iVar6 != local_44.top) {
        local_44.bottom = iVar1 + iVar6;
        local_44.top = iVar6;
        FUN_004974f0(local_44.left,iVar6,local_44.right - local_44.left,local_44.bottom - iVar6,1);
      }
      iVar6 = iVar6 + iVar1;
    }
    GetClientRect(*(HWND *)(param_1 + 0x1c),&local_44);
    uVar5 = local_24 >> 2;
    iVar6 = local_44.bottom;
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      GetWindowRect(*(HWND *)(*(int *)(local_2c + uVar5 * 4) + 0x1c),&local_44);
      FUN_004999e3(&local_44);
      iVar1 = local_44.bottom - local_44.top;
      if (iVar6 != local_44.bottom) {
        local_44.top = iVar6 - iVar1;
        local_44.bottom = iVar6;
        FUN_004974f0(local_44.left,local_44.top,local_44.right - local_44.left,iVar6 - local_44.top,
                     1);
      }
      iVar6 = iVar6 - iVar1;
    }
    local_4 = local_4 & 0xffffff00;
    local_34 = &PTR_FUN_02f958c0;
    FUN_004064a0();
    local_4 = 0xffffffff;
    local_20 = &PTR_FUN_02f958c0;
    FUN_004064a0();
  }
  ExceptionList = local_c;
  return;
}


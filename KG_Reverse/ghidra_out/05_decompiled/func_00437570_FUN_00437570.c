// Function: FUN_00437570
// Entry:    00437570
// Size:     631 bytes
// Conv:     unknown
// Signature: undefined FUN_00437570(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00437570(int param_1,int param_2)

{
  HDC hdc;
  int iVar1;
  HBRUSH pHVar2;
  HDC hdc_00;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  undefined **local_2c;
  undefined **local_24;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0ad8;
  local_c = ExceptionList;
  hdc = *(HDC *)(param_2 + 4);
  ExceptionList = &local_c;
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_1c);
  if ((*(int *)(param_1 + 0xcc) == 0) && (*(int *)(param_1 + 200) == 0)) {
    if (*(int *)(param_1 + 0xe0) == 1) {
      *(undefined4 *)(param_1 + 200) = 1;
      if (*(int *)(param_1 + 0xb8) == 0) {
        iVar1 = FUN_00499eda(*(undefined4 *)(param_1 + 0xdc));
        pHVar2 = (HBRUSH)0x0;
        if (iVar1 != 0) {
          pHVar2 = *(HBRUSH *)(iVar1 + 4);
        }
        FillRect(*(HDC *)(iVar3 + 4),&local_1c,pHVar2);
        local_2c = &PTR_LAB_02f96e54;
        local_4 = 0;
        FUN_00499e74();
        local_4 = 0xffffffff;
      }
      FUN_004377f0();
      ExceptionList = local_c;
      return;
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      if (*(int *)(param_1 + 0xb8) != 0) {
        ExceptionList = local_c;
        return;
      }
      iVar1 = FUN_00499eda(*(undefined4 *)(param_1 + 0xdc));
      pHVar2 = (HBRUSH)0x0;
      if (iVar1 != 0) {
        pHVar2 = *(HBRUSH *)(iVar1 + 4);
      }
      FillRect(*(HDC *)(iVar3 + 4),&local_1c,pHVar2);
      local_2c = &PTR_LAB_02f96e54;
      local_4 = 1;
      FUN_00499e74();
      ExceptionList = local_c;
      return;
    }
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      iVar1 = *(int *)(param_1 + 0xc4);
      while (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0xc4);
      }
    }
    *(undefined4 *)(param_1 + 0xc4) = 1;
    if (*(int *)(param_1 + 0xb8) == 0) {
      iVar1 = FUN_00499eda(*(undefined4 *)(param_1 + 0xdc));
      pHVar2 = (HBRUSH)0x0;
      if (iVar1 != 0) {
        pHVar2 = *(HBRUSH *)(iVar1 + 4);
      }
      FillRect(*(HDC *)(iVar3 + 4),&local_1c,pHVar2);
      local_24 = &PTR_LAB_02f96e54;
      local_4 = 2;
      FUN_00499e74();
      local_4 = 0xffffffff;
    }
    hdc_00 = CreateCompatibleDC(hdc);
    local_2c = SelectObject(hdc_00,*(HGDIOBJ *)(param_1 + 0xc0));
    FUN_004373e0(&local_38,&param_2,&local_30,&local_34);
    if (*(int *)(param_1 + 0xd0) == 0) {
      BitBlt(hdc,local_38,param_2,*(int *)(param_1 + 0xd4),*(int *)(param_1 + 0xd8),hdc_00,0,0,
             0xcc0020);
    }
    else {
      iVar3 = FUN_0041d1e0();
      SetStretchBltMode(hdc,iVar3);
      StretchBlt(hdc,local_38,param_2,local_30,local_34,hdc_00,0,0,*(int *)(param_1 + 0xd4),
                 *(int *)(param_1 + 0xd8),0xcc0020);
    }
    SelectObject(hdc_00,local_2c);
    *(undefined4 *)(param_1 + 0xc4) = 0;
    DeleteDC(hdc_00);
  }
  ExceptionList = local_c;
  return;
}


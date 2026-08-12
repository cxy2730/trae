// Function: FUN_00444300
// Entry:    00444300
// Size:     230 bytes
// Conv:     unknown
// Signature: undefined FUN_00444300(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00444300(int param_1)

{
  HWND pHVar1;
  int iVar2;
  WPARAM wParam;
  undefined *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x44) == 0) {
    local_28 = PTR_DAT_02fd8088;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_0049557d(&local_28);
    if (param_1 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = *(undefined4 *)(param_1 + 0x1c);
    }
    local_20 = FUN_004974d5();
    local_14 = *(undefined4 *)(param_1 + 0x40);
    local_18 = *(undefined4 *)(param_1 + 0x3c);
    pHVar1 = *(HWND *)(param_1 + 0x20);
    local_1c = 0xffffff96;
    local_10 = local_28;
    if (pHVar1 == (HWND)0x0) {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
    }
    iVar2 = FUN_00494bb2(pHVar1);
    if (iVar2 != 0) {
      wParam = FUN_004974d5();
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0x4e,wParam,(LPARAM)&local_24);
    }
    local_4 = 0xffffffff;
    FUN_004931d6();
  }
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x10,0,0);
  ExceptionList = local_c;
  return;
}


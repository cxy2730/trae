// Function: FUN_00435000
// Entry:    00435000
// Size:     201 bytes
// Conv:     unknown
// Signature: undefined FUN_00435000(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00435000(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  HWND pHVar3;
  LPARAM lParam;
  WPARAM wParam;
  undefined4 uVar4;
  undefined4 uVar5;
  tagRECT local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a068a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  GetWindowRect(*(HWND *)(param_1 + 0x1c),&local_1c);
  iVar1 = FUN_00492f17(0x10c);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 100);
    uVar4 = *(undefined4 *)(param_1 + 0x60);
    iVar1 = param_1;
    uVar2 = FUN_004353f0(param_1,uVar4,uVar5);
    FUN_00444450(local_1c.left,local_1c.bottom,uVar2,iVar1,uVar4,uVar5);
  }
  local_4 = 0xffffffff;
  pHVar3 = GetParent(*(HWND *)(param_1 + 0x1c));
  iVar1 = FUN_00494bb2(pHVar3);
  if (iVar1 != 0) {
    lParam = FUN_004974d5();
    wParam = FUN_004353f0();
    SendMessageA(*(HWND *)(iVar1 + 0x1c),0x83ea,wParam,lParam);
  }
  ExceptionList = local_c;
  return;
}


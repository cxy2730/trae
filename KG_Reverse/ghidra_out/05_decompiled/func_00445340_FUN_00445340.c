// Function: FUN_00445340
// Entry:    00445340
// Size:     236 bytes
// Conv:     unknown
// Signature: undefined FUN_00445340(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00445340(int param_1,int param_2)

{
  int iVar1;
  WPARAM wParam;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499b75(param_1);
  local_4 = 0;
  if (*(int *)(param_1 + 0x3c) < param_2) {
    param_2 = -2;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if ((((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x3c))) || (iVar1 == -2)) || (iVar1 == -3)) {
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    FUN_00445530(local_20,iVar1);
  }
  *(int *)(param_1 + 0x50) = param_2;
  FUN_00445530(local_20,param_2);
  if (*(HWND *)(param_1 + 0x100) != (HWND)0x0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == -2) {
      wParam = *(WPARAM *)(param_1 + 0xa0);
    }
    else if (iVar1 == -3) {
      *(undefined4 *)(param_1 + 0xa4) = 0xff000000;
      wParam = 0xff000000;
    }
    else {
      wParam = (&DAT_02fb21a4)[iVar1 * 2];
      *(WPARAM *)(param_1 + 0xa4) = wParam;
    }
    SendMessageA(*(HWND *)(param_1 + 0x100),0x83e9,wParam,0);
  }
  local_4 = 0xffffffff;
  FID_conflict__CClientDC();
  ExceptionList = local_c;
  return;
}


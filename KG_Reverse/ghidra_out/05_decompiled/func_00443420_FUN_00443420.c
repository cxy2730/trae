// Function: FUN_00443420
// Entry:    00443420
// Size:     270 bytes
// Conv:     unknown
// Signature: undefined FUN_00443420(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00443420(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_38;
  int local_34;
  tagRECT local_30;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499b75(0);
  local_4 = 0;
  FUN_00442c00(local_20,1000,1000);
  local_38 = *(int *)(param_1 + 0x48) + 100;
  local_34 = *(int *)(param_1 + 0x4c) + 0x96;
  FUN_00499aa3(&local_38);
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_30);
  iVar1 = ((local_30.bottom - local_30.top) * 1000) / local_34;
  iVar2 = ((local_30.right - local_30.left) * 1000) / local_38;
  if ((param_3 == 1) && ((param_2 != 1 || (iVar1 < iVar2)))) {
    iVar2 = iVar1;
  }
  if (iVar2 < 200) {
    iVar2 = 200;
  }
  *(int *)(param_1 + 0xd0) = iVar2;
  FUN_004432a0();
  InvalidateRect(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,1);
  local_4 = 0xffffffff;
  FID_conflict__CClientDC();
  ExceptionList = local_c;
  return;
}


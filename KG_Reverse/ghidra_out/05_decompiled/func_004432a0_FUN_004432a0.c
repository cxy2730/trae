// Function: FUN_004432a0
// Entry:    004432a0
// Size:     297 bytes
// Conv:     unknown
// Signature: undefined FUN_004432a0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004432a0(int param_1)

{
  uint uVar1;
  int local_38;
  int local_34;
  tagRECT local_30;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_30);
  FUN_00499b75(0);
  local_4 = 0;
  FUN_00442c00(local_20,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd0));
  local_34 = *(int *)(param_1 + 0x4c) + 100;
  local_38 = *(int *)(param_1 + 0x48) + 100;
  FUN_00499aa3(&local_38);
  uVar1 = ((local_38 - local_30.right) + local_30.left) / 0x1e + 1;
  FUN_00496367(0,0,uVar1 & ((int)uVar1 < 0) - 1,1);
  uVar1 = ((local_30.top - local_30.bottom) + local_34) / 0x1e + 1;
  FUN_00496367(1,0,uVar1 & ((int)uVar1 < 0) - 1,1);
  FUN_0049630f(0,0,1);
  FUN_0049630f(1,0,1);
  local_4 = 0xffffffff;
  FID_conflict__CClientDC();
  ExceptionList = local_c;
  return;
}


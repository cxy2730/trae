// Function: FUN_00407ee0
// Entry:    00407ee0
// Size:     221 bytes
// Conv:     unknown
// Signature: undefined FUN_00407ee0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00407ee0(int param_1)

{
  int iVar1;
  undefined *local_44;
  WPARAM local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049dde8;
  local_c = ExceptionList;
  local_44 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00407c60(&local_44);
  if (iVar1 == 1) {
    SendMessageA(*(HWND *)(param_1 + 0x1c),0xb0,(WPARAM)&local_40,(LPARAM)local_3c);
    FUN_004974ae(local_44);
    SendMessageA(*(HWND *)(param_1 + 0x1c),0xb1,local_40,local_40);
    SendMessageA(*(HWND *)(param_1 + 0x1c),0xb7,0,0);
  }
  local_38 = *(undefined4 *)(param_1 + 0xb0);
  local_34 = *(undefined4 *)(param_1 + 0xb4);
  local_30 = 0xfffffff8;
  local_2c = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_00413d70(0x7d8,&local_38,0);
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}


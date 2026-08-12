// Function: FUN_0040a5c0
// Entry:    0040a5c0
// Size:     361 bytes
// Conv:     unknown
// Signature: undefined FUN_0040a5c0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040a5c0(int param_1,LPARAM param_2)

{
  LPARAM lParam;
  int lParam_00;
  undefined4 uVar1;
  undefined *local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  lParam = param_2;
  puStack_8 = &LAB_0049e058;
  local_c = ExceptionList;
  local_48 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00491bbd(&param_2,param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  for (lParam_00 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x110a,3,lParam); lParam_00 != 0;
      lParam_00 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x110a,3,lParam_00)) {
    uVar1 = FUN_00491bbd(local_44,lParam_00);
    local_4._0_1_ = 2;
    FUN_004932c3(uVar1);
    local_4._0_1_ = 1;
    FUN_004931d6();
    uVar1 = FUN_0049341f(local_3c,&local_48,&DAT_02faaca8);
    local_4._0_1_ = 3;
    uVar1 = FUN_004933b9(local_40,uVar1,&param_2);
    local_4._0_1_ = 4;
    FUN_004932c3(uVar1);
    local_4._0_1_ = 3;
    FUN_004931d6();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004931d6();
  }
  FUN_004932c3(&param_2);
  local_4 = local_4 & 0xffffff00;
  FUN_004931d6();
  local_4 = 0xffffffff;
  FUN_004931d6();
  local_34 = *(undefined4 *)(param_1 + 0x74);
  local_38 = *(undefined4 *)(param_1 + 0x70);
  local_30 = 0;
  local_2c = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_00413d70(0x7d8,&local_38,0);
  ExceptionList = local_c;
  return;
}


// Function: FUN_0042a470
// Entry:    0042a470
// Size:     300 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a470(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0042a470(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049fd68;
  local_c = ExceptionList;
  if (DAT_02fe8c60 != 0) {
    local_40 = 0;
    local_3c = param_2;
    ExceptionList = &local_c;
    FUN_00499aa3(&local_40);
    local_30 = 0;
    local_2c = param_3;
    FUN_00499aa3(&local_30);
    local_3c = local_3c + local_2c;
    FUN_00499b0c(&local_40);
    ExceptionList = local_c;
    return local_3c;
  }
  ExceptionList = &local_c;
  FUN_00499b75(0);
  local_4 = 0;
  FUN_00442c00(local_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  local_34 = param_2;
  local_38 = 0;
  FUN_00499aa3(&local_38);
  local_28 = 0;
  local_24 = param_3;
  FUN_00499aa3(&local_28);
  local_34 = local_34 + local_24;
  FUN_00499b0c(&local_38);
  iVar1 = local_34;
  local_4 = 0xffffffff;
  FID_conflict__CClientDC();
  ExceptionList = local_c;
  return iVar1;
}


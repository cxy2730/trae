// Function: FUN_0042a340
// Entry:    0042a340
// Size:     300 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a340(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Type propagation algorithm not settling */

int __thiscall FUN_0042a340(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_40 [3];
  undefined4 local_34;
  int local_30 [3];
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049fd48;
  local_c = ExceptionList;
  if (DAT_02fe8c60 != 0) {
    local_40[0] = param_2;
    local_40[1] = 0;
    ExceptionList = &local_c;
    FUN_00499aa3(local_40);
    local_30[0] = param_3;
    local_30[1] = 0;
    FUN_00499aa3(local_30);
    local_40[0] = local_40[0] + local_30[0];
    FUN_00499b0c(local_40);
    ExceptionList = local_c;
    return local_40[0];
  }
  ExceptionList = &local_c;
  FUN_00499b75(0);
  local_4 = 0;
  FUN_00442c00(local_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  local_40[2] = param_2;
  local_34 = 0;
  FUN_00499aa3(local_40 + 2);
  local_30[2] = param_3;
  local_24 = 0;
  FUN_00499aa3(local_30 + 2);
  local_40[2] = local_40[2] + local_30[2];
  FUN_00499b0c(local_40 + 2);
  iVar1 = local_40[2];
  local_4 = 0xffffffff;
  FID_conflict__CClientDC();
  ExceptionList = local_c;
  return iVar1;
}


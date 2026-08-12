// Function: FUN_004828a5
// Entry:    004828a5
// Size:     84 bytes
// Conv:     unknown
// Signature: undefined FUN_004828a5(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_004828a5(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_004828f9;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}


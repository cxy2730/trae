// Function: FUN_004321f0
// Entry:    004321f0
// Size:     263 bytes
// Conv:     unknown
// Signature: undefined FUN_004321f0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004321f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004a0418;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((int)param_1[2] < 1) &&
     (ExceptionList = &local_10, iVar1 = FUN_00430fe0(*param_1,0xffffffff,1), iVar1 != 0)) {
    ExceptionList = local_10;
    return iVar1;
  }
  param_1[2] = param_1[2] + 1;
  if (param_1[4] == 0) {
    if (param_2 == (undefined4 *)0x0) {
      FUN_00493768();
      local_8 = 1;
      (**(code **)(*(int *)*param_1 + 0x28))(0,0);
      iVar1 = (**(code **)(*(int *)*param_1 + 0x34))(param_1 + 6,0xe0);
      if (iVar1 != 0xe0) {
        local_8 = 0xffffffff;
        FUN_004937a6();
        ExceptionList = local_10;
        return -0x34;
      }
      puVar2 = param_1 + 6;
      puVar3 = param_1 + 0x3e;
      for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      param_1[4] = 1;
      local_8 = 0xffffffff;
      FUN_004937a6();
    }
    else {
      puVar2 = param_2;
      puVar3 = param_1 + 6;
      for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = param_1 + 0x3e;
      for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      param_1[4] = 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}


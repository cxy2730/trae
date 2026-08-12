// Function: FUN_00431b50
// Entry:    00431b50
// Size:     274 bytes
// Conv:     unknown
// Signature: undefined FUN_00431b50(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00431b50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004a03b8;
  local_10 = ExceptionList;
  iVar2 = 0;
  if (0x11 < (int)param_1[0x76]) {
    ExceptionList = &local_10;
    FUN_00493768();
    local_8 = 1;
    if (param_1[0x92] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1[0x90];
    }
    for (; iVar2 < 3; iVar2 = iVar2 + 1) {
      if (*(char *)(iVar2 + 0x224 + (int)param_1) != '\0') {
        (**(code **)(*(int *)*param_1 + 0x28))(param_1[iVar2 + 0x77] * *(int *)(param_1[1] + 8),0);
        (**(code **)(*(int *)*param_1 + 0x38))(iVar1,*(undefined4 *)(param_1[1] + 8));
      }
      iVar1 = iVar1 + *(int *)(param_1[1] + 8);
    }
    FUN_00483180(param_1 + 0x77,param_1 + 0x7a,0x3c);
    FUN_00483180(param_1 + 0x89,(int)param_1 + 0x227,0xf);
    FUN_00406b50(0,*(int *)(param_1[1] + 8) * 3);
    param_1[0x76] = param_1[0x76] + -3;
    local_8 = 0xffffffff;
    FUN_004937a6();
  }
  ExceptionList = local_10;
  return 0;
}


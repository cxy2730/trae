// Function: FUN_004749b0
// Entry:    004749b0
// Size:     180 bytes
// Conv:     unknown
// Signature: undefined FUN_004749b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_004749b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a138e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004752d0(param_2,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_02f9a02c;
  puVar1 = (undefined4 *)FUN_00492f17(0x10);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar1 + 2) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = FUN_00492f17(4);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (iVar2 == 0) {
      puVar1[3] = 0;
    }
    else {
      uVar3 = FUN_0046bab0(0);
      puVar1[3] = uVar3;
    }
  }
  param_1[0xc] = puVar1;
  param_1[0xd] = 0;
  ExceptionList = local_c;
  return param_1;
}


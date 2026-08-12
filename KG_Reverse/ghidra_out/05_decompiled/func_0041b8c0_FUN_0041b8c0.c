// Function: FUN_0041b8c0
// Entry:    0041b8c0
// Size:     148 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b8c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041b8c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049eda8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0041b870(*param_1,0x5c);
  iVar3 = FUN_0041b870(*puVar1,0x2e);
  if ((iVar3 != -1) && (iVar2 < iVar3)) {
    uVar4 = FUN_00490ead(&param_1,iVar3);
    local_4 = 0;
    FUN_004932c3(uVar4);
    local_4 = 0xffffffff;
    FUN_004931d6();
  }
  FUN_00493566(&DAT_02fab72c);
  FUN_00493566(param_2);
  ExceptionList = local_c;
  return;
}


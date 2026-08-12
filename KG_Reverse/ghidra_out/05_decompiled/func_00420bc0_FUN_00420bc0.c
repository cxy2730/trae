// Function: FUN_00420bc0
// Entry:    00420bc0
// Size:     153 bytes
// Conv:     unknown
// Signature: undefined FUN_00420bc0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_00420bc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f396;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004062a0();
  local_4 = 0;
  FUN_004062a0();
  puVar1 = param_1 + 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_02f95fd4;
  FUN_00406ca0(puVar1,0x28);
  *puVar1 = 0x28;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)((int)param_1 + 0x12) = 0x20;
  param_1[5] = 0;
  FUN_00406c40(param_1 + 0xb,puVar1,0x28);
  FUN_00406ca0(param_1 + 0x15,4);
  FUN_00420c70();
  ExceptionList = local_c;
  return param_1;
}


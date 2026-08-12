// Function: FUN_0041d350
// Entry:    0041d350
// Size:     85 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d350(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0041d350(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ef68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004937c4();
  local_4 = 0;
  *param_1 = &PTR_LAB_02f95a1c;
  FUN_0041d3b0(param_2,param_3);
  ExceptionList = local_c;
  return param_1;
}


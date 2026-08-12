// Function: FUN_00424ce0
// Entry:    00424ce0
// Size:     145 bytes
// Conv:     unknown
// Signature: undefined FUN_00424ce0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_00424ce0(undefined4 *param_1)

{
  HANDLE pvVar1;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049f611;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x17) = local_11;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = local_11;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x1f) = local_11;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_4 = 2;
  *param_1 = &PTR_FUN_02f96140;
  FUN_00424ea0();
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[0x15] = pvVar1;
  ExceptionList = local_c;
  return param_1;
}


// Function: FUN_00434cd0
// Entry:    00434cd0
// Size:     174 bytes
// Conv:     unknown
// Signature: undefined FUN_00434cd0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_00434cd0(undefined4 *param_1)

{
  DWORD DVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a062e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00494787();
  *param_1 = &PTR_LAB_02f966bc;
  param_1[0x18] = PTR_DAT_02fd8088;
  param_1[0x19] = PTR_DAT_02fd8088;
  local_4 = 2;
  *param_1 = &PTR_LAB_02f96600;
  DVar1 = GetSysColor(0xf);
  FUN_00435420(DVar1);
  DVar1 = GetSysColor(0x12);
  FUN_00435450(DVar1);
  param_1[0x10] = 0;
  param_1[0x13] = 2;
  param_1[0xf] = 0;
  FUN_00493313(&DAT_02fb0f94);
  FUN_00493313(&DAT_02fb0f88);
  ExceptionList = local_c;
  return param_1;
}


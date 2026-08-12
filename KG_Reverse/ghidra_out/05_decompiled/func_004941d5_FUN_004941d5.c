// Function: FUN_004941d5
// Entry:    004941d5
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_004941d5(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_004941d5(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  FUN_00494787();
  *param_1 = &PTR_LAB_02f9b19c;
  _memset(param_1 + 0xf,0,0x20);
  param_1[0x14] = param_3;
  param_1[0xf] = param_2;
  param_1[0x10] = param_2 & 0xffff;
  return param_1;
}


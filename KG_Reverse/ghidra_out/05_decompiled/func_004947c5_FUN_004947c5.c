// Function: FUN_004947c5
// Entry:    004947c5
// Size:     44 bytes
// Conv:     unknown
// Signature: undefined FUN_004947c5(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_004947c5(undefined4 *param_1,undefined4 param_2)

{
  FUN_00497a60();
  *param_1 = &PTR_LAB_02f9b690;
  _memset(param_1 + 7,0,0x20);
  param_1[7] = param_2;
  return param_1;
}


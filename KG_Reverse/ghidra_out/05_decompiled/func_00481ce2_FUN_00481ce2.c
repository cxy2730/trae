// Function: FUN_00481ce2
// Entry:    00481ce2
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_00481ce2(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00481ce2(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return param_1;
}


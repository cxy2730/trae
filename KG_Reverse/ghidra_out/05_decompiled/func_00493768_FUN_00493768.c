// Function: FUN_00493768
// Entry:    00493768
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined FUN_00493768(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_00493768(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[1] = 0;
  puVar1 = (undefined4 *)FUN_0049377e();
  *param_1 = *puVar1;
  *puVar1 = param_1;
  return param_1;
}


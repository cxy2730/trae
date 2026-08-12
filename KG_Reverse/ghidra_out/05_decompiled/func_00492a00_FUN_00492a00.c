// Function: FUN_00492a00
// Entry:    00492a00
// Size:     32 bytes
// Conv:     unknown
// Signature: undefined FUN_00492a00(void)
// Decompiled by Ghidra 12.1.2


void FUN_00492a00(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00492f17(param_2 * param_3 + 4);
  *puVar1 = *param_1;
  *param_1 = puVar1;
  return;
}


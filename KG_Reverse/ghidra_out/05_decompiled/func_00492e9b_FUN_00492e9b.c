// Function: FUN_00492e9b
// Entry:    00492e9b
// Size:     98 bytes
// Conv:     unknown
// Signature: undefined FUN_00492e9b(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00492e9b(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int local_8;
  
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_00492e01(param_2,&local_8);
  if (puVar1 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_00492cdf(*(undefined4 *)(param_1 + 8),1);
    }
    puVar1 = (undefined4 *)FUN_00492d9f();
    puVar1[1] = local_8;
    FUN_00493313(param_2);
    *puVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + local_8 * 4);
    *(undefined4 **)(*(int *)(param_1 + 4) + local_8 * 4) = puVar1;
  }
  return puVar1 + 3;
}


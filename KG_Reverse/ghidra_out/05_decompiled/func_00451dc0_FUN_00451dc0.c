// Function: FUN_00451dc0
// Entry:    00451dc0
// Size:     68 bytes
// Conv:     unknown
// Signature: undefined FUN_00451dc0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00451dc0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x6c];
  *puVar1 = FUN_00451b50;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)param_1[0x6d])(param_1);
  param_1[0x28] = 0;
  return;
}


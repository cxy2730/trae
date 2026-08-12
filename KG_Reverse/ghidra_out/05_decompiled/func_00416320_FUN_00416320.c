// Function: FUN_00416320
// Entry:    00416320
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_00416320(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00416320(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
    FUN_0049a3b6();
  }
  **(undefined4 **)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
  return param_1;
}


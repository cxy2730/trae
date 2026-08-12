// Function: FUN_00421070
// Entry:    00421070
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_00421070(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00421070(int param_1,undefined4 *param_2)

{
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
    FUN_0049a432((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
  }
  *param_2 = **(undefined4 **)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
  return param_1;
}


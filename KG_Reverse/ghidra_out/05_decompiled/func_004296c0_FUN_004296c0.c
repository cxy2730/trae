// Function: FUN_004296c0
// Entry:    004296c0
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_004296c0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004296c0(int param_1,undefined2 *param_2)

{
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
    FUN_0049a432((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 2);
  }
  *param_2 = **(undefined2 **)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 2;
  return param_1;
}


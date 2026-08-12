// Function: FUN_004813bd
// Entry:    004813bd
// Size:     51 bytes
// Conv:     unknown
// Signature: undefined FUN_004813bd(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004813bd(int param_1,undefined2 *param_2)

{
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
    FUN_0049a432((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 2);
  }
  *param_2 = **(undefined2 **)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 2;
  return param_1;
}


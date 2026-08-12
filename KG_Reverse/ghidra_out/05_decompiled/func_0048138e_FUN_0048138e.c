// Function: FUN_0048138e
// Entry:    0048138e
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_0048138e(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0048138e(int param_1,undefined1 *param_2)

{
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 1U) {
    FUN_0049a432((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 1);
  }
  *param_2 = **(undefined1 **)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return param_1;
}


// Function: FUN_0048147c
// Entry:    0048147c
// Size:     50 bytes
// Conv:     unknown
// Signature: undefined FUN_0048147c(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0048147c(int param_1,undefined4 *param_2)

{
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 4U) {
    FUN_0049a432((*(int *)(param_1 + 0x24) - *(uint *)(param_1 + 0x28)) + 4);
  }
  *param_2 = **(undefined4 **)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
  return param_1;
}


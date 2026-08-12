// Function: FUN_0048131b
// Entry:    0048131b
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_0048131b(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0048131b(int param_1,undefined2 param_2)

{
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 2U) {
    FUN_0049a3b6();
  }
  **(undefined2 **)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 2;
  return param_1;
}


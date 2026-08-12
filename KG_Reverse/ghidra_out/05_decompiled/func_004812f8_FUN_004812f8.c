// Function: FUN_004812f8
// Entry:    004812f8
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_004812f8(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004812f8(int param_1,undefined1 param_2)

{
  if (*(uint *)(param_1 + 0x28) < *(int *)(param_1 + 0x24) + 1U) {
    FUN_0049a3b6();
  }
  **(undefined1 **)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return param_1;
}


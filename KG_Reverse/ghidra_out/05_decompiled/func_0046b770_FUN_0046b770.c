// Function: FUN_0046b770
// Entry:    0046b770
// Size:     24 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b770(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0046b770(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 8)) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  return 1;
}


// Function: FUN_0049272a
// Entry:    0049272a
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_0049272a(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049272a(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 8) <= param_2) {
    FUN_0049228c(param_2 + 1,0xffffffff);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}


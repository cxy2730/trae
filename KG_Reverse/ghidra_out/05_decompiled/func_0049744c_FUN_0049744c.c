// Function: FUN_0049744c
// Entry:    0049744c
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_0049744c(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049744c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    FUN_00494840(*(undefined4 *)(param_1 + 0x1c),param_2,param_3,param_4);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x78))(param_2,param_3,param_4);
  }
  return;
}


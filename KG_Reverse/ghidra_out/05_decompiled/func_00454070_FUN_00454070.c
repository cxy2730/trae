// Function: FUN_00454070
// Entry:    00454070
// Size:     31 bytes
// Conv:     unknown
// Signature: undefined FUN_00454070(void)
// Decompiled by Ghidra 12.1.2


void FUN_00454070(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


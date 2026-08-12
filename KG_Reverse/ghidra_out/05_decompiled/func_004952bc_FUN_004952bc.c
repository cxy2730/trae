// Function: FUN_004952bc
// Entry:    004952bc
// Size:     30 bytes
// Conv:     unknown
// Signature: undefined FUN_004952bc(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004952bc(int param_1)

{
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_00494b19();
  return;
}


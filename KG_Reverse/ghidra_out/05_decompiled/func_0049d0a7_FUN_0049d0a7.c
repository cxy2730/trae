// Function: FUN_0049d0a7
// Entry:    0049d0a7
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d0a7(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0049d0a7(int param_1)

{
  if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x10))();
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_0049afec("Settings","PreviewPages",*(int *)(param_1 + 0xb4));
  }
  return;
}


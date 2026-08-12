// Function: FUN_004975a7
// Entry:    004975a7
// Size:     27 bytes
// Conv:     unknown
// Signature: undefined FUN_004975a7(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004975a7(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    IsWindowEnabled(*(HWND *)(param_1 + 0x1c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004975bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xa4))();
  return;
}


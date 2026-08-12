// Function: FUN_00497418
// Entry:    00497418
// Size:     26 bytes
// Conv:     unknown
// Signature: undefined FUN_00497418(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00497418(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowLongA(*(HWND *)(param_1 + 0x1c),-0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0049742f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x70))();
  return;
}


// Function: FUN_004975e9
// Entry:    004975e9
// Size:     33 bytes
// Conv:     unknown
// Signature: undefined FUN_004975e9(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004975e9(int param_1)

{
  HWND pHVar1;
  
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    pHVar1 = SetFocus(*(HWND *)(param_1 + 0x1c));
    FUN_00494bb2(pHVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00497604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xac))();
  return;
}


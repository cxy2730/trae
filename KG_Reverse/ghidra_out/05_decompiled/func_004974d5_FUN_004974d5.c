// Function: FUN_004974d5
// Entry:    004974d5
// Size:     27 bytes
// Conv:     unknown
// Signature: undefined FUN_004974d5(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004974d5(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetDlgCtrlID(*(HWND *)(param_1 + 0x1c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004974ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x90))();
  return;
}


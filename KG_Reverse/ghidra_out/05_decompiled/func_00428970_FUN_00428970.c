// Function: FUN_00428970
// Entry:    00428970
// Size:     15 bytes
// Conv:     unknown
// Signature: undefined FUN_00428970(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00428970(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc) == (int *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0042897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x5c))();
  return uVar1;
}


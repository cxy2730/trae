// Function: FUN_00427960
// Entry:    00427960
// Size:     15 bytes
// Conv:     unknown
// Signature: undefined FUN_00427960(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00427960(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00427969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
    return uVar1;
  }
  return 0;
}


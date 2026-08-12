// Function: FUN_004279e0
// Entry:    004279e0
// Size:     15 bytes
// Conv:     unknown
// Signature: undefined FUN_004279e0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_004279e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004279e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    return uVar1;
  }
  return 0;
}


// Function: FUN_0040fe90
// Entry:    0040fe90
// Size:     23 bytes
// Conv:     unknown
// Signature: undefined FUN_0040fe90(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040fe90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_02f95644;
  if ((param_1[1] == 0) && ((code *)param_1[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0040fea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[3])();
    return;
  }
  return;
}


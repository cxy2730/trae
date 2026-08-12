// Function: FUN_004272f0
// Entry:    004272f0
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_004272f0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004272f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_02f9623c;
  if ((HMODULE)param_1[2] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[2]);
  }
  if (param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00427310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Ordinal_116();
    return;
  }
  return;
}


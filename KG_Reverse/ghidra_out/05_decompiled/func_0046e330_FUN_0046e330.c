// Function: FUN_0046e330
// Entry:    0046e330
// Size:     31 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e330(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046e330(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_02f99fa4;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  *param_1 = &PTR_LAB_02f99fbc;
  return;
}


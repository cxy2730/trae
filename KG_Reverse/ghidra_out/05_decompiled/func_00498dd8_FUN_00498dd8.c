// Function: FUN_00498dd8
// Entry:    00498dd8
// Size:     14 bytes
// Conv:     unknown
// Signature: undefined FUN_00498dd8(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00498dd8(undefined4 *param_1)

{
  if ((HGLOBAL)*param_1 != (HGLOBAL)0x0) {
    GlobalFree((HGLOBAL)*param_1);
  }
  return;
}


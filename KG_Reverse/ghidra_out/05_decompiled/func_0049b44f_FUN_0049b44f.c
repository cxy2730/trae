// Function: FUN_0049b44f
// Entry:    0049b44f
// Size:     21 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b44f(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0049b44f(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_02f9bdc4;
  if ((HGDIOBJ)param_1[1] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[1]);
  }
  return;
}


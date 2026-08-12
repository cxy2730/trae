// Function: FUN_0049a7ac
// Entry:    0049a7ac
// Size:     25 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a7ac(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049a7ac(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}


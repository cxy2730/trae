// Function: FUN_00422eb0
// Entry:    00422eb0
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_00422eb0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00422eb0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((HGDIOBJ)param_1[5] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)param_1[5]);
    }
    param_1[1] = 0;
    *param_1 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


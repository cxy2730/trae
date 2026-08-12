// Function: FUN_004887d1
// Entry:    004887d1
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_004887d1(void)
// Decompiled by Ghidra 12.1.2


void FUN_004887d1(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_004843ad();
    *puVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    puVar1 = (undefined4 *)FUN_004843ad();
    *puVar1 = 0x22;
    return;
  }
  return;
}


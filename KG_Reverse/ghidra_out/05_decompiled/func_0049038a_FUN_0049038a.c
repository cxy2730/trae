// Function: FUN_0049038a
// Entry:    0049038a
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_0049038a(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049038a(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


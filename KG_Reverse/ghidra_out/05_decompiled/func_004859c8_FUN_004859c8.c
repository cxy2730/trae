// Function: FUN_004859c8
// Entry:    004859c8
// Size:     23 bytes
// Conv:     unknown
// Signature: undefined FUN_004859c8(void)
// Decompiled by Ghidra 12.1.2


byte * FUN_004859c8(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 1;
  if ((*(byte *)((int)&DAT_030150e0 + *param_1 + 1) & 4) != 0) {
    pbVar1 = param_1 + 2;
  }
  return pbVar1;
}


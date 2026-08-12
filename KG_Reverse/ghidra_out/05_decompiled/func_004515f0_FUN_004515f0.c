// Function: FUN_004515f0
// Entry:    004515f0
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_004515f0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004515f0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x700000;
    return;
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xff8fffff;
  return;
}


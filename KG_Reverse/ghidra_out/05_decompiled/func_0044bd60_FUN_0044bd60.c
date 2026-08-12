// Function: FUN_0044bd60
// Entry:    0044bd60
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_0044bd60(void)
// Decompiled by Ghidra 12.1.2


int FUN_0044bd60(int param_1,int param_2,int param_3)

{
  if ((param_2 == -1) || (param_2 == -100000)) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x1000;
    param_2 = (-(uint)(param_3 != 0) & 0x2a9d1) + 0xb18f;
  }
  else if ((param_2 == -2) || (param_2 == -50000)) {
    return (-(uint)(param_3 != 0) & 0x14f37) + 0x10175;
  }
  return param_2;
}


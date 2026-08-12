// Function: FUN_0047cc60
// Entry:    0047cc60
// Size:     44 bytes
// Conv:     unknown
// Signature: undefined FUN_0047cc60(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047cc60(float *param_1,int param_2)

{
  float fVar1;
  
  if (0 < param_2) {
    do {
      fVar1 = *param_1;
      param_2 = param_2 + -1;
      *param_1 = param_1[0x480] + *param_1;
      param_1[0x480] = fVar1 - param_1[0x480];
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


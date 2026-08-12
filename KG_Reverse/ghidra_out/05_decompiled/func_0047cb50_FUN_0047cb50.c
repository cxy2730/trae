// Function: FUN_0047cb50
// Entry:    0047cb50
// Size:     33 bytes
// Conv:     unknown
// Signature: undefined FUN_0047cb50(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047cb50(float *param_1,int param_2,int param_3)

{
  float *pfVar1;
  
  if (0 < param_3) {
    pfVar1 = param_1;
    do {
      param_3 = param_3 + -1;
      *pfVar1 = *(float *)((param_2 - (int)param_1) + (int)pfVar1) + *pfVar1;
      pfVar1 = pfVar1 + 1;
    } while (param_3 != 0);
  }
  return;
}


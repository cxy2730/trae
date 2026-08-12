// Function: FUN_0048ba8f
// Entry:    0048ba8f
// Size:     69 bytes
// Conv:     unknown
// Signature: undefined FUN_0048ba8f(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048ba8f(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_03011174 = DAT_03011174 + 1, DAT_03011174 == 0x20)) {
    FUN_0048b976(0x10);
  }
  return;
}


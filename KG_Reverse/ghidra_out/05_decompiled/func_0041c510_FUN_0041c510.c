// Function: FUN_0041c510
// Entry:    0041c510
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c510(void)
// Decompiled by Ghidra 12.1.2


int FUN_0041c510(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_3 != 0) && (iVar1 = param_2, param_2 != 0)) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = *param_1 + param_3;
      param_1 = param_1 + 1;
    }
  }
  return iVar1;
}


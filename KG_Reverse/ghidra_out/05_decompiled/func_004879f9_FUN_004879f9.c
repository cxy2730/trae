// Function: FUN_004879f9
// Entry:    004879f9
// Size:     37 bytes
// Conv:     unknown
// Signature: undefined FUN_004879f9(void)
// Decompiled by Ghidra 12.1.2


void FUN_004879f9(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_00483180(param_1 + param_2,param_1,sVar1 + 1);
  }
  return;
}


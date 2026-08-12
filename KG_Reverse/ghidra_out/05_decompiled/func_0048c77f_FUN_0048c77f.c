// Function: FUN_0048c77f
// Entry:    0048c77f
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_0048c77f(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048c77f(char *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_0048c719((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


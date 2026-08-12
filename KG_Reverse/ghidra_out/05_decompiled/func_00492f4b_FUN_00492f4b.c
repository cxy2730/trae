// Function: FUN_00492f4b
// Entry:    00492f4b
// Size:     51 bytes
// Conv:     unknown
// Signature: undefined FUN_00492f4b(void)
// Decompiled by Ghidra 12.1.2


int * __thiscall FUN_00492f4b(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + -0xc) < 0) {
    *param_1 = (int)PTR_DAT_02fd8088;
    FUN_00493313(*param_2);
  }
  else {
    *param_1 = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + -0xc));
  }
  return param_1;
}


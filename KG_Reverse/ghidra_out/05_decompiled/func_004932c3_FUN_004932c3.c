// Function: FUN_004932c3
// Entry:    004932c3
// Size:     80 bytes
// Conv:     unknown
// Signature: undefined FUN_004932c3(void)
// Decompiled by Ghidra 12.1.2


int * __thiscall FUN_004932c3(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 != iVar2) {
    if (((*(int *)(iVar1 + -0xc) < 0) && ((undefined *)(iVar1 + -0xc) != PTR_DAT_02fd808c)) ||
       (*(int *)(iVar2 + -0xc) < 0)) {
      FUN_00493296(*(undefined4 *)(iVar2 + -8),iVar2);
    }
    else {
      FUN_0049310d();
      iVar1 = *param_2;
      *param_1 = iVar1;
      InterlockedIncrement((LONG *)(iVar1 + -0xc));
    }
  }
  return param_1;
}


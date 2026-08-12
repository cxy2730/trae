// Function: FUN_00490f33
// Entry:    00490f33
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_00490f33(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00490f33(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 <= *(int *)(*param_1 + -8)) &&
     (iVar1 = FUN_00483e40(*param_1 + param_3,param_2), iVar1 != 0)) {
    return iVar1 - *param_1;
  }
  return -1;
}


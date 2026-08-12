// Function: FUN_0049365f
// Entry:    0049365f
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_0049365f(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0049365f(int *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 < *(int *)(*param_1 + -8)) &&
     (iVar1 = FUN_004858d7(*param_1 + param_3,param_2), iVar1 != 0)) {
    return iVar1 - *param_1;
  }
  return -1;
}


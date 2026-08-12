// Function: FUN_0043f6a0
// Entry:    0043f6a0
// Size:     62 bytes
// Conv:     unknown
// Signature: undefined FUN_0043f6a0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043f6a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    FUN_0043c5a0(iVar1,param_3);
    FUN_0043c5a0(iVar1,param_2);
    *param_1 = 0;
    FUN_0043f6e0(iVar1);
    FUN_00446ac0(iVar1);
  }
  return;
}


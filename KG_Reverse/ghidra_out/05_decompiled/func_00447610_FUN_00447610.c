// Function: FUN_00447610
// Entry:    00447610
// Size:     51 bytes
// Conv:     unknown
// Signature: undefined FUN_00447610(void)
// Decompiled by Ghidra 12.1.2


void FUN_00447610(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    FUN_0043c5a0(iVar1,param_2);
    *param_1 = 0;
    FUN_00447650(iVar1);
    FUN_00446ac0(iVar1);
  }
  return;
}


// Function: FUN_004935ba
// Entry:    004935ba
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_004935ba(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_004935ba(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((1 < *(int *)(iVar1 + -0xc)) || (*(int *)(iVar1 + -4) < param_2)) {
    iVar2 = *(int *)(iVar1 + -8);
    if (param_2 < iVar2) {
      param_2 = iVar2;
    }
    FUN_00493043(param_2);
    FUN_00485580(*param_1,iVar1,iVar2 + 1);
    *(int *)(*param_1 + -8) = iVar2;
    FUN_0049313e(iVar1 + -0xc);
  }
  return *param_1;
}


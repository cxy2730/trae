// Function: FUN_00499b0c
// Entry:    00499b0c
// Size:     105 bytes
// Conv:     unknown
// Signature: undefined FUN_00499b0c(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00499b0c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  tagSIZE local_14;
  tagSIZE local_c;
  
  GetWindowExtEx(*(HDC *)(param_1 + 8),&local_14);
  GetViewportExtEx(*(HDC *)(param_1 + 8),&local_c);
  iVar1 = FUN_00485e10(local_c.cx);
  iVar2 = FUN_00485e10(local_14.cx);
  iVar1 = MulDiv(*param_2,iVar2,iVar1);
  *param_2 = iVar1;
  iVar1 = FUN_00485e10(local_c.cy);
  iVar2 = FUN_00485e10(local_14.cy);
  iVar1 = MulDiv(param_2[1],iVar2,iVar1);
  param_2[1] = iVar1;
  return;
}


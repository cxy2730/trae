// Function: FUN_0048a6a4
// Entry:    0048a6a4
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_0048a6a4(void)
// Decompiled by Ghidra 12.1.2


int FUN_0048a6a4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}


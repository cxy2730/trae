// Function: FUN_0040ee30
// Entry:    0040ee30
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_0040ee30(void)
// Decompiled by Ghidra 12.1.2


uint __thiscall FUN_0040ee30(undefined4 param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + -4);
  uVar1 = FUN_0040ee60(param_1,param_2);
  iVar2 = iVar2 + (param_2 - uVar1);
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  return uVar1 & (iVar2 < 1) - 1;
}


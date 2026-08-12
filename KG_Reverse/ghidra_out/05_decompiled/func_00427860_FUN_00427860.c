// Function: FUN_00427860
// Entry:    00427860
// Size:     80 bytes
// Conv:     unknown
// Signature: undefined FUN_00427860(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00427860(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
    if ((-1 < param_2) && (param_2 < iVar2)) {
      iVar2 = iVar2 - param_2;
      iVar1 = *param_3;
      iVar3 = iVar2;
      if (iVar1 <= iVar2) {
        iVar3 = iVar1;
      }
      if (iVar3 < 0) {
        *param_3 = 0;
        return 1;
      }
      if (iVar1 <= iVar2) {
        iVar2 = iVar1;
      }
      *param_3 = iVar2;
      return 1;
    }
  }
  return 0;
}


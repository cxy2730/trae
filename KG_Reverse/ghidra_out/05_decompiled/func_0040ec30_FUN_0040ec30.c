// Function: FUN_0040ec30
// Entry:    0040ec30
// Size:     160 bytes
// Conv:     unknown
// Signature: undefined FUN_0040ec30(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0040ec30(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_0040e670(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x10);
  }
  uVar2 = *(uint *)(param_1 + 0x18) >> 3;
  if (uVar2 == 0) {
    return 0;
  }
  if (*piVar3 == param_2) {
    if (param_3 != (int *)0x0) {
      *param_3 = piVar3[uVar2];
    }
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
      return 1;
    }
  }
  else {
    iVar1 = FUN_00406d80(piVar3,uVar2,param_2);
    if (iVar1 == -1) {
      return 0;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar1;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = piVar3[iVar1 + uVar2];
    }
  }
  return 1;
}


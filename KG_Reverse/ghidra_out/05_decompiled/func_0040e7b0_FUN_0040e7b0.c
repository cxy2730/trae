// Function: FUN_0040e7b0
// Entry:    0040e7b0
// Size:     145 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e7b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0040e7b0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = FUN_0040e670(param_2);
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(param_1 + 0x10);
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  piVar1 = piVar4 + iVar3;
  if (*piVar4 == param_2) {
    iVar2 = *piVar1;
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00406d80(piVar4,iVar3,param_2);
    if (iVar5 == -1) {
      return (undefined4 *)0x0;
    }
    iVar2 = piVar1[iVar5];
  }
  puVar6 = (undefined4 *)(iVar2 + iVar3 * 4 + (int)piVar1);
  if (param_4 != (int *)0x0) {
    *param_4 = iVar5;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *puVar6;
  }
  return puVar6 + 1;
}


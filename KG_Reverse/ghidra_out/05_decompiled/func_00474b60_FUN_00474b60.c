// Function: FUN_00474b60
// Entry:    00474b60
// Size:     139 bytes
// Conv:     unknown
// Signature: undefined FUN_00474b60(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00474b60(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar1 = *(int **)(param_1 + 0x30);
  FUN_0046bae0();
  piVar5 = (int *)0x0;
  if (*piVar1 != 0) {
    piVar5 = *(int **)(*piVar1 + 4);
  }
  FUN_0046baf0();
  iVar3 = FUN_00475430();
  if (piVar5 == (int *)0x0) {
    uVar4 = FUN_00475710(param_2,param_3);
    return uVar4;
  }
  iVar2 = *piVar5;
  if (iVar2 == iVar3) {
    return 0x1d;
  }
  if (iVar3 < iVar2) {
    iVar3 = -iVar3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14) - iVar3;
  }
  if ((uint)(iVar2 + iVar3) <= param_3) {
    return 0x1d;
  }
  uVar4 = FUN_00475710(param_2,param_3);
  return uVar4;
}


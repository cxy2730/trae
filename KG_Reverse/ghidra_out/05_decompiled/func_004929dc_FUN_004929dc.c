// Function: FUN_004929dc
// Entry:    004929dc
// Size:     36 bytes
// Conv:     unknown
// Signature: undefined FUN_004929dc(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_004929dc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = *piVar1;
  iVar3 = piVar1[2];
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  FUN_004929c3(piVar1);
  return iVar3;
}


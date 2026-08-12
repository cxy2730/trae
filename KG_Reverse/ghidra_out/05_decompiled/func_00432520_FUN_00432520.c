// Function: FUN_00432520
// Entry:    00432520
// Size:     88 bytes
// Conv:     unknown
// Signature: undefined FUN_00432520(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00432520(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    iVar4 = 1;
    iVar2 = *(int *)(iVar3 + 4);
    if (*(int *)(iVar3 + 4) != 0) {
      do {
        iVar3 = iVar2;
        iVar4 = iVar4 + 1;
        iVar2 = *(int *)(iVar3 + 4);
      } while (*(int *)(iVar3 + 4) != 0);
      if (499 < iVar4) {
        do {
          piVar1 = (int *)param_2[1];
          FUN_00492f40(param_2);
          param_2 = piVar1;
        } while (piVar1 != (int *)0x0);
        return;
      }
    }
    *(int **)(iVar3 + 4) = param_2;
    *param_2 = iVar3;
    return;
  }
  *(int **)(param_1 + 0xc) = param_2;
  *param_2 = 0;
  return;
}


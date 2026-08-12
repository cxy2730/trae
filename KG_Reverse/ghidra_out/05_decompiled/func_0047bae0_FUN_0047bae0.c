// Function: FUN_0047bae0
// Entry:    0047bae0
// Size:     191 bytes
// Conv:     unknown
// Signature: undefined FUN_0047bae0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047bae0(int *param_1,int *param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_c;
  
  iVar1 = (int)param_2;
  local_c = (int)param_1;
  iVar6 = (int)param_2 >> 1;
  if (0 < (int)param_1) {
    piVar4 = (int *)(param_4 + iVar6 * 4);
    param_2 = param_3 + (int)param_2 + -1;
    param_1 = param_3;
    do {
      if (0 < iVar6) {
        piVar2 = param_1;
        piVar3 = param_2;
        piVar5 = piVar4;
        iVar7 = iVar6;
        piVar8 = param_5;
        do {
          *(int *)((param_4 - (int)param_3) + -4 + (int)(piVar2 + 1)) = *piVar3 + *piVar2;
          *piVar5 = (*piVar2 - *piVar3) * *piVar8 >> 10;
          iVar7 = iVar7 + -1;
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + -1;
          piVar5 = piVar5 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar7 != 0);
      }
      param_2 = param_2 + iVar1;
      param_1 = param_1 + iVar1;
      piVar4 = piVar4 + iVar1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


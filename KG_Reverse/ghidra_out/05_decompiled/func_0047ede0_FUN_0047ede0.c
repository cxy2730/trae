// Function: FUN_0047ede0
// Entry:    0047ede0
// Size:     181 bytes
// Conv:     unknown
// Signature: undefined FUN_0047ede0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047ede0(float *param_1,float *param_2,float *param_3,int param_4,float *param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int local_8;
  
  iVar1 = (int)param_2;
  local_8 = (int)param_1;
  iVar7 = (int)param_2 >> 1;
  if (0 < (int)param_1) {
    pfVar4 = (float *)(param_4 + iVar7 * 4);
    param_2 = param_3 + (int)param_2 + -1;
    param_1 = param_3;
    do {
      if (0 < iVar7) {
        pfVar2 = param_1;
        pfVar3 = param_2;
        pfVar5 = pfVar4;
        iVar6 = iVar7;
        pfVar8 = param_5;
        do {
          iVar6 = iVar6 + -1;
          *(float *)((param_4 - (int)param_3) + -4 + (int)(pfVar2 + 1)) = *pfVar2 + *pfVar3;
          *pfVar5 = (*pfVar2 - *pfVar3) * *pfVar8;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 + -1;
          pfVar5 = pfVar5 + 1;
          pfVar8 = pfVar8 + 1;
        } while (iVar6 != 0);
      }
      param_2 = param_2 + iVar1;
      param_1 = param_1 + iVar1;
      pfVar4 = pfVar4 + iVar1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


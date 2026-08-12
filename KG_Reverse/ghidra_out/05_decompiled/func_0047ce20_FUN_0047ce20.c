// Function: FUN_0047ce20
// Entry:    0047ce20
// Size:     517 bytes
// Conv:     unknown
// Signature: undefined FUN_0047ce20(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047ce20(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int local_54 [21];
  
  piVar8 = param_4;
  iVar11 = (param_6 + param_4[6] * 2) * 0x200;
  if (*(int *)(param_3 + 0x1c) != 0) {
    iVar7 = 0;
    param_4 = (int *)0x3;
    do {
      iVar9 = piVar8[3];
      iVar10 = *piVar8;
      if (0 < iVar10) {
        piVar12 = local_54 + iVar7;
        for (iVar4 = iVar10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar12 = (1 << ((byte)iVar9 & 0x1f)) + -1;
          piVar12 = piVar12 + 1;
        }
        iVar7 = iVar7 + iVar10;
      }
      piVar8 = piVar8 + 1;
      param_4 = (int *)((int)param_4 + -1);
    } while (param_4 != (int *)0x0);
    piVar8 = (int *)(param_3 + 0x10);
    param_4 = (int *)0x0;
    param_5 = 0;
    do {
      iVar9 = *piVar8;
      iVar10 = (&DAT_03012918)[piVar8[7]] + (int)param_4;
      iVar7 = piVar8[7] + 1;
      if (iVar7 <= iVar9) {
        piVar12 = (int *)(param_2 + 0x5c + (param_5 + iVar7) * 4);
        do {
          fVar1 = *(float *)(&DAT_0300d45c + (local_54[iVar7] + *piVar12) * 8 + iVar11);
          fVar2 = *(float *)(iVar11 + 0x300d460 + (local_54[iVar7] + *piVar12) * 8);
          iVar4 = (&DAT_030129f8)[iVar7];
          if (0 < iVar4) {
            iVar6 = iVar10 * 4;
            iVar10 = iVar10 + iVar4 * 3;
            pfVar3 = (float *)(param_1 + iVar6);
            do {
              iVar4 = iVar4 + -1;
              pfVar3[0x480] = fVar2 * *pfVar3;
              *pfVar3 = fVar1 * *pfVar3;
              pfVar3 = pfVar3 + 3;
            } while (iVar4 != 0);
          }
          iVar7 = iVar7 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar7 <= iVar9);
      }
      param_5 = param_5 + 0xd;
      param_4 = (int *)((int)param_4 + 1);
      piVar8 = piVar8 + 1;
    } while (param_5 < 0x27);
    return;
  }
  iVar7 = *(int *)(param_3 + 0x20);
  param_4 = (int *)0x3;
  iVar9 = (&DAT_030128c0)[iVar7];
  param_5 = param_5 - iVar9;
  iVar10 = 0;
  do {
    iVar4 = piVar8[3];
    iVar6 = *piVar8;
    if (0 < iVar6) {
      piVar12 = local_54 + iVar10;
      for (iVar5 = iVar6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar12 = (1 << ((byte)iVar4 & 0x1f)) + -1;
        piVar12 = piVar12 + 1;
      }
      iVar10 = iVar10 + iVar6;
    }
    piVar8 = piVar8 + 1;
    param_4 = (int *)((int)param_4 + -1);
  } while (param_4 != (int *)0x0);
  iVar7 = iVar7 + 1;
  if (iVar7 < 0x15) {
    iVar7 = iVar7 * 4;
    do {
      iVar6 = 0;
      iVar4 = *(int *)(param_2 + iVar7) + *(int *)((int)local_54 + iVar7);
      iVar10 = *(int *)((int)&DAT_030129a0 + iVar7);
      fVar1 = *(float *)(&DAT_0300d45c + iVar4 * 8 + iVar11);
      fVar2 = *(float *)(iVar11 + 0x300d460 + iVar4 * 8);
      if (0 < iVar10) {
        pfVar3 = (float *)(param_1 + iVar9 * 4);
        do {
          param_5 = param_5 + -1;
          if (param_5 < 0) {
            return;
          }
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + 1;
          pfVar3[0x480] = fVar2 * *pfVar3;
          *pfVar3 = fVar1 * *pfVar3;
          pfVar3 = pfVar3 + 1;
        } while (iVar6 < iVar10);
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x54);
  }
  return;
}


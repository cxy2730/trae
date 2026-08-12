// Function: FUN_0047c830
// Entry:    0047c830
// Size:     792 bytes
// Conv:     unknown
// Signature: undefined FUN_0047c830(void)
// Decompiled by Ghidra 12.1.2


int FUN_0047c830(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                int param_6)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int local_10;
  int local_c;
  
  iVar11 = (int)param_1;
  if (param_4 == (float *)0x2) {
    param_4 = (float *)0x0;
  }
  iVar10 = ((int)param_5 + 0x11) / 0x12;
  iVar6 = 0;
  if (0 < iVar10) {
    param_1 = param_3;
    pfVar4 = param_2;
    local_c = iVar10;
    do {
      FUN_004809c0(iVar11);
      local_10 = 9;
      pfVar5 = (float *)(iVar11 + 0x24);
      pfVar3 = param_1;
      pfVar7 = (float *)(&DAT_030116a4 + (int)param_4 * 0x24);
      param_5 = (float *)(iVar11 + 0x44);
      do {
        fVar1 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        *pfVar3 = pfVar7[-9] * fVar1 + *pfVar3;
        local_10 = local_10 + -1;
        pfVar3[0x120] = *param_5 * *pfVar7 + pfVar3[0x120];
        pfVar3 = pfVar3 + 0x20;
        pfVar7 = pfVar7 + 1;
        param_5 = param_5 + -1;
      } while (local_10 != 0);
      local_10 = 4;
      pfVar5 = pfVar4;
      pfVar3 = pfVar4 + 8;
      pfVar7 = (float *)(&DAT_030116ec + (int)param_4 * 0x24);
      pfVar9 = (float *)(&DAT_0301170c + (int)param_4 * 0x24);
      do {
        fVar1 = *(float *)((int)pfVar5 + (iVar11 - (int)pfVar4));
        fVar2 = *(float *)((int)pfVar3 + (iVar11 - (int)pfVar4));
        local_10 = local_10 + -1;
        *pfVar5 = fVar2 * pfVar7[-9] + *pfVar5;
        *pfVar3 = fVar1 * pfVar9[-9] + *pfVar3;
        pfVar5[9] = fVar1 * *pfVar7 + pfVar5[9];
        pfVar3[9] = fVar2 * *pfVar9 + pfVar3[9];
        pfVar5 = pfVar5 + 1;
        pfVar3 = pfVar3 + -1;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + -1;
      } while (local_10 != 0);
      fVar1 = *(float *)(iVar11 + 0x10);
      iVar11 = iVar11 + 0x48;
      param_2 = pfVar4 + 0x12;
      param_1 = param_1 + 1;
      pfVar4[4] = fVar1 * *(float *)(&DAT_030116d8 + (int)param_4 * 0x90) + pfVar4[4];
      local_c = local_c + -1;
      pfVar4[0xd] = fVar1 * *(float *)(&DAT_030116fc + (int)param_4 * 0x90) + pfVar4[0xd];
      iVar6 = iVar10;
      pfVar4 = param_2;
    } while (local_c != 0);
  }
  iVar10 = (param_6 + 0x11) / 0x12;
  if (iVar6 < iVar10) {
    param_1 = (float *)((int)&DAT_030117a0 - (int)param_2);
    param_5 = (float *)(iVar10 - iVar6);
    iVar10 = (int)&DAT_030117a0 - iVar11;
    param_4 = param_3 + iVar6 + 0x120;
    iVar6 = iVar6 + (int)param_5;
    do {
      FUN_00480e60(iVar11);
      iVar8 = 3;
      pfVar4 = (float *)(iVar11 + 0x24);
      pfVar5 = param_4;
      pfVar3 = (float *)(iVar11 + 8);
      do {
        pfVar7 = pfVar4 + 1;
        iVar8 = iVar8 + -1;
        pfVar5[-0x60] = pfVar4[-6] * *(float *)(iVar10 + -0x24 + (int)pfVar4) + pfVar5[-0x60];
        *pfVar5 = pfVar3[3] * *(float *)(iVar10 + -0x1c + (int)pfVar7) + *pfVar5;
        pfVar5[0x60] = *(float *)(iVar10 + -0x28 + (int)pfVar7) * *pfVar4 +
                       *(float *)(iVar10 + -0x10 + (int)pfVar7) * *pfVar3 + pfVar5[0x60];
        pfVar5[0xc0] = pfVar3[9] * *(float *)(iVar10 + -0x1c + (int)pfVar7) +
                       *(float *)(iVar10 + -4 + (int)pfVar7) * pfVar4[-9] + pfVar5[0xc0];
        pfVar4 = pfVar7;
        pfVar5 = pfVar5 + 0x20;
        pfVar3 = pfVar3 + -1;
      } while (iVar8 != 0);
      iVar8 = 3;
      pfVar4 = (float *)(iVar11 + 0x18);
      pfVar5 = param_2;
      pfVar3 = (float *)(iVar11 + 0x44);
      do {
        iVar8 = iVar8 + -1;
        *pfVar5 = *(float *)((int)pfVar4 + iVar10 + -0x18) * pfVar4[9] +
                  *(float *)((int)pfVar4 + iVar10) * pfVar3[-9] + *pfVar5;
        pfVar5[3] = *(float *)((int)pfVar4 + iVar10 + -0xc) * *pfVar3 +
                    *(float *)(iVar10 + 8 + (int)(pfVar4 + 1)) * *pfVar4 + pfVar5[3];
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
        pfVar3 = pfVar3 + -1;
      } while (iVar8 != 0);
      pfVar4 = (float *)(iVar11 + 0x38);
      param_3 = (float *)0x3;
      pfVar5 = param_2 + 9;
      pfVar3 = (float *)(iVar11 + 0x30);
      do {
        fVar1 = *pfVar4;
        pfVar4 = pfVar4 + -1;
        pfVar5[-3] = *(float *)((int)param_1 + -0xc + (int)pfVar5) * fVar1 + pfVar5[-3];
        param_3 = (float *)((int)param_3 + -1);
        *pfVar5 = *(float *)((int)param_1 + -4 + (int)(pfVar5 + 1)) * *pfVar3 + *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar3 = pfVar3 + 1;
      } while (param_3 != (float *)0x0);
      param_1 = (float *)((int)param_1 + -0x48);
      iVar11 = iVar11 + 0x48;
      iVar10 = iVar10 + -0x48;
      param_2 = param_2 + 0x12;
      param_4 = param_4 + 1;
      param_5 = (float *)((int)param_5 + -1);
    } while (param_5 != (float *)0x0);
  }
  return iVar6 * 0x12;
}


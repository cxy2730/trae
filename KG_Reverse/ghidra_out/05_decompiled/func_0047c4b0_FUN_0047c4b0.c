// Function: FUN_0047c4b0
// Entry:    0047c4b0
// Size:     888 bytes
// Conv:     unknown
// Signature: undefined FUN_0047c4b0(void)
// Decompiled by Ghidra 12.1.2


int FUN_0047c4b0(float *param_1,float *param_2,float *param_3,float *param_4,int param_5,int param_6
                ,int param_7)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int local_14;
  int local_c;
  
  pfVar6 = param_2;
  if (param_4 == (float *)0x2) {
    param_4 = (float *)0x0;
  }
  iVar11 = (param_5 + 0x11) / 0x12;
  iVar9 = 0;
  pfVar3 = param_1;
  if (0 < iVar11) {
    param_2 = param_3;
    local_c = iVar11;
    do {
      FUN_004809c0(param_1);
      local_14 = 9;
      pfVar3 = pfVar6 + 9;
      pfVar5 = (float *)(&DAT_030116a4 + (int)param_4 * 0x24);
      pfVar7 = param_1 + 0x11;
      pfVar10 = param_2;
      do {
        local_14 = local_14 + -1;
        *pfVar10 = *(float *)(((int)param_1 - (int)pfVar6) + (int)pfVar3) * pfVar5[-9] + pfVar3[-9];
        pfVar10[0x120] = *pfVar5 * *pfVar7 + *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar5 = pfVar5 + 1;
        pfVar7 = pfVar7 + -1;
        pfVar10 = pfVar10 + 0x20;
      } while (local_14 != 0);
      iVar9 = 4;
      pfVar3 = param_1;
      pfVar5 = (float *)(&DAT_0301170c + (int)param_4 * 0x24);
      pfVar7 = param_1 + 8;
      pfVar10 = (float *)(&DAT_030116ec + (int)param_4 * 0x24);
      do {
        fVar2 = *pfVar7;
        fVar1 = *pfVar3;
        iVar9 = iVar9 + -1;
        *pfVar3 = fVar2 * pfVar10[-9];
        *pfVar7 = fVar1 * pfVar5[-9];
        pfVar3[9] = fVar1 * *pfVar10;
        pfVar7[9] = fVar2 * *pfVar5;
        pfVar3 = pfVar3 + 1;
        pfVar5 = pfVar5 + -1;
        pfVar7 = pfVar7 + -1;
        pfVar10 = pfVar10 + 1;
      } while (iVar9 != 0);
      fVar1 = param_1[4];
      pfVar3 = param_1 + 0x12;
      pfVar6 = pfVar6 + 0x12;
      param_2 = param_2 + 1;
      param_1[4] = fVar1 * *(float *)(&DAT_030116d8 + (int)param_4 * 0x90);
      local_c = local_c + -1;
      param_1[0xd] = fVar1 * *(float *)(&DAT_030116fc + (int)param_4 * 0x90);
      iVar9 = iVar11;
      param_1 = pfVar3;
    } while (local_c != 0);
  }
  param_6 = (param_6 + 0x11) / 0x12;
  if (iVar9 < param_6) {
    param_6 = param_6 - iVar9;
    iVar11 = (int)&DAT_030117a0 - (int)pfVar3;
    param_4 = param_3 + iVar9 + 0xc0;
    iVar9 = iVar9 + param_6;
    param_1 = pfVar6;
    do {
      FUN_00480e60(pfVar3);
      param_2 = (float *)0x3;
      pfVar6 = pfVar3 + 3;
      pfVar5 = param_4;
      pfVar7 = param_1 + 9;
      pfVar10 = pfVar3 + 2;
      do {
        pfVar5[-0xc0] = pfVar7[-9];
        pfVar4 = pfVar6 + 1;
        pfVar5[-0x60] = *(float *)((int)pfVar6 + ((int)param_1 - (int)pfVar3));
        param_2 = (float *)((int)param_2 + -1);
        *pfVar5 = *pfVar6 * *(float *)(iVar11 + -0x10 + (int)pfVar4) + pfVar7[-3];
        pfVar5[0x60] = pfVar10[3] * *(float *)(iVar11 + -4 + (int)pfVar4) + *pfVar7;
        pfVar5[0xc0] = pfVar6[6] * *(float *)(iVar11 + -0x10 + (int)pfVar4) +
                       *(float *)(iVar11 + 8 + (int)pfVar4) * *pfVar10 + pfVar7[3];
        pfVar5[0x120] =
             pfVar10[9] * *(float *)(iVar11 + -4 + (int)pfVar4) +
             *(float *)(iVar11 + 0x14 + (int)pfVar4) * pfVar6[-3] + pfVar7[6];
        pfVar6 = pfVar4;
        pfVar5 = pfVar5 + 0x20;
        pfVar7 = pfVar7 + 1;
        pfVar10 = pfVar10 + -1;
      } while (param_2 != (float *)0x0);
      iVar8 = 3;
      pfVar6 = pfVar3 + 6;
      pfVar5 = pfVar3 + 0x11;
      do {
        pfVar7 = pfVar6 + 1;
        iVar8 = iVar8 + -1;
        pfVar6[-6] = *(float *)(iVar11 + (int)pfVar6) * pfVar5[-9] +
                     *(float *)(iVar11 + -0x18 + (int)pfVar6) * pfVar6[9];
        pfVar6[-3] = *(float *)(iVar11 + 8 + (int)pfVar7) * *pfVar6 +
                     *(float *)(iVar11 + -0x10 + (int)pfVar7) * *pfVar5;
        pfVar6 = pfVar7;
        pfVar5 = pfVar5 + -1;
      } while (iVar8 != 0);
      pfVar6 = pfVar3 + 0xe;
      iVar8 = 3;
      pfVar5 = pfVar3 + 0xc;
      do {
        fVar1 = *pfVar6;
        pfVar6 = pfVar6 + -1;
        iVar8 = iVar8 + -1;
        pfVar5[-6] = *(float *)((int)pfVar5 + iVar11 + -0x18) * fVar1;
        pfVar5[-3] = *(float *)(iVar11 + -0x10 + (int)(pfVar5 + 1)) * *pfVar5;
        pfVar5 = pfVar5 + 1;
      } while (iVar8 != 0);
      pfVar6 = pfVar3 + 0xf;
      iVar8 = 3;
      do {
        pfVar6[-3] = 0.0;
        *pfVar6 = 0.0;
        pfVar6 = pfVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      pfVar3 = pfVar3 + 0x12;
      iVar11 = iVar11 + -0x48;
      pfVar6 = param_1 + 0x12;
      param_4 = param_4 + 1;
      param_6 = param_6 + -1;
      param_1 = pfVar6;
    } while (param_6 != 0);
  }
  iVar11 = (param_7 + 0x11) / 0x12;
  if (iVar9 < iVar11) {
    iVar11 = iVar11 - iVar9;
    pfVar3 = param_3 + iVar9;
    iVar9 = iVar9 + iVar11;
    do {
      iVar8 = 0x12;
      pfVar5 = pfVar3;
      do {
        fVar1 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        *pfVar5 = fVar1;
        pfVar5 = pfVar5 + 0x20;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      pfVar3 = pfVar3 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = iVar9 * 0x12;
  if (iVar9 < DAT_02fd36c8) {
    param_3 = param_3 + iVar9;
    do {
      iVar8 = 0x12;
      pfVar6 = param_3;
      do {
        *pfVar6 = 0.0;
        pfVar6 = pfVar6 + 0x20;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar9 = iVar9 + 1;
      param_3 = param_3 + 1;
    } while (iVar9 < DAT_02fd36c8);
  }
  return iVar11;
}


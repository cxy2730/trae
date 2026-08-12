// Function: FUN_00480e60
// Entry:    00480e60
// Size:     297 bytes
// Conv:     unknown
// Signature: undefined FUN_00480e60(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480e60(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float local_44 [2];
  float local_3c [15];
  
  iVar9 = 3;
  pfVar7 = local_44;
  pfVar8 = param_1;
  do {
    fVar1 = *pfVar8;
    fVar2 = pfVar8[0xf];
    iVar9 = iVar9 + -1;
    pfVar7[-1] = _DAT_03011454 * fVar2 + _DAT_03011440 * fVar1;
    pfVar7[2] = (_DAT_03011440 * fVar1 - _DAT_03011454 * fVar2) * _DAT_03011460;
    fVar1 = pfVar8[3];
    fVar2 = pfVar8[0xc];
    *pfVar7 = _DAT_03011450 * fVar2 + _DAT_03011444 * fVar1;
    pfVar7[3] = (_DAT_03011444 * fVar1 - _DAT_03011450 * fVar2) * _DAT_03011464;
    fVar1 = pfVar8[6];
    fVar2 = pfVar8[9];
    pfVar7[1] = _DAT_0301144c * fVar2 + _DAT_03011448 * fVar1;
    pfVar7[4] = (_DAT_03011448 * fVar1 - _DAT_0301144c * fVar2) * _DAT_03011468;
    pfVar7 = pfVar7 + 6;
    pfVar8 = pfVar8 + 1;
  } while (iVar9 != 0);
  iVar9 = 3;
  pfVar7 = local_3c;
  do {
    fVar1 = pfVar7[-1];
    fVar2 = pfVar7[-3];
    fVar3 = pfVar7[2];
    fVar4 = *pfVar7;
    fVar5 = fVar1 + fVar2 + pfVar7[-2];
    iVar9 = iVar9 + -1;
    *param_1 = fVar5;
    fVar6 = fVar3 + fVar4 + pfVar7[1];
    param_1[1] = fVar6;
    param_1[2] = (pfVar7[-3] - pfVar7[-1]) * _DAT_030115b0;
    param_1[3] = (*pfVar7 - pfVar7[2]) * _DAT_030115b0 - fVar6;
    fVar6 = fVar6 - fVar5;
    param_1[1] = fVar6;
    fVar6 = param_1[2] - fVar6;
    param_1[2] = fVar6;
    param_1[5] = (((fVar3 + fVar4) - pfVar7[1]) - pfVar7[1]) - param_1[3];
    fVar6 = param_1[3] - fVar6;
    param_1[3] = fVar6;
    fVar6 = (((fVar1 + fVar2) - pfVar7[-2]) - pfVar7[-2]) - fVar6;
    param_1[4] = fVar6;
    param_1[5] = param_1[5] - fVar6;
    pfVar7 = pfVar7 + 6;
    param_1 = param_1 + 6;
  } while (iVar9 != 0);
  return;
}


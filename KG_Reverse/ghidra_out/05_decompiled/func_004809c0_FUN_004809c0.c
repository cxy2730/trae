// Function: FUN_004809c0
// Entry:    004809c0
// Size:     1176 bytes
// Conv:     unknown
// Signature: undefined FUN_004809c0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004809c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float local_48 [5];
  float local_34 [4];
  float local_24 [5];
  float local_10 [4];
  
  pfVar6 = param_1;
  iVar7 = 0;
  pfVar9 = param_1 + 8;
  do {
    fVar1 = *(float *)(((int)&DAT_03011480 - (int)param_1) + (int)pfVar6) * *pfVar6;
    fVar3 = pfVar9[9] * *(float *)((int)&DAT_030114c4 + iVar7);
    iVar8 = iVar7 + -4;
    fVar2 = fVar3 + fVar1;
    fVar1 = (fVar1 - fVar3) * *(float *)((0x30114dc - (int)param_1) + (int)(pfVar6 + 1));
    fVar5 = *pfVar9 * *(float *)((int)&DAT_030114a0 + iVar7);
    fVar3 = *(float *)((int)pfVar6 + ((int)&DAT_030114a4 - (int)param_1)) * pfVar6[9];
    fVar4 = fVar3 + fVar5;
    fVar3 = (fVar5 - fVar3) * *(float *)((int)&DAT_03011500 + iVar7);
    *(float *)((int)pfVar6 + ((int)local_48 - (int)param_1)) = fVar4 + fVar2;
    *(float *)((int)pfVar6 + ((int)local_34 - (int)param_1)) = fVar2 - fVar4;
    *(float *)((int)pfVar6 + ((int)local_24 - (int)param_1)) = fVar3 + fVar1;
    *(float *)((int)pfVar6 + ((int)local_10 - (int)param_1)) = fVar1 - fVar3;
    pfVar6 = pfVar6 + 1;
    iVar7 = iVar8;
    pfVar9 = pfVar9 + -1;
  } while (-0x10 < iVar8);
  fVar2 = _DAT_030114b4 * param_1[0xd] + _DAT_03011490 * param_1[4];
  fVar3 = (_DAT_03011490 * param_1[4] - _DAT_030114b4 * param_1[0xd]) * _DAT_030114f0;
  fVar4 = (fVar2 + local_48[3] + local_48[2] + local_48[1] + local_48[0]) * 0.5;
  *param_1 = fVar4;
  fVar1 = (fVar3 + local_24[3] + local_24[2] + local_24[1] + local_24[0]) * 0.5;
  param_1[1] = fVar1;
  param_1[2] = _DAT_03011530 * local_34[0] +
               _DAT_03011534 * local_34[1] +
               _DAT_03011538 * local_34[2] + _DAT_0301153c * local_34[3];
  param_1[3] = (_DAT_03011530 * local_10[0] +
               _DAT_03011534 * local_10[1] +
               _DAT_03011538 * local_10[2] + _DAT_0301153c * local_10[3]) - fVar1;
  fVar1 = fVar1 - fVar4;
  param_1[1] = fVar1;
  fVar1 = param_1[2] - fVar1;
  param_1[2] = fVar1;
  param_1[4] = (_DAT_03011540 * local_48[0] +
               _DAT_03011544 * local_48[1] +
               _DAT_03011548 * local_48[2] + _DAT_0301154c * local_48[3]) - fVar2;
  param_1[5] = ((_DAT_03011540 * local_24[0] +
                _DAT_03011544 * local_24[1] +
                _DAT_03011548 * local_24[2] + _DAT_0301154c * local_24[3]) - fVar3) - param_1[3];
  fVar1 = param_1[3] - fVar1;
  param_1[3] = fVar1;
  fVar1 = param_1[4] - fVar1;
  param_1[4] = fVar1;
  param_1[6] = ((local_34[0] - local_34[2]) - local_34[3]) * _DAT_03011550;
  param_1[7] = ((local_10[0] - local_10[2]) - local_10[3]) * _DAT_03011550 - param_1[5];
  fVar1 = param_1[5] - fVar1;
  param_1[5] = fVar1;
  fVar1 = param_1[6] - fVar1;
  param_1[6] = fVar1;
  param_1[8] = _DAT_03011560 * local_48[0] +
               _DAT_03011564 * local_48[1] +
               _DAT_03011568 * local_48[2] + _DAT_0301156c * local_48[3] + fVar2;
  param_1[9] = (_DAT_03011560 * local_24[0] +
                _DAT_03011564 * local_24[1] +
                _DAT_03011568 * local_24[2] + _DAT_0301156c * local_24[3] + fVar3) - param_1[7];
  fVar1 = param_1[7] - fVar1;
  param_1[7] = fVar1;
  fVar1 = param_1[8] - fVar1;
  param_1[8] = fVar1;
  param_1[10] = _DAT_03011570 * local_34[0] +
                _DAT_03011574 * local_34[1] +
                _DAT_03011578 * local_34[2] + _DAT_0301157c * local_34[3];
  param_1[0xb] = (_DAT_03011570 * local_10[0] +
                 _DAT_03011574 * local_10[1] +
                 _DAT_03011578 * local_10[2] + _DAT_0301157c * local_10[3]) - param_1[9];
  fVar1 = param_1[9] - fVar1;
  param_1[9] = fVar1;
  fVar1 = param_1[10] - fVar1;
  param_1[10] = fVar1;
  param_1[0xd] = (((local_24[3] + local_24[2] + local_24[0]) * 0.5 - local_24[1]) - fVar3) -
                 param_1[0xb];
  fVar1 = param_1[0xb] - fVar1;
  param_1[0xb] = fVar1;
  fVar1 = (((local_48[3] + local_48[2] + local_48[0]) * 0.5 - local_48[1]) - fVar2) - fVar1;
  param_1[0xc] = fVar1;
  param_1[0xe] = _DAT_03011590 * local_34[0] +
                 _DAT_03011594 * local_34[1] +
                 _DAT_03011598 * local_34[2] + _DAT_0301159c * local_34[3];
  param_1[0xf] = (_DAT_03011590 * local_10[0] +
                 _DAT_03011594 * local_10[1] +
                 _DAT_03011598 * local_10[2] + _DAT_0301159c * local_10[3]) - param_1[0xd];
  fVar1 = param_1[0xd] - fVar1;
  param_1[0xd] = fVar1;
  fVar1 = param_1[0xe] - fVar1;
  param_1[0xe] = fVar1;
  param_1[0x10] =
       _DAT_030115a0 * local_48[0] +
       _DAT_030115a4 * local_48[1] + _DAT_030115a8 * local_48[2] + _DAT_030115ac * local_48[3] +
       fVar2;
  param_1[0x11] =
       (_DAT_030115a0 * local_24[0] +
        _DAT_030115a4 * local_24[1] + _DAT_030115a8 * local_24[2] + _DAT_030115ac * local_24[3] +
       fVar3) - param_1[0xf];
  fVar1 = param_1[0xf] - fVar1;
  param_1[0xf] = fVar1;
  fVar1 = param_1[0x10] - fVar1;
  param_1[0x10] = fVar1;
  param_1[0x11] = param_1[0x11] - fVar1;
  return;
}


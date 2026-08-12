// Function: FUN_0047b030
// Entry:    0047b030
// Size:     529 bytes
// Conv:     unknown
// Signature: undefined FUN_0047b030(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047b030(int param_1,char param_2,byte *param_3)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint local_8;
  int local_4;
  
  iVar1 = param_1;
  bVar8 = param_2 + 0x68;
  bVar6 = param_2 + 0x58;
  piVar3 = &DAT_0300cfbc;
  local_4 = 8;
  pbVar2 = param_3;
  do {
    param_3 = pbVar2;
    _param_2 = (uint)bVar6;
    iVar10 = 3;
    iVar5 = -(*(int *)(param_1 + _param_2 * 4) * *piVar3);
    piVar3 = piVar3 + 1;
    do {
      bVar9 = bVar8;
      bVar7 = bVar6;
      piVar4 = piVar3;
      local_8 = (uint)bVar9;
      _param_2 = (uint)(byte)(bVar7 + 0x20);
      iVar5 = (iVar5 + *(int *)(param_1 + local_8 * 4) * *piVar4) -
              *(int *)(param_1 + _param_2 * 4) * piVar4[1];
      iVar10 = iVar10 + -1;
      piVar3 = piVar4 + 2;
      bVar6 = bVar7 + 0x20;
      bVar8 = bVar9 + 0x20;
    } while (iVar10 != 0);
    iVar5 = iVar5 >> 10;
    bVar8 = bVar9 - 0x3f;
    bVar6 = bVar7 + 0xbf;
    piVar3 = piVar4 + 9;
    if (iVar5 < 0x8000) {
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
    }
    else {
      iVar5 = 0x7fff;
    }
    *param_3 = (byte)((uint)iVar5 >> 8) ^ 0x80;
    local_4 = local_4 + -1;
    pbVar2 = param_3 + 2;
  } while (local_4 != 0);
  _param_2 = (uint)(byte)(bVar7 + 0x9f);
  iVar5 = 3;
  iVar10 = *(int *)(param_1 + _param_2 * 4) * *piVar3;
  piVar3 = piVar4 + 10;
  bVar6 = bVar7 + 0x9f;
  do {
    bVar8 = bVar6;
    bVar6 = bVar8 + 0x20;
    _param_2 = (uint)bVar6;
    iVar10 = iVar10 + *(int *)(param_1 + _param_2 * 4) * *piVar3;
    iVar5 = iVar5 + -1;
    piVar3 = piVar3 + 1;
  } while (iVar5 != 0);
  iVar10 = iVar10 >> 10;
  if (iVar10 < 0x8000) {
    if (iVar10 < -0x8000) {
      iVar10 = -0x8000;
    }
  }
  else {
    iVar10 = 0x7fff;
  }
  bVar9 = bVar9 + 0xa0;
  param_3[2] = (byte)((uint)iVar10 >> 8) ^ 0x80;
  param_3 = param_3 + 4;
  bVar8 = bVar8 - 0x1f;
  piVar3 = &DAT_0300d15c;
  param_1 = 7;
  do {
    local_8 = (uint)bVar9;
    iVar10 = 3;
    iVar5 = *(int *)(iVar1 + local_8 * 4) * *piVar3;
    piVar4 = piVar3 + -1;
    do {
      bVar7 = bVar9;
      bVar6 = bVar8;
      piVar3 = piVar4;
      _param_2 = (uint)bVar6;
      bVar9 = bVar7 + 0x20;
      local_8 = (uint)bVar9;
      iVar5 = iVar5 + *(int *)(iVar1 + _param_2 * 4) * *piVar3 +
              *(int *)(iVar1 + local_8 * 4) * piVar3[-1];
      iVar10 = iVar10 + -1;
      piVar4 = piVar3 + -2;
      bVar8 = bVar6 + 0x20;
    } while (iVar10 != 0);
    iVar5 = iVar5 >> 10;
    bVar9 = bVar7 + 0xbf;
    bVar8 = bVar6 - 0x3f;
    piVar3 = piVar3 + -9;
    if (iVar5 < 0x8000) {
      if (iVar5 < -0x8000) {
        iVar5 = -0x8000;
      }
    }
    else {
      iVar5 = 0x7fff;
    }
    *param_3 = (byte)((uint)iVar5 >> 8) ^ 0x80;
    param_3 = param_3 + 2;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}


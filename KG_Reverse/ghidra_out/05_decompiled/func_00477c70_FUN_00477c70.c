// Function: FUN_00477c70
// Entry:    00477c70
// Size:     719 bytes
// Conv:     unknown
// Signature: undefined FUN_00477c70(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00477c70(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  undefined4 local_4;
  
  DAT_0300b9c4 = FUN_00476c40(1);
  FUN_00476c40(2);
  iVar1 = FUN_00476c40(1);
  iVar2 = FUN_00476c40(4);
  DAT_0300bf9c = FUN_00476c40(2);
  DAT_0300b9b4 = FUN_00476c40(1);
  FUN_00476c40(1);
  DAT_0300be60 = FUN_00476c40(2);
  DAT_0300be64 = FUN_00476c40(2);
  if (DAT_0300be60 != 1) {
    DAT_0300be64 = 0;
  }
  DAT_030090a4 = DAT_0300be64 & 1;
  DAT_0300b9c0 = (int)DAT_0300be64 >> 1;
  DAT_0300b0b0 = 0;
  if (iVar1 == 0) {
    FUN_00476c40(0x14);
    DAT_0300b0b0 = 2;
  }
  else {
    FUN_00476c40(4);
  }
  if (0 < iVar2) {
    if (DAT_030090ac == 0) {
      iVar1 = *(int *)(&DAT_02fd363c + (DAT_0300b9c4 * 0x10 + iVar2) * 4) * 0x5a0;
    }
    else {
      iVar1 = *(int *)(&DAT_02fd363c + (DAT_0300b9c4 * 0x10 + iVar2) * 4) * 0xb40;
    }
    DAT_030090a8 = iVar1 / *(int *)(&DAT_02fd361c + (DAT_0300bf9c + DAT_0300b9c4 * 4) * 4);
  }
  DAT_0300be68 = FUN_00476c40(8);
  bVar4 = DAT_0300be60 != 3;
  if (bVar4) {
    _DAT_0300be6c = FUN_00476c40(2);
    iVar1 = 2;
    DAT_0300be54 = 2;
    local_4 = 0x15;
  }
  else {
    _DAT_0300be6c = FUN_00476c40(1);
    iVar1 = 1;
    DAT_0300be54 = 1;
    local_4 = 0xd;
  }
  _DAT_0300b9b8 = (uint)bVar4;
  iVar2 = 0;
  DAT_0300be70 = 0;
  _DAT_0300be74 = 0;
  if (iVar1 != 0) {
    piVar3 = &DAT_0300be80 + param_1 * 0x24;
    do {
      iVar1 = FUN_00476c40(0xc);
      piVar3[-2] = iVar1;
      iVar1 = FUN_00476c40(9);
      piVar3[-1] = iVar1;
      iVar1 = FUN_00476c40(8);
      iVar1 = iVar1 + DAT_0300bfa0;
      bVar4 = DAT_0300b9c0 != 0;
      *piVar3 = iVar1;
      if (bVar4) {
        *piVar3 = iVar1 + -2;
      }
      iVar1 = FUN_00476c40(9);
      piVar3[1] = iVar1;
      iVar1 = FUN_00476c40(1);
      piVar3[2] = iVar1;
      if (iVar1 == 0) {
        piVar3[4] = 0;
        piVar3[3] = 0;
        iVar1 = FUN_00476c40(5);
        piVar3[5] = iVar1;
        iVar1 = FUN_00476c40(5);
        piVar3[6] = iVar1;
        iVar1 = FUN_00476c40(5);
        piVar3[7] = iVar1;
        iVar1 = FUN_00476c40(4);
        piVar3[0xb] = iVar1;
        iVar1 = FUN_00476c40(3);
        piVar3[0xc] = iVar1;
      }
      else {
        iVar1 = FUN_00476c40(2);
        piVar3[3] = iVar1;
        iVar1 = FUN_00476c40(1);
        piVar3[4] = iVar1;
        iVar1 = FUN_00476c40(5);
        piVar3[5] = iVar1;
        iVar1 = FUN_00476c40(5);
        piVar3[6] = iVar1;
        iVar1 = FUN_00476c40(3);
        piVar3[8] = iVar1;
        iVar1 = FUN_00476c40(3);
        piVar3[9] = iVar1;
        iVar1 = FUN_00476c40(3);
        piVar3[10] = iVar1;
        if (piVar3[3] == 2) {
          piVar3[0xb] = 5;
          piVar3[0xc] = 0xf;
        }
        else {
          piVar3[0xb] = 7;
          piVar3[0xc] = 0xd;
        }
      }
      piVar3[0xd] = 0;
      iVar1 = FUN_00476c40(1);
      piVar3[0xe] = iVar1;
      iVar1 = FUN_00476c40(1);
      piVar3[0xf] = iVar1;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x12;
    } while (iVar2 < DAT_0300be54);
  }
  return local_4;
}


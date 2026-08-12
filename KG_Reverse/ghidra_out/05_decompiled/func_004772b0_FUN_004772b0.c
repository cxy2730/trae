// Function: FUN_004772b0
// Entry:    004772b0
// Size:     712 bytes
// Conv:     unknown
// Signature: undefined FUN_004772b0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004772b0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  int *local_8;
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
    DAT_030090a8 = (*(int *)(&DAT_02fd363c + (DAT_0300b9c4 * 0x10 + iVar2) * 4) * 0xb40) /
                   *(int *)(&DAT_02fd361c + (DAT_0300bf9c + DAT_0300b9c4 * 4) * 4);
  }
  DAT_0300be68 = FUN_00476c40(9);
  bVar7 = DAT_0300be60 != 3;
  if (bVar7) {
    _DAT_0300be6c = FUN_00476c40(3);
    iVar1 = 2;
    DAT_0300be54 = 2;
    local_4 = 0x24;
  }
  else {
    _DAT_0300be6c = FUN_00476c40(5);
    iVar1 = 1;
    DAT_0300be54 = 1;
    local_4 = 0x15;
  }
  _DAT_0300b9b8 = (uint)bVar7;
  iVar4 = 0;
  iVar2 = 0;
  if (iVar1 != 0) {
    puVar6 = &DAT_0300be70;
    do {
      uVar3 = FUN_00476c40(4);
      *puVar6 = uVar3;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 1;
      iVar2 = DAT_0300be54;
    } while (iVar4 < DAT_0300be54);
  }
  local_8 = &DAT_0300be80;
  do {
    iVar1 = 0;
    piVar5 = local_8;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_00476c40(0xc);
        piVar5[-2] = iVar2;
        iVar2 = FUN_00476c40(9);
        piVar5[-1] = iVar2;
        iVar2 = FUN_00476c40(8);
        iVar2 = iVar2 + DAT_0300bfa0;
        bVar7 = DAT_0300b9c0 != 0;
        *piVar5 = iVar2;
        if (bVar7) {
          *piVar5 = iVar2 + -2;
        }
        iVar2 = FUN_00476c40(4);
        piVar5[1] = iVar2;
        iVar2 = FUN_00476c40(1);
        piVar5[2] = iVar2;
        if (iVar2 == 0) {
          piVar5[4] = 0;
          piVar5[3] = 0;
          iVar2 = FUN_00476c40(5);
          piVar5[5] = iVar2;
          iVar2 = FUN_00476c40(5);
          piVar5[6] = iVar2;
          iVar2 = FUN_00476c40(5);
          piVar5[7] = iVar2;
          iVar2 = FUN_00476c40(4);
          piVar5[0xb] = iVar2;
          iVar2 = FUN_00476c40(3);
          piVar5[0xc] = iVar2;
        }
        else {
          iVar2 = FUN_00476c40(2);
          piVar5[3] = iVar2;
          iVar2 = FUN_00476c40(1);
          piVar5[4] = iVar2;
          iVar2 = FUN_00476c40(5);
          piVar5[5] = iVar2;
          iVar2 = FUN_00476c40(5);
          piVar5[6] = iVar2;
          iVar2 = FUN_00476c40(3);
          piVar5[8] = iVar2;
          iVar2 = FUN_00476c40(3);
          piVar5[9] = iVar2;
          iVar2 = FUN_00476c40(3);
          piVar5[10] = iVar2;
          piVar5[0xb] = 7;
          piVar5[0xc] = 0xd;
        }
        iVar2 = FUN_00476c40(1);
        piVar5[0xd] = iVar2;
        iVar2 = FUN_00476c40(1);
        piVar5[0xe] = iVar2;
        iVar2 = FUN_00476c40(1);
        piVar5[0xf] = iVar2;
        iVar1 = iVar1 + 1;
        piVar5 = piVar5 + 0x12;
        iVar2 = DAT_0300be54;
      } while (iVar1 < DAT_0300be54);
    }
    local_8 = local_8 + 0x24;
  } while ((int)local_8 < 0x300bfa0);
  return local_4;
}


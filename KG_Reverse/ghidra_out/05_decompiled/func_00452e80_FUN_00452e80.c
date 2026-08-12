// Function: FUN_00452e80
// Entry:    00452e80
// Size:     548 bytes
// Conv:     unknown
// Signature: undefined FUN_00452e80(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00452e80(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iStack_124;
  int iStack_11c;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  undefined1 uStack_104;
  byte abStack_100 [256];
  
  puVar4 = (undefined4 *)param_1[5];
  iVar6 = puVar4[1];
  puVar9 = (undefined1 *)*puVar4;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar9 = (undefined1 *)*puVar4;
    iVar6 = puVar4[1];
  }
  iVar6 = iVar6 + -1;
  uVar1 = *puVar9;
  puVar9 = puVar9 + 1;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar9 = (undefined1 *)*puVar4;
    iVar6 = puVar4[1];
  }
  iVar6 = iVar6 + -1;
  pbVar10 = puVar9 + 1;
  iVar7 = CONCAT11(uVar1,*puVar9) - 2;
  do {
    if (iVar7 < 1) {
      *puVar4 = pbVar10;
      puVar4[1] = iVar6;
      return 1;
    }
    if (iVar6 == 0) {
      iVar6 = (*(code *)puVar4[3])(param_1);
      if (iVar6 == 0) {
        return 0;
      }
      pbVar10 = (byte *)*puVar4;
      iVar6 = puVar4[1];
    }
    bVar2 = *pbVar10;
    uVar8 = (uint)bVar2;
    iVar6 = iVar6 + -1;
    pbVar10 = pbVar10 + 1;
    (**(code **)(*param_1 + 4))(param_1,1);
    uStack_114 = uStack_114 & 0xffffff00;
    iStack_124 = 0;
    iVar11 = 1;
    do {
      if (iVar6 == 0) {
        iVar6 = (*(code *)puVar4[3])(param_1);
        if (iVar6 == 0) {
          return 0;
        }
        pbVar10 = (byte *)*puVar4;
        iVar6 = puVar4[1];
      }
      bVar3 = *pbVar10;
      iVar6 = iVar6 + -1;
      *(byte *)((int)&uStack_114 + iVar11) = bVar3;
      pbVar10 = pbVar10 + 1;
      iStack_124 = iStack_124 + (uint)bVar3;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x11);
    (**(code **)(*param_1 + 4))(param_1,2);
    (**(code **)(*param_1 + 4))(param_1,2);
    if ((0x100 < iStack_124) || (iVar7 + -0x11 < iStack_124)) {
      (**(code **)*param_1)(param_1);
    }
    iStack_11c = 0;
    if (0 < iStack_124) {
      do {
        if (iVar6 == 0) {
          iVar6 = (*(code *)puVar4[3])(param_1);
          if (iVar6 == 0) {
            return 0;
          }
          pbVar10 = (byte *)*puVar4;
          iVar6 = puVar4[1];
        }
        iVar6 = iVar6 + -1;
        abStack_100[iStack_11c] = *pbVar10;
        pbVar10 = pbVar10 + 1;
        iStack_11c = iStack_11c + 1;
      } while (iStack_11c < iStack_124);
    }
    iVar7 = (iVar7 + -0x11) - iStack_124;
    if ((bVar2 & 0x10) == 0) {
      iVar11 = uVar8 + 0x2d;
    }
    else {
      iVar11 = uVar8 + 0x21;
      uVar8 = uVar8 - 0x10;
    }
    piVar13 = param_1 + iVar11;
    if (((int)uVar8 < 0) || (3 < (int)uVar8)) {
      (**(code **)*param_1)(param_1);
    }
    if (*piVar13 == 0) {
      iVar11 = FUN_004540b0(param_1);
      *piVar13 = iVar11;
    }
    puVar5 = (uint *)*piVar13;
    *puVar5 = uStack_114;
    puVar5[1] = uStack_110;
    puVar5[2] = uStack_10c;
    puVar5[3] = uStack_108;
    *(undefined1 *)(puVar5 + 4) = uStack_104;
    pbVar12 = abStack_100;
    puVar14 = (undefined4 *)(*piVar13 + 0x11);
    for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = *(undefined4 *)pbVar12;
      pbVar12 = pbVar12 + 4;
      puVar14 = puVar14 + 1;
    }
  } while( true );
}


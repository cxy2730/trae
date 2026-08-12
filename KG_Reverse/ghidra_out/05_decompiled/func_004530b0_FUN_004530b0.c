// Function: FUN_004530b0
// Entry:    004530b0
// Size:     484 bytes
// Conv:     unknown
// Signature: undefined FUN_004530b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004530b0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int *piStack_c;
  
  puVar2 = (undefined4 *)param_1[5];
  iVar5 = puVar2[1];
  pbVar10 = (byte *)*puVar2;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar2[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar2;
    iVar5 = puVar2[1];
  }
  iVar5 = iVar5 + -1;
  bVar1 = *pbVar10;
  pbVar10 = pbVar10 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar2[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar2;
    iVar5 = puVar2[1];
  }
  iVar5 = iVar5 + -1;
  pbVar11 = pbVar10 + 1;
  iVar7 = (uint)bVar1 * 0x100 + (uint)*pbVar10 + -2;
  do {
    iVar4 = iVar7;
    if (iVar4 < 1) {
      puVar2[1] = iVar5;
      *puVar2 = pbVar11;
      return 1;
    }
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar2[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      pbVar11 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    bVar1 = *pbVar11;
    iVar5 = iVar5 + -1;
    pbVar11 = pbVar11 + 1;
    iVar6 = (int)(uint)bVar1 >> 4;
    uVar9 = bVar1 & 0xf;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (3 < uVar9) {
      (**(code **)*param_1)(param_1);
    }
    if (param_1[uVar9 + 0x29] == 0) {
      iVar7 = FUN_00454090(param_1);
      param_1[uVar9 + 0x29] = iVar7;
    }
    iVar7 = param_1[uVar9 + 0x29];
    piStack_c = (int *)&DAT_02f98d70;
    do {
      if (iVar6 == 0) {
        if (iVar5 == 0) {
          iVar5 = (*(code *)puVar2[3])(param_1);
          if (iVar5 == 0) {
            return 0;
          }
          pbVar11 = (byte *)*puVar2;
          iVar5 = puVar2[1];
        }
        uVar8 = (ushort)*pbVar11;
      }
      else {
        if (iVar5 == 0) {
          iVar5 = (*(code *)puVar2[3])(param_1);
          if (iVar5 == 0) {
            return 0;
          }
          pbVar11 = (byte *)*puVar2;
          iVar5 = puVar2[1];
        }
        iVar5 = iVar5 + -1;
        bVar1 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        if (iVar5 == 0) {
          iVar5 = (*(code *)puVar2[3])(param_1);
          if (iVar5 == 0) {
            return 0;
          }
          pbVar11 = (byte *)*puVar2;
          iVar5 = puVar2[1];
        }
        uVar8 = (ushort)bVar1 * 0x100 + (ushort)*pbVar11;
      }
      iVar5 = iVar5 + -1;
      pbVar11 = pbVar11 + 1;
      iVar3 = *piStack_c;
      piStack_c = piStack_c + 1;
      *(ushort *)(iVar7 + iVar3 * 2) = uVar8;
    } while ((int)piStack_c < 0x2f98e70);
    if (1 < *(int *)(*param_1 + 0x68)) {
      iVar7 = 8;
      do {
        (**(code **)(*param_1 + 4))(param_1,2);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = iVar4 + -0x41;
    if (iVar6 != 0) {
      iVar7 = iVar4 + -0x81;
    }
  } while( true );
}


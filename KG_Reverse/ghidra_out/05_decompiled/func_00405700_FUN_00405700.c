// Function: FUN_00405700
// Entry:    00405700
// Size:     345 bytes
// Conv:     unknown
// Signature: undefined FUN_00405700(void)
// Decompiled by Ghidra 12.1.2


void FUN_00405700(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  
  pbVar2 = (byte *)*param_3;
  uVar6 = 0xffffffff;
  pbVar11 = pbVar2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar11;
    pbVar11 = pbVar11 + 1;
  } while (bVar1 != 0);
  uVar6 = ~uVar6 - 1;
  pbVar11 = (byte *)param_3[3];
  if (param_3[8] == 0) {
    uVar4 = -(uint)(param_4 != 0) & uVar6;
  }
  else {
    uVar4 = param_3[6] - 1 & ((int)(param_3[6] - 1) < 0) - 1;
  }
  iVar3 = param_3[9];
  pbVar9 = pbVar2;
  if (param_4 == 0) {
    if ((int)uVar4 < 1) goto LAB_0040578a;
    if ((int)uVar4 < (int)uVar6) {
      pbVar9 = pbVar2 + uVar4;
      uVar6 = uVar6 - uVar4;
      goto LAB_0040578a;
    }
    param_3 = (undefined4 *)0x0;
  }
  else if ((int)uVar4 < 1) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    param_3 = (undefined4 *)uVar4;
    if ((int)uVar6 < (int)uVar4) goto LAB_0040578a;
  }
  uVar6 = (uint)param_3;
LAB_0040578a:
  param_3 = (undefined4 *)uVar6;
  uVar6 = 0xffffffff;
  pbVar8 = (byte *)0xffffffff;
  pbVar10 = pbVar11;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar1 != 0);
  iVar7 = ~uVar6 - 1;
  if (iVar7 == 0) {
    if (0 < (int)param_3) {
      *param_1 = 1;
      return;
    }
LAB_0040584b:
    *param_1 = pbVar8;
    return;
  }
  do {
    if ((int)param_3 < iVar7) {
      *param_1 = pbVar8;
      return;
    }
    if (iVar3 == 1) {
      iVar5 = FUN_00485460(pbVar9,pbVar11,iVar7);
      if (iVar5 == 0) {
joined_r0x0040580c:
        pbVar8 = pbVar9 + (1 - (int)pbVar2);
        if (param_4 == 0) {
          *param_1 = pbVar8;
          return;
        }
      }
    }
    else {
      bVar13 = true;
      iVar5 = iVar7;
      pbVar10 = pbVar9;
      pbVar12 = pbVar11;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar13 = *pbVar10 == *pbVar12;
        pbVar10 = pbVar10 + 1;
        pbVar12 = pbVar12 + 1;
      } while (bVar13);
      if (bVar13) goto joined_r0x0040580c;
    }
    if ((*pbVar9 & 0x80) != 0) {
      if (pbVar9[1] == 0) goto LAB_0040584b;
      pbVar9 = pbVar9 + 1;
      param_3 = (undefined4 *)((int)param_3 - 1);
    }
    pbVar9 = pbVar9 + 1;
    param_3 = (undefined4 *)((int)param_3 - 1);
  } while( true );
}


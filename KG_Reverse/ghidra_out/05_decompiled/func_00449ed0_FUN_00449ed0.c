// Function: FUN_00449ed0
// Entry:    00449ed0
// Size:     576 bytes
// Conv:     unknown
// Signature: undefined FUN_00449ed0(void)
// Decompiled by Ghidra 12.1.2


int FUN_00449ed0(int param_1,int param_2,uint param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar2 = param_4;
  uVar1 = param_3;
  uVar7 = *(uint *)(param_1 + 0x29c);
  uVar3 = 0xffffffff;
  if ((uVar7 != 0) && (uVar7 != 0xffffffff)) {
    uVar3 = uVar7;
  }
  uVar7 = (uint)(param_5 != 0);
  if (uVar3 < uVar7 + param_3) {
    FUN_0043cab0(param_1,0xfffffffc);
    return -4;
  }
  uVar3 = uVar3 - (uVar7 + param_3);
  if (uVar3 < *param_4) {
    *param_4 = uVar3;
  }
  iVar4 = FUN_00448940(param_1,*(undefined4 *)(param_1 + 0x11c));
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      iVar4 = -7;
    }
    return iVar4;
  }
  param_3 = param_2 - uVar1;
  iVar4 = FUN_0044a110(param_1,*(undefined4 *)(param_1 + 0x11c),1,*(int *)(param_1 + 0x2b8) + uVar1,
                       &param_3,0,puVar2);
  if (iVar4 != 1) {
    if (iVar4 == 0) {
      iVar4 = -7;
    }
    goto LAB_0044a0d1;
  }
  iVar4 = FUN_00446ee0(param_1 + 0x84);
  if (iVar4 != 0) {
    FUN_0043cab0(param_1,1);
    *(undefined4 *)(param_1 + 0x80) = 0;
    return -7;
  }
  uVar3 = *puVar2;
  iVar5 = uVar7 + uVar3 + uVar1;
  puVar6 = (undefined4 *)FUN_00446b50(param_1,iVar5);
  if (puVar6 == (undefined4 *)0x0) {
    FUN_0043cab0(param_1,0xfffffffc);
    *(undefined4 *)(param_1 + 0x80) = 0;
    return -4;
  }
  iVar4 = FUN_0044a110(param_1,*(undefined4 *)(param_1 + 0x11c),1,*(int *)(param_1 + 0x2b8) + uVar1,
                       &param_3,(undefined1 *)((int)puVar6 + uVar1),param_4);
  if (iVar4 == 1) {
    if (uVar3 == *param_4) {
      if (param_5 != 0) {
        *(undefined1 *)((int)puVar6 + uVar1 + *param_4) = 0;
      }
      if (uVar1 != 0) {
        puVar8 = *(undefined4 **)(param_1 + 0x2b8);
        puVar9 = puVar6;
        for (uVar7 = uVar1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      puVar8 = *(undefined4 **)(param_1 + 0x2b8);
      *(undefined4 **)(param_1 + 0x2b8) = puVar6;
      *(int *)(param_1 + 700) = iVar5;
      puVar6 = puVar8;
    }
    else {
LAB_0044a03f:
      iVar4 = -7;
    }
  }
  else if (iVar4 == 0) goto LAB_0044a03f;
  FUN_00446d20(param_1,puVar6);
  if ((iVar4 == 1) && (param_2 - uVar1 != param_3)) {
    FUN_004467e0(param_1,s_extra_compressed_data_02fb26c0);
    *(undefined4 *)(param_1 + 0x80) = 0;
    return 1;
  }
LAB_0044a0d1:
  *(undefined4 *)(param_1 + 0x80) = 0;
  return iVar4;
}


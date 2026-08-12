// Function: FUN_004332a0
// Entry:    004332a0
// Size:     400 bytes
// Conv:     unknown
// Signature: undefined FUN_004332a0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_004332a0(int param_1,undefined4 *param_2,int param_3,int param_4,undefined2 *param_5,
            undefined4 *param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar2 = FUN_00431c90(*param_2,param_5);
  if (iVar2 == 0) {
    sVar1 = param_5[1];
    iVar2 = FUN_00432b10(param_5,param_3);
    puVar8 = (undefined4 *)(iVar2 + 4);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xc);
    iVar3 = (sVar1 - param_3) * (iVar2 + 4);
    if (0 < iVar3) {
      FUN_00483180((undefined1 *)(iVar2 + 4 + (int)puVar8),puVar8,iVar3);
    }
    uVar7 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
    puVar9 = (undefined4 *)(param_4 + 8);
    puVar4 = puVar8;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + (int)puVar8) =
         *(undefined4 *)(param_4 + 4);
    uVar7 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
    iVar2 = sVar1 + 1;
    puVar8 = (undefined4 *)FUN_00432b30(param_5,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
    puVar9 = param_2 + 2;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puVar4 = (undefined4 *)FUN_00432b10(param_5,*(int *)(*(int *)(param_1 + 4) + 0x14) + 1);
    iVar3 = ((iVar2 - *(int *)(*(int *)(param_1 + 4) + 0x14)) + -1) *
            (*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
    uVar6 = iVar3 + 4;
    puVar9 = puVar4;
    puVar8 = param_6;
    for (uVar7 = uVar6 >> 2; puVar8 = puVar8 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 0xc);
    FUN_00406ca0((int)puVar4 - iVar5,iVar5 + uVar6);
    iVar5 = (*(int *)(*(int *)(param_1 + 4) + 8) - uVar6) + -4;
    if (0 < iVar5) {
      FUN_00406ca0((int)param_6 + iVar3 + 8,iVar5);
    }
    *param_5 = 1;
    param_5[1] = *(undefined2 *)(*(int *)(param_1 + 4) + 0x14);
    *(undefined2 *)param_6 = 1;
    *(short *)((int)param_6 + 2) = ((short)iVar2 - *(short *)(*(int *)(param_1 + 4) + 0x14)) + -1;
    iVar2 = FUN_00431e20(*param_2,param_5);
    if (iVar2 == 0) {
      FUN_00431e20(param_2[1],param_6);
    }
  }
  return;
}


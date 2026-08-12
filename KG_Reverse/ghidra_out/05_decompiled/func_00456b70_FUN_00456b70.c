// Function: FUN_00456b70
// Entry:    00456b70
// Size:     264 bytes
// Conv:     unknown
// Signature: undefined FUN_00456b70(void)
// Decompiled by Ghidra 12.1.2


void FUN_00456b70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  iVar5 = param_1;
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  *(undefined4 **)(param_1 + 0x1a8) = puVar3;
  *puVar3 = &LAB_00456c80;
  puVar3[2] = FUN_00456d00;
  puVar3[0x1c] = 0;
  if (param_2 == 0) {
    iVar5 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar9 = puVar3 + 8;
    iVar7 = 10;
    do {
      *piVar9 = iVar5;
      piVar9 = piVar9 + 1;
      iVar5 = iVar5 + 0x80;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    puVar3[4] = 0;
    puVar3[1] = &LAB_00456fb0;
    puVar3[3] = &LAB_00456d50;
    return;
  }
  piVar9 = (int *)(param_1 + 0x20);
  piVar1 = (int *)(param_1 + 0xd8);
  param_1 = 0;
  if (0 < *piVar9) {
    piVar9 = (int *)(*piVar1 + 0xc);
    puVar8 = puVar3 + 0x12;
    do {
      iVar7 = *piVar9;
      iVar6 = iVar7;
      if (*(int *)(iVar5 + 0xdc) != 0) {
        iVar6 = iVar7 * 3;
      }
      iVar2 = *(int *)(iVar5 + 4);
      uVar4 = FUN_00456370(piVar9[5],iVar7,iVar6);
      uVar4 = FUN_00456370(piVar9[4],piVar9[-1],uVar4);
      uVar4 = (**(code **)(iVar2 + 0x14))(iVar5,1,1,uVar4);
      *puVar8 = uVar4;
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 1;
      piVar9 = piVar9 + 0x15;
    } while (param_1 < *(int *)(iVar5 + 0x20));
  }
  puVar3[1] = &LAB_00456fc0;
  puVar3[3] = &LAB_004571e0;
  puVar3[4] = puVar3 + 0x12;
  return;
}


// Function: FUN_00452d30
// Entry:    00452d30
// Size:     330 bytes
// Conv:     unknown
// Signature: undefined FUN_00452d30(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00452d30(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  
  puVar2 = (undefined4 *)param_1[5];
  iVar3 = puVar2[1];
  pbVar7 = (byte *)*puVar2;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar2[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = puVar2[1];
    pbVar7 = (byte *)*puVar2;
  }
  iVar3 = iVar3 + -1;
  bVar5 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar2[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = puVar2[1];
    pbVar7 = (byte *)*puVar2;
  }
  iVar6 = (uint)bVar5 * 0x100 + (uint)*pbVar7;
  do {
    iVar6 = iVar6 + -2;
    pbVar7 = pbVar7 + 1;
    iVar3 = iVar3 + -1;
    if (iVar6 < 1) {
      *puVar2 = pbVar7;
      puVar2[1] = iVar3;
      return 1;
    }
    if (iVar3 == 0) {
      iVar3 = (*(code *)puVar2[3])(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = puVar2[1];
      pbVar7 = (byte *)*puVar2;
    }
    iVar3 = iVar3 + -1;
    bVar5 = *pbVar7;
    uVar4 = (uint)bVar5;
    pbVar7 = pbVar7 + 1;
    if (iVar3 == 0) {
      iVar3 = (*(code *)puVar2[3])(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = puVar2[1];
      pbVar7 = (byte *)*puVar2;
    }
    bVar1 = *pbVar7;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (0x1f < bVar5) {
      (**(code **)*param_1)(param_1);
    }
    if (bVar5 < 0x10) {
      *(byte *)((int)param_1 + uVar4 + 0xe4) = bVar1 & 0xf;
      bVar5 = (byte)((int)(uint)bVar1 >> 4);
      *(byte *)((int)param_1 + uVar4 + 0xf4) = bVar5;
      if (bVar5 < *(byte *)((int)param_1 + uVar4 + 0xe4)) {
        (**(code **)*param_1)(param_1);
      }
    }
    else {
      *(byte *)((int)param_1 + uVar4 + 0xf4) = bVar1;
    }
  } while( true );
}


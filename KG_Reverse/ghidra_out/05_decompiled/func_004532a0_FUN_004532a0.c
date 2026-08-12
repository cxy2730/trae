// Function: FUN_004532a0
// Entry:    004532a0
// Size:     210 bytes
// Conv:     unknown
// Signature: undefined FUN_004532a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004532a0(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  
  puVar4 = (undefined4 *)param_1[5];
  iVar5 = puVar4[1];
  puVar6 = (undefined1 *)*puVar4;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    puVar6 = (undefined1 *)*puVar4;
    iVar5 = puVar4[1];
  }
  iVar5 = iVar5 + -1;
  uVar1 = *puVar6;
  puVar6 = puVar6 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    puVar6 = (undefined1 *)*puVar4;
    iVar5 = puVar4[1];
  }
  iVar5 = iVar5 + -1;
  pbVar7 = puVar6 + 1;
  if (CONCAT11(uVar1,*puVar6) != 4) {
    (**(code **)*param_1)(param_1);
  }
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar4;
    iVar5 = puVar4[1];
  }
  iVar5 = iVar5 + -1;
  bVar2 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar4[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar4;
    iVar5 = puVar4[1];
  }
  bVar3 = *pbVar7;
  (**(code **)(*param_1 + 4))(param_1,1);
  param_1[0x45] = (uint)bVar2 * 0x100 + (uint)bVar3;
  puVar4[1] = iVar5 + -1;
  *puVar4 = pbVar7 + 1;
  return 1;
}


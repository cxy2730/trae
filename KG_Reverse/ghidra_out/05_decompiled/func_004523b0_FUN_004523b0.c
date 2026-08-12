// Function: FUN_004523b0
// Entry:    004523b0
// Size:     131 bytes
// Conv:     unknown
// Signature: undefined FUN_004523b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004523b0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  
  puVar3 = (undefined4 *)param_1[5];
  iVar4 = puVar3[1];
  pbVar5 = (byte *)*puVar3;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar5 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar5;
  pbVar5 = pbVar5 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar5 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  bVar2 = *pbVar5;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar3 = pbVar5 + 1;
  puVar3[1] = iVar4 + -1;
  (**(code **)(param_1[5] + 0x10))(param_1,(uint)bVar1 * 0x100 + (uint)bVar2 + -2);
  return 1;
}


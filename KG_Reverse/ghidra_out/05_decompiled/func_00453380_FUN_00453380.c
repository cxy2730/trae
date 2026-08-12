// Function: FUN_00453380
// Entry:    00453380
// Size:     140 bytes
// Conv:     unknown
// Signature: undefined FUN_00453380(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00453380(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  
  puVar3 = (undefined4 *)param_1[5];
  iVar4 = puVar3[1];
  pcVar5 = (char *)*puVar3;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar5 = (char *)*puVar3;
    iVar4 = puVar3[1];
  }
  iVar4 = iVar4 + -1;
  cVar1 = *pcVar5;
  pbVar6 = (byte *)(pcVar5 + 1);
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar4 = puVar3[1];
  }
  bVar2 = *pbVar6;
  if ((cVar1 != -1) || (bVar2 != 0xd8)) {
    (**(code **)*param_1)(param_1);
  }
  param_1[0x67] = (uint)bVar2;
  puVar3[1] = iVar4 + -1;
  *puVar3 = pbVar6 + 1;
  return 1;
}


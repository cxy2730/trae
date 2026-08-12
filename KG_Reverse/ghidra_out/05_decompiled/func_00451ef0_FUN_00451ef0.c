// Function: FUN_00451ef0
// Entry:    00451ef0
// Size:     258 bytes
// Conv:     unknown
// Signature: undefined FUN_00451ef0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00451ef0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  puVar2 = (undefined4 *)param_1[5];
  pbVar5 = (byte *)*puVar2;
  iVar3 = puVar2[1];
  while( true ) {
    if (iVar3 == 0) {
      iVar3 = (*(code *)puVar2[3])(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      pbVar5 = (byte *)*puVar2;
      iVar3 = puVar2[1];
    }
    bVar1 = *pbVar5;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      iVar3 = iVar3 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x6d] + 0x5c) = *(int *)(param_1[0x6d] + 0x5c) + 1;
      *puVar2 = pbVar5;
      puVar2[1] = iVar3;
      if (iVar3 == 0) {
        iVar3 = (*(code *)puVar2[3])(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar2;
        iVar3 = puVar2[1];
      }
      bVar1 = *pbVar5;
    }
    do {
      if (iVar3 == 0) {
        iVar3 = (*(code *)puVar2[3])(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar2;
        iVar3 = puVar2[1];
      }
      iVar3 = iVar3 + -1;
      uVar4 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 == 0xff);
    if (uVar4 != 0) break;
    *(int *)(param_1[0x6d] + 0x5c) = *(int *)(param_1[0x6d] + 0x5c) + 2;
    *puVar2 = pbVar5;
    puVar2[1] = iVar3;
  }
  if (*(int *)(param_1[0x6d] + 0x5c) != 0) {
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    *(undefined4 *)(param_1[0x6d] + 0x5c) = 0;
  }
  param_1[0x67] = uVar4;
  *puVar2 = pbVar5;
  puVar2[1] = iVar3;
  return 1;
}


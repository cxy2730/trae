// Function: FUN_004584b0
// Entry:    004584b0
// Size:     124 bytes
// Conv:     unknown
// Signature: undefined FUN_004584b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004584b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x1b8);
  *(int *)(*(int *)(param_1 + 0x1b4) + 0x5c) =
       *(int *)(*(int *)(param_1 + 0x1b4) + 0x5c) +
       ((int)(*(int *)(iVar1 + 0xc) + (*(int *)(iVar1 + 0xc) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1b4) + 8))(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x144)) {
    puVar4 = (undefined4 *)(iVar1 + 0x14);
    do {
      *puVar4 = 0;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x144));
  }
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  return 1;
}


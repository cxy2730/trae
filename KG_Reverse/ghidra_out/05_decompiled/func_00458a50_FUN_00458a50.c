// Function: FUN_00458a50
// Entry:    00458a50
// Size:     131 bytes
// Conv:     unknown
// Signature: undefined FUN_00458a50(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00458a50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x1b8);
  *(int *)(*(int *)(param_1 + 0x1b4) + 0x5c) =
       *(int *)(*(int *)(param_1 + 0x1b4) + 0x5c) +
       ((int)(*(int *)(iVar1 + 0xc) + (*(int *)(iVar1 + 0xc) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x1b4) + 8))(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x144)) {
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    do {
      *puVar3 = 0;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x144));
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return 1;
}


// Function: FUN_0045c3e0
// Entry:    0045c3e0
// Size:     64 bytes
// Conv:     unknown
// Signature: undefined FUN_0045c3e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045c3e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  if (0 < *(int *)(param_1 + 0x78)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c8) + 0x44);
    do {
      uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar1 * 2 + 4);
      *puVar3 = uVar2;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x78));
  }
  return;
}


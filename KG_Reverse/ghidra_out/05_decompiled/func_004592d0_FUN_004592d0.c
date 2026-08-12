// Function: FUN_004592d0
// Entry:    004592d0
// Size:     121 bytes
// Conv:     unknown
// Signature: undefined FUN_004592d0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004592d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)param_1;
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)((int)param_1 + 4))(param_1,1,0x54);
  *(undefined4 **)((int)param_1 + 0x1bc) = puVar2;
  *puVar2 = &LAB_00459350;
  iVar5 = 0;
  if (0 < *(int *)((int)param_1 + 0x20)) {
    param_1 = (undefined4 *)(*(int *)((int)param_1 + 0xd8) + 0x50);
    puVar2 = puVar2 + 0xb;
    do {
      puVar3 = (undefined4 *)(*(code *)**(undefined4 **)(iVar1 + 4))(iVar1,1,0x100);
      *param_1 = puVar3;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *puVar2 = 0xffffffff;
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 0x15;
    } while (iVar5 < *(int *)(iVar1 + 0x20));
  }
  return;
}


// Function: FUN_00458530
// Entry:    00458530
// Size:     110 bytes
// Conv:     unknown
// Signature: undefined FUN_00458530(void)
// Decompiled by Ghidra 12.1.2


void FUN_00458530(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x40);
  *(undefined4 **)(param_1 + 0x1b8) = puVar1;
  *puVar1 = &LAB_004585a0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1 = (undefined4 *)
           (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x20) << 8);
  *(undefined4 **)(param_1 + 0xa0) = puVar1;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      puVar4 = puVar1;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}


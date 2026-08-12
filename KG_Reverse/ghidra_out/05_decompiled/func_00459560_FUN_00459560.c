// Function: FUN_00459560
// Entry:    00459560
// Size:     143 bytes
// Conv:     unknown
// Signature: undefined FUN_00459560(void)
// Decompiled by Ghidra 12.1.2


void FUN_00459560(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x1ac) = puVar2;
  *puVar2 = &LAB_004595f0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x134);
    puVar2[4] = uVar3;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 4);
      uVar3 = FUN_00456370(*(undefined4 *)(param_1 + 0x74),uVar3,uVar3);
      uVar3 = (**(code **)(iVar1 + 0x10))
                        (param_1,1,0,*(int *)(param_1 + 0x78) * *(int *)(param_1 + 0x70),uVar3);
      puVar2[2] = uVar3;
      return;
    }
    uVar3 = (**(code **)(*(int *)(param_1 + 4) + 8))
                      (param_1,1,*(int *)(param_1 + 0x78) * *(int *)(param_1 + 0x70),uVar3);
    puVar2[3] = uVar3;
  }
  return;
}


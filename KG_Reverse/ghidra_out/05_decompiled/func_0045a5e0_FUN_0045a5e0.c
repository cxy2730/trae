// Function: FUN_0045a5e0
// Entry:    0045a5e0
// Size:     133 bytes
// Conv:     unknown
// Signature: undefined FUN_0045a5e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045a5e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  *(undefined4 **)(param_1 + 0x1c0) = puVar1;
  *puVar1 = &LAB_0045a730;
  puVar1[2] = 0;
  puVar1[10] = *(int *)(param_1 + 0x78) * *(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x134) == 2) {
    puVar1[1] = &LAB_0045a750;
    puVar1[3] = &LAB_0045a9c0;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,puVar1[10]);
    puVar1[8] = uVar2;
    FUN_0045a670(param_1);
    return;
  }
  puVar1[1] = FUN_0045a820;
  puVar1[3] = &LAB_0045a860;
  puVar1[8] = 0;
  FUN_0045a670(param_1);
  return;
}


// Function: FUN_00446220
// Entry:    00446220
// Size:     108 bytes
// Conv:     unknown
// Signature: undefined FUN_00446220(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446220(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x28);
    *(int *)(param_1 + 0x14) = iVar2;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1000);
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  puVar1[2] = &LAB_00446290;
  puVar1[3] = FUN_004462a0;
  puVar1[4] = FUN_00446310;
  puVar1[5] = &LAB_00451e10;
  puVar1[6] = &DAT_0045a5d0;
  puVar1[7] = param_2;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}


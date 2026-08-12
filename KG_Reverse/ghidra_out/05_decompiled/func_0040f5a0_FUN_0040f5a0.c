// Function: FUN_0040f5a0
// Entry:    0040f5a0
// Size:     215 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f5a0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040f5a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((byte)*(undefined4 *)(param_2 + 0x14) & 1) == 1) {
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a432((*(int *)(param_2 + 0x24) - *(uint *)(param_2 + 0x28)) + 4);
    }
    *(undefined4 *)(param_1 + 4) = **(undefined4 **)(param_2 + 0x24);
    iVar1 = *(int *)(param_2 + 0x24);
    iVar3 = iVar1 + 4;
    *(int *)(param_2 + 0x24) = iVar3;
    if (*(uint *)(param_2 + 0x28) < iVar1 + 8U) {
      FUN_0049a432((iVar3 - *(uint *)(param_2 + 0x28)) + 4);
    }
    *(undefined4 *)(param_1 + 8) = **(undefined4 **)(param_2 + 0x24);
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    if (*(uint *)(param_2 + 0x28) < *(int *)(param_2 + 0x24) + 4U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(param_2 + 0x24) = uVar2;
    iVar1 = *(int *)(param_2 + 0x24);
    *(int *)(param_2 + 0x24) = iVar1 + 4;
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (*(uint *)(param_2 + 0x28) < iVar1 + 8U) {
      FUN_0049a3b6();
    }
    **(undefined4 **)(param_2 + 0x24) = uVar2;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 4;
  }
  FUN_00407080(param_1 + 0xc,param_2);
  FUN_00407080(param_1 + 0x10,param_2);
  (*(code *)**(undefined4 **)(param_1 + 0x14))(param_2);
  return;
}


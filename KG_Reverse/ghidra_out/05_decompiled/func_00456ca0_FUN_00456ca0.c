// Function: FUN_00456ca0
// Entry:    00456ca0
// Size:     81 bytes
// Conv:     unknown
// Signature: undefined FUN_00456ca0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00456ca0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x144) < 2) {
    if (*(uint *)(param_1 + 0x94) < *(int *)(param_1 + 0x13c) - 1U) {
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x148) + 0xc);
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      return;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x48);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}


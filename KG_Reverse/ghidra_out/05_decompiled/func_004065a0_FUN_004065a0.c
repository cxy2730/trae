// Function: FUN_004065a0
// Entry:    004065a0
// Size:     52 bytes
// Conv:     unknown
// Signature: undefined FUN_004065a0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004065a0(int param_1,undefined4 param_2)

{
  if (3 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10))) {
    *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) = param_2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    return;
  }
  FUN_004069d0(&param_2,4);
  return;
}


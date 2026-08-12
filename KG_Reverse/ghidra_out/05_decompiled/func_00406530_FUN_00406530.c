// Function: FUN_00406530
// Entry:    00406530
// Size:     54 bytes
// Conv:     unknown
// Signature: undefined FUN_00406530(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00406530(int param_1,undefined2 param_2)

{
  if (1 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10))) {
    *(undefined2 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) = param_2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
    return;
  }
  FUN_004069d0(&param_2,2);
  return;
}


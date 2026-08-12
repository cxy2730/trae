// Function: FUN_00406570
// Entry:    00406570
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_00406570(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00406570(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) = param_2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return;
  }
  FUN_004069d0(&param_2,1);
  return;
}


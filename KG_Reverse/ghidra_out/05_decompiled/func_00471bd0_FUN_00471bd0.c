// Function: FUN_00471bd0
// Entry:    00471bd0
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_00471bd0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00471bd0(int param_1)

{
  FUN_00474020(param_1);
  *(undefined4 *)(param_1 + 8) = 8000;
  if (DAT_03006ce8 != 1) {
    *(undefined4 *)(param_1 + 0xc) = 8;
  }
  if (DAT_03006ce8 == 3) {
    *(undefined4 *)(param_1 + 0x14) = 10;
  }
  return;
}


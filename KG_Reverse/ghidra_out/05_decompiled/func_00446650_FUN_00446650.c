// Function: FUN_00446650
// Entry:    00446650
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_00446650(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446650(int param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x78) & 0x400000) != 0) {
    FUN_00446560(param_1,param_2);
    return;
  }
  FUN_004463d0(param_1,param_2);
  return;
}


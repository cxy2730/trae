// Function: FUN_00446620
// Entry:    00446620
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_00446620(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446620(int param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x78) & 0x200000) != 0) {
    FUN_00446560(param_1,param_2);
    return;
  }
  FUN_004463d0(param_1,param_2);
  return;
}


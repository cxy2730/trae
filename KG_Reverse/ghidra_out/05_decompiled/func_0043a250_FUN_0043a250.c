// Function: FUN_0043a250
// Entry:    0043a250
// Size:     37 bytes
// Conv:     unknown
// Signature: undefined FUN_0043a250(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043a250(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


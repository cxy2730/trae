// Function: FUN_00485f21
// Entry:    00485f21
// Size:     26 bytes
// Conv:     unknown
// Signature: undefined FUN_00485f21(void)
// Decompiled by Ghidra 12.1.2


void FUN_00485f21(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


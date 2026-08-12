// Function: FUN_00447770
// Entry:    00447770
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_00447770(void)
// Decompiled by Ghidra 12.1.2


void FUN_00447770(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x5c) != (code *)0x0) {
    (**(code **)(param_1 + 0x5c))(param_1,param_2,param_3);
    return;
  }
  FUN_004463d0(param_1,s_Call_to_NULL_read_function_02fb24d4);
  return;
}


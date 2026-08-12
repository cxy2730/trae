// Function: FUN_004477e0
// Entry:    004477e0
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_004477e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004477e0(int param_1,undefined4 param_2,int param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
    if (param_3 == 0) {
      *(code **)(param_1 + 0x5c) = FUN_004477a0;
    }
    else {
      *(int *)(param_1 + 0x5c) = param_3;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      FUN_00446560(param_1,s_Can_t_set_both_read_data_fn_and_w_02fb24fc);
    }
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  return;
}


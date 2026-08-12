// Function: FUN_0044b120
// Entry:    0044b120
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FUN_0044b120(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044b120(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  if ((0 < param_5) && (param_5 < 5)) {
    if (*(int *)(param_1 + 0x2cc) == 0) {
      FUN_0044b170(param_1);
    }
    (**(code **)(param_1 + 0x2c8 + param_5 * 4))(param_2,param_3,param_4);
  }
  return;
}


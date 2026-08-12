// Function: FUN_004463d0
// Entry:    004463d0
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_004463d0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004463d0(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x4c) != (code *)0x0)) {
    (**(code **)(param_1 + 0x4c))(param_1,param_2);
  }
  FUN_004468f0(param_1,param_2);
  return;
}


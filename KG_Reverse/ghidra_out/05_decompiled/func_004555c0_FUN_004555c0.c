// Function: FUN_004555c0
// Entry:    004555c0
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_004555c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004555c0(int param_1,int param_2)

{
  FUN_004547a0(param_1,param_2,0);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x28));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x24));
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}


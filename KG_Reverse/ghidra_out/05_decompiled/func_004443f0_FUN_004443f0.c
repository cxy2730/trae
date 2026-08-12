// Function: FUN_004443f0
// Entry:    004443f0
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_004443f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004443f0(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x2c))(*(undefined4 *)(param_1 + 0x60));
  (**(code **)(*param_2 + 0x30))(*(undefined4 *)(param_1 + 0x5c));
  if (param_1 == -100) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x68);
}


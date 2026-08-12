// Function: FUN_00454040
// Entry:    00454040
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_00454040(void)
// Decompiled by Ghidra 12.1.2


void FUN_00454040(int param_1)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
  *(uint *)(param_1 + 0x10) = (-(uint)(*(int *)(param_1 + 0xc) != 0) & 100) + 100;
  return;
}


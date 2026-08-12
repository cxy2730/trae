// Function: FUN_0043eea0
// Entry:    0043eea0
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_0043eea0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043eea0(int param_1,undefined4 param_2)

{
  FUN_00446400(param_1 + 0x20,0x40,0,param_2);
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
  FUN_0043edc0(param_1);
  return 0;
}


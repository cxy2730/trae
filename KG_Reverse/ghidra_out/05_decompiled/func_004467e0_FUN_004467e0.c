// Function: FUN_004467e0
// Entry:    004467e0
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_004467e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004467e0(int param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x78) & 0x100000) != 0) {
    FUN_00446780(param_1,param_2);
    return;
  }
  FUN_00446680(param_1,param_2);
  return;
}


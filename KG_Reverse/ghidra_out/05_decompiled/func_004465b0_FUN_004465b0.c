// Function: FUN_004465b0
// Entry:    004465b0
// Size:     106 bytes
// Conv:     unknown
// Signature: undefined FUN_004465b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004465b0(int param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x78) & 0x100000) == 0) {
    if (((*(uint *)(param_1 + 0x74) & 0x8000) != 0) && (*(int *)(param_1 + 0x11c) != 0)) {
      FUN_00446680(param_1,param_2);
      return;
    }
    FUN_004463d0(param_1,param_2);
    return;
  }
  if (((*(uint *)(param_1 + 0x74) & 0x8000) != 0) && (*(int *)(param_1 + 0x11c) != 0)) {
    FUN_00446780(param_1,param_2);
    return;
  }
  FUN_00446560(param_1,param_2);
  return;
}


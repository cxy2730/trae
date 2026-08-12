// Function: FUN_0044ff00
// Entry:    0044ff00
// Size:     46 bytes
// Conv:     unknown
// Signature: undefined FUN_0044ff00(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044ff00(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    FUN_0044fe60(param_1,param_2,param_3);
    if ((*(uint *)(param_1 + 0x7c) & 0x8000) != 0) {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x1000000;
    }
  }
  return;
}


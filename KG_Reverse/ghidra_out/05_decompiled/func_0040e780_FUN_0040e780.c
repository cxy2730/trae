// Function: FUN_0040e780
// Entry:    0040e780
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e780(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0040e780(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) <= param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return *(undefined4 *)(param_2 * 4);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4);
}


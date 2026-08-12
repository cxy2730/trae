// Function: FUN_0040e6c0
// Entry:    0040e6c0
// Size:     61 bytes
// Conv:     unknown
// Signature: undefined FUN_0040e6c0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040e6c0(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 8))();
  param_1[1] = *(int *)(param_2 + 4);
  param_1[6] = 0;
  if (*(int *)(param_2 + 0x18) == 0) {
    FUN_004069d0(0,0);
    return;
  }
  FUN_004069d0(*(undefined4 *)(param_2 + 0x10),*(int *)(param_2 + 0x18));
  return;
}


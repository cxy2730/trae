// Function: FUN_0044b170
// Entry:    0044b170
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_0044b170(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044b170(int param_1)

{
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_0044b1c0;
  *(undefined1 **)(param_1 + 0x2d0) = &LAB_0044b200;
  *(undefined1 **)(param_1 + 0x2d4) = &LAB_0044b230;
  if ((*(byte *)(param_1 + 0x15a) + 7 & 0xfffffff8) == 8) {
    *(undefined1 **)(param_1 + 0x2d8) = &LAB_0044b2a0;
    return;
  }
  *(code **)(param_1 + 0x2d8) = FUN_0044b340;
  return;
}


// Function: FUN_0048b920
// Entry:    0048b920
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_0048b920(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048b920(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_02fdbaf0 == param_1) {
    PTR_LOOP_02fdbaf0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_02fd9ad0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_03014ea4,0,param_1);
    return;
  }
  DAT_02fd9ae0 = 0xffffffff;
  return;
}


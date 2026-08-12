// Function: FUN_0048fa40
// Entry:    0048fa40
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_0048fa40(void)
// Decompiled by Ghidra 12.1.2


byte FUN_0048fa40(uint param_1)

{
  if (DAT_03014fc0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_03014ec0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}


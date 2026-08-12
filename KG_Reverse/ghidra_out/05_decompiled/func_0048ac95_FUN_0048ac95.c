// Function: FUN_0048ac95
// Entry:    0048ac95
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_0048ac95(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048ac95(undefined4 param_1)

{
  DAT_03014e9c = HeapAlloc(DAT_03014ea4,0,0x140);
  if (DAT_03014e9c == (LPVOID)0x0) {
    return 0;
  }
  DAT_03014e94 = 0;
  DAT_03014e98 = 0;
  DAT_03014e90 = DAT_03014e9c;
  DAT_03014ea0 = param_1;
  DAT_03014e88 = 0x10;
  return 1;
}


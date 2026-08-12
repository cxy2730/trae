// Function: FUN_004873f3
// Entry:    004873f3
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_004873f3(void)
// Decompiled by Ghidra 12.1.2


void FUN_004873f3(void)

{
  if ((DAT_03010f40 == 1) || ((DAT_03010f40 == 0 && (DAT_02fd8974 == 1)))) {
    FUN_0048742c(0xfc);
    if (DAT_0301110c != (code *)0x0) {
      (*DAT_0301110c)();
    }
    FUN_0048742c(0xff);
  }
  return;
}


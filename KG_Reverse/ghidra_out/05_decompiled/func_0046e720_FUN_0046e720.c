// Function: FUN_0046e720
// Entry:    0046e720
// Size:     102 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e720(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046e720(int param_1)

{
  byte bVar1;
  
  if (DAT_03003784 < param_1) {
    for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
      DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
      DAT_02fff1a0 = DAT_02fff1a0 + 1;
    }
  }
  bVar1 = (byte)(DAT_03003784 - param_1);
  DAT_03003784 = DAT_03003784 - param_1;
  DAT_03003474 = DAT_03003474 - ((DAT_03003474 >> (bVar1 & 0x1f)) << (bVar1 & 0x1f));
  return;
}


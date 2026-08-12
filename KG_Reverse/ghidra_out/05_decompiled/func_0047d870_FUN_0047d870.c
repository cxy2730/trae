// Function: FUN_0047d870
// Entry:    0047d870
// Size:     105 bytes
// Conv:     unknown
// Signature: undefined FUN_0047d870(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047d870(int param_1)

{
  byte bVar1;
  
  if (DAT_03012984 < param_1 + 2) {
    for (; DAT_03012984 < 0x19; DAT_03012984 = DAT_03012984 + 8) {
      DAT_03012980 = DAT_03012980 << 8 | (uint)*DAT_03012988;
      DAT_03012988 = DAT_03012988 + 1;
    }
  }
  bVar1 = (byte)(DAT_03012984 - param_1);
  DAT_03012984 = DAT_03012984 - param_1;
  DAT_03012980 = DAT_03012980 - ((DAT_03012980 >> (bVar1 & 0x1f)) << (bVar1 & 0x1f));
  return;
}


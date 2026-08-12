// Function: FUN_0047d8e0
// Entry:    0047d8e0
// Size:     88 bytes
// Conv:     unknown
// Signature: undefined FUN_0047d8e0(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0047d8e0(char param_1)

{
  if ((DAT_03012984 < 0xb) && (DAT_03012984 < 0x19)) {
    do {
      DAT_03012984 = DAT_03012984 + 8;
      DAT_03012980 = DAT_03012980 << 8 | (uint)*DAT_03012988;
      DAT_03012988 = DAT_03012988 + 1;
    } while (DAT_03012984 < 0x19);
    return DAT_03012980 >> ((char)DAT_03012984 - param_1 & 0x1fU);
  }
  return DAT_03012980 >> ((char)DAT_03012984 - param_1 & 0x1fU);
}


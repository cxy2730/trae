// Function: FUN_0041c4d0
// Entry:    0041c4d0
// Size:     59 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c4d0(void)
// Decompiled by Ghidra 12.1.2


byte FUN_0041c4d0(undefined2 param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((ushort)param_1 >> 8);
  if ((char)param_1 == -0x5f) {
    if (bVar1 == 0xab) {
      return 0x7e;
    }
    if (bVar1 == 0xa1) {
      return 0x20;
    }
    if ((bVar1 == 0xee) || (bVar1 == 0xef)) {
      return 0x2a;
    }
  }
  else if ((((char)param_1 == -0x5d) && (0xa0 < bVar1)) && (bVar1 != 0xff)) {
    return bVar1 & 0x7f;
  }
  return 0;
}


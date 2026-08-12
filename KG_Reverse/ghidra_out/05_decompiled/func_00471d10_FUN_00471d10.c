// Function: FUN_00471d10
// Entry:    00471d10
// Size:     102 bytes
// Conv:     unknown
// Signature: undefined FUN_00471d10(void)
// Decompiled by Ghidra 12.1.2


void FUN_00471d10(int param_1)

{
  byte bVar1;
  
  if (DAT_03008d74 < param_1) {
    for (; DAT_03008d74 < 0x19; DAT_03008d74 = DAT_03008d74 + 8) {
      DAT_03008b64 = DAT_03008b64 << 8 | (uint)*DAT_03006cf0;
      DAT_03006cf0 = DAT_03006cf0 + 1;
    }
  }
  bVar1 = (byte)(DAT_03008d74 - param_1);
  DAT_03008d74 = DAT_03008d74 - param_1;
  DAT_03008b64 = DAT_03008b64 - ((DAT_03008b64 >> (bVar1 & 0x1f)) << (bVar1 & 0x1f));
  return;
}


// Function: FUN_004707c0
// Entry:    004707c0
// Size:     85 bytes
// Conv:     unknown
// Signature: undefined FUN_004707c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004707c0(int param_1)

{
  int iVar1;
  byte bVar2;
  
  if (DAT_03003784 < param_1) {
    iVar1 = param_1 - DAT_03003784 >> 3;
    param_1 = (param_1 - DAT_03003784) + iVar1 * -8;
    DAT_03003474 = (uint)DAT_02fff1a0[iVar1];
    DAT_02fff1a0 = DAT_02fff1a0 + iVar1 + 1;
    DAT_03003784 = 8;
  }
  bVar2 = (byte)(DAT_03003784 - param_1);
  DAT_03003784 = DAT_03003784 - param_1;
  DAT_03003474 = DAT_03003474 - ((DAT_03003474 >> (bVar2 & 0x1f)) << (bVar2 & 0x1f));
  return;
}


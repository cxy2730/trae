// Function: FUN_00473bd0
// Entry:    00473bd0
// Size:     85 bytes
// Conv:     unknown
// Signature: undefined FUN_00473bd0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00473bd0(int param_1)

{
  int iVar1;
  byte bVar2;
  
  if (DAT_03008d74 < param_1) {
    iVar1 = param_1 - DAT_03008d74 >> 3;
    param_1 = (param_1 - DAT_03008d74) + iVar1 * -8;
    DAT_03008b64 = (uint)DAT_03006cf0[iVar1];
    DAT_03006cf0 = DAT_03006cf0 + iVar1 + 1;
    DAT_03008d74 = 8;
  }
  bVar2 = (byte)(DAT_03008d74 - param_1);
  DAT_03008d74 = DAT_03008d74 - param_1;
  DAT_03008b64 = DAT_03008b64 - ((DAT_03008b64 >> (bVar2 & 0x1f)) << (bVar2 & 0x1f));
  return;
}


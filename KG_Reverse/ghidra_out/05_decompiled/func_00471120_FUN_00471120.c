// Function: FUN_00471120
// Entry:    00471120
// Size:     183 bytes
// Conv:     unknown
// Signature: undefined FUN_00471120(void)
// Decompiled by Ghidra 12.1.2


void FUN_00471120(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_02fd2b60) {
    do {
      if ((&DAT_03003684)[iVar1] != 0) {
        if (DAT_03003784 < 6) {
          for (; DAT_03003784 < 0x19; DAT_03003784 = DAT_03003784 + 8) {
            DAT_03003474 = DAT_03003474 << 8 | (uint)*DAT_02fff1a0;
            DAT_02fff1a0 = DAT_02fff1a0 + 1;
          }
        }
        DAT_03003784 = DAT_03003784 + -6;
        DAT_03003908 = DAT_03003474 >> ((byte)DAT_03003784 & 0x1f);
        DAT_03003474 = DAT_03003474 - (DAT_03003908 << ((byte)DAT_03003784 & 0x1f));
        *(int *)(PTR_DAT_02fd2ba4 + iVar1 * 4) =
             (int)((&DAT_02fff3c0)[DAT_03003908] * (&DAT_02fff1a4)[iVar1]) >>
             ((byte)(&DAT_03003584)[iVar1] & 0x1f);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_02fd2b60);
  }
  return;
}


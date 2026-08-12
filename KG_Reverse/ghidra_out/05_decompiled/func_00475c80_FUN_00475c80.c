// Function: FUN_00475c80
// Entry:    00475c80
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_00475c80(void)
// Decompiled by Ghidra 12.1.2


void FUN_00475c80(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_02fd3618 != 0) {
    FUN_00475cd0();
    if (DAT_03009098 == 0) {
      FUN_00475d80();
    }
    else {
      FUN_00475e70();
    }
    DAT_02fd3618 = 0;
  }
  puVar2 = &DAT_030120c0;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_030118c0;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_03009094 = 0;
  return;
}


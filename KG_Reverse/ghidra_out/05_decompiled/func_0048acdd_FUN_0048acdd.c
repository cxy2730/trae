// Function: FUN_0048acdd
// Entry:    0048acdd
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_0048acdd(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0048acdd(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_03014e9c;
  while( true ) {
    if (DAT_03014e9c + DAT_03014e98 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


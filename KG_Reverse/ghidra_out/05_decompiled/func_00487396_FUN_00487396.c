// Function: FUN_00487396
// Entry:    00487396
// Size:     93 bytes
// Conv:     unknown
// Signature: undefined FUN_00487396(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00487396(int param_1)

{
  int iVar1;
  
  DAT_03014ea4 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_03014ea4 != (HANDLE)0x0) {
    DAT_03014ea8 = FUN_0048724e();
    if (DAT_03014ea8 == 3) {
      iVar1 = FUN_0048ac95(0x3f8);
    }
    else {
      if (DAT_03014ea8 != 2) {
        return 1;
      }
      iVar1 = FUN_0048b7dc();
    }
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_03014ea4);
  }
  return 0;
}


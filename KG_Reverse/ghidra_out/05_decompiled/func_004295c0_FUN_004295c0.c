// Function: FUN_004295c0
// Entry:    004295c0
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_004295c0(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_004295c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (-3 < iVar1) {
    if (1000 < iVar1) {
      return 1000;
    }
    if (-3 < iVar1) {
      if (iVar1 == 0) {
        return 100;
      }
      if ((0 < iVar1) && (iVar1 < 0x14)) {
        iVar1 = 0x14;
      }
      return iVar1;
    }
  }
  return -2;
}


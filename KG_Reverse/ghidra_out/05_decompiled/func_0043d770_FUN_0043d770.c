// Function: FUN_0043d770
// Entry:    0043d770
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_0043d770(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043d770(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043d7d0(param_1 >> 0x18);
  if (iVar1 != 0) {
    iVar1 = FUN_0043d7d0(param_1 >> 0x10 & 0xff);
    if (iVar1 != 0) {
      iVar1 = FUN_0043d7d0(param_1 >> 8 & 0xff);
      if (iVar1 != 0) {
        iVar1 = FUN_0043d7d0(param_1 & 0xff);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


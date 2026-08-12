// Function: FUN_0040ede0
// Entry:    0040ede0
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_0040ede0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0040ede0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040e650(param_1);
  if (iVar1 == 0x6000000) {
    iVar1 = FUN_0040e640(param_1);
    if (iVar1 == 0x20000000) {
      return 1;
    }
  }
  return 0;
}


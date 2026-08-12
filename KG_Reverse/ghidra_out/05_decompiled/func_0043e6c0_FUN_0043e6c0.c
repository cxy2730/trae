// Function: FUN_0043e6c0
// Entry:    0043e6c0
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_0043e6c0(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0043e6c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x158) == '\b') {
    bVar1 = FUN_0043e600(param_2,param_3);
    return (uint)bVar1;
  }
  uVar2 = FUN_0043e660(param_2,param_3);
  return uVar2;
}


// Function: FUN_0041b990
// Entry:    0041b990
// Size:     35 bytes
// Conv:     unknown
// Signature: undefined FUN_0041b990(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0041b990(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 != 0x104) && (uVar1 != 0x100)) {
    return uVar1 & 0xffff0000;
  }
  uVar1 = FUN_0041b9c0(param_1);
  return uVar1;
}


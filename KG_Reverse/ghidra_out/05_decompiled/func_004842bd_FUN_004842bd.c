// Function: FUN_004842bd
// Entry:    004842bd
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_004842bd(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004842bd(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
    FUN_00483b19(param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_00483b6b(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}


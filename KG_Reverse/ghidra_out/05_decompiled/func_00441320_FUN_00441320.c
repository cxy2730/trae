// Function: FUN_00441320
// Entry:    00441320
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_00441320(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00441320(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_00440d60(param_1,uVar1,uVar1,uVar1,uVar1,0xff,3);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return uVar1;
}


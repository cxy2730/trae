// Function: FUN_0048eaeb
// Entry:    0048eaeb
// Size:     53 bytes
// Conv:     unknown
// Signature: undefined FUN_0048eaeb(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0048eaeb(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0048eb36();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_0048ebc8(uVar1);
  return uVar1;
}


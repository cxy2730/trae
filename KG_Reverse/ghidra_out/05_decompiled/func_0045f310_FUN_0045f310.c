// Function: FUN_0045f310
// Entry:    0045f310
// Size:     31 bytes
// Conv:     unknown
// Signature: undefined FUN_0045f310(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0045f310(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar3 = param_1 & 1;
    param_1 = param_1 >> 1;
    param_2 = param_2 + -1;
    uVar1 = (uVar2 | uVar3) << 1;
  } while (0 < param_2);
  return uVar2 & 0x7fffffff | uVar3;
}


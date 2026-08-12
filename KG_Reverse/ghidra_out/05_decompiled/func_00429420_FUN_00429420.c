// Function: FUN_00429420
// Entry:    00429420
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_00429420(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00429420(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  if (param_1 != 0) {
    ppuVar2 = &PTR_DAT_02fb038c;
    do {
      iVar1 = FUN_004850c0(param_1,*ppuVar2);
      if (iVar1 == 0) {
        return 1;
      }
      ppuVar2 = ppuVar2 + 1;
    } while ((int)ppuVar2 < 0x2fb03b0);
  }
  return 0;
}


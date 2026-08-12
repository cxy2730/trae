// Function: FUN_00483bbd
// Entry:    00483bbd
// Size:     126 bytes
// Conv:     unknown
// Signature: undefined FUN_00483bbd(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00483bbd(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00485f0f();
  uVar1 = FUN_0048609f(DAT_030151f4);
  if (uVar1 < (uint)((int)DAT_030151f0 + (4 - DAT_030151f4))) {
    iVar2 = FUN_0048609f(DAT_030151f4);
    iVar2 = FUN_004848e3(DAT_030151f4,iVar2 + 0x10);
    if (iVar2 == 0) {
      param_1 = 0;
      goto LAB_00483c32;
    }
    DAT_030151f0 = (undefined4 *)(iVar2 + ((int)DAT_030151f0 - DAT_030151f4 >> 2) * 4);
    DAT_030151f4 = iVar2;
  }
  *DAT_030151f0 = param_1;
  DAT_030151f0 = DAT_030151f0 + 1;
LAB_00483c32:
  FUN_00485f18();
  return param_1;
}


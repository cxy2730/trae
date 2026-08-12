// Function: FUN_0048fb2b
// Entry:    0048fb2b
// Size:     68 bytes
// Conv:     unknown
// Signature: undefined FUN_0048fb2b(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048fb2b(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_03010f4c = _DAT_03010f4c + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}


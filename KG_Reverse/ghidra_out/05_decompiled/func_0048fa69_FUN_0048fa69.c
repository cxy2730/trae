// Function: FUN_0048fa69
// Entry:    0048fa69
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_0048fa69(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048fa69(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_03014e84);
  bVar2 = DAT_03014e80 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_03014e84);
    FUN_00489a54(0x13);
  }
  uVar1 = FUN_0048fac2(param_1,param_2);
  if (bVar2) {
    FUN_00489ab5(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_03014e84);
  }
  return uVar1;
}


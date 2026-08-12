// Function: FUN_00483c7c
// Entry:    00483c7c
// Size:     111 bytes
// Conv:     unknown
// Signature: undefined FUN_00483c7c(void)
// Decompiled by Ghidra 12.1.2


int FUN_00483c7c(int param_1)

{
  bool bVar1;
  
  if (DAT_0301119c == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_03014e84);
    bVar1 = DAT_03014e80 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_03014e84);
      FUN_00489a54(0x13);
    }
    param_1 = FUN_00483ceb(param_1);
    if (bVar1) {
      FUN_00489ab5(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_03014e84);
    }
  }
  return param_1;
}


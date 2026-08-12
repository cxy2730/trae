// Function: FUN_00484f2c
// Entry:    00484f2c
// Size:     111 bytes
// Conv:     unknown
// Signature: undefined FUN_00484f2c(void)
// Decompiled by Ghidra 12.1.2


int FUN_00484f2c(int param_1)

{
  bool bVar1;
  
  if (DAT_0301119c == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_03014e84);
    bVar1 = DAT_03014e80 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_03014e84);
      FUN_00489a54(0x13);
    }
    param_1 = FUN_00484f9b(param_1);
    if (bVar1) {
      FUN_00489ab5(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_03014e84);
    }
  }
  return param_1;
}


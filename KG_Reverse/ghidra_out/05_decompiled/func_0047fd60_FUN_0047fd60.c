// Function: FUN_0047fd60
// Entry:    0047fd60
// Size:     352 bytes
// Conv:     unknown
// Signature: undefined FUN_0047fd60(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047fd60(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  
  param_2 = 4;
  puVar1 = param_3;
  do {
    param_3 = puVar1;
    iVar2 = 8;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = __ftol();
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    *param_3 = (short)iVar2;
    param_2 = param_2 + -1;
    puVar1 = param_3 + 1;
  } while (param_2 != 0);
  iVar2 = 8;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = __ftol();
  if (iVar2 < 0x8000) {
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
  }
  else {
    iVar2 = 0x7fff;
  }
  param_2 = 3;
  param_3[1] = (short)iVar2;
  param_3 = param_3 + 2;
  do {
    iVar2 = 8;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = __ftol();
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    *param_3 = (short)iVar2;
    param_3 = param_3 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


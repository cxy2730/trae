// Function: FUN_0047f890
// Entry:    0047f890
// Size:     364 bytes
// Conv:     unknown
// Signature: undefined FUN_0047f890(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047f890(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  
  param_2 = 0x10;
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
    puVar1 = param_3 + 2;
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
  param_2 = 0xf;
  param_3[2] = (short)iVar2;
  param_3 = param_3 + 4;
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
    param_3 = param_3 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


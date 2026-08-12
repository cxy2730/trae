// Function: FUN_0047fa00
// Entry:    0047fa00
// Size:     427 bytes
// Conv:     unknown
// Signature: undefined FUN_0047fa00(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047fa00(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 8;
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
    iVar3 = iVar3 + -1;
    puVar1 = param_3 + 1;
  } while (iVar3 != 0);
  iVar3 = 8;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = __ftol();
  if (iVar3 < 0x8000) {
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
  }
  else {
    iVar3 = 0x7fff;
  }
  iVar2 = 7;
  param_3[1] = (short)iVar3;
  param_3 = param_3 + 2;
  do {
    iVar3 = 8;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = __ftol();
    if (iVar3 < 0x8000) {
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
    }
    else {
      iVar3 = 0x7fff;
    }
    *param_3 = (short)iVar3;
    param_3 = param_3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


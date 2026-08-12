// Function: FUN_004801a0
// Entry:    004801a0
// Size:     385 bytes
// Conv:     unknown
// Signature: undefined FUN_004801a0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004801a0(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  
  param_2 = 0x10;
  pbVar1 = param_3;
  do {
    param_3 = pbVar1;
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
    *param_3 = (byte)((uint)iVar2 >> 8) ^ 0x80;
    param_2 = param_2 + -1;
    pbVar1 = param_3 + 2;
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
  param_3[2] = (byte)((uint)iVar2 >> 8) ^ 0x80;
  param_3 = param_3 + 4;
  param_2 = 0xf;
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
    *param_3 = (byte)((uint)iVar2 >> 8) ^ 0x80;
    param_3 = param_3 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


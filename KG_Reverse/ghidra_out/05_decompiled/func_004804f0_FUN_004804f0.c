// Function: FUN_004804f0
// Entry:    004804f0
// Size:     448 bytes
// Conv:     unknown
// Signature: undefined FUN_004804f0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004804f0(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 8;
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
    iVar3 = iVar3 + -1;
    pbVar1 = param_3 + 2;
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
  param_3[2] = (byte)((uint)iVar3 >> 8) ^ 0x80;
  param_3 = param_3 + 4;
  iVar3 = 7;
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
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


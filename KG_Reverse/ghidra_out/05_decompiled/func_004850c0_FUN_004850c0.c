// Function: FUN_004850c0
// Entry:    004850c0
// Size:     208 bytes
// Conv:     unknown
// Signature: undefined FUN_004850c0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_004850c0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  
  iVar2 = _DAT_03014e84;
  if (DAT_0301119c == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) {
          return '\0';
        }
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
  }
  else {
    LOCK();
    _DAT_03014e84 = _DAT_03014e84 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_03014e80;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_03014e84 = iVar2;
      FUN_00489a54(0x13);
    }
    uVar7 = (uint)bVar1;
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_0048516f;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      bVar4 = FUN_00484f9b(bVar4,bVar5);
      bVar5 = FUN_00484f9b();
    } while (bVar4 == bVar5);
    cVar6 = (bVar4 < bVar5) * -2 + '\x01';
LAB_0048516f:
    if (uVar7 == 0) {
      LOCK();
      _DAT_03014e84 = _DAT_03014e84 + -1;
      UNLOCK();
    }
    else {
      FUN_00489ab5(0x13);
    }
  }
  return cVar6;
}


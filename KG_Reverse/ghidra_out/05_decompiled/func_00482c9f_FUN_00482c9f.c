// Function: FUN_00482c9f
// Entry:    00482c9f
// Size:     186 bytes
// Conv:     unknown
// Signature: undefined FUN_00482c9f(void)
// Decompiled by Ghidra 12.1.2


longlong FUN_00482c9f(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  
  while( true ) {
    if (DAT_02fd9ac0 < 2) {
      uVar1 = (byte)PTR_DAT_02fd98b4[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar1 = FUN_0048a852(*param_1,8);
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar4 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar3 = uVar1, uVar1 == 0x2b)) {
    uVar3 = (uint)*pbVar4;
    pbVar4 = param_1 + 2;
  }
  lVar5 = 0;
  while( true ) {
    if (DAT_02fd9ac0 < 2) {
      uVar2 = (byte)PTR_DAT_02fd98b4[uVar3 * 2] & 4;
    }
    else {
      uVar2 = FUN_0048a852(uVar3,4);
    }
    if (uVar2 == 0) break;
    lVar5 = __allmul(lVar5,10,0);
    lVar5 = lVar5 + (int)(uVar3 - 0x30);
    uVar3 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  if (uVar1 == 0x2d) {
    lVar5 = CONCAT44(-((int)((ulonglong)lVar5 >> 0x20) + (uint)((int)lVar5 != 0)),-(int)lVar5);
  }
  return lVar5;
}


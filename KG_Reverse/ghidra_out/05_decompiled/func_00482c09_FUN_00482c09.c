// Function: FUN_00482c09
// Entry:    00482c09
// Size:     139 bytes
// Conv:     unknown
// Signature: undefined FUN_00482c09(void)
// Decompiled by Ghidra 12.1.2


int FUN_00482c09(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
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
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_02fd9ac0 < 2) {
      uVar2 = (byte)PTR_DAT_02fd98b4[uVar4 * 2] & 4;
    }
    else {
      uVar2 = FUN_0048a852(uVar4,4);
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}


// Function: FUN_00486b07
// Entry:    00486b07
// Size:     88 bytes
// Conv:     unknown
// Signature: undefined FUN_00486b07(void)
// Decompiled by Ghidra 12.1.2


byte * FUN_00486b07(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_030151ec == 0) {
    FUN_00486973();
  }
  bVar1 = *DAT_03016204;
  pbVar4 = DAT_03016204;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_0048ea20(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_00486b44;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
LAB_00486b44:
  }
  return pbVar4;
}


// Function: FUN_00483fd4
// Entry:    00483fd4
// Size:     114 bytes
// Conv:     unknown
// Signature: undefined FUN_00483fd4(void)
// Decompiled by Ghidra 12.1.2


byte * FUN_00483fd4(byte *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = (byte *)0x0;
  if (DAT_03014fdc == 0) {
    pbVar5 = (byte *)_strrchr((char *)param_1,param_2);
  }
  else {
    FUN_00489a54(0x19);
    do {
      bVar4 = *param_1;
      if ((*(byte *)((int)&DAT_030150e0 + bVar4 + 1) & 4) == 0) {
        bVar6 = param_2 == bVar4;
LAB_0048402f:
        pbVar3 = param_1;
        if (bVar6) {
          pbVar5 = param_1;
        }
      }
      else {
        bVar1 = param_1[1];
        pbVar3 = param_1 + 1;
        if (bVar1 == 0) {
          bVar6 = pbVar5 == (byte *)0x0;
          param_1 = pbVar3;
          bVar4 = bVar1;
          goto LAB_0048402f;
        }
        uVar2 = CONCAT11(bVar4,bVar1);
        bVar4 = bVar1;
        if (param_2 == uVar2) {
          pbVar5 = param_1;
        }
      }
      param_1 = pbVar3 + 1;
    } while (bVar4 != 0);
    FUN_00489ab5(0x19);
  }
  return pbVar5;
}


// Function: FUN_00482dc4
// Entry:    00482dc4
// Size:     175 bytes
// Conv:     unknown
// Signature: undefined FUN_00482dc4(void)
// Decompiled by Ghidra 12.1.2


int FUN_00482dc4(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (DAT_03014fdc == 0) {
    iVar3 = _strcmp((char *)param_1,(char *)param_2);
  }
  else {
    FUN_00489a54(0x19);
    do {
      uVar4 = (ushort)*param_1;
      pbVar7 = param_1 + 1;
      if ((*(byte *)((int)&DAT_030150e0 + uVar4 + 1) & 4) != 0) {
        bVar1 = *pbVar7;
        if (bVar1 == 0) {
          uVar4 = 0;
        }
        else {
          pbVar7 = param_1 + 2;
          uVar4 = CONCAT11(*param_1,bVar1);
        }
      }
      bVar1 = *param_2;
      uVar5 = (ushort)bVar1;
      pbVar6 = param_2 + 1;
      if ((*(byte *)((int)&DAT_030150e0 + bVar1 + 1) & 4) != 0) {
        bVar2 = *pbVar6;
        if (bVar2 == 0) {
          uVar5 = 0;
        }
        else {
          pbVar6 = param_2 + 2;
          uVar5 = CONCAT11(bVar1,bVar2);
        }
      }
      if (uVar4 != uVar5) {
        FUN_00489ab5(0x19);
        return (-(uint)(uVar5 < uVar4) & 2) - 1;
      }
      param_2 = pbVar6;
      param_1 = pbVar7;
    } while (uVar4 != 0);
    FUN_00489ab5(0x19);
    iVar3 = 0;
  }
  return iVar3;
}


// Function: FUN_0048360f
// Entry:    0048360f
// Size:     239 bytes
// Conv:     unknown
// Signature: undefined FUN_0048360f(void)
// Decompiled by Ghidra 12.1.2


int FUN_0048360f(byte *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_3 == 0) {
    return 0;
  }
  if (DAT_03014fdc == 0) {
    iVar3 = _strncmp((char *)param_1,(char *)param_2,param_3);
    return iVar3;
  }
  FUN_00489a54(0x19);
  sVar2 = param_3;
  do {
    param_3 = sVar2 - 1;
    uVar5 = (ushort)*param_1;
    pbVar7 = param_1 + 1;
    if ((*(byte *)((int)&DAT_030150e0 + uVar5 + 1) & 4) == 0) {
LAB_00483690:
      bVar1 = *param_2;
      uVar4 = (uint)(ushort)bVar1;
      pbVar6 = param_2 + 1;
      if ((*(byte *)((int)&DAT_030150e0 + (ushort)bVar1 + 1) & 4) != 0) {
        if (param_3 != 0) {
          param_3 = sVar2 - 2;
          if (*pbVar6 != 0) {
            uVar4 = (uint)CONCAT11(bVar1,*pbVar6);
            pbVar6 = param_2 + 2;
            goto LAB_004836bd;
          }
        }
        uVar4 = 0;
      }
    }
    else {
      if (param_3 != 0) {
        bVar1 = *pbVar7;
        if (bVar1 == 0) {
          uVar5 = 0;
        }
        else {
          pbVar7 = param_1 + 2;
          uVar5 = CONCAT11(*param_1,bVar1);
        }
        goto LAB_00483690;
      }
      uVar4 = (uint)*param_2;
      uVar5 = 0;
      pbVar6 = param_2;
      if ((*(byte *)((int)&DAT_030150e0 + uVar4 + 1) & 4) != 0) {
LAB_004836ef:
        FUN_00489ab5(0x19);
        return 0;
      }
    }
LAB_004836bd:
    if (uVar5 != (ushort)uVar4) {
      FUN_00489ab5(0x19);
      return (-(uint)((ushort)uVar4 < uVar5) & 2) - 1;
    }
    if ((uVar5 == 0) || (param_2 = pbVar6, param_1 = pbVar7, sVar2 = param_3, param_3 == 0))
    goto LAB_004836ef;
  } while( true );
}


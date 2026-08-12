// Function: FUN_004858d7
// Entry:    004858d7
// Size:     151 bytes
// Conv:     unknown
// Signature: undefined FUN_004858d7(void)
// Decompiled by Ghidra 12.1.2


byte * FUN_004858d7(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (DAT_03014fdc == 0) {
    param_1 = (byte *)FUN_00483ed0(param_1,param_2);
  }
  else {
    FUN_00489a54(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar2 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_030150e0 + uVar2 + 1) & 4) == 0) {
        pbVar3 = param_1;
        if (param_2 == uVar2) break;
      }
      else {
        pbVar3 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_00489ab5(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_00489ab5(0x19);
          return param_1;
        }
      }
      param_1 = pbVar3 + 1;
    }
    FUN_00489ab5(0x19);
    param_1 = (byte *)(~-(uint)(param_2 != uVar2) & (uint)param_1);
  }
  return param_1;
}


// Function: FUN_0041bfe0
// Entry:    0041bfe0
// Size:     147 bytes
// Conv:     unknown
// Signature: undefined FUN_0041bfe0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041bfe0(byte *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  byte extraout_AL;
  undefined4 in_EAX;
  undefined3 uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  
  if (param_1 != (byte *)0x0) {
    uVar2 = (undefined3)((uint)in_EAX >> 8);
    bVar5 = *param_1;
    while (bVar5 != 0) {
      bVar5 = *param_1;
      pbVar4 = param_1 + 1;
      if ((bVar5 & 0x80) == 0x80) {
        bVar1 = *pbVar4;
        pbVar4 = param_1 + 2;
        if (bVar1 == 0) break;
        uVar3 = (uint)bVar1 << 8 |
                CONCAT31((int3)(((uint)(ushort)((uint3)uVar2 >> 8) << 0x10) >> 8),bVar5);
        FUN_0041c4d0(uVar3);
        if ((param_3 == 0) || (uVar2 = extraout_var, extraout_AL != 0x20)) {
          bVar5 = extraout_AL;
          if (extraout_AL != 0) goto LAB_0041c059;
          FUN_00406530(uVar3);
          uVar2 = extraout_var_00;
        }
      }
      else if ((param_3 == 0) || (bVar5 != 0x20)) {
LAB_0041c059:
        FUN_00406570(bVar5);
        uVar2 = extraout_var_01;
      }
      param_1 = pbVar4;
      bVar5 = *pbVar4;
    }
    FUN_00406570(0);
  }
  return;
}


// Function: FUN_0043db70
// Entry:    0043db70
// Size:     303 bytes
// Conv:     unknown
// Signature: undefined FUN_0043db70(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_0043db70(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  
  puVar8 = (undefined1 *)(param_5 + 0x84);
  uVar5 = (((uint)*(byte *)(param_5 + 0x80) * 0x100 + (uint)*(byte *)(param_5 + 0x81)) * 0x100 +
          (uint)*(byte *)(param_5 + 0x82)) * 0x100 + (uint)*(byte *)(param_5 + 0x83);
  param_5 = 0;
  if (uVar5 != 0) {
    do {
      iVar9 = ((uint)CONCAT11(*puVar8,puVar8[1]) * 0x100 + (uint)(byte)puVar8[2]) * 0x100 +
              (uint)(byte)puVar8[3];
      uVar1 = puVar8[8];
      uVar7 = (((uint)(byte)puVar8[4] * 0x100 + (uint)(byte)puVar8[5]) * 0x100 +
              (uint)(byte)puVar8[6]) * 0x100 + (uint)(byte)puVar8[7];
      uVar2 = puVar8[9];
      bVar3 = puVar8[10];
      bVar4 = puVar8[0xb];
      if ((uVar7 & 3) != 0) {
        FUN_0043d5f0(param_1,0,param_3,iVar9,s_ICC_profile_tag_start_not_a_mult_02fb16e8);
      }
      if ((param_4 < uVar7) ||
         (param_4 - uVar7 <
          ((uint)CONCAT11(uVar1,uVar2) * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4)) {
        uVar6 = FUN_0043d5f0(param_1,param_2,param_3,iVar9,
                             s_ICC_profile_tag_outside_profile_02fb16c8);
        return uVar6;
      }
      puVar8 = puVar8 + 0xc;
      param_5 = param_5 + 1;
    } while (param_5 < uVar5);
  }
  return 1;
}


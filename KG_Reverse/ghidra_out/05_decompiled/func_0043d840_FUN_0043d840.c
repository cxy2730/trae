// Function: FUN_0043d840
// Entry:    0043d840
// Size:     801 bytes
// Conv:     unknown
// Signature: undefined FUN_0043d840(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_0043d840(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,byte *param_5,
            byte param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  bool bVar6;
  char *pcVar7;
  
  uVar1 = (((uint)*param_5 * 0x100 + (uint)param_5[1]) * 0x100 + (uint)param_5[2]) * 0x100 +
          (uint)param_5[3];
  if (uVar1 != param_4) {
    uVar2 = FUN_0043d5f0(param_1,param_2,param_3,uVar1,s_length_does_not_match_profile_02fb16a8);
    return uVar2;
  }
  uVar1 = (((uint)param_5[0x80] * 0x100 + (uint)param_5[0x81]) * 0x100 + (uint)param_5[0x82]) *
          0x100 + (uint)param_5[0x83];
  if ((0x1555554a < uVar1) || (param_4 < (uVar1 * 3 + 0x21) * 4)) {
    pcVar7 = s_tag_count_too_large_02fb14f8;
LAB_0043db4b:
    uVar2 = FUN_0043d5f0(param_1,param_2,param_3,uVar1,pcVar7);
    return uVar2;
  }
  uVar1 = (((uint)param_5[0x40] * 0x100 + (uint)param_5[0x41]) * 0x100 + (uint)param_5[0x42]) *
          0x100 + (uint)param_5[0x43];
  if (0xfffe < uVar1) {
    uVar2 = FUN_0043d5f0(param_1,param_2,param_3,uVar1,s_invalid_rendering_intent_02fb168c);
    return uVar2;
  }
  if (3 < uVar1) {
    FUN_0043d5f0(param_1,0,param_3,uVar1,s_intent_outside_defined_range_02fb166c);
  }
  uVar1 = (((uint)param_5[0x24] * 0x100 + (uint)param_5[0x25]) * 0x100 + (uint)param_5[0x26]) *
          0x100 + (uint)param_5[0x27];
  if (uVar1 != 0x61637370) {
    pcVar7 = s_invalid_signature_02fb1658;
    goto LAB_0043db4b;
  }
  iVar3 = 3;
  bVar6 = true;
  pbVar4 = param_5 + 0x44;
  piVar5 = &DAT_02f9716c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *(int *)pbVar4 == *piVar5;
    pbVar4 = pbVar4 + 4;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    FUN_0043d5f0(param_1,0,param_3,0,s_PCS_illuminant_is_not_D50_02fb163c);
  }
  iVar3 = (((uint)param_5[0x10] * 0x100 + (uint)param_5[0x11]) * 0x100 + (uint)param_5[0x12]) *
          0x100 + (uint)param_5[0x13];
  if (iVar3 == 0x47524159) {
    if ((param_6 & 2) != 0) {
      uVar2 = FUN_0043d5f0(param_1,param_2,param_3,0x47524159,
                           s_Gray_color_space_not_permitted_o_02fb15c0);
      return uVar2;
    }
  }
  else {
    if (iVar3 != 0x52474220) {
      uVar2 = FUN_0043d5f0(param_1,param_2,param_3,iVar3,s_invalid_ICC_profile_color_space_02fb161c)
      ;
      return uVar2;
    }
    if ((param_6 & 2) == 0) {
      uVar2 = FUN_0043d5f0(param_1,param_2,param_3,0x52474220,
                           s_RGB_color_space_not_permitted_on_02fb15ec);
      return uVar2;
    }
  }
  uVar1 = (((uint)param_5[0xc] * 0x100 + (uint)param_5[0xd]) * 0x100 + (uint)param_5[0xe]) * 0x100 +
          (uint)param_5[0xf];
  if (uVar1 < 0x6e6d636d) {
    if (uVar1 != 0x6e6d636c) {
      if (uVar1 == 0x61627374) {
        uVar2 = FUN_0043d5f0(param_1,param_2,param_3,0x61627374,
                             s_invalid_embedded_Abstract_ICC_pr_02fb1570);
        return uVar2;
      }
      if (uVar1 == 0x6c696e6b) {
        uVar2 = FUN_0043d5f0(param_1,param_2,param_3,0x6c696e6b,
                             s_unexpected_DeviceLink_ICC_profil_02fb1598);
        return uVar2;
      }
      if (uVar1 == 0x6d6e7472) goto LAB_0043daed;
      goto LAB_0043dadb;
    }
    pcVar7 = s_unexpected_NamedColor_ICC_profil_02fb1548;
    uVar1 = 0x6e6d636c;
  }
  else {
    if (((uVar1 == 0x70727472) || (uVar1 == 0x73636e72)) || (uVar1 == 0x73706163))
    goto LAB_0043daed;
LAB_0043dadb:
    pcVar7 = s_unrecognized_ICC_profile_class_02fb1528;
  }
  FUN_0043d5f0(param_1,0,param_3,uVar1,pcVar7);
LAB_0043daed:
  iVar3 = (((uint)param_5[0x14] * 0x100 + (uint)param_5[0x15]) * 0x100 + (uint)param_5[0x16]) *
          0x100 + (uint)param_5[0x17];
  if ((iVar3 != 0x4c616220) && (iVar3 != 0x58595a20)) {
    uVar2 = FUN_0043d5f0(param_1,param_2,param_3,iVar3,s_unexpected_ICC_PCS_encoding_02fb150c);
    return uVar2;
  }
  return 1;
}


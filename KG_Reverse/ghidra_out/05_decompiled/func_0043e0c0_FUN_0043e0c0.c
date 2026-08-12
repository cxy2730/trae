// Function: FUN_0043e0c0
// Entry:    0043e0c0
// Size:     520 bytes
// Conv:     unknown
// Signature: undefined FUN_0043e0c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043e0c0(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    FUN_00446560(param_1,s_Image_width_is_zero_in_IHDR_02fb19c8);
  }
  if (param_3 == 0) {
    FUN_00446560(param_1,s_Image_height_is_zero_in_IHDR_02fb19a8);
  }
  bVar1 = *(uint *)(param_1 + 0x290) < param_2;
  if (bVar1) {
    FUN_00446560(param_1,s_Image_width_exceeds_user_limit_i_02fb1980);
  }
  bVar2 = *(uint *)(param_1 + 0x294) < param_3;
  if (bVar2) {
    FUN_00446560(param_1,s_Image_height_exceeds_user_limit_i_02fb1958);
  }
  if (0x7fffffff < param_2) {
    FUN_00446560(param_1,s_Invalid_image_width_in_IHDR_02fb193c);
  }
  if (0x7fffffff < param_3) {
    FUN_00446560(param_1,s_Invalid_image_height_in_IHDR_02fb191c);
  }
  bVar1 = 0x7fffffff < param_3 ||
          (0x7fffffff < param_2 || (bVar2 || (bVar1 || (param_3 == 0 || param_2 == 0))));
  if ((((param_4 != 1) && (param_4 != 2)) && (param_4 != 4)) &&
     ((param_4 != 8 && (param_4 != 0x10)))) {
    FUN_00446560(param_1,s_Invalid_bit_depth_in_IHDR_02fb1900);
    bVar1 = true;
  }
  if (((param_5 < 0) || (param_5 == 1)) || ((param_5 == 5 || (6 < param_5)))) {
    FUN_00446560(param_1,s_Invalid_color_type_in_IHDR_02fb18e4);
    bVar1 = true;
  }
  if (param_5 == 3) {
    if (param_4 < 9) goto LAB_0043e1f9;
  }
  else if ((((param_5 != 2) && (param_5 != 4)) && (param_5 != 6)) || (7 < param_4))
  goto LAB_0043e1f9;
  FUN_00446560(param_1,s_Invalid_color_type_bit_depth_com_02fb18b0);
  bVar1 = true;
LAB_0043e1f9:
  if (1 < param_6) {
    FUN_00446560(param_1,s_Unknown_interlace_method_in_IHDR_02fb188c);
    bVar1 = true;
  }
  if (param_7 != 0) {
    FUN_00446560(param_1,s_Unknown_compression_method_in_IH_02fb1868);
    bVar1 = true;
  }
  if (((*(uint *)(param_1 + 0x74) & 0x1000) != 0) && (*(int *)(param_1 + 0x268) != 0)) {
    FUN_00446560(param_1,s_MNG_features_are_not_allowed_in_a_02fb1834);
  }
  if (param_8 != 0) {
    if ((((*(byte *)(param_1 + 0x268) & 4) == 0) || (param_8 != 0x40)) ||
       (((*(uint *)(param_1 + 0x74) & 0x1000) != 0 || ((param_5 != 2 && (param_5 != 6)))))) {
      FUN_00446560(param_1,s_Unknown_filter_method_in_IHDR_02fb1814);
      bVar1 = true;
    }
    if ((*(uint *)(param_1 + 0x74) & 0x1000) != 0) {
      FUN_00446560(param_1,s_Invalid_filter_method_in_IHDR_02fb17f4);
      FUN_004463d0(param_1,s_Invalid_IHDR_data_02fb17e0);
      return;
    }
  }
  if (bVar1) {
    FUN_004463d0(param_1,s_Invalid_IHDR_data_02fb17e0);
  }
  return;
}


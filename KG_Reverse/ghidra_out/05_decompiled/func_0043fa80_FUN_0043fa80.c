// Function: FUN_0043fa80
// Entry:    0043fa80
// Size:     381 bytes
// Conv:     unknown
// Signature: undefined FUN_0043fa80(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043fa80(int *param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int **ppiVar5;
  int *local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_1[1] == 1) {
    if (param_4 == 0) {
      if ((param_1[4] & 8U) == 0) {
        iVar1 = (param_1[4] & 3U) + 1;
      }
      else {
        iVar1 = 1;
      }
      param_4 = param_1[2] * iVar1;
    }
    uVar3 = param_4;
    if ((int)param_4 < 0) {
      uVar3 = -param_4;
    }
    if ((*param_1 != 0) && (param_3 != 0)) {
      uVar4 = param_1[4] & 8;
      if (uVar4 == 0) {
        iVar1 = (param_1[4] & 3U) + 1;
      }
      else {
        iVar1 = 1;
      }
      if ((uint)(param_1[2] * iVar1) <= uVar3) {
        if ((uVar4 != 0) && ((param_1[6] == 0 || (param_5 == 0)))) {
          uVar2 = FUN_0043eea0(param_1,s_png_image_finish_read_color_map__02fb1c60);
          return uVar2;
        }
        ppiVar5 = &local_2c;
        for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppiVar5 = (int *)0x0;
          ppiVar5 = ppiVar5 + 1;
        }
        uVar2 = 0;
        local_2c = param_1;
        local_28 = param_3;
        local_20 = param_5;
        local_1c = param_2;
        local_18 = 0;
        local_24 = param_4;
        if (uVar4 == 0) {
          uVar2 = FUN_00446a50(param_1,&LAB_00441a00,&local_2c);
        }
        else {
          iVar1 = FUN_00446a50(param_1,&LAB_0043fc00,&local_2c);
          if (iVar1 != 0) {
            iVar1 = FUN_00446a50(param_1,&LAB_00441470,&local_2c);
            if (iVar1 != 0) {
              FUN_0043edc0(param_1);
              return 1;
            }
          }
        }
        FUN_0043edc0(param_1);
        return uVar2;
      }
    }
    uVar2 = FUN_0043eea0(param_1,s_png_image_finish_read__invalid_a_02fb1c38);
    return uVar2;
  }
  uVar2 = FUN_0043eea0(param_1,s_png_image_finish_read__damaged_P_02fb1c04);
  return uVar2;
}


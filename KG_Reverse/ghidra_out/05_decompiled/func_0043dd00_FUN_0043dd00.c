// Function: FUN_0043dd00
// Entry:    0043dd00
// Size:     533 bytes
// Conv:     unknown
// Signature: undefined FUN_0043dd00(void)
// Decompiled by Ghidra 12.1.2


int FUN_0043dd00(undefined4 param_1,undefined1 *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  uVar3 = 0x10000;
  local_8 = 0;
  local_4 = 0;
  piVar2 = &DAT_02f97188;
  do {
    if (((((((uint)(byte)param_2[0x54] * 0x100 + (uint)(byte)param_2[0x55]) * 0x100 +
           (uint)(byte)param_2[0x56]) * 0x100 + (uint)(byte)param_2[0x57] == piVar2[-1]) &&
         ((((uint)(byte)param_2[0x58] * 0x100 + (uint)(byte)param_2[0x59]) * 0x100 +
          (uint)(byte)param_2[0x5a]) * 0x100 + (uint)(byte)param_2[0x5b] == *piVar2)) &&
        ((((uint)(byte)param_2[0x5c] * 0x100 + (uint)(byte)param_2[0x5d]) * 0x100 +
         (uint)(byte)param_2[0x5e]) * 0x100 + (uint)(byte)param_2[0x5f] == piVar2[1])) &&
       ((((uint)(byte)param_2[0x60] * 0x100 + (uint)(byte)param_2[0x61]) * 0x100 +
        (uint)(byte)param_2[0x62]) * 0x100 + (uint)(byte)param_2[99] == piVar2[2])) {
      if (iVar4 == 0) {
        iVar4 = ((uint)CONCAT11(*param_2,param_2[1]) * 0x100 + (uint)(byte)param_2[2]) * 0x100 +
                (uint)(byte)param_2[3];
        uVar3 = ((uint)CONCAT11(param_2[0x40],param_2[0x41]) * 0x100 + (uint)(byte)param_2[0x42]) *
                0x100 + (uint)(byte)param_2[0x43];
      }
      if ((iVar4 == piVar2[-2]) && (uVar3 == *(ushort *)((int)piVar2 + 0xe))) {
        if (param_3 == 0) {
          uVar1 = FUN_004474e0(0,0,0);
          param_3 = FUN_004474e0(uVar1,param_2,iVar4);
        }
        if (param_3 == piVar2[-4]) {
          if (local_8 == 0) {
            uVar1 = FUN_00446da0(0,0,0);
            local_8 = FUN_00446da0(uVar1,param_2,iVar4);
          }
          if (local_8 == piVar2[-3]) {
            local_4 = local_4 * 0x20;
            if ((&DAT_02f97195)[local_4] == '\0') {
              if ((&DAT_02f97194)[local_4] != '\0') goto LAB_0043df04;
              uVar1 = 0;
              pcVar5 = s_out_of_date_sRGB_profile_with_no_02fb1714;
            }
            else {
              uVar1 = 2;
              pcVar5 = s_known_incorrect_sRGB_profile_02fb1740;
            }
            FUN_00446810(param_1,pcVar5,uVar1);
LAB_0043df04:
            return (byte)(&DAT_02f97195)[local_4] + 1;
          }
        }
      }
      if ((char)piVar2[3] != '\0') {
        FUN_004465b0(param_1,s_copyright_violation__edited_ICC_p_02fb1760);
      }
    }
    piVar2 = piVar2 + 8;
    local_4 = local_4 + 1;
    if (0x2f97267 < (int)piVar2) {
      return 0;
    }
  } while( true );
}


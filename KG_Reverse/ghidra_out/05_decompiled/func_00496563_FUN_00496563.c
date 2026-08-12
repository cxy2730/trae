// Function: FUN_00496563
// Entry:    00496563
// Size:     232 bytes
// Conv:     unknown
// Signature: undefined FUN_00496563(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00496563(uint param_1,int *param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_10 [4];
  int *local_c;
  int local_8;
  
  if (param_1 < 0x112) {
    if (param_1 == 0x111) {
      iVar2 = FUN_00497bac(0,(uint)param_2 >> 0x10 | 0xbd110000,0,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = 1;
        return 1;
      }
      return 1;
    }
    if (0x2a < param_1) {
      if ((param_1 < 0x30) || (param_1 == 0x39)) goto LAB_004965f7;
      if (param_1 == 0x4e) {
        local_c = param_4;
        local_8 = param_3;
        uVar1 = FUN_00497bac(0,*(uint *)(param_3 + 8) & 0xffff | 0xbc4e0000,&local_c,0);
        return uVar1;
      }
    }
  }
  else if ((0x113 < param_1) && ((param_1 < 0x116 || (param_1 == 0x210)))) {
LAB_004965f7:
    uVar1 = FUN_00495a59(param_1 + 0xbc00,param_2,param_3,param_4);
    return uVar1;
  }
  if ((0x131 < param_1) && (param_1 < 0x139)) {
    local_8 = param_1 - 0x132;
    local_c = param_2;
    uVar1 = FUN_00495a59(0xbc19,0,local_10,param_4);
    if (*param_4 != 0) {
      return uVar1;
    }
  }
  return 0;
}


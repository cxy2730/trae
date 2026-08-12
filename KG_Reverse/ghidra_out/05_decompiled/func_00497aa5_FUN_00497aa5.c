// Function: FUN_00497aa5
// Entry:    00497aa5
// Size:     263 bytes
// Conv:     unknown
// Signature: undefined FUN_00497aa5(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00497aa5(undefined4 param_1,undefined4 *param_2,undefined4 param_3,code *param_4,
                 undefined4 *param_5,uint param_6,undefined4 *param_7)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = param_1;
    param_7[1] = param_4;
    return 1;
  }
  if (param_6 < 0x29) {
    if (param_6 == 0x28) {
      (*param_4)(param_2,param_5[1],*param_5);
      return 1;
    }
    if (param_6 == 2) {
LAB_00497b57:
      uVar1 = (*param_4)(param_2);
      return uVar1;
    }
    if (param_6 == 0xc) {
      (*param_4)();
      return 1;
    }
    if (param_6 != 0xd) {
      if (param_6 == 0x23) {
        uVar1 = (*param_4)();
        return uVar1;
      }
      if (param_6 != 0x26) {
        if (param_6 != 0x27) {
          return 0;
        }
        uVar1 = (*param_4)(param_5[1],*param_5);
        return uVar1;
      }
      (*param_4)(param_5[1],*param_5);
      return 1;
    }
LAB_00497b62:
    (*param_4)(param_2);
  }
  else {
    if (param_6 == 0x29) {
      uVar1 = (*param_4)(param_2,param_5[1],*param_5);
      return uVar1;
    }
    if (param_6 == 0x2c) {
      (*param_4)(param_5);
    }
    else {
      if (param_6 != 0x2d) {
        param_2 = param_5;
        if (param_6 != 0x2e) {
          if (param_6 != 0x2f) {
            return 0;
          }
          goto LAB_00497b57;
        }
        goto LAB_00497b62;
      }
      (*param_4)(param_5,param_2);
    }
    uVar1 = (uint)(param_5[7] == 0);
    param_5[7] = 0;
  }
  return uVar1;
}


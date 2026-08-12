// Function: FUN_0044be60
// Entry:    0044be60
// Size:     252 bytes
// Conv:     unknown
// Signature: undefined FUN_0044be60(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0044be60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0044bb60(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    uVar2 = *(uint *)(param_1 + 0x7c) | 0x600000;
  }
  else if (param_2 == 2) {
    uVar2 = *(uint *)(param_1 + 0x7c) | 0x400000;
  }
  else {
    if (param_2 != 3) {
      uVar2 = FUN_004463d0(param_1,s_invalid_error_action_to_rgb_to_g_02fb2c18);
      goto LAB_0044beb5;
    }
    uVar2 = *(uint *)(param_1 + 0x7c) | 0x200000;
  }
  *(uint *)(param_1 + 0x7c) = uVar2;
LAB_0044beb5:
  if (*(char *)(param_1 + 0x157) == '\x03') {
    uVar2 = *(uint *)(param_1 + 0x7c) | 0x1000;
    *(uint *)(param_1 + 0x7c) = uVar2;
  }
  if ((-1 < param_3) && (-1 < param_4)) {
    uVar2 = param_3 + param_4;
    if ((int)uVar2 < 0x186a1) {
      *(undefined1 *)(param_1 + 0x261) = 1;
      *(short *)(param_1 + 0x262) = (short)((uint)(param_3 * 0x8000) / 100000);
      *(short *)(param_1 + 0x264) = (short)((uint)(param_4 * 0x8000) / 100000);
      return param_4 * -0x53b88000;
    }
    if (-1 < param_4) {
      uVar2 = FUN_00446620(param_1,s_ignoring_out_of_range_rgb_to_gra_02fb2be8);
    }
  }
  if ((*(short *)(param_1 + 0x262) == 0) && (*(short *)(param_1 + 0x264) == 0)) {
    *(undefined2 *)(param_1 + 0x262) = 0x1b38;
    *(undefined2 *)(param_1 + 0x264) = 0x5b8a;
  }
  return uVar2;
}


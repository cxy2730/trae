// Function: FUN_0044fe60
// Entry:    0044fe60
// Size:     145 bytes
// Conv:     unknown
// Signature: undefined FUN_0044fe60(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044fe60(int param_1,undefined2 param_2,int param_3)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x74) & 0x8000) == 0) {
    if (*(char *)(param_1 + 0x157) == '\0') {
      if (*(byte *)(param_1 + 0x158) < 8) {
        FUN_00446650(param_1,s_png_set_filler_is_invalid_for_lo_02fb2d50);
        return;
      }
      *(undefined1 *)(param_1 + 0x15c) = 2;
    }
    else {
      if (*(char *)(param_1 + 0x157) != '\x02') {
        FUN_00446650(param_1,s_png_set_filler__inappropriate_co_02fb2d88);
        return;
      }
      *(undefined1 *)(param_1 + 0x15c) = 4;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x160) = param_2;
  }
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x8000;
  if (param_3 != 1) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffff7f;
    return;
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x80;
  return;
}


// Function: FUN_0041cb90
// Entry:    0041cb90
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined FUN_0041cb90(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0041cb90(uint param_1)

{
  if (param_1 < 0x80000102) {
    if (param_1 != 0x80000101) {
      switch(param_1) {
      case 0x80000002:
      case 0x80000004:
      case 0x80000005:
      case 0x80000006:
        goto switchD_0041cba7_caseD_80000002;
      case 0x80000003:
      case 0x80000008:
        return 8;
      default:
        return 0;
      }
    }
    return 1;
  }
  if (param_1 < 0x80000402) {
    if (param_1 == 0x80000401) {
      return 8;
    }
    if (param_1 == 0x80000201) {
      return 2;
    }
    if (param_1 != 0x80000301) {
      return 0;
    }
  }
  else if (param_1 != 0x80000501) {
    if (param_1 != 0x80000601) {
      return 0;
    }
    return 8;
  }
switchD_0041cba7_caseD_80000002:
  return 4;
}


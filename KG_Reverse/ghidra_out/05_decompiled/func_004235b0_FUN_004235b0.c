// Function: FUN_004235b0
// Entry:    004235b0
// Size:     256 bytes
// Conv:     unknown
// Signature: undefined FUN_004235b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004235b0(int *param_1,int param_2)

{
  char cVar1;
  
  if (5 < param_2) {
    cVar1 = (char)*param_1;
    if ((cVar1 == 'B') && (*(char *)((int)param_1 + 1) == 'M')) {
      return 2;
    }
    if ((cVar1 == -1) && (*(char *)((int)param_1 + 1) == -0x28)) {
      return 1;
    }
    if (*param_1 == 0x474e5089) {
      return 8;
    }
    if ((short)*param_1 == 0) {
      if ((*(short *)((int)param_1 + 2) == 1) && ((short)param_1[1] != 0)) {
        return 3;
      }
      if ((*(short *)((int)param_1 + 2) == 2) && ((short)param_1[1] != 0)) {
        return 4;
      }
    }
    if ((((cVar1 == 'G') && (*(char *)((int)param_1 + 1) == 'I')) &&
        (*(char *)((int)param_1 + 2) == 'F')) &&
       (((*(char *)((int)param_1 + 3) == '8' &&
         (((char)param_1[1] == '7' || ((char)param_1[1] == '9')))) &&
        (*(char *)((int)param_1 + 5) == 'a')))) {
      return 5;
    }
    if (cVar1 == '\n') {
      if (((*(byte *)((int)param_1 + 1) < 6) && (*(char *)((int)param_1 + 2) == '\x01')) &&
         (*(char *)((int)param_1 + 3) == '\b')) {
        return 6;
      }
      if (((*(char *)((int)param_1 + 1) == '\x03') && (*(char *)((int)param_1 + 2) == '\x01')) &&
         (*(char *)((int)param_1 + 3) == '\x01')) {
        return 7;
      }
    }
  }
  return 0;
}


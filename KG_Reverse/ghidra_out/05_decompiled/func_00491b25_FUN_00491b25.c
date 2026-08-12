// Function: FUN_00491b25
// Entry:    00491b25
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_00491b25(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00491b25(undefined4 *param_1,ushort *param_2,undefined4 param_3)

{
  if (*param_2 < 0x76c) {
    *param_1 = 0;
  }
  else {
    FUN_00491ad9(*param_2,param_2[1],param_2[3],param_2[4],param_2[5],param_2[6],param_3);
    *param_1 = param_2;
  }
  return param_1;
}


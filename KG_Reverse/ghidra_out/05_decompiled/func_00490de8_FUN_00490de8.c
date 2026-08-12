// Function: FUN_00490de8
// Entry:    00490de8
// Size:     52 bytes
// Conv:     unknown
// Signature: undefined FUN_00490de8(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00490de8(undefined4 *param_1,char param_2,size_t param_3)

{
  *param_1 = PTR_DAT_02fd8088;
  if (0 < (int)param_3) {
    FUN_00493043(param_3);
    _memset((void *)*param_1,(int)param_2,param_3);
  }
  return param_1;
}


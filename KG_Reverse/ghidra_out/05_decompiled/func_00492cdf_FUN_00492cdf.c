// Function: FUN_00492cdf
// Entry:    00492cdf
// Size:     69 bytes
// Conv:     unknown
// Signature: undefined FUN_00492cdf(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00492cdf(int param_1,int param_2,int param_3)

{
  void *_Dst;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00492f40(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_3 != 0) {
    _Dst = (void *)FUN_00492f17(param_2 << 2);
    *(void **)(param_1 + 4) = _Dst;
    _memset(_Dst,0,param_2 << 2);
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}


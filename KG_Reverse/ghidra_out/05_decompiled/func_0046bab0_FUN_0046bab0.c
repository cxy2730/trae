// Function: FUN_0046bab0
// Entry:    0046bab0
// Size:     31 bytes
// Conv:     unknown
// Signature: undefined FUN_0046bab0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0046bab0(undefined4 *param_1,uint param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,param_2 & 0xff,(LPCSTR)0x0);
  *param_1 = pvVar1;
  return param_1;
}


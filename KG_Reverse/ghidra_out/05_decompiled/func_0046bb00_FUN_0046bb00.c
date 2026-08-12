// Function: FUN_0046bb00
// Entry:    0046bb00
// Size:     37 bytes
// Conv:     unknown
// Signature: undefined FUN_0046bb00(void)
// Decompiled by Ghidra 12.1.2


LONG * __thiscall FUN_0046bb00(LONG *param_1,LONG param_2)

{
  HANDLE pvVar1;
  
  *param_1 = param_2;
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_2,0x7fffffff,&DAT_02fff090);
  param_1[1] = (LONG)pvVar1;
  return param_1;
}


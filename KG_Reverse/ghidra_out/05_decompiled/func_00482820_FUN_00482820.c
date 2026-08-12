// Function: FUN_00482820
// Entry:    00482820
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_00482820(void)
// Decompiled by Ghidra 12.1.2


void FUN_00482820(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x482848,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


// Function: FUN_00446b50
// Entry:    00446b50
// Size:     52 bytes
// Conv:     unknown
// Signature: undefined FUN_00446b50(void)
// Decompiled by Ghidra 12.1.2


void * FUN_00446b50(int param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_1 != 0) && (*(code **)(param_1 + 0x274) != (code *)0x0)) {
    pvVar1 = (void *)(**(code **)(param_1 + 0x274))(param_1,param_2);
    return pvVar1;
  }
  pvVar1 = _malloc(param_2);
  return pvVar1;
}


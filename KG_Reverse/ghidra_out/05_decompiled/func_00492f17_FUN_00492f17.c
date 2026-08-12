// Function: FUN_00492f17
// Entry:    00492f17
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_00492f17(void)
// Decompiled by Ghidra 12.1.2


void * FUN_00492f17(size_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  while( true ) {
    pvVar1 = _malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (PTR_FUN_02fd8084 == (undefined *)0x0) break;
    iVar2 = (*(code *)PTR_FUN_02fd8084)(param_1);
    if (iVar2 == 0) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


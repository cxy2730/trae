// Function: FUN_0049c87a
// Entry:    0049c87a
// Size:     30 bytes
// Conv:     unknown
// Signature: undefined FUN_0049c87a(void)
// Decompiled by Ghidra 12.1.2


HLOCAL FUN_0049c87a(SIZE_T param_1)

{
  HLOCAL pvVar1;
  
  pvVar1 = LocalAlloc(0x40,param_1);
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_0049132a();
  }
  return pvVar1;
}


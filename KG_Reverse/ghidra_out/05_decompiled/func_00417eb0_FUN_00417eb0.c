// Function: FUN_00417eb0
// Entry:    00417eb0
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_00417eb0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00417eb0(int *param_1)

{
  if (param_1[0x6d] != 0) {
    param_1[0x6d] = 0;
    FUN_00418af0();
    (**(code **)(*param_1 + 0x58))();
  }
  return;
}


// Function: FUN_00492a20
// Entry:    00492a20
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined FUN_00492a20(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00492a20(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    FUN_00492f40(param_1);
    param_1 = puVar1;
  }
  return;
}


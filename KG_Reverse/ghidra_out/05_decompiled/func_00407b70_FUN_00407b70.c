// Function: FUN_00407b70
// Entry:    00407b70
// Size:     67 bytes
// Conv:     unknown
// Signature: undefined FUN_00407b70(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00407b70(int param_1)

{
  FUN_00494b19();
  if ((param_1 + 0xd0 != 0) && (*(int *)(param_1 + 0xec) != 0)) {
    FUN_00497531(param_1,0,0,0,0,0x13);
    FUN_00497531(param_1 + 0xd0,0,0,0,0,0x13);
  }
  return;
}


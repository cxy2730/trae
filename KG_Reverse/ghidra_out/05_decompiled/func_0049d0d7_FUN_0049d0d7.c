// Function: FUN_0049d0d7
// Entry:    0049d0d7
// Size:     54 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d0d7(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0049d0d7(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xac) == 0) || (*(int *)(*(int *)(param_1 + 0xac) + 0x10) != 5)) {
    iVar1 = FUN_0049c724();
    if (*(char *)(iVar1 + 0x14) == '\0') {
      FUN_0049d0a7();
    }
  }
  if (*(code **)(param_1 + 0xbc) != (code *)0x0) {
    (**(code **)(param_1 + 0xbc))();
  }
  return *(undefined4 *)(param_1 + 0x38);
}


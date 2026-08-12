// Function: FUN_004372a0
// Entry:    004372a0
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_004372a0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004372a0(int param_1)

{
  FUN_00437860();
  if (*(HGDIOBJ *)(param_1 + 0xc0) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc0));
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00492f40(*(int *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00492f40(*(int *)(param_1 + 0xb0));
  }
  FUN_004372f0();
  return;
}

